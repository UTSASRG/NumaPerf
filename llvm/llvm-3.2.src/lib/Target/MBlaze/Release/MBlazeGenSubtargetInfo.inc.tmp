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
namespace MBlaze {
enum {
  FeatureBarrel =  1ULL << 0,
  FeatureDiv =  1ULL << 1,
  FeatureFPU =  1ULL << 2,
  FeatureMul =  1ULL << 3,
  FeatureMul64 =  1ULL << 4,
  FeaturePatCmp =  1ULL << 5,
  FeatureSqrt =  1ULL << 6
};
}
} // End llvm namespace 
#endif // GET_SUBTARGETINFO_ENUM


#ifdef GET_SUBTARGETINFO_MC_DESC
#undef GET_SUBTARGETINFO_MC_DESC
namespace llvm {
// Sorted (by key) array of values for CPU features.
extern const llvm::SubtargetFeatureKV MBlazeFeatureKV[] = {
  { "barrel", "Implements barrel shifter", MBlaze::FeatureBarrel, 0ULL },
  { "div", "Implements hardware divider", MBlaze::FeatureDiv, 0ULL },
  { "fpu", "Implements floating point unit", MBlaze::FeatureFPU, 0ULL },
  { "mul", "Implements hardware multiplier", MBlaze::FeatureMul, 0ULL },
  { "mul64", "Implements multiplier with 64-bit result", MBlaze::FeatureMul64, 0ULL },
  { "patcmp", "Implements pattern compare instruction", MBlaze::FeaturePatCmp, 0ULL },
  { "sqrt", "Implements sqrt and floating point convert", MBlaze::FeatureSqrt, 0ULL }
};

// Sorted (by key) array of values for CPU subtype.
extern const llvm::SubtargetFeatureKV MBlazeSubTypeKV[] = {
  { "mblaze", "Select the mblaze processor", 0ULL, 0ULL },
  { "mblaze3", "Select the mblaze3 processor", 0ULL, 0ULL },
  { "mblaze5", "Select the mblaze5 processor", 0ULL, 0ULL }
};

#ifdef DBGFIELD
#error "<target>GenSubtargetInfo.inc requires a DBGFIELD macro"
#endif
#ifndef NDEBUG
#define DBGFIELD(x) x,
#else
#define DBGFIELD(x)
#endif

// Functional units for "MBlazePipe3Itineraries"
namespace MBlazePipe3ItinerariesFU {
  const unsigned IF = 1 << 0;
  const unsigned ID = 1 << 1;
  const unsigned EX = 1 << 2;
}

// Functional units for "MBlazePipe5Itineraries"
namespace MBlazePipe5ItinerariesFU {
  const unsigned IF = 1 << 0;
  const unsigned ID = 1 << 1;
  const unsigned EX = 1 << 2;
  const unsigned MA = 1 << 3;
  const unsigned WB = 1 << 4;
}

extern const llvm::InstrStage MBlazeStages[] = {
  { 0, 0, 0, llvm::InstrStage::Required }, // No itinerary
  { 1, MBlazePipe3ItinerariesFU::IF, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, MBlazePipe3ItinerariesFU::ID, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, MBlazePipe3ItinerariesFU::EX, -1, (llvm::InstrStage::ReservationKinds)0 }, // 1-3
  { 1, MBlazePipe3ItinerariesFU::IF, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, MBlazePipe3ItinerariesFU::ID, -1, (llvm::InstrStage::ReservationKinds)0 },   { 34, MBlazePipe3ItinerariesFU::EX, -1, (llvm::InstrStage::ReservationKinds)0 }, // 4-6
  { 1, MBlazePipe3ItinerariesFU::IF, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, MBlazePipe3ItinerariesFU::ID, -1, (llvm::InstrStage::ReservationKinds)0 },   { 3, MBlazePipe3ItinerariesFU::EX, -1, (llvm::InstrStage::ReservationKinds)0 }, // 7-9
  { 1, MBlazePipe3ItinerariesFU::IF, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, MBlazePipe3ItinerariesFU::ID, -1, (llvm::InstrStage::ReservationKinds)0 },   { 6, MBlazePipe3ItinerariesFU::EX, -1, (llvm::InstrStage::ReservationKinds)0 }, // 10-12
  { 1, MBlazePipe3ItinerariesFU::IF, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, MBlazePipe3ItinerariesFU::ID, -1, (llvm::InstrStage::ReservationKinds)0 },   { 30, MBlazePipe3ItinerariesFU::EX, -1, (llvm::InstrStage::ReservationKinds)0 }, // 13-15
  { 1, MBlazePipe3ItinerariesFU::IF, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, MBlazePipe3ItinerariesFU::ID, -1, (llvm::InstrStage::ReservationKinds)0 },   { 7, MBlazePipe3ItinerariesFU::EX, -1, (llvm::InstrStage::ReservationKinds)0 }, // 16-18
  { 1, MBlazePipe3ItinerariesFU::IF, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, MBlazePipe3ItinerariesFU::ID, -1, (llvm::InstrStage::ReservationKinds)0 },   { 29, MBlazePipe3ItinerariesFU::EX, -1, (llvm::InstrStage::ReservationKinds)0 }, // 19-21
  { 1, MBlazePipe3ItinerariesFU::IF, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, MBlazePipe3ItinerariesFU::ID, -1, (llvm::InstrStage::ReservationKinds)0 },   { 2, MBlazePipe3ItinerariesFU::EX, -1, (llvm::InstrStage::ReservationKinds)0 }, // 22-24
  { 1, MBlazePipe5ItinerariesFU::IF, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, MBlazePipe5ItinerariesFU::ID, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, MBlazePipe5ItinerariesFU::EX, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, MBlazePipe5ItinerariesFU::MA, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, MBlazePipe5ItinerariesFU::WB, -1, (llvm::InstrStage::ReservationKinds)0 }, // 25-29
  { 1, MBlazePipe5ItinerariesFU::IF, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, MBlazePipe5ItinerariesFU::ID, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, MBlazePipe5ItinerariesFU::EX, -1, (llvm::InstrStage::ReservationKinds)0 },   { 31, MBlazePipe5ItinerariesFU::MA, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, MBlazePipe5ItinerariesFU::WB, -1, (llvm::InstrStage::ReservationKinds)0 }, // 30-34
  { 1, MBlazePipe5ItinerariesFU::IF, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, MBlazePipe5ItinerariesFU::ID, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, MBlazePipe5ItinerariesFU::EX, -1, (llvm::InstrStage::ReservationKinds)0 },   { 2, MBlazePipe5ItinerariesFU::MA, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, MBlazePipe5ItinerariesFU::WB, -1, (llvm::InstrStage::ReservationKinds)0 }, // 35-39
  { 1, MBlazePipe5ItinerariesFU::IF, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, MBlazePipe5ItinerariesFU::ID, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, MBlazePipe5ItinerariesFU::EX, -1, (llvm::InstrStage::ReservationKinds)0 },   { 26, MBlazePipe5ItinerariesFU::MA, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, MBlazePipe5ItinerariesFU::WB, -1, (llvm::InstrStage::ReservationKinds)0 }, // 40-44
  { 1, MBlazePipe5ItinerariesFU::IF, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, MBlazePipe5ItinerariesFU::ID, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, MBlazePipe5ItinerariesFU::EX, -1, (llvm::InstrStage::ReservationKinds)0 },   { 3, MBlazePipe5ItinerariesFU::MA, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, MBlazePipe5ItinerariesFU::WB, -1, (llvm::InstrStage::ReservationKinds)0 }, // 45-49
  { 1, MBlazePipe5ItinerariesFU::IF, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, MBlazePipe5ItinerariesFU::ID, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, MBlazePipe5ItinerariesFU::EX, -1, (llvm::InstrStage::ReservationKinds)0 },   { 25, MBlazePipe5ItinerariesFU::MA, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, MBlazePipe5ItinerariesFU::WB, -1, (llvm::InstrStage::ReservationKinds)0 }, // 50-54
  { 0, 0, 0, llvm::InstrStage::Required } // End stages
};
extern const unsigned MBlazeOperandCycles[] = {
  0, // No itinerary
  2,   1,   1, // 1-3
  35,   1,   1, // 4-6
  4,   1,   1, // 7-9
  1, // 10
  1,   1, // 11-12
  2,   1, // 13-14
  7,   1,   1, // 15-17
  4,   1,   1, // 18-20
  31,   1,   1, // 21-23
  7,   1, // 24-25
  8,   1, // 26-27
  30,   1, // 28-29
  3,   1, // 30-31
  1,   1, // 32-33
  3,   1,   1, // 34-36
  1,   1,   1, // 37-39
  3,   1,   1, // 40-42
  1,   1, // 43-44
  2,   1,   1, // 45-47
  33,   1,   1, // 48-50
  2,   1,   1, // 51-53
  1, // 54
  1,   1, // 55-56
  4,   1, // 57-58
  5,   1,   1, // 59-61
  2,   1,   1, // 62-64
  29,   1,   1, // 65-67
  5,   1, // 68-69
  6,   1, // 70-71
  28,   1, // 72-73
  2,   1, // 74-75
  1,   1, // 76-77
  4,   1,   1, // 78-80
  1,   1,   1, // 81-83
  3,   1,   1, // 84-86
  1,   1, // 87-88
  0 // End operand cycles
};
extern const unsigned MBlazeForwardingPaths[] = {
 0, // No itinerary
 0,  0,  0, // 1-3
 0,  0,  0, // 4-6
 0,  0,  0, // 7-9
 0, // 10
 0,  0, // 11-12
 0,  0, // 13-14
 0,  0,  0, // 15-17
 0,  0,  0, // 18-20
 0,  0,  0, // 21-23
 0,  0, // 24-25
 0,  0, // 26-27
 0,  0, // 28-29
 0,  0, // 30-31
 0,  0, // 32-33
 0,  0,  0, // 34-36
 0,  0,  0, // 37-39
 0,  0,  0, // 40-42
 0,  0, // 43-44
 0,  0,  0, // 45-47
 0,  0,  0, // 48-50
 0,  0,  0, // 51-53
 0, // 54
 0,  0, // 55-56
 0,  0, // 57-58
 0,  0,  0, // 59-61
 0,  0,  0, // 62-64
 0,  0,  0, // 65-67
 0,  0, // 68-69
 0,  0, // 70-71
 0,  0, // 72-73
 0,  0, // 74-75
 0,  0, // 76-77
 0,  0,  0, // 78-80
 0,  0,  0, // 81-83
 0,  0,  0, // 84-86
 0,  0, // 87-88
 0 // End bypass tables
};

static const llvm::InstrItinerary *NoItineraries = 0;

static const llvm::InstrItinerary MBlazePipe3Itineraries[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoItinerary
  { 1, 1, 4, 1, 4 }, // 1 IIC_ALU
  { 1, 4, 7, 4, 7 }, // 2 IIC_ALUd
  { 1, 7, 10, 7, 10 }, // 3 IIC_ALUm
  { 1, 1, 4, 10, 11 }, // 4 IIC_BR
  { 1, 1, 4, 11, 13 }, // 5 IIC_BRc
  { 1, 1, 4, 13, 15 }, // 6 IIC_BRl
  { 1, 10, 13, 15, 18 }, // 7 IIC_FPU
  { 1, 7, 10, 18, 21 }, // 8 IIC_FPUc
  { 1, 13, 16, 21, 24 }, // 9 IIC_FPUd
  { 1, 10, 13, 24, 26 }, // 10 IIC_FPUf
  { 1, 16, 19, 26, 28 }, // 11 IIC_FPUi
  { 1, 19, 22, 28, 30 }, // 12 IIC_FPUs
  { 1, 22, 25, 30, 32 }, // 13 IIC_FSLg
  { 1, 22, 25, 32, 34 }, // 14 IIC_FSLp
  { 1, 22, 25, 34, 37 }, // 15 IIC_MEMl
  { 1, 22, 25, 37, 40 }, // 16 IIC_MEMs
  { 0, 0, 0, 0, 0 }, // 17 IIC_Pseudo
  { 1, 22, 25, 40, 43 }, // 18 IIC_SHT
  { 1, 22, 25, 43, 45 }, // 19 IIC_WDC
  { 0, ~0U, ~0U, ~0U, ~0U } // end marker
};

static const llvm::InstrItinerary MBlazePipe5Itineraries[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoItinerary
  { 1, 25, 30, 45, 48 }, // 1 IIC_ALU
  { 1, 30, 35, 48, 51 }, // 2 IIC_ALUd
  { 1, 25, 30, 51, 54 }, // 3 IIC_ALUm
  { 1, 25, 30, 54, 55 }, // 4 IIC_BR
  { 1, 25, 30, 55, 57 }, // 5 IIC_BRc
  { 1, 25, 30, 57, 59 }, // 6 IIC_BRl
  { 1, 35, 40, 59, 62 }, // 7 IIC_FPU
  { 1, 25, 30, 62, 65 }, // 8 IIC_FPUc
  { 1, 40, 45, 65, 68 }, // 9 IIC_FPUd
  { 1, 35, 40, 68, 70 }, // 10 IIC_FPUf
  { 1, 45, 50, 70, 72 }, // 11 IIC_FPUi
  { 1, 50, 55, 72, 74 }, // 12 IIC_FPUs
  { 1, 25, 30, 74, 76 }, // 13 IIC_FSLg
  { 1, 25, 30, 76, 78 }, // 14 IIC_FSLp
  { 1, 25, 30, 78, 81 }, // 15 IIC_MEMl
  { 1, 25, 30, 81, 84 }, // 16 IIC_MEMs
  { 0, 0, 0, 0, 0 }, // 17 IIC_Pseudo
  { 1, 25, 30, 84, 87 }, // 18 IIC_SHT
  { 1, 35, 40, 87, 89 }, // 19 IIC_WDC
  { 0, ~0U, ~0U, ~0U, ~0U } // end marker
};

// ===============================================================
// Data tables for the new per-operand machine model.

// {ProcResourceIdx, Cycles}
extern const llvm::MCWriteProcResEntry MBlazeWriteProcResTable[] = {
  { 0,  0}, // Invalid
}; // MBlazeWriteProcResTable

// {Cycles, WriteResourceID}
extern const llvm::MCWriteLatencyEntry MBlazeWriteLatencyTable[] = {
  { 0,  0}, // Invalid
}; // MBlazeWriteLatencyTable

// {UseIdx, WriteResourceID, Cycles}
extern const llvm::MCReadAdvanceEntry MBlazeReadAdvanceTable[] = {
  {0,  0,  0}, // Invalid
}; // MBlazeReadAdvanceTable

static const llvm::MCSchedModel NoSchedModel(
  MCSchedModel::DefaultIssueWidth,
  MCSchedModel::DefaultMinLatency,
  MCSchedModel::DefaultLoadLatency,
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultMispredictPenalty,
  0, // Processor ID
  0, 0, 0, 0, // No instruction-level machine model.
  NoItineraries);

static const llvm::MCSchedModel MBlazePipe3ItinerariesModel(
  MCSchedModel::DefaultIssueWidth,
  MCSchedModel::DefaultMinLatency,
  MCSchedModel::DefaultLoadLatency,
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultMispredictPenalty,
  1, // Processor ID
  0, 0, 0, 0, // No instruction-level machine model.
  MBlazePipe3Itineraries);

static const llvm::MCSchedModel MBlazePipe5ItinerariesModel(
  MCSchedModel::DefaultIssueWidth,
  MCSchedModel::DefaultMinLatency,
  MCSchedModel::DefaultLoadLatency,
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultMispredictPenalty,
  2, // Processor ID
  0, 0, 0, 0, // No instruction-level machine model.
  MBlazePipe5Itineraries);

// Sorted (by key) array of itineraries for CPU subtype.
extern const llvm::SubtargetInfoKV MBlazeProcSchedKV[] = {
  { "mblaze", (const void *)&NoSchedModel },
  { "mblaze3", (const void *)&MBlazePipe3ItinerariesModel },
  { "mblaze5", (const void *)&MBlazePipe5ItinerariesModel }
};
#undef DBGFIELD
static inline void InitMBlazeMCSubtargetInfo(MCSubtargetInfo *II, StringRef TT, StringRef CPU, StringRef FS) {
  II->InitMCSubtargetInfo(TT, CPU, FS, MBlazeFeatureKV, MBlazeSubTypeKV, 
                      MBlazeProcSchedKV, MBlazeWriteProcResTable, MBlazeWriteLatencyTable, MBlazeReadAdvanceTable, 
                      MBlazeStages, MBlazeOperandCycles, MBlazeForwardingPaths, 7, 3);
}

} // End llvm namespace 
#endif // GET_SUBTARGETINFO_MC_DESC


