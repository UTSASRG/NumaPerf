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
namespace ARM {
  const uint64_t FeatureAvoidPartialCPSR = 1ULL << 0;
  const uint64_t FeatureD16 = 1ULL << 1;
  const uint64_t FeatureDB = 1ULL << 2;
  const uint64_t FeatureDSPThumb2 = 1ULL << 3;
  const uint64_t FeatureFP16 = 1ULL << 4;
  const uint64_t FeatureHWDiv = 1ULL << 5;
  const uint64_t FeatureHWDivARM = 1ULL << 6;
  const uint64_t FeatureHasRAS = 1ULL << 7;
  const uint64_t FeatureHasSlowFPVMLx = 1ULL << 8;
  const uint64_t FeatureMClass = 1ULL << 9;
  const uint64_t FeatureMP = 1ULL << 10;
  const uint64_t FeatureNEON = 1ULL << 11;
  const uint64_t FeatureNEONForFP = 1ULL << 12;
  const uint64_t FeatureNoARM = 1ULL << 13;
  const uint64_t FeaturePref32BitThumb = 1ULL << 14;
  const uint64_t FeatureSlowFPBrcc = 1ULL << 15;
  const uint64_t FeatureT2XtPk = 1ULL << 16;
  const uint64_t FeatureThumb2 = 1ULL << 17;
  const uint64_t FeatureVFP2 = 1ULL << 18;
  const uint64_t FeatureVFP3 = 1ULL << 19;
  const uint64_t FeatureVFP4 = 1ULL << 20;
  const uint64_t FeatureVFPOnlySP = 1ULL << 21;
  const uint64_t FeatureVMLxForwarding = 1ULL << 22;
  const uint64_t HasV4TOps = 1ULL << 23;
  const uint64_t HasV5TEOps = 1ULL << 24;
  const uint64_t HasV5TOps = 1ULL << 25;
  const uint64_t HasV6Ops = 1ULL << 26;
  const uint64_t HasV6T2Ops = 1ULL << 27;
  const uint64_t HasV7Ops = 1ULL << 28;
  const uint64_t ModeThumb = 1ULL << 29;
  const uint64_t ProcA8 = 1ULL << 30;
  const uint64_t ProcA9 = 1ULL << 31;
  const uint64_t ProcA15 = 1ULL << 32;
  const uint64_t ProcSwift = 1ULL << 33;
}
} // End llvm namespace 
#endif // GET_SUBTARGETINFO_ENUM


