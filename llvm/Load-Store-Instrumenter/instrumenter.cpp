//===-- Instrumenter.cpp - memory error detector ------------*- C++ -*-===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//
//
// This file is a part of Instrumenter, an address sanity checker.
// Details of the algorithm:
//  http://code.google.com/p/address-sanitizer/wiki/InstrumenterAlgorithm
//
//===----------------------------------------------------------------------===//

#define DEBUG_TYPE "instrumenter"

#include "llvm/IR/Function.h"
#include "llvm/IR/IRBuilder.h"
#include "llvm/IR/InlineAsm.h"
#include "llvm/IR/IntrinsicInst.h"
#include "llvm/IR/LLVMContext.h"
#include "llvm/IR/Module.h"
#include "llvm/IR/Type.h"
#include "llvm/IR/Instruction.h"
#include "llvm/IR/InstIterator.h"
#include "llvm/ADT/SmallSet.h"
#include "llvm/ADT/SmallString.h"
#include "llvm/ADT/SmallVector.h"
#include "llvm/ADT/StringExtras.h"
#include "llvm/Support/CommandLine.h"
#include "llvm/Support/DataTypes.h"
#include "llvm/Support/Debug.h"
#include "llvm/Support/raw_ostream.h"
#include "llvm/IR/DataLayout.h"
#include "llvm/Transforms/Instrumentation.h"
#include "llvm/Transforms/Utils/BasicBlockUtils.h"
#include "llvm/Transforms/Utils/ModuleUtils.h"
#include "llvm/InitializePasses.h"
#include "llvm-c/Initialization.h"
#include "llvm/IR/LegacyPassManager.h"
#include "llvm/Transforms/IPO/PassManagerBuilder.h"

#include <string>
#include <algorithm>

using namespace llvm;

// We only support 5 sizes(powers of two): 1, 2, 4, 8, 16.
static const size_t numAccessesSizes = 5;

namespace {

/// Instrumenter: instrument the memory accesses.
    struct Instrumenter : public FunctionPass {
        Instrumenter();

        virtual StringRef getPassName() const override;

        void instrementMemoryAccess(Instruction *ins);

        void instrumentAddress(Instruction *origIns, IRBuilder<> &IRB,
                               Value *addr, uint32_t typeSize, bool isWrite);

        bool instrumentMemIntrinsic(MemIntrinsic *mInst);

        void instrumentMemIntrinsicParam(Instruction *origIns, Value *addr,
                                         Value *size,
                                         Instruction *insertBefore, bool isWrite);

        Instruction *insertAccessCallback(Instruction *insertBefore, Value *addr,
                                          bool isWrite, size_t accessSizeArrayIndex);

        virtual bool runOnFunction(Function &F);

        virtual bool doInitialization(Module &M);

        virtual bool doFinalization(Module &M);

        static char ID;  // Pass identification, replacement for typeid

    private:
        LLVMContext *context;
        DataLayout TD = DataLayout(llvm::StringRef());
        unsigned LongSize;
        // READ/WRITE access
        FunctionCallee accessCallback[2][numAccessesSizes];
        Function *ctorFunction;
        Type *intptrType;
        Type *intptrPtrType;
        InlineAsm *noopAsm;
    };

}  // namespace

char Instrumenter::ID = 0;
//static RegisterPass<Instrumenter> instrumenter("instrumenter", "Instrumenting READ/WRITE pass", false, false);
static cl::opt<int> maxInsPerBB("max-ins-per-bb",
                                cl::init(10000),
                                cl::desc("maximal number of instructions to instrument in any given BB"),
                                cl::Hidden);
static cl::opt<bool> toInstrumentStack("instrument-stack-variables",
                                       cl::desc("instrument stack variables"), cl::Hidden, cl::init(false));
static cl::opt<bool> toInstrumentReads("instrument-reads",
                                       cl::desc("instrument read instructions"), cl::Hidden, cl::init(true));
static cl::opt<bool> toInstrumentWrites("instrument-writes",
                                        cl::desc("instrument write instructions"), cl::Hidden, cl::init(true));