#ifdef GET_SUBTARGETINFO_TARGET_DESC
#undef GET_SUBTARGETINFO_TARGET_DESC
#include "llvm/Support/Debug.h"
#include "llvm/Support/raw_ostream.h"
// ParseSubtargetFeatures - Parses features string setting specified
// subtarget options.
void llvm::MBlazeSubtarget::ParseSubtargetFeatures(StringRef CPU, StringRef FS) {
  DEBUG(dbgs() << "\nFeatures:" << FS);
  DEBUG(dbgs() << "\nCPU:" << CPU << "\n\n");
  InitMCProcessorInfo(CPU, FS);
  uint64_t Bits = getFeatureBits();
  if ((Bits & MBlaze::FeatureBarrel) != 0) HasBarrel = true;
  if ((Bits & MBlaze::FeatureDiv) != 0) HasDiv = true;
  if ((Bits & MBlaze::FeatureFPU) != 0) HasFPU = true;
  if ((Bits & MBlaze::FeatureMul) != 0) HasMul = true;
  if ((Bits & MBlaze::FeatureMul64) != 0) HasMul64 = true;
  if ((Bits & MBlaze::FeaturePatCmp) != 0) HasPatCmp = true;
  if ((Bits & MBlaze::FeatureSqrt) != 0) HasSqrt = true;
}
#endif // GET_SUBTARGETINFO_TARGET_DESC