#ifdef GET_SUBTARGETINFO_MC_DESC
#undef GET_SUBTARGETINFO_MC_DESC
namespace llvm {
// Sorted (by key) array of values for CPU features.
extern const llvm::SubtargetFeatureKV ARMFeatureKV[] = {
  { "32bit", "Prefer 32-bit Thumb instrs", ARM::FeaturePref32BitThumb, 0ULL },
  { "a15", "Cortex-A15 ARM processors", ARM::ProcA15, ARM::FeatureT2XtPk | ARM::FeatureFP16 | ARM::FeatureAvoidPartialCPSR },
  { "a8", "Cortex-A8 ARM processors", ARM::ProcA8, ARM::FeatureSlowFPBrcc | ARM::FeatureNEONForFP | ARM::FeatureHasSlowFPVMLx | ARM::FeatureVMLxForwarding | ARM::FeatureT2XtPk },
  { "a9", "Cortex-A9 ARM processors", ARM::ProcA9, ARM::FeatureVMLxForwarding | ARM::FeatureT2XtPk | ARM::FeatureFP16 | ARM::FeatureAvoidPartialCPSR },
  { "avoid-partial-cpsr", "Avoid CPSR partial update for OOO execution", ARM::FeatureAvoidPartialCPSR, 0ULL },
  { "d16", "Restrict VFP3 to 16 double registers", ARM::FeatureD16, 0ULL },
  { "db", "Has data barrier (dmb / dsb) instructions", ARM::FeatureDB, 0ULL },
  { "fp-only-sp", "Floating point unit supports single precision only", ARM::FeatureVFPOnlySP, 0ULL },
  { "fp16", "Enable half-precision floating point", ARM::FeatureFP16, 0ULL },
  { "hwdiv", "Enable divide instructions", ARM::FeatureHWDiv, 0ULL },
  { "hwdiv-arm", "Enable divide instructions in ARM mode", ARM::FeatureHWDivARM, 0ULL },
  { "mclass", "Is microcontroller profile ('M' series)", ARM::FeatureMClass, 0ULL },
  { "mp", "Supports Multiprocessing extension", ARM::FeatureMP, 0ULL },
  { "neon", "Enable NEON instructions", ARM::FeatureNEON, ARM::FeatureVFP3 },
  { "neonfp", "Use NEON for single precision FP", ARM::FeatureNEONForFP, 0ULL },
  { "noarm", "Does not support ARM mode execution", ARM::FeatureNoARM, 0ULL },
  { "ras", "Has return address stack", ARM::FeatureHasRAS, 0ULL },
  { "slow-fp-brcc", "FP compare + branch is slow", ARM::FeatureSlowFPBrcc, 0ULL },
  { "slowfpvmlx", "Disable VFP / NEON MAC instructions", ARM::FeatureHasSlowFPVMLx, 0ULL },
  { "swift", "Swift ARM processors", ARM::ProcSwift, ARM::FeatureNEONForFP | ARM::FeatureT2XtPk | ARM::FeatureVFP4 | ARM::FeatureMP | ARM::FeatureHWDiv | ARM::FeatureHWDivARM | ARM::FeatureAvoidPartialCPSR | ARM::FeatureHasSlowFPVMLx },
  { "t2dsp", "Supports v7 DSP instructions in Thumb2", ARM::FeatureDSPThumb2, 0ULL },
  { "t2xtpk", "Enable Thumb2 extract and pack instructions", ARM::FeatureT2XtPk, 0ULL },
  { "thumb-mode", "Thumb mode", ARM::ModeThumb, 0ULL },
  { "thumb2", "Enable Thumb2 instructions", ARM::FeatureThumb2, 0ULL },
  { "v4t", "Support ARM v4T instructions", ARM::HasV4TOps, 0ULL },
  { "v5t", "Support ARM v5T instructions", ARM::HasV5TOps, ARM::HasV4TOps },
  { "v5te", "Support ARM v5TE, v5TEj, and v5TExp instructions", ARM::HasV5TEOps, ARM::HasV5TOps },
  { "v6", "Support ARM v6 instructions", ARM::HasV6Ops, ARM::HasV5TEOps },
  { "v6t2", "Support ARM v6t2 instructions", ARM::HasV6T2Ops, ARM::HasV6Ops | ARM::FeatureThumb2 },
  { "v7", "Support ARM v7 instructions", ARM::HasV7Ops, ARM::HasV6T2Ops },
  { "vfp2", "Enable VFP2 instructions", ARM::FeatureVFP2, 0ULL },
  { "vfp3", "Enable VFP3 instructions", ARM::FeatureVFP3, ARM::FeatureVFP2 },
  { "vfp4", "Enable VFP4 instructions", ARM::FeatureVFP4, ARM::FeatureVFP3 | ARM::FeatureFP16 },
  { "vmlx-forwarding", "Has multiplier accumulator forwarding", ARM::FeatureVMLxForwarding, 0ULL }
};

// Sorted (by key) array of values for CPU subtype.
extern const llvm::SubtargetFeatureKV ARMSubTypeKV[] = {
  { "arm1020e", "Select the arm1020e processor", ARM::HasV5TEOps, 0ULL },
  { "arm1020t", "Select the arm1020t processor", ARM::HasV5TOps, 0ULL },
  { "arm1022e", "Select the arm1022e processor", ARM::HasV5TEOps, 0ULL },
  { "arm10e", "Select the arm10e processor", ARM::HasV5TEOps, 0ULL },
  { "arm10tdmi", "Select the arm10tdmi processor", ARM::HasV5TOps, 0ULL },
  { "arm1136j-s", "Select the arm1136j-s processor", ARM::HasV6Ops, 0ULL },
  { "arm1136jf-s", "Select the arm1136jf-s processor", ARM::HasV6Ops | ARM::FeatureVFP2 | ARM::FeatureHasSlowFPVMLx, 0ULL },
  { "arm1156t2-s", "Select the arm1156t2-s processor", ARM::HasV6T2Ops | ARM::FeatureDSPThumb2, 0ULL },
  { "arm1156t2f-s", "Select the arm1156t2f-s processor", ARM::HasV6T2Ops | ARM::FeatureVFP2 | ARM::FeatureHasSlowFPVMLx | ARM::FeatureDSPThumb2, 0ULL },
  { "arm1176jz-s", "Select the arm1176jz-s processor", ARM::HasV6Ops, 0ULL },
  { "arm1176jzf-s", "Select the arm1176jzf-s processor", ARM::HasV6Ops | ARM::FeatureVFP2 | ARM::FeatureHasSlowFPVMLx, 0ULL },
  { "arm710t", "Select the arm710t processor", ARM::HasV4TOps, 0ULL },
  { "arm720t", "Select the arm720t processor", ARM::HasV4TOps, 0ULL },
  { "arm7tdmi", "Select the arm7tdmi processor", ARM::HasV4TOps, 0ULL },
  { "arm7tdmi-s", "Select the arm7tdmi-s processor", ARM::HasV4TOps, 0ULL },
  { "arm8", "Select the arm8 processor", 0ULL, 0ULL },
  { "arm810", "Select the arm810 processor", 0ULL, 0ULL },
  { "arm9", "Select the arm9 processor", ARM::HasV4TOps, 0ULL },
  { "arm920", "Select the arm920 processor", ARM::HasV4TOps, 0ULL },
  { "arm920t", "Select the arm920t processor", ARM::HasV4TOps, 0ULL },
  { "arm922t", "Select the arm922t processor", ARM::HasV4TOps, 0ULL },
  { "arm926ej-s", "Select the arm926ej-s processor", ARM::HasV5TEOps, 0ULL },
  { "arm940t", "Select the arm940t processor", ARM::HasV4TOps, 0ULL },
  { "arm946e-s", "Select the arm946e-s processor", ARM::HasV5TEOps, 0ULL },
  { "arm966e-s", "Select the arm966e-s processor", ARM::HasV5TEOps, 0ULL },
  { "arm968e-s", "Select the arm968e-s processor", ARM::HasV5TEOps, 0ULL },
  { "arm9e", "Select the arm9e processor", ARM::HasV5TEOps, 0ULL },
  { "arm9tdmi", "Select the arm9tdmi processor", ARM::HasV4TOps, 0ULL },
  { "cortex-a15", "Select the cortex-a15 processor", ARM::ProcA15 | ARM::HasV7Ops | ARM::FeatureNEON | ARM::FeatureDB | ARM::FeatureDSPThumb2 | ARM::FeatureHasRAS, 0ULL },
  { "cortex-a8", "Select the cortex-a8 processor", ARM::ProcA8 | ARM::HasV7Ops | ARM::FeatureNEON | ARM::FeatureDB | ARM::FeatureDSPThumb2 | ARM::FeatureHasRAS, 0ULL },
  { "cortex-a9", "Select the cortex-a9 processor", ARM::ProcA9 | ARM::HasV7Ops | ARM::FeatureNEON | ARM::FeatureDB | ARM::FeatureDSPThumb2 | ARM::FeatureHasRAS, 0ULL },
  { "cortex-a9-mp", "Select the cortex-a9-mp processor", ARM::ProcA9 | ARM::HasV7Ops | ARM::FeatureNEON | ARM::FeatureDB | ARM::FeatureDSPThumb2 | ARM::FeatureMP | ARM::FeatureHasRAS, 0ULL },
  { "cortex-m0", "Select the cortex-m0 processor", ARM::HasV6Ops | ARM::FeatureNoARM | ARM::FeatureDB | ARM::FeatureMClass, 0ULL },
  { "cortex-m3", "Select the cortex-m3 processor", ARM::HasV7Ops | ARM::FeatureThumb2 | ARM::FeatureNoARM | ARM::FeatureDB | ARM::FeatureHWDiv | ARM::FeatureMClass, 0ULL },
  { "cortex-m4", "Select the cortex-m4 processor", ARM::HasV7Ops | ARM::FeatureThumb2 | ARM::FeatureNoARM | ARM::FeatureDB | ARM::FeatureHWDiv | ARM::FeatureDSPThumb2 | ARM::FeatureT2XtPk | ARM::FeatureVFP4 | ARM::FeatureVFPOnlySP | ARM::FeatureMClass, 0ULL },
  { "ep9312", "Select the ep9312 processor", ARM::HasV4TOps, 0ULL },
  { "generic", "Select the generic processor", 0ULL, 0ULL },
  { "iwmmxt", "Select the iwmmxt processor", ARM::HasV5TEOps, 0ULL },
  { "mpcore", "Select the mpcore processor", ARM::HasV6Ops | ARM::FeatureVFP2 | ARM::FeatureHasSlowFPVMLx, 0ULL },
  { "mpcorenovfp", "Select the mpcorenovfp processor", ARM::HasV6Ops, 0ULL },
  { "strongarm", "Select the strongarm processor", 0ULL, 0ULL },
  { "strongarm110", "Select the strongarm110 processor", 0ULL, 0ULL },
  { "strongarm1100", "Select the strongarm1100 processor", 0ULL, 0ULL },
  { "strongarm1110", "Select the strongarm1110 processor", 0ULL, 0ULL },
  { "swift", "Select the swift processor", ARM::ProcSwift | ARM::HasV7Ops | ARM::FeatureNEON | ARM::FeatureDB | ARM::FeatureDSPThumb2 | ARM::FeatureHasRAS, 0ULL },
  { "xscale", "Select the xscale processor", ARM::HasV5TEOps, 0ULL }
};

#ifdef DBGFIELD
#error "<target>GenSubtargetInfo.inc requires a DBGFIELD macro"
#endif
#ifndef NDEBUG
#define DBGFIELD(x) x,
#else
#define DBGFIELD(x)
#endif

// Functional units for "ARMV6Itineraries"
namespace ARMV6ItinerariesFU {
  const unsigned V6_Pipe = 1 << 0;
}

// Functional units for "CortexA9Itineraries"
namespace CortexA9ItinerariesFU {
  const unsigned A9_Issue0 = 1 << 0;
  const unsigned A9_Issue1 = 1 << 1;
  const unsigned A9_Branch = 1 << 2;
  const unsigned A9_ALU0 = 1 << 3;
  const unsigned A9_ALU1 = 1 << 4;
  const unsigned A9_AGU = 1 << 5;
  const unsigned A9_NPipe = 1 << 6;
  const unsigned A9_MUX0 = 1 << 7;
  const unsigned A9_LSUnit = 1 << 8;
  const unsigned A9_DRegsVFP = 1 << 9;
  const unsigned A9_DRegsN = 1 << 10;
}

// Pipeline forwarding pathes for itineraries "CortexA9Itineraries"
namespace CortexA9ItinerariesBypass {
  const unsigned NoBypass = 0;
  const unsigned A9_LdBypass = 1 << 0;
}

// Functional units for "CortexA8Itineraries"
namespace CortexA8ItinerariesFU {
  const unsigned A8_Pipe0 = 1 << 0;
  const unsigned A8_Pipe1 = 1 << 1;
  const unsigned A8_LSPipe = 1 << 2;
  const unsigned A8_NPipe = 1 << 3;
  const unsigned A8_NLSPipe = 1 << 4;
}

// Functional units for "SwiftItineraries"
namespace SwiftItinerariesFU {
  const unsigned SW_DIS0 = 1 << 0;
  const unsigned SW_DIS1 = 1 << 1;
  const unsigned SW_DIS2 = 1 << 2;
  const unsigned SW_ALU0 = 1 << 3;
  const unsigned SW_ALU1 = 1 << 4;
  const unsigned SW_LS = 1 << 5;
  const unsigned SW_IDIV = 1 << 6;
  const unsigned SW_FDIV = 1 << 7;
}

extern const llvm::InstrStage ARMStages[] = {
  { 0, 0, 0, llvm::InstrStage::Required }, // No itinerary
  { 1, ARMV6ItinerariesFU::V6_Pipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 1
  { 15, ARMV6ItinerariesFU::V6_Pipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 2
  { 29, ARMV6ItinerariesFU::V6_Pipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 3
  { 2, ARMV6ItinerariesFU::V6_Pipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 4
  { 3, ARMV6ItinerariesFU::V6_Pipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 5
  { 1, ARMV6ItinerariesFU::V6_Pipe, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, ARMV6ItinerariesFU::V6_Pipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 6-7
  { 3, ARMV6ItinerariesFU::V6_Pipe, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, ARMV6ItinerariesFU::V6_Pipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 8-9
  { 1, ARMV6ItinerariesFU::V6_Pipe, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, ARMV6ItinerariesFU::V6_Pipe, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, ARMV6ItinerariesFU::V6_Pipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 10-12
  { 1, CortexA9ItinerariesFU::A9_Issue0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_Branch, -1, (llvm::InstrStage::ReservationKinds)0 }, // 13-15
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 16
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)0 },   { 7, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)1 },   { 1, CortexA9ItinerariesFU::A9_NPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 17-21
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)0 },   { 7, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)1 },   { 2, CortexA9ItinerariesFU::A9_NPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 22-26
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)0 },   { 8, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)1 },   { 2, CortexA9ItinerariesFU::A9_NPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 27-31
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)0 },   { 10, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)1 },   { 4, CortexA9ItinerariesFU::A9_NPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 32-36
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)0 },   { 8, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)1 },   { 1, CortexA9ItinerariesFU::A9_NPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 37-41
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)0 },   { 7, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)1 },   { 1, CortexA9ItinerariesFU::A9_NPipe, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_LSUnit, -1, (llvm::InstrStage::ReservationKinds)0 }, // 42-47
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)0 },   { 8, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)1 },   { 2, CortexA9ItinerariesFU::A9_NPipe, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, CortexA9ItinerariesFU::A9_LSUnit, -1, (llvm::InstrStage::ReservationKinds)0 }, // 48-53
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)0 },   { 9, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)1 },   { 3, CortexA9ItinerariesFU::A9_NPipe, 0, (llvm::InstrStage::ReservationKinds)0 },   { 3, CortexA9ItinerariesFU::A9_LSUnit, -1, (llvm::InstrStage::ReservationKinds)0 }, // 54-59
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)0 },   { 11, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)1 },   { 5, CortexA9ItinerariesFU::A9_NPipe, 0, (llvm::InstrStage::ReservationKinds)0 },   { 5, CortexA9ItinerariesFU::A9_LSUnit, -1, (llvm::InstrStage::ReservationKinds)0 }, // 60-65
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)0 },   { 10, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)1 },   { 4, CortexA9ItinerariesFU::A9_NPipe, 0, (llvm::InstrStage::ReservationKinds)0 },   { 4, CortexA9ItinerariesFU::A9_LSUnit, -1, (llvm::InstrStage::ReservationKinds)0 }, // 66-71
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)0 },   { 3, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)1 },   { 1, CortexA9ItinerariesFU::A9_NPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 72-76
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)0 },   { 4, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)1 },   { 2, CortexA9ItinerariesFU::A9_NPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 77-81
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)0 },   { 9, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)1 },   { 3, CortexA9ItinerariesFU::A9_NPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 82-86
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)0 },   { 11, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)1 },   { 1, CortexA9ItinerariesFU::A9_NPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 87-91
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)0 },   { 12, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)1 },   { 2, CortexA9ItinerariesFU::A9_NPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 92-96
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)1 },   { 1, CortexA9ItinerariesFU::A9_NPipe, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_LSUnit, -1, (llvm::InstrStage::ReservationKinds)0 }, // 97-102
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)1 },   { 2, CortexA9ItinerariesFU::A9_NPipe, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, CortexA9ItinerariesFU::A9_LSUnit, -1, (llvm::InstrStage::ReservationKinds)0 }, // 103-108
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)0 },   { 3, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)1 },   { 3, CortexA9ItinerariesFU::A9_NPipe, 0, (llvm::InstrStage::ReservationKinds)0 },   { 3, CortexA9ItinerariesFU::A9_LSUnit, -1, (llvm::InstrStage::ReservationKinds)0 }, // 109-114
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)0 },   { 8, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)1 },   { 2, CortexA9ItinerariesFU::A9_NPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 115-119
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)0 },   { 9, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)1 },   { 3, CortexA9ItinerariesFU::A9_NPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 120-124
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)0 },   { 9, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)1 },   { 2, CortexA9ItinerariesFU::A9_NPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 125-129
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)0 },   { 5, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)1 },   { 1, CortexA9ItinerariesFU::A9_NPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 130-134
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)0 },   { 3, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)1 },   { 1, CortexA9ItinerariesFU::A9_NPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 135-139
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)0 },   { 16, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)1 },   { 10, CortexA9ItinerariesFU::A9_NPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 140-144
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)0 },   { 26, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)1 },   { 20, CortexA9ItinerariesFU::A9_NPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 145-149
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)0 },   { 9, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)1 },   { 1, CortexA9ItinerariesFU::A9_NPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 150-154
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)0 },   { 10, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)1 },   { 2, CortexA9ItinerariesFU::A9_NPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 155-159
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)1 },   { 1, CortexA9ItinerariesFU::A9_NPipe, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_LSUnit, -1, (llvm::InstrStage::ReservationKinds)0 }, // 160-165
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)1 },   { 1, CortexA9ItinerariesFU::A9_NPipe, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, CortexA9ItinerariesFU::A9_LSUnit, -1, (llvm::InstrStage::ReservationKinds)0 }, // 166-171
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 }, // 172-173
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)0 },   { 6, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)1 },   { 1, CortexA9ItinerariesFU::A9_NPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 174-178
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)0 },   { 7, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)1 },   { 2, CortexA9ItinerariesFU::A9_NPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 179-183
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)0 },   { 18, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)1 },   { 13, CortexA9ItinerariesFU::A9_NPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 184-188
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)0 },   { 33, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)1 },   { 28, CortexA9ItinerariesFU::A9_NPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 189-193
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_DRegsVFP, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, CortexA9ItinerariesFU::A9_DRegsN, 0, (llvm::InstrStage::ReservationKinds)1 },   { 1, CortexA9ItinerariesFU::A9_NPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 194-198
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_ALU0 | CortexA9ItinerariesFU::A9_ALU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 199-200
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, CortexA9ItinerariesFU::A9_ALU0 | CortexA9ItinerariesFU::A9_ALU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 201-202
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 3, CortexA9ItinerariesFU::A9_ALU0 | CortexA9ItinerariesFU::A9_ALU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 203-204
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_ALU0 | CortexA9ItinerariesFU::A9_ALU1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_ALU0 | CortexA9ItinerariesFU::A9_ALU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 205-208
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, CortexA9ItinerariesFU::A9_AGU, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_LSUnit, -1, (llvm::InstrStage::ReservationKinds)0 }, // 209-212
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_AGU, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_LSUnit, -1, (llvm::InstrStage::ReservationKinds)0 }, // 213-216
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, CortexA9ItinerariesFU::A9_AGU, 1, (llvm::InstrStage::ReservationKinds)0 },   { 2, CortexA9ItinerariesFU::A9_LSUnit, -1, (llvm::InstrStage::ReservationKinds)0 }, // 217-220
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_AGU, 1, (llvm::InstrStage::ReservationKinds)0 },   { 2, CortexA9ItinerariesFU::A9_LSUnit, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_Branch, -1, (llvm::InstrStage::ReservationKinds)0 }, // 221-225
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_AGU, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_LSUnit, 0, (llvm::InstrStage::ReservationKinds)0 }, // 226-229
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_AGU, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_LSUnit, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_ALU0 | CortexA9ItinerariesFU::A9_ALU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 230-234
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, CortexA9ItinerariesFU::A9_ALU0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 235-236
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 3, CortexA9ItinerariesFU::A9_ALU0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 237-238
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_ALU0 | CortexA9ItinerariesFU::A9_ALU1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_ALU0 | CortexA9ItinerariesFU::A9_ALU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 239-241
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_ALU0 | CortexA9ItinerariesFU::A9_ALU1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_ALU0 | CortexA9ItinerariesFU::A9_ALU1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_ALU0 | CortexA9ItinerariesFU::A9_ALU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 242-245
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_ALU0 | CortexA9ItinerariesFU::A9_ALU1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_ALU0 | CortexA9ItinerariesFU::A9_ALU1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_AGU, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_LSUnit, -1, (llvm::InstrStage::ReservationKinds)0 }, // 246-251
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, CortexA9ItinerariesFU::A9_AGU, 1, (llvm::InstrStage::ReservationKinds)0 },   { 2, CortexA9ItinerariesFU::A9_LSUnit, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_Branch, -1, (llvm::InstrStage::ReservationKinds)0 }, // 252-256
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, CortexA9ItinerariesFU::A9_AGU, 1, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_LSUnit, -1, (llvm::InstrStage::ReservationKinds)0 }, // 257-260
  { 1, CortexA9ItinerariesFU::A9_Issue0 | CortexA9ItinerariesFU::A9_Issue1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_MUX0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA9ItinerariesFU::A9_AGU, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, CortexA9ItinerariesFU::A9_LSUnit, -1, (llvm::InstrStage::ReservationKinds)0 }, // 261-264
  { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 265
  { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA8ItinerariesFU::A8_NPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 266-267
  { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, CortexA8ItinerariesFU::A8_NPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 268-269
  { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA8ItinerariesFU::A8_NLSPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 270-271
  { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, CortexA8ItinerariesFU::A8_NLSPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 272-273
  { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, CortexA8ItinerariesFU::A8_NLSPipe, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, CortexA8ItinerariesFU::A8_LSPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 274-276
  { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 2, CortexA8ItinerariesFU::A8_NLSPipe, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, CortexA8ItinerariesFU::A8_LSPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 277-279
  { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 3, CortexA8ItinerariesFU::A8_NLSPipe, 0, (llvm::InstrStage::ReservationKinds)0 },   { 3, CortexA8ItinerariesFU::A8_LSPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 280-282
  { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 3, CortexA8ItinerariesFU::A8_NLSPipe, 0, (llvm::InstrStage::ReservationKinds)0 },   { 3, CortexA8ItinerariesFU::A8_LSPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 283-285
  { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 4, CortexA8ItinerariesFU::A8_NLSPipe, 0, (llvm::InstrStage::ReservationKinds)0 },   { 4, CortexA8ItinerariesFU::A8_LSPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 286-288
  { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 5, CortexA8ItinerariesFU::A8_NLSPipe, 0, (llvm::InstrStage::ReservationKinds)0 },   { 5, CortexA8ItinerariesFU::A8_LSPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 289-291
  { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA8ItinerariesFU::A8_NPipe, -1, (llvm::InstrStage::ReservationKinds)0 },   { 2, CortexA8ItinerariesFU::A8_NLSPipe, 0, (llvm::InstrStage::ReservationKinds)0 },   { 3, CortexA8ItinerariesFU::A8_NPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 292-295
  { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA8ItinerariesFU::A8_NLSPipe, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA8ItinerariesFU::A8_NPipe, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, CortexA8ItinerariesFU::A8_NLSPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 296-299
  { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 9, CortexA8ItinerariesFU::A8_NPipe, 0, (llvm::InstrStage::ReservationKinds)0 },   { 9, CortexA8ItinerariesFU::A8_NLSPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 300-302
  { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 4, CortexA8ItinerariesFU::A8_NPipe, 0, (llvm::InstrStage::ReservationKinds)0 },   { 4, CortexA8ItinerariesFU::A8_NLSPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 303-305
  { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 8, CortexA8ItinerariesFU::A8_NPipe, 0, (llvm::InstrStage::ReservationKinds)0 },   { 8, CortexA8ItinerariesFU::A8_NLSPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 306-308
  { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 5, CortexA8ItinerariesFU::A8_NPipe, 0, (llvm::InstrStage::ReservationKinds)0 },   { 5, CortexA8ItinerariesFU::A8_NLSPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 309-311
  { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 7, CortexA8ItinerariesFU::A8_NPipe, 0, (llvm::InstrStage::ReservationKinds)0 },   { 7, CortexA8ItinerariesFU::A8_NLSPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 312-314
  { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 20, CortexA8ItinerariesFU::A8_NPipe, 0, (llvm::InstrStage::ReservationKinds)0 },   { 20, CortexA8ItinerariesFU::A8_NLSPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 315-317
  { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 29, CortexA8ItinerariesFU::A8_NPipe, 0, (llvm::InstrStage::ReservationKinds)0 },   { 29, CortexA8ItinerariesFU::A8_NLSPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 318-320
  { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 19, CortexA8ItinerariesFU::A8_NPipe, 0, (llvm::InstrStage::ReservationKinds)0 },   { 19, CortexA8ItinerariesFU::A8_NLSPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 321-323
  { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA8ItinerariesFU::A8_NLSPipe, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA8ItinerariesFU::A8_LSPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 324-326
  { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA8ItinerariesFU::A8_NLSPipe, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA8ItinerariesFU::A8_LSPipe, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA8ItinerariesFU::A8_NLSPipe, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA8ItinerariesFU::A8_LSPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 327-331
  { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 11, CortexA8ItinerariesFU::A8_NPipe, 0, (llvm::InstrStage::ReservationKinds)0 },   { 11, CortexA8ItinerariesFU::A8_NLSPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 332-334
  { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 335-336
  { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA8ItinerariesFU::A8_LSPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 337-338
  { 2, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA8ItinerariesFU::A8_LSPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 339-340
  { 2, CortexA8ItinerariesFU::A8_Pipe0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, CortexA8ItinerariesFU::A8_LSPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 341-342
  { 3, CortexA8ItinerariesFU::A8_Pipe0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 3, CortexA8ItinerariesFU::A8_LSPipe, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 343-345
  { 3, CortexA8ItinerariesFU::A8_Pipe0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 3, CortexA8ItinerariesFU::A8_LSPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 346-347
  { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA8ItinerariesFU::A8_LSPipe, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 348-350
  { 2, CortexA8ItinerariesFU::A8_Pipe0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 351
  { 3, CortexA8ItinerariesFU::A8_Pipe0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 352
  { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 353-355
  { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, CortexA8ItinerariesFU::A8_LSPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 356-358
  { 1, CortexA8ItinerariesFU::A8_Pipe0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 359
  { 2, CortexA8ItinerariesFU::A8_Pipe0 | CortexA8ItinerariesFU::A8_Pipe1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, CortexA8ItinerariesFU::A8_LSPipe, -1, (llvm::InstrStage::ReservationKinds)0 }, // 360-361
  { 1, SwiftItinerariesFU::SW_DIS0, 0, (llvm::InstrStage::ReservationKinds)0 }, // 362
  { 1, SwiftItinerariesFU::SW_DIS0 | SwiftItinerariesFU::SW_DIS1 | SwiftItinerariesFU::SW_DIS2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_ALU0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 363-364
  { 1, SwiftItinerariesFU::SW_DIS0 | SwiftItinerariesFU::SW_DIS1 | SwiftItinerariesFU::SW_DIS2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_ALU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 365-366
  { 1, SwiftItinerariesFU::SW_DIS0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_LS, 4, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_ALU0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 367-370
  { 1, SwiftItinerariesFU::SW_DIS0 | SwiftItinerariesFU::SW_DIS1 | SwiftItinerariesFU::SW_DIS2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_LS, -1, (llvm::InstrStage::ReservationKinds)0 }, // 371-372
  { 1, SwiftItinerariesFU::SW_DIS0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_DIS2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_ALU1, 2, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_ALU1, 2, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_ALU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 373-378
  { 1, SwiftItinerariesFU::SW_DIS0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_ALU1, 2, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_ALU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 379-382
  { 1, SwiftItinerariesFU::SW_DIS0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_DIS2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_ALU1, 2, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_ALU1, 2, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_ALU1, 2, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_ALU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 383-389
  { 1, SwiftItinerariesFU::SW_DIS0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_ALU1, 4, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_ALU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 390-393
  { 1, SwiftItinerariesFU::SW_DIS0 | SwiftItinerariesFU::SW_DIS1 | SwiftItinerariesFU::SW_DIS2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_ALU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 15, SwiftItinerariesFU::SW_FDIV, -1, (llvm::InstrStage::ReservationKinds)0 }, // 394-396
  { 1, SwiftItinerariesFU::SW_DIS0 | SwiftItinerariesFU::SW_DIS1 | SwiftItinerariesFU::SW_DIS2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_ALU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 30, SwiftItinerariesFU::SW_FDIV, -1, (llvm::InstrStage::ReservationKinds)0 }, // 397-399
  { 1, SwiftItinerariesFU::SW_DIS0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_LS, 4, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_ALU0 | SwiftItinerariesFU::SW_ALU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 400-403
  { 1, SwiftItinerariesFU::SW_DIS0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_LS, 3, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_LS, -1, (llvm::InstrStage::ReservationKinds)0 }, // 404-407
  { 1, SwiftItinerariesFU::SW_DIS0 | SwiftItinerariesFU::SW_DIS1 | SwiftItinerariesFU::SW_DIS2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_ALU0 | SwiftItinerariesFU::SW_ALU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 408-409
  { 1, SwiftItinerariesFU::SW_DIS0 | SwiftItinerariesFU::SW_DIS1 | SwiftItinerariesFU::SW_DIS2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_DIS0 | SwiftItinerariesFU::SW_DIS1 | SwiftItinerariesFU::SW_DIS2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_ALU0 | SwiftItinerariesFU::SW_ALU1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_ALU0 | SwiftItinerariesFU::SW_ALU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 410-413
  { 1, SwiftItinerariesFU::SW_DIS0 | SwiftItinerariesFU::SW_DIS1 | SwiftItinerariesFU::SW_DIS2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, SwiftItinerariesFU::SW_ALU0 | SwiftItinerariesFU::SW_ALU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 414-415
  { 1, SwiftItinerariesFU::SW_DIS0 | SwiftItinerariesFU::SW_DIS1 | SwiftItinerariesFU::SW_DIS2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_ALU0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 14, SwiftItinerariesFU::SW_IDIV, -1, (llvm::InstrStage::ReservationKinds)0 }, // 416-418
  { 1, SwiftItinerariesFU::SW_DIS0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_ALU0 | SwiftItinerariesFU::SW_ALU1, 1, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_LS, -1, (llvm::InstrStage::ReservationKinds)0 }, // 419-422
  { 1, SwiftItinerariesFU::SW_DIS0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_ALU0, 1, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_LS, -1, (llvm::InstrStage::ReservationKinds)0 }, // 423-426
  { 1, SwiftItinerariesFU::SW_DIS0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_ALU0 | SwiftItinerariesFU::SW_ALU1, 2, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_LS, -1, (llvm::InstrStage::ReservationKinds)0 }, // 427-430
  { 1, SwiftItinerariesFU::SW_DIS0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_LS, 1, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_LS, -1, (llvm::InstrStage::ReservationKinds)0 }, // 431-434
  { 1, SwiftItinerariesFU::SW_DIS0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_DIS2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_LS, 1, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_LS, 3, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_ALU0 | SwiftItinerariesFU::SW_ALU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 435-440
  { 1, SwiftItinerariesFU::SW_DIS0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_DIS2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_ALU0 | SwiftItinerariesFU::SW_ALU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_LS, 3, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_LS, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_ALU0 | SwiftItinerariesFU::SW_ALU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 441-447
  { 1, SwiftItinerariesFU::SW_DIS0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_DIS2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_ALU0 | SwiftItinerariesFU::SW_ALU1, 1, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_LS, -1, (llvm::InstrStage::ReservationKinds)0 }, // 448-452
  { 1, SwiftItinerariesFU::SW_DIS0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_DIS2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_ALU0 | SwiftItinerariesFU::SW_ALU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_LS, 3, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_ALU0 | SwiftItinerariesFU::SW_ALU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 453-458
  { 1, SwiftItinerariesFU::SW_DIS0 | SwiftItinerariesFU::SW_DIS1 | SwiftItinerariesFU::SW_DIS2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_LS, 3, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_ALU0 | SwiftItinerariesFU::SW_ALU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 459-461
  { 1, SwiftItinerariesFU::SW_DIS0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_DIS2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_ALU0, 1, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_ALU0, 1, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_ALU0 | SwiftItinerariesFU::SW_ALU1, 3, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_ALU0 | SwiftItinerariesFU::SW_ALU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 462-468
  { 1, SwiftItinerariesFU::SW_DIS0 | SwiftItinerariesFU::SW_DIS1 | SwiftItinerariesFU::SW_DIS2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_ALU0 | SwiftItinerariesFU::SW_ALU1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_ALU0 | SwiftItinerariesFU::SW_ALU1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_ALU0 | SwiftItinerariesFU::SW_ALU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 469-472
  { 1, SwiftItinerariesFU::SW_DIS0 | SwiftItinerariesFU::SW_DIS1 | SwiftItinerariesFU::SW_DIS2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_ALU0 | SwiftItinerariesFU::SW_ALU1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_ALU0 | SwiftItinerariesFU::SW_ALU1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_LS, -1, (llvm::InstrStage::ReservationKinds)0 }, // 473-476
  { 1, SwiftItinerariesFU::SW_DIS0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_DIS2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_ALU0, 1, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_ALU0, 3, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_ALU0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 477-482
  { 1, SwiftItinerariesFU::SW_DIS0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_DIS2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_LS, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_ALU0 | SwiftItinerariesFU::SW_ALU1, 1, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_LS, -1, (llvm::InstrStage::ReservationKinds)0 }, // 483-488
  { 1, SwiftItinerariesFU::SW_DIS0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_DIS2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_ALU0 | SwiftItinerariesFU::SW_ALU1, 1, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_LS, 1, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_ALU0 | SwiftItinerariesFU::SW_ALU1, 1, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_LS, 1, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_ALU0 | SwiftItinerariesFU::SW_ALU1, 1, (llvm::InstrStage::ReservationKinds)0 },   { 1, SwiftItinerariesFU::SW_LS, -1, (llvm::InstrStage::ReservationKinds)0 }, // 489-497
  { 0, 0, 0, llvm::InstrStage::Required } // End stages
};
extern const unsigned ARMOperandCycles[] = {
  0, // No itinerary
  9,   2,   2, // 1-3
  9,   2,   2, // 4-6
  2,   2, // 7-8
  2,   2, // 9-10
  9,   2, // 11-12
  5,   2, // 13-14
  9,   2, // 15-16
  9,   2, // 17-18
  5,   2, // 19-20
  9,   2, // 21-22
  20,   2,   2, // 23-25
  34,   2,   2, // 26-28
  9,   2,   2,   2, // 29-32
  9,   2,   2,   2, // 33-36
  5,   2,   2, // 37-39
  5,   2,   2, // 40-42
  2,   1,   1,   5, // 43-46
  3,   2,   1,   1,   5, // 47-51
  9,   2,   2,   2, // 52-55
  9,   2,   2,   2, // 56-59
  10,   10,   1, // 60-62
  10,   1,   1, // 63-65
  10,   1, // 66-67
  10,   1, // 68-69
  9,   2,   2, // 70-72
  9,   2,   2, // 73-75
  20,   2,   2, // 76-78
  34,   2,   2, // 79-81
  3, // 82
  2,   2,   2, // 83-85
  2,   2,   2, // 86-88
  2,   2,   2,   2, // 89-92
  5,   2, // 93-94
  5,   2, // 95-96
  2,   2, // 97-98
  2,   2,   2, // 99-101
  2,   2,   1, // 102-104
  3,   3,   2,   1, // 105-108
  2,   2, // 109-110
  2,   2,   2, // 111-113
  2,   2,   1, // 114-116
  3,   3,   2,   1, // 117-120
  3, // 121
  4, // 122
  3,   2, // 123-124
  3,   1, // 125-126
  4,   2,   1, // 127-129
  2, // 130
  2,   2, // 131-132
  2,   1, // 133-134
  3,   2,   1, // 135-137
  2,   2,   1, // 138-140
  3,   3,   2,   1, // 141-144
  1,   1, // 145-146
  4,   1, // 147-148
  4,   2,   1, // 149-151
  4,   1,   1, // 152-154
  4,   2,   1,   1, // 155-158
  5,   2,   1, // 159-161
  4,   1, // 162-163
  4,   1,   1, // 164-166
  4,   2,   1,   1, // 167-170
  4,   1, // 171-172
  4,   2,   1, // 173-175
  1,   1,   1,   1,   4, // 176-180
  1,   2,   1,   1,   4, // 181-185
  2,   1,   1,   1,   4, // 186-190
  4,   1,   1, // 191-193
  4,   2,   1,   1, // 194-197
  5,   2,   1, // 198-200
  3,   1, // 201-202
  4,   1,   1,   2, // 203-206
  5,   1,   1,   2, // 207-210
  6,   1,   1,   2, // 211-214
  2, // 215
  2, // 216
  3, // 217
  5, // 218
  2,   2, // 219-220
  2,   1, // 221-222
  3,   2,   1, // 223-225
  4,   1,   1, // 226-228
  5,   1,   1, // 229-231
  6,   1,   1, // 232-234
  2, // 235
  2,   2, // 236-237
  2,   1, // 238-239
  3,   2,   1, // 240-242
  1,   1,   4, // 243-245
  1,   2,   4, // 246-248
  2,   1, // 249-250
  2,   2,   1, // 251-253
  2,   1,   1, // 254-256
  2,   2,   1,   1, // 257-260
  2,   2,   1, // 261-263
  2,   1,   1, // 264-266
  2,   2,   1,   1, // 267-270
  2,   1, // 271-272
  2,   2,   1, // 273-275
  2, // 276
  2,   1,   1, // 277-279
  2,   2,   1,   1, // 280-283
  2,   2,   1, // 284-286
  2, // 287
  2,   2, // 288-289
  2,   1, // 290-291
  3,   2,   1, // 292-294
  2,   2, // 295-296
  2,   1, // 297-298
  1,   1, // 299-300
  6,   3,   2,   1, // 301-304
  6,   3,   2,   1, // 305-308
  5,   2,   2, // 309-311
  6,   2,   2, // 312-314
  4,   2,   2, // 315-317
  4,   2,   2, // 318-320
  3,   2,   2, // 321-323
  3,   2,   2, // 324-326
  3,   2,   2, // 327-329
  4,   2,   2, // 330-332
  2,   1,   1, // 333-335
  3,   1,   2, // 336-338
  6,   3,   2,   1, // 339-342
  8,   4,   2,   1, // 343-346
  5,   2,   1, // 347-349
  6,   2,   1, // 350-352
  1,   1, // 353-354
  2,   1, // 355-356
  2,   2,   1,   1, // 357-360
  3,   1,   1,   1, // 361-364
  3,   2,   1,   1,   1,   1, // 365-370
  1,   2,   1, // 371-373
  1,   1,   1, // 374-376
  1,   1,   2,   1, // 377-380
  1,   1,   2,   1, // 381-384
  1,   1,   2,   2,   1, // 385-389
  1,   1,   2,   2,   1, // 390-394
  1,   1,   2,   2,   2,   1, // 395-400
  2,   2,   1, // 401-403
  2,   2,   1, // 404-406
  2,   2,   2,   1,   1, // 407-411
  3,   3,   1,   1,   1,   1, // 412-417
  3,   3,   2,   1,   1,   1,   1,   1, // 418-425
  2,   2,   2,   1,   1,   1, // 426-431
  2,   3,   2,   3,   1, // 432-436
  2,   3,   2,   3,   2,   1, // 437-442
  3,   3,   4,   1, // 443-446
  3,   3,   4,   1, // 447-450
  3,   3,   4,   2,   1,   1, // 451-456
  5,   5,   6,   1,   1,   1,   1,   2, // 457-464
  5,   5,   6,   2,   1,   1,   1,   1,   1,   2, // 465-474
  3,   3,   4,   2,   1, // 475-479
  3,   3,   4,   4,   1, // 480-484
  2,   2,   3,   3,   1, // 485-489
  2,   2,   3,   3,   2,   1,   1, // 490-496
  4,   4,   5,   5,   1,   1,   1,   1,   2,   2, // 497-506
  4,   4,   5,   5,   2,   1,   1,   1,   1,   1,   2,   2, // 507-518
  3,   3,   4,   4,   2,   1, // 519-524
  6,   3,   2,   1, // 525-528
  8,   4,   2,   1, // 529-532
  6,   3,   2,   2, // 533-536
  7,   3,   2,   2, // 537-540
  7,   3,   2,   1, // 541-544
  9,   3,   2,   1, // 545-548
  2,   1, // 549-550
  1,   1, // 551-552
  3,   1,   1, // 553-555
  3, // 556
  3,   1, // 557-558
  2,   1, // 559-560
  2,   1, // 561-562
  6,   2,   2, // 563-565
  7,   2,   2, // 566-568
  7,   2,   1, // 569-571
  9,   2,   1, // 572-574
  6,   3,   1, // 575-577
  6,   3,   1, // 578-580
  5,   1,   1, // 581-583
  2,   2,   1,   1, // 584-587
  3,   3,   1,   1, // 588-591
  4,   4,   1,   1, // 592-595
  4,   1, // 596-597
  4,   1, // 598-599
  9,   2,   2, // 600-602
  10,   2,   2, // 603-605
  4,   1,   1, // 606-608
  4,   1,   1, // 609-611
  3,   1,   1, // 612-614
  3,   1,   1, // 615-617
  1,   1,   1, // 618-620
  1,   1,   1, // 621-623
  2,   1,   1,   1,   1, // 624-628
  1,   1,   1,   1, // 629-632
  1,   1,   1,   1,   2, // 633-637
  2,   1,   1,   1,   1,   1,   2, // 638-644
  1,   1,   1,   1,   2,   2, // 645-650
  2,   1,   1,   1,   1,   1,   2,   2, // 651-658
  1,   1,   1,   1, // 659-662
  1,   1,   1,   1, // 663-666
  2,   1,   1,   1,   1,   1, // 667-672
  1,   1,   1,   1,   2,   2, // 673-678
  2,   1,   1,   1,   1,   1,   2,   2, // 679-686
  1,   1,   1,   1,   2, // 687-691
  1,   1,   1,   1,   2, // 692-696
  2,   1,   1,   1,   1,   1,   2, // 697-703
  2,   1,   1,   1,   1,   1,   2, // 704-710
  1,   1,   1,   1,   2,   2, // 711-716
  1,   1,   1,   1,   2,   2, // 717-722
  2,   1,   1,   1,   1,   1,   2,   2, // 723-730
  2,   1,   1,   1,   1,   1,   2,   2, // 731-738
  4,   2,   1, // 739-741
  4,   2,   1, // 742-744
  3,   2,   1, // 745-747
  3,   2,   1, // 748-750
  3,   2,   1, // 751-753
  3,   2,   2,   1, // 754-757
  4,   2,   2,   3,   1, // 758-762
  4,   2,   2,   3,   3,   1, // 763-768
  3,   1,   2,   1, // 769-772
  3,   1,   2,   2,   1, // 773-777
  4,   1,   2,   2,   3,   1, // 778-783
  4,   1,   2,   2,   3,   3,   1, // 784-790
  5,   2, // 791-792
  6,   2, // 793-794
  4,   2, // 795-796
  4,   2, // 797-798
  4,   1,   1, // 799-801
  4,   1,   1, // 802-804
  1,   1, // 805-806
  1,   1, // 807-808
  4,   1, // 809-810
  4,   1, // 811-812
  2,   1, // 813-814
  4,   1, // 815-816
  4,   1, // 817-818
  4,   1, // 819-820
  4,   1, // 821-822
  4,   1, // 823-824
  15,   1,   1, // 825-827
  25,   1,   1, // 828-830
  8,   1,   1,   1, // 831-834
  9,   1,   1,   1, // 835-838
  1,   1, // 839-840
  2,   1, // 841-842
  1,   1,   1,   1, // 843-846
  2,   1,   1,   1, // 847-850
  8,   1,   1,   1, // 851-854
  9,   1,   1,   1, // 855-858
  2,   1,   1, // 859-861
  1,   1,   1, // 862-864
  1,   1, // 865-866
  2,   1, // 867-868
  5,   1,   1, // 869-871
  6,   1,   1, // 872-874
  17,   1, // 875-876
  32,   1, // 877-878
  1, // 879
  1,   1, // 880-881
  1,   1, // 882-883
  1,   1,   1,   1, // 884-887
  1,   1, // 888-889
  1,   1, // 890-891
  1,   1, // 892-893
  1,   1,   1, // 894-896
  2,   1,   1, // 897-899
  2,   1,   1, // 900-902
  3,   1,   1,   1, // 903-906
  1,   1, // 907-908
  1,   1,   1, // 909-911
  2,   1,   1, // 912-914
  3,   1,   1,   1, // 915-918
  1, // 919
  2, // 920
  1,   1, // 921-922
  1,   1, // 923-924
  2,   1,   1, // 925-927
  1, // 928
  1,   1, // 929-930
  1,   1, // 931-932
  1,   1,   1, // 933-935
  3,   1,   1, // 936-938
  3,   1,   1,   1, // 939-942
  2,   1, // 943-944
  4,   1, // 945-946
  4,   3,   1, // 947-949
  4,   1,   1, // 950-952
  4,   3,   1,   1, // 953-956
  5,   1,   1, // 957-959
  3,   3,   1, // 960-962
  3,   3,   1,   1, // 963-966
  3,   3,   1,   1, // 967-970
  3,   1, // 971-972
  3,   2,   1, // 973-975
  1,   1,   1,   1,   3, // 976-980
  1,   2,   1,   1,   3, // 981-985
  2,   1,   1,   1,   3, // 986-990
  3,   1,   1, // 991-993
  3,   2,   1,   1, // 994-997
  4,   1,   1, // 998-1000
  2,   1, // 1001-1002
  3,   1,   1,   1, // 1003-1006
  4,   1,   1,   1, // 1007-1010
  4,   5,   1,   1, // 1011-1014
  1, // 1015
  2, // 1016
  3, // 1017
  5, // 1018
  1,   1, // 1019-1020
  1,   1, // 1021-1022
  2,   1,   1, // 1023-1025
  3,   1,   1, // 1026-1028
  4,   1,   1, // 1029-1031
  4,   5,   1,   1, // 1032-1035
  1, // 1036
  1,   1, // 1037-1038
  2,   1, // 1039-1040
  3,   1,   1, // 1041-1043
  1,   1,   3, // 1044-1046
  1,   1,   3, // 1047-1049
  1,   1, // 1050-1051
  3,   1,   1, // 1052-1054
  1,   1,   1, // 1055-1057
  3,   1,   1,   1, // 1058-1061
  1,   1,   1, // 1062-1064
  1,   1,   1, // 1065-1067
  3,   1,   1,   1, // 1068-1071
  1,   1, // 1072-1073
  2,   1,   1, // 1074-1076
  2, // 1077
  1,   1,   1, // 1078-1080
  2,   1,   1,   1, // 1081-1084
  1,   1,   1, // 1085-1087
  1, // 1088
  1,   1, // 1089-1090
  1,   1, // 1091-1092
  1,   1,   1, // 1093-1095
  1,   1, // 1096-1097
  2,   1, // 1098-1099
  2,   2, // 1100-1101
  6,   3,   2,   1, // 1102-1105
  6,   3,   2,   1, // 1106-1109
  5,   2,   2, // 1110-1112
  6,   2,   2, // 1113-1115
  4,   2,   1, // 1116-1118
  4,   2,   1, // 1119-1121
  3,   2,   2, // 1122-1124
  3,   2,   2, // 1125-1127
  3,   2,   2, // 1128-1130
  4,   2,   2, // 1131-1133
  2,   1,   1, // 1134-1136
  3,   1,   1, // 1137-1139
  9,   3,   2,   2, // 1140-1143
  10,   3,   2,   2, // 1144-1147
  5,   2,   1, // 1148-1150
  6,   2,   1, // 1151-1153
  2,   1, // 1154-1155
  2,   1, // 1156-1157
  2,   2,   1,   1, // 1158-1161
  3,   1,   1,   1, // 1162-1165
  3,   2,   1,   1,   1,   1, // 1166-1171
  2,   2,   1, // 1172-1174
  2,   2,   1, // 1175-1177
  2,   2,   2,   1, // 1178-1181
  2,   2,   3,   1, // 1182-1185
  2,   2,   3,   2,   1, // 1186-1190
  2,   2,   3,   3,   1, // 1191-1195
  2,   2,   3,   3,   2,   1, // 1196-1201
  2,   2,   1, // 1202-1204
  2,   2,   1, // 1205-1207
  2,   2,   2,   1,   1, // 1208-1212
  3,   3,   1,   1,   1,   1, // 1213-1218
  3,   3,   2,   1,   1,   1,   1,   1, // 1219-1226
  2,   2,   2,   1,   1,   1, // 1227-1232
  2,   2,   3,   3,   1, // 1233-1237
  2,   2,   3,   3,   2,   1, // 1238-1243
  3,   3,   4,   1, // 1244-1247
  2,   2,   3,   1, // 1248-1251
  2,   2,   3,   2,   1,   1, // 1252-1257
  4,   4,   5,   1,   1,   1,   1,   2, // 1258-1265
  4,   4,   5,   2,   1,   1,   1,   1,   1,   2, // 1266-1275
  3,   3,   4,   2,   1, // 1276-1280
  3,   3,   4,   4,   1, // 1281-1285
  2,   2,   3,   3,   1, // 1286-1290
  2,   2,   3,   3,   2,   1,   1, // 1291-1297
  4,   4,   5,   5,   1,   1,   1,   1,   2,   2, // 1298-1307
  4,   4,   5,   5,   2,   1,   1,   1,   1,   1,   2,   2, // 1308-1319
  3,   3,   4,   4,   2,   1, // 1320-1325
  9,   3,   2,   2, // 1326-1329
  10,   3,   2,   2, // 1330-1333
  6,   3,   2,   2, // 1334-1337
  7,   3,   2,   2, // 1338-1341
  7,   3,   2,   1, // 1342-1345
  9,   3,   2,   1, // 1346-1349
  2,   1, // 1350-1351
  2,   1, // 1352-1353
  3,   1,   1, // 1354-1356
  3, // 1357
  2,   1, // 1358-1359
  3,   1, // 1360-1361
  20,   1, // 1362-1363
  6,   2,   2, // 1364-1366
  7,   2,   2, // 1367-1369
  7,   2,   1, // 1370-1372
  9,   2,   1, // 1373-1375
  6,   3,   1, // 1376-1378
  7,   3,   1, // 1379-1381
  5,   2,   2, // 1382-1384
  2,   2,   1,   1, // 1385-1388
  3,   3,   1,   1, // 1389-1392
  4,   4,   1,   1, // 1393-1396
  4,   1, // 1397-1398
  4,   1, // 1399-1400
  9,   2,   2, // 1401-1403
  10,   2,   2, // 1404-1406
  4,   1,   1, // 1407-1409
  5,   1,   1, // 1410-1412
  3,   1,   1, // 1413-1415
  4,   1,   1, // 1416-1418
  1,   1,   1, // 1419-1421
  1,   1,   1, // 1422-1424
  2,   1,   1,   1,   1, // 1425-1429
  1,   1,   1,   1, // 1430-1433
  1,   1,   1,   1,   2, // 1434-1438
  2,   1,   1,   1,   1,   1,   2, // 1439-1445
  1,   1,   1,   1,   2,   2, // 1446-1451
  2,   1,   1,   1,   1,   1,   2,   2, // 1452-1459
  1,   1,   1,   1, // 1460-1463
  1,   1,   1,   1, // 1464-1467
  2,   1,   1,   1,   1,   1, // 1468-1473
  1,   1,   1,   1,   2,   2, // 1474-1479
  2,   1,   1,   1,   1,   1,   2,   2, // 1480-1487
  1,   1,   1,   1,   2, // 1488-1492
  1,   1,   1,   1,   2, // 1493-1497
  2,   1,   1,   1,   1,   1,   2, // 1498-1504
  2,   1,   1,   1,   1,   1,   2, // 1505-1511
  1,   1,   1,   1,   2,   2, // 1512-1517
  1,   1,   1,   1,   2,   2, // 1518-1523
  2,   1,   1,   1,   1,   1,   2,   2, // 1524-1531
  2,   1,   1,   1,   1,   1,   2,   2, // 1532-1539
  4,   2,   1, // 1540-1542
  4,   2,   1, // 1543-1545
  3,   2,   1, // 1546-1548
  3,   2,   1, // 1549-1551
  3,   2,   1, // 1552-1554
  3,   2,   2,   1, // 1555-1558
  4,   2,   2,   3,   1, // 1559-1563
  4,   2,   2,   3,   3,   1, // 1564-1569
  3,   1,   2,   1, // 1570-1573
  3,   1,   2,   2,   1, // 1574-1578
  4,   1,   2,   2,   3,   1, // 1579-1584
  4,   1,   2,   2,   3,   3,   1, // 1585-1591
  5,   2, // 1592-1593
  6,   2, // 1594-1595
  4,   2, // 1596-1597
  4,   2, // 1598-1599
  7,   1,   1, // 1600-1602
  9,   1,   1, // 1603-1605
  1,   1, // 1606-1607
  4,   1, // 1608-1609
  8,   1, // 1610-1611
  5,   1, // 1612-1613
  8,   1, // 1614-1615
  7,   1, // 1616-1617
  7,   1, // 1618-1619
  7,   1, // 1620-1621
  20,   1,   1, // 1622-1624
  29,   1,   1, // 1625-1627
  7,   2,   1,   1, // 1628-1631
  19,   2,   1,   1, // 1632-1635
  2,   1, // 1636-1637
  2,   1, // 1638-1639
  1,   1,   1,   2, // 1640-1643
  2,   1,   1,   1,   2, // 1644-1648
  7,   2,   1,   1, // 1649-1652
  19,   2,   1,   1, // 1653-1656
  20,   20,   1, // 1657-1659
  2,   1,   1, // 1660-1662
  2,   1, // 1663-1664
  20,   1, // 1665-1666
  7,   1,   1, // 1667-1669
  11,   1,   1, // 1670-1672
  19,   1, // 1673-1674
  29,   1, // 1675-1676
  20, // 1677
  1,   1, // 1678-1679
  1,   1, // 1680-1681
  1,   1,   1,   1, // 1682-1685
  7,   1, // 1686-1687
  4,   1, // 1688-1689
  2,   2, // 1690-1691
  2,   2,   2, // 1692-1694
  2,   2,   1, // 1695-1697
  2,   1,   2, // 1698-1700
  2,   2,   1,   1, // 1701-1704
  2,   2, // 1705-1706
  2,   2,   2, // 1707-1709
  2,   2,   1, // 1710-1712
  2,   2,   1,   1, // 1713-1716
  2, // 1717
  3,   1, // 1718-1719
  2,   1, // 1720-1721
  2,   1, // 1722-1723
  2,   1,   1, // 1724-1726
  2, // 1727
  2,   2, // 1728-1729
  2,   1, // 1730-1731
  2,   1,   1, // 1732-1734
  2,   2,   1, // 1735-1737
  2,   2,   1,   1, // 1738-1741
  1,   1, // 1742-1743
  3,   1, // 1744-1745
  3,   2,   1, // 1746-1748
  3,   1,   1, // 1749-1751
  3,   2,   1,   1, // 1752-1755
  4,   1,   1, // 1756-1758
  3,   1, // 1759-1760
  3,   1,   1, // 1761-1763
  3,   2,   1,   1, // 1764-1767
  3,   1, // 1768-1769
  3,   2,   1, // 1770-1772
  1,   1,   1,   1,   3, // 1773-1777
  1,   2,   1,   1,   3, // 1778-1782
  2,   1,   1,   1,   3, // 1783-1787
  3,   1,   1, // 1788-1790
  3,   2,   1,   1, // 1791-1794
  4,   1,   1, // 1795-1797
  4,   1, // 1798-1799
  6,   1,   1,   4, // 1800-1803
  6,   1,   1,   4, // 1804-1807
  6,   6,   1,   1, // 1808-1811
  1, // 1812
  2, // 1813
  3, // 1814
  5, // 1815
  1,   1, // 1816-1817
  1,   1, // 1818-1819
  1,   1,   1, // 1820-1822
  5,   1,   1, // 1823-1825
  6,   1,   1, // 1826-1828
  6,   6,   1,   1, // 1829-1832
  1, // 1833
  1,   1, // 1834-1835
  1,   1, // 1836-1837
  1,   1,   1, // 1838-1840
  1,   1,   3, // 1841-1843
  1,   1,   3, // 1844-1846
  3,   1, // 1847-1848
  2,   3,   1, // 1849-1851
  3,   1,   1, // 1852-1854
  2,   3,   1,   1, // 1855-1858
  3,   1,   1, // 1859-1861
  3,   1,   1, // 1862-1864
  2,   3,   1,   1, // 1865-1868
  3,   1, // 1869-1870
  2,   3,   1, // 1871-1873
  2, // 1874
  3,   1,   1, // 1875-1877
  2,   3,   1,   1, // 1878-1881
  3,   1,   1, // 1882-1884
  2, // 1885
  2,   2, // 1886-1887
  2,   1, // 1888-1889
  2,   1,   1, // 1890-1892
  2,   2, // 1893-1894
  2,   1, // 1895-1896
  1,   1, // 1897-1898
  4,   1,   1,   1, // 1899-1902
  4,   1,   1,   1, // 1903-1906
  4,   1,   1, // 1907-1909
  4,   1,   1, // 1910-1912
  4,   1,   1, // 1913-1915
  4,   1,   1, // 1916-1918
  2,   1,   1, // 1919-1921
  2,   1,   1, // 1922-1924
  2,   1,   1, // 1925-1927
  2,   1,   1, // 1928-1930
  2,   1,   1, // 1931-1933
  2,   1,   1, // 1934-1936
  8,   1,   1, // 1937-1939
  8,   1,   1, // 1940-1942
  4,   1,   1, // 1943-1945
  4,   1,   1, // 1946-1948
  8,   1,   1, // 1949-1951
  8,   1,   1, // 1952-1954
  4,   1,   1,   1, // 1955-1958
  4,   1,   1,   1, // 1959-1962
  4,   1,   1,   1, // 1963-1966
  4,   1,   1,   1, // 1967-1970
  2,   1, // 1971-1972
  6,   1, // 1973-1974
  6,   1, // 1975-1976
  2, // 1977
  2,   1, // 1978-1979
  2,   1, // 1980-1981
  3,   1, // 1982-1983
  4,   1,   1, // 1984-1986
  4,   1,   1, // 1987-1989
  4,   1,   1, // 1990-1992
  4,   1,   1, // 1993-1995
  4,   1,   1, // 1996-1998
  4,   1,   1, // 1999-2001
  4,   1,   1, // 2002-2004
  3,   4,   3,   4, // 2005-2008
  3,   4,   3,   4, // 2009-2012
  3,   4,   3,   4, // 2013-2016
  4,   1, // 2017-2018
  4,   1, // 2019-2020
  8,   1,   1, // 2021-2023
  8,   1,   1, // 2024-2026
  4,   1,   1, // 2027-2029
  4,   1,   1, // 2030-2032
  2,   1,   1, // 2033-2035
  2,   1,   1, // 2036-2038
  4,   1,   1, // 2039-2041
  4,   1,   1, // 2042-2044
  2,   1,   1, // 2045-2047
  2,   1,   1, // 2048-2050
  2,   1,   1, // 2051-2053
  4,   1,   3,   3, // 2054-2057
  6,   1,   3,   5,   5, // 2058-2062
  8,   1,   3,   5,   7,   7, // 2063-2068
  2,   1,   1, // 2069-2071
  4,   1,   3,   3, // 2072-2075
  6,   1,   3,   5,   5, // 2076-2080
  8,   1,   3,   5,   7,   7, // 2081-2086
  2,   1, // 2087-2088
  2,   1, // 2089-2090
  4,   1, // 2091-2092
  4,   1, // 2093-2094
  2,   1,   1, // 2095-2097
  2,   1,   1, // 2098-2100
  1,   1, // 2101-2102
  1,   1, // 2103-2104
  4,   1, // 2105-2106
  4,   1, // 2107-2108
  4,   1, // 2109-2110
  4,   1, // 2111-2112
  4,   1, // 2113-2114
  4,   1, // 2115-2116
  6,   1, // 2117-2118
  4,   1, // 2119-2120
  17,   1,   1, // 2121-2123
  32,   1,   1, // 2124-2126
  8,   1,   1, // 2127-2129
  12,   1,   1, // 2130-2132
  4,   1, // 2133-2134
  4,   1, // 2135-2136
  1,   1,   1,   4, // 2137-2140
  2,   1,   1,   1,   4, // 2141-2145
  8,   1,   1, // 2146-2148
  12,   1,   1, // 2149-2151
  3,   4,   1, // 2152-2154
  4,   1, // 2155-2156
  6,   1, // 2157-2158
  3,   1, // 2159-2160
  4,   1,   1, // 2161-2163
  6,   1,   1, // 2164-2166
  17,   1, // 2167-2168
  32,   1,   1, // 2169-2171
  1, // 2172
  1,   1, // 2173-2174
  1,   1, // 2175-2176
  1,   1,   1, // 2177-2179
  2,   1, // 2180-2181
  2,   1, // 2182-2183
  1,   1, // 2184-2185
  1,   1,   1, // 2186-2188
  2,   1,   1, // 2189-2191
  2,   1,   1, // 2192-2194
  2,   1,   1,   1, // 2195-2198
  1,   1, // 2199-2200
  1,   1,   1, // 2201-2203
  2,   1,   1, // 2204-2206
  2,   1,   1,   1, // 2207-2210
  1, // 2211
  2, // 2212
  1,   1, // 2213-2214
  1,   1, // 2215-2216
  2,   1,   1, // 2217-2219
  1, // 2220
  1,   1, // 2221-2222
  1,   1, // 2223-2224
  1,   1,   1, // 2225-2227
  14,   1,   1, // 2228-2230
  1,   1,   1, // 2231-2233
  1,   1,   1,   1, // 2234-2237
  1,   1, // 2238-2239
  3,   1, // 2240-2241
  3,   1,   1, // 2242-2244
  3,   1,   1, // 2245-2247
  3,   1,   1,   1, // 2248-2251
  5,   1,   1, // 2252-2254
  3,   4,   1, // 2255-2257
  3,   4,   1,   1, // 2258-2261
  3,   4,   1,   1, // 2262-2265
  3,   1, // 2266-2267
  3,   1,   1, // 2268-2270
  1,   1,   1,   1,   3, // 2271-2275
  1,   1,   1,   1,   3, // 2276-2280
  2,   1,   1,   1,   3, // 2281-2285
  3,   1,   1, // 2286-2288
  3,   1,   1,   1, // 2289-2292
  5,   1,   1, // 2293-2295
  4,   1, // 2296-2297
  3,   1,   1,   1, // 2298-2301
  4,   1,   1,   1, // 2302-2305
  5,   6,   1,   1, // 2306-2309
  1, // 2310
  2, // 2311
  3, // 2312
  5, // 2313
  1, // 2314
  1, // 2315
  1, // 2316
  3,   1,   1, // 2317-2319
  4,   1,   1, // 2320-2322
  5,   5,   1,   1, // 2323-2326
  1, // 2327
  1, // 2328
  1, // 2329
  1, // 2330
  1,   1,   3, // 2331-2333
  1,   1,   3, // 2334-2336
  1,   1, // 2337-2338
  1,   1,   1, // 2339-2341
  1,   1,   1, // 2342-2344
  1,   1,   1,   1, // 2345-2348
  1,   1,   1, // 2349-2351
  1,   1,   1, // 2352-2354
  1,   1,   1,   1, // 2355-2358
  1,   1, // 2359-2360
  1,   1,   1, // 2361-2363
  2, // 2364
  1,   1,   1, // 2365-2367
  1,   1,   1,   1, // 2368-2371
  1,   1,   1, // 2372-2374
  1, // 2375
  1,   1, // 2376-2377
  1,   1, // 2378-2379
  1,   1,   1, // 2380-2382
  1,   1, // 2383-2384
  2,   1, // 2385-2386
  0 // End operand cycles
};
extern const unsigned ARMForwardingPaths[] = {
 0, // No itinerary
 0,  0,  0, // 1-3
 0,  0,  0, // 4-6
 0,  0, // 7-8
 0,  0, // 9-10
 0,  0, // 11-12
 0,  0, // 13-14
 0,  0, // 15-16
 0,  0, // 17-18
 0,  0, // 19-20
 0,  0, // 21-22
 0,  0,  0, // 23-25
 0,  0,  0, // 26-28
 0,  0,  0,  0, // 29-32
 0,  0,  0,  0, // 33-36
 0,  0,  0, // 37-39
 0,  0,  0, // 40-42
 0,  0,  0,  0, // 43-46
 0,  0,  0,  0,  0, // 47-51
 0,  0,  0,  0, // 52-55
 0,  0,  0,  0, // 56-59
 0,  0,  0, // 60-62
 0,  0,  0, // 63-65
 0,  0, // 66-67
 0,  0, // 68-69
 0,  0,  0, // 70-72
 0,  0,  0, // 73-75
 0,  0,  0, // 76-78
 0,  0,  0, // 79-81
 0, // 82
 0,  0,  0, // 83-85
 0,  0,  0, // 86-88
 0,  0,  0,  0, // 89-92
 0,  0, // 93-94
 0,  0, // 95-96
 0,  0, // 97-98
 0,  0,  0, // 99-101
 0,  0,  0, // 102-104
 0,  0,  0,  0, // 105-108
 0,  0, // 109-110
 0,  0,  0, // 111-113
 0,  0,  0, // 114-116
 0,  0,  0,  0, // 117-120
 0, // 121
 0, // 122
 0,  0, // 123-124
 0,  0, // 125-126
 0,  0,  0, // 127-129
 0, // 130
 0,  0, // 131-132
 0,  0, // 133-134
 0,  0,  0, // 135-137
 0,  0,  0, // 138-140
 0,  0,  0,  0, // 141-144
 0,  0, // 145-146
 0,  0, // 147-148
 0,  0,  0, // 149-151
 0,  0,  0, // 152-154
 0,  0,  0,  0, // 155-158
 0,  0,  0, // 159-161
 0,  0, // 162-163
 0,  0,  0, // 164-166
 0,  0,  0,  0, // 167-170
 0,  0, // 171-172
 0,  0,  0, // 173-175
 0,  0,  0,  0,  0, // 176-180
 0,  0,  0,  0,  0, // 181-185
 0,  0,  0,  0,  0, // 186-190
 0,  0,  0, // 191-193
 0,  0,  0,  0, // 194-197
 0,  0,  0, // 198-200
 0,  0, // 201-202
 0,  0,  0,  0, // 203-206
 0,  0,  0,  0, // 207-210
 0,  0,  0,  0, // 211-214
 0, // 215
 0, // 216
 0, // 217
 0, // 218
 0,  0, // 219-220
 0,  0, // 221-222
 0,  0,  0, // 223-225
 0,  0,  0, // 226-228
 0,  0,  0, // 229-231
 0,  0,  0, // 232-234
 0, // 235
 0,  0, // 236-237
 0,  0, // 238-239
 0,  0,  0, // 240-242
 0,  0,  0, // 243-245
 0,  0,  0, // 246-248
 0,  0, // 249-250
 0,  0,  0, // 251-253
 0,  0,  0, // 254-256
 0,  0,  0,  0, // 257-260
 0,  0,  0, // 261-263
 0,  0,  0, // 264-266
 0,  0,  0,  0, // 267-270
 0,  0, // 271-272
 0,  0,  0, // 273-275
 0, // 276
 0,  0,  0, // 277-279
 0,  0,  0,  0, // 280-283
 0,  0,  0, // 284-286
 0, // 287
 0,  0, // 288-289
 0,  0, // 290-291
 0,  0,  0, // 292-294
 0,  0, // 295-296
 0,  0, // 297-298
 0,  0, // 299-300
 0,  0,  0,  0, // 301-304
 0,  0,  0,  0, // 305-308
 0,  0,  0, // 309-311
 0,  0,  0, // 312-314
 0,  0,  0, // 315-317
 0,  0,  0, // 318-320
 0,  0,  0, // 321-323
 0,  0,  0, // 324-326
 0,  0,  0, // 327-329
 0,  0,  0, // 330-332
 0,  0,  0, // 333-335
 0,  0,  0, // 336-338
 0,  0,  0,  0, // 339-342
 0,  0,  0,  0, // 343-346
 0,  0,  0, // 347-349
 0,  0,  0, // 350-352
 0,  0, // 353-354
 0,  0, // 355-356
 0,  0,  0,  0, // 357-360
 0,  0,  0,  0, // 361-364
 0,  0,  0,  0,  0,  0, // 365-370
 0,  0,  0, // 371-373
 0,  0,  0, // 374-376
 0,  0,  0,  0, // 377-380
 0,  0,  0,  0, // 381-384
 0,  0,  0,  0,  0, // 385-389
 0,  0,  0,  0,  0, // 390-394
 0,  0,  0,  0,  0,  0, // 395-400
 0,  0,  0, // 401-403
 0,  0,  0, // 404-406
 0,  0,  0,  0,  0, // 407-411
 0,  0,  0,  0,  0,  0, // 412-417
 0,  0,  0,  0,  0,  0,  0,  0, // 418-425
 0,  0,  0,  0,  0,  0, // 426-431
 0,  0,  0,  0,  0, // 432-436
 0,  0,  0,  0,  0,  0, // 437-442
 0,  0,  0,  0, // 443-446
 0,  0,  0,  0, // 447-450
 0,  0,  0,  0,  0,  0, // 451-456
 0,  0,  0,  0,  0,  0,  0,  0, // 457-464
 0,  0,  0,  0,  0,  0,  0,  0,  0,  0, // 465-474
 0,  0,  0,  0,  0, // 475-479
 0,  0,  0,  0,  0, // 480-484
 0,  0,  0,  0,  0, // 485-489
 0,  0,  0,  0,  0,  0,  0, // 490-496
 0,  0,  0,  0,  0,  0,  0,  0,  0,  0, // 497-506
 0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, // 507-518
 0,  0,  0,  0,  0,  0, // 519-524
 0,  0,  0,  0, // 525-528
 0,  0,  0,  0, // 529-532
 0,  0,  0,  0, // 533-536
 0,  0,  0,  0, // 537-540
 0,  0,  0,  0, // 541-544
 0,  0,  0,  0, // 545-548
 0,  0, // 549-550
 0,  0, // 551-552
 0,  0,  0, // 553-555
 0, // 556
 0,  0, // 557-558
 0,  0, // 559-560
 0,  0, // 561-562
 0,  0,  0, // 563-565
 0,  0,  0, // 566-568
 0,  0,  0, // 569-571
 0,  0,  0, // 572-574
 0,  0,  0, // 575-577
 0,  0,  0, // 578-580
 0,  0,  0, // 581-583
 0,  0,  0,  0, // 584-587
 0,  0,  0,  0, // 588-591
 0,  0,  0,  0, // 592-595
 0,  0, // 596-597
 0,  0, // 598-599
 0,  0,  0, // 600-602
 0,  0,  0, // 603-605
 0,  0,  0, // 606-608
 0,  0,  0, // 609-611
 0,  0,  0, // 612-614
 0,  0,  0, // 615-617
 0,  0,  0, // 618-620
 0,  0,  0, // 621-623
 0,  0,  0,  0,  0, // 624-628
 0,  0,  0,  0, // 629-632
 0,  0,  0,  0,  0, // 633-637
 0,  0,  0,  0,  0,  0,  0, // 638-644
 0,  0,  0,  0,  0,  0, // 645-650
 0,  0,  0,  0,  0,  0,  0,  0, // 651-658
 0,  0,  0,  0, // 659-662
 0,  0,  0,  0, // 663-666
 0,  0,  0,  0,  0,  0, // 667-672
 0,  0,  0,  0,  0,  0, // 673-678
 0,  0,  0,  0,  0,  0,  0,  0, // 679-686
 0,  0,  0,  0,  0, // 687-691
 0,  0,  0,  0,  0, // 692-696
 0,  0,  0,  0,  0,  0,  0, // 697-703
 0,  0,  0,  0,  0,  0,  0, // 704-710
 0,  0,  0,  0,  0,  0, // 711-716
 0,  0,  0,  0,  0,  0, // 717-722
 0,  0,  0,  0,  0,  0,  0,  0, // 723-730
 0,  0,  0,  0,  0,  0,  0,  0, // 731-738
 0,  0,  0, // 739-741
 0,  0,  0, // 742-744
 0,  0,  0, // 745-747
 0,  0,  0, // 748-750
 0,  0,  0, // 751-753
 0,  0,  0,  0, // 754-757
 0,  0,  0,  0,  0, // 758-762
 0,  0,  0,  0,  0,  0, // 763-768
 0,  0,  0,  0, // 769-772
 0,  0,  0,  0,  0, // 773-777
 0,  0,  0,  0,  0,  0, // 778-783
 0,  0,  0,  0,  0,  0,  0, // 784-790
 0,  0, // 791-792
 0,  0, // 793-794
 0,  0, // 795-796
 0,  0, // 797-798
 0,  0,  0, // 799-801
 0,  0,  0, // 802-804
 0,  0, // 805-806
 0,  0, // 807-808
 0,  0, // 809-810
 0,  0, // 811-812
 0,  0, // 813-814
 0,  0, // 815-816
 0,  0, // 817-818
 0,  0, // 819-820
 0,  0, // 821-822
 0,  0, // 823-824
 0,  0,  0, // 825-827
 0,  0,  0, // 828-830
 0,  0,  0,  0, // 831-834
 0,  0,  0,  0, // 835-838
 0,  0, // 839-840
 0,  0, // 841-842
 0,  0,  0,  0, // 843-846
 0,  0,  0,  0, // 847-850
 0,  0,  0,  0, // 851-854
 0,  0,  0,  0, // 855-858
 0,  0,  0, // 859-861
 0,  0,  0, // 862-864
 0,  0, // 865-866
 0,  0, // 867-868
 0,  0,  0, // 869-871
 0,  0,  0, // 872-874
 0,  0, // 875-876
 0,  0, // 877-878
 0, // 879
 0,  0, // 880-881
 0,  0, // 882-883
 0,  0,  0,  0, // 884-887
 0,  0, // 888-889
 0,  0, // 890-891
CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::A9_LdBypass, // 892-893
CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::A9_LdBypass, CortexA9ItinerariesBypass::A9_LdBypass, // 894-896
CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::A9_LdBypass, CortexA9ItinerariesBypass::NoBypass, // 897-899
CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::A9_LdBypass, // 900-902
CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::A9_LdBypass, CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::NoBypass, // 903-906
 0,  0, // 907-908
 0,  0,  0, // 909-911
 0,  0,  0, // 912-914
 0,  0,  0,  0, // 915-918
 0, // 919
 0, // 920
 0,  0, // 921-922
 0,  0, // 923-924
 0,  0,  0, // 925-927
CortexA9ItinerariesBypass::A9_LdBypass, // 928
CortexA9ItinerariesBypass::A9_LdBypass, CortexA9ItinerariesBypass::A9_LdBypass, // 929-930
CortexA9ItinerariesBypass::A9_LdBypass, CortexA9ItinerariesBypass::NoBypass, // 931-932
CortexA9ItinerariesBypass::A9_LdBypass, CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::NoBypass, // 933-935
 0,  0,  0, // 936-938
 0,  0,  0,  0, // 939-942
 0,  0, // 943-944
CortexA9ItinerariesBypass::A9_LdBypass,  0, // 945-946
CortexA9ItinerariesBypass::A9_LdBypass,  0,  0, // 947-949
CortexA9ItinerariesBypass::A9_LdBypass,  0,  0, // 950-952
CortexA9ItinerariesBypass::A9_LdBypass,  0,  0,  0, // 953-956
CortexA9ItinerariesBypass::A9_LdBypass,  0,  0, // 957-959
CortexA9ItinerariesBypass::A9_LdBypass,  0,  0, // 960-962
CortexA9ItinerariesBypass::A9_LdBypass,  0,  0,  0, // 963-966
CortexA9ItinerariesBypass::A9_LdBypass,  0,  0,  0, // 967-970
CortexA9ItinerariesBypass::A9_LdBypass,  0, // 971-972
CortexA9ItinerariesBypass::A9_LdBypass,  0,  0, // 973-975
CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::A9_LdBypass, // 976-980
CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::A9_LdBypass, // 981-985
CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::A9_LdBypass, // 986-990
CortexA9ItinerariesBypass::A9_LdBypass,  0,  0, // 991-993
CortexA9ItinerariesBypass::A9_LdBypass,  0,  0,  0, // 994-997
CortexA9ItinerariesBypass::A9_LdBypass,  0,  0, // 998-1000
 0,  0, // 1001-1002
 0,  0,  0,  0, // 1003-1006
 0,  0,  0,  0, // 1007-1010
 0,  0,  0,  0, // 1011-1014
 0, // 1015
 0, // 1016
 0, // 1017
 0, // 1018
 0,  0, // 1019-1020
 0,  0, // 1021-1022
 0,  0,  0, // 1023-1025
 0,  0,  0, // 1026-1028
 0,  0,  0, // 1029-1031
 0,  0,  0,  0, // 1032-1035
 0, // 1036
CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::A9_LdBypass, // 1037-1038
 0,  0, // 1039-1040
 0,  0,  0, // 1041-1043
CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::A9_LdBypass, // 1044-1046
CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::NoBypass, CortexA9ItinerariesBypass::A9_LdBypass, // 1047-1049
 0,  0, // 1050-1051
 0,  0,  0, // 1052-1054
 0,  0,  0, // 1055-1057
 0,  0,  0,  0, // 1058-1061
 0,  0,  0, // 1062-1064
 0,  0,  0, // 1065-1067
 0,  0,  0,  0, // 1068-1071
 0,  0, // 1072-1073
 0,  0,  0, // 1074-1076
 0, // 1077
 0,  0,  0, // 1078-1080
 0,  0,  0,  0, // 1081-1084
 0,  0,  0, // 1085-1087
 0, // 1088
 0,  0, // 1089-1090
 0,  0, // 1091-1092
 0,  0,  0, // 1093-1095
 0,  0, // 1096-1097
 0,  0, // 1098-1099
 0,  0, // 1100-1101
 0,  0,  0,  0, // 1102-1105
 0,  0,  0,  0, // 1106-1109
 0,  0,  0, // 1110-1112
 0,  0,  0, // 1113-1115
 0,  0,  0, // 1116-1118
 0,  0,  0, // 1119-1121
 0,  0,  0, // 1122-1124
 0,  0,  0, // 1125-1127
 0,  0,  0, // 1128-1130
 0,  0,  0, // 1131-1133
 0,  0,  0, // 1134-1136
 0,  0,  0, // 1137-1139
 0,  0,  0,  0, // 1140-1143
 0,  0,  0,  0, // 1144-1147
 0,  0,  0, // 1148-1150
 0,  0,  0, // 1151-1153
 0,  0, // 1154-1155
 0,  0, // 1156-1157
 0,  0,  0,  0, // 1158-1161
 0,  0,  0,  0, // 1162-1165
 0,  0,  0,  0,  0,  0, // 1166-1171
 0,  0,  0, // 1172-1174
 0,  0,  0, // 1175-1177
 0,  0,  0,  0, // 1178-1181
 0,  0,  0,  0, // 1182-1185
 0,  0,  0,  0,  0, // 1186-1190
 0,  0,  0,  0,  0, // 1191-1195
 0,  0,  0,  0,  0,  0, // 1196-1201
 0,  0,  0, // 1202-1204
 0,  0,  0, // 1205-1207
 0,  0,  0,  0,  0, // 1208-1212
 0,  0,  0,  0,  0,  0, // 1213-1218
 0,  0,  0,  0,  0,  0,  0,  0, // 1219-1226
 0,  0,  0,  0,  0,  0, // 1227-1232
 0,  0,  0,  0,  0, // 1233-1237
 0,  0,  0,  0,  0,  0, // 1238-1243
 0,  0,  0,  0, // 1244-1247
 0,  0,  0,  0, // 1248-1251
 0,  0,  0,  0,  0,  0, // 1252-1257
 0,  0,  0,  0,  0,  0,  0,  0, // 1258-1265
 0,  0,  0,  0,  0,  0,  0,  0,  0,  0, // 1266-1275
 0,  0,  0,  0,  0, // 1276-1280
 0,  0,  0,  0,  0, // 1281-1285
 0,  0,  0,  0,  0, // 1286-1290
 0,  0,  0,  0,  0,  0,  0, // 1291-1297
 0,  0,  0,  0,  0,  0,  0,  0,  0,  0, // 1298-1307
 0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, // 1308-1319
 0,  0,  0,  0,  0,  0, // 1320-1325
 0,  0,  0,  0, // 1326-1329
 0,  0,  0,  0, // 1330-1333
 0,  0,  0,  0, // 1334-1337
 0,  0,  0,  0, // 1338-1341
 0,  0,  0,  0, // 1342-1345
 0,  0,  0,  0, // 1346-1349
 0,  0, // 1350-1351
 0,  0, // 1352-1353
 0,  0,  0, // 1354-1356
 0, // 1357
 0,  0, // 1358-1359
 0,  0, // 1360-1361
 0,  0, // 1362-1363
 0,  0,  0, // 1364-1366
 0,  0,  0, // 1367-1369
 0,  0,  0, // 1370-1372
 0,  0,  0, // 1373-1375
 0,  0,  0, // 1376-1378
 0,  0,  0, // 1379-1381
 0,  0,  0, // 1382-1384
 0,  0,  0,  0, // 1385-1388
 0,  0,  0,  0, // 1389-1392
 0,  0,  0,  0, // 1393-1396
 0,  0, // 1397-1398
 0,  0, // 1399-1400
 0,  0,  0, // 1401-1403
 0,  0,  0, // 1404-1406
 0,  0,  0, // 1407-1409
 0,  0,  0, // 1410-1412
 0,  0,  0, // 1413-1415
 0,  0,  0, // 1416-1418
 0,  0,  0, // 1419-1421
 0,  0,  0, // 1422-1424
 0,  0,  0,  0,  0, // 1425-1429
 0,  0,  0,  0, // 1430-1433
 0,  0,  0,  0,  0, // 1434-1438
 0,  0,  0,  0,  0,  0,  0, // 1439-1445
 0,  0,  0,  0,  0,  0, // 1446-1451
 0,  0,  0,  0,  0,  0,  0,  0, // 1452-1459
 0,  0,  0,  0, // 1460-1463
 0,  0,  0,  0, // 1464-1467
 0,  0,  0,  0,  0,  0, // 1468-1473
 0,  0,  0,  0,  0,  0, // 1474-1479
 0,  0,  0,  0,  0,  0,  0,  0, // 1480-1487
 0,  0,  0,  0,  0, // 1488-1492
 0,  0,  0,  0,  0, // 1493-1497
 0,  0,  0,  0,  0,  0,  0, // 1498-1504
 0,  0,  0,  0,  0,  0,  0, // 1505-1511
 0,  0,  0,  0,  0,  0, // 1512-1517
 0,  0,  0,  0,  0,  0, // 1518-1523
 0,  0,  0,  0,  0,  0,  0,  0, // 1524-1531
 0,  0,  0,  0,  0,  0,  0,  0, // 1532-1539
 0,  0,  0, // 1540-1542
 0,  0,  0, // 1543-1545
 0,  0,  0, // 1546-1548
 0,  0,  0, // 1549-1551
 0,  0,  0, // 1552-1554
 0,  0,  0,  0, // 1555-1558
 0,  0,  0,  0,  0, // 1559-1563
 0,  0,  0,  0,  0,  0, // 1564-1569
 0,  0,  0,  0, // 1570-1573
 0,  0,  0,  0,  0, // 1574-1578
 0,  0,  0,  0,  0,  0, // 1579-1584
 0,  0,  0,  0,  0,  0,  0, // 1585-1591
 0,  0, // 1592-1593
 0,  0, // 1594-1595
 0,  0, // 1596-1597
 0,  0, // 1598-1599
 0,  0,  0, // 1600-1602
 0,  0,  0, // 1603-1605
 0,  0, // 1606-1607
 0,  0, // 1608-1609
 0,  0, // 1610-1611
 0,  0, // 1612-1613
 0,  0, // 1614-1615
 0,  0, // 1616-1617
 0,  0, // 1618-1619
 0,  0, // 1620-1621
 0,  0,  0, // 1622-1624
 0,  0,  0, // 1625-1627
 0,  0,  0,  0, // 1628-1631
 0,  0,  0,  0, // 1632-1635
 0,  0, // 1636-1637
 0,  0, // 1638-1639
 0,  0,  0,  0, // 1640-1643
 0,  0,  0,  0,  0, // 1644-1648
 0,  0,  0,  0, // 1649-1652
 0,  0,  0,  0, // 1653-1656
 0,  0,  0, // 1657-1659
 0,  0,  0, // 1660-1662
 0,  0, // 1663-1664
 0,  0, // 1665-1666
 0,  0,  0, // 1667-1669
 0,  0,  0, // 1670-1672
 0,  0, // 1673-1674
 0,  0, // 1675-1676
 0, // 1677
 0,  0, // 1678-1679
 0,  0, // 1680-1681
 0,  0,  0,  0, // 1682-1685
 0,  0, // 1686-1687
 0,  0, // 1688-1689
 0,  0, // 1690-1691
 0,  0,  0, // 1692-1694
 0,  0,  0, // 1695-1697
 0,  0,  0, // 1698-1700
 0,  0,  0,  0, // 1701-1704
 0,  0, // 1705-1706
 0,  0,  0, // 1707-1709
 0,  0,  0, // 1710-1712
 0,  0,  0,  0, // 1713-1716
 0, // 1717
 0,  0, // 1718-1719
 0,  0, // 1720-1721
 0,  0, // 1722-1723
 0,  0,  0, // 1724-1726
 0, // 1727
 0,  0, // 1728-1729
 0,  0, // 1730-1731
 0,  0,  0, // 1732-1734
 0,  0,  0, // 1735-1737
 0,  0,  0,  0, // 1738-1741
 0,  0, // 1742-1743
 0,  0, // 1744-1745
 0,  0,  0, // 1746-1748
 0,  0,  0, // 1749-1751
 0,  0,  0,  0, // 1752-1755
 0,  0,  0, // 1756-1758
 0,  0, // 1759-1760
 0,  0,  0, // 1761-1763
 0,  0,  0,  0, // 1764-1767
 0,  0, // 1768-1769
 0,  0,  0, // 1770-1772
 0,  0,  0,  0,  0, // 1773-1777
 0,  0,  0,  0,  0, // 1778-1782
 0,  0,  0,  0,  0, // 1783-1787
 0,  0,  0, // 1788-1790
 0,  0,  0,  0, // 1791-1794
 0,  0,  0, // 1795-1797
 0,  0, // 1798-1799
 0,  0,  0,  0, // 1800-1803
 0,  0,  0,  0, // 1804-1807
 0,  0,  0,  0, // 1808-1811
 0, // 1812
 0, // 1813
 0, // 1814
 0, // 1815
 0,  0, // 1816-1817
 0,  0, // 1818-1819
 0,  0,  0, // 1820-1822
 0,  0,  0, // 1823-1825
 0,  0,  0, // 1826-1828
 0,  0,  0,  0, // 1829-1832
 0, // 1833
 0,  0, // 1834-1835
 0,  0, // 1836-1837
 0,  0,  0, // 1838-1840
 0,  0,  0, // 1841-1843
 0,  0,  0, // 1844-1846
 0,  0, // 1847-1848
 0,  0,  0, // 1849-1851
 0,  0,  0, // 1852-1854
 0,  0,  0,  0, // 1855-1858
 0,  0,  0, // 1859-1861
 0,  0,  0, // 1862-1864
 0,  0,  0,  0, // 1865-1868
 0,  0, // 1869-1870
 0,  0,  0, // 1871-1873
 0, // 1874
 0,  0,  0, // 1875-1877
 0,  0,  0,  0, // 1878-1881
 0,  0,  0, // 1882-1884
 0, // 1885
 0,  0, // 1886-1887
 0,  0, // 1888-1889
 0,  0,  0, // 1890-1892
 0,  0, // 1893-1894
 0,  0, // 1895-1896
 0,  0, // 1897-1898
 0,  0,  0,  0, // 1899-1902
 0,  0,  0,  0, // 1903-1906
 0,  0,  0, // 1907-1909
 0,  0,  0, // 1910-1912
 0,  0,  0, // 1913-1915
 0,  0,  0, // 1916-1918
 0,  0,  0, // 1919-1921
 0,  0,  0, // 1922-1924
 0,  0,  0, // 1925-1927
 0,  0,  0, // 1928-1930
 0,  0,  0, // 1931-1933
 0,  0,  0, // 1934-1936
 0,  0,  0, // 1937-1939
 0,  0,  0, // 1940-1942
 0,  0,  0, // 1943-1945
 0,  0,  0, // 1946-1948
 0,  0,  0, // 1949-1951
 0,  0,  0, // 1952-1954
 0,  0,  0,  0, // 1955-1958
 0,  0,  0,  0, // 1959-1962
 0,  0,  0,  0, // 1963-1966
 0,  0,  0,  0, // 1967-1970
 0,  0, // 1971-1972
 0,  0, // 1973-1974
 0,  0, // 1975-1976
 0, // 1977
 0,  0, // 1978-1979
 0,  0, // 1980-1981
 0,  0, // 1982-1983
 0,  0,  0, // 1984-1986
 0,  0,  0, // 1987-1989
 0,  0,  0, // 1990-1992
 0,  0,  0, // 1993-1995
 0,  0,  0, // 1996-1998
 0,  0,  0, // 1999-2001
 0,  0,  0, // 2002-2004
 0,  0,  0,  0, // 2005-2008
 0,  0,  0,  0, // 2009-2012
 0,  0,  0,  0, // 2013-2016
 0,  0, // 2017-2018
 0,  0, // 2019-2020
 0,  0,  0, // 2021-2023
 0,  0,  0, // 2024-2026
 0,  0,  0, // 2027-2029
 0,  0,  0, // 2030-2032
 0,  0,  0, // 2033-2035
 0,  0,  0, // 2036-2038
 0,  0,  0, // 2039-2041
 0,  0,  0, // 2042-2044
 0,  0,  0, // 2045-2047
 0,  0,  0, // 2048-2050
 0,  0,  0, // 2051-2053
 0,  0,  0,  0, // 2054-2057
 0,  0,  0,  0,  0, // 2058-2062
 0,  0,  0,  0,  0,  0, // 2063-2068
 0,  0,  0, // 2069-2071
 0,  0,  0,  0, // 2072-2075
 0,  0,  0,  0,  0, // 2076-2080
 0,  0,  0,  0,  0,  0, // 2081-2086
 0,  0, // 2087-2088
 0,  0, // 2089-2090
 0,  0, // 2091-2092
 0,  0, // 2093-2094
 0,  0,  0, // 2095-2097
 0,  0,  0, // 2098-2100
 0,  0, // 2101-2102
 0,  0, // 2103-2104
 0,  0, // 2105-2106
 0,  0, // 2107-2108
 0,  0, // 2109-2110
 0,  0, // 2111-2112
 0,  0, // 2113-2114
 0,  0, // 2115-2116
 0,  0, // 2117-2118
 0,  0, // 2119-2120
 0,  0,  0, // 2121-2123
 0,  0,  0, // 2124-2126
 0,  0,  0, // 2127-2129
 0,  0,  0, // 2130-2132
 0,  0, // 2133-2134
 0,  0, // 2135-2136
 0,  0,  0,  0, // 2137-2140
 0,  0,  0,  0,  0, // 2141-2145
 0,  0,  0, // 2146-2148
 0,  0,  0, // 2149-2151
 0,  0,  0, // 2152-2154
 0,  0, // 2155-2156
 0,  0, // 2157-2158
 0,  0, // 2159-2160
 0,  0,  0, // 2161-2163
 0,  0,  0, // 2164-2166
 0,  0, // 2167-2168
 0,  0,  0, // 2169-2171
 0, // 2172
 0,  0, // 2173-2174
 0,  0, // 2175-2176
 0,  0,  0, // 2177-2179
 0,  0, // 2180-2181
 0,  0, // 2182-2183
 0,  0, // 2184-2185
 0,  0,  0, // 2186-2188
 0,  0,  0, // 2189-2191
 0,  0,  0, // 2192-2194
 0,  0,  0,  0, // 2195-2198
 0,  0, // 2199-2200
 0,  0,  0, // 2201-2203
 0,  0,  0, // 2204-2206
 0,  0,  0,  0, // 2207-2210
 0, // 2211
 0, // 2212
 0,  0, // 2213-2214
 0,  0, // 2215-2216
 0,  0,  0, // 2217-2219
 0, // 2220
 0,  0, // 2221-2222
 0,  0, // 2223-2224
 0,  0,  0, // 2225-2227
 0,  0,  0, // 2228-2230
 0,  0,  0, // 2231-2233
 0,  0,  0,  0, // 2234-2237
 0,  0, // 2238-2239
 0,  0, // 2240-2241
 0,  0,  0, // 2242-2244
 0,  0,  0, // 2245-2247
 0,  0,  0,  0, // 2248-2251
 0,  0,  0, // 2252-2254
 0,  0,  0, // 2255-2257
 0,  0,  0,  0, // 2258-2261
 0,  0,  0,  0, // 2262-2265
 0,  0, // 2266-2267
 0,  0,  0, // 2268-2270
 0,  0,  0,  0,  0, // 2271-2275
 0,  0,  0,  0,  0, // 2276-2280
 0,  0,  0,  0,  0, // 2281-2285
 0,  0,  0, // 2286-2288
 0,  0,  0,  0, // 2289-2292
 0,  0,  0, // 2293-2295
 0,  0, // 2296-2297
 0,  0,  0,  0, // 2298-2301
 0,  0,  0,  0, // 2302-2305
 0,  0,  0,  0, // 2306-2309
 0, // 2310
 0, // 2311
 0, // 2312
 0, // 2313
 0, // 2314
 0, // 2315
 0, // 2316
 0,  0,  0, // 2317-2319
 0,  0,  0, // 2320-2322
 0,  0,  0,  0, // 2323-2326
 0, // 2327
 0, // 2328
 0, // 2329
 0, // 2330
 0,  0,  0, // 2331-2333
 0,  0,  0, // 2334-2336
 0,  0, // 2337-2338
 0,  0,  0, // 2339-2341
 0,  0,  0, // 2342-2344
 0,  0,  0,  0, // 2345-2348
 0,  0,  0, // 2349-2351
 0,  0,  0, // 2352-2354
 0,  0,  0,  0, // 2355-2358
 0,  0, // 2359-2360
 0,  0,  0, // 2361-2363
 0, // 2364
 0,  0,  0, // 2365-2367
 0,  0,  0,  0, // 2368-2371
 0,  0,  0, // 2372-2374
 0, // 2375
 0,  0, // 2376-2377
 0,  0, // 2378-2379
 0,  0,  0, // 2380-2382
 0,  0, // 2383-2384
 0,  0, // 2385-2386
 0 // End bypass tables
};

static const llvm::InstrItinerary *NoItineraries = 0;

static const llvm::InstrItinerary ARMV6Itineraries[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoItinerary
  { 1, 1, 2, 0, 0 }, // 1 IIC_Br
  { 0, 0, 0, 0, 0 }, // 2 IIC_Preload
  { 0, 0, 0, 0, 0 }, // 3 IIC_VABAD
  { 0, 0, 0, 0, 0 }, // 4 IIC_VABAQ
  { 0, 0, 0, 0, 0 }, // 5 IIC_VBIND
  { 0, 0, 0, 0, 0 }, // 6 IIC_VBINQ
  { 0, 0, 0, 0, 0 }, // 7 IIC_VBINi4D
  { 0, 0, 0, 0, 0 }, // 8 IIC_VBINi4Q
  { 0, 0, 0, 0, 0 }, // 9 IIC_VBINiD
  { 0, 0, 0, 0, 0 }, // 10 IIC_VBINiQ
  { 0, 0, 0, 0, 0 }, // 11 IIC_VCNTiD
  { 0, 0, 0, 0, 0 }, // 12 IIC_VCNTiQ
  { 0, 0, 0, 0, 0 }, // 13 IIC_VEXTD
  { 0, 0, 0, 0, 0 }, // 14 IIC_VEXTQ
  { 0, 0, 0, 0, 0 }, // 15 IIC_VFMACD
  { 0, 0, 0, 0, 0 }, // 16 IIC_VFMACQ
  { 0, 0, 0, 0, 0 }, // 17 IIC_VFMULD
  { 0, 0, 0, 0, 0 }, // 18 IIC_VFMULQ
  { 0, 0, 0, 0, 0 }, // 19 IIC_VLD1
  { 0, 0, 0, 0, 0 }, // 20 IIC_VLD1dup
  { 0, 0, 0, 0, 0 }, // 21 IIC_VLD1dupu
  { 0, 0, 0, 0, 0 }, // 22 IIC_VLD1ln
  { 0, 0, 0, 0, 0 }, // 23 IIC_VLD1lnu
  { 0, 0, 0, 0, 0 }, // 24 IIC_VLD1u
  { 0, 0, 0, 0, 0 }, // 25 IIC_VLD1x2
  { 0, 0, 0, 0, 0 }, // 26 IIC_VLD1x2u
  { 0, 0, 0, 0, 0 }, // 27 IIC_VLD1x3
  { 0, 0, 0, 0, 0 }, // 28 IIC_VLD1x3u
  { 0, 0, 0, 0, 0 }, // 29 IIC_VLD1x4
  { 0, 0, 0, 0, 0 }, // 30 IIC_VLD1x4u
  { 0, 0, 0, 0, 0 }, // 31 IIC_VLD2
  { 0, 0, 0, 0, 0 }, // 32 IIC_VLD2dup
  { 0, 0, 0, 0, 0 }, // 33 IIC_VLD2dupu
  { 0, 0, 0, 0, 0 }, // 34 IIC_VLD2ln
  { 0, 0, 0, 0, 0 }, // 35 IIC_VLD2lnu
  { 0, 0, 0, 0, 0 }, // 36 IIC_VLD2u
  { 0, 0, 0, 0, 0 }, // 37 IIC_VLD2x2
  { 0, 0, 0, 0, 0 }, // 38 IIC_VLD2x2u
  { 0, 0, 0, 0, 0 }, // 39 IIC_VLD3
  { 0, 0, 0, 0, 0 }, // 40 IIC_VLD3dup
  { 0, 0, 0, 0, 0 }, // 41 IIC_VLD3dupu
  { 0, 0, 0, 0, 0 }, // 42 IIC_VLD3ln
  { 0, 0, 0, 0, 0 }, // 43 IIC_VLD3lnu
  { 0, 0, 0, 0, 0 }, // 44 IIC_VLD3u
  { 0, 0, 0, 0, 0 }, // 45 IIC_VLD4
  { 0, 0, 0, 0, 0 }, // 46 IIC_VLD4dup
  { 0, 0, 0, 0, 0 }, // 47 IIC_VLD4dupu
  { 0, 0, 0, 0, 0 }, // 48 IIC_VLD4ln
  { 0, 0, 0, 0, 0 }, // 49 IIC_VLD4lnu
  { 0, 0, 0, 0, 0 }, // 50 IIC_VLD4u
  { 0, 0, 0, 0, 0 }, // 51 IIC_VMACD
  { 0, 0, 0, 0, 0 }, // 52 IIC_VMACQ
  { 0, 0, 0, 0, 0 }, // 53 IIC_VMACi16D
  { 0, 0, 0, 0, 0 }, // 54 IIC_VMACi16Q
  { 0, 0, 0, 0, 0 }, // 55 IIC_VMACi32D
  { 0, 0, 0, 0, 0 }, // 56 IIC_VMACi32Q
  { 0, 0, 0, 0, 0 }, // 57 IIC_VMOVD
  { 0, 0, 0, 0, 0 }, // 58 IIC_VMOVIS
  { 0, 0, 0, 0, 0 }, // 59 IIC_VMOVISL
  { 0, 0, 0, 0, 0 }, // 60 IIC_VMOVImm
  { 0, 0, 0, 0, 0 }, // 61 IIC_VMOVN
  { 0, 0, 0, 0, 0 }, // 62 IIC_VMOVQ
  { 0, 0, 0, 0, 0 }, // 63 IIC_VMOVSI
  { 0, 0, 0, 0, 0 }, // 64 IIC_VMULi16D
  { 0, 0, 0, 0, 0 }, // 65 IIC_VMULi16Q
  { 0, 0, 0, 0, 0 }, // 66 IIC_VMULi32D
  { 0, 0, 0, 0, 0 }, // 67 IIC_VMULi32Q
  { 0, 0, 0, 0, 0 }, // 68 IIC_VPALiD
  { 0, 0, 0, 0, 0 }, // 69 IIC_VPALiQ
  { 0, 0, 0, 0, 0 }, // 70 IIC_VPBIND
  { 0, 0, 0, 0, 0 }, // 71 IIC_VPERMD
  { 0, 0, 0, 0, 0 }, // 72 IIC_VPERMQ
  { 0, 0, 0, 0, 0 }, // 73 IIC_VPERMQ3
  { 0, 0, 0, 0, 0 }, // 74 IIC_VQUNAiD
  { 0, 0, 0, 0, 0 }, // 75 IIC_VQUNAiQ
  { 0, 0, 0, 0, 0 }, // 76 IIC_VRECSD
  { 0, 0, 0, 0, 0 }, // 77 IIC_VRECSQ
  { 0, 0, 0, 0, 0 }, // 78 IIC_VSHLi4D
  { 0, 0, 0, 0, 0 }, // 79 IIC_VSHLi4Q
  { 0, 0, 0, 0, 0 }, // 80 IIC_VSHLiD
  { 0, 0, 0, 0, 0 }, // 81 IIC_VSHLiQ
  { 0, 0, 0, 0, 0 }, // 82 IIC_VST1
  { 0, 0, 0, 0, 0 }, // 83 IIC_VST1ln
  { 0, 0, 0, 0, 0 }, // 84 IIC_VST1lnu
  { 0, 0, 0, 0, 0 }, // 85 IIC_VST1x2
  { 0, 0, 0, 0, 0 }, // 86 IIC_VST1x3
  { 0, 0, 0, 0, 0 }, // 87 IIC_VST1x3u
  { 0, 0, 0, 0, 0 }, // 88 IIC_VST1x4
  { 0, 0, 0, 0, 0 }, // 89 IIC_VST1x4u
  { 0, 0, 0, 0, 0 }, // 90 IIC_VST2
  { 0, 0, 0, 0, 0 }, // 91 IIC_VST2ln
  { 0, 0, 0, 0, 0 }, // 92 IIC_VST2lnu
  { 0, 0, 0, 0, 0 }, // 93 IIC_VST2x2
  { 0, 0, 0, 0, 0 }, // 94 IIC_VST2x2u
  { 0, 0, 0, 0, 0 }, // 95 IIC_VST3
  { 0, 0, 0, 0, 0 }, // 96 IIC_VST3ln
  { 0, 0, 0, 0, 0 }, // 97 IIC_VST3lnu
  { 0, 0, 0, 0, 0 }, // 98 IIC_VST3u
  { 0, 0, 0, 0, 0 }, // 99 IIC_VST4
  { 0, 0, 0, 0, 0 }, // 100 IIC_VST4ln
  { 0, 0, 0, 0, 0 }, // 101 IIC_VST4lnu
  { 0, 0, 0, 0, 0 }, // 102 IIC_VST4u
  { 0, 0, 0, 0, 0 }, // 103 IIC_VSUBi4D
  { 0, 0, 0, 0, 0 }, // 104 IIC_VSUBi4Q
  { 0, 0, 0, 0, 0 }, // 105 IIC_VSUBiD
  { 0, 0, 0, 0, 0 }, // 106 IIC_VSUBiQ
  { 0, 0, 0, 0, 0 }, // 107 IIC_VTB1
  { 0, 0, 0, 0, 0 }, // 108 IIC_VTB2
  { 0, 0, 0, 0, 0 }, // 109 IIC_VTB3
  { 0, 0, 0, 0, 0 }, // 110 IIC_VTB4
  { 0, 0, 0, 0, 0 }, // 111 IIC_VTBX1
  { 0, 0, 0, 0, 0 }, // 112 IIC_VTBX2
  { 0, 0, 0, 0, 0 }, // 113 IIC_VTBX3
  { 0, 0, 0, 0, 0 }, // 114 IIC_VTBX4
  { 0, 0, 0, 0, 0 }, // 115 IIC_VUNAD
  { 0, 0, 0, 0, 0 }, // 116 IIC_VUNAQ
  { 0, 0, 0, 0, 0 }, // 117 IIC_VUNAiD
  { 0, 0, 0, 0, 0 }, // 118 IIC_VUNAiQ
  { 1, 1, 2, 1, 4 }, // 119 IIC_fpALU32
  { 1, 1, 2, 4, 7 }, // 120 IIC_fpALU64
  { 1, 1, 2, 7, 9 }, // 121 IIC_fpCMP32
  { 1, 1, 2, 9, 11 }, // 122 IIC_fpCMP64
  { 1, 1, 2, 11, 13 }, // 123 IIC_fpCVTDI
  { 1, 1, 2, 13, 15 }, // 124 IIC_fpCVTDS
  { 0, 0, 0, 0, 0 }, // 125 IIC_fpCVTHS
  { 1, 1, 2, 15, 17 }, // 126 IIC_fpCVTID
  { 1, 1, 2, 17, 19 }, // 127 IIC_fpCVTIS
  { 1, 1, 2, 19, 21 }, // 128 IIC_fpCVTSD
  { 0, 0, 0, 0, 0 }, // 129 IIC_fpCVTSH
  { 1, 1, 2, 21, 23 }, // 130 IIC_fpCVTSI
  { 1, 2, 3, 23, 26 }, // 131 IIC_fpDIV32
  { 1, 3, 4, 26, 29 }, // 132 IIC_fpDIV64
  { 1, 1, 2, 29, 33 }, // 133 IIC_fpFMAC32
  { 1, 4, 5, 33, 37 }, // 134 IIC_fpFMAC64
  { 1, 1, 2, 37, 40 }, // 135 IIC_fpLoad32
  { 1, 1, 2, 40, 43 }, // 136 IIC_fpLoad64
  { 1, 5, 6, 43, 47 }, // 137 IIC_fpLoad_m
  { 1, 5, 6, 47, 52 }, // 138 IIC_fpLoad_mu
  { 1, 1, 2, 52, 56 }, // 139 IIC_fpMAC32
  { 1, 4, 5, 56, 60 }, // 140 IIC_fpMAC64
  { 1, 1, 2, 60, 63 }, // 141 IIC_fpMOVDI
  { 1, 1, 2, 63, 66 }, // 142 IIC_fpMOVID
  { 1, 1, 2, 66, 68 }, // 143 IIC_fpMOVIS
  { 1, 1, 2, 68, 70 }, // 144 IIC_fpMOVSI
  { 1, 1, 2, 70, 73 }, // 145 IIC_fpMUL32
  { 1, 4, 5, 73, 76 }, // 146 IIC_fpMUL64
  { 1, 2, 3, 76, 79 }, // 147 IIC_fpSQRT32
  { 1, 3, 4, 79, 82 }, // 148 IIC_fpSQRT64
  { 1, 1, 2, 82, 83 }, // 149 IIC_fpSTAT
  { 1, 1, 2, 83, 86 }, // 150 IIC_fpStore32
  { 1, 1, 2, 86, 89 }, // 151 IIC_fpStore64
  { 1, 5, 6, 89, 93 }, // 152 IIC_fpStore_m
  { 1, 1, 2, 93, 95 }, // 153 IIC_fpUNA32
  { 1, 1, 2, 95, 97 }, // 154 IIC_fpUNA64
  { 1, 1, 2, 97, 99 }, // 155 IIC_iALUi
  { 1, 1, 2, 99, 102 }, // 156 IIC_iALUr
  { 1, 1, 2, 102, 105 }, // 157 IIC_iALUsi
  { 0, 0, 0, 0, 0 }, // 158 IIC_iALUsir
  { 1, 4, 5, 105, 109 }, // 159 IIC_iALUsr
  { 1, 1, 2, 0, 0 }, // 160 IIC_iALUx
  { 1, 1, 2, 109, 111 }, // 161 IIC_iBITi
  { 1, 1, 2, 111, 114 }, // 162 IIC_iBITr
  { 1, 1, 2, 114, 117 }, // 163 IIC_iBITsi
  { 1, 4, 5, 117, 121 }, // 164 IIC_iBITsr
  { 1, 1, 2, 121, 122 }, // 165 IIC_iCMOVi
  { 1, 6, 8, 122, 123 }, // 166 IIC_iCMOVix2
  { 1, 1, 2, 123, 125 }, // 167 IIC_iCMOVr
  { 1, 1, 2, 125, 127 }, // 168 IIC_iCMOVsi
  { 1, 1, 2, 127, 130 }, // 169 IIC_iCMOVsr
  { 1, 1, 2, 130, 131 }, // 170 IIC_iCMPi
  { 1, 1, 2, 131, 133 }, // 171 IIC_iCMPr
  { 1, 1, 2, 133, 135 }, // 172 IIC_iCMPsi
  { 1, 4, 5, 135, 138 }, // 173 IIC_iCMPsr
  { 0, 0, 0, 0, 0 }, // 174 IIC_iDIV
  { 1, 1, 2, 138, 141 }, // 175 IIC_iEXTAr
  { 1, 4, 5, 141, 145 }, // 176 IIC_iEXTAsr
  { 1, 1, 2, 145, 147 }, // 177 IIC_iEXTr
  { 1, 1, 2, 147, 149 }, // 178 IIC_iLoad_bh_i
  { 1, 1, 2, 149, 152 }, // 179 IIC_iLoad_bh_iu
  { 1, 1, 2, 152, 155 }, // 180 IIC_iLoad_bh_r
  { 1, 1, 2, 155, 159 }, // 181 IIC_iLoad_bh_ru
  { 1, 4, 5, 159, 162 }, // 182 IIC_iLoad_bh_si
  { 1, 1, 2, 162, 164 }, // 183 IIC_iLoad_d_i
  { 1, 1, 2, 164, 167 }, // 184 IIC_iLoad_d_r
  { 1, 1, 2, 167, 171 }, // 185 IIC_iLoad_d_ru
  { 1, 1, 2, 171, 173 }, // 186 IIC_iLoad_i
  { 1, 1, 2, 173, 176 }, // 187 IIC_iLoad_iu
  { 1, 5, 6, 176, 181 }, // 188 IIC_iLoad_m
  { 1, 8, 10, 181, 186 }, // 189 IIC_iLoad_mBr
  { 1, 5, 6, 186, 191 }, // 190 IIC_iLoad_mu
  { 1, 1, 2, 191, 194 }, // 191 IIC_iLoad_r
  { 1, 1, 2, 194, 198 }, // 192 IIC_iLoad_ru
  { 1, 4, 5, 198, 201 }, // 193 IIC_iLoad_si
  { 1, 6, 8, 201, 203 }, // 194 IIC_iLoadiALU
  { 1, 1, 2, 203, 207 }, // 195 IIC_iMAC16
  { 1, 4, 5, 207, 211 }, // 196 IIC_iMAC32
  { 1, 5, 6, 211, 215 }, // 197 IIC_iMAC64
  { 1, 1, 2, 215, 216 }, // 198 IIC_iMOVi
  { 1, 6, 8, 216, 217 }, // 199 IIC_iMOVix2
  { 1, 10, 13, 217, 218 }, // 200 IIC_iMOVix2addpc
  { 1, 10, 13, 218, 219 }, // 201 IIC_iMOVix2ld
  { 1, 1, 2, 219, 221 }, // 202 IIC_iMOVr
  { 1, 1, 2, 221, 223 }, // 203 IIC_iMOVsi
  { 1, 4, 5, 223, 226 }, // 204 IIC_iMOVsr
  { 1, 1, 2, 226, 229 }, // 205 IIC_iMUL16
  { 1, 4, 5, 229, 232 }, // 206 IIC_iMUL32
  { 1, 5, 6, 232, 235 }, // 207 IIC_iMUL64
  { 1, 1, 2, 235, 236 }, // 208 IIC_iMVNi
  { 1, 1, 2, 236, 238 }, // 209 IIC_iMVNr
  { 1, 1, 2, 238, 240 }, // 210 IIC_iMVNsi
  { 1, 4, 5, 240, 243 }, // 211 IIC_iMVNsr
  { 1, 5, 6, 243, 246 }, // 212 IIC_iPop
  { 1, 8, 10, 246, 249 }, // 213 IIC_iPop_Br
  { 1, 1, 2, 249, 251 }, // 214 IIC_iStore_bh_i
  { 1, 1, 2, 251, 254 }, // 215 IIC_iStore_bh_iu
  { 1, 1, 2, 254, 257 }, // 216 IIC_iStore_bh_r
  { 1, 1, 2, 257, 261 }, // 217 IIC_iStore_bh_ru
  { 1, 4, 5, 261, 264 }, // 218 IIC_iStore_bh_si
  { 1, 1, 2, 264, 267 }, // 219 IIC_iStore_d_r
  { 1, 1, 2, 267, 271 }, // 220 IIC_iStore_d_ru
  { 1, 1, 2, 271, 273 }, // 221 IIC_iStore_i
  { 1, 1, 2, 273, 276 }, // 222 IIC_iStore_iu
  { 1, 5, 6, 0, 0 }, // 223 IIC_iStore_m
  { 1, 5, 6, 276, 277 }, // 224 IIC_iStore_mu
  { 1, 1, 2, 277, 280 }, // 225 IIC_iStore_r
  { 1, 1, 2, 280, 284 }, // 226 IIC_iStore_ru
  { 1, 4, 5, 284, 287 }, // 227 IIC_iStore_si
  { 1, 1, 2, 287, 288 }, // 228 IIC_iTSTi
  { 1, 1, 2, 288, 290 }, // 229 IIC_iTSTr
  { 1, 1, 2, 290, 292 }, // 230 IIC_iTSTsi
  { 1, 4, 5, 292, 295 }, // 231 IIC_iTSTsr
  { 1, 1, 2, 295, 297 }, // 232 IIC_iUNAr
  { 1, 1, 2, 297, 299 }, // 233 IIC_iUNAsi
  { 0, ~0U, ~0U, ~0U, ~0U } // end marker
};

static const llvm::InstrItinerary CortexA9Itineraries[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoItinerary
  { 1, 13, 16, 0, 0 }, // 1 IIC_Br
  { 1, 16, 17, 299, 301 }, // 2 IIC_Preload
  { 1, 17, 22, 301, 305 }, // 3 IIC_VABAD
  { 1, 22, 27, 305, 309 }, // 4 IIC_VABAQ
  { 1, 17, 22, 309, 312 }, // 5 IIC_VBIND
  { 1, 27, 32, 312, 315 }, // 6 IIC_VBINQ
  { 1, 17, 22, 315, 318 }, // 7 IIC_VBINi4D
  { 1, 17, 22, 318, 321 }, // 8 IIC_VBINi4Q
  { 1, 17, 22, 321, 324 }, // 9 IIC_VBINiD
  { 1, 17, 22, 324, 327 }, // 10 IIC_VBINiQ
  { 1, 17, 22, 327, 330 }, // 11 IIC_VCNTiD
  { 1, 27, 32, 330, 333 }, // 12 IIC_VCNTiQ
  { 1, 17, 22, 333, 336 }, // 13 IIC_VEXTD
  { 1, 27, 32, 336, 339 }, // 14 IIC_VEXTQ
  { 1, 27, 32, 339, 343 }, // 15 IIC_VFMACD
  { 1, 32, 37, 343, 347 }, // 16 IIC_VFMACQ
  { 1, 17, 22, 347, 350 }, // 17 IIC_VFMULD
  { 1, 37, 42, 350, 353 }, // 18 IIC_VFMULQ
  { 1, 42, 48, 353, 355 }, // 19 IIC_VLD1
  { 1, 42, 48, 355, 357 }, // 20 IIC_VLD1dup
  { 1, 42, 48, 357, 361 }, // 21 IIC_VLD1dupu
  { 1, 48, 54, 361, 365 }, // 22 IIC_VLD1ln
  { 1, 48, 54, 365, 371 }, // 23 IIC_VLD1lnu
  { 1, 42, 48, 371, 374 }, // 24 IIC_VLD1u
  { 1, 42, 48, 374, 377 }, // 25 IIC_VLD1x2
  { 1, 42, 48, 377, 381 }, // 26 IIC_VLD1x2u
  { 1, 48, 54, 381, 385 }, // 27 IIC_VLD1x3
  { 1, 48, 54, 385, 390 }, // 28 IIC_VLD1x3u
  { 1, 48, 54, 390, 395 }, // 29 IIC_VLD1x4
  { 1, 48, 54, 395, 401 }, // 30 IIC_VLD1x4u
  { 1, 42, 48, 401, 404 }, // 31 IIC_VLD2
  { 1, 42, 48, 404, 407 }, // 32 IIC_VLD2dup
  { 1, 42, 48, 407, 412 }, // 33 IIC_VLD2dupu
  { 1, 48, 54, 412, 418 }, // 34 IIC_VLD2ln
  { 1, 48, 54, 418, 426 }, // 35 IIC_VLD2lnu
  { 1, 42, 48, 426, 432 }, // 36 IIC_VLD2u
  { 1, 48, 54, 432, 437 }, // 37 IIC_VLD2x2
  { 1, 48, 54, 437, 443 }, // 38 IIC_VLD2x2u
  { 1, 54, 60, 443, 447 }, // 39 IIC_VLD3
  { 1, 54, 60, 447, 451 }, // 40 IIC_VLD3dup
  { 1, 54, 60, 451, 457 }, // 41 IIC_VLD3dupu
  { 1, 60, 66, 457, 465 }, // 42 IIC_VLD3ln
  { 1, 60, 66, 465, 475 }, // 43 IIC_VLD3lnu
  { 1, 54, 60, 475, 480 }, // 44 IIC_VLD3u
  { 1, 54, 60, 480, 485 }, // 45 IIC_VLD4
  { 1, 48, 54, 485, 490 }, // 46 IIC_VLD4dup
  { 1, 48, 54, 490, 497 }, // 47 IIC_VLD4dupu
  { 1, 66, 72, 497, 507 }, // 48 IIC_VLD4ln
  { 1, 66, 72, 507, 519 }, // 49 IIC_VLD4lnu
  { 1, 54, 60, 519, 525 }, // 50 IIC_VLD4u
  { 1, 27, 32, 525, 529 }, // 51 IIC_VMACD
  { 1, 32, 37, 529, 533 }, // 52 IIC_VMACQ
  { 1, 17, 22, 533, 537 }, // 53 IIC_VMACi16D
  { 1, 27, 32, 537, 541 }, // 54 IIC_VMACi16Q
  { 1, 27, 32, 541, 545 }, // 55 IIC_VMACi32D
  { 1, 32, 37, 545, 549 }, // 56 IIC_VMACi32Q
  { 1, 17, 22, 549, 551 }, // 57 IIC_VMOVD
  { 1, 72, 77, 551, 553 }, // 58 IIC_VMOVIS
  { 1, 77, 82, 553, 556 }, // 59 IIC_VMOVISL
  { 1, 17, 22, 556, 557 }, // 60 IIC_VMOVImm
  { 1, 17, 22, 557, 559 }, // 61 IIC_VMOVN
  { 1, 17, 22, 559, 561 }, // 62 IIC_VMOVQ
  { 1, 72, 77, 561, 563 }, // 63 IIC_VMOVSI
  { 1, 17, 22, 563, 566 }, // 64 IIC_VMULi16D
  { 1, 27, 32, 566, 569 }, // 65 IIC_VMULi16Q
  { 1, 27, 32, 569, 572 }, // 66 IIC_VMULi32D
  { 1, 32, 37, 572, 575 }, // 67 IIC_VMULi32Q
  { 1, 17, 22, 575, 578 }, // 68 IIC_VPALiD
  { 1, 22, 27, 578, 581 }, // 69 IIC_VPALiQ
  { 1, 17, 22, 581, 584 }, // 70 IIC_VPBIND
  { 1, 17, 22, 584, 588 }, // 71 IIC_VPERMD
  { 1, 27, 32, 588, 592 }, // 72 IIC_VPERMQ
  { 1, 82, 87, 592, 596 }, // 73 IIC_VPERMQ3
  { 1, 17, 22, 596, 598 }, // 74 IIC_VQUNAiD
  { 1, 17, 22, 598, 600 }, // 75 IIC_VQUNAiQ
  { 1, 87, 92, 600, 603 }, // 76 IIC_VRECSD
  { 1, 92, 97, 603, 606 }, // 77 IIC_VRECSQ
  { 1, 17, 22, 606, 609 }, // 78 IIC_VSHLi4D
  { 1, 17, 22, 609, 612 }, // 79 IIC_VSHLi4Q
  { 1, 17, 22, 612, 615 }, // 80 IIC_VSHLiD
  { 1, 17, 22, 615, 618 }, // 81 IIC_VSHLiQ
  { 1, 97, 103, 618, 621 }, // 82 IIC_VST1
  { 1, 97, 103, 621, 624 }, // 83 IIC_VST1ln
  { 1, 97, 103, 624, 629 }, // 84 IIC_VST1lnu
  { 1, 97, 103, 629, 633 }, // 85 IIC_VST1x2
  { 1, 103, 109, 633, 638 }, // 86 IIC_VST1x3
  { 1, 103, 109, 638, 645 }, // 87 IIC_VST1x3u
  { 1, 103, 109, 645, 651 }, // 88 IIC_VST1x4
  { 1, 103, 109, 651, 659 }, // 89 IIC_VST1x4u
  { 1, 97, 103, 659, 663 }, // 90 IIC_VST2
  { 1, 97, 103, 663, 667 }, // 91 IIC_VST2ln
  { 1, 97, 103, 667, 673 }, // 92 IIC_VST2lnu
  { 1, 109, 115, 673, 679 }, // 93 IIC_VST2x2
  { 1, 109, 115, 679, 687 }, // 94 IIC_VST2x2u
  { 1, 103, 109, 687, 692 }, // 95 IIC_VST3
  { 1, 109, 115, 692, 697 }, // 96 IIC_VST3ln
  { 1, 109, 115, 697, 704 }, // 97 IIC_VST3lnu
  { 1, 103, 109, 704, 711 }, // 98 IIC_VST3u
  { 1, 103, 109, 711, 717 }, // 99 IIC_VST4
  { 1, 103, 109, 717, 723 }, // 100 IIC_VST4ln
  { 1, 103, 109, 723, 731 }, // 101 IIC_VST4lnu
  { 1, 103, 109, 731, 739 }, // 102 IIC_VST4u
  { 1, 17, 22, 739, 742 }, // 103 IIC_VSUBi4D
  { 1, 17, 22, 742, 745 }, // 104 IIC_VSUBi4Q
  { 1, 17, 22, 745, 748 }, // 105 IIC_VSUBiD
  { 1, 17, 22, 748, 751 }, // 106 IIC_VSUBiQ
  { 1, 27, 32, 751, 754 }, // 107 IIC_VTB1
  { 1, 115, 120, 754, 758 }, // 108 IIC_VTB2
  { 1, 120, 125, 758, 763 }, // 109 IIC_VTB3
  { 1, 82, 87, 763, 769 }, // 110 IIC_VTB4
  { 1, 27, 32, 769, 773 }, // 111 IIC_VTBX1
  { 1, 27, 32, 773, 778 }, // 112 IIC_VTBX2
  { 1, 82, 87, 778, 784 }, // 113 IIC_VTBX3
  { 1, 125, 130, 784, 791 }, // 114 IIC_VTBX4
  { 1, 17, 22, 791, 793 }, // 115 IIC_VUNAD
  { 1, 27, 32, 793, 795 }, // 116 IIC_VUNAQ
  { 1, 17, 22, 795, 797 }, // 117 IIC_VUNAiD
  { 1, 17, 22, 797, 799 }, // 118 IIC_VUNAiQ
  { 1, 130, 135, 799, 802 }, // 119 IIC_fpALU32
  { 1, 130, 135, 802, 805 }, // 120 IIC_fpALU64
  { 1, 130, 135, 805, 807 }, // 121 IIC_fpCMP32
  { 1, 130, 135, 807, 809 }, // 122 IIC_fpCMP64
  { 1, 130, 135, 809, 811 }, // 123 IIC_fpCVTDI
  { 1, 130, 135, 811, 813 }, // 124 IIC_fpCVTDS
  { 1, 135, 140, 813, 815 }, // 125 IIC_fpCVTHS
  { 1, 130, 135, 815, 817 }, // 126 IIC_fpCVTID
  { 1, 130, 135, 817, 819 }, // 127 IIC_fpCVTIS
  { 1, 130, 135, 819, 821 }, // 128 IIC_fpCVTSD
  { 1, 130, 135, 821, 823 }, // 129 IIC_fpCVTSH
  { 1, 130, 135, 823, 825 }, // 130 IIC_fpCVTSI
  { 1, 140, 145, 825, 828 }, // 131 IIC_fpDIV32
  { 1, 145, 150, 828, 831 }, // 132 IIC_fpDIV64
  { 1, 150, 155, 831, 835 }, // 133 IIC_fpFMAC32
  { 1, 155, 160, 835, 839 }, // 134 IIC_fpFMAC64
  { 1, 160, 166, 839, 841 }, // 135 IIC_fpLoad32
  { 1, 160, 166, 841, 843 }, // 136 IIC_fpLoad64
  { -1, 166, 172, 843, 847 }, // 137 IIC_fpLoad_m
  { -1, 166, 172, 847, 851 }, // 138 IIC_fpLoad_mu
  { 1, 150, 155, 851, 855 }, // 139 IIC_fpMAC32
  { 1, 155, 160, 855, 859 }, // 140 IIC_fpMAC64
  { 1, 172, 174, 859, 862 }, // 141 IIC_fpMOVDI
  { 1, 135, 140, 862, 865 }, // 142 IIC_fpMOVID
  { 1, 135, 140, 865, 867 }, // 143 IIC_fpMOVIS
  { 1, 172, 174, 867, 869 }, // 144 IIC_fpMOVSI
  { 1, 174, 179, 869, 872 }, // 145 IIC_fpMUL32
  { 1, 179, 184, 872, 875 }, // 146 IIC_fpMUL64
  { 1, 184, 189, 875, 877 }, // 147 IIC_fpSQRT32
  { 1, 189, 194, 877, 879 }, // 148 IIC_fpSQRT64
  { 1, 194, 199, 879, 880 }, // 149 IIC_fpSTAT
  { 1, 160, 166, 880, 882 }, // 150 IIC_fpStore32
  { 1, 160, 166, 882, 884 }, // 151 IIC_fpStore64
  { -1, 166, 172, 884, 888 }, // 152 IIC_fpStore_m
  { 1, 135, 140, 888, 890 }, // 153 IIC_fpUNA32
  { 1, 135, 140, 890, 892 }, // 154 IIC_fpUNA64
  { 1, 199, 201, 892, 894 }, // 155 IIC_iALUi
  { 1, 199, 201, 894, 897 }, // 156 IIC_iALUr
  { 1, 201, 203, 897, 900 }, // 157 IIC_iALUsi
  { 1, 201, 203, 900, 903 }, // 158 IIC_iALUsir
  { 1, 203, 205, 903, 907 }, // 159 IIC_iALUsr
  { 1, 199, 201, 0, 0 }, // 160 IIC_iALUx
  { 1, 199, 201, 907, 909 }, // 161 IIC_iBITi
  { 1, 199, 201, 909, 912 }, // 162 IIC_iBITr
  { 1, 201, 203, 912, 915 }, // 163 IIC_iBITsi
  { 1, 203, 205, 915, 919 }, // 164 IIC_iBITsr
  { 1, 199, 201, 919, 920 }, // 165 IIC_iCMOVi
  { 1, 205, 209, 920, 921 }, // 166 IIC_iCMOVix2
  { 1, 199, 201, 921, 923 }, // 167 IIC_iCMOVr
  { 1, 199, 201, 923, 925 }, // 168 IIC_iCMOVsi
  { 1, 201, 203, 925, 928 }, // 169 IIC_iCMOVsr
  { 1, 199, 201, 928, 929 }, // 170 IIC_iCMPi
  { 1, 199, 201, 929, 931 }, // 171 IIC_iCMPr
  { 1, 201, 203, 931, 933 }, // 172 IIC_iCMPsi
  { 1, 203, 205, 933, 936 }, // 173 IIC_iCMPsr
  { 0, 0, 0, 0, 0 }, // 174 IIC_iDIV
  { 1, 201, 203, 936, 939 }, // 175 IIC_iEXTAr
  { 1, 203, 205, 939, 943 }, // 176 IIC_iEXTAsr
  { 1, 199, 201, 943, 945 }, // 177 IIC_iEXTr
  { 1, 209, 213, 945, 947 }, // 178 IIC_iLoad_bh_i
  { 1, 209, 213, 947, 950 }, // 179 IIC_iLoad_bh_iu
  { 1, 209, 213, 950, 953 }, // 180 IIC_iLoad_bh_r
  { 1, 209, 213, 953, 957 }, // 181 IIC_iLoad_bh_ru
  { 1, 209, 213, 957, 960 }, // 182 IIC_iLoad_bh_si
  { 1, 209, 213, 960, 963 }, // 183 IIC_iLoad_d_i
  { 1, 209, 213, 963, 967 }, // 184 IIC_iLoad_d_r
  { 1, 209, 213, 967, 971 }, // 185 IIC_iLoad_d_ru
  { 1, 213, 217, 971, 973 }, // 186 IIC_iLoad_i
  { 1, 213, 217, 973, 976 }, // 187 IIC_iLoad_iu
  { -1, 217, 221, 976, 981 }, // 188 IIC_iLoad_m
  { -1, 221, 226, 981, 986 }, // 189 IIC_iLoad_mBr
  { -1, 217, 221, 986, 991 }, // 190 IIC_iLoad_mu
  { 1, 213, 217, 991, 994 }, // 191 IIC_iLoad_r
  { 1, 213, 217, 994, 998 }, // 192 IIC_iLoad_ru
  { 1, 226, 230, 998, 1001 }, // 193 IIC_iLoad_si
  { 1, 230, 235, 1001, 1003 }, // 194 IIC_iLoadiALU
  { 1, 235, 237, 1003, 1007 }, // 195 IIC_iMAC16
  { 1, 235, 237, 1007, 1011 }, // 196 IIC_iMAC32
  { 1, 237, 239, 1011, 1015 }, // 197 IIC_iMAC64
  { 1, 199, 201, 1015, 1016 }, // 198 IIC_iMOVi
  { 1, 239, 242, 1016, 1017 }, // 199 IIC_iMOVix2
  { 1, 242, 246, 1017, 1018 }, // 200 IIC_iMOVix2addpc
  { 1, 246, 252, 1018, 1019 }, // 201 IIC_iMOVix2ld
  { 1, 199, 201, 1019, 1021 }, // 202 IIC_iMOVr
  { 1, 199, 201, 1021, 1023 }, // 203 IIC_iMOVsi
  { 1, 201, 203, 1023, 1026 }, // 204 IIC_iMOVsr
  { 1, 235, 237, 1026, 1029 }, // 205 IIC_iMUL16
  { 1, 235, 237, 1029, 1032 }, // 206 IIC_iMUL32
  { 1, 237, 239, 1032, 1036 }, // 207 IIC_iMUL64
  { 1, 199, 201, 1036, 1037 }, // 208 IIC_iMVNi
  { 1, 199, 201, 1037, 1039 }, // 209 IIC_iMVNr
  { 1, 201, 203, 1039, 1041 }, // 210 IIC_iMVNsi
  { 1, 203, 205, 1041, 1044 }, // 211 IIC_iMVNsr
  { -1, 217, 221, 1044, 1047 }, // 212 IIC_iPop
  { -1, 252, 257, 1047, 1050 }, // 213 IIC_iPop_Br
  { 1, 257, 261, 1050, 1052 }, // 214 IIC_iStore_bh_i
  { 1, 257, 261, 1052, 1055 }, // 215 IIC_iStore_bh_iu
  { 1, 257, 261, 1055, 1058 }, // 216 IIC_iStore_bh_r
  { 1, 257, 261, 1058, 1062 }, // 217 IIC_iStore_bh_ru
  { 1, 257, 261, 1062, 1065 }, // 218 IIC_iStore_bh_si
  { 1, 257, 261, 1065, 1068 }, // 219 IIC_iStore_d_r
  { 1, 257, 261, 1068, 1072 }, // 220 IIC_iStore_d_ru
  { 1, 213, 217, 1072, 1074 }, // 221 IIC_iStore_i
  { 1, 213, 217, 1074, 1077 }, // 222 IIC_iStore_iu
  { -1, 261, 265, 0, 0 }, // 223 IIC_iStore_m
  { -1, 261, 265, 1077, 1078 }, // 224 IIC_iStore_mu
  { 1, 213, 217, 1078, 1081 }, // 225 IIC_iStore_r
  { 1, 213, 217, 1081, 1085 }, // 226 IIC_iStore_ru
  { 1, 213, 217, 1085, 1088 }, // 227 IIC_iStore_si
  { 1, 199, 201, 1088, 1089 }, // 228 IIC_iTSTi
  { 1, 199, 201, 1089, 1091 }, // 229 IIC_iTSTr
  { 1, 201, 203, 1091, 1093 }, // 230 IIC_iTSTsi
  { 1, 203, 205, 1093, 1096 }, // 231 IIC_iTSTsr
  { 1, 199, 201, 1096, 1098 }, // 232 IIC_iUNAr
  { 1, 201, 203, 1098, 1100 }, // 233 IIC_iUNAsi
  { 0, ~0U, ~0U, ~0U, ~0U } // end marker
};

static const llvm::InstrItinerary CortexA8Itineraries[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoItinerary
  { 1, 265, 266, 0, 0 }, // 1 IIC_Br
  { 1, 265, 266, 1100, 1102 }, // 2 IIC_Preload
  { 1, 266, 268, 1102, 1106 }, // 3 IIC_VABAD
  { 1, 268, 270, 1106, 1110 }, // 4 IIC_VABAQ
  { 1, 266, 268, 1110, 1113 }, // 5 IIC_VBIND
  { 1, 268, 270, 1113, 1116 }, // 6 IIC_VBINQ
  { 1, 266, 268, 1116, 1119 }, // 7 IIC_VBINi4D
  { 1, 266, 268, 1119, 1122 }, // 8 IIC_VBINi4Q
  { 1, 266, 268, 1122, 1125 }, // 9 IIC_VBINiD
  { 1, 266, 268, 1125, 1128 }, // 10 IIC_VBINiQ
  { 1, 266, 268, 1128, 1131 }, // 11 IIC_VCNTiD
  { 1, 268, 270, 1131, 1134 }, // 12 IIC_VCNTiQ
  { 1, 270, 272, 1134, 1137 }, // 13 IIC_VEXTD
  { 1, 272, 274, 1137, 1140 }, // 14 IIC_VEXTQ
  { 1, 266, 268, 1140, 1144 }, // 15 IIC_VFMACD
  { 1, 268, 270, 1144, 1148 }, // 16 IIC_VFMACQ
  { 1, 266, 268, 1148, 1151 }, // 17 IIC_VFMULD
  { 1, 266, 268, 1151, 1154 }, // 18 IIC_VFMULQ
  { 1, 274, 277, 1154, 1156 }, // 19 IIC_VLD1
  { 1, 277, 280, 1156, 1158 }, // 20 IIC_VLD1dup
  { 1, 277, 280, 1158, 1162 }, // 21 IIC_VLD1dupu
  { 1, 280, 283, 1162, 1166 }, // 22 IIC_VLD1ln
  { 1, 280, 283, 1166, 1172 }, // 23 IIC_VLD1lnu
  { 1, 274, 277, 1172, 1175 }, // 24 IIC_VLD1u
  { 1, 274, 277, 1175, 1178 }, // 25 IIC_VLD1x2
  { 1, 274, 277, 1178, 1182 }, // 26 IIC_VLD1x2u
  { 1, 283, 286, 1182, 1186 }, // 27 IIC_VLD1x3
  { 1, 283, 286, 1186, 1191 }, // 28 IIC_VLD1x3u
  { 1, 283, 286, 1191, 1196 }, // 29 IIC_VLD1x4
  { 1, 283, 286, 1196, 1202 }, // 30 IIC_VLD1x4u
  { 1, 274, 277, 1202, 1205 }, // 31 IIC_VLD2
  { 1, 277, 280, 1205, 1208 }, // 32 IIC_VLD2dup
  { 1, 277, 280, 1208, 1213 }, // 33 IIC_VLD2dupu
  { 1, 283, 286, 1213, 1219 }, // 34 IIC_VLD2ln
  { 1, 283, 286, 1219, 1227 }, // 35 IIC_VLD2lnu
  { 1, 274, 277, 1227, 1233 }, // 36 IIC_VLD2u
  { 1, 283, 286, 1233, 1238 }, // 37 IIC_VLD2x2
  { 1, 283, 286, 1238, 1244 }, // 38 IIC_VLD2x2u
  { 1, 286, 289, 1244, 1248 }, // 39 IIC_VLD3
  { 1, 280, 283, 1248, 1252 }, // 40 IIC_VLD3dup
  { 1, 280, 283, 1252, 1258 }, // 41 IIC_VLD3dupu
  { 1, 289, 292, 1258, 1266 }, // 42 IIC_VLD3ln
  { 1, 289, 292, 1266, 1276 }, // 43 IIC_VLD3lnu
  { 1, 286, 289, 1276, 1281 }, // 44 IIC_VLD3u
  { 1, 286, 289, 1281, 1286 }, // 45 IIC_VLD4
  { 1, 280, 283, 1286, 1291 }, // 46 IIC_VLD4dup
  { 1, 280, 283, 1291, 1298 }, // 47 IIC_VLD4dupu
  { 1, 289, 292, 1298, 1308 }, // 48 IIC_VLD4ln
  { 1, 289, 292, 1308, 1320 }, // 49 IIC_VLD4lnu
  { 1, 286, 289, 1320, 1326 }, // 50 IIC_VLD4u
  { 1, 266, 268, 1326, 1330 }, // 51 IIC_VMACD
  { 1, 268, 270, 1330, 1334 }, // 52 IIC_VMACQ
  { 1, 266, 268, 1334, 1338 }, // 53 IIC_VMACi16D
  { 1, 268, 270, 1338, 1342 }, // 54 IIC_VMACi16Q
  { 1, 268, 270, 1342, 1346 }, // 55 IIC_VMACi32D
  { 1, 292, 296, 1346, 1350 }, // 56 IIC_VMACi32Q
  { 1, 270, 272, 1350, 1352 }, // 57 IIC_VMOVD
  { 1, 270, 272, 1352, 1354 }, // 58 IIC_VMOVIS
  { 1, 272, 274, 1354, 1357 }, // 59 IIC_VMOVISL
  { 1, 266, 268, 1357, 1358 }, // 60 IIC_VMOVImm
  { 1, 266, 268, 1358, 1360 }, // 61 IIC_VMOVN
  { 1, 272, 274, 1360, 1362 }, // 62 IIC_VMOVQ
  { 1, 270, 272, 1362, 1364 }, // 63 IIC_VMOVSI
  { 1, 266, 268, 1364, 1367 }, // 64 IIC_VMULi16D
  { 1, 268, 270, 1367, 1370 }, // 65 IIC_VMULi16Q
  { 1, 268, 270, 1370, 1373 }, // 66 IIC_VMULi32D
  { 1, 292, 296, 1373, 1376 }, // 67 IIC_VMULi32Q
  { 1, 266, 268, 1376, 1379 }, // 68 IIC_VPALiD
  { 1, 268, 270, 1379, 1382 }, // 69 IIC_VPALiQ
  { 1, 266, 268, 1382, 1385 }, // 70 IIC_VPBIND
  { 1, 270, 272, 1385, 1389 }, // 71 IIC_VPERMD
  { 1, 272, 274, 1389, 1393 }, // 72 IIC_VPERMQ
  { 1, 296, 300, 1393, 1397 }, // 73 IIC_VPERMQ3
  { 1, 266, 268, 1397, 1399 }, // 74 IIC_VQUNAiD
  { 1, 266, 268, 1399, 1401 }, // 75 IIC_VQUNAiQ
  { 1, 266, 268, 1401, 1404 }, // 76 IIC_VRECSD
  { 1, 268, 270, 1404, 1407 }, // 77 IIC_VRECSQ
  { 1, 266, 268, 1407, 1410 }, // 78 IIC_VSHLi4D
  { 1, 268, 270, 1410, 1413 }, // 79 IIC_VSHLi4Q
  { 1, 266, 268, 1413, 1416 }, // 80 IIC_VSHLiD
  { 1, 268, 270, 1416, 1419 }, // 81 IIC_VSHLiQ
  { 1, 274, 277, 1419, 1422 }, // 82 IIC_VST1
  { 1, 277, 280, 1422, 1425 }, // 83 IIC_VST1ln
  { 1, 277, 280, 1425, 1430 }, // 84 IIC_VST1lnu
  { 1, 274, 277, 1430, 1434 }, // 85 IIC_VST1x2
  { 1, 283, 286, 1434, 1439 }, // 86 IIC_VST1x3
  { 1, 283, 286, 1439, 1446 }, // 87 IIC_VST1x3u
  { 1, 283, 286, 1446, 1452 }, // 88 IIC_VST1x4
  { 1, 283, 286, 1452, 1460 }, // 89 IIC_VST1x4u
  { 1, 274, 277, 1460, 1464 }, // 90 IIC_VST2
  { 1, 274, 277, 1464, 1468 }, // 91 IIC_VST2ln
  { 1, 274, 277, 1468, 1474 }, // 92 IIC_VST2lnu
  { 1, 286, 289, 1474, 1480 }, // 93 IIC_VST2x2
  { 1, 286, 289, 1480, 1488 }, // 94 IIC_VST2x2u
  { 1, 283, 286, 1488, 1493 }, // 95 IIC_VST3
  { 1, 283, 286, 1493, 1498 }, // 96 IIC_VST3ln
  { 1, 283, 286, 1498, 1505 }, // 97 IIC_VST3lnu
  { 1, 283, 286, 1505, 1512 }, // 98 IIC_VST3u
  { 1, 286, 289, 1512, 1518 }, // 99 IIC_VST4
  { 1, 286, 289, 1518, 1524 }, // 100 IIC_VST4ln
  { 1, 286, 289, 1524, 1532 }, // 101 IIC_VST4lnu
  { 1, 286, 289, 1532, 1540 }, // 102 IIC_VST4u
  { 1, 266, 268, 1540, 1543 }, // 103 IIC_VSUBi4D
  { 1, 266, 268, 1543, 1546 }, // 104 IIC_VSUBi4Q
  { 1, 266, 268, 1546, 1549 }, // 105 IIC_VSUBiD
  { 1, 266, 268, 1549, 1552 }, // 106 IIC_VSUBiQ
  { 1, 272, 274, 1552, 1555 }, // 107 IIC_VTB1
  { 1, 272, 274, 1555, 1559 }, // 108 IIC_VTB2
  { 1, 296, 300, 1559, 1564 }, // 109 IIC_VTB3
  { 1, 296, 300, 1564, 1570 }, // 110 IIC_VTB4
  { 1, 272, 274, 1570, 1574 }, // 111 IIC_VTBX1
  { 1, 272, 274, 1574, 1579 }, // 112 IIC_VTBX2
  { 1, 296, 300, 1579, 1585 }, // 113 IIC_VTBX3
  { 1, 296, 300, 1585, 1592 }, // 114 IIC_VTBX4
  { 1, 266, 268, 1592, 1594 }, // 115 IIC_VUNAD
  { 1, 268, 270, 1594, 1596 }, // 116 IIC_VUNAQ
  { 1, 266, 268, 1596, 1598 }, // 117 IIC_VUNAiD
  { 1, 266, 268, 1598, 1600 }, // 118 IIC_VUNAiQ
  { 1, 266, 268, 1600, 1603 }, // 119 IIC_fpALU32
  { 1, 300, 303, 1603, 1606 }, // 120 IIC_fpALU64
  { 1, 266, 268, 1606, 1608 }, // 121 IIC_fpCMP32
  { 1, 303, 306, 1608, 1610 }, // 122 IIC_fpCMP64
  { 1, 306, 309, 1610, 1612 }, // 123 IIC_fpCVTDI
  { 1, 309, 312, 1612, 1614 }, // 124 IIC_fpCVTDS
  { 0, 0, 0, 0, 0 }, // 125 IIC_fpCVTHS
  { 1, 306, 309, 1614, 1616 }, // 126 IIC_fpCVTID
  { 1, 266, 268, 1616, 1618 }, // 127 IIC_fpCVTIS
  { 1, 312, 315, 1618, 1620 }, // 128 IIC_fpCVTSD
  { 0, 0, 0, 0, 0 }, // 129 IIC_fpCVTSH
  { 1, 266, 268, 1620, 1622 }, // 130 IIC_fpCVTSI
  { 1, 315, 318, 1622, 1625 }, // 131 IIC_fpDIV32
  { 1, 318, 321, 1625, 1628 }, // 132 IIC_fpDIV64
  { 1, 266, 268, 1628, 1632 }, // 133 IIC_fpFMAC32
  { 1, 321, 324, 1632, 1636 }, // 134 IIC_fpFMAC64
  { 1, 324, 327, 1636, 1638 }, // 135 IIC_fpLoad32
  { 1, 324, 327, 1638, 1640 }, // 136 IIC_fpLoad64
  { -1, 327, 332, 1640, 1644 }, // 137 IIC_fpLoad_m
  { -1, 327, 332, 1644, 1649 }, // 138 IIC_fpLoad_mu
  { 1, 266, 268, 1649, 1653 }, // 139 IIC_fpMAC32
  { 1, 321, 324, 1653, 1657 }, // 140 IIC_fpMAC64
  { 1, 266, 268, 1657, 1660 }, // 141 IIC_fpMOVDI
  { 1, 266, 268, 1660, 1663 }, // 142 IIC_fpMOVID
  { 1, 266, 268, 1663, 1665 }, // 143 IIC_fpMOVIS
  { 1, 266, 268, 1665, 1667 }, // 144 IIC_fpMOVSI
  { 1, 266, 268, 1667, 1670 }, // 145 IIC_fpMUL32
  { 1, 332, 335, 1670, 1673 }, // 146 IIC_fpMUL64
  { 1, 321, 324, 1673, 1675 }, // 147 IIC_fpSQRT32
  { 1, 318, 321, 1675, 1677 }, // 148 IIC_fpSQRT64
  { 1, 270, 272, 1677, 1678 }, // 149 IIC_fpSTAT
  { 1, 324, 327, 1678, 1680 }, // 150 IIC_fpStore32
  { 1, 324, 327, 1680, 1682 }, // 151 IIC_fpStore64
  { -1, 327, 332, 1682, 1686 }, // 152 IIC_fpStore_m
  { 1, 266, 268, 1686, 1688 }, // 153 IIC_fpUNA32
  { 1, 303, 306, 1688, 1690 }, // 154 IIC_fpUNA64
  { 1, 265, 266, 1690, 1692 }, // 155 IIC_iALUi
  { 1, 265, 266, 1692, 1695 }, // 156 IIC_iALUr
  { 1, 265, 266, 1695, 1698 }, // 157 IIC_iALUsi
  { 1, 265, 266, 1698, 1701 }, // 158 IIC_iALUsir
  { 1, 265, 266, 1701, 1705 }, // 159 IIC_iALUsr
  { 1, 265, 266, 0, 0 }, // 160 IIC_iALUx
  { 1, 265, 266, 1705, 1707 }, // 161 IIC_iBITi
  { 1, 265, 266, 1707, 1710 }, // 162 IIC_iBITr
  { 1, 265, 266, 1710, 1713 }, // 163 IIC_iBITsi
  { 1, 265, 266, 1713, 1717 }, // 164 IIC_iBITsr
  { 1, 265, 266, 1717, 1718 }, // 165 IIC_iCMOVi
  { 1, 335, 337, 1718, 1720 }, // 166 IIC_iCMOVix2
  { 1, 265, 266, 1720, 1722 }, // 167 IIC_iCMOVr
  { 1, 265, 266, 1722, 1724 }, // 168 IIC_iCMOVsi
  { 1, 265, 266, 1724, 1727 }, // 169 IIC_iCMOVsr
  { 1, 265, 266, 1727, 1728 }, // 170 IIC_iCMPi
  { 1, 265, 266, 1728, 1730 }, // 171 IIC_iCMPr
  { 1, 265, 266, 1730, 1732 }, // 172 IIC_iCMPsi
  { 1, 265, 266, 1732, 1735 }, // 173 IIC_iCMPsr
  { 0, 0, 0, 0, 0 }, // 174 IIC_iDIV
  { 1, 265, 266, 1735, 1738 }, // 175 IIC_iEXTAr
  { 1, 265, 266, 1738, 1742 }, // 176 IIC_iEXTAsr
  { 1, 265, 266, 1742, 1744 }, // 177 IIC_iEXTr
  { 1, 337, 339, 1744, 1746 }, // 178 IIC_iLoad_bh_i
  { 1, 337, 339, 1746, 1749 }, // 179 IIC_iLoad_bh_iu
  { 1, 337, 339, 1749, 1752 }, // 180 IIC_iLoad_bh_r
  { 1, 337, 339, 1752, 1756 }, // 181 IIC_iLoad_bh_ru
  { 1, 339, 341, 1756, 1759 }, // 182 IIC_iLoad_bh_si
  { 1, 337, 339, 1759, 1761 }, // 183 IIC_iLoad_d_i
  { 1, 337, 339, 1761, 1764 }, // 184 IIC_iLoad_d_r
  { 1, 337, 339, 1764, 1768 }, // 185 IIC_iLoad_d_ru
  { 1, 337, 339, 1768, 1770 }, // 186 IIC_iLoad_i
  { 1, 337, 339, 1770, 1773 }, // 187 IIC_iLoad_iu
  { -1, 341, 343, 1773, 1778 }, // 188 IIC_iLoad_m
  { -1, 343, 346, 1778, 1783 }, // 189 IIC_iLoad_mBr
  { -1, 346, 348, 1783, 1788 }, // 190 IIC_iLoad_mu
  { 1, 337, 339, 1788, 1791 }, // 191 IIC_iLoad_r
  { 1, 337, 339, 1791, 1795 }, // 192 IIC_iLoad_ru
  { 1, 339, 341, 1795, 1798 }, // 193 IIC_iLoad_si
  { 1, 348, 351, 1798, 1800 }, // 194 IIC_iLoadiALU
  { 1, 351, 352, 1800, 1804 }, // 195 IIC_iMAC16
  { 1, 351, 352, 1804, 1808 }, // 196 IIC_iMAC32
  { 1, 352, 353, 1808, 1812 }, // 197 IIC_iMAC64
  { 1, 265, 266, 1812, 1813 }, // 198 IIC_iMOVi
  { 1, 335, 337, 1813, 1814 }, // 199 IIC_iMOVix2
  { 1, 353, 356, 1814, 1815 }, // 200 IIC_iMOVix2addpc
  { 1, 356, 359, 1815, 1816 }, // 201 IIC_iMOVix2ld
  { 1, 265, 266, 1816, 1818 }, // 202 IIC_iMOVr
  { 1, 265, 266, 1818, 1820 }, // 203 IIC_iMOVsi
  { 1, 265, 266, 1820, 1823 }, // 204 IIC_iMOVsr
  { 1, 359, 360, 1823, 1826 }, // 205 IIC_iMUL16
  { 1, 351, 352, 1826, 1829 }, // 206 IIC_iMUL32
  { 1, 352, 353, 1829, 1833 }, // 207 IIC_iMUL64
  { 1, 265, 266, 1833, 1834 }, // 208 IIC_iMVNi
  { 1, 265, 266, 1834, 1836 }, // 209 IIC_iMVNr
  { 1, 265, 266, 1836, 1838 }, // 210 IIC_iMVNsi
  { 1, 265, 266, 1838, 1841 }, // 211 IIC_iMVNsr
  { -1, 346, 348, 1841, 1844 }, // 212 IIC_iPop
  { -1, 343, 346, 1844, 1847 }, // 213 IIC_iPop_Br
  { 1, 337, 339, 1847, 1849 }, // 214 IIC_iStore_bh_i
  { 1, 337, 339, 1849, 1852 }, // 215 IIC_iStore_bh_iu
  { 1, 337, 339, 1852, 1855 }, // 216 IIC_iStore_bh_r
  { 1, 337, 339, 1855, 1859 }, // 217 IIC_iStore_bh_ru
  { 1, 360, 362, 1859, 1862 }, // 218 IIC_iStore_bh_si
  { 1, 337, 339, 1862, 1865 }, // 219 IIC_iStore_d_r
  { 1, 337, 339, 1865, 1869 }, // 220 IIC_iStore_d_ru
  { 1, 337, 339, 1869, 1871 }, // 221 IIC_iStore_i
  { 1, 337, 339, 1871, 1874 }, // 222 IIC_iStore_iu
  { -1, 341, 343, 0, 0 }, // 223 IIC_iStore_m
  { -1, 341, 343, 1874, 1875 }, // 224 IIC_iStore_mu
  { 1, 337, 339, 1875, 1878 }, // 225 IIC_iStore_r
  { 1, 337, 339, 1878, 1882 }, // 226 IIC_iStore_ru
  { 1, 360, 362, 1882, 1885 }, // 227 IIC_iStore_si
  { 1, 265, 266, 1885, 1886 }, // 228 IIC_iTSTi
  { 1, 265, 266, 1886, 1888 }, // 229 IIC_iTSTr
  { 1, 265, 266, 1888, 1890 }, // 230 IIC_iTSTsi
  { 1, 265, 266, 1890, 1893 }, // 231 IIC_iTSTsr
  { 1, 265, 266, 1893, 1895 }, // 232 IIC_iUNAr
  { 1, 265, 266, 1895, 1897 }, // 233 IIC_iUNAsi
  { 0, ~0U, ~0U, ~0U, ~0U } // end marker
};

static const llvm::InstrItinerary SwiftItineraries[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoItinerary
  { 1, 362, 363, 0, 0 }, // 1 IIC_Br
  { 1, 362, 363, 1897, 1899 }, // 2 IIC_Preload
  { 1, 363, 365, 1899, 1903 }, // 3 IIC_VABAD
  { 1, 363, 365, 1903, 1907 }, // 4 IIC_VABAQ
  { 1, 363, 365, 1907, 1910 }, // 5 IIC_VBIND
  { 1, 363, 365, 1910, 1913 }, // 6 IIC_VBINQ
  { 1, 363, 365, 1913, 1916 }, // 7 IIC_VBINi4D
  { 1, 363, 365, 1916, 1919 }, // 8 IIC_VBINi4Q
  { 1, 363, 365, 1919, 1922 }, // 9 IIC_VBINiD
  { 1, 363, 365, 1922, 1925 }, // 10 IIC_VBINiQ
  { 1, 363, 365, 1925, 1928 }, // 11 IIC_VCNTiD
  { 1, 363, 365, 1928, 1931 }, // 12 IIC_VCNTiQ
  { 1, 365, 367, 1931, 1934 }, // 13 IIC_VEXTD
  { 1, 365, 367, 1934, 1937 }, // 14 IIC_VEXTQ
  { 1, 365, 367, 1937, 1940 }, // 15 IIC_VFMACD
  { 1, 365, 367, 1940, 1943 }, // 16 IIC_VFMACQ
  { 1, 365, 367, 1943, 1946 }, // 17 IIC_VFMULD
  { 1, 365, 367, 1946, 1949 }, // 18 IIC_VFMULQ
  { 0, 0, 0, 0, 0 }, // 19 IIC_VLD1
  { 0, 0, 0, 0, 0 }, // 20 IIC_VLD1dup
  { 0, 0, 0, 0, 0 }, // 21 IIC_VLD1dupu
  { 0, 0, 0, 0, 0 }, // 22 IIC_VLD1ln
  { 0, 0, 0, 0, 0 }, // 23 IIC_VLD1lnu
  { 0, 0, 0, 0, 0 }, // 24 IIC_VLD1u
  { 0, 0, 0, 0, 0 }, // 25 IIC_VLD1x2
  { 0, 0, 0, 0, 0 }, // 26 IIC_VLD1x2u
  { 0, 0, 0, 0, 0 }, // 27 IIC_VLD1x3
  { 0, 0, 0, 0, 0 }, // 28 IIC_VLD1x3u
  { 0, 0, 0, 0, 0 }, // 29 IIC_VLD1x4
  { 0, 0, 0, 0, 0 }, // 30 IIC_VLD1x4u
  { 0, 0, 0, 0, 0 }, // 31 IIC_VLD2
  { 0, 0, 0, 0, 0 }, // 32 IIC_VLD2dup
  { 0, 0, 0, 0, 0 }, // 33 IIC_VLD2dupu
  { 0, 0, 0, 0, 0 }, // 34 IIC_VLD2ln
  { 0, 0, 0, 0, 0 }, // 35 IIC_VLD2lnu
  { 0, 0, 0, 0, 0 }, // 36 IIC_VLD2u
  { 0, 0, 0, 0, 0 }, // 37 IIC_VLD2x2
  { 0, 0, 0, 0, 0 }, // 38 IIC_VLD2x2u
  { 0, 0, 0, 0, 0 }, // 39 IIC_VLD3
  { 0, 0, 0, 0, 0 }, // 40 IIC_VLD3dup
  { 0, 0, 0, 0, 0 }, // 41 IIC_VLD3dupu
  { 0, 0, 0, 0, 0 }, // 42 IIC_VLD3ln
  { 0, 0, 0, 0, 0 }, // 43 IIC_VLD3lnu
  { 0, 0, 0, 0, 0 }, // 44 IIC_VLD3u
  { 0, 0, 0, 0, 0 }, // 45 IIC_VLD4
  { 0, 0, 0, 0, 0 }, // 46 IIC_VLD4dup
  { 0, 0, 0, 0, 0 }, // 47 IIC_VLD4dupu
  { 0, 0, 0, 0, 0 }, // 48 IIC_VLD4ln
  { 0, 0, 0, 0, 0 }, // 49 IIC_VLD4lnu
  { 0, 0, 0, 0, 0 }, // 50 IIC_VLD4u
  { 1, 365, 367, 1949, 1952 }, // 51 IIC_VMACD
  { 1, 365, 367, 1952, 1955 }, // 52 IIC_VMACQ
  { 1, 365, 367, 1955, 1959 }, // 53 IIC_VMACi16D
  { 1, 365, 367, 1959, 1963 }, // 54 IIC_VMACi16Q
  { 1, 365, 367, 1963, 1967 }, // 55 IIC_VMACi32D
  { 1, 365, 367, 1967, 1971 }, // 56 IIC_VMACi32Q
  { 1, 365, 367, 1971, 1973 }, // 57 IIC_VMOVD
  { 1, 367, 371, 1973, 1975 }, // 58 IIC_VMOVIS
  { 1, 367, 371, 1975, 1977 }, // 59 IIC_VMOVISL
  { 1, 363, 365, 1977, 1978 }, // 60 IIC_VMOVImm
  { 1, 365, 367, 1978, 1980 }, // 61 IIC_VMOVN
  { 1, 365, 367, 1980, 1982 }, // 62 IIC_VMOVQ
  { 1, 371, 373, 1982, 1984 }, // 63 IIC_VMOVSI
  { 1, 365, 367, 1984, 1987 }, // 64 IIC_VMULi16D
  { 1, 365, 367, 1987, 1990 }, // 65 IIC_VMULi16Q
  { 1, 365, 367, 1990, 1993 }, // 66 IIC_VMULi32D
  { 1, 365, 367, 1993, 1996 }, // 67 IIC_VMULi32Q
  { 1, 363, 365, 1996, 1999 }, // 68 IIC_VPALiD
  { 1, 363, 365, 1999, 2002 }, // 69 IIC_VPALiQ
  { 1, 363, 365, 2002, 2005 }, // 70 IIC_VPBIND
  { 1, 373, 379, 2005, 2009 }, // 71 IIC_VPERMD
  { 1, 373, 379, 2009, 2013 }, // 72 IIC_VPERMQ
  { 1, 373, 379, 2013, 2017 }, // 73 IIC_VPERMQ3
  { 1, 363, 365, 2017, 2019 }, // 74 IIC_VQUNAiD
  { 1, 363, 365, 2019, 2021 }, // 75 IIC_VQUNAiQ
  { 1, 365, 367, 2021, 2024 }, // 76 IIC_VRECSD
  { 1, 365, 367, 2024, 2027 }, // 77 IIC_VRECSQ
  { 1, 363, 365, 2027, 2030 }, // 78 IIC_VSHLi4D
  { 1, 363, 365, 2030, 2033 }, // 79 IIC_VSHLi4Q
  { 1, 363, 365, 2033, 2036 }, // 80 IIC_VSHLiD
  { 1, 363, 365, 2036, 2039 }, // 81 IIC_VSHLiQ
  { 0, 0, 0, 0, 0 }, // 82 IIC_VST1
  { 0, 0, 0, 0, 0 }, // 83 IIC_VST1ln
  { 0, 0, 0, 0, 0 }, // 84 IIC_VST1lnu
  { 0, 0, 0, 0, 0 }, // 85 IIC_VST1x2
  { 0, 0, 0, 0, 0 }, // 86 IIC_VST1x3
  { 0, 0, 0, 0, 0 }, // 87 IIC_VST1x3u
  { 0, 0, 0, 0, 0 }, // 88 IIC_VST1x4
  { 0, 0, 0, 0, 0 }, // 89 IIC_VST1x4u
  { 0, 0, 0, 0, 0 }, // 90 IIC_VST2
  { 0, 0, 0, 0, 0 }, // 91 IIC_VST2ln
  { 0, 0, 0, 0, 0 }, // 92 IIC_VST2lnu
  { 0, 0, 0, 0, 0 }, // 93 IIC_VST2x2
  { 0, 0, 0, 0, 0 }, // 94 IIC_VST2x2u
  { 0, 0, 0, 0, 0 }, // 95 IIC_VST3
  { 0, 0, 0, 0, 0 }, // 96 IIC_VST3ln
  { 0, 0, 0, 0, 0 }, // 97 IIC_VST3lnu
  { 0, 0, 0, 0, 0 }, // 98 IIC_VST3u
  { 0, 0, 0, 0, 0 }, // 99 IIC_VST4
  { 0, 0, 0, 0, 0 }, // 100 IIC_VST4ln
  { 0, 0, 0, 0, 0 }, // 101 IIC_VST4lnu
  { 0, 0, 0, 0, 0 }, // 102 IIC_VST4u
  { 1, 363, 365, 2039, 2042 }, // 103 IIC_VSUBi4D
  { 1, 363, 365, 2042, 2045 }, // 104 IIC_VSUBi4Q
  { 1, 363, 365, 2045, 2048 }, // 105 IIC_VSUBiD
  { 1, 363, 365, 2048, 2051 }, // 106 IIC_VSUBiQ
  { 1, 365, 367, 2051, 2054 }, // 107 IIC_VTB1
  { 1, 379, 383, 2054, 2058 }, // 108 IIC_VTB2
  { 1, 373, 379, 2058, 2063 }, // 109 IIC_VTB3
  { 1, 383, 390, 2063, 2069 }, // 110 IIC_VTB4
  { 1, 365, 367, 2069, 2072 }, // 111 IIC_VTBX1
  { 1, 379, 383, 2072, 2076 }, // 112 IIC_VTBX2
  { 1, 373, 379, 2076, 2081 }, // 113 IIC_VTBX3
  { 1, 383, 390, 2081, 2087 }, // 114 IIC_VTBX4
  { 1, 363, 365, 2087, 2089 }, // 115 IIC_VUNAD
  { 1, 363, 365, 2089, 2091 }, // 116 IIC_VUNAQ
  { 1, 363, 365, 2091, 2093 }, // 117 IIC_VUNAiD
  { 1, 363, 365, 2093, 2095 }, // 118 IIC_VUNAiQ
  { 1, 363, 365, 2095, 2098 }, // 119 IIC_fpALU32
  { 1, 363, 365, 2098, 2101 }, // 120 IIC_fpALU64
  { 1, 363, 365, 2101, 2103 }, // 121 IIC_fpCMP32
  { 1, 363, 365, 2103, 2105 }, // 122 IIC_fpCMP64
  { 1, 365, 367, 2105, 2107 }, // 123 IIC_fpCVTDI
  { 1, 365, 367, 2107, 2109 }, // 124 IIC_fpCVTDS
  { 1, 365, 367, 2109, 2111 }, // 125 IIC_fpCVTHS
  { 1, 365, 367, 2111, 2113 }, // 126 IIC_fpCVTID
  { 1, 365, 367, 2113, 2115 }, // 127 IIC_fpCVTIS
  { 1, 365, 367, 2115, 2117 }, // 128 IIC_fpCVTSD
  { 1, 390, 394, 2117, 2119 }, // 129 IIC_fpCVTSH
  { 1, 365, 367, 2119, 2121 }, // 130 IIC_fpCVTSI
  { 1, 394, 397, 2121, 2124 }, // 131 IIC_fpDIV32
  { 1, 397, 400, 2124, 2127 }, // 132 IIC_fpDIV64
  { 1, 365, 367, 2127, 2130 }, // 133 IIC_fpFMAC32
  { 1, 365, 367, 2130, 2133 }, // 134 IIC_fpFMAC64
  { 1, 371, 373, 2133, 2135 }, // 135 IIC_fpLoad32
  { 1, 371, 373, 2135, 2137 }, // 136 IIC_fpLoad64
  { -1, 371, 373, 2137, 2141 }, // 137 IIC_fpLoad_m
  { -1, 400, 404, 2141, 2146 }, // 138 IIC_fpLoad_mu
  { 1, 365, 367, 2146, 2149 }, // 139 IIC_fpMAC32
  { 1, 365, 367, 2149, 2152 }, // 140 IIC_fpMAC64
  { 1, 404, 408, 2152, 2155 }, // 141 IIC_fpMOVDI
  { 1, 371, 373, 2155, 2157 }, // 142 IIC_fpMOVID
  { 1, 367, 371, 2157, 2159 }, // 143 IIC_fpMOVIS
  { 1, 371, 373, 2159, 2161 }, // 144 IIC_fpMOVSI
  { 1, 365, 367, 2161, 2164 }, // 145 IIC_fpMUL32
  { 1, 365, 367, 2164, 2167 }, // 146 IIC_fpMUL64
  { 1, 394, 397, 2167, 2169 }, // 147 IIC_fpSQRT32
  { 1, 397, 400, 2169, 2172 }, // 148 IIC_fpSQRT64
  { 1, 408, 410, 2172, 2173 }, // 149 IIC_fpSTAT
  { 1, 371, 373, 2173, 2175 }, // 150 IIC_fpStore32
  { 1, 371, 373, 2175, 2177 }, // 151 IIC_fpStore64
  { -1, 371, 373, 2177, 2180 }, // 152 IIC_fpStore_m
  { 1, 363, 365, 2180, 2182 }, // 153 IIC_fpUNA32
  { 1, 363, 365, 2182, 2184 }, // 154 IIC_fpUNA64
  { 1, 408, 410, 2184, 2186 }, // 155 IIC_iALUi
  { 1, 408, 410, 2186, 2189 }, // 156 IIC_iALUr
  { 1, 408, 410, 2189, 2192 }, // 157 IIC_iALUsi
  { 1, 408, 410, 2192, 2195 }, // 158 IIC_iALUsir
  { 1, 408, 410, 2195, 2199 }, // 159 IIC_iALUsr
  { 1, 408, 410, 0, 0 }, // 160 IIC_iALUx
  { 1, 408, 410, 2199, 2201 }, // 161 IIC_iBITi
  { 1, 408, 410, 2201, 2204 }, // 162 IIC_iBITr
  { 1, 408, 410, 2204, 2207 }, // 163 IIC_iBITsi
  { 1, 408, 410, 2207, 2211 }, // 164 IIC_iBITsr
  { 1, 408, 410, 2211, 2212 }, // 165 IIC_iCMOVi
  { 1, 410, 414, 2212, 2213 }, // 166 IIC_iCMOVix2
  { 1, 408, 410, 2213, 2215 }, // 167 IIC_iCMOVr
  { 1, 408, 410, 2215, 2217 }, // 168 IIC_iCMOVsi
  { 1, 408, 410, 2217, 2220 }, // 169 IIC_iCMOVsr
  { 1, 408, 410, 2220, 2221 }, // 170 IIC_iCMPi
  { 1, 408, 410, 2221, 2223 }, // 171 IIC_iCMPr
  { 1, 414, 416, 2223, 2225 }, // 172 IIC_iCMPsi
  { 1, 414, 416, 2225, 2228 }, // 173 IIC_iCMPsr
  { 1, 416, 419, 2228, 2231 }, // 174 IIC_iDIV
  { 1, 408, 410, 2231, 2234 }, // 175 IIC_iEXTAr
  { 1, 408, 410, 2234, 2238 }, // 176 IIC_iEXTAsr
  { 1, 408, 410, 2238, 2240 }, // 177 IIC_iEXTr
  { 1, 371, 373, 2240, 2242 }, // 178 IIC_iLoad_bh_i
  { 1, 419, 423, 2242, 2245 }, // 179 IIC_iLoad_bh_iu
  { 1, 371, 373, 2245, 2248 }, // 180 IIC_iLoad_bh_r
  { 1, 423, 427, 2248, 2252 }, // 181 IIC_iLoad_bh_ru
  { 1, 427, 431, 2252, 2255 }, // 182 IIC_iLoad_bh_si
  { 1, 431, 435, 2255, 2258 }, // 183 IIC_iLoad_d_i
  { 1, 435, 441, 2258, 2262 }, // 184 IIC_iLoad_d_r
  { 1, 441, 448, 2262, 2266 }, // 185 IIC_iLoad_d_ru
  { 1, 371, 373, 2266, 2268 }, // 186 IIC_iLoad_i
  { 1, 419, 423, 2268, 2271 }, // 187 IIC_iLoad_iu
  { -1, 448, 453, 2271, 2276 }, // 188 IIC_iLoad_m
  { -1, 448, 453, 2276, 2281 }, // 189 IIC_iLoad_mBr
  { -1, 453, 459, 2281, 2286 }, // 190 IIC_iLoad_mu
  { 1, 371, 373, 2286, 2289 }, // 191 IIC_iLoad_r
  { 1, 423, 427, 2289, 2293 }, // 192 IIC_iLoad_ru
  { 1, 427, 431, 2293, 2296 }, // 193 IIC_iLoad_si
  { 1, 459, 462, 2296, 2298 }, // 194 IIC_iLoadiALU
  { 1, 363, 365, 2298, 2302 }, // 195 IIC_iMAC16
  { 1, 363, 365, 2302, 2306 }, // 196 IIC_iMAC32
  { 1, 462, 469, 2306, 2310 }, // 197 IIC_iMAC64
  { 1, 408, 410, 2310, 2311 }, // 198 IIC_iMOVi
  { 1, 410, 414, 2311, 2312 }, // 199 IIC_iMOVix2
  { 1, 469, 473, 2312, 2313 }, // 200 IIC_iMOVix2addpc
  { 1, 473, 477, 2313, 2314 }, // 201 IIC_iMOVix2ld
  { 1, 408, 410, 2314, 2315 }, // 202 IIC_iMOVr
  { 1, 408, 410, 2315, 2316 }, // 203 IIC_iMOVsi
  { 1, 408, 410, 2316, 2317 }, // 204 IIC_iMOVsr
  { 1, 363, 365, 2317, 2320 }, // 205 IIC_iMUL16
  { 1, 363, 365, 2320, 2323 }, // 206 IIC_iMUL32
  { 1, 477, 483, 2323, 2327 }, // 207 IIC_iMUL64
  { 1, 408, 410, 2327, 2328 }, // 208 IIC_iMVNi
  { 1, 408, 410, 2328, 2329 }, // 209 IIC_iMVNr
  { 1, 408, 410, 2329, 2330 }, // 210 IIC_iMVNsi
  { 1, 408, 410, 2330, 2331 }, // 211 IIC_iMVNsr
  { -1, 419, 423, 2331, 2334 }, // 212 IIC_iPop
  { -1, 419, 423, 2334, 2337 }, // 213 IIC_iPop_Br
  { 1, 371, 373, 2337, 2339 }, // 214 IIC_iStore_bh_i
  { 1, 419, 423, 2339, 2342 }, // 215 IIC_iStore_bh_iu
  { 1, 371, 373, 2342, 2345 }, // 216 IIC_iStore_bh_r
  { 1, 419, 423, 2345, 2349 }, // 217 IIC_iStore_bh_ru
  { 1, 427, 431, 2349, 2352 }, // 218 IIC_iStore_bh_si
  { 1, 483, 489, 2352, 2355 }, // 219 IIC_iStore_d_r
  { 1, 419, 423, 2355, 2359 }, // 220 IIC_iStore_d_ru
  { 1, 371, 373, 2359, 2361 }, // 221 IIC_iStore_i
  { 1, 419, 423, 2361, 2364 }, // 222 IIC_iStore_iu
  { -1, 489, 498, 0, 0 }, // 223 IIC_iStore_m
  { -1, 489, 498, 2364, 2365 }, // 224 IIC_iStore_mu
  { 1, 371, 373, 2365, 2368 }, // 225 IIC_iStore_r
  { 1, 419, 423, 2368, 2372 }, // 226 IIC_iStore_ru
  { 1, 427, 431, 2372, 2375 }, // 227 IIC_iStore_si
  { 1, 408, 410, 2375, 2376 }, // 228 IIC_iTSTi
  { 1, 408, 410, 2376, 2378 }, // 229 IIC_iTSTr
  { 1, 414, 416, 2378, 2380 }, // 230 IIC_iTSTsi
  { 1, 414, 416, 2380, 2383 }, // 231 IIC_iTSTsr
  { 1, 408, 410, 2383, 2385 }, // 232 IIC_iUNAr
  { 1, 408, 410, 2385, 2387 }, // 233 IIC_iUNAsi
  { 0, ~0U, ~0U, ~0U, ~0U } // end marker
};

// ===============================================================
// Data tables for the new per-operand machine model.

// {ProcResourceIdx, Cycles}
extern const llvm::MCWriteProcResEntry ARMWriteProcResTable[] = {
  { 0,  0}, // Invalid
  { 3,  1}, // #1
  { 1,  1}, // #2
  { 4,  1}, // #3
  { 1,  1}, // #4
  { 4,  2}, // #5
  { 1,  1}, // #6
  { 1,  1}, // #7
  { 4,  1}, // #8
  { 4,  1}, // #9
  { 1,  1}, // #10
  { 4,  1}, // #11
  { 5,  1}, // #12
  { 1,  1}, // #13
  { 1,  1}, // #14
  { 4,  1}, // #15
  { 4,  1}, // #16
  { 5,  1}, // #17
  { 1,  1}, // #18
  { 1,  1}, // #19
  { 4,  1}, // #20
  { 4,  1}, // #21
  { 4,  1}, // #22
  { 5,  1}, // #23
  { 5,  1}, // #24
  { 1,  1}, // #25
  { 1,  1}, // #26
  { 4,  1}, // #27
  { 4,  1}, // #28
  { 5,  1}, // #29
  { 5,  1}, // #30
  { 1,  1}, // #31
  { 1,  1}, // #32
  { 1,  1}, // #33
  { 1,  1}, // #34
  { 4,  1}, // #35
  { 4,  1}, // #36
  { 4,  1}, // #37
  { 4,  1}, // #38
  { 5,  1}, // #39
  { 5,  1}, // #40
  { 5,  1}, // #41
  { 1,  1}, // #42
  { 1,  1}, // #43
  { 1,  1}, // #44
  { 1,  1}, // #45
  { 1,  1}, // #46
  { 1,  1}, // #47
  { 4,  1}, // #48
  { 4,  1}, // #49
  { 4,  1}, // #50
  { 4,  1}, // #51
  { 4,  1}, // #52
  { 4,  1}, // #53
  { 5,  1}, // #54
  { 5,  1}, // #55
  { 5,  1}, // #56
  { 5,  1}, // #57
  { 5,  1}, // #58
  { 1,  1}, // #59
  { 1,  1}, // #60
  { 1,  1}, // #61
  { 1,  1}, // #62
  { 1,  1}, // #63
  { 4,  1}, // #64
  { 4,  1}, // #65
  { 4,  1}, // #66
  { 4,  1}, // #67
  { 4,  1}, // #68
  { 5,  1}, // #69
  { 5,  1}, // #70
  { 5,  1}, // #71
  { 5,  1}, // #72
  { 2,  1}, // #73
  { 2,  1}, // #74
  { 2,  1}, // #75
  { 1,  1}, // #76
  { 1,  1}, // #77
  { 5,  1}, // #78
  { 1,  1}, // #79
  { 2,  1}, // #80
  { 5,  1}, // #81
  { 6,  1}, // #82
  { 6,  1}, // #83
  { 6,  1}, // #84
  { 6,  1}, // #85
  { 6,  1}, // #86
  { 2,  1}, // #87
  { 2,  1}, // #88
  { 5,  1}, // #89
  { 1,  1}, // #90
  { 1,  1}, // #91
  { 1,  1}, // #92
  { 5,  1}, // #93
  { 1,  1}, // #94
  { 1,  1}, // #95
  { 1,  1}, // #96
  { 4,  1}, // #97
  { 4,  1}, // #98
  { 4,  1}, // #99
  { 5,  1}, // #100
  { 5,  1}, // #101
  { 5,  1}, // #102
  { 1,  1}, // #103
  { 1,  1}, // #104
  { 1,  1}, // #105
  { 1,  1}, // #106
  { 4,  1}, // #107
  { 4,  1}, // #108
  { 4,  1}, // #109
  { 4,  1}, // #110
  { 5,  1}, // #111
  { 5,  1}, // #112
  { 5,  1}, // #113
  { 5,  1}, // #114
  { 1,  1}, // #115
  { 1,  1}, // #116
  { 1,  1}, // #117
  { 1,  1}, // #118
  { 1,  1}, // #119
  { 4,  1}, // #120
  { 4,  1}, // #121
  { 4,  1}, // #122
  { 4,  1}, // #123
  { 4,  1}, // #124
  { 5,  1}, // #125
  { 5,  1}, // #126
  { 5,  1}, // #127
  { 5,  1}, // #128
  { 5,  1}, // #129
  { 1,  1}, // #130
  { 1,  1}, // #131
  { 1,  1}, // #132
  { 1,  1}, // #133
  { 1,  1}, // #134
  { 1,  1}, // #135
  { 4,  1}, // #136
  { 4,  1}, // #137
  { 4,  1}, // #138
  { 4,  1}, // #139
  { 4,  1}, // #140
  { 4,  1}, // #141
  { 5,  1}, // #142
  { 5,  1}, // #143
  { 5,  1}, // #144
  { 5,  1}, // #145
  { 5,  1}, // #146
  { 5,  1}, // #147
  { 1,  1}, // #148
  { 1,  1}, // #149
  { 1,  1}, // #150
  { 1,  1}, // #151
  { 1,  1}, // #152
  { 1,  1}, // #153
  { 1,  1}, // #154
  { 4,  1}, // #155
  { 4,  1}, // #156
  { 4,  1}, // #157
  { 4,  1}, // #158
  { 4,  1}, // #159
  { 4,  1}, // #160
  { 4,  1}, // #161
  { 5,  1}, // #162
  { 5,  1}, // #163
  { 5,  1}, // #164
  { 5,  1}, // #165
  { 5,  1}, // #166
  { 5,  1}, // #167
  { 5,  1}, // #168
  { 1,  1}, // #169
  { 1,  1}, // #170
  { 1,  1}, // #171
  { 1,  1}, // #172
  { 1,  1}, // #173
  { 1,  1}, // #174
  { 1,  1}, // #175
  { 1,  1}, // #176
  { 4,  1}, // #177
  { 4,  1}, // #178
  { 4,  1}, // #179
  { 4,  1}, // #180
  { 4,  1}, // #181
  { 4,  1}, // #182
  { 4,  1}, // #183
  { 4,  1}, // #184
  { 5,  1}, // #185
  { 5,  1}, // #186
  { 5,  1}, // #187
  { 5,  1}, // #188
  { 5,  1}, // #189
  { 5,  1}, // #190
  { 5,  1}, // #191
  { 5,  1}, // #192
  { 1,  1}, // #193
  { 1,  1}, // #194
  { 5,  1}, // #195
  { 5,  1}, // #196
  { 1,  1}, // #197
  { 1,  1}, // #198
  { 1,  1}, // #199
  { 5,  1}, // #200
  { 5,  1}, // #201
  { 5,  1}, // #202
  { 1,  1}, // #203
  { 1,  1}, // #204
  { 1,  1}, // #205
  { 1,  1}, // #206
  { 5,  1}, // #207
  { 5,  1}, // #208
  { 5,  1}, // #209
  { 5,  1}, // #210
  { 1,  1}, // #211
  { 1,  1}, // #212
  { 1,  1}, // #213
  { 1,  1}, // #214
  { 1,  1}, // #215
  { 5,  1}, // #216
  { 5,  1}, // #217
  { 5,  1}, // #218
  { 5,  1}, // #219
  { 5,  1}, // #220
  { 1,  1}, // #221
  { 1,  1}, // #222
  { 1,  1}, // #223
  { 1,  1}, // #224
  { 1,  1}, // #225
  { 1,  1}, // #226
  { 5,  1}, // #227
  { 5,  1}, // #228
  { 5,  1}, // #229
  { 5,  1}, // #230
  { 5,  1}, // #231
  { 5,  1}, // #232
  { 1,  1}, // #233
  { 1,  1}, // #234
  { 1,  1}, // #235
  { 1,  1}, // #236
  { 1,  1}, // #237
  { 1,  1}, // #238
  { 1,  1}, // #239
  { 5,  1}, // #240
  { 5,  1}, // #241
  { 5,  1}, // #242
  { 5,  1}, // #243
  { 5,  1}, // #244
  { 5,  1}, // #245
  { 5,  1}, // #246
  { 1,  1}, // #247
  { 1,  1}, // #248
  { 1,  1}, // #249
  { 1,  1}, // #250
  { 1,  1}, // #251
  { 1,  1}, // #252
  { 1,  1}, // #253
  { 1,  1}, // #254
  { 5,  1}, // #255
  { 5,  1}, // #256
  { 5,  1}, // #257
  { 5,  1}, // #258
  { 5,  1}, // #259
  { 5,  1}, // #260
  { 5,  1}, // #261
  { 5,  1}, // #262
  { 1,  1}, // #263
  { 3,  1}, // #264
  { 5,  1}, // #265
  { 1,  1}, // #266
  { 1,  1}, // #267
  { 3,  1}, // #268
  { 5,  1}, // #269
  { 5,  1}, // #270
  { 1,  1}, // #271
  { 1,  1}, // #272
  { 1,  1}, // #273
  { 3,  1}, // #274
  { 5,  1}, // #275
  { 5,  1}, // #276
  { 5,  1}, // #277
  { 1,  1}, // #278
  { 1,  1}, // #279
  { 1,  1}, // #280
  { 1,  1}, // #281
  { 3,  1}, // #282
  { 5,  1}, // #283
  { 5,  1}, // #284
  { 5,  1}, // #285
  { 5,  1}, // #286
  { 1,  1}, // #287
  { 1,  1}, // #288
  { 1,  1}, // #289
  { 1,  1}, // #290
  { 1,  1}, // #291
  { 3,  1}, // #292
  { 5,  1}, // #293
  { 5,  1}, // #294
  { 5,  1}, // #295
  { 5,  1}, // #296
  { 5,  1}, // #297
  { 1,  1}, // #298
  { 1,  1}, // #299
  { 1,  1}, // #300
  { 1,  1}, // #301
  { 1,  1}, // #302
  { 1,  1}, // #303
  { 3,  1}, // #304
  { 5,  1}, // #305
  { 5,  1}, // #306
  { 5,  1}, // #307
  { 5,  1}, // #308
  { 5,  1}, // #309
  { 5,  1}, // #310
  { 1,  1}, // #311
  { 1,  1}, // #312
  { 1,  1}, // #313
  { 1,  1}, // #314
  { 1,  1}, // #315
  { 1,  1}, // #316
  { 1,  1}, // #317
  { 3,  1}, // #318
  { 5,  1}, // #319
  { 5,  1}, // #320
  { 5,  1}, // #321
  { 5,  1}, // #322
  { 5,  1}, // #323
  { 5,  1}, // #324
  { 5,  1}, // #325
  { 1,  1}, // #326
  { 1,  1}, // #327
  { 1,  1}, // #328
  { 1,  1}, // #329
  { 1,  1}, // #330
  { 1,  1}, // #331
  { 1,  1}, // #332
  { 1,  1}, // #333
  { 3,  1}, // #334
  { 5,  1}, // #335
  { 5,  1}, // #336
  { 5,  1}, // #337
  { 5,  1}, // #338
  { 5,  1}, // #339
  { 5,  1}, // #340
  { 5,  1}, // #341
  { 5,  1} // #342
}; // ARMWriteProcResTable

// {Cycles, WriteResourceID}
extern const llvm::MCWriteLatencyEntry ARMWriteLatencyTable[] = {
  { 0,  0}, // Invalid
  { 1,  0}, // #1 A9WriteB_A9WriteV1_A9WriteFMov_A9WriteA_A9WriteI
  { 6,  0}, // #2 A9WriteV6_A9WriteFMulD
  { 5,  0}, // #3 A9WriteV5_A9WriteFMulS
  { 4,  0}, // #4 A9WriteV4_A9Write2V4_A9WriteF
  { 3,  0}, // #5 A9WriteV3_A9WriteAsr
  { 2,  0}, // #6 A9WriteV2_A9WriteAsi_A9WriteI_A9WriteIsr
  { 3,  0}, // #7 A9WriteV3_A9WriteM16
  { 4,  0}, // #8 A9WriteV4_A9WriteM16Hi
  { 9,  0}, // #9 A9WriteV9_A9Write2V9_A9WriteFMAD
  {10,  0}, // #10 A9WriteV10
  { 1,  0}, // #11 A9WriteLfpOp_A9WriteAdr_A9WriteLSfp_A9WriteFMov
  { 1,  0}, // #12 A9WriteAdr_A9WriteLfpOp_A9WriteFMov_A9WriteLSfp_A9WriteS
  { 5,  0}, // #13 A9WriteLfpOp
  { 1,  0}, // #14 A9WriteAdr
  { 6,  0}, // #15 A9WriteLfpOp
  { 1,  0}, // #16 A9WriteAdr
  { 2,  0}, // #17 A9WriteLfpOp_A9WriteAdr
  { 2,  0}, // #18 A9WriteAdr_A9WriteLfpOp
  { 7,  0}, // #19 A9WriteLfpOp_A9WriteV7_A9Write2V7
  { 3,  0}, // #20 A9WriteAdr
  { 9,  0}, // #21 A9WriteLfpOp
  { 5,  0}, // #22 A9WriteAdr
  { 8,  0}, // #23 A9WriteLfpOp_A9WriteFMAS
  { 4,  0}, // #24 A9WriteAdr
  {15,  0}, // #25 A9WriteFDivS
  {25,  0}, // #26 A9WriteFDivD
  {17,  0}, // #27 A9WriteFSqrtS
  {32,  0}, // #28 A9WriteFSqrtD
  { 4, 84}, // #29 A9WriteLb
  { 2,  0}, // #30 A9WriteAdr
  { 5, 85}, // #31 A9WriteLbsi
  { 2,  0}, // #32 A9WriteAdr
  { 3, 41}, // #33 A9WriteL
  { 3, 58}, // #34 A9WriteLHi
  { 1,  0}, // #35 A9WriteAdr
  { 3, 41}, // #36 A9WriteL
  { 1,  0}, // #37 A9WriteAdr
  { 4, 108}, // #38 A9WriteLsi
  { 1,  0}, // #39 A9WriteAdr
  { 3, 41}, // #40 A9WriteL
  { 1,  0}, // #41 A9WriteAdr
  { 1,  0}, // #42 A9WriteA
  { 4,  0}, // #43 A9WriteM
  { 5,  0}, // #44 A9WriteMHi
  { 5, 41}, // #45 A9WriteL
  { 2,  0}, // #46 A9WriteAdr
  { 1,  0}, // #47 A9WriteS_A9WriteCycle1
  { 3,  0}, // #48 A9WriteAdr_A9WriteCycle1
  { 1,  0}, // #49 A9WriteS_A9WriteAdr
  { 3,  0}, // #50 A9WriteLfpOp_A9WriteAdr
  { 3,  0}, // #51 A9WriteAdr_A9WriteLfpOp
  { 4,  0}, // #52 A9WriteLfpOp_A9WriteAdr
  { 4,  0}, // #53 A9WriteAdr_A9WriteLfpOp
  { 5,  0}, // #54 A9WriteLfpOp_A9WriteAdr
  { 5,  0}, // #55 A9WriteAdr_A9WriteLfpOp
  { 6,  0}, // #56 A9WriteLfpOp_A9WriteAdr
  { 6,  0}, // #57 A9WriteAdr_A9WriteLfpOp
  { 7,  0}, // #58 A9WriteLfpOp_A9WriteAdr
  { 7,  0}, // #59 A9WriteAdr_A9WriteLfpOp
  { 8,  0}, // #60 A9WriteLfpOp_A9WriteAdr
  { 8,  0}, // #61 A9WriteAdr_A9WriteLfpOp
  { 1,  0}, // #62 A9WriteCycle1
  { 3,  0}, // #63 A9WriteCycle1
  { 2,  0}, // #64 A9WriteCycle1
  { 4,  0}, // #65 A9WriteCycle1
  { 2,  0}, // #66 A9WriteAdr
  { 1,  0}, // #67 A9WriteCycle1
  { 3,  0}, // #68 A9WriteCycle1
  { 2,  0}, // #69 A9WriteCycle1
  { 4,  0}, // #70 A9WriteCycle1
  { 3,  0}, // #71 A9WriteCycle1
  { 5,  0}, // #72 A9WriteCycle1
  { 3,  0}, // #73 A9WriteAdr
  { 1,  0}, // #74 A9WriteCycle1
  { 3,  0}, // #75 A9WriteCycle1
  { 2,  0}, // #76 A9WriteCycle1
  { 4,  0}, // #77 A9WriteCycle1
  { 3,  0}, // #78 A9WriteCycle1
  { 5,  0}, // #79 A9WriteCycle1
  { 4,  0}, // #80 A9WriteCycle1
  { 6,  0}, // #81 A9WriteCycle1
  { 4,  0}, // #82 A9WriteAdr
  { 1,  0}, // #83 A9WriteCycle1
  { 3,  0}, // #84 A9WriteCycle1
  { 2,  0}, // #85 A9WriteCycle1
  { 4,  0}, // #86 A9WriteCycle1
  { 3,  0}, // #87 A9WriteCycle1
  { 5,  0}, // #88 A9WriteCycle1
  { 4,  0}, // #89 A9WriteCycle1
  { 6,  0}, // #90 A9WriteCycle1
  { 5,  0}, // #91 A9WriteCycle1
  { 7,  0}, // #92 A9WriteCycle1
  { 5,  0}, // #93 A9WriteAdr
  { 1,  0}, // #94 A9WriteCycle1
  { 3,  0}, // #95 A9WriteCycle1
  { 2,  0}, // #96 A9WriteCycle1
  { 4,  0}, // #97 A9WriteCycle1
  { 3,  0}, // #98 A9WriteCycle1
  { 5,  0}, // #99 A9WriteCycle1
  { 4,  0}, // #100 A9WriteCycle1
  { 6,  0}, // #101 A9WriteCycle1
  { 5,  0}, // #102 A9WriteCycle1
  { 7,  0}, // #103 A9WriteCycle1
  { 6,  0}, // #104 A9WriteCycle1
  { 8,  0}, // #105 A9WriteCycle1
  { 6,  0}, // #106 A9WriteAdr
  { 1,  0}, // #107 A9WriteCycle1
  { 3,  0}, // #108 A9WriteCycle1
  { 2,  0}, // #109 A9WriteCycle1
  { 4,  0}, // #110 A9WriteCycle1
  { 3,  0}, // #111 A9WriteCycle1
  { 5,  0}, // #112 A9WriteCycle1
  { 4,  0}, // #113 A9WriteCycle1
  { 6,  0}, // #114 A9WriteCycle1
  { 5,  0}, // #115 A9WriteCycle1
  { 7,  0}, // #116 A9WriteCycle1
  { 6,  0}, // #117 A9WriteCycle1
  { 8,  0}, // #118 A9WriteCycle1
  { 7,  0}, // #119 A9WriteCycle1
  { 9,  0}, // #120 A9WriteCycle1
  { 7,  0}, // #121 A9WriteAdr
  { 1,  0}, // #122 A9WriteCycle1
  { 3,  0}, // #123 A9WriteCycle1
  { 2,  0}, // #124 A9WriteCycle1
  { 4,  0}, // #125 A9WriteCycle1
  { 3,  0}, // #126 A9WriteCycle1
  { 5,  0}, // #127 A9WriteCycle1
  { 4,  0}, // #128 A9WriteCycle1
  { 6,  0}, // #129 A9WriteCycle1
  { 5,  0}, // #130 A9WriteCycle1
  { 7,  0}, // #131 A9WriteCycle1
  { 6,  0}, // #132 A9WriteCycle1
  { 8,  0}, // #133 A9WriteCycle1
  { 7,  0}, // #134 A9WriteCycle1
  { 9,  0}, // #135 A9WriteCycle1
  { 8,  0}, // #136 A9WriteCycle1
  {10,  0}, // #137 A9WriteCycle1
  { 8,  0}, // #138 A9WriteAdr
  { 1,  0}, // #139 A9WriteCycle1
  { 3,  0}, // #140 A9WriteCycle1
  { 2,  0}, // #141 A9WriteCycle1
  { 4,  0}, // #142 A9WriteCycle1
  { 5,  0}, // #143 A9WriteCycle1
  { 5,  0}, // #144 A9WriteCycle1
  { 6,  0}, // #145 A9WriteCycle1
  { 6,  0}, // #146 A9WriteCycle1
  { 7,  0}, // #147 A9WriteCycle1
  { 7,  0}, // #148 A9WriteCycle1
  { 8,  0}, // #149 A9WriteCycle1
  { 8,  0}, // #150 A9WriteCycle1
  { 9,  0}, // #151 A9WriteCycle1
  { 9,  0}, // #152 A9WriteCycle1
  {10,  0}, // #153 A9WriteCycle1
  {10,  0}, // #154 A9WriteCycle1
  { 2,  0}, // #155 A9WriteAdr
  { 1,  0}, // #156 A9WriteAdr
  { 1,  0}, // #157 A9WriteCycle1
  { 3,  0}, // #158 A9WriteCycle1
  { 8,  0}, // #159 A9WriteAdr
  { 1,  0}, // #160 A9WriteCycle1
  { 3,  0}, // #161 A9WriteCycle1
  { 2,  0}, // #162 A9WriteCycle1
  { 4,  0}, // #163 A9WriteCycle1
  { 3,  0}, // #164 A9WriteCycle1
  { 5,  0}, // #165 A9WriteCycle1
  { 4,  0}, // #166 A9WriteCycle1
  { 6,  0}, // #167 A9WriteCycle1
  { 5,  0}, // #168 A9WriteCycle1
  { 7,  0}, // #169 A9WriteCycle1
  { 6,  0}, // #170 A9WriteCycle1
  { 8,  0}, // #171 A9WriteCycle1
  { 7,  0}, // #172 A9WriteCycle1
  { 9,  0}, // #173 A9WriteCycle1
  { 8,  0}, // #174 A9WriteCycle1
  {10,  0}, // #175 A9WriteCycle1
  { 2,  0}, // #176 A9WriteAdr
  { 1,  0}, // #177 A9WriteCycle1
  { 3,  0}, // #178 A9WriteCycle1
  { 2,  0}, // #179 A9WriteCycle1
  { 4,  0}, // #180 A9WriteCycle1
  { 5,  0}, // #181 A9WriteCycle1
  { 5,  0}, // #182 A9WriteCycle1
  { 6,  0}, // #183 A9WriteCycle1
  { 6,  0}, // #184 A9WriteCycle1
  { 7,  0}, // #185 A9WriteCycle1
  { 7,  0}, // #186 A9WriteCycle1
  { 8,  0}, // #187 A9WriteCycle1
  { 8,  0}, // #188 A9WriteCycle1
  { 9,  0}, // #189 A9WriteCycle1
  { 9,  0}, // #190 A9WriteCycle1
  {10,  0}, // #191 A9WriteCycle1
  {10,  0}, // #192 A9WriteCycle1
  { 3,  0}, // #193 A9WriteCycle1
  { 3,  0}, // #194 A9WriteCycle1
  { 1,  0}, // #195 A9WriteAdr
  { 0,  0}, // #196 A9WriteIssue
  { 3,  0}, // #197 A9WriteCycle1
  { 3,  0}, // #198 A9WriteCycle1
  { 4,  0}, // #199 A9WriteCycle1
  { 4,  0}, // #200 A9WriteCycle1
  { 2,  0}, // #201 A9WriteAdr
  { 0,  0}, // #202 A9WriteIssue
  { 3,  0}, // #203 A9WriteCycle1
  { 3,  0}, // #204 A9WriteCycle1
  { 4,  0}, // #205 A9WriteCycle1
  { 4,  0}, // #206 A9WriteCycle1
  { 5,  0}, // #207 A9WriteCycle1
  { 5,  0}, // #208 A9WriteCycle1
  { 3,  0}, // #209 A9WriteAdr
  { 0,  0}, // #210 A9WriteIssue
  { 3,  0}, // #211 A9WriteCycle1
  { 3,  0}, // #212 A9WriteCycle1
  { 4,  0}, // #213 A9WriteCycle1
  { 4,  0}, // #214 A9WriteCycle1
  { 5,  0}, // #215 A9WriteCycle1
  { 5,  0}, // #216 A9WriteCycle1
  { 6,  0}, // #217 A9WriteCycle1
  { 6,  0}, // #218 A9WriteCycle1
  { 4,  0}, // #219 A9WriteAdr
  { 0,  0}, // #220 A9WriteIssue
  { 3,  0}, // #221 A9WriteCycle1
  { 3,  0}, // #222 A9WriteCycle1
  { 4,  0}, // #223 A9WriteCycle1
  { 4,  0}, // #224 A9WriteCycle1
  { 5,  0}, // #225 A9WriteCycle1
  { 5,  0}, // #226 A9WriteCycle1
  { 6,  0}, // #227 A9WriteCycle1
  { 6,  0}, // #228 A9WriteCycle1
  { 7,  0}, // #229 A9WriteCycle1
  { 7,  0}, // #230 A9WriteCycle1
  { 5,  0}, // #231 A9WriteAdr
  { 0,  0}, // #232 A9WriteIssue
  { 3,  0}, // #233 A9WriteCycle1
  { 3,  0}, // #234 A9WriteCycle1
  { 4,  0}, // #235 A9WriteCycle1
  { 4,  0}, // #236 A9WriteCycle1
  { 5,  0}, // #237 A9WriteCycle1
  { 5,  0}, // #238 A9WriteCycle1
  { 6,  0}, // #239 A9WriteCycle1
  { 6,  0}, // #240 A9WriteCycle1
  { 7,  0}, // #241 A9WriteCycle1
  { 7,  0}, // #242 A9WriteCycle1
  { 8,  0}, // #243 A9WriteCycle1
  { 8,  0}, // #244 A9WriteCycle1
  { 6,  0}, // #245 A9WriteAdr
  { 0,  0}, // #246 A9WriteIssue
  { 3,  0}, // #247 A9WriteCycle1
  { 3,  0}, // #248 A9WriteCycle1
  { 4,  0}, // #249 A9WriteCycle1
  { 4,  0}, // #250 A9WriteCycle1
  { 5,  0}, // #251 A9WriteCycle1
  { 5,  0}, // #252 A9WriteCycle1
  { 6,  0}, // #253 A9WriteCycle1
  { 6,  0}, // #254 A9WriteCycle1
  { 7,  0}, // #255 A9WriteCycle1
  { 7,  0}, // #256 A9WriteCycle1
  { 8,  0}, // #257 A9WriteCycle1
  { 8,  0}, // #258 A9WriteCycle1
  { 9,  0}, // #259 A9WriteCycle1
  { 9,  0}, // #260 A9WriteCycle1
  { 7,  0}, // #261 A9WriteAdr
  { 0,  0}, // #262 A9WriteIssue
  { 3,  0}, // #263 A9WriteCycle1
  { 3,  0}, // #264 A9WriteCycle1
  { 4,  0}, // #265 A9WriteCycle1
  { 4,  0}, // #266 A9WriteCycle1
  { 5,  0}, // #267 A9WriteCycle1
  { 5,  0}, // #268 A9WriteCycle1
  { 6,  0}, // #269 A9WriteCycle1
  { 6,  0}, // #270 A9WriteCycle1
  { 7,  0}, // #271 A9WriteCycle1
  { 7,  0}, // #272 A9WriteCycle1
  { 8,  0}, // #273 A9WriteCycle1
  { 8,  0}, // #274 A9WriteCycle1
  { 9,  0}, // #275 A9WriteCycle1
  { 9,  0}, // #276 A9WriteCycle1
  {10,  0}, // #277 A9WriteCycle1
  {10,  0}, // #278 A9WriteCycle1
  { 8,  0}, // #279 A9WriteAdr
  { 0,  0}, // #280 A9WriteIssue
  { 3,  0}, // #281 A9WriteCycle1
  { 3,  0}, // #282 A9WriteCycle1
  { 4,  0}, // #283 A9WriteCycle1
  { 4,  0}, // #284 A9WriteCycle1
  { 5,  0}, // #285 A9WriteCycle1
  { 5,  0}, // #286 A9WriteCycle1
  { 6,  0}, // #287 A9WriteCycle1
  { 6,  0}, // #288 A9WriteCycle1
  { 7,  0}, // #289 A9WriteCycle1
  { 7,  0}, // #290 A9WriteCycle1
  { 8,  0}, // #291 A9WriteCycle1
  { 8,  0}, // #292 A9WriteCycle1
  { 9,  0}, // #293 A9WriteCycle1
  { 9,  0}, // #294 A9WriteCycle1
  {10,  0}, // #295 A9WriteCycle1
  {10,  0}, // #296 A9WriteCycle1
  { 2,  0}, // #297 A9WriteAdr
  { 0,  0}, // #298 A9WriteIssue
  { 3,  0}, // #299 A9WriteCycle1
  { 3,  0}, // #300 A9WriteCycle1
  { 1,  0}, // #301 A9WriteAdr
  { 1,  0}, // #302 A9WriteB
  { 3,  0}, // #303 A9WriteCycle1
  { 3,  0}, // #304 A9WriteCycle1
  { 4,  0}, // #305 A9WriteCycle1
  { 4,  0}, // #306 A9WriteCycle1
  { 2,  0}, // #307 A9WriteAdr
  { 1,  0}, // #308 A9WriteB
  { 3,  0}, // #309 A9WriteCycle1
  { 3,  0}, // #310 A9WriteCycle1
  { 4,  0}, // #311 A9WriteCycle1
  { 4,  0}, // #312 A9WriteCycle1
  { 5,  0}, // #313 A9WriteCycle1
  { 5,  0}, // #314 A9WriteCycle1
  { 3,  0}, // #315 A9WriteAdr
  { 1,  0}, // #316 A9WriteB
  { 3,  0}, // #317 A9WriteCycle1
  { 3,  0}, // #318 A9WriteCycle1
  { 4,  0}, // #319 A9WriteCycle1
  { 4,  0}, // #320 A9WriteCycle1
  { 5,  0}, // #321 A9WriteCycle1
  { 5,  0}, // #322 A9WriteCycle1
  { 6,  0}, // #323 A9WriteCycle1
  { 6,  0}, // #324 A9WriteCycle1
  { 4,  0}, // #325 A9WriteAdr
  { 1,  0}, // #326 A9WriteB
  { 3,  0}, // #327 A9WriteCycle1
  { 3,  0}, // #328 A9WriteCycle1
  { 4,  0}, // #329 A9WriteCycle1
  { 4,  0}, // #330 A9WriteCycle1
  { 5,  0}, // #331 A9WriteCycle1
  { 5,  0}, // #332 A9WriteCycle1
  { 6,  0}, // #333 A9WriteCycle1
  { 6,  0}, // #334 A9WriteCycle1
  { 7,  0}, // #335 A9WriteCycle1
  { 7,  0}, // #336 A9WriteCycle1
  { 5,  0}, // #337 A9WriteAdr
  { 1,  0}, // #338 A9WriteB
  { 3,  0}, // #339 A9WriteCycle1
  { 3,  0}, // #340 A9WriteCycle1
  { 4,  0}, // #341 A9WriteCycle1
  { 4,  0}, // #342 A9WriteCycle1
  { 5,  0}, // #343 A9WriteCycle1
  { 5,  0}, // #344 A9WriteCycle1
  { 6,  0}, // #345 A9WriteCycle1
  { 6,  0}, // #346 A9WriteCycle1
  { 7,  0}, // #347 A9WriteCycle1
  { 7,  0}, // #348 A9WriteCycle1
  { 8,  0}, // #349 A9WriteCycle1
  { 8,  0}, // #350 A9WriteCycle1
  { 6,  0}, // #351 A9WriteAdr
  { 1,  0}, // #352 A9WriteB
  { 3,  0}, // #353 A9WriteCycle1
  { 3,  0}, // #354 A9WriteCycle1
  { 4,  0}, // #355 A9WriteCycle1
  { 4,  0}, // #356 A9WriteCycle1
  { 5,  0}, // #357 A9WriteCycle1
  { 5,  0}, // #358 A9WriteCycle1
  { 6,  0}, // #359 A9WriteCycle1
  { 6,  0}, // #360 A9WriteCycle1
  { 7,  0}, // #361 A9WriteCycle1
  { 7,  0}, // #362 A9WriteCycle1
  { 8,  0}, // #363 A9WriteCycle1
  { 8,  0}, // #364 A9WriteCycle1
  { 9,  0}, // #365 A9WriteCycle1
  { 9,  0}, // #366 A9WriteCycle1
  { 7,  0}, // #367 A9WriteAdr
  { 1,  0}, // #368 A9WriteB
  { 3,  0}, // #369 A9WriteCycle1
  { 3,  0}, // #370 A9WriteCycle1
  { 4,  0}, // #371 A9WriteCycle1
  { 4,  0}, // #372 A9WriteCycle1
  { 5,  0}, // #373 A9WriteCycle1
  { 5,  0}, // #374 A9WriteCycle1
  { 6,  0}, // #375 A9WriteCycle1
  { 6,  0}, // #376 A9WriteCycle1
  { 7,  0}, // #377 A9WriteCycle1
  { 7,  0}, // #378 A9WriteCycle1
  { 8,  0}, // #379 A9WriteCycle1
  { 8,  0}, // #380 A9WriteCycle1
  { 9,  0}, // #381 A9WriteCycle1
  { 9,  0}, // #382 A9WriteCycle1
  {10,  0}, // #383 A9WriteCycle1
  {10,  0}, // #384 A9WriteCycle1
  { 8,  0}, // #385 A9WriteAdr
  { 1,  0}, // #386 A9WriteB
  { 3,  0}, // #387 A9WriteCycle1
  { 3,  0}, // #388 A9WriteCycle1
  { 4,  0}, // #389 A9WriteCycle1
  { 4,  0}, // #390 A9WriteCycle1
  { 5,  0}, // #391 A9WriteCycle1
  { 5,  0}, // #392 A9WriteCycle1
  { 6,  0}, // #393 A9WriteCycle1
  { 6,  0}, // #394 A9WriteCycle1
  { 7,  0}, // #395 A9WriteCycle1
  { 7,  0}, // #396 A9WriteCycle1
  { 8,  0}, // #397 A9WriteCycle1
  { 8,  0}, // #398 A9WriteCycle1
  { 9,  0}, // #399 A9WriteCycle1
  { 9,  0}, // #400 A9WriteCycle1
  {10,  0}, // #401 A9WriteCycle1
  {10,  0}, // #402 A9WriteCycle1
  { 2,  0}, // #403 A9WriteAdr
  { 1,  0}, // #404 A9WriteB
  { 1,  0}, // #405 A9WriteAdr
  { 3,  0}, // #406 A9WriteCycle1
  { 3,  0}, // #407 A9WriteCycle1
  { 0,  0}, // #408 A9WriteIssue
  { 2,  0}, // #409 A9WriteAdr
  { 3,  0}, // #410 A9WriteCycle1
  { 3,  0}, // #411 A9WriteCycle1
  { 4,  0}, // #412 A9WriteCycle1
  { 4,  0}, // #413 A9WriteCycle1
  { 0,  0}, // #414 A9WriteIssue
  { 3,  0}, // #415 A9WriteAdr
  { 3,  0}, // #416 A9WriteCycle1
  { 3,  0}, // #417 A9WriteCycle1
  { 4,  0}, // #418 A9WriteCycle1
  { 4,  0}, // #419 A9WriteCycle1
  { 5,  0}, // #420 A9WriteCycle1
  { 5,  0}, // #421 A9WriteCycle1
  { 0,  0}, // #422 A9WriteIssue
  { 4,  0}, // #423 A9WriteAdr
  { 3,  0}, // #424 A9WriteCycle1
  { 3,  0}, // #425 A9WriteCycle1
  { 4,  0}, // #426 A9WriteCycle1
  { 4,  0}, // #427 A9WriteCycle1
  { 5,  0}, // #428 A9WriteCycle1
  { 5,  0}, // #429 A9WriteCycle1
  { 6,  0}, // #430 A9WriteCycle1
  { 6,  0}, // #431 A9WriteCycle1
  { 0,  0}, // #432 A9WriteIssue
  { 5,  0}, // #433 A9WriteAdr
  { 3,  0}, // #434 A9WriteCycle1
  { 3,  0}, // #435 A9WriteCycle1
  { 4,  0}, // #436 A9WriteCycle1
  { 4,  0}, // #437 A9WriteCycle1
  { 5,  0}, // #438 A9WriteCycle1
  { 5,  0}, // #439 A9WriteCycle1
  { 6,  0}, // #440 A9WriteCycle1
  { 6,  0}, // #441 A9WriteCycle1
  { 7,  0}, // #442 A9WriteCycle1
  { 7,  0}, // #443 A9WriteCycle1
  { 0,  0}, // #444 A9WriteIssue
  { 6,  0}, // #445 A9WriteAdr
  { 3,  0}, // #446 A9WriteCycle1
  { 3,  0}, // #447 A9WriteCycle1
  { 4,  0}, // #448 A9WriteCycle1
  { 4,  0}, // #449 A9WriteCycle1
  { 5,  0}, // #450 A9WriteCycle1
  { 5,  0}, // #451 A9WriteCycle1
  { 6,  0}, // #452 A9WriteCycle1
  { 6,  0}, // #453 A9WriteCycle1
  { 7,  0}, // #454 A9WriteCycle1
  { 7,  0}, // #455 A9WriteCycle1
  { 8,  0}, // #456 A9WriteCycle1
  { 8,  0}, // #457 A9WriteCycle1
  { 0,  0}, // #458 A9WriteIssue
  { 7,  0}, // #459 A9WriteAdr
  { 3,  0}, // #460 A9WriteCycle1
  { 3,  0}, // #461 A9WriteCycle1
  { 4,  0}, // #462 A9WriteCycle1
  { 4,  0}, // #463 A9WriteCycle1
  { 5,  0}, // #464 A9WriteCycle1
  { 5,  0}, // #465 A9WriteCycle1
  { 6,  0}, // #466 A9WriteCycle1
  { 6,  0}, // #467 A9WriteCycle1
  { 7,  0}, // #468 A9WriteCycle1
  { 7,  0}, // #469 A9WriteCycle1
  { 8,  0}, // #470 A9WriteCycle1
  { 8,  0}, // #471 A9WriteCycle1
  { 9,  0}, // #472 A9WriteCycle1
  { 9,  0}, // #473 A9WriteCycle1
  { 0,  0}, // #474 A9WriteIssue
  { 8,  0}, // #475 A9WriteAdr
  { 3,  0}, // #476 A9WriteCycle1
  { 3,  0}, // #477 A9WriteCycle1
  { 4,  0}, // #478 A9WriteCycle1
  { 4,  0}, // #479 A9WriteCycle1
  { 5,  0}, // #480 A9WriteCycle1
  { 5,  0}, // #481 A9WriteCycle1
  { 6,  0}, // #482 A9WriteCycle1
  { 6,  0}, // #483 A9WriteCycle1
  { 7,  0}, // #484 A9WriteCycle1
  { 7,  0}, // #485 A9WriteCycle1
  { 8,  0}, // #486 A9WriteCycle1
  { 8,  0}, // #487 A9WriteCycle1
  { 9,  0}, // #488 A9WriteCycle1
  { 9,  0}, // #489 A9WriteCycle1
  {10,  0}, // #490 A9WriteCycle1
  {10,  0}, // #491 A9WriteCycle1
  { 0,  0}, // #492 A9WriteIssue
  { 2,  0}, // #493 A9WriteAdr
  { 3,  0}, // #494 A9WriteCycle1
  { 3,  0}, // #495 A9WriteCycle1
  { 4,  0}, // #496 A9WriteCycle1
  { 4,  0}, // #497 A9WriteCycle1
  { 5,  0}, // #498 A9WriteCycle1
  { 5,  0}, // #499 A9WriteCycle1
  { 6,  0}, // #500 A9WriteCycle1
  { 6,  0}, // #501 A9WriteCycle1
  { 7,  0}, // #502 A9WriteCycle1
  { 7,  0}, // #503 A9WriteCycle1
  { 8,  0}, // #504 A9WriteCycle1
  { 8,  0}, // #505 A9WriteCycle1
  { 9,  0}, // #506 A9WriteCycle1
  { 9,  0}, // #507 A9WriteCycle1
  {10,  0}, // #508 A9WriteCycle1
  {10,  0}, // #509 A9WriteCycle1
  { 0,  0} // #510 A9WriteIssue
}; // ARMWriteLatencyTable

// {UseIdx, WriteResourceID, Cycles}
extern const llvm::MCReadAdvanceEntry ARMReadAdvanceTable[] = {
  {0,  0,  0}, // Invalid
  {0,  0,  2}, // #1
  {1,  0,  1}, // #2
  {0,  0,  1}, // #3
  {1,  0,  1}, // #4
  {0,  0,  2}, // #5
  {1,  0,  1}, // #6
  {2,  0,  1}, // #7
  {0,  0,  1}, // #8
  {1,  0,  1}, // #9
  {2,  0,  2}, // #10
  {0,  0,  1}, // #11
  {1,  0,  1}, // #12
  {2,  0,  2}, // #13
  {3,  0,  2}, // #14
  {1,  0,  1}, // #15
  {2,  0,  1}, // #16
  {3,  0,  2}, // #17
  {1,  0,  1}, // #18
  {2,  0,  1}, // #19
  {3,  0,  2}, // #20
  {4,  0,  2}, // #21
  {0, 41,  1}, // #22
  {0, 42,  1}, // #23
  {0, 43,  1}, // #24
  {0, 44,  1}, // #25
  {0, 45,  1}, // #26
  {0, 46,  1}, // #27
  {0, 47,  1}, // #28
  {0, 48,  1}, // #29
  {0, 49,  1}, // #30
  {0, 50,  1}, // #31
  {0, 51,  1}, // #32
  {0, 52,  1}, // #33
  {0, 53,  1}, // #34
  {0, 54,  1}, // #35
  {0, 55,  1}, // #36
  {0, 56,  1}, // #37
  {0, 57,  1}, // #38
  {0, 58,  1}, // #39
  {0, 84,  1}, // #40
  {0, 85,  1}, // #41
  {0, 108,  1}, // #42
  {0, 41,  1}, // #43
  {0, 42,  1}, // #44
  {0, 43,  1}, // #45
  {0, 44,  1}, // #46
  {0, 45,  1}, // #47
  {0, 46,  1}, // #48
  {0, 47,  1}, // #49
  {0, 48,  1}, // #50
  {0, 49,  1}, // #51
  {0, 50,  1}, // #52
  {0, 51,  1}, // #53
  {0, 52,  1}, // #54
  {0, 53,  1}, // #55
  {0, 54,  1}, // #56
  {0, 55,  1}, // #57
  {0, 56,  1}, // #58
  {0, 57,  1}, // #59
  {0, 58,  1}, // #60
  {0, 84,  1}, // #61
  {0, 85,  1}, // #62
  {0, 108,  1}, // #63
  {1, 41,  1}, // #64
  {1, 42,  1}, // #65
  {1, 43,  1}, // #66
  {1, 44,  1}, // #67
  {1, 45,  1}, // #68
  {1, 46,  1}, // #69
  {1, 47,  1}, // #70
  {1, 48,  1}, // #71
  {1, 49,  1}, // #72
  {1, 50,  1}, // #73
  {1, 51,  1}, // #74
  {1, 52,  1}, // #75
  {1, 53,  1}, // #76
  {1, 54,  1}, // #77
  {1, 55,  1}, // #78
  {1, 56,  1}, // #79
  {1, 57,  1}, // #80
  {1, 58,  1}, // #81
  {1, 84,  1}, // #82
  {1, 85,  1}, // #83
  {1, 108,  1} // #84
}; // ARMReadAdvanceTable

// {Name, NumMicroOps, BeginGroup, EndGroup, WriteProcResIdx,#, WriteLatencyIdx,#, ReadAdvanceIdx,#}
static const llvm::MCSchedClassDesc CortexA9ModelSchedClasses[] = {
  {DBGFIELD("InvalidSchedClass")  65535, 0, 0,  0, 0,  0, 0,  0, 0},
  {DBGFIELD("IIC_Br")             1, 0, 0,  1, 1,  1, 1,  0, 0}, // #1
  {DBGFIELD("IIC_Preload")        0, 0, 0,  0, 0,  0, 0,  0, 0}, // #2
  {DBGFIELD("IIC_VABAD")          1, 0, 0,  2, 2,  2, 1,  1, 2}, // #3
  {DBGFIELD("IIC_VABAQ")          1, 0, 0,  2, 2,  2, 1,  1, 2}, // #4
  {DBGFIELD("IIC_VBIND")          1, 0, 0,  2, 2,  3, 1,  3, 2}, // #5
  {DBGFIELD("IIC_VBINQ")          1, 0, 0,  2, 2,  2, 1,  3, 2}, // #6
  {DBGFIELD("IIC_VBINi4D")        1, 0, 0,  2, 2,  4, 1,  3, 2}, // #7
  {DBGFIELD("IIC_VBINi4Q")        1, 0, 0,  2, 2,  4, 1,  3, 2}, // #8
  {DBGFIELD("IIC_VBINiD")         1, 0, 0,  2, 2,  5, 1,  3, 2}, // #9
  {DBGFIELD("IIC_VBINiQ")         1, 0, 0,  2, 2,  5, 1,  3, 2}, // #10
  {DBGFIELD("IIC_VCNTiD")         1, 0, 0,  2, 2,  5, 1,  3, 1}, // #11
  {DBGFIELD("IIC_VCNTiQ")         1, 0, 0,  4, 2,  4, 1,  1, 1}, // #12
  {DBGFIELD("IIC_VEXTD")          1, 0, 0,  2, 2,  6, 1,  0, 0}, // #13
  {DBGFIELD("IIC_VEXTQ")          2, 0, 0,  6, 4,  7, 2,  2, 1}, // #14
  {DBGFIELD("IIC_VFMACD")         1, 0, 0,  2, 2,  9, 1,  1, 2}, // #15
  {DBGFIELD("IIC_VFMACQ")         1, 0, 0,  2, 2, 10, 1,  1, 2}, // #16
  {DBGFIELD("IIC_VFMULD")         1, 0, 0,  2, 2,  3, 1,  3, 1}, // #17
  {DBGFIELD("IIC_VFMULQ")         1, 0, 0,  2, 2,  2, 1,  3, 1}, // #18
  {DBGFIELD("IIC_VLD1")           1, 0, 0, 10, 3, 11, 2,  0, 0}, // #19
  {DBGFIELD("IIC_VLD1dup")        1, 0, 0, 13, 5, 13, 2,  0, 0}, // #20
  {DBGFIELD("IIC_VLD1dupu")       1, 0, 0, 13, 5, 13, 2,  0, 0}, // #21
  {DBGFIELD("IIC_VLD1ln")         1, 0, 0, 18, 7, 15, 2,  0, 0}, // #22
  {DBGFIELD("IIC_VLD1lnu")        1, 0, 0, 18, 7, 15, 2,  0, 0}, // #23
  {DBGFIELD("IIC_VLD1u")          1, 0, 0, 10, 3, 11, 2,  0, 0}, // #24
  {DBGFIELD("IIC_VLD1x2")         1, 0, 0, 10, 3, 11, 2,  0, 0}, // #25
  {DBGFIELD("IIC_VLD1x2u")        1, 0, 0, 10, 3, 11, 2,  0, 0}, // #26
  {DBGFIELD("IIC_VLD1x3")         1, 0, 0, 25, 6, 17, 2,  0, 0}, // #27
  {DBGFIELD("IIC_VLD1x3u")        1, 0, 0, 25, 6, 17, 2,  0, 0}, // #28
  {DBGFIELD("IIC_VLD1x4")         1, 0, 0, 25, 6, 17, 2,  0, 0}, // #29
  {DBGFIELD("IIC_VLD1x4u")        1, 0, 0, 25, 6, 17, 2,  0, 0}, // #30
  {DBGFIELD("IIC_VLD2")           1, 0, 0, 13, 5, 13, 2,  0, 0}, // #31
  {DBGFIELD("IIC_VLD2dup")        1, 0, 0, 13, 5, 13, 2,  0, 0}, // #32
  {DBGFIELD("IIC_VLD2dupu")       1, 0, 0, 13, 5, 13, 2,  0, 0}, // #33
  {DBGFIELD("IIC_VLD2ln")         1, 0, 0, 18, 7, 15, 2,  0, 0}, // #34
  {DBGFIELD("IIC_VLD2lnu")        1, 0, 0, 18, 7, 15, 2,  0, 0}, // #35
  {DBGFIELD("IIC_VLD2u")          1, 0, 0, 13, 5, 13, 2,  0, 0}, // #36
  {DBGFIELD("IIC_VLD2x2")         1, 0, 0, 18, 7, 15, 2,  0, 0}, // #37
  {DBGFIELD("IIC_VLD2x2u")        1, 0, 0, 18, 7, 15, 2,  0, 0}, // #38
  {DBGFIELD("IIC_VLD3")           1, 0, 0, 31, 11, 19, 2,  0, 0}, // #39
  {DBGFIELD("IIC_VLD3dup")        1, 0, 0, 31, 11, 19, 2,  0, 0}, // #40
  {DBGFIELD("IIC_VLD3dupu")       1, 0, 0, 31, 11, 19, 2,  0, 0}, // #41
  {DBGFIELD("IIC_VLD3ln")         1, 0, 0, 42, 17, 21, 2,  0, 0}, // #42
  {DBGFIELD("IIC_VLD3lnu")        1, 0, 0, 42, 17, 21, 2,  0, 0}, // #43
  {DBGFIELD("IIC_VLD3u")          1, 0, 0, 31, 11, 19, 2,  0, 0}, // #44
  {DBGFIELD("IIC_VLD4")           1, 0, 0, 59, 14, 23, 2,  0, 0}, // #45
  {DBGFIELD("IIC_VLD4dup")        1, 0, 0, 25, 6, 17, 2,  0, 0}, // #46
  {DBGFIELD("IIC_VLD4dupu")       1, 0, 0, 25, 6, 17, 2,  0, 0}, // #47
  {DBGFIELD("IIC_VLD4ln")         1, 0, 0, 59, 14, 23, 2,  0, 0}, // #48
  {DBGFIELD("IIC_VLD4lnu")        1, 0, 0, 59, 14, 23, 2,  0, 0}, // #49
  {DBGFIELD("IIC_VLD4u")          1, 0, 0, 59, 14, 23, 2,  0, 0}, // #50
  {DBGFIELD("IIC_VMACD")          1, 0, 0,  2, 2,  9, 1,  1, 2}, // #51
  {DBGFIELD("IIC_VMACQ")          1, 0, 0,  2, 2, 10, 1,  1, 2}, // #52
  {DBGFIELD("IIC_VMACi16D")       1, 0, 0,  2, 2,  2, 1,  5, 3}, // #53
  {DBGFIELD("IIC_VMACi16Q")       1, 0, 0,  2, 2, 19, 1,  5, 3}, // #54
  {DBGFIELD("IIC_VMACi32D")       1, 0, 0,  4, 2, 19, 1,  1, 2}, // #55
  {DBGFIELD("IIC_VMACi32Q")       1, 0, 0,  4, 2,  9, 1,  1, 2}, // #56
  {DBGFIELD("IIC_VMOVD")          1, 0, 0,  2, 2,  6, 1,  0, 0}, // #57
  {DBGFIELD("IIC_VMOVIS")         1, 0, 0,  2, 2,  1, 1,  0, 0}, // #58
  {DBGFIELD("IIC_VMOVISL")        1, 0, 0,  2, 2,  5, 1,  0, 0}, // #59
  {DBGFIELD("IIC_VMOVImm")        1, 0, 0,  2, 2,  5, 1,  0, 0}, // #60
  {DBGFIELD("IIC_VMOVN")          1, 0, 0,  2, 2,  5, 1,  0, 0}, // #61
  {DBGFIELD("IIC_VMOVQ")          1, 0, 0,  2, 2,  6, 1,  0, 0}, // #62
  {DBGFIELD("IIC_VMOVSI")         1, 0, 0,  2, 2,  6, 1,  0, 0}, // #63
  {DBGFIELD("IIC_VMULi16D")       1, 0, 0,  2, 2,  2, 1,  3, 2}, // #64
  {DBGFIELD("IIC_VMULi16Q")       1, 0, 0,  2, 2, 19, 1,  3, 2}, // #65
  {DBGFIELD("IIC_VMULi32D")       1, 0, 0,  4, 2, 19, 1,  3, 1}, // #66
  {DBGFIELD("IIC_VMULi32Q")       1, 0, 0,  4, 2,  9, 1,  3, 1}, // #67
  {DBGFIELD("IIC_VPALiD")         1, 0, 0,  2, 2,  2, 1,  1, 1}, // #68
  {DBGFIELD("IIC_VPALiQ")         1, 0, 0,  2, 2,  2, 1,  1, 1}, // #69
  {DBGFIELD("IIC_VPBIND")         0, 0, 0,  0, 0,  0, 0,  0, 0}, // #70
  {DBGFIELD("IIC_VPERMD")         1, 0, 0,  2, 2,  6, 1,  0, 0}, // #71
  {DBGFIELD("IIC_VPERMQ")         1, 0, 0,  2, 2,  6, 1,  0, 0}, // #72
  {DBGFIELD("IIC_VPERMQ3")        2, 0, 0,  6, 4,  7, 2,  2, 1}, // #73
  {DBGFIELD("IIC_VQUNAiD")        1, 0, 0,  2, 2,  4, 1,  0, 0}, // #74
  {DBGFIELD("IIC_VQUNAiQ")        1, 0, 0,  2, 2,  4, 1,  0, 0}, // #75
  {DBGFIELD("IIC_VRECSD")         1, 0, 0,  2, 2,  9, 1,  3, 2}, // #76
  {DBGFIELD("IIC_VRECSQ")         1, 0, 0,  2, 2, 10, 1,  3, 2}, // #77
  {DBGFIELD("IIC_VSHLi4D")        1, 0, 0,  2, 2,  4, 1,  0, 0}, // #78
  {DBGFIELD("IIC_VSHLi4Q")        1, 0, 0,  2, 2,  4, 1,  0, 0}, // #79
  {DBGFIELD("IIC_VSHLiD")         1, 0, 0,  2, 2,  5, 1,  0, 0}, // #80
  {DBGFIELD("IIC_VSHLiQ")         1, 0, 0,  2, 2,  5, 1,  0, 0}, // #81
  {DBGFIELD("IIC_VST1")           1, 0, 0, 10, 3, 11, 2,  0, 0}, // #82
  {DBGFIELD("IIC_VST1ln")         1, 0, 0, 10, 3, 11, 2,  0, 0}, // #83
  {DBGFIELD("IIC_VST1lnu")        1, 0, 0, 10, 3, 11, 2,  0, 0}, // #84
  {DBGFIELD("IIC_VST1x2")         1, 0, 0, 10, 3, 11, 2,  0, 0}, // #85
  {DBGFIELD("IIC_VST1x3")         1, 0, 0, 25, 6, 17, 2,  0, 0}, // #86
  {DBGFIELD("IIC_VST1x3u")        1, 0, 0, 25, 6, 17, 2,  0, 0}, // #87
  {DBGFIELD("IIC_VST1x4")         1, 0, 0, 25, 6, 17, 2,  0, 0}, // #88
  {DBGFIELD("IIC_VST1x4u")        1, 0, 0, 25, 6, 17, 2,  0, 0}, // #89
  {DBGFIELD("IIC_VST2")           1, 0, 0, 10, 3, 11, 2,  0, 0}, // #90
  {DBGFIELD("IIC_VST2ln")         1, 0, 0, 10, 3, 11, 2,  0, 0}, // #91
  {DBGFIELD("IIC_VST2lnu")        1, 0, 0, 10, 3, 11, 2,  0, 0}, // #92
  {DBGFIELD("IIC_VST2x2")         1, 0, 0, 10, 3, 11, 2,  0, 0}, // #93
  {DBGFIELD("IIC_VST2x2u")        1, 0, 0, 10, 3, 11, 2,  0, 0}, // #94
  {DBGFIELD("IIC_VST3")           1, 0, 0, 25, 6, 17, 2,  0, 0}, // #95
  {DBGFIELD("IIC_VST3ln")         1, 0, 0, 25, 6, 17, 2,  0, 0}, // #96
  {DBGFIELD("IIC_VST3lnu")        1, 0, 0, 25, 6, 17, 2,  0, 0}, // #97
  {DBGFIELD("IIC_VST3u")          1, 0, 0, 25, 6, 17, 2,  0, 0}, // #98
  {DBGFIELD("IIC_VST4")           1, 0, 0, 25, 6, 17, 2,  0, 0}, // #99
  {DBGFIELD("IIC_VST4ln")         1, 0, 0, 25, 6, 17, 2,  0, 0}, // #100
  {DBGFIELD("IIC_VST4lnu")        1, 0, 0, 25, 6, 17, 2,  0, 0}, // #101
  {DBGFIELD("IIC_VST4u")          1, 0, 0, 25, 6, 17, 2,  0, 0}, // #102
  {DBGFIELD("IIC_VSUBi4D")        1, 0, 0,  2, 2,  4, 1,  3, 1}, // #103
  {DBGFIELD("IIC_VSUBi4Q")        1, 0, 0,  2, 2,  4, 1,  3, 1}, // #104
  {DBGFIELD("IIC_VSUBiD")         1, 0, 0,  2, 2,  5, 1,  3, 1}, // #105
  {DBGFIELD("IIC_VSUBiQ")         1, 0, 0,  2, 2,  5, 1,  3, 1}, // #106
  {DBGFIELD("IIC_VTB1")           1, 0, 0,  2, 2,  5, 1,  3, 1}, // #107
  {DBGFIELD("IIC_VTB2")           1, 0, 0,  2, 2,  5, 1,  3, 2}, // #108
  {DBGFIELD("IIC_VTB3")           1, 0, 0,  2, 2,  4, 1,  8, 3}, // #109
  {DBGFIELD("IIC_VTB4")           1, 0, 0,  2, 2,  4, 1, 11, 4}, // #110
  {DBGFIELD("IIC_VTBX1")          1, 0, 0,  2, 2,  5, 1,  2, 1}, // #111
  {DBGFIELD("IIC_VTBX2")          1, 0, 0,  2, 2,  5, 1,  6, 2}, // #112
  {DBGFIELD("IIC_VTBX3")          1, 0, 0,  2, 2,  4, 1, 15, 3}, // #113
  {DBGFIELD("IIC_VTBX4")          1, 0, 0,  2, 2,  4, 1, 18, 4}, // #114
  {DBGFIELD("IIC_VUNAD")          1, 0, 0,  2, 2,  3, 1,  3, 1}, // #115
  {DBGFIELD("IIC_VUNAQ")          1, 0, 0,  2, 2,  2, 1,  3, 1}, // #116
  {DBGFIELD("IIC_VUNAiD")         1, 0, 0,  2, 2,  4, 1,  3, 1}, // #117
  {DBGFIELD("IIC_VUNAiQ")         1, 0, 0,  2, 2,  4, 1,  3, 1}, // #118
  {DBGFIELD("IIC_fpALU32")        1, 0, 0,  2, 2,  4, 1,  0, 0}, // #119
  {DBGFIELD("IIC_fpALU64")        1, 0, 0,  2, 2,  4, 1,  0, 0}, // #120
  {DBGFIELD("IIC_fpCMP32")        1, 0, 0,  2, 2,  1, 1,  0, 0}, // #121
  {DBGFIELD("IIC_fpCMP64")        1, 0, 0,  2, 2,  1, 1,  0, 0}, // #122
  {DBGFIELD("IIC_fpCVTDI")        1, 0, 0,  2, 2,  4, 1,  0, 0}, // #123
  {DBGFIELD("IIC_fpCVTDS")        1, 0, 0,  2, 2,  4, 1,  0, 0}, // #124
  {DBGFIELD("IIC_fpCVTHS")        1, 0, 0,  2, 2,  4, 1,  0, 0}, // #125
  {DBGFIELD("IIC_fpCVTID")        1, 0, 0,  2, 2,  4, 1,  0, 0}, // #126
  {DBGFIELD("IIC_fpCVTIS")        1, 0, 0,  2, 2,  4, 1,  0, 0}, // #127
  {DBGFIELD("IIC_fpCVTSD")        1, 0, 0,  2, 2,  4, 1,  0, 0}, // #128
  {DBGFIELD("IIC_fpCVTSH")        1, 0, 0,  2, 2,  4, 1,  0, 0}, // #129
  {DBGFIELD("IIC_fpCVTSI")        1, 0, 0,  2, 2,  4, 1,  0, 0}, // #130
  {DBGFIELD("IIC_fpDIV32")        1, 0, 0,  2, 2, 25, 1,  0, 0}, // #131
  {DBGFIELD("IIC_fpDIV64")        1, 0, 0,  2, 2, 26, 1,  0, 0}, // #132
  {DBGFIELD("IIC_fpFMAC32")       0, 0, 0,  0, 0,  0, 0,  0, 0}, // #133
  {DBGFIELD("IIC_fpFMAC64")       0, 0, 0,  0, 0,  0, 0,  0, 0}, // #134
  {DBGFIELD("IIC_fpLoad32")       1, 0, 0, 10, 3, 11, 2,  0, 0}, // #135
  {DBGFIELD("IIC_fpLoad64")       1, 0, 0, 10, 3, 11, 2,  0, 0}, // #136
  {DBGFIELD("IIC_fpLoad_m")       65534, 0, 0,  0, 0,  0, 0,  0, 0}, // #137
  {DBGFIELD("IIC_fpLoad_mu")      65534, 0, 0,  0, 0,  0, 0,  0, 0}, // #138
  {DBGFIELD("IIC_fpMAC32")        1, 0, 0,  2, 2, 23, 1,  0, 0}, // #139
  {DBGFIELD("IIC_fpMAC64")        1, 0, 0,  2, 2,  9, 1,  0, 0}, // #140
  {DBGFIELD("IIC_fpMOVDI")        2, 0, 0,  6, 4, 11, 2,  0, 0}, // #141
  {DBGFIELD("IIC_fpMOVID")        1, 0, 0,  2, 2,  1, 1,  0, 0}, // #142
  {DBGFIELD("IIC_fpMOVIS")        1, 0, 0,  2, 2,  1, 1,  0, 0}, // #143
  {DBGFIELD("IIC_fpMOVSI")        1, 0, 0,  2, 2,  1, 1,  0, 0}, // #144
  {DBGFIELD("IIC_fpMUL32")        1, 0, 0,  2, 2,  3, 1,  0, 0}, // #145
  {DBGFIELD("IIC_fpMUL64")        1, 0, 0,  2, 2,  2, 1,  0, 0}, // #146
  {DBGFIELD("IIC_fpSQRT32")       1, 0, 0,  2, 2, 27, 1,  0, 0}, // #147
  {DBGFIELD("IIC_fpSQRT64")       1, 0, 0,  2, 2, 28, 1,  0, 0}, // #148
  {DBGFIELD("IIC_fpSTAT")         1, 0, 0,  2, 2,  1, 1,  0, 0}, // #149
  {DBGFIELD("IIC_fpStore32")      1, 0, 0, 10, 3, 11, 2,  0, 0}, // #150
  {DBGFIELD("IIC_fpStore64")      1, 0, 0, 10, 3, 11, 2,  0, 0}, // #151
  {DBGFIELD("IIC_fpStore_m")      1, 0, 0, 10, 3, 11, 2,  0, 0}, // #152
  {DBGFIELD("IIC_fpUNA32")        1, 0, 0,  2, 2,  1, 1,  0, 0}, // #153
  {DBGFIELD("IIC_fpUNA64")        1, 0, 0,  2, 2,  1, 1,  0, 0}, // #154
  {DBGFIELD("IIC_iALUi")          1, 0, 0, 73, 1,  1, 1, 22, 21}, // #155
  {DBGFIELD("IIC_iALUr")          1, 0, 0, 73, 1,  1, 1, 43, 42}, // #156
  {DBGFIELD("IIC_iALUsi")         1, 0, 0, 73, 1,  6, 1, 22, 21}, // #157
  {DBGFIELD("IIC_iALUsir")        1, 0, 0, 73, 1,  6, 1, 64, 21}, // #158
  {DBGFIELD("IIC_iALUsr")         1, 0, 0, 73, 1,  5, 1, 22, 21}, // #159
  {DBGFIELD("IIC_iALUx")          0, 0, 0,  0, 0,  0, 0,  0, 0}, // #160
  {DBGFIELD("IIC_iBITi")          1, 0, 0, 73, 1,  1, 1,  0, 0}, // #161
  {DBGFIELD("IIC_iBITr")          1, 0, 0, 73, 1,  1, 1,  0, 0}, // #162
  {DBGFIELD("IIC_iBITsi")         1, 0, 0, 73, 1,  6, 1,  0, 0}, // #163
  {DBGFIELD("IIC_iBITsr")         1, 0, 0, 73, 1,  5, 1,  0, 0}, // #164
  {DBGFIELD("IIC_iCMOVi")         1, 0, 0, 73, 1,  1, 1,  0, 0}, // #165
  {DBGFIELD("IIC_iCMOVix2")       2, 0, 0, 74, 2,  6, 1,  0, 0}, // #166
  {DBGFIELD("IIC_iCMOVr")         1, 0, 0, 73, 1,  1, 1,  0, 0}, // #167
  {DBGFIELD("IIC_iCMOVsi")        1, 0, 0, 73, 1,  1, 1,  0, 0}, // #168
  {DBGFIELD("IIC_iCMOVsr")        1, 0, 0, 73, 1,  6, 1,  0, 0}, // #169
  {DBGFIELD("IIC_iCMPi")          1, 0, 0, 73, 1,  1, 1, 22, 21}, // #170
  {DBGFIELD("IIC_iCMPr")          1, 0, 0, 73, 1,  1, 1, 43, 42}, // #171
  {DBGFIELD("IIC_iCMPsi")         1, 0, 0, 73, 1,  1, 1, 22, 21}, // #172
  {DBGFIELD("IIC_iCMPsr")         1, 0, 0, 73, 1,  5, 1, 22, 21}, // #173
  {DBGFIELD("IIC_iDIV")           0, 0, 0,  0, 0,  0, 0,  0, 0}, // #174
  {DBGFIELD("IIC_iEXTAr")         1, 0, 0, 73, 1,  5, 1,  0, 0}, // #175
  {DBGFIELD("IIC_iEXTAsr")        1, 0, 0, 73, 1,  5, 1,  0, 0}, // #176
  {DBGFIELD("IIC_iEXTr")          1, 0, 0, 73, 1,  6, 1,  0, 0}, // #177
  {DBGFIELD("IIC_iLoad_bh_i")     1, 0, 0, 76, 3, 29, 2,  0, 0}, // #178
  {DBGFIELD("IIC_iLoad_bh_iu")    1, 0, 0, 76, 3, 29, 2,  0, 0}, // #179
  {DBGFIELD("IIC_iLoad_bh_r")     1, 0, 0, 76, 3, 29, 2,  0, 0}, // #180
  {DBGFIELD("IIC_iLoad_bh_ru")    1, 0, 0, 76, 3, 29, 2,  0, 0}, // #181
  {DBGFIELD("IIC_iLoad_bh_si")    1, 0, 0, 76, 3, 31, 2,  0, 0}, // #182
  {DBGFIELD("IIC_iLoad_d_i")      1, 0, 0, 77, 2, 33, 3,  0, 0}, // #183
  {DBGFIELD("IIC_iLoad_d_r")      1, 0, 0, 77, 2, 33, 3,  0, 0}, // #184
  {DBGFIELD("IIC_iLoad_d_ru")     1, 0, 0, 77, 2, 33, 3,  0, 0}, // #185
  {DBGFIELD("IIC_iLoad_i")        1, 0, 0, 77, 2, 36, 2,  0, 0}, // #186
  {DBGFIELD("IIC_iLoad_iu")       1, 0, 0, 77, 2, 36, 2,  0, 0}, // #187
  {DBGFIELD("IIC_iLoad_m")        65534, 0, 0,  0, 0,  0, 0,  0, 0}, // #188
  {DBGFIELD("IIC_iLoad_mBr")      65534, 0, 0,  0, 0,  0, 0,  0, 0}, // #189
  {DBGFIELD("IIC_iLoad_mu")       65534, 0, 0,  0, 0,  0, 0,  0, 0}, // #190
  {DBGFIELD("IIC_iLoad_r")        1, 0, 0, 77, 2, 36, 2,  0, 0}, // #191
  {DBGFIELD("IIC_iLoad_ru")       1, 0, 0, 77, 2, 36, 2,  0, 0}, // #192
  {DBGFIELD("IIC_iLoad_si")       1, 0, 0, 77, 2, 38, 2,  0, 0}, // #193
  {DBGFIELD("IIC_iLoadiALU")      2, 0, 0, 79, 3, 40, 3,  0, 0}, // #194
  {DBGFIELD("IIC_iMAC16")         1, 0, 0, 82, 2,  7, 2,  0, 0}, // #195
  {DBGFIELD("IIC_iMAC32")         1, 0, 0, 84, 3, 43, 2,  0, 0}, // #196
  {DBGFIELD("IIC_iMAC64")         1, 0, 0, 82, 3, 43, 2,  0, 0}, // #197
  {DBGFIELD("IIC_iMOVi")          1, 0, 0, 73, 1,  1, 1,  0, 0}, // #198
  {DBGFIELD("IIC_iMOVix2")        2, 0, 0, 73, 2,  6, 1,  0, 0}, // #199
  {DBGFIELD("IIC_iMOVix2addpc")   3, 0, 0, 73, 3,  5, 1,  0, 0}, // #200
  {DBGFIELD("IIC_iMOVix2ld")      3, 0, 0, 87, 3, 45, 1,  0, 0}, // #201
  {DBGFIELD("IIC_iMOVr")          1, 0, 0, 73, 1,  1, 1,  0, 0}, // #202
  {DBGFIELD("IIC_iMOVsi")         1, 0, 0, 73, 1,  1, 1,  0, 0}, // #203
  {DBGFIELD("IIC_iMOVsr")         1, 0, 0, 73, 1,  6, 1,  0, 0}, // #204
  {DBGFIELD("IIC_iMUL16")         1, 0, 0, 82, 2,  7, 2,  0, 0}, // #205
  {DBGFIELD("IIC_iMUL32")         1, 0, 0, 82, 3, 43, 2,  0, 0}, // #206
  {DBGFIELD("IIC_iMUL64")         1, 0, 0, 82, 3, 43, 2,  0, 0}, // #207
  {DBGFIELD("IIC_iMVNi")          1, 0, 0, 73, 1,  1, 1,  0, 0}, // #208
  {DBGFIELD("IIC_iMVNr")          1, 0, 0, 73, 1,  1, 1, 22, 21}, // #209
  {DBGFIELD("IIC_iMVNsi")         1, 0, 0, 73, 1,  1, 1,  0, 0}, // #210
  {DBGFIELD("IIC_iMVNsr")         1, 0, 0, 73, 1,  6, 1,  0, 0}, // #211
  {DBGFIELD("IIC_iPop")           65534, 0, 0,  0, 0,  0, 0,  0, 0}, // #212
  {DBGFIELD("IIC_iPop_Br")        65534, 0, 0,  0, 0,  0, 0,  0, 0}, // #213
  {DBGFIELD("IIC_iStore_bh_i")    1, 0, 0, 76, 3, 46, 2,  0, 0}, // #214
  {DBGFIELD("IIC_iStore_bh_iu")   1, 0, 0, 76, 3, 46, 2,  0, 0}, // #215
  {DBGFIELD("IIC_iStore_bh_r")    1, 0, 0, 76, 3, 46, 2,  0, 0}, // #216
  {DBGFIELD("IIC_iStore_bh_ru")   1, 0, 0, 76, 3, 46, 2,  0, 0}, // #217
  {DBGFIELD("IIC_iStore_bh_si")   1, 0, 0, 90, 4, 48, 2,  0, 0}, // #218
  {DBGFIELD("IIC_iStore_d_r")     1, 0, 0, 77, 2, 11, 2,  0, 0}, // #219
  {DBGFIELD("IIC_iStore_d_ru")    1, 0, 0, 77, 2, 11, 2,  0, 0}, // #220
  {DBGFIELD("IIC_iStore_i")       1, 0, 0, 77, 2, 11, 2,  0, 0}, // #221
  {DBGFIELD("IIC_iStore_iu")      1, 0, 0, 77, 2, 11, 2,  0, 0}, // #222
  {DBGFIELD("IIC_iStore_m")       65534, 0, 0,  0, 0,  0, 0,  0, 0}, // #223
  {DBGFIELD("IIC_iStore_mu")      65534, 0, 0,  0, 0,  0, 0,  0, 0}, // #224
  {DBGFIELD("IIC_iStore_r")       1, 0, 0, 77, 2, 11, 2,  0, 0}, // #225
  {DBGFIELD("IIC_iStore_ru")      1, 0, 0, 77, 2, 11, 2,  0, 0}, // #226
  {DBGFIELD("IIC_iStore_si")      1, 0, 0, 76, 3, 46, 2,  0, 0}, // #227
  {DBGFIELD("IIC_iTSTi")          1, 0, 0, 73, 1,  1, 1,  0, 0}, // #228
  {DBGFIELD("IIC_iTSTr")          1, 0, 0, 73, 1,  1, 1,  0, 0}, // #229
  {DBGFIELD("IIC_iTSTsi")         1, 0, 0, 73, 1,  6, 1,  0, 0}, // #230
  {DBGFIELD("IIC_iTSTsr")         1, 0, 0, 73, 1,  5, 1,  0, 0}, // #231
  {DBGFIELD("IIC_iUNAr")          1, 0, 0, 73, 1,  1, 1,  0, 0}, // #232
  {DBGFIELD("IIC_iUNAsi")         1, 0, 0, 73, 1,  6, 1,  0, 0}, // #233
  {DBGFIELD("(A9WriteIssue_A9WriteLfpOp)_A9WriteAdr") 1, 0, 0, 10, 3, 11, 2,  0, 0}, // #234
  {DBGFIELD("A9WriteLMfp1_A9WriteL1Hi_A9WriteAdr") 1, 0, 0, 10, 3, 47, 3,  0, 0}, // #235
  {DBGFIELD("(A9WriteIssue_A9WriteLfpOp_A9WriteLfpOp)_(A9WriteAdr_A9WriteAdr)") 1, 0, 0, 25, 6, 17, 2,  0, 0}, // #236
  {DBGFIELD("(A9WriteIssue_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp)_(A9WriteAdr_A9WriteAdr_A9WriteAdr)") 1, 0, 0, 94, 9, 50, 2,  0, 0}, // #237
  {DBGFIELD("(A9WriteIssue_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)") 1, 0, 0, 103, 12, 52, 2,  0, 0}, // #238
  {DBGFIELD("(A9WriteIssue_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)") 1, 0, 0, 115, 15, 54, 2,  0, 0}, // #239
  {DBGFIELD("(A9WriteIssue_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)") 1, 0, 0, 130, 18, 56, 2,  0, 0}, // #240
  {DBGFIELD("(A9WriteIssue_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)") 1, 0, 0, 148, 21, 58, 2,  0, 0}, // #241
  {DBGFIELD("(A9WriteIssue_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)") 1, 0, 0, 169, 24, 60, 2,  0, 0}, // #242
  {DBGFIELD("A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr)") 2, 0, 0, 25, 6, 62, 5,  0, 0}, // #243
  {DBGFIELD("A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr)") 3, 0, 0, 94, 9, 67, 7,  0, 0}, // #244
  {DBGFIELD("A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)") 4, 0, 0, 103, 12, 74, 9,  0, 0}, // #245
  {DBGFIELD("A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)") 5, 0, 0, 115, 15, 83, 11,  0, 0}, // #246
  {DBGFIELD("A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)") 6, 0, 0, 130, 18, 94, 13,  0, 0}, // #247
  {DBGFIELD("A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)") 7, 0, 0, 148, 21, 107, 15,  0, 0}, // #248
  {DBGFIELD("A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)") 8, 0, 0, 169, 24, 122, 17,  0, 0}, // #249
  {DBGFIELD("A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr)") 2, 0, 0, 25, 6, 139, 17,  0, 0}, // #250
  {DBGFIELD("A9WriteAdr_(A9WriteIssue_A9WriteLfpOp)") 1, 0, 0, 10, 3, 11, 2,  0, 0}, // #251
  {DBGFIELD("(A9WriteAdr_A9WriteAdr)_(A9WriteIssue_A9WriteLfpOp_A9WriteLfpOp)") 1, 0, 0, 25, 6, 17, 2,  0, 0}, // #252
  {DBGFIELD("(A9WriteAdr_A9WriteAdr_A9WriteAdr)_(A9WriteIssue_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp)") 1, 0, 0, 94, 9, 50, 2,  0, 0}, // #253
  {DBGFIELD("(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_(A9WriteIssue_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp)") 1, 0, 0, 103, 12, 52, 2,  0, 0}, // #254
  {DBGFIELD("(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_(A9WriteIssue_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp)") 1, 0, 0, 115, 15, 54, 2,  0, 0}, // #255
  {DBGFIELD("(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_(A9WriteIssue_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp)") 1, 0, 0, 130, 18, 56, 2,  0, 0}, // #256
  {DBGFIELD("(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_(A9WriteIssue_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp)") 1, 0, 0, 148, 21, 58, 2,  0, 0}, // #257
  {DBGFIELD("(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_(A9WriteIssue_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp)") 1, 0, 0, 169, 24, 60, 2,  0, 0}, // #258
  {DBGFIELD("A9WriteAdr_A9WriteLMfp1_A9WriteL1Hi") 1, 0, 0, 10, 3, 156, 3,  0, 0}, // #259
  {DBGFIELD("(A9WriteAdr_A9WriteAdr)_A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)") 2, 0, 0, 25, 6, 66, 5,  0, 0}, // #260
  {DBGFIELD("(A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)") 3, 0, 0, 94, 9, 73, 7,  0, 0}, // #261
  {DBGFIELD("(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)") 4, 0, 0, 103, 12, 82, 9,  0, 0}, // #262
  {DBGFIELD("(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)") 5, 0, 0, 115, 15, 93, 11,  0, 0}, // #263
  {DBGFIELD("(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)") 6, 0, 0, 130, 18, 106, 13,  0, 0}, // #264
  {DBGFIELD("(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)") 7, 0, 0, 148, 21, 121, 15,  0, 0}, // #265
  {DBGFIELD("(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)") 8, 0, 0, 169, 24, 159, 17,  0, 0}, // #266
  {DBGFIELD("(A9WriteAdr_A9WriteAdr)_A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)") 2, 0, 0, 25, 6, 176, 17,  0, 0}, // #267
  {DBGFIELD("A9WriteL1_A9WriteL1Hi_A9WriteAdr_A9WriteIssue") 1, 0, 0, 77, 2, 193, 4,  0, 0}, // #268
  {DBGFIELD("A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr)_A9WriteIssue") 1, 0, 0, 193, 4, 197, 6,  0, 0}, // #269
  {DBGFIELD("A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteIssue") 1, 0, 0, 197, 6, 203, 8,  0, 0}, // #270
  {DBGFIELD("A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteIssue") 1, 0, 0, 203, 8, 211, 10,  0, 0}, // #271
  {DBGFIELD("A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteIssue") 1, 0, 0, 211, 10, 221, 12,  0, 0}, // #272
  {DBGFIELD("A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteIssue") 1, 0, 0, 221, 12, 233, 14,  0, 0}, // #273
  {DBGFIELD("A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteIssue") 1, 0, 0, 233, 14, 247, 16,  0, 0}, // #274
  {DBGFIELD("A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteIssue") 1, 0, 0, 247, 16, 263, 18,  0, 0}, // #275
  {DBGFIELD("A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr)_A9WriteIssue") 1, 0, 0, 193, 4, 281, 18,  0, 0}, // #276
  {DBGFIELD("A9WriteL1_A9WriteL1Hi_A9WriteAdr_A9WriteB") 1, 0, 0, 263, 3, 299, 4,  0, 0}, // #277
  {DBGFIELD("A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr)_A9WriteB") 1, 0, 0, 266, 5, 303, 6,  0, 0}, // #278
  {DBGFIELD("A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteB") 1, 0, 0, 271, 7, 309, 8,  0, 0}, // #279
  {DBGFIELD("A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteB") 1, 0, 0, 278, 9, 317, 10,  0, 0}, // #280
  {DBGFIELD("A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteB") 1, 0, 0, 287, 11, 327, 12,  0, 0}, // #281
  {DBGFIELD("A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteB") 1, 0, 0, 298, 13, 339, 14,  0, 0}, // #282
  {DBGFIELD("A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteB") 1, 0, 0, 311, 15, 353, 16,  0, 0}, // #283
  {DBGFIELD("A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteB") 1, 0, 0, 326, 17, 369, 18,  0, 0}, // #284
  {DBGFIELD("A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr)_A9WriteB") 1, 0, 0, 266, 5, 387, 18,  0, 0}, // #285
  {DBGFIELD("A9WriteAdr_A9WriteL1_A9WriteL1Hi_A9WriteIssue") 1, 0, 0, 77, 2, 405, 4,  0, 0}, // #286
  {DBGFIELD("(A9WriteAdr_A9WriteAdr)_A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_A9WriteIssue") 1, 0, 0, 193, 4, 409, 6,  0, 0}, // #287
  {DBGFIELD("(A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_A9WriteIssue") 1, 0, 0, 197, 6, 415, 8,  0, 0}, // #288
  {DBGFIELD("(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_A9WriteIssue") 1, 0, 0, 203, 8, 423, 10,  0, 0}, // #289
  {DBGFIELD("(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_A9WriteIssue") 1, 0, 0, 211, 10, 433, 12,  0, 0}, // #290
  {DBGFIELD("(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_A9WriteIssue") 1, 0, 0, 221, 12, 445, 14,  0, 0}, // #291
  {DBGFIELD("(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_A9WriteIssue") 1, 0, 0, 233, 14, 459, 16,  0, 0}, // #292
  {DBGFIELD("(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_A9WriteIssue") 1, 0, 0, 247, 16, 475, 18,  0, 0}, // #293
  {DBGFIELD("(A9WriteAdr_A9WriteAdr)_A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_A9WriteIssue") 1, 0, 0, 193, 4, 493, 18,  0, 0} // #294
}; // CortexA9ModelSchedClasses

static const llvm::MCSchedModel NoSchedModel(
  MCSchedModel::DefaultIssueWidth,
  MCSchedModel::DefaultMinLatency,
  MCSchedModel::DefaultLoadLatency,
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultMispredictPenalty,
  0, // Processor ID
  0, 0, 0, 0, // No instruction-level machine model.
  NoItineraries);

static const llvm::MCSchedModel ARMV6ItinerariesModel(
  MCSchedModel::DefaultIssueWidth,
  MCSchedModel::DefaultMinLatency,
  MCSchedModel::DefaultLoadLatency,
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultMispredictPenalty,
  1, // Processor ID
  0, 0, 0, 0, // No instruction-level machine model.
  ARMV6Itineraries);

// {Name, NumUnits, SuperIdx, IsBuffered}
static const llvm::MCProcResourceDesc CortexA9ModelProcResources[] = {
  {DBGFIELD("InvalidUnit")     0, 0, 0},
  {DBGFIELD("A9UnitAGU")       1, 0, 1}, // #1
  {DBGFIELD("A9UnitALU")       2, 0, 1}, // #2
  {DBGFIELD("A9UnitB")         1, 0, 1}, // #3
  {DBGFIELD("A9UnitFP")        1, 0, 0}, // #4
  {DBGFIELD("A9UnitLS")        1, 0, 1}, // #5
  {DBGFIELD("A9UnitMul")       1, 2, 1}  // #6, Super=A9UnitALU
};

static const llvm::MCSchedModel CortexA9Model(
  2, // IssueWidth
  0, // MinLatency
  2, // LoadLatency
  MCSchedModel::DefaultHighLatency,
  8, // MispredictPenalty
  2, // Processor ID
  CortexA9ModelProcResources,
  CortexA9ModelSchedClasses,
  7,
  295,
  CortexA9Itineraries);

static const llvm::MCSchedModel CortexA8Model(
  2, // IssueWidth
  MCSchedModel::DefaultMinLatency,
  2, // LoadLatency
  MCSchedModel::DefaultHighLatency,
  13, // MispredictPenalty
  3, // Processor ID
  0, 0, 0, 0, // No instruction-level machine model.
  CortexA8Itineraries);

static const llvm::MCSchedModel SwiftModel(
  3, // IssueWidth
  0, // MinLatency
  3, // LoadLatency
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultMispredictPenalty,
  4, // Processor ID
  0, 0, 0, 0, // No instruction-level machine model.
  SwiftItineraries);

// Sorted (by key) array of itineraries for CPU subtype.
extern const llvm::SubtargetInfoKV ARMProcSchedKV[] = {
  { "arm1020e", (const void *)&NoSchedModel },
  { "arm1020t", (const void *)&NoSchedModel },
  { "arm1022e", (const void *)&NoSchedModel },
  { "arm10e", (const void *)&NoSchedModel },
  { "arm10tdmi", (const void *)&NoSchedModel },
  { "arm1136j-s", (const void *)&ARMV6ItinerariesModel },
  { "arm1136jf-s", (const void *)&ARMV6ItinerariesModel },
  { "arm1156t2-s", (const void *)&ARMV6ItinerariesModel },
  { "arm1156t2f-s", (const void *)&ARMV6ItinerariesModel },
  { "arm1176jz-s", (const void *)&ARMV6ItinerariesModel },
  { "arm1176jzf-s", (const void *)&ARMV6ItinerariesModel },
  { "arm710t", (const void *)&NoSchedModel },
  { "arm720t", (const void *)&NoSchedModel },
  { "arm7tdmi", (const void *)&NoSchedModel },
  { "arm7tdmi-s", (const void *)&NoSchedModel },
  { "arm8", (const void *)&NoSchedModel },
  { "arm810", (const void *)&NoSchedModel },
  { "arm9", (const void *)&NoSchedModel },
  { "arm920", (const void *)&NoSchedModel },
  { "arm920t", (const void *)&NoSchedModel },
  { "arm922t", (const void *)&NoSchedModel },
  { "arm926ej-s", (const void *)&NoSchedModel },
  { "arm940t", (const void *)&NoSchedModel },
  { "arm946e-s", (const void *)&NoSchedModel },
  { "arm966e-s", (const void *)&NoSchedModel },
  { "arm968e-s", (const void *)&NoSchedModel },
  { "arm9e", (const void *)&NoSchedModel },
  { "arm9tdmi", (const void *)&NoSchedModel },
  { "cortex-a15", (const void *)&CortexA9Model },
  { "cortex-a8", (const void *)&CortexA8Model },
  { "cortex-a9", (const void *)&CortexA9Model },
  { "cortex-a9-mp", (const void *)&CortexA9Model },
  { "cortex-m0", (const void *)&ARMV6ItinerariesModel },
  { "cortex-m3", (const void *)&NoSchedModel },
  { "cortex-m4", (const void *)&NoSchedModel },
  { "ep9312", (const void *)&NoSchedModel },
  { "generic", (const void *)&NoSchedModel },
  { "iwmmxt", (const void *)&NoSchedModel },
  { "mpcore", (const void *)&ARMV6ItinerariesModel },
  { "mpcorenovfp", (const void *)&ARMV6ItinerariesModel },
  { "strongarm", (const void *)&NoSchedModel },
  { "strongarm110", (const void *)&NoSchedModel },
  { "strongarm1100", (const void *)&NoSchedModel },
  { "strongarm1110", (const void *)&NoSchedModel },
  { "swift", (const void *)&SwiftModel },
  { "xscale", (const void *)&NoSchedModel }
};
#undef DBGFIELD
static inline void InitARMMCSubtargetInfo(MCSubtargetInfo *II, StringRef TT, StringRef CPU, StringRef FS) {
  II->InitMCSubtargetInfo(TT, CPU, FS, ARMFeatureKV, ARMSubTypeKV, 
                      ARMProcSchedKV, ARMWriteProcResTable, ARMWriteLatencyTable, ARMReadAdvanceTable, 
                      ARMStages, ARMOperandCycles, ARMForwardingPaths, 34, 46);
}

} // End llvm namespace 
#endif // GET_SUBTARGETINFO_MC_DESC


#ifdef GET_SUBTARGETINFO_TARGET_DESC
#undef GET_SUBTARGETINFO_TARGET_DESC
#include "llvm/Support/Debug.h"
#include "llvm/Support/raw_ostream.h"
// ParseSubtargetFeatures - Parses features string setting specified
// subtarget options.
void llvm::ARMSubtarget::ParseSubtargetFeatures(StringRef CPU, StringRef FS) {
  DEBUG(dbgs() << "\nFeatures:" << FS);
  DEBUG(dbgs() << "\nCPU:" << CPU << "\n\n");
  InitMCProcessorInfo(CPU, FS);
  uint64_t Bits = getFeatureBits();
  if ((Bits & ARM::FeatureAvoidPartialCPSR) != 0) AvoidCPSRPartialUpdate = true;
  if ((Bits & ARM::FeatureD16) != 0) HasD16 = true;
  if ((Bits & ARM::FeatureDB) != 0) HasDataBarrier = true;
  if ((Bits & ARM::FeatureDSPThumb2) != 0) Thumb2DSP = true;
  if ((Bits & ARM::FeatureFP16) != 0) HasFP16 = true;
  if ((Bits & ARM::FeatureHWDiv) != 0) HasHardwareDivide = true;
  if ((Bits & ARM::FeatureHWDivARM) != 0) HasHardwareDivideInARM = true;
  if ((Bits & ARM::FeatureHasRAS) != 0) HasRAS = true;
  if ((Bits & ARM::FeatureHasSlowFPVMLx) != 0) SlowFPVMLx = true;
  if ((Bits & ARM::FeatureMClass) != 0) IsMClass = true;
  if ((Bits & ARM::FeatureMP) != 0) HasMPExtension = true;
  if ((Bits & ARM::FeatureNEON) != 0) HasNEON = true;
  if ((Bits & ARM::FeatureNEONForFP) != 0) UseNEONForSinglePrecisionFP = true;
  if ((Bits & ARM::FeatureNoARM) != 0) NoARM = true;
  if ((Bits & ARM::FeaturePref32BitThumb) != 0) Pref32BitThumb = true;
  if ((Bits & ARM::FeatureSlowFPBrcc) != 0) SlowFPBrcc = true;
  if ((Bits & ARM::FeatureT2XtPk) != 0) HasT2ExtractPack = true;
  if ((Bits & ARM::FeatureThumb2) != 0) HasThumb2 = true;
  if ((Bits & ARM::FeatureVFP2) != 0) HasVFPv2 = true;
  if ((Bits & ARM::FeatureVFP3) != 0) HasVFPv3 = true;
  if ((Bits & ARM::FeatureVFP4) != 0) HasVFPv4 = true;
  if ((Bits & ARM::FeatureVFPOnlySP) != 0) FPOnlySP = true;
  if ((Bits & ARM::FeatureVMLxForwarding) != 0) HasVMLxForwarding = true;
  if ((Bits & ARM::HasV4TOps) != 0) HasV4TOps = true;
  if ((Bits & ARM::HasV5TEOps) != 0) HasV5TEOps = true;
  if ((Bits & ARM::HasV5TOps) != 0) HasV5TOps = true;
  if ((Bits & ARM::HasV6Ops) != 0) HasV6Ops = true;
  if ((Bits & ARM::HasV6T2Ops) != 0) HasV6T2Ops = true;
  if ((Bits & ARM::HasV7Ops) != 0) HasV7Ops = true;
  if ((Bits & ARM::ModeThumb) != 0) InThumbMode = true;
  if ((Bits & ARM::ProcA8) != 0 && ARMProcFamily < CortexA8) ARMProcFamily = CortexA8;
  if ((Bits & ARM::ProcA9) != 0 && ARMProcFamily < CortexA9) ARMProcFamily = CortexA9;
  if ((Bits & ARM::ProcA15) != 0 && ARMProcFamily < CortexA15) ARMProcFamily = CortexA15;
  if ((Bits & ARM::ProcSwift) != 0 && ARMProcFamily < Swift) ARMProcFamily = Swift;
}
#endif // GET_SUBTARGETINFO_TARGET_DESC


#ifdef GET_SUBTARGETINFO_HEADER
#undef GET_SUBTARGETINFO_HEADER
namespace llvm {
class DFAPacketizer;
struct ARMGenSubtargetInfo : public TargetSubtargetInfo {
  explicit ARMGenSubtargetInfo(StringRef TT, StringRef CPU, StringRef FS);
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
extern const llvm::SubtargetFeatureKV ARMFeatureKV[];
extern const llvm::SubtargetFeatureKV ARMSubTypeKV[];
extern const llvm::SubtargetInfoKV ARMProcSchedKV[];
extern const llvm::MCWriteProcResEntry ARMWriteProcResTable[];
extern const llvm::MCWriteLatencyEntry ARMWriteLatencyTable[];
extern const llvm::MCReadAdvanceEntry ARMReadAdvanceTable[];
extern const llvm::InstrStage ARMStages[];
extern const unsigned ARMOperandCycles[];
extern const unsigned ARMForwardingPaths[];
ARMGenSubtargetInfo::ARMGenSubtargetInfo(StringRef TT, StringRef CPU, StringRef FS)
  : TargetSubtargetInfo() {
  InitMCSubtargetInfo(TT, CPU, FS, ARMFeatureKV, ARMSubTypeKV, 
                      ARMProcSchedKV, ARMWriteProcResTable, ARMWriteLatencyTable, ARMReadAdvanceTable, 
                      ARMStages, ARMOperandCycles, ARMForwardingPaths, 34, 46);
}

unsigned ARMGenSubtargetInfo
::resolveSchedClass(unsigned SchedClass, const MachineInstr *MI, const TargetSchedModel *SchedModel) const {

  const ARMBaseInstrInfo *TII =
    static_cast<const ARMBaseInstrInfo*>(SchedModel->getInstrInfo());
  (void)TII;

  switch (SchedClass) {
  case 137: // IIC_fpLoad_m
    if (SchedModel->getProcessorID() == 2) { // CortexA9Model
      if ((TargetRegisterInfo::isVirtualRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 1))
        return 234; // (A9WriteIssue_A9WriteLfpOp)_A9WriteAdr
      if ((TargetRegisterInfo::isPhysicalRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 1))
        return 235; // A9WriteLMfp1_A9WriteL1Hi_A9WriteAdr
      if ((TargetRegisterInfo::isVirtualRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 2))
        return 236; // (A9WriteIssue_A9WriteLfpOp_A9WriteLfpOp)_(A9WriteAdr_A9WriteAdr)
      if ((TargetRegisterInfo::isVirtualRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 3))
        return 237; // (A9WriteIssue_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp)_(A9WriteAdr_A9WriteAdr_A9WriteAdr)
      if ((TargetRegisterInfo::isVirtualRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 4))
        return 238; // (A9WriteIssue_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)
      if ((TargetRegisterInfo::isVirtualRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 5))
        return 239; // (A9WriteIssue_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)
      if ((TargetRegisterInfo::isVirtualRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 6))
        return 240; // (A9WriteIssue_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)
      if ((TargetRegisterInfo::isVirtualRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 7))
        return 241; // (A9WriteIssue_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)
      if ((TargetRegisterInfo::isVirtualRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 8))
        return 242; // (A9WriteIssue_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)
      if ((TargetRegisterInfo::isVirtualRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 0))
        return 236; // (A9WriteIssue_A9WriteLfpOp_A9WriteLfpOp)_(A9WriteAdr_A9WriteAdr)
      if ((TargetRegisterInfo::isPhysicalRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 2))
        return 243; // A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr)
      if ((TargetRegisterInfo::isPhysicalRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 3))
        return 244; // A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr)
      if ((TargetRegisterInfo::isPhysicalRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 4))
        return 245; // A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)
      if ((TargetRegisterInfo::isPhysicalRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 5))
        return 246; // A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)
      if ((TargetRegisterInfo::isPhysicalRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 6))
        return 247; // A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)
      if ((TargetRegisterInfo::isPhysicalRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 7))
        return 248; // A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)
      if ((TargetRegisterInfo::isPhysicalRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 8))
        return 249; // A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)
      if ((TargetRegisterInfo::isPhysicalRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 0))
        return 250; // A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr)
    }
    break;
  case 138: // IIC_fpLoad_mu
    if (SchedModel->getProcessorID() == 2) { // CortexA9Model
      if ((TII->getNumLDMAddresses(MI) == 1)
          && (TargetRegisterInfo::isVirtualRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 1))
        return 251; // A9WriteAdr_(A9WriteIssue_A9WriteLfpOp)
      if ((TII->getNumLDMAddresses(MI) == 2)
          && (TargetRegisterInfo::isVirtualRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 2))
        return 252; // (A9WriteAdr_A9WriteAdr)_(A9WriteIssue_A9WriteLfpOp_A9WriteLfpOp)
      if ((TII->getNumLDMAddresses(MI) == 3)
          && (TargetRegisterInfo::isVirtualRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 3))
        return 253; // (A9WriteAdr_A9WriteAdr_A9WriteAdr)_(A9WriteIssue_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp)
      if ((TII->getNumLDMAddresses(MI) == 4)
          && (TargetRegisterInfo::isVirtualRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 4))
        return 254; // (A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_(A9WriteIssue_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp)
      if ((TII->getNumLDMAddresses(MI) == 5)
          && (TargetRegisterInfo::isVirtualRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 5))
        return 255; // (A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_(A9WriteIssue_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp)
      if ((TII->getNumLDMAddresses(MI) == 6)
          && (TargetRegisterInfo::isVirtualRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 6))
        return 256; // (A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_(A9WriteIssue_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp)
      if ((TII->getNumLDMAddresses(MI) == 7)
          && (TargetRegisterInfo::isVirtualRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 7))
        return 257; // (A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_(A9WriteIssue_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp)
      if ((TII->getNumLDMAddresses(MI) == 8)
          && (TargetRegisterInfo::isVirtualRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 8))
        return 258; // (A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_(A9WriteIssue_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp_A9WriteLfpOp)
      if ((TII->getNumLDMAddresses(MI) == 0)
          && (TargetRegisterInfo::isVirtualRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 0))
        return 252; // (A9WriteAdr_A9WriteAdr)_(A9WriteIssue_A9WriteLfpOp_A9WriteLfpOp)
      if ((TII->getNumLDMAddresses(MI) == 1)
          && (TargetRegisterInfo::isPhysicalRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 1))
        return 259; // A9WriteAdr_A9WriteLMfp1_A9WriteL1Hi
      if ((TII->getNumLDMAddresses(MI) == 2)
          && (TargetRegisterInfo::isPhysicalRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 2))
        return 260; // (A9WriteAdr_A9WriteAdr)_A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)
      if ((TII->getNumLDMAddresses(MI) == 3)
          && (TargetRegisterInfo::isPhysicalRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 3))
        return 261; // (A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)
      if ((TII->getNumLDMAddresses(MI) == 4)
          && (TargetRegisterInfo::isPhysicalRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 4))
        return 262; // (A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)
      if ((TII->getNumLDMAddresses(MI) == 5)
          && (TargetRegisterInfo::isPhysicalRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 5))
        return 263; // (A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)
      if ((TII->getNumLDMAddresses(MI) == 6)
          && (TargetRegisterInfo::isPhysicalRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 6))
        return 264; // (A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)
      if ((TII->getNumLDMAddresses(MI) == 7)
          && (TargetRegisterInfo::isPhysicalRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 7))
        return 265; // (A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)
      if ((TII->getNumLDMAddresses(MI) == 8)
          && (TargetRegisterInfo::isPhysicalRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 8))
        return 266; // (A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)
      if ((TII->getNumLDMAddresses(MI) == 0)
          && (TargetRegisterInfo::isPhysicalRegister(MI->getOperand(0).getReg()))
          && (TII->getNumLDMAddresses(MI) == 0))
        return 267; // (A9WriteAdr_A9WriteAdr)_A9WriteLMfp1_A9WriteL1Hi_(A9WriteLMfpLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)
    }
    break;
  case 188: // IIC_iLoad_m
    if (SchedModel->getProcessorID() == 2) { // CortexA9Model
      if ((TII->getNumLDMAddresses(MI) == 1))
        return 268; // A9WriteL1_A9WriteL1Hi_A9WriteAdr_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 2))
        return 269; // A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr)_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 3))
        return 270; // A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 4))
        return 271; // A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 5))
        return 272; // A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 6))
        return 273; // A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 7))
        return 274; // A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 8))
        return 275; // A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 0))
        return 276; // A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr)_A9WriteIssue
    }
    break;
  case 189: // IIC_iLoad_mBr
    if (SchedModel->getProcessorID() == 2) { // CortexA9Model
      if ((TII->getNumLDMAddresses(MI) == 1))
        return 277; // A9WriteL1_A9WriteL1Hi_A9WriteAdr_A9WriteB
      if ((TII->getNumLDMAddresses(MI) == 2))
        return 278; // A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr)_A9WriteB
      if ((TII->getNumLDMAddresses(MI) == 3))
        return 279; // A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteB
      if ((TII->getNumLDMAddresses(MI) == 4))
        return 280; // A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteB
      if ((TII->getNumLDMAddresses(MI) == 5))
        return 281; // A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteB
      if ((TII->getNumLDMAddresses(MI) == 6))
        return 282; // A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteB
      if ((TII->getNumLDMAddresses(MI) == 7))
        return 283; // A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteB
      if ((TII->getNumLDMAddresses(MI) == 8))
        return 284; // A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteB
      if ((TII->getNumLDMAddresses(MI) == 0))
        return 285; // A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr)_A9WriteB
    }
    break;
  case 190: // IIC_iLoad_mu
    if (SchedModel->getProcessorID() == 2) { // CortexA9Model
      if ((TII->getNumLDMAddresses(MI) == 1))
        return 286; // A9WriteAdr_A9WriteL1_A9WriteL1Hi_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 2))
        return 287; // (A9WriteAdr_A9WriteAdr)_A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 3))
        return 288; // (A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 4))
        return 289; // (A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 5))
        return 290; // (A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 6))
        return 291; // (A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 7))
        return 292; // (A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 8))
        return 293; // (A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 0))
        return 294; // (A9WriteAdr_A9WriteAdr)_A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_A9WriteIssue
    }
    break;
  case 212: // IIC_iPop
    if (SchedModel->getProcessorID() == 2) { // CortexA9Model
      if ((TII->getNumLDMAddresses(MI) == 1))
        return 268; // A9WriteL1_A9WriteL1Hi_A9WriteAdr_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 2))
        return 269; // A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr)_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 3))
        return 270; // A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 4))
        return 271; // A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 5))
        return 272; // A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 6))
        return 273; // A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 7))
        return 274; // A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 8))
        return 275; // A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 0))
        return 276; // A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr)_A9WriteIssue
    }
    break;
  case 213: // IIC_iPop_Br
    if (SchedModel->getProcessorID() == 2) { // CortexA9Model
      if ((TII->getNumLDMAddresses(MI) == 1))
        return 277; // A9WriteL1_A9WriteL1Hi_A9WriteAdr_A9WriteB
      if ((TII->getNumLDMAddresses(MI) == 2))
        return 278; // A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr)_A9WriteB
      if ((TII->getNumLDMAddresses(MI) == 3))
        return 279; // A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteB
      if ((TII->getNumLDMAddresses(MI) == 4))
        return 280; // A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteB
      if ((TII->getNumLDMAddresses(MI) == 5))
        return 281; // A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteB
      if ((TII->getNumLDMAddresses(MI) == 6))
        return 282; // A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteB
      if ((TII->getNumLDMAddresses(MI) == 7))
        return 283; // A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteB
      if ((TII->getNumLDMAddresses(MI) == 8))
        return 284; // A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteB
      if ((TII->getNumLDMAddresses(MI) == 0))
        return 285; // A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteAdr_A9WriteAdr)_A9WriteB
    }
    break;
  case 223: // IIC_iStore_m
    if (SchedModel->getProcessorID() == 2) { // CortexA9Model
      if ((TII->getNumLDMAddresses(MI) == 1))
        return 286; // A9WriteAdr_A9WriteL1_A9WriteL1Hi_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 2))
        return 287; // (A9WriteAdr_A9WriteAdr)_A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 3))
        return 288; // (A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 4))
        return 289; // (A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 5))
        return 290; // (A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 6))
        return 291; // (A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 7))
        return 292; // (A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 8))
        return 293; // (A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 0))
        return 294; // (A9WriteAdr_A9WriteAdr)_A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_A9WriteIssue
    }
    break;
  case 224: // IIC_iStore_mu
    if (SchedModel->getProcessorID() == 2) { // CortexA9Model
      if ((TII->getNumLDMAddresses(MI) == 1))
        return 286; // A9WriteAdr_A9WriteL1_A9WriteL1Hi_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 2))
        return 287; // (A9WriteAdr_A9WriteAdr)_A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 3))
        return 288; // (A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 4))
        return 289; // (A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 5))
        return 290; // (A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 6))
        return 291; // (A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 7))
        return 292; // (A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 8))
        return 293; // (A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr_A9WriteAdr)_A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_A9WriteIssue
      if ((TII->getNumLDMAddresses(MI) == 0))
        return 294; // (A9WriteAdr_A9WriteAdr)_A9WriteL1_A9WriteL1Hi_(A9WriteLMLo_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_(A9WriteLMHi_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1_A9WriteCycle1)_A9WriteIssue
    }
    break;
  };
  report_fatal_error("Expected a variant SchedClass");
} // ARMGenSubtargetInfo::resolveSchedClass
} // End llvm namespace 
#endif // GET_SUBTARGETINFO_CTOR