static cl::opt<bool> toInstrumentAtomics("instrument-atomics",
                                         cl::desc("instrument atomic instructions (rmw, cmpxchg)"),
                                         cl::Hidden, cl::init(true));

static RegisterPass<Instrumenter> X("Instrumenter", "Instrumenter Pass");

// https://llvm.org/doxygen/classllvm_1_1PassManagerBuilder.html#a9c1dc350129dbf90debeeaa58754841e
static RegisterStandardPasses Z(
        PassManagerBuilder::EP_FullLinkTimeOptimizationLast,
        [](const PassManagerBuilder &Builder,
           legacy::PassManagerBase &PM) { PM.add(new Instrumenter()); });

Instrumenter::Instrumenter() : FunctionPass(ID) {}

//FunctionPass *llvm::createInstrumenterPass() {
//  errs() << "\n^^^^^^^^^^^^^^^^^^Instrumenter initialization. CreateInstrumenterPass" << "\n";
//return new Instrumenter();
//}
StringRef Instrumenter::getPassName() const {
    return "Instrumenter";
}

// virtual: define some initialization for the whole module
bool Instrumenter::doInitialization(Module &M) {

    errs() << "\n^^^^^^^^^^^^^^^^^^Instrumenter initialization^^^^^^^^^^^^^^^^^^^^^^^^^" << "\n";
    TD = M.getDataLayout();

    context = &(M.getContext());
    LongSize = TD.getPointerSizeInBits();
    intptrType = Type::getIntNTy(*context, LongSize);
    intptrPtrType = PointerType::get(intptrType, 0);

// Creating the contrunctor module "instrumenter"
    ctorFunction = Function::Create(
            FunctionType::get(Type::getVoidTy(*context), false),
            GlobalValue::InternalLinkage, "instrumenter", &M);
//   errs() << "\nHello: ctorFunction: " << ctorFunction->getName() << "\n";

    BasicBlock *ctorBB = BasicBlock::Create(*context, "", ctorFunction);
    Instruction *ctorinsertBefore = ReturnInst::Create(*context, ctorBB);

    IRBuilder<> IRB(ctorinsertBefore);

// We insert an empty inline asm after __asan_report* to avoid callback merge.
    noopAsm = InlineAsm::get(FunctionType::get(IRB.getVoidTy(), false),
                             StringRef(""), StringRef(""),
/*hasSideEffects=*/true);

// Create instrumenation callbacks.
    for (size_t isWriteAccess = 0; isWriteAccess <= 1; isWriteAccess++) {
        for (size_t accessSizeArrayIndex = 0; accessSizeArrayIndex < numAccessesSizes;
             accessSizeArrayIndex++) {
// isWrite and typeSize are encoded in the function name.
            std::string funcName;
            if (isWriteAccess) {
                funcName = std::string("store_") + itostr(1 << accessSizeArrayIndex) + "bytes";
            } else {
                funcName = std::string("load_") + itostr(1 << accessSizeArrayIndex) + "bytes";
            }
// If we are merging crash callbacks, they have two parameters.
            accessCallback[isWriteAccess][accessSizeArrayIndex] = M.getOrInsertFunction(
                    funcName, IRB.getVoidTy(), intptrType);
        }
    }

// We insert an empty inline asm after __asan_report* to avoid callback merge.
// noopAsm = InlineAsm::get(FunctionType::get(IRB.getVoidTy(), false),
//                          StringRef(""), StringRef(""), true);
    return true;
}

// and set isWrite. Otherwise return NULL.
static Value *isInterestingMemoryAccess(Instruction *ins, bool *isWrite) {
    if (LoadInst *LI = dyn_cast<LoadInst>(ins)) {

        if (!toInstrumentReads) return NULL;
//    errs() << "instruction is a load instruction\n\n";
        *isWrite = false;
        return LI->getPointerOperand();
    }
    if (StoreInst *SI = dyn_cast<StoreInst>(ins)) {
        if (!toInstrumentWrites) return NULL;
//   errs() << "instruction is a store instruction\n\n";
        *isWrite = true;
        return SI->getPointerOperand();
    }
    if (AtomicRMWInst *RMW = dyn_cast<AtomicRMWInst>(ins)) {
        if (!toInstrumentAtomics) return NULL;
//  errs() << "instruction is a atomic READ and Write instruction\n\n";
        *isWrite = true;
        return RMW->getPointerOperand();
    }
    if (AtomicCmpXchgInst *XCHG = dyn_cast<AtomicCmpXchgInst>(ins)) {
        if (!toInstrumentAtomics) return NULL;
//  errs() << "instruction is a atomic cmpXchg instruction\n\n";
        *isWrite = true;
        return XCHG->getPointerOperand();
    }
    return NULL;
}

