/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Subtarget Enumeration Source Fragment                                      *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/


#ifdef GET_SUBTARGETINFO_ENUM
#undef GET_SUBTARGETINFO_ENUM
namespace llvm {
namespace SPU {
enum {
  DefaultProc =  1ULL << 0,
  LargeMemFeature =  1ULL << 1
};
}
} // End llvm namespace 
#endif // GET_SUBTARGETINFO_ENUM


#ifdef GET_SUBTARGETINFO_MC_DESC
#undef GET_SUBTARGETINFO_MC_DESC
namespace llvm {
// Sorted (by key) array of values for CPU features.
extern const llvm::SubtargetFeatureKV SPUFeatureKV[] = {
  { "large_mem", "Use large (>256) LSA memory addressing [default = false]", SPU::LargeMemFeature, 0ULL }
};

// Sorted (by key) array of values for CPU subtype.
extern const llvm::SubtargetFeatureKV SPUSubTypeKV[] = {
  { "v0", "Select the v0 processor", SPU::DefaultProc, 0ULL }
};

#ifdef DBGFIELD
#error "<target>GenSubtargetInfo.inc requires a DBGFIELD macro"
#endif
#ifndef NDEBUG
#define DBGFIELD(x) x,
#else
#define DBGFIELD(x)
#endif

// Functional units for "SPUItineraries"
namespace SPUItinerariesFU {
  const unsigned ODD_UNIT = 1 << 0;
  const unsigned EVEN_UNIT = 1 << 1;
}

extern const llvm::InstrStage SPUStages[] = {
  { 0, 0, 0, llvm::InstrStage::Required }, // No itinerary
  { 6, SPUItinerariesFU::ODD_UNIT, -1, (llvm::InstrStage::ReservationKinds)0 }, // 1
  { 4, SPUItinerariesFU::ODD_UNIT, -1, (llvm::InstrStage::ReservationKinds)0 }, // 2
  { 4, SPUItinerariesFU::EVEN_UNIT, -1, (llvm::InstrStage::ReservationKinds)0 }, // 3
  { 13, SPUItinerariesFU::EVEN_UNIT, -1, (llvm::InstrStage::ReservationKinds)0 }, // 4
  { 1, SPUItinerariesFU::EVEN_UNIT, -1, (llvm::InstrStage::ReservationKinds)0 }, // 5
  { 2, SPUItinerariesFU::EVEN_UNIT, -1, (llvm::InstrStage::ReservationKinds)0 }, // 6
  { 7, SPUItinerariesFU::EVEN_UNIT, -1, (llvm::InstrStage::ReservationKinds)0 }, // 7
  { 1, SPUItinerariesFU::ODD_UNIT, -1, (llvm::InstrStage::ReservationKinds)0 }, // 8
  { 6, SPUItinerariesFU::EVEN_UNIT, -1, (llvm::InstrStage::ReservationKinds)0 }, // 9
  { 0, 0, 0, llvm::InstrStage::Required } // End stages
};
extern const unsigned SPUOperandCycles[] = {
  0, // No itinerary
  0 // End operand cycles
};
extern const unsigned SPUForwardingPaths[] = {
 0, // No itinerary
 0 // End bypass tables
};

static const llvm::InstrItinerary *NoItineraries = 0;

static const llvm::InstrItinerary SPUItineraries[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoItinerary
  { 1, 1, 2, 0, 0 }, // 1 BranchHints
  { 1, 2, 3, 0, 0 }, // 2 BranchResolv
  { 1, 3, 4, 0, 0 }, // 3 ByteOp
  { 1, 4, 5, 0, 0 }, // 4 DPrecFP
  { 1, 5, 6, 0, 0 }, // 5 ExecNOP
  { 1, 2, 3, 0, 0 }, // 6 GatherOp
  { 1, 6, 7, 0, 0 }, // 7 ImmLoad
  { 1, 7, 8, 0, 0 }, // 8 IntegerMulDiv
  { 1, 6, 7, 0, 0 }, // 9 IntegerOp
  { 1, 8, 9, 0, 0 }, // 10 LoadNOP
  { 1, 1, 2, 0, 0 }, // 11 LoadStore
  { 1, 2, 3, 0, 0 }, // 12 RotShiftQuad
  { 1, 3, 4, 0, 0 }, // 13 RotShiftVec
  { 1, 9, 10, 0, 0 }, // 14 SPrecFP
  { 1, 2, 3, 0, 0 }, // 15 SelectOp
  { 1, 2, 3, 0, 0 }, // 16 ShuffleOp
  { 0, ~0U, ~0U, ~0U, ~0U } // end marker
};

// ===============================================================
// Data tables for the new per-operand machine model.

// {ProcResourceIdx, Cycles}
extern const llvm::MCWriteProcResEntry SPUWriteProcResTable[] = {
  { 0,  0}, // Invalid
}; // SPUWriteProcResTable

// {Cycles, WriteResourceID}
extern const llvm::MCWriteLatencyEntry SPUWriteLatencyTable[] = {
  { 0,  0}, // Invalid
}; // SPUWriteLatencyTable

// {UseIdx, WriteResourceID, Cycles}
extern const llvm::MCReadAdvanceEntry SPUReadAdvanceTable[] = {
  {0,  0,  0}, // Invalid
}; // SPUReadAdvanceTable

static const llvm::MCSchedModel NoSchedModel(
  MCSchedModel::DefaultIssueWidth,
  MCSchedModel::DefaultMinLatency,
  MCSchedModel::DefaultLoadLatency,
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultMispredictPenalty,
  0, // Processor ID
  0, 0, 0, 0, // No instruction-level machine model.
  NoItineraries);

static const llvm::MCSchedModel SPUItinerariesModel(
  MCSchedModel::DefaultIssueWidth,
  MCSchedModel::DefaultMinLatency,
  MCSchedModel::DefaultLoadLatency,
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultMispredictPenalty,
  1, // Processor ID
  0, 0, 0, 0, // No instruction-level machine model.
  SPUItineraries);

// Sorted (by key) array of itineraries for CPU subtype.
extern const llvm::SubtargetInfoKV SPUProcSchedKV[] = {
  { "v0", (const void *)&SPUItinerariesModel }
};
#undef DBGFIELD
static inline void InitSPUMCSubtargetInfo(MCSubtargetInfo *II, StringRef TT, StringRef CPU, StringRef FS) {
  II->InitMCSubtargetInfo(TT, CPU, FS, SPUFeatureKV, SPUSubTypeKV, 
                      SPUProcSchedKV, SPUWriteProcResTable, SPUWriteLatencyTable, SPUReadAdvanceTable, 
                      SPUStages, SPUOperandCycles, SPUForwardingPaths, 1, 1);
}

} // End llvm namespace 
#endif // GET_SUBTARGETINFO_MC_DESC