#ifdef GET_SUBTARGETINFO_HEADER
#undef GET_SUBTARGETINFO_HEADER
namespace llvm {
class DFAPacketizer;
struct MBlazeGenSubtargetInfo : public TargetSubtargetInfo {
  explicit MBlazeGenSubtargetInfo(StringRef TT, StringRef CPU, StringRef FS);
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
extern const llvm::SubtargetFeatureKV MBlazeFeatureKV[];
extern const llvm::SubtargetFeatureKV MBlazeSubTypeKV[];
extern const llvm::SubtargetInfoKV MBlazeProcSchedKV[];
extern const llvm::MCWriteProcResEntry MBlazeWriteProcResTable[];
extern const llvm::MCWriteLatencyEntry MBlazeWriteLatencyTable[];
extern const llvm::MCReadAdvanceEntry MBlazeReadAdvanceTable[];
extern const llvm::InstrStage MBlazeStages[];
extern const unsigned MBlazeOperandCycles[];
extern const unsigned MBlazeForwardingPaths[];
MBlazeGenSubtargetInfo::MBlazeGenSubtargetInfo(StringRef TT, StringRef CPU, StringRef FS)
  : TargetSubtargetInfo() {
  InitMCSubtargetInfo(TT, CPU, FS, MBlazeFeatureKV, MBlazeSubTypeKV, 
                      MBlazeProcSchedKV, MBlazeWriteProcResTable, MBlazeWriteLatencyTable, MBlazeReadAdvanceTable, 
                      MBlazeStages, MBlazeOperandCycles, MBlazeForwardingPaths, 7, 3);
}

unsigned MBlazeGenSubtargetInfo
::resolveSchedClass(unsigned SchedClass, const MachineInstr *MI, const TargetSchedModel *SchedModel) const {
  report_fatal_error("Expected a variant SchedClass");
} // MBlazeGenSubtargetInfo::resolveSchedClass
} // End llvm namespace 
#endif // GET_SUBTARGETINFO_CTOR