void Instrumenter::instrementMemoryAccess(Instruction *ins) {
    bool isWrite = false;
    Value *addr = isInterestingMemoryAccess(ins, &isWrite);
    assert(addr);

    Type *OrigPtrTy = addr->getType();
    Type *OrigTy = cast<PointerType>(OrigPtrTy)->getElementType();

    assert(OrigTy->isSized());
    uint32_t typeSize = TD.getTypeStoreSizeInBits(OrigTy);

    if (typeSize != 8 && typeSize != 16 &&
        typeSize != 32 && typeSize != 64 && typeSize != 128) {
// Ignore all unusual sizes.
        return;
    }

//  errs() << "typesize is " << typeSize << "at: ";
//  ins->dump();

    IRBuilder<> IRB(ins);
    instrumentAddress(ins, IRB, addr, typeSize, isWrite);
}

// General function call before some given instruction
Instruction *Instrumenter::insertAccessCallback(
        Instruction *insertBefore, Value *addr,
        bool isWrite, size_t accessSizeArrayIndex) {
    IRBuilder<> IRB(insertBefore);
    CallInst *Call = IRB.CreateCall(accessCallback[isWrite][accessSizeArrayIndex], addr);
// We don't do Call->setDoesNotReturn() because the BB already has
// UnreachableInst at the end.
// This noopAsm is required to avoid callback merge.
    IRB.CreateCall(noopAsm);
    return Call;
}

static size_t TypeSizeToSizeIndex(uint32_t typeSize) {
//size_t Res = CountTrailingZeros_32(typeSize / 8);
    size_t log2Base = 0;
    uint32_t currentTypeSize = typeSize;
    while (currentTypeSize != 0) {
        log2Base++;
        currentTypeSize = currentTypeSize >> 1;
    }
    size_t Res = log2Base - 4;
//    errs() << "typesize is " << typeSize << ", res:" << Res;
    assert(Res < numAccessesSizes);
    return Res;
}

void Instrumenter::instrumentAddress(Instruction *origIns,
                                     IRBuilder<> &IRB, Value *addr,
                                     uint32_t typeSize, bool isWrite) {

    Value *actualAddr = IRB.CreatePointerCast(addr, intptrType);
    size_t accessSizeArrayIndex = TypeSizeToSizeIndex(typeSize);
//  errs() << "Type size:" << typeSize << ".Access size index:" << accessSizeArrayIndex << "\n";

// Insert the callback function here.
    insertAccessCallback(origIns, actualAddr, isWrite, accessSizeArrayIndex);
//  ins->dump();
}

bool Instrumenter::doFinalization(Module &M) {
    return false;
}

bool isLocalVariable(Value *value) {
// errs() << "Value id:" << value->getValueID() << "\n";
    return value->getValueID() == 48;
}

bool Instrumenter::runOnFunction(Function &F) {
// If the input function is the function added by myself, don't do anything.
    // errs() << "Function name: " << F.getName() << "\n";
    if (&F == ctorFunction) return false;
    int NumInstrumented = 0;

    bool isWrite;
    // Fill the set of memory operations to instrument.
    for (BasicBlock &bb : F) {
        for (Instruction &ins : bb) {
            if (Value *addr = isInterestingMemoryAccess(&ins, &isWrite)) {
                if (isLocalVariable(addr)) {
                    continue;
                }
                NumInstrumented++;
                instrementMemoryAccess(&ins);
            }
        }
    }
    return NumInstrumented > 0;
}