#ifdef GET_SUBTARGETINFO_TARGET_DESC
#undef GET_SUBTARGETINFO_TARGET_DESC
#include "llvm/Support/Debug.h"
#include "llvm/Support/raw_ostream.h"
// ParseSubtargetFeatures - Parses features string setting specified
// subtarget options.
void llvm::SPUSubtarget::ParseSubtargetFeatures(StringRef CPU, StringRef FS) {
  DEBUG(dbgs() << "\nFeatures:" << FS);
  DEBUG(dbgs() << "\nCPU:" << CPU << "\n\n");
  InitMCProcessorInfo(CPU, FS);
  uint64_t Bits = getFeatureBits();
  if ((Bits & SPU::DefaultProc) != 0 && ProcDirective < SPU::DEFAULT_PROC) ProcDirective = SPU::DEFAULT_PROC;
  if ((Bits & SPU::LargeMemFeature) != 0) UseLargeMem = true;
}
#endif // GET_SUBTARGETINFO_TARGET_DESC


#ifdef GET_SUBTARGETINFO_HEADER
#undef GET_SUBTARGETINFO_HEADER
namespace llvm {
class DFAPacketizer;
struct SPUGenSubtargetInfo : public TargetSubtargetInfo {
  explicit SPUGenSubtargetInfo(StringRef TT, StringRef CPU, StringRef FS);
public:
  unsigned resolveSchedClass(unsigned SchedClass, const MachineInstr *DefMI, const TargetSchedModel *SchedModel) const;
  DFAPacketizer *createDFAPacketizer(const InstrItineraryData *IID) const;
};
} // End llvm namespace 
#endif // GET_SUBTARGETINFO_HEADER


#ifdef GET_SUBTARGETINFO_CTOR
#undef GET_SUBTARGETINFO_CTOR
#include "llvm/CodeGen/TargetSchedule.h"
namespace llvm {
extern const llvm::SubtargetFeatureKV SPUFeatureKV[];
extern const llvm::SubtargetFeatureKV SPUSubTypeKV[];
extern const llvm::SubtargetInfoKV SPUProcSchedKV[];
extern const llvm::MCWriteProcResEntry SPUWriteProcResTable[];
extern const llvm::MCWriteLatencyEntry SPUWriteLatencyTable[];
extern const llvm::MCReadAdvanceEntry SPUReadAdvanceTable[];
extern const llvm::InstrStage SPUStages[];
extern const unsigned SPUOperandCycles[];
extern const unsigned SPUForwardingPaths[];
SPUGenSubtargetInfo::SPUGenSubtargetInfo(StringRef TT, StringRef CPU, StringRef FS)
  : TargetSubtargetInfo() {
  InitMCSubtargetInfo(TT, CPU, FS, SPUFeatureKV, SPUSubTypeKV, 
                      SPUProcSchedKV, SPUWriteProcResTable, SPUWriteLatencyTable, SPUReadAdvanceTable, 
                      SPUStages, SPUOperandCycles, SPUForwardingPaths, 1, 1);
}

unsigned SPUGenSubtargetInfo
::resolveSchedClass(unsigned SchedClass, const MachineInstr *MI, const TargetSchedModel *SchedModel) const {
  report_fatal_error("Expected a variant SchedClass");
} // SPUGenSubtargetInfo::resolveSchedClass
} // End llvm namespace 
#endif // GET_SUBTARGETINFO_CTOR

