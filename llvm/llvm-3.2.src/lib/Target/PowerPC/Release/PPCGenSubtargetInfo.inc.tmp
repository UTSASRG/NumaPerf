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
namespace PPC {
enum {
  Directive32 =  1ULL << 0,
  Directive64 =  1ULL << 1,
  Directive440 =  1ULL << 2,
  Directive601 =  1ULL << 3,
  Directive602 =  1ULL << 4,
  Directive603 =  1ULL << 5,
  Directive604 =  1ULL << 6,
  Directive620 =  1ULL << 7,
  Directive750 =  1ULL << 8,
  Directive970 =  1ULL << 9,
  Directive7400 =  1ULL << 10,
  DirectiveA2 =  1ULL << 11,
  DirectiveE500mc =  1ULL << 12,
  DirectiveE5500 =  1ULL << 13,
  DirectivePwr6 =  1ULL << 14,
  DirectivePwr7 =  1ULL << 15,
  Feature64Bit =  1ULL << 16,
  Feature64BitRegs =  1ULL << 17,
  FeatureAltivec =  1ULL << 18,
  FeatureBookE =  1ULL << 19,
  FeatureFSqrt =  1ULL << 20,
  FeatureISEL =  1ULL << 21,
  FeatureMFOCRF =  1ULL << 22,
  FeatureSTFIWX =  1ULL << 23
};
}
} // End llvm namespace 
#endif // GET_SUBTARGETINFO_ENUM


#ifdef GET_SUBTARGETINFO_MC_DESC
#undef GET_SUBTARGETINFO_MC_DESC
namespace llvm {
// Sorted (by key) array of values for CPU features.
extern const llvm::SubtargetFeatureKV PPCFeatureKV[] = {
  { "64bit", "Enable 64-bit instructions", PPC::Feature64Bit, 0ULL },
  { "64bitregs", "Enable 64-bit registers usage for ppc32 [beta]", PPC::Feature64BitRegs, 0ULL },
  { "altivec", "Enable Altivec instructions", PPC::FeatureAltivec, 0ULL },
  { "booke", "Enable Book E instructions", PPC::FeatureBookE, 0ULL },
  { "fsqrt", "Enable the fsqrt instruction", PPC::FeatureFSqrt, 0ULL },
  { "isel", "Enable the isel instruction", PPC::FeatureISEL, 0ULL },
  { "mfocrf", "Enable the MFOCRF instruction", PPC::FeatureMFOCRF, 0ULL },
  { "stfiwx", "Enable the stfiwx instruction", PPC::FeatureSTFIWX, 0ULL }
};

// Sorted (by key) array of values for CPU subtype.
extern const llvm::SubtargetFeatureKV PPCSubTypeKV[] = {
  { "440", "Select the 440 processor", PPC::Directive440 | PPC::FeatureISEL | PPC::FeatureBookE, 0ULL },
  { "450", "Select the 450 processor", PPC::Directive440 | PPC::FeatureISEL | PPC::FeatureBookE, 0ULL },
  { "601", "Select the 601 processor", PPC::Directive601, 0ULL },
  { "602", "Select the 602 processor", PPC::Directive602, 0ULL },
  { "603", "Select the 603 processor", PPC::Directive603, 0ULL },
  { "603e", "Select the 603e processor", PPC::Directive603, 0ULL },
  { "603ev", "Select the 603ev processor", PPC::Directive603, 0ULL },
  { "604", "Select the 604 processor", PPC::Directive604, 0ULL },
  { "604e", "Select the 604e processor", PPC::Directive604, 0ULL },
  { "620", "Select the 620 processor", PPC::Directive620, 0ULL },
  { "7400", "Select the 7400 processor", PPC::Directive7400 | PPC::FeatureAltivec, 0ULL },
  { "7450", "Select the 7450 processor", PPC::Directive7400 | PPC::FeatureAltivec, 0ULL },
  { "750", "Select the 750 processor", PPC::Directive750, 0ULL },
  { "970", "Select the 970 processor", PPC::Directive970 | PPC::FeatureAltivec | PPC::FeatureMFOCRF | PPC::FeatureFSqrt | PPC::FeatureSTFIWX | PPC::Feature64Bit, 0ULL },
  { "a2", "Select the a2 processor", PPC::DirectiveA2 | PPC::FeatureBookE | PPC::FeatureMFOCRF | PPC::FeatureFSqrt | PPC::FeatureSTFIWX | PPC::FeatureISEL | PPC::Feature64Bit, 0ULL },
  { "e500mc", "Select the e500mc processor", PPC::DirectiveE500mc | PPC::FeatureMFOCRF | PPC::FeatureSTFIWX | PPC::FeatureBookE | PPC::FeatureISEL, 0ULL },
  { "e5500", "Select the e5500 processor", PPC::DirectiveE5500 | PPC::FeatureMFOCRF | PPC::Feature64Bit | PPC::FeatureSTFIWX | PPC::FeatureBookE | PPC::FeatureISEL, 0ULL },
  { "g3", "Select the g3 processor", PPC::Directive750, 0ULL },
  { "g4", "Select the g4 processor", PPC::Directive7400 | PPC::FeatureAltivec, 0ULL },
  { "g4+", "Select the g4+ processor", PPC::Directive7400 | PPC::FeatureAltivec, 0ULL },
  { "g5", "Select the g5 processor", PPC::Directive970 | PPC::FeatureAltivec | PPC::FeatureMFOCRF | PPC::FeatureFSqrt | PPC::FeatureSTFIWX | PPC::Feature64Bit, 0ULL },
  { "generic", "Select the generic processor", PPC::Directive32, 0ULL },
  { "ppc", "Select the ppc processor", PPC::Directive32, 0ULL },
  { "ppc64", "Select the ppc64 processor", PPC::Directive64 | PPC::FeatureAltivec | PPC::FeatureMFOCRF | PPC::FeatureFSqrt | PPC::FeatureSTFIWX | PPC::Feature64Bit, 0ULL },
  { "pwr6", "Select the pwr6 processor", PPC::DirectivePwr6 | PPC::FeatureAltivec | PPC::FeatureMFOCRF | PPC::FeatureFSqrt | PPC::FeatureSTFIWX | PPC::Feature64Bit, 0ULL },
  { "pwr7", "Select the pwr7 processor", PPC::DirectivePwr7 | PPC::FeatureAltivec | PPC::FeatureMFOCRF | PPC::FeatureFSqrt | PPC::FeatureSTFIWX | PPC::FeatureISEL | PPC::Feature64Bit, 0ULL }
};

#ifdef DBGFIELD
#error "<target>GenSubtargetInfo.inc requires a DBGFIELD macro"
#endif
#ifndef NDEBUG
#define DBGFIELD(x) x,
#else
#define DBGFIELD(x)
#endif

// Functional units for "PPC440Itineraries"
namespace PPC440ItinerariesFU {
  const unsigned IFTH1 = 1 << 0;
  const unsigned IFTH2 = 1 << 1;
  const unsigned PDCD1 = 1 << 2;
  const unsigned PDCD2 = 1 << 3;
  const unsigned DISS1 = 1 << 4;
  const unsigned DISS2 = 1 << 5;
  const unsigned FRACC = 1 << 6;
  const unsigned IRACC = 1 << 7;
  const unsigned IEXE1 = 1 << 8;
  const unsigned IEXE2 = 1 << 9;
  const unsigned IWB = 1 << 10;
  const unsigned LRACC = 1 << 11;
  const unsigned JEXE1 = 1 << 12;
  const unsigned JEXE2 = 1 << 13;
  const unsigned JWB = 1 << 14;
  const unsigned AGEN = 1 << 15;
  const unsigned CRD = 1 << 16;
  const unsigned LWB = 1 << 17;
  const unsigned FEXE1 = 1 << 18;
  const unsigned FEXE2 = 1 << 19;
  const unsigned FEXE3 = 1 << 20;
  const unsigned FEXE4 = 1 << 21;
  const unsigned FEXE5 = 1 << 22;
  const unsigned FEXE6 = 1 << 23;
  const unsigned FWB = 1 << 24;
  const unsigned LWARX_Hold = 1 << 25;
}

// Pipeline forwarding pathes for itineraries "PPC440Itineraries"
namespace PPC440ItinerariesBypass {
  const unsigned NoBypass = 0;
  const unsigned GPR_Bypass = 1 << 0;
  const unsigned FPR_Bypass = 1 << 1;
}

// Functional units for "G3Itineraries"
namespace G3ItinerariesFU {
  const unsigned IU1 = 1 << 0;
  const unsigned IU2 = 1 << 1;
  const unsigned FPU1 = 1 << 2;
  const unsigned BPU = 1 << 3;
  const unsigned SRU = 1 << 4;
  const unsigned SLU = 1 << 5;
}

// Functional units for "G4Itineraries"
namespace G4ItinerariesFU {
  const unsigned IU1 = 1 << 0;
  const unsigned IU2 = 1 << 1;
  const unsigned SLU = 1 << 2;
  const unsigned SRU = 1 << 3;
  const unsigned BPU = 1 << 4;
  const unsigned FPU1 = 1 << 5;
  const unsigned VIU1 = 1 << 6;
  const unsigned VIU2 = 1 << 7;
  const unsigned VPU = 1 << 8;
  const unsigned VFPU = 1 << 9;
}

// Functional units for "G4PlusItineraries"
namespace G4PlusItinerariesFU {
  const unsigned IU1 = 1 << 0;
  const unsigned IU2 = 1 << 1;
  const unsigned IU3 = 1 << 2;
  const unsigned IU4 = 1 << 3;
  const unsigned BPU = 1 << 4;
  const unsigned SLU = 1 << 5;
  const unsigned FPU1 = 1 << 6;
  const unsigned VFPU = 1 << 7;
  const unsigned VIU1 = 1 << 8;
  const unsigned VIU2 = 1 << 9;
  const unsigned VPU = 1 << 10;
}

// Functional units for "G5Itineraries"
namespace G5ItinerariesFU {
  const unsigned IU1 = 1 << 0;
  const unsigned IU2 = 1 << 1;
  const unsigned SLU = 1 << 2;
  const unsigned BPU = 1 << 3;
  const unsigned FPU1 = 1 << 4;
  const unsigned FPU2 = 1 << 5;
  const unsigned VFPU = 1 << 6;
  const unsigned VIU1 = 1 << 7;
  const unsigned VIU2 = 1 << 8;
  const unsigned VPU = 1 << 9;
}

// Functional units for "PPCA2Itineraries"
namespace PPCA2ItinerariesFU {
  const unsigned IU0to3_0 = 1 << 0;
  const unsigned IU0to3_1 = 1 << 1;
  const unsigned IU0to3_2 = 1 << 2;
  const unsigned IU0to3_3 = 1 << 3;
  const unsigned IU4_0 = 1 << 4;
  const unsigned IU4_1 = 1 << 5;
  const unsigned IU4_2 = 1 << 6;
  const unsigned IU4_3 = 1 << 7;
  const unsigned IU4_4 = 1 << 8;
  const unsigned IU4_5 = 1 << 9;
  const unsigned IU4_6 = 1 << 10;
  const unsigned IU4_7 = 1 << 11;
  const unsigned IU5 = 1 << 12;
  const unsigned IU6 = 1 << 13;
  const unsigned RF0 = 1 << 14;
  const unsigned XRF1 = 1 << 15;
  const unsigned XEX1 = 1 << 16;
  const unsigned XEX2 = 1 << 17;
  const unsigned XEX3 = 1 << 18;
  const unsigned XEX4 = 1 << 19;
  const unsigned XEX5 = 1 << 20;
  const unsigned XEX6 = 1 << 21;
  const unsigned FRF1 = 1 << 22;
  const unsigned FEX1 = 1 << 23;
  const unsigned FEX2 = 1 << 24;
  const unsigned FEX3 = 1 << 25;
  const unsigned FEX4 = 1 << 26;
  const unsigned FEX5 = 1 << 27;
  const unsigned FEX6 = 1 << 28;
}

// Pipeline forwarding pathes for itineraries "PPCA2Itineraries"
namespace PPCA2ItinerariesBypass {
  const unsigned NoBypass = 0;
  const unsigned CR_Bypass = 1 << 0;
  const unsigned GPR_Bypass = 1 << 1;
  const unsigned FPR_Bypass = 1 << 2;
}

// Functional units for "PPCE500mcItineraries"
namespace PPCE500mcItinerariesFU {
  const unsigned DIS0 = 1 << 0;
  const unsigned DIS1 = 1 << 1;
  const unsigned SFX0 = 1 << 2;
  const unsigned SFX1 = 1 << 3;
  const unsigned BU = 1 << 4;
  const unsigned CFX_DivBypass = 1 << 5;
  const unsigned CFX_0 = 1 << 6;
  const unsigned LSU_0 = 1 << 7;
  const unsigned FPU_0 = 1 << 8;
}

// Pipeline forwarding pathes for itineraries "PPCE500mcItineraries"
namespace PPCE500mcItinerariesBypass {
  const unsigned NoBypass = 0;
  const unsigned CR_Bypass = 1 << 0;
  const unsigned GPR_Bypass = 1 << 1;
  const unsigned FPR_Bypass = 1 << 2;
}

// Functional units for "PPCE5500Itineraries"
namespace PPCE5500ItinerariesFU {
  const unsigned DIS0 = 1 << 0;
  const unsigned DIS1 = 1 << 1;
  const unsigned SFX0 = 1 << 2;
  const unsigned SFX1 = 1 << 3;
  const unsigned BU = 1 << 4;
  const unsigned CFX_DivBypass = 1 << 5;
  const unsigned CFX_0 = 1 << 6;
  const unsigned CFX_1 = 1 << 7;
  const unsigned LSU_0 = 1 << 8;
  const unsigned FPU_0 = 1 << 9;
}

// Pipeline forwarding pathes for itineraries "PPCE5500Itineraries"
namespace PPCE5500ItinerariesBypass {
  const unsigned NoBypass = 0;
  const unsigned CR_Bypass = 1 << 0;
  const unsigned GPR_Bypass = 1 << 1;
  const unsigned FPR_Bypass = 1 << 2;
}

extern const llvm::InstrStage PPCStages[] = {
  { 0, 0, 0, llvm::InstrStage::Required }, // No itinerary
  { 1, PPC440ItinerariesFU::IFTH1 | PPC440ItinerariesFU::IFTH2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::PDCD1 | PPC440ItinerariesFU::PDCD2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::DISS1 | PPC440ItinerariesFU::DISS2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::IRACC, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::IEXE1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::IEXE2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::IWB, -1, (llvm::InstrStage::ReservationKinds)0 }, // 1-7
  { 1, PPC440ItinerariesFU::IFTH1 | PPC440ItinerariesFU::IFTH2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::PDCD1 | PPC440ItinerariesFU::PDCD2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::DISS1 | PPC440ItinerariesFU::DISS2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::FRACC, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::FEXE1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::FEXE2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::FEXE3, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::FEXE4, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::FEXE5, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::FEXE6, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::FWB, -1, (llvm::InstrStage::ReservationKinds)0 }, // 8-18
  { 1, PPC440ItinerariesFU::IFTH1 | PPC440ItinerariesFU::IFTH2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::PDCD1 | PPC440ItinerariesFU::PDCD2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::DISS1 | PPC440ItinerariesFU::DISS2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::FRACC, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::FEXE1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::FEXE2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::FEXE3, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::FEXE4, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::FEXE5, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::FEXE6, -1, (llvm::InstrStage::ReservationKinds)0 },   { 25, PPC440ItinerariesFU::FWB, -1, (llvm::InstrStage::ReservationKinds)0 }, // 19-29
  { 1, PPC440ItinerariesFU::IFTH1 | PPC440ItinerariesFU::IFTH2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::PDCD1 | PPC440ItinerariesFU::PDCD2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::DISS1 | PPC440ItinerariesFU::DISS2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::FRACC, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::FEXE1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::FEXE2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::FEXE3, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::FEXE4, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::FEXE5, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::FEXE6, -1, (llvm::InstrStage::ReservationKinds)0 },   { 13, PPC440ItinerariesFU::FWB, -1, (llvm::InstrStage::ReservationKinds)0 }, // 30-40
  { 1, PPC440ItinerariesFU::IFTH1 | PPC440ItinerariesFU::IFTH2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::PDCD1 | PPC440ItinerariesFU::PDCD2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::DISS1 | PPC440ItinerariesFU::DISS2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::IRACC | PPC440ItinerariesFU::LRACC, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::IEXE1 | PPC440ItinerariesFU::JEXE1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::IEXE2 | PPC440ItinerariesFU::JEXE2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::IWB | PPC440ItinerariesFU::JWB, -1, (llvm::InstrStage::ReservationKinds)0 }, // 41-47
  { 1, PPC440ItinerariesFU::IFTH1 | PPC440ItinerariesFU::IFTH2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::PDCD1 | PPC440ItinerariesFU::PDCD2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::DISS1 | PPC440ItinerariesFU::DISS2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::IRACC, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::IEXE1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::IEXE2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 33, PPC440ItinerariesFU::IWB, -1, (llvm::InstrStage::ReservationKinds)0 }, // 48-54
  { 1, PPC440ItinerariesFU::IFTH1 | PPC440ItinerariesFU::IFTH2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::PDCD1 | PPC440ItinerariesFU::PDCD2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::DISS1 | PPC440ItinerariesFU::DISS2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::LRACC, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::AGEN, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::CRD, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::LWB, -1, (llvm::InstrStage::ReservationKinds)0 }, // 55-61
  { 1, PPC440ItinerariesFU::IFTH1 | PPC440ItinerariesFU::IFTH2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::PDCD1 | PPC440ItinerariesFU::PDCD2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::DISS1 | PPC440ItinerariesFU::DISS2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::LRACC, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::AGEN, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::CRD, -1, (llvm::InstrStage::ReservationKinds)0 },   { 2, PPC440ItinerariesFU::LWB, -1, (llvm::InstrStage::ReservationKinds)0 }, // 62-68
  { 1, PPC440ItinerariesFU::IFTH1 | PPC440ItinerariesFU::IFTH2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::PDCD1 | PPC440ItinerariesFU::PDCD2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::DISS1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::IRACC, 0, (llvm::InstrStage::ReservationKinds)0 },   { 4, PPC440ItinerariesFU::LWARX_Hold, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::LRACC, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::AGEN, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::CRD, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::LWB, -1, (llvm::InstrStage::ReservationKinds)0 }, // 69-77
  { 1, PPC440ItinerariesFU::IFTH1 | PPC440ItinerariesFU::IFTH2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::PDCD1 | PPC440ItinerariesFU::PDCD2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::DISS1 | PPC440ItinerariesFU::DISS2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::LRACC, -1, (llvm::InstrStage::ReservationKinds)0 },   { 3, PPC440ItinerariesFU::AGEN, 1, (llvm::InstrStage::ReservationKinds)0 },   { 2, PPC440ItinerariesFU::CRD, 1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::LWB, -1, (llvm::InstrStage::ReservationKinds)0 }, // 78-84
  { 1, PPC440ItinerariesFU::IFTH1 | PPC440ItinerariesFU::IFTH2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::PDCD1 | PPC440ItinerariesFU::PDCD2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::DISS1 | PPC440ItinerariesFU::DISS2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::IRACC, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::IEXE1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::IEXE2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 3, PPC440ItinerariesFU::IWB, -1, (llvm::InstrStage::ReservationKinds)0 }, // 85-91
  { 1, G3ItinerariesFU::BPU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 92
  { 1, G3ItinerariesFU::SRU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 93
  { 1, G3ItinerariesFU::FPU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 94
  { 31, G3ItinerariesFU::FPU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 95
  { 17, G3ItinerariesFU::FPU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 96
  { 2, G3ItinerariesFU::FPU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 97
  { 1, G3ItinerariesFU::IU1 | G3ItinerariesFU::IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 98
  { 19, G3ItinerariesFU::IU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 99
  { 3, G3ItinerariesFU::FPU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 100
  { 5, G3ItinerariesFU::IU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 101
  { 6, G3ItinerariesFU::IU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 102
  { 3, G3ItinerariesFU::IU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 103
  { 3, G3ItinerariesFU::SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 104
  { 2, G3ItinerariesFU::SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 105
  { 8, G3ItinerariesFU::SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 106
  { 3, G3ItinerariesFU::SRU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 107
  { 2, G3ItinerariesFU::SRU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 108
  { 1, G4ItinerariesFU::BPU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 109
  { 1, G4ItinerariesFU::SRU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 110
  { 1, G4ItinerariesFU::FPU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 111
  { 31, G4ItinerariesFU::FPU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 112
  { 17, G4ItinerariesFU::FPU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 113
  { 1, G4ItinerariesFU::IU1 | G4ItinerariesFU::IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 114
  { 19, G4ItinerariesFU::IU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 115
  { 3, G4ItinerariesFU::FPU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 116
  { 5, G4ItinerariesFU::IU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 117
  { 6, G4ItinerariesFU::IU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 118
  { 3, G4ItinerariesFU::IU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 119
  { 2, G4ItinerariesFU::SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 120
  { 3, G4ItinerariesFU::SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 121
  { 5, G4ItinerariesFU::SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 122
  { 8, G4ItinerariesFU::SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 123
  { 3, G4ItinerariesFU::SRU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 124
  { 2, G4ItinerariesFU::SRU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 125
  { 4, G4ItinerariesFU::VFPU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 126
  { 1, G4ItinerariesFU::VIU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 127
  { 1, G4ItinerariesFU::VPU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 128
  { 1, G4PlusItinerariesFU::BPU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 129
  { 2, G4PlusItinerariesFU::IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 130
  { 5, G4PlusItinerariesFU::FPU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 131
  { 35, G4PlusItinerariesFU::FPU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 132
  { 21, G4PlusItinerariesFU::FPU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 133
  { 1, G4PlusItinerariesFU::IU1 | G4PlusItinerariesFU::IU2 | G4PlusItinerariesFU::IU3 | G4PlusItinerariesFU::IU4, -1, (llvm::InstrStage::ReservationKinds)0 }, // 134
  { 23, G4PlusItinerariesFU::IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 135
  { 4, G4PlusItinerariesFU::IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 136
  { 3, G4PlusItinerariesFU::IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 137
  { 2, G4PlusItinerariesFU::IU1 | G4PlusItinerariesFU::IU2 | G4PlusItinerariesFU::IU3 | G4PlusItinerariesFU::IU4, -1, (llvm::InstrStage::ReservationKinds)0 }, // 138
  { 3, G4PlusItinerariesFU::SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 139
  { 4, G4PlusItinerariesFU::SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 140
  { 35, G4PlusItinerariesFU::SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 141
  { 5, G4PlusItinerariesFU::IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 142
  { 4, G4PlusItinerariesFU::VFPU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 143
  { 2, G4PlusItinerariesFU::VFPU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 144
  { 1, G4PlusItinerariesFU::VIU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 145
  { 2, G4PlusItinerariesFU::VPU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 146
  { 1, G5ItinerariesFU::BPU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 147
  { 4, G5ItinerariesFU::BPU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 148
  { 2, G5ItinerariesFU::BPU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 149
  { 3, G5ItinerariesFU::BPU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 150
  { 6, G5ItinerariesFU::FPU1 | G5ItinerariesFU::FPU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 151
  { 8, G5ItinerariesFU::FPU1 | G5ItinerariesFU::FPU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 152
  { 33, G5ItinerariesFU::FPU1 | G5ItinerariesFU::FPU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 153
  { 40, G5ItinerariesFU::FPU1 | G5ItinerariesFU::FPU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 154
  { 3, G5ItinerariesFU::IU1 | G5ItinerariesFU::IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 155
  { 68, G5ItinerariesFU::IU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 156
  { 36, G5ItinerariesFU::IU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 157
  { 2, G5ItinerariesFU::IU1 | G5ItinerariesFU::IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 158
  { 6, G5ItinerariesFU::IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 159
  { 7, G5ItinerariesFU::IU1 | G5ItinerariesFU::IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 160
  { 5, G5ItinerariesFU::IU1 | G5ItinerariesFU::IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 161
  { 4, G5ItinerariesFU::IU1 | G5ItinerariesFU::IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 162
  { 3, G5ItinerariesFU::SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 163
  { 11, G5ItinerariesFU::SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 164
  { 5, G5ItinerariesFU::SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 165
  { 4, G5ItinerariesFU::SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 166
  { 35, G5ItinerariesFU::SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 167
  { 2, G5ItinerariesFU::IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 168
  { 3, G5ItinerariesFU::IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 169
  { 10, G5ItinerariesFU::IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 170
  { 8, G5ItinerariesFU::IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 171
  { 8, G5ItinerariesFU::VFPU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 172
  { 2, G5ItinerariesFU::VFPU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 173
  { 2, G5ItinerariesFU::VIU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 174
  { 3, G5ItinerariesFU::VPU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 175
  { 4, PPCA2ItinerariesFU::IU0to3_0 | PPCA2ItinerariesFU::IU0to3_1 | PPCA2ItinerariesFU::IU0to3_2 | PPCA2ItinerariesFU::IU0to3_3, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::IU4_0 | PPCA2ItinerariesFU::IU4_1 | PPCA2ItinerariesFU::IU4_2 | PPCA2ItinerariesFU::IU4_3 | PPCA2ItinerariesFU::IU4_4 | PPCA2ItinerariesFU::IU4_5 | PPCA2ItinerariesFU::IU4_6 | PPCA2ItinerariesFU::IU4_7, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::IU5, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::IU6, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::RF0, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::XRF1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::XEX1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::XEX2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::XEX3, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::XEX4, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::XEX5, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::XEX6, -1, (llvm::InstrStage::ReservationKinds)0 }, // 176-187
  { 4, PPCA2ItinerariesFU::IU0to3_0 | PPCA2ItinerariesFU::IU0to3_1 | PPCA2ItinerariesFU::IU0to3_2 | PPCA2ItinerariesFU::IU0to3_3, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::IU4_0 | PPCA2ItinerariesFU::IU4_1 | PPCA2ItinerariesFU::IU4_2 | PPCA2ItinerariesFU::IU4_3 | PPCA2ItinerariesFU::IU4_4 | PPCA2ItinerariesFU::IU4_5 | PPCA2ItinerariesFU::IU4_6 | PPCA2ItinerariesFU::IU4_7, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::IU5, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::IU6, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::RF0, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::FRF1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::FEX1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::FEX2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::FEX3, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::FEX4, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::FEX5, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::FEX6, -1, (llvm::InstrStage::ReservationKinds)0 }, // 188-199
  { 4, PPCA2ItinerariesFU::IU0to3_0 | PPCA2ItinerariesFU::IU0to3_1 | PPCA2ItinerariesFU::IU0to3_2 | PPCA2ItinerariesFU::IU0to3_3, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::IU4_0 | PPCA2ItinerariesFU::IU4_1 | PPCA2ItinerariesFU::IU4_2 | PPCA2ItinerariesFU::IU4_3 | PPCA2ItinerariesFU::IU4_4 | PPCA2ItinerariesFU::IU4_5 | PPCA2ItinerariesFU::IU4_6 | PPCA2ItinerariesFU::IU4_7, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::IU5, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::IU6, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::RF0, -1, (llvm::InstrStage::ReservationKinds)0 },   { 71, PPCA2ItinerariesFU::FRF1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 71, PPCA2ItinerariesFU::FEX1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 71, PPCA2ItinerariesFU::FEX2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 71, PPCA2ItinerariesFU::FEX3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 71, PPCA2ItinerariesFU::FEX4, 0, (llvm::InstrStage::ReservationKinds)0 },   { 71, PPCA2ItinerariesFU::FEX5, 0, (llvm::InstrStage::ReservationKinds)0 },   { 71, PPCA2ItinerariesFU::FEX6, -1, (llvm::InstrStage::ReservationKinds)0 }, // 200-211
  { 4, PPCA2ItinerariesFU::IU0to3_0 | PPCA2ItinerariesFU::IU0to3_1 | PPCA2ItinerariesFU::IU0to3_2 | PPCA2ItinerariesFU::IU0to3_3, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::IU4_0 | PPCA2ItinerariesFU::IU4_1 | PPCA2ItinerariesFU::IU4_2 | PPCA2ItinerariesFU::IU4_3 | PPCA2ItinerariesFU::IU4_4 | PPCA2ItinerariesFU::IU4_5 | PPCA2ItinerariesFU::IU4_6 | PPCA2ItinerariesFU::IU4_7, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::IU5, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::IU6, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::RF0, -1, (llvm::InstrStage::ReservationKinds)0 },   { 58, PPCA2ItinerariesFU::FRF1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 58, PPCA2ItinerariesFU::FEX1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 58, PPCA2ItinerariesFU::FEX2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 58, PPCA2ItinerariesFU::FEX3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 58, PPCA2ItinerariesFU::FEX4, 0, (llvm::InstrStage::ReservationKinds)0 },   { 58, PPCA2ItinerariesFU::FEX5, 0, (llvm::InstrStage::ReservationKinds)0 },   { 58, PPCA2ItinerariesFU::FEX6, -1, (llvm::InstrStage::ReservationKinds)0 }, // 212-223
  { 4, PPCA2ItinerariesFU::IU0to3_0 | PPCA2ItinerariesFU::IU0to3_1 | PPCA2ItinerariesFU::IU0to3_2 | PPCA2ItinerariesFU::IU0to3_3, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::IU4_0 | PPCA2ItinerariesFU::IU4_1 | PPCA2ItinerariesFU::IU4_2 | PPCA2ItinerariesFU::IU4_3 | PPCA2ItinerariesFU::IU4_4 | PPCA2ItinerariesFU::IU4_5 | PPCA2ItinerariesFU::IU4_6 | PPCA2ItinerariesFU::IU4_7, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::IU5, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::IU6, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::RF0, -1, (llvm::InstrStage::ReservationKinds)0 },   { 68, PPCA2ItinerariesFU::FRF1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 68, PPCA2ItinerariesFU::FEX1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 68, PPCA2ItinerariesFU::FEX2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 68, PPCA2ItinerariesFU::FEX3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 68, PPCA2ItinerariesFU::FEX4, 0, (llvm::InstrStage::ReservationKinds)0 },   { 68, PPCA2ItinerariesFU::FEX5, 0, (llvm::InstrStage::ReservationKinds)0 },   { 68, PPCA2ItinerariesFU::FEX6, -1, (llvm::InstrStage::ReservationKinds)0 }, // 224-235
  { 4, PPCA2ItinerariesFU::IU0to3_0 | PPCA2ItinerariesFU::IU0to3_1 | PPCA2ItinerariesFU::IU0to3_2 | PPCA2ItinerariesFU::IU0to3_3, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::IU4_0 | PPCA2ItinerariesFU::IU4_1 | PPCA2ItinerariesFU::IU4_2 | PPCA2ItinerariesFU::IU4_3 | PPCA2ItinerariesFU::IU4_4 | PPCA2ItinerariesFU::IU4_5 | PPCA2ItinerariesFU::IU4_6 | PPCA2ItinerariesFU::IU4_7, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::IU5, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::IU6, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::RF0, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::XRF1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::XEX1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::XEX2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::XEX3, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::XEX4, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::XEX5, -1, (llvm::InstrStage::ReservationKinds)0 },   { 38, PPCA2ItinerariesFU::XEX6, -1, (llvm::InstrStage::ReservationKinds)0 }, // 236-247
  { 4, PPCA2ItinerariesFU::IU0to3_0 | PPCA2ItinerariesFU::IU0to3_1 | PPCA2ItinerariesFU::IU0to3_2 | PPCA2ItinerariesFU::IU0to3_3, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::IU4_0 | PPCA2ItinerariesFU::IU4_1 | PPCA2ItinerariesFU::IU4_2 | PPCA2ItinerariesFU::IU4_3 | PPCA2ItinerariesFU::IU4_4 | PPCA2ItinerariesFU::IU4_5 | PPCA2ItinerariesFU::IU4_6 | PPCA2ItinerariesFU::IU4_7, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::IU5, -1, (llvm::InstrStage::ReservationKinds)0 },   { 13, PPCA2ItinerariesFU::IU6, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::RF0, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::XRF1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::XEX1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::XEX2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::XEX3, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::XEX4, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::XEX5, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::XEX6, -1, (llvm::InstrStage::ReservationKinds)0 }, // 248-259
  { 4, PPCA2ItinerariesFU::IU0to3_0 | PPCA2ItinerariesFU::IU0to3_1 | PPCA2ItinerariesFU::IU0to3_2 | PPCA2ItinerariesFU::IU0to3_3, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::IU4_0 | PPCA2ItinerariesFU::IU4_1 | PPCA2ItinerariesFU::IU4_2 | PPCA2ItinerariesFU::IU4_3 | PPCA2ItinerariesFU::IU4_4 | PPCA2ItinerariesFU::IU4_5 | PPCA2ItinerariesFU::IU4_6 | PPCA2ItinerariesFU::IU4_7, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::IU5, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::IU6, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::RF0, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::XRF1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::XEX1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::XEX2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::XEX3, -1, (llvm::InstrStage::ReservationKinds)0 },   { 12, PPCA2ItinerariesFU::XEX4, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::XEX5, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::XEX6, -1, (llvm::InstrStage::ReservationKinds)0 }, // 260-271
  { 4, PPCA2ItinerariesFU::IU0to3_0 | PPCA2ItinerariesFU::IU0to3_1 | PPCA2ItinerariesFU::IU0to3_2 | PPCA2ItinerariesFU::IU0to3_3, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::IU4_0 | PPCA2ItinerariesFU::IU4_1 | PPCA2ItinerariesFU::IU4_2 | PPCA2ItinerariesFU::IU4_3 | PPCA2ItinerariesFU::IU4_4 | PPCA2ItinerariesFU::IU4_5 | PPCA2ItinerariesFU::IU4_6 | PPCA2ItinerariesFU::IU4_7, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::IU5, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::IU6, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::RF0, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::XRF1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::XEX1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::XEX2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::XEX3, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::XEX4, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCA2ItinerariesFU::XEX5, -1, (llvm::InstrStage::ReservationKinds)0 },   { 14, PPCA2ItinerariesFU::XEX6, -1, (llvm::InstrStage::ReservationKinds)0 }, // 272-283
  { 1, PPCE500mcItinerariesFU::DIS0 | PPCE500mcItinerariesFU::DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE500mcItinerariesFU::BU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 284-285
  { 1, PPCE500mcItinerariesFU::DIS0 | PPCE500mcItinerariesFU::DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE500mcItinerariesFU::SFX0 | PPCE500mcItinerariesFU::SFX1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 286-287
  { 1, PPCE500mcItinerariesFU::DIS0 | PPCE500mcItinerariesFU::DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 4, PPCE500mcItinerariesFU::FPU_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 288-289
  { 1, PPCE500mcItinerariesFU::DIS0 | PPCE500mcItinerariesFU::DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, PPCE500mcItinerariesFU::FPU_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 290-291
  { 1, PPCE500mcItinerariesFU::DIS0 | PPCE500mcItinerariesFU::DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 68, PPCE500mcItinerariesFU::FPU_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 292-293
  { 1, PPCE500mcItinerariesFU::DIS0 | PPCE500mcItinerariesFU::DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 38, PPCE500mcItinerariesFU::FPU_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 294-295
  { 1, PPCE500mcItinerariesFU::DIS0 | PPCE500mcItinerariesFU::DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE500mcItinerariesFU::CFX_0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 14, PPCE500mcItinerariesFU::CFX_DivBypass, -1, (llvm::InstrStage::ReservationKinds)0 }, // 296-298
  { 1, PPCE500mcItinerariesFU::DIS0 | PPCE500mcItinerariesFU::DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 8, PPCE500mcItinerariesFU::FPU_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 299-300
  { 1, PPCE500mcItinerariesFU::DIS0 | PPCE500mcItinerariesFU::DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE500mcItinerariesFU::CFX_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 301-302
  { 1, PPCE500mcItinerariesFU::DIS0 | PPCE500mcItinerariesFU::DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE500mcItinerariesFU::LSU_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 303-304
  { 1, PPCE500mcItinerariesFU::DIS0 | PPCE500mcItinerariesFU::DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE500mcItinerariesFU::SFX0 | PPCE500mcItinerariesFU::SFX1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE500mcItinerariesFU::LSU_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 305-307
  { 1, PPCE500mcItinerariesFU::DIS0 | PPCE500mcItinerariesFU::DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 3, PPCE500mcItinerariesFU::LSU_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 308-309
  { 1, PPCE500mcItinerariesFU::DIS0 | PPCE500mcItinerariesFU::DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 5, PPCE500mcItinerariesFU::SFX0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 310-311
  { 1, PPCE500mcItinerariesFU::DIS0 | PPCE500mcItinerariesFU::DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 4, PPCE500mcItinerariesFU::SFX0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 312-313
  { 1, PPCE5500ItinerariesFU::DIS0 | PPCE5500ItinerariesFU::DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE5500ItinerariesFU::BU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 314-315
  { 1, PPCE5500ItinerariesFU::DIS0 | PPCE5500ItinerariesFU::DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE5500ItinerariesFU::CFX_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 316-317
  { 1, PPCE5500ItinerariesFU::DIS0 | PPCE5500ItinerariesFU::DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE5500ItinerariesFU::FPU_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 318-319
  { 1, PPCE5500ItinerariesFU::DIS0 | PPCE5500ItinerariesFU::DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 31, PPCE5500ItinerariesFU::FPU_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 320-321
  { 1, PPCE5500ItinerariesFU::DIS0 | PPCE5500ItinerariesFU::DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 16, PPCE5500ItinerariesFU::FPU_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 322-323
  { 1, PPCE5500ItinerariesFU::DIS0 | PPCE5500ItinerariesFU::DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE5500ItinerariesFU::SFX0 | PPCE5500ItinerariesFU::SFX1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 324-325
  { 1, PPCE5500ItinerariesFU::DIS0 | PPCE5500ItinerariesFU::DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE5500ItinerariesFU::CFX_0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 26, PPCE5500ItinerariesFU::CFX_DivBypass, -1, (llvm::InstrStage::ReservationKinds)0 }, // 326-328
  { 1, PPCE5500ItinerariesFU::DIS0 | PPCE5500ItinerariesFU::DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE5500ItinerariesFU::CFX_0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 16, PPCE5500ItinerariesFU::CFX_DivBypass, -1, (llvm::InstrStage::ReservationKinds)0 }, // 329-331
  { 1, PPCE5500ItinerariesFU::DIS0 | PPCE5500ItinerariesFU::DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 7, PPCE5500ItinerariesFU::FPU_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 332-333
  { 1, PPCE5500ItinerariesFU::DIS0 | PPCE5500ItinerariesFU::DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE5500ItinerariesFU::CFX_0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, PPCE5500ItinerariesFU::CFX_1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 334-336
  { 1, PPCE5500ItinerariesFU::DIS0 | PPCE5500ItinerariesFU::DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE5500ItinerariesFU::CFX_0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE5500ItinerariesFU::CFX_1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 337-339
  { 1, PPCE5500ItinerariesFU::DIS0 | PPCE5500ItinerariesFU::DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, PPCE5500ItinerariesFU::SFX0 | PPCE5500ItinerariesFU::SFX1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 340-341
  { 1, PPCE5500ItinerariesFU::DIS0 | PPCE5500ItinerariesFU::DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE5500ItinerariesFU::LSU_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 342-343
  { 1, PPCE5500ItinerariesFU::DIS0 | PPCE5500ItinerariesFU::DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 3, PPCE5500ItinerariesFU::LSU_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 344-345
  { 1, PPCE5500ItinerariesFU::DIS0 | PPCE5500ItinerariesFU::DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE5500ItinerariesFU::SFX0 | PPCE5500ItinerariesFU::SFX1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE5500ItinerariesFU::LSU_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 346-348
  { 1, PPCE5500ItinerariesFU::DIS0 | PPCE5500ItinerariesFU::DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 5, PPCE5500ItinerariesFU::CFX_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 349-350
  { 1, PPCE5500ItinerariesFU::DIS0 | PPCE5500ItinerariesFU::DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 4, PPCE5500ItinerariesFU::CFX_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 351-352
  { 0, 0, 0, llvm::InstrStage::Required } // End stages
};
extern const unsigned PPCOperandCycles[] = {
  0, // No itinerary
  8,   4, // 1-2
  8,   4,   4, // 3-5
  8,   4,   4, // 6-8
  8,   4,   4, // 9-11
  10,   4,   4, // 12-14
  10,   4,   4, // 15-17
  35,   4,   4, // 18-20
  23,   4,   4, // 21-23
  10,   4,   4,   4, // 24-27
  10,   4,   4, // 28-30
  6,   4,   4, // 31-33
  40,   4,   4, // 34-36
  6,   4,   4, // 37-39
  7,   4,   4, // 40-42
  7,   4,   4, // 43-45
  8,   4,   4, // 46-48
  8,   4,   4, // 49-51
  8,   4,   4, // 52-54
  6,   4,   4, // 55-57
  6,   4,   4, // 58-60
  6,   4,   4, // 61-63
  8,   5, // 64-65
  9,   5,   5, // 66-68
  9,   5,   5, // 69-71
  8,   5, // 72-73
  8,   5, // 74-75
  8,   5, // 76-77
  9,   5, // 78-79
  9,   5, // 80-81
  8,   5, // 82-83
  8,   5, // 84-85
  8,   5, // 86-87
  8,   5,   5, // 88-90
  8,   5,   5, // 91-93
  8,   5, // 94-95
  8,   5, // 96-97
  8,   5, // 98-99
  8,   4, // 100-101
  10,   4, // 102-103
  10,   4, // 104-105
  10,   4, // 106-107
  15,   7,   7, // 108-110
  10,   7,   7, // 111-113
  10,   7,   7, // 114-116
  10,   7,   7, // 117-119
  15,   7,   7, // 120-122
  13,   7,   7, // 123-125
  86,   7,   7, // 126-128
  73,   7,   7, // 129-131
  15,   7,   7,   7, // 132-135
  15,   7,   7, // 136-138
  86,   7, // 139-140
  10,   7,   7, // 141-143
  53,   7,   7, // 144-146
  10,   7,   7, // 147-149
  10,   7,   7, // 150-152
  10,   7,   7, // 153-155
  14,   7,   7, // 156-158
  14,   7,   7, // 159-161
  15,   7,   7, // 162-164
  10,   7,   7, // 165-167
  10,   7,   7, // 168-170
  10,   7,   7, // 171-173
  10,   7,   7, // 174-176
  10,   7,   7, // 177-179
  13,   11, // 180-181
  14,   7, // 182-183
  14,   7,   7, // 184-186
  14,   7,   7, // 187-189
  14,   7, // 190-191
  14,   7, // 192-193
  26,   7, // 194-195
  14,   7, // 196-197
  14,   7, // 198-199
  13,   7, // 200-201
  26,   7, // 202-203
  13,   7, // 204-205
  14,   7,   7, // 206-208
  14,   7,   7, // 209-211
  26,   7, // 212-213
  13,   7, // 214-215
  13,   7, // 216-217
  10,   7, // 218-219
  15,   7, // 220-221
  29,   7, // 222-223
  15,   7, // 224-225
  4,   1, // 226-227
  4,   1,   1, // 228-230
  4,   1, // 231-232
  4,   1,   1, // 233-235
  13,   1,   1, // 236-238
  11,   1,   1, // 239-241
  71,   1,   1, // 242-244
  41,   1,   1, // 245-247
  13,   1,   1,   1, // 248-251
  11,   1,   1, // 252-254
  5,   1,   1, // 255-257
  17,   1,   1, // 258-260
  4,   1,   1, // 261-263
  11, // 264
  11,   1,   1, // 265-267
  7,   1,   1, // 268-270
  7,   1,   1, // 271-273
  7,   1,   1, // 274-276
  4,   1,   1, // 277-279
  4,   1,   1, // 280-282
  4,   1,   1, // 283-285
  6,   1, // 286-287
  7,   1,   1, // 288-290
  7,   1,   1, // 291-293
  6,   1, // 294-295
  6,   1, // 296-297
  6,   1,   1, // 298-300
  6,   1, // 301-302
  6,   1, // 303-304
  6,   1,   1, // 305-307
  6,   1,   1, // 308-310
  6,   1, // 311-312
  6,   1, // 313-314
  6,   1, // 315-316
  8,   1, // 317-318
  4,   1, // 319-320
  7,   1, // 321-322
  4,   1, // 323-324
  5,   2, // 325-326
  5,   2,   2, // 327-329
  5,   2, // 330-331
  5,   2,   2, // 332-334
  11,   2,   2, // 335-337
  11,   2,   2, // 338-340
  39,   2,   2, // 341-343
  24,   2,   2, // 344-346
  11,   2,   2,   2, // 347-350
  11,   2,   2, // 351-353
  6,   2,   2, // 354-356
  30,   2,   2, // 357-359
  20,   2,   2, // 360-362
  5,   2,   2, // 363-365
  11, // 366
  11,   2,   2, // 367-369
  9,   2,   2, // 370-372
  8,   2,   2, // 373-375
  8,   2,   2, // 376-378
  8,   2,   2, // 379-381
  5,   2,   2, // 382-384
  6,   2,   2, // 385-387
  5,   2,   2, // 388-390
  6,   2,   2, // 391-393
  5,   2,   2, // 394-396
  7,   2, // 397-398
  7,   2, // 399-400
  7,   2, // 401-402
  7,   2, // 403-404
  8,   2,   2, // 405-407
  8,   2,   2, // 408-410
  7,   2, // 411-412
  7,   2, // 413-414
  7,   2,   2, // 415-417
  7,   2, // 418-419
  7,   2, // 420-421
  7,   2, // 422-423
  7,   2, // 424-425
  7,   2, // 426-427
  7,   2,   2, // 428-430
  7,   2,   2, // 431-433
  7,   2, // 434-435
  7,   2, // 436-437
  7,   2, // 438-439
  9,   2, // 440-441
  5, // 442
  8,   2, // 443-444
  5, // 445
  0 // End operand cycles
};
extern const unsigned PPCForwardingPaths[] = {
 0, // No itinerary
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::GPR_Bypass, // 1-2
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::GPR_Bypass, PPC440ItinerariesBypass::GPR_Bypass, // 3-5
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::GPR_Bypass, PPC440ItinerariesBypass::GPR_Bypass, // 6-8
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::GPR_Bypass, PPC440ItinerariesBypass::GPR_Bypass, // 9-11
PPC440ItinerariesBypass::FPR_Bypass, PPC440ItinerariesBypass::FPR_Bypass, PPC440ItinerariesBypass::FPR_Bypass, // 12-14
PPC440ItinerariesBypass::FPR_Bypass, PPC440ItinerariesBypass::FPR_Bypass, PPC440ItinerariesBypass::FPR_Bypass, // 15-17
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::FPR_Bypass, PPC440ItinerariesBypass::FPR_Bypass, // 18-20
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::FPR_Bypass, PPC440ItinerariesBypass::FPR_Bypass, // 21-23
PPC440ItinerariesBypass::FPR_Bypass, PPC440ItinerariesBypass::FPR_Bypass, PPC440ItinerariesBypass::FPR_Bypass, PPC440ItinerariesBypass::FPR_Bypass, // 24-27
PPC440ItinerariesBypass::FPR_Bypass, PPC440ItinerariesBypass::FPR_Bypass, PPC440ItinerariesBypass::FPR_Bypass, // 28-30
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::GPR_Bypass, PPC440ItinerariesBypass::GPR_Bypass, // 31-33
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::GPR_Bypass, PPC440ItinerariesBypass::GPR_Bypass, // 34-36
PPC440ItinerariesBypass::GPR_Bypass, PPC440ItinerariesBypass::GPR_Bypass, PPC440ItinerariesBypass::GPR_Bypass, // 37-39
PPC440ItinerariesBypass::GPR_Bypass, PPC440ItinerariesBypass::GPR_Bypass, PPC440ItinerariesBypass::GPR_Bypass, // 40-42
PPC440ItinerariesBypass::GPR_Bypass, PPC440ItinerariesBypass::GPR_Bypass, PPC440ItinerariesBypass::GPR_Bypass, // 43-45
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::GPR_Bypass, PPC440ItinerariesBypass::GPR_Bypass, // 46-48
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::GPR_Bypass, PPC440ItinerariesBypass::GPR_Bypass, // 49-51
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::GPR_Bypass, PPC440ItinerariesBypass::GPR_Bypass, // 52-54
PPC440ItinerariesBypass::GPR_Bypass, PPC440ItinerariesBypass::GPR_Bypass, PPC440ItinerariesBypass::GPR_Bypass, // 55-57
PPC440ItinerariesBypass::GPR_Bypass, PPC440ItinerariesBypass::GPR_Bypass, PPC440ItinerariesBypass::GPR_Bypass, // 58-60
PPC440ItinerariesBypass::GPR_Bypass, PPC440ItinerariesBypass::GPR_Bypass, PPC440ItinerariesBypass::GPR_Bypass, // 61-63
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::GPR_Bypass, // 64-65
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::GPR_Bypass, PPC440ItinerariesBypass::GPR_Bypass, // 66-68
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::GPR_Bypass, PPC440ItinerariesBypass::GPR_Bypass, // 69-71
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::GPR_Bypass, // 72-73
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::GPR_Bypass, // 74-75
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::GPR_Bypass, // 76-77
PPC440ItinerariesBypass::GPR_Bypass, PPC440ItinerariesBypass::GPR_Bypass, // 78-79
PPC440ItinerariesBypass::GPR_Bypass, PPC440ItinerariesBypass::GPR_Bypass, // 80-81
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::GPR_Bypass, // 82-83
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::GPR_Bypass, // 84-85
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::GPR_Bypass, // 86-87
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::GPR_Bypass, PPC440ItinerariesBypass::GPR_Bypass, // 88-90
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::GPR_Bypass, PPC440ItinerariesBypass::GPR_Bypass, // 91-93
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::GPR_Bypass, // 94-95
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::GPR_Bypass, // 96-97
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::GPR_Bypass, // 98-99
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::GPR_Bypass, // 100-101
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::GPR_Bypass, // 102-103
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::GPR_Bypass, // 104-105
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::GPR_Bypass, // 106-107
PPCA2ItinerariesBypass::NoBypass, PPCA2ItinerariesBypass::GPR_Bypass,  0, // 108-110
PPCA2ItinerariesBypass::CR_Bypass, PPCA2ItinerariesBypass::CR_Bypass, PPCA2ItinerariesBypass::CR_Bypass, // 111-113
PPCA2ItinerariesBypass::CR_Bypass, PPCA2ItinerariesBypass::CR_Bypass, PPCA2ItinerariesBypass::CR_Bypass, // 114-116
PPCA2ItinerariesBypass::CR_Bypass, PPCA2ItinerariesBypass::GPR_Bypass, PPCA2ItinerariesBypass::GPR_Bypass, // 117-119
PPCA2ItinerariesBypass::FPR_Bypass, PPCA2ItinerariesBypass::FPR_Bypass, PPCA2ItinerariesBypass::FPR_Bypass, // 120-122
PPCA2ItinerariesBypass::CR_Bypass, PPCA2ItinerariesBypass::FPR_Bypass, PPCA2ItinerariesBypass::FPR_Bypass, // 123-125
PPCA2ItinerariesBypass::NoBypass, PPCA2ItinerariesBypass::FPR_Bypass, PPCA2ItinerariesBypass::FPR_Bypass, // 126-128
PPCA2ItinerariesBypass::NoBypass, PPCA2ItinerariesBypass::FPR_Bypass, PPCA2ItinerariesBypass::FPR_Bypass, // 129-131
PPCA2ItinerariesBypass::FPR_Bypass, PPCA2ItinerariesBypass::FPR_Bypass, PPCA2ItinerariesBypass::FPR_Bypass, PPCA2ItinerariesBypass::FPR_Bypass, // 132-135
PPCA2ItinerariesBypass::FPR_Bypass, PPCA2ItinerariesBypass::FPR_Bypass, PPCA2ItinerariesBypass::FPR_Bypass, // 136-138
PPCA2ItinerariesBypass::NoBypass, PPCA2ItinerariesBypass::FPR_Bypass, // 139-140
PPCA2ItinerariesBypass::CR_Bypass, PPCA2ItinerariesBypass::GPR_Bypass, PPCA2ItinerariesBypass::GPR_Bypass, // 141-143
PPCA2ItinerariesBypass::NoBypass, PPCA2ItinerariesBypass::GPR_Bypass, PPCA2ItinerariesBypass::GPR_Bypass, // 144-146
PPCA2ItinerariesBypass::GPR_Bypass, PPCA2ItinerariesBypass::GPR_Bypass, PPCA2ItinerariesBypass::GPR_Bypass, // 147-149
PPCA2ItinerariesBypass::GPR_Bypass, PPCA2ItinerariesBypass::GPR_Bypass, PPCA2ItinerariesBypass::GPR_Bypass, // 150-152
PPCA2ItinerariesBypass::GPR_Bypass, PPCA2ItinerariesBypass::GPR_Bypass, PPCA2ItinerariesBypass::GPR_Bypass, // 153-155
PPCA2ItinerariesBypass::GPR_Bypass, PPCA2ItinerariesBypass::GPR_Bypass, PPCA2ItinerariesBypass::GPR_Bypass, // 156-158
PPCA2ItinerariesBypass::GPR_Bypass, PPCA2ItinerariesBypass::GPR_Bypass, PPCA2ItinerariesBypass::GPR_Bypass, // 159-161
PPCA2ItinerariesBypass::GPR_Bypass, PPCA2ItinerariesBypass::GPR_Bypass, PPCA2ItinerariesBypass::GPR_Bypass, // 162-164
PPCA2ItinerariesBypass::GPR_Bypass, PPCA2ItinerariesBypass::GPR_Bypass, PPCA2ItinerariesBypass::GPR_Bypass, // 165-167
PPCA2ItinerariesBypass::GPR_Bypass, PPCA2ItinerariesBypass::GPR_Bypass, PPCA2ItinerariesBypass::GPR_Bypass, // 168-170
PPCA2ItinerariesBypass::GPR_Bypass, PPCA2ItinerariesBypass::GPR_Bypass, PPCA2ItinerariesBypass::GPR_Bypass, // 171-173
PPCA2ItinerariesBypass::GPR_Bypass, PPCA2ItinerariesBypass::GPR_Bypass, PPCA2ItinerariesBypass::GPR_Bypass, // 174-176
PPCA2ItinerariesBypass::GPR_Bypass, PPCA2ItinerariesBypass::GPR_Bypass, PPCA2ItinerariesBypass::GPR_Bypass, // 177-179
PPCA2ItinerariesBypass::NoBypass, PPCA2ItinerariesBypass::GPR_Bypass, // 180-181
PPCA2ItinerariesBypass::GPR_Bypass, PPCA2ItinerariesBypass::GPR_Bypass, // 182-183
PPCA2ItinerariesBypass::FPR_Bypass, PPCA2ItinerariesBypass::GPR_Bypass, PPCA2ItinerariesBypass::GPR_Bypass, // 184-186
PPCA2ItinerariesBypass::FPR_Bypass, PPCA2ItinerariesBypass::GPR_Bypass, PPCA2ItinerariesBypass::GPR_Bypass, // 187-189
PPCA2ItinerariesBypass::NoBypass, PPCA2ItinerariesBypass::GPR_Bypass, // 190-191
PPCA2ItinerariesBypass::NoBypass, PPCA2ItinerariesBypass::GPR_Bypass, // 192-193
PPCA2ItinerariesBypass::NoBypass, PPCA2ItinerariesBypass::GPR_Bypass, // 194-195
PPCA2ItinerariesBypass::GPR_Bypass, PPCA2ItinerariesBypass::GPR_Bypass, // 196-197
PPCA2ItinerariesBypass::GPR_Bypass, PPCA2ItinerariesBypass::GPR_Bypass, // 198-199
PPCA2ItinerariesBypass::GPR_Bypass, PPCA2ItinerariesBypass::GPR_Bypass, // 200-201
PPCA2ItinerariesBypass::NoBypass, PPCA2ItinerariesBypass::GPR_Bypass, // 202-203
PPCA2ItinerariesBypass::GPR_Bypass, PPCA2ItinerariesBypass::GPR_Bypass, // 204-205
PPCA2ItinerariesBypass::NoBypass, PPCA2ItinerariesBypass::FPR_Bypass, PPCA2ItinerariesBypass::FPR_Bypass, // 206-208
PPCA2ItinerariesBypass::NoBypass, PPCA2ItinerariesBypass::FPR_Bypass, PPCA2ItinerariesBypass::FPR_Bypass, // 209-211
PPCA2ItinerariesBypass::NoBypass, PPCA2ItinerariesBypass::GPR_Bypass, // 212-213
PPCA2ItinerariesBypass::GPR_Bypass, PPCA2ItinerariesBypass::GPR_Bypass, // 214-215
PPCA2ItinerariesBypass::GPR_Bypass, PPCA2ItinerariesBypass::GPR_Bypass, // 216-217
PPCA2ItinerariesBypass::GPR_Bypass, PPCA2ItinerariesBypass::CR_Bypass, // 218-219
PPCA2ItinerariesBypass::NoBypass, PPCA2ItinerariesBypass::GPR_Bypass, // 220-221
PPCA2ItinerariesBypass::NoBypass, PPCA2ItinerariesBypass::GPR_Bypass, // 222-223
PPCA2ItinerariesBypass::NoBypass, PPCA2ItinerariesBypass::GPR_Bypass, // 224-225
PPCE500mcItinerariesBypass::NoBypass, PPCE500mcItinerariesBypass::GPR_Bypass, // 226-227
PPCE500mcItinerariesBypass::CR_Bypass, PPCE500mcItinerariesBypass::CR_Bypass, PPCE500mcItinerariesBypass::CR_Bypass, // 228-230
PPCE500mcItinerariesBypass::CR_Bypass, PPCE500mcItinerariesBypass::CR_Bypass, // 231-232
PPCE500mcItinerariesBypass::CR_Bypass, PPCE500mcItinerariesBypass::GPR_Bypass,  0, // 233-235
PPCE500mcItinerariesBypass::FPR_Bypass, PPCE500mcItinerariesBypass::FPR_Bypass, PPCE500mcItinerariesBypass::FPR_Bypass, // 236-238
PPCE500mcItinerariesBypass::CR_Bypass, PPCE500mcItinerariesBypass::FPR_Bypass, PPCE500mcItinerariesBypass::FPR_Bypass, // 239-241
PPCE500mcItinerariesBypass::FPR_Bypass, PPCE500mcItinerariesBypass::FPR_Bypass, PPCE500mcItinerariesBypass::FPR_Bypass, // 242-244
PPCE500mcItinerariesBypass::FPR_Bypass, PPCE500mcItinerariesBypass::FPR_Bypass, PPCE500mcItinerariesBypass::FPR_Bypass, // 245-247
PPCE500mcItinerariesBypass::FPR_Bypass, PPCE500mcItinerariesBypass::FPR_Bypass, PPCE500mcItinerariesBypass::FPR_Bypass, PPCE500mcItinerariesBypass::FPR_Bypass, // 248-251
PPCE500mcItinerariesBypass::FPR_Bypass, PPCE500mcItinerariesBypass::FPR_Bypass, PPCE500mcItinerariesBypass::FPR_Bypass, // 252-254
PPCE500mcItinerariesBypass::CR_Bypass, PPCE500mcItinerariesBypass::GPR_Bypass, PPCE500mcItinerariesBypass::GPR_Bypass, // 255-257
PPCE500mcItinerariesBypass::GPR_Bypass, PPCE500mcItinerariesBypass::GPR_Bypass, PPCE500mcItinerariesBypass::GPR_Bypass, // 258-260
PPCE500mcItinerariesBypass::GPR_Bypass, PPCE500mcItinerariesBypass::GPR_Bypass, PPCE500mcItinerariesBypass::GPR_Bypass, // 261-263
PPCE500mcItinerariesBypass::FPR_Bypass, // 264
PPCE500mcItinerariesBypass::NoBypass, PPCE500mcItinerariesBypass::NoBypass, PPCE500mcItinerariesBypass::NoBypass, // 265-267
PPCE500mcItinerariesBypass::GPR_Bypass, PPCE500mcItinerariesBypass::GPR_Bypass, PPCE500mcItinerariesBypass::GPR_Bypass, // 268-270
PPCE500mcItinerariesBypass::GPR_Bypass, PPCE500mcItinerariesBypass::GPR_Bypass, PPCE500mcItinerariesBypass::GPR_Bypass, // 271-273
PPCE500mcItinerariesBypass::GPR_Bypass, PPCE500mcItinerariesBypass::GPR_Bypass, PPCE500mcItinerariesBypass::GPR_Bypass, // 274-276
PPCE500mcItinerariesBypass::GPR_Bypass, PPCE500mcItinerariesBypass::GPR_Bypass, PPCE500mcItinerariesBypass::GPR_Bypass, // 277-279
PPCE500mcItinerariesBypass::GPR_Bypass, PPCE500mcItinerariesBypass::GPR_Bypass, PPCE500mcItinerariesBypass::GPR_Bypass, // 280-282
PPCE500mcItinerariesBypass::GPR_Bypass, PPCE500mcItinerariesBypass::GPR_Bypass, PPCE500mcItinerariesBypass::GPR_Bypass, // 283-285
PPCE500mcItinerariesBypass::GPR_Bypass, PPCE500mcItinerariesBypass::GPR_Bypass, // 286-287
PPCE500mcItinerariesBypass::FPR_Bypass, PPCE500mcItinerariesBypass::GPR_Bypass, PPCE500mcItinerariesBypass::GPR_Bypass, // 288-290
PPCE500mcItinerariesBypass::FPR_Bypass, PPCE500mcItinerariesBypass::GPR_Bypass, PPCE500mcItinerariesBypass::GPR_Bypass, // 291-293
PPCE500mcItinerariesBypass::GPR_Bypass, PPCE500mcItinerariesBypass::GPR_Bypass, // 294-295
PPCE500mcItinerariesBypass::GPR_Bypass, PPCE500mcItinerariesBypass::GPR_Bypass, // 296-297
PPCE500mcItinerariesBypass::GPR_Bypass, PPCE500mcItinerariesBypass::GPR_Bypass, PPCE500mcItinerariesBypass::GPR_Bypass, // 298-300
PPCE500mcItinerariesBypass::GPR_Bypass, PPCE500mcItinerariesBypass::GPR_Bypass, // 301-302
PPCE500mcItinerariesBypass::GPR_Bypass, PPCE500mcItinerariesBypass::GPR_Bypass, // 303-304
PPCE500mcItinerariesBypass::GPR_Bypass, PPCE500mcItinerariesBypass::GPR_Bypass, PPCE500mcItinerariesBypass::GPR_Bypass, // 305-307
PPCE500mcItinerariesBypass::GPR_Bypass, PPCE500mcItinerariesBypass::GPR_Bypass, PPCE500mcItinerariesBypass::GPR_Bypass, // 308-310
PPCE500mcItinerariesBypass::NoBypass, PPCE500mcItinerariesBypass::GPR_Bypass, // 311-312
PPCE500mcItinerariesBypass::NoBypass, PPCE500mcItinerariesBypass::GPR_Bypass, // 313-314
PPCE500mcItinerariesBypass::NoBypass, PPCE500mcItinerariesBypass::GPR_Bypass, // 315-316
PPCE500mcItinerariesBypass::GPR_Bypass, PPCE500mcItinerariesBypass::CR_Bypass, // 317-318
PPCE500mcItinerariesBypass::GPR_Bypass, PPCE500mcItinerariesBypass::CR_Bypass, // 319-320
PPCE500mcItinerariesBypass::NoBypass, PPCE500mcItinerariesBypass::GPR_Bypass, // 321-322
PPCE500mcItinerariesBypass::CR_Bypass, PPCE500mcItinerariesBypass::GPR_Bypass, // 323-324
PPCE5500ItinerariesBypass::NoBypass, PPCE5500ItinerariesBypass::GPR_Bypass, // 325-326
PPCE5500ItinerariesBypass::CR_Bypass, PPCE5500ItinerariesBypass::CR_Bypass, PPCE5500ItinerariesBypass::CR_Bypass, // 327-329
PPCE5500ItinerariesBypass::CR_Bypass, PPCE5500ItinerariesBypass::CR_Bypass, // 330-331
PPCE5500ItinerariesBypass::CR_Bypass, PPCE5500ItinerariesBypass::GPR_Bypass,  0, // 332-334
PPCE5500ItinerariesBypass::FPR_Bypass, PPCE5500ItinerariesBypass::FPR_Bypass, PPCE5500ItinerariesBypass::FPR_Bypass, // 335-337
PPCE5500ItinerariesBypass::CR_Bypass, PPCE5500ItinerariesBypass::FPR_Bypass, PPCE5500ItinerariesBypass::FPR_Bypass, // 338-340
PPCE5500ItinerariesBypass::FPR_Bypass, PPCE5500ItinerariesBypass::FPR_Bypass, PPCE5500ItinerariesBypass::FPR_Bypass, // 341-343
PPCE5500ItinerariesBypass::FPR_Bypass, PPCE5500ItinerariesBypass::FPR_Bypass, PPCE5500ItinerariesBypass::FPR_Bypass, // 344-346
PPCE5500ItinerariesBypass::FPR_Bypass, PPCE5500ItinerariesBypass::FPR_Bypass, PPCE5500ItinerariesBypass::FPR_Bypass, PPCE5500ItinerariesBypass::FPR_Bypass, // 347-350
PPCE5500ItinerariesBypass::FPR_Bypass, PPCE5500ItinerariesBypass::FPR_Bypass, PPCE5500ItinerariesBypass::FPR_Bypass, // 351-353
PPCE5500ItinerariesBypass::CR_Bypass, PPCE5500ItinerariesBypass::GPR_Bypass, PPCE5500ItinerariesBypass::GPR_Bypass, // 354-356
PPCE5500ItinerariesBypass::GPR_Bypass, PPCE5500ItinerariesBypass::GPR_Bypass, PPCE5500ItinerariesBypass::GPR_Bypass, // 357-359
PPCE5500ItinerariesBypass::GPR_Bypass, PPCE5500ItinerariesBypass::GPR_Bypass, PPCE5500ItinerariesBypass::GPR_Bypass, // 360-362
PPCE5500ItinerariesBypass::GPR_Bypass, PPCE5500ItinerariesBypass::GPR_Bypass, PPCE5500ItinerariesBypass::GPR_Bypass, // 363-365
PPCE5500ItinerariesBypass::FPR_Bypass, // 366
PPCE5500ItinerariesBypass::NoBypass, PPCE5500ItinerariesBypass::NoBypass, PPCE5500ItinerariesBypass::NoBypass, // 367-369
PPCE5500ItinerariesBypass::GPR_Bypass, PPCE5500ItinerariesBypass::GPR_Bypass, PPCE5500ItinerariesBypass::GPR_Bypass, // 370-372
PPCE5500ItinerariesBypass::GPR_Bypass, PPCE5500ItinerariesBypass::GPR_Bypass, PPCE5500ItinerariesBypass::GPR_Bypass, // 373-375
PPCE5500ItinerariesBypass::GPR_Bypass, PPCE5500ItinerariesBypass::GPR_Bypass, PPCE5500ItinerariesBypass::GPR_Bypass, // 376-378
PPCE5500ItinerariesBypass::GPR_Bypass, PPCE5500ItinerariesBypass::GPR_Bypass, PPCE5500ItinerariesBypass::GPR_Bypass, // 379-381
PPCE5500ItinerariesBypass::GPR_Bypass, PPCE5500ItinerariesBypass::GPR_Bypass, PPCE5500ItinerariesBypass::GPR_Bypass, // 382-384
PPCE5500ItinerariesBypass::GPR_Bypass, PPCE5500ItinerariesBypass::GPR_Bypass, PPCE5500ItinerariesBypass::GPR_Bypass, // 385-387
PPCE5500ItinerariesBypass::GPR_Bypass, PPCE5500ItinerariesBypass::GPR_Bypass, PPCE5500ItinerariesBypass::GPR_Bypass, // 388-390
PPCE5500ItinerariesBypass::GPR_Bypass, PPCE5500ItinerariesBypass::GPR_Bypass, PPCE5500ItinerariesBypass::GPR_Bypass, // 391-393
PPCE5500ItinerariesBypass::GPR_Bypass, PPCE5500ItinerariesBypass::GPR_Bypass, PPCE5500ItinerariesBypass::GPR_Bypass, // 394-396
PPCE5500ItinerariesBypass::GPR_Bypass, PPCE5500ItinerariesBypass::GPR_Bypass, // 397-398
PPCE5500ItinerariesBypass::GPR_Bypass, PPCE5500ItinerariesBypass::GPR_Bypass, // 399-400
PPCE5500ItinerariesBypass::GPR_Bypass, PPCE5500ItinerariesBypass::GPR_Bypass, // 401-402
PPCE5500ItinerariesBypass::GPR_Bypass, PPCE5500ItinerariesBypass::GPR_Bypass, // 403-404
PPCE5500ItinerariesBypass::FPR_Bypass, PPCE5500ItinerariesBypass::GPR_Bypass, PPCE5500ItinerariesBypass::GPR_Bypass, // 405-407
PPCE5500ItinerariesBypass::FPR_Bypass, PPCE5500ItinerariesBypass::GPR_Bypass, PPCE5500ItinerariesBypass::GPR_Bypass, // 408-410
PPCE5500ItinerariesBypass::GPR_Bypass, PPCE5500ItinerariesBypass::GPR_Bypass, // 411-412
PPCE5500ItinerariesBypass::GPR_Bypass, PPCE5500ItinerariesBypass::GPR_Bypass, // 413-414
PPCE5500ItinerariesBypass::GPR_Bypass, PPCE5500ItinerariesBypass::GPR_Bypass, PPCE5500ItinerariesBypass::GPR_Bypass, // 415-417
PPCE5500ItinerariesBypass::GPR_Bypass, PPCE5500ItinerariesBypass::GPR_Bypass, // 418-419
PPCE5500ItinerariesBypass::GPR_Bypass, PPCE5500ItinerariesBypass::GPR_Bypass, // 420-421
PPCE5500ItinerariesBypass::NoBypass, PPCE5500ItinerariesBypass::GPR_Bypass, // 422-423
PPCE5500ItinerariesBypass::NoBypass, PPCE5500ItinerariesBypass::GPR_Bypass, // 424-425
PPCE5500ItinerariesBypass::NoBypass, PPCE5500ItinerariesBypass::GPR_Bypass, // 426-427
PPCE5500ItinerariesBypass::GPR_Bypass, PPCE5500ItinerariesBypass::GPR_Bypass, PPCE5500ItinerariesBypass::GPR_Bypass, // 428-430
PPCE5500ItinerariesBypass::GPR_Bypass, PPCE5500ItinerariesBypass::GPR_Bypass, PPCE5500ItinerariesBypass::GPR_Bypass, // 431-433
PPCE5500ItinerariesBypass::NoBypass, PPCE5500ItinerariesBypass::GPR_Bypass, // 434-435
PPCE5500ItinerariesBypass::NoBypass, PPCE5500ItinerariesBypass::GPR_Bypass, // 436-437
PPCE5500ItinerariesBypass::NoBypass, PPCE5500ItinerariesBypass::GPR_Bypass, // 438-439
PPCE5500ItinerariesBypass::GPR_Bypass, PPCE5500ItinerariesBypass::CR_Bypass, // 440-441
PPCE5500ItinerariesBypass::GPR_Bypass, // 442
PPCE5500ItinerariesBypass::NoBypass, PPCE5500ItinerariesBypass::GPR_Bypass, // 443-444
PPCE5500ItinerariesBypass::GPR_Bypass, // 445
 0 // End bypass tables
};

static const llvm::InstrItinerary *NoItineraries = 0;

static const llvm::InstrItinerary PPC440Itineraries[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoItinerary
  { 1, 1, 8, 1, 3 }, // 1 BrB
  { 1, 1, 8, 3, 6 }, // 2 BrCR
  { 1, 1, 8, 6, 9 }, // 3 BrMCR
  { 1, 1, 8, 9, 12 }, // 4 BrMCRX
  { 1, 8, 19, 12, 15 }, // 5 FPAddSub
  { 1, 8, 19, 15, 18 }, // 6 FPCompare
  { 1, 19, 30, 18, 21 }, // 7 FPDivD
  { 1, 30, 41, 21, 24 }, // 8 FPDivS
  { 1, 8, 19, 24, 28 }, // 9 FPFused
  { 1, 8, 19, 28, 31 }, // 10 FPGeneral
  { 0, 0, 0, 0, 0 }, // 11 FPSqrt
  { 1, 41, 48, 31, 34 }, // 12 IntCompare
  { 0, 0, 0, 0, 0 }, // 13 IntDivD
  { 1, 48, 55, 34, 37 }, // 14 IntDivW
  { 1, 41, 48, 37, 40 }, // 15 IntGeneral
  { 1, 1, 8, 40, 43 }, // 16 IntMFFS
  { 1, 1, 8, 43, 46 }, // 17 IntMTFSB0
  { 0, 0, 0, 0, 0 }, // 18 IntMulHD
  { 1, 1, 8, 46, 49 }, // 19 IntMulHW
  { 1, 1, 8, 49, 52 }, // 20 IntMulHWU
  { 1, 1, 8, 52, 55 }, // 21 IntMulLI
  { 1, 41, 48, 55, 58 }, // 22 IntRotate
  { 0, 0, 0, 0, 0 }, // 23 IntRotateD
  { 0, 0, 0, 0, 0 }, // 24 IntRotateDI
  { 1, 41, 48, 58, 61 }, // 25 IntShift
  { 1, 41, 48, 61, 64 }, // 26 IntSimple
  { 1, 55, 62, 64, 66 }, // 27 LdStDCBF
  { 0, 0, 0, 0, 0 }, // 28 LdStLD
  { 0, 0, 0, 0, 0 }, // 29 LdStLDARX
  { 0, 0, 0, 0, 0 }, // 30 LdStLDU
  { 1, 62, 69, 66, 69 }, // 31 LdStLFD
  { 1, 55, 62, 69, 72 }, // 32 LdStLFDU
  { 1, 55, 62, 72, 74 }, // 33 LdStLHA
  { 1, 55, 62, 74, 76 }, // 34 LdStLHAU
  { 0, 0, 0, 0, 0 }, // 35 LdStLWA
  { 1, 69, 78, 76, 78 }, // 36 LdStLWARX
  { 1, 62, 69, 78, 80 }, // 37 LdStLoad
  { 1, 62, 69, 80, 82 }, // 38 LdStLoadUpd
  { 1, 62, 69, 82, 84 }, // 39 LdStSTD
  { 1, 69, 78, 84, 86 }, // 40 LdStSTDCX
  { 1, 62, 69, 86, 88 }, // 41 LdStSTDU
  { 1, 55, 62, 88, 91 }, // 42 LdStSTFD
  { 1, 55, 62, 91, 94 }, // 43 LdStSTFDU
  { 1, 69, 78, 94, 96 }, // 44 LdStSTWCX
  { 1, 62, 69, 96, 98 }, // 45 LdStStore
  { 1, 62, 69, 98, 100 }, // 46 LdStStoreUpd
  { 1, 78, 85, 0, 0 }, // 47 LdStSync
  { 1, 1, 8, 100, 102 }, // 48 SprMFCR
  { 1, 85, 92, 102, 104 }, // 49 SprMFSPR
  { 1, 85, 92, 104, 106 }, // 50 SprMFTB
  { 1, 85, 92, 106, 108 }, // 51 SprMTSPR
  { 0, 0, 0, 0, 0 }, // 52 VecFP
  { 0, 0, 0, 0, 0 }, // 53 VecFPCompare
  { 0, 0, 0, 0, 0 }, // 54 VecGeneral
  { 0, 0, 0, 0, 0 }, // 55 VecPerm
  { 0, ~0U, ~0U, ~0U, ~0U } // end marker
};

static const llvm::InstrItinerary G3Itineraries[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoItinerary
  { 1, 92, 93, 0, 0 }, // 1 BrB
  { 1, 93, 94, 0, 0 }, // 2 BrCR
  { 1, 93, 94, 0, 0 }, // 3 BrMCR
  { 1, 93, 94, 0, 0 }, // 4 BrMCRX
  { 1, 94, 95, 0, 0 }, // 5 FPAddSub
  { 1, 94, 95, 0, 0 }, // 6 FPCompare
  { 1, 95, 96, 0, 0 }, // 7 FPDivD
  { 1, 96, 97, 0, 0 }, // 8 FPDivS
  { 1, 97, 98, 0, 0 }, // 9 FPFused
  { 1, 94, 95, 0, 0 }, // 10 FPGeneral
  { 0, 0, 0, 0, 0 }, // 11 FPSqrt
  { 1, 98, 99, 0, 0 }, // 12 IntCompare
  { 0, 0, 0, 0, 0 }, // 13 IntDivD
  { 1, 99, 100, 0, 0 }, // 14 IntDivW
  { 1, 98, 99, 0, 0 }, // 15 IntGeneral
  { 1, 94, 95, 0, 0 }, // 16 IntMFFS
  { 1, 100, 101, 0, 0 }, // 17 IntMTFSB0
  { 0, 0, 0, 0, 0 }, // 18 IntMulHD
  { 1, 101, 102, 0, 0 }, // 19 IntMulHW
  { 1, 102, 103, 0, 0 }, // 20 IntMulHWU
  { 1, 103, 104, 0, 0 }, // 21 IntMulLI
  { 1, 98, 99, 0, 0 }, // 22 IntRotate
  { 0, 0, 0, 0, 0 }, // 23 IntRotateD
  { 0, 0, 0, 0, 0 }, // 24 IntRotateDI
  { 1, 98, 99, 0, 0 }, // 25 IntShift
  { 1, 98, 99, 0, 0 }, // 26 IntSimple
  { 1, 104, 105, 0, 0 }, // 27 LdStDCBF
  { 0, 0, 0, 0, 0 }, // 28 LdStLD
  { 0, 0, 0, 0, 0 }, // 29 LdStLDARX
  { 0, 0, 0, 0, 0 }, // 30 LdStLDU
  { 1, 105, 106, 0, 0 }, // 31 LdStLFD
  { 1, 105, 106, 0, 0 }, // 32 LdStLFDU
  { 1, 105, 106, 0, 0 }, // 33 LdStLHA
  { 1, 105, 106, 0, 0 }, // 34 LdStLHAU
  { 0, 0, 0, 0, 0 }, // 35 LdStLWA
  { 1, 104, 105, 0, 0 }, // 36 LdStLWARX
  { 1, 105, 106, 0, 0 }, // 37 LdStLoad
  { 1, 105, 106, 0, 0 }, // 38 LdStLoadUpd
  { 0, 0, 0, 0, 0 }, // 39 LdStSTD
  { 0, 0, 0, 0, 0 }, // 40 LdStSTDCX
  { 0, 0, 0, 0, 0 }, // 41 LdStSTDU
  { 1, 105, 106, 0, 0 }, // 42 LdStSTFD
  { 1, 105, 106, 0, 0 }, // 43 LdStSTFDU
  { 1, 106, 107, 0, 0 }, // 44 LdStSTWCX
  { 1, 105, 106, 0, 0 }, // 45 LdStStore
  { 1, 105, 106, 0, 0 }, // 46 LdStStoreUpd
  { 1, 104, 105, 0, 0 }, // 47 LdStSync
  { 1, 93, 94, 0, 0 }, // 48 SprMFCR
  { 1, 107, 108, 0, 0 }, // 49 SprMFSPR
  { 1, 107, 108, 0, 0 }, // 50 SprMFTB
  { 1, 108, 109, 0, 0 }, // 51 SprMTSPR
  { 0, 0, 0, 0, 0 }, // 52 VecFP
  { 0, 0, 0, 0, 0 }, // 53 VecFPCompare
  { 0, 0, 0, 0, 0 }, // 54 VecGeneral
  { 0, 0, 0, 0, 0 }, // 55 VecPerm
  { 0, ~0U, ~0U, ~0U, ~0U } // end marker
};

static const llvm::InstrItinerary G4Itineraries[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoItinerary
  { 1, 109, 110, 0, 0 }, // 1 BrB
  { 1, 110, 111, 0, 0 }, // 2 BrCR
  { 1, 110, 111, 0, 0 }, // 3 BrMCR
  { 1, 110, 111, 0, 0 }, // 4 BrMCRX
  { 1, 111, 112, 0, 0 }, // 5 FPAddSub
  { 1, 111, 112, 0, 0 }, // 6 FPCompare
  { 1, 112, 113, 0, 0 }, // 7 FPDivD
  { 1, 113, 114, 0, 0 }, // 8 FPDivS
  { 1, 111, 112, 0, 0 }, // 9 FPFused
  { 1, 111, 112, 0, 0 }, // 10 FPGeneral
  { 0, 0, 0, 0, 0 }, // 11 FPSqrt
  { 1, 114, 115, 0, 0 }, // 12 IntCompare
  { 0, 0, 0, 0, 0 }, // 13 IntDivD
  { 1, 115, 116, 0, 0 }, // 14 IntDivW
  { 1, 114, 115, 0, 0 }, // 15 IntGeneral
  { 1, 116, 117, 0, 0 }, // 16 IntMFFS
  { 1, 116, 117, 0, 0 }, // 17 IntMTFSB0
  { 0, 0, 0, 0, 0 }, // 18 IntMulHD
  { 1, 117, 118, 0, 0 }, // 19 IntMulHW
  { 1, 118, 119, 0, 0 }, // 20 IntMulHWU
  { 1, 119, 120, 0, 0 }, // 21 IntMulLI
  { 1, 114, 115, 0, 0 }, // 22 IntRotate
  { 0, 0, 0, 0, 0 }, // 23 IntRotateD
  { 0, 0, 0, 0, 0 }, // 24 IntRotateDI
  { 1, 114, 115, 0, 0 }, // 25 IntShift
  { 1, 114, 115, 0, 0 }, // 26 IntSimple
  { 1, 120, 121, 0, 0 }, // 27 LdStDCBF
  { 0, 0, 0, 0, 0 }, // 28 LdStLD
  { 0, 0, 0, 0, 0 }, // 29 LdStLDARX
  { 0, 0, 0, 0, 0 }, // 30 LdStLDU
  { 1, 120, 121, 0, 0 }, // 31 LdStLFD
  { 1, 120, 121, 0, 0 }, // 32 LdStLFDU
  { 1, 120, 121, 0, 0 }, // 33 LdStLHA
  { 1, 120, 121, 0, 0 }, // 34 LdStLHAU
  { 0, 0, 0, 0, 0 }, // 35 LdStLWA
  { 1, 121, 122, 0, 0 }, // 36 LdStLWARX
  { 1, 120, 121, 0, 0 }, // 37 LdStLoad
  { 1, 120, 121, 0, 0 }, // 38 LdStLoadUpd
  { 0, 0, 0, 0, 0 }, // 39 LdStSTD
  { 0, 0, 0, 0, 0 }, // 40 LdStSTDCX
  { 0, 0, 0, 0, 0 }, // 41 LdStSTDU
  { 1, 120, 121, 0, 0 }, // 42 LdStSTFD
  { 1, 120, 121, 0, 0 }, // 43 LdStSTFDU
  { 1, 122, 123, 0, 0 }, // 44 LdStSTWCX
  { 1, 120, 121, 0, 0 }, // 45 LdStStore
  { 1, 120, 121, 0, 0 }, // 46 LdStStoreUpd
  { 1, 123, 124, 0, 0 }, // 47 LdStSync
  { 1, 110, 111, 0, 0 }, // 48 SprMFCR
  { 1, 124, 125, 0, 0 }, // 49 SprMFSPR
  { 1, 110, 111, 0, 0 }, // 50 SprMFTB
  { 1, 125, 126, 0, 0 }, // 51 SprMTSPR
  { 1, 126, 127, 0, 0 }, // 52 VecFP
  { 1, 127, 128, 0, 0 }, // 53 VecFPCompare
  { 1, 127, 128, 0, 0 }, // 54 VecGeneral
  { 1, 128, 129, 0, 0 }, // 55 VecPerm
  { 0, ~0U, ~0U, ~0U, ~0U } // end marker
};

static const llvm::InstrItinerary G4PlusItineraries[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoItinerary
  { 1, 129, 130, 0, 0 }, // 1 BrB
  { 1, 130, 131, 0, 0 }, // 2 BrCR
  { 1, 130, 131, 0, 0 }, // 3 BrMCR
  { 1, 130, 131, 0, 0 }, // 4 BrMCRX
  { 1, 131, 132, 0, 0 }, // 5 FPAddSub
  { 1, 131, 132, 0, 0 }, // 6 FPCompare
  { 1, 132, 133, 0, 0 }, // 7 FPDivD
  { 1, 133, 134, 0, 0 }, // 8 FPDivS
  { 1, 131, 132, 0, 0 }, // 9 FPFused
  { 1, 131, 132, 0, 0 }, // 10 FPGeneral
  { 0, 0, 0, 0, 0 }, // 11 FPSqrt
  { 1, 134, 135, 0, 0 }, // 12 IntCompare
  { 0, 0, 0, 0, 0 }, // 13 IntDivD
  { 1, 135, 136, 0, 0 }, // 14 IntDivW
  { 1, 134, 135, 0, 0 }, // 15 IntGeneral
  { 1, 131, 132, 0, 0 }, // 16 IntMFFS
  { 1, 131, 132, 0, 0 }, // 17 IntMTFSB0
  { 0, 0, 0, 0, 0 }, // 18 IntMulHD
  { 1, 136, 137, 0, 0 }, // 19 IntMulHW
  { 1, 136, 137, 0, 0 }, // 20 IntMulHWU
  { 1, 137, 138, 0, 0 }, // 21 IntMulLI
  { 1, 134, 135, 0, 0 }, // 22 IntRotate
  { 0, 0, 0, 0, 0 }, // 23 IntRotateD
  { 0, 0, 0, 0, 0 }, // 24 IntRotateDI
  { 1, 138, 139, 0, 0 }, // 25 IntShift
  { 1, 134, 135, 0, 0 }, // 26 IntSimple
  { 1, 139, 140, 0, 0 }, // 27 LdStDCBF
  { 0, 0, 0, 0, 0 }, // 28 LdStLD
  { 0, 0, 0, 0, 0 }, // 29 LdStLDARX
  { 0, 0, 0, 0, 0 }, // 30 LdStLDU
  { 1, 140, 141, 0, 0 }, // 31 LdStLFD
  { 1, 140, 141, 0, 0 }, // 32 LdStLFDU
  { 1, 139, 140, 0, 0 }, // 33 LdStLHA
  { 1, 139, 140, 0, 0 }, // 34 LdStLHAU
  { 1, 139, 140, 0, 0 }, // 35 LdStLWA
  { 1, 139, 140, 0, 0 }, // 36 LdStLWARX
  { 1, 139, 140, 0, 0 }, // 37 LdStLoad
  { 1, 139, 140, 0, 0 }, // 38 LdStLoadUpd
  { 1, 139, 140, 0, 0 }, // 39 LdStSTD
  { 1, 139, 140, 0, 0 }, // 40 LdStSTDCX
  { 1, 139, 140, 0, 0 }, // 41 LdStSTDU
  { 1, 139, 140, 0, 0 }, // 42 LdStSTFD
  { 1, 139, 140, 0, 0 }, // 43 LdStSTFDU
  { 1, 139, 140, 0, 0 }, // 44 LdStSTWCX
  { 1, 139, 140, 0, 0 }, // 45 LdStStore
  { 1, 139, 140, 0, 0 }, // 46 LdStStoreUpd
  { 1, 141, 142, 0, 0 }, // 47 LdStSync
  { 1, 130, 131, 0, 0 }, // 48 SprMFCR
  { 1, 136, 137, 0, 0 }, // 49 SprMFSPR
  { 1, 142, 143, 0, 0 }, // 50 SprMFTB
  { 1, 130, 131, 0, 0 }, // 51 SprMTSPR
  { 1, 143, 144, 0, 0 }, // 52 VecFP
  { 1, 144, 145, 0, 0 }, // 53 VecFPCompare
  { 1, 145, 146, 0, 0 }, // 54 VecGeneral
  { 1, 146, 147, 0, 0 }, // 55 VecPerm
  { 0, ~0U, ~0U, ~0U, ~0U } // end marker
};

static const llvm::InstrItinerary G5Itineraries[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoItinerary
  { 1, 147, 148, 0, 0 }, // 1 BrB
  { 1, 148, 149, 0, 0 }, // 2 BrCR
  { 1, 149, 150, 0, 0 }, // 3 BrMCR
  { 1, 150, 151, 0, 0 }, // 4 BrMCRX
  { 1, 151, 152, 0, 0 }, // 5 FPAddSub
  { 1, 152, 153, 0, 0 }, // 6 FPCompare
  { 1, 153, 154, 0, 0 }, // 7 FPDivD
  { 1, 153, 154, 0, 0 }, // 8 FPDivS
  { 1, 151, 152, 0, 0 }, // 9 FPFused
  { 1, 151, 152, 0, 0 }, // 10 FPGeneral
  { 1, 154, 155, 0, 0 }, // 11 FPSqrt
  { 1, 155, 156, 0, 0 }, // 12 IntCompare
  { 1, 156, 157, 0, 0 }, // 13 IntDivD
  { 1, 157, 158, 0, 0 }, // 14 IntDivW
  { 1, 158, 159, 0, 0 }, // 15 IntGeneral
  { 1, 159, 160, 0, 0 }, // 16 IntMFFS
  { 1, 151, 152, 0, 0 }, // 17 IntMTFSB0
  { 1, 160, 161, 0, 0 }, // 18 IntMulHD
  { 1, 161, 162, 0, 0 }, // 19 IntMulHW
  { 1, 161, 162, 0, 0 }, // 20 IntMulHWU
  { 1, 162, 163, 0, 0 }, // 21 IntMulLI
  { 1, 162, 163, 0, 0 }, // 22 IntRotate
  { 1, 158, 159, 0, 0 }, // 23 IntRotateD
  { 1, 158, 159, 0, 0 }, // 24 IntRotateDI
  { 1, 158, 159, 0, 0 }, // 25 IntShift
  { 1, 158, 159, 0, 0 }, // 26 IntSimple
  { 1, 163, 164, 0, 0 }, // 27 LdStDCBF
  { 1, 163, 164, 0, 0 }, // 28 LdStLD
  { 1, 164, 165, 0, 0 }, // 29 LdStLDARX
  { 1, 163, 164, 0, 0 }, // 30 LdStLDU
  { 1, 163, 164, 0, 0 }, // 31 LdStLFD
  { 1, 165, 166, 0, 0 }, // 32 LdStLFDU
  { 1, 165, 166, 0, 0 }, // 33 LdStLHA
  { 1, 165, 166, 0, 0 }, // 34 LdStLHAU
  { 1, 165, 166, 0, 0 }, // 35 LdStLWA
  { 1, 164, 165, 0, 0 }, // 36 LdStLWARX
  { 1, 163, 164, 0, 0 }, // 37 LdStLoad
  { 1, 163, 164, 0, 0 }, // 38 LdStLoadUpd
  { 1, 163, 164, 0, 0 }, // 39 LdStSTD
  { 1, 164, 165, 0, 0 }, // 40 LdStSTDCX
  { 1, 163, 164, 0, 0 }, // 41 LdStSTDU
  { 1, 166, 167, 0, 0 }, // 42 LdStSTFD
  { 1, 166, 167, 0, 0 }, // 43 LdStSTFDU
  { 1, 164, 165, 0, 0 }, // 44 LdStSTWCX
  { 1, 163, 164, 0, 0 }, // 45 LdStStore
  { 1, 163, 164, 0, 0 }, // 46 LdStStoreUpd
  { 1, 167, 168, 0, 0 }, // 47 LdStSync
  { 1, 168, 169, 0, 0 }, // 48 SprMFCR
  { 1, 169, 170, 0, 0 }, // 49 SprMFSPR
  { 1, 170, 171, 0, 0 }, // 50 SprMFTB
  { 1, 171, 172, 0, 0 }, // 51 SprMTSPR
  { 1, 172, 173, 0, 0 }, // 52 VecFP
  { 1, 173, 174, 0, 0 }, // 53 VecFPCompare
  { 1, 174, 175, 0, 0 }, // 54 VecGeneral
  { 1, 175, 176, 0, 0 }, // 55 VecPerm
  { 0, ~0U, ~0U, ~0U, ~0U } // end marker
};

static const llvm::InstrItinerary PPCA2Itineraries[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoItinerary
  { 1, 176, 188, 108, 111 }, // 1 BrB
  { 1, 176, 188, 111, 114 }, // 2 BrCR
  { 1, 176, 188, 114, 117 }, // 3 BrMCR
  { 1, 176, 188, 117, 120 }, // 4 BrMCRX
  { 1, 188, 200, 120, 123 }, // 5 FPAddSub
  { 1, 188, 200, 123, 126 }, // 6 FPCompare
  { 1, 200, 212, 126, 129 }, // 7 FPDivD
  { 1, 212, 224, 129, 132 }, // 8 FPDivS
  { 1, 188, 200, 132, 136 }, // 9 FPFused
  { 1, 188, 200, 136, 139 }, // 10 FPGeneral
  { 1, 224, 236, 139, 141 }, // 11 FPSqrt
  { 1, 176, 188, 141, 144 }, // 12 IntCompare
  { 0, 0, 0, 0, 0 }, // 13 IntDivD
  { 1, 236, 248, 144, 147 }, // 14 IntDivW
  { 1, 176, 188, 147, 150 }, // 15 IntGeneral
  { 1, 176, 188, 150, 153 }, // 16 IntMFFS
  { 1, 176, 188, 153, 156 }, // 17 IntMTFSB0
  { 0, 0, 0, 0, 0 }, // 18 IntMulHD
  { 1, 176, 188, 156, 159 }, // 19 IntMulHW
  { 1, 176, 188, 159, 162 }, // 20 IntMulHWU
  { 1, 176, 188, 162, 165 }, // 21 IntMulLI
  { 1, 176, 188, 165, 168 }, // 22 IntRotate
  { 1, 176, 188, 168, 171 }, // 23 IntRotateD
  { 1, 176, 188, 171, 174 }, // 24 IntRotateDI
  { 1, 176, 188, 174, 177 }, // 25 IntShift
  { 1, 176, 188, 177, 180 }, // 26 IntSimple
  { 1, 176, 188, 180, 182 }, // 27 LdStDCBF
  { 0, 0, 0, 0, 0 }, // 28 LdStLD
  { 0, 0, 0, 0, 0 }, // 29 LdStLDARX
  { 1, 176, 188, 182, 184 }, // 30 LdStLDU
  { 1, 176, 188, 184, 187 }, // 31 LdStLFD
  { 1, 176, 188, 187, 190 }, // 32 LdStLFDU
  { 1, 176, 188, 190, 192 }, // 33 LdStLHA
  { 1, 176, 188, 192, 194 }, // 34 LdStLHAU
  { 0, 0, 0, 0, 0 }, // 35 LdStLWA
  { 1, 248, 260, 194, 196 }, // 36 LdStLWARX
  { 1, 176, 188, 196, 198 }, // 37 LdStLoad
  { 1, 176, 188, 198, 200 }, // 38 LdStLoadUpd
  { 1, 176, 188, 200, 202 }, // 39 LdStSTD
  { 1, 248, 260, 202, 204 }, // 40 LdStSTDCX
  { 1, 176, 188, 204, 206 }, // 41 LdStSTDU
  { 1, 176, 188, 206, 209 }, // 42 LdStSTFD
  { 1, 176, 188, 209, 212 }, // 43 LdStSTFDU
  { 1, 248, 260, 212, 214 }, // 44 LdStSTWCX
  { 1, 176, 188, 214, 216 }, // 45 LdStStore
  { 1, 176, 188, 216, 218 }, // 46 LdStStoreUpd
  { 1, 260, 272, 0, 0 }, // 47 LdStSync
  { 1, 176, 188, 218, 220 }, // 48 SprMFCR
  { 1, 176, 188, 220, 222 }, // 49 SprMFSPR
  { 1, 272, 284, 222, 224 }, // 50 SprMFTB
  { 1, 176, 188, 224, 226 }, // 51 SprMTSPR
  { 0, 0, 0, 0, 0 }, // 52 VecFP
  { 0, 0, 0, 0, 0 }, // 53 VecFPCompare
  { 0, 0, 0, 0, 0 }, // 54 VecGeneral
  { 0, 0, 0, 0, 0 }, // 55 VecPerm
  { 0, ~0U, ~0U, ~0U, ~0U } // end marker
};

static const llvm::InstrItinerary PPCE500mcItineraries[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoItinerary
  { 1, 284, 286, 226, 228 }, // 1 BrB
  { 1, 284, 286, 228, 231 }, // 2 BrCR
  { 1, 284, 286, 231, 233 }, // 3 BrMCR
  { 1, 286, 288, 233, 236 }, // 4 BrMCRX
  { 1, 288, 290, 236, 239 }, // 5 FPAddSub
  { 1, 290, 292, 239, 242 }, // 6 FPCompare
  { 1, 292, 294, 242, 245 }, // 7 FPDivD
  { 1, 294, 296, 245, 248 }, // 8 FPDivS
  { 1, 288, 290, 248, 252 }, // 9 FPFused
  { 1, 290, 292, 252, 255 }, // 10 FPGeneral
  { 0, 0, 0, 0, 0 }, // 11 FPSqrt
  { 1, 286, 288, 255, 258 }, // 12 IntCompare
  { 0, 0, 0, 0, 0 }, // 13 IntDivD
  { 1, 296, 299, 258, 261 }, // 14 IntDivW
  { 1, 286, 288, 261, 264 }, // 15 IntGeneral
  { 1, 299, 301, 264, 265 }, // 16 IntMFFS
  { 1, 299, 301, 265, 268 }, // 17 IntMTFSB0
  { 0, 0, 0, 0, 0 }, // 18 IntMulHD
  { 1, 301, 303, 268, 271 }, // 19 IntMulHW
  { 1, 301, 303, 271, 274 }, // 20 IntMulHWU
  { 1, 301, 303, 274, 277 }, // 21 IntMulLI
  { 1, 286, 288, 277, 280 }, // 22 IntRotate
  { 0, 0, 0, 0, 0 }, // 23 IntRotateD
  { 0, 0, 0, 0, 0 }, // 24 IntRotateDI
  { 1, 286, 288, 280, 283 }, // 25 IntShift
  { 1, 286, 288, 283, 286 }, // 26 IntSimple
  { 1, 303, 305, 286, 288 }, // 27 LdStDCBF
  { 0, 0, 0, 0, 0 }, // 28 LdStLD
  { 0, 0, 0, 0, 0 }, // 29 LdStLDARX
  { 0, 0, 0, 0, 0 }, // 30 LdStLDU
  { 1, 303, 305, 288, 291 }, // 31 LdStLFD
  { 2, 305, 308, 291, 294 }, // 32 LdStLFDU
  { 1, 303, 305, 294, 296 }, // 33 LdStLHA
  { 1, 305, 308, 296, 298 }, // 34 LdStLHAU
  { 0, 0, 0, 0, 0 }, // 35 LdStLWA
  { 1, 308, 310, 298, 301 }, // 36 LdStLWARX
  { 1, 303, 305, 301, 303 }, // 37 LdStLoad
  { 2, 305, 308, 303, 305 }, // 38 LdStLoadUpd
  { 0, 0, 0, 0, 0 }, // 39 LdStSTD
  { 0, 0, 0, 0, 0 }, // 40 LdStSTDCX
  { 0, 0, 0, 0, 0 }, // 41 LdStSTDU
  { 1, 303, 305, 305, 308 }, // 42 LdStSTFD
  { 2, 305, 308, 308, 311 }, // 43 LdStSTFDU
  { 1, 303, 305, 311, 313 }, // 44 LdStSTWCX
  { 1, 303, 305, 313, 315 }, // 45 LdStStore
  { 2, 305, 308, 315, 317 }, // 46 LdStStoreUpd
  { 1, 303, 305, 0, 0 }, // 47 LdStSync
  { 1, 310, 312, 317, 319 }, // 48 SprMFCR
  { 1, 286, 288, 319, 321 }, // 49 SprMFSPR
  { 1, 312, 314, 321, 323 }, // 50 SprMFTB
  { 1, 286, 288, 323, 325 }, // 51 SprMTSPR
  { 0, 0, 0, 0, 0 }, // 52 VecFP
  { 0, 0, 0, 0, 0 }, // 53 VecFPCompare
  { 0, 0, 0, 0, 0 }, // 54 VecGeneral
  { 0, 0, 0, 0, 0 }, // 55 VecPerm
  { 0, ~0U, ~0U, ~0U, ~0U } // end marker
};

static const llvm::InstrItinerary PPCE5500Itineraries[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoItinerary
  { 1, 314, 316, 325, 327 }, // 1 BrB
  { 1, 314, 316, 327, 330 }, // 2 BrCR
  { 1, 314, 316, 330, 332 }, // 3 BrMCR
  { 1, 316, 318, 332, 335 }, // 4 BrMCRX
  { 1, 318, 320, 335, 338 }, // 5 FPAddSub
  { 1, 318, 320, 338, 341 }, // 6 FPCompare
  { 1, 320, 322, 341, 344 }, // 7 FPDivD
  { 1, 322, 324, 344, 347 }, // 8 FPDivS
  { 1, 318, 320, 347, 351 }, // 9 FPFused
  { 1, 318, 320, 351, 354 }, // 10 FPGeneral
  { 0, 0, 0, 0, 0 }, // 11 FPSqrt
  { 1, 324, 326, 354, 357 }, // 12 IntCompare
  { 1, 326, 329, 357, 360 }, // 13 IntDivD
  { 1, 329, 332, 360, 363 }, // 14 IntDivW
  { 1, 324, 326, 363, 366 }, // 15 IntGeneral
  { 1, 318, 320, 366, 367 }, // 16 IntMFFS
  { 1, 332, 334, 367, 370 }, // 17 IntMTFSB0
  { 1, 334, 337, 370, 373 }, // 18 IntMulHD
  { 1, 337, 340, 373, 376 }, // 19 IntMulHW
  { 1, 337, 340, 376, 379 }, // 20 IntMulHWU
  { 1, 334, 337, 379, 382 }, // 21 IntMulLI
  { 1, 324, 326, 382, 385 }, // 22 IntRotate
  { 1, 340, 342, 385, 388 }, // 23 IntRotateD
  { 1, 324, 326, 388, 391 }, // 24 IntRotateDI
  { 1, 340, 342, 391, 394 }, // 25 IntShift
  { 1, 324, 326, 394, 397 }, // 26 IntSimple
  { 1, 342, 344, 397, 399 }, // 27 LdStDCBF
  { 1, 342, 344, 399, 401 }, // 28 LdStLD
  { 1, 344, 346, 401, 403 }, // 29 LdStLDARX
  { 2, 346, 349, 403, 405 }, // 30 LdStLDU
  { 2, 342, 344, 405, 408 }, // 31 LdStLFD
  { 2, 346, 349, 408, 411 }, // 32 LdStLFDU
  { 1, 342, 344, 411, 413 }, // 33 LdStLHA
  { 2, 346, 349, 413, 415 }, // 34 LdStLHAU
  { 0, 0, 0, 0, 0 }, // 35 LdStLWA
  { 1, 344, 346, 415, 418 }, // 36 LdStLWARX
  { 1, 342, 344, 418, 420 }, // 37 LdStLoad
  { 2, 346, 349, 420, 422 }, // 38 LdStLoadUpd
  { 1, 342, 344, 422, 424 }, // 39 LdStSTD
  { 1, 342, 344, 424, 426 }, // 40 LdStSTDCX
  { 2, 346, 349, 426, 428 }, // 41 LdStSTDU
  { 1, 342, 344, 428, 431 }, // 42 LdStSTFD
  { 2, 346, 349, 431, 434 }, // 43 LdStSTFDU
  { 1, 342, 344, 434, 436 }, // 44 LdStSTWCX
  { 1, 342, 344, 436, 438 }, // 45 LdStStore
  { 2, 346, 349, 438, 440 }, // 46 LdStStoreUpd
  { 1, 342, 344, 0, 0 }, // 47 LdStSync
  { 1, 349, 351, 440, 442 }, // 48 SprMFCR
  { 1, 316, 318, 442, 443 }, // 49 SprMFSPR
  { 1, 351, 353, 443, 445 }, // 50 SprMFTB
  { 1, 324, 326, 445, 446 }, // 51 SprMTSPR
  { 0, 0, 0, 0, 0 }, // 52 VecFP
  { 0, 0, 0, 0, 0 }, // 53 VecFPCompare
  { 0, 0, 0, 0, 0 }, // 54 VecGeneral
  { 0, 0, 0, 0, 0 }, // 55 VecPerm
  { 0, ~0U, ~0U, ~0U, ~0U } // end marker
};

// ===============================================================
// Data tables for the new per-operand machine model.

// {ProcResourceIdx, Cycles}
extern const llvm::MCWriteProcResEntry PPCWriteProcResTable[] = {
  { 0,  0}, // Invalid
}; // PPCWriteProcResTable

// {Cycles, WriteResourceID}
extern const llvm::MCWriteLatencyEntry PPCWriteLatencyTable[] = {
  { 0,  0}, // Invalid
}; // PPCWriteLatencyTable

// {UseIdx, WriteResourceID, Cycles}
extern const llvm::MCReadAdvanceEntry PPCReadAdvanceTable[] = {
  {0,  0,  0}, // Invalid
}; // PPCReadAdvanceTable

static const llvm::MCSchedModel NoSchedModel(
  MCSchedModel::DefaultIssueWidth,
  MCSchedModel::DefaultMinLatency,
  MCSchedModel::DefaultLoadLatency,
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultMispredictPenalty,
  0, // Processor ID
  0, 0, 0, 0, // No instruction-level machine model.
  NoItineraries);

static const llvm::MCSchedModel PPC440ItinerariesModel(
  MCSchedModel::DefaultIssueWidth,
  MCSchedModel::DefaultMinLatency,
  MCSchedModel::DefaultLoadLatency,
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultMispredictPenalty,
  1, // Processor ID
  0, 0, 0, 0, // No instruction-level machine model.
  PPC440Itineraries);

static const llvm::MCSchedModel G3ItinerariesModel(
  MCSchedModel::DefaultIssueWidth,
  MCSchedModel::DefaultMinLatency,
  MCSchedModel::DefaultLoadLatency,
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultMispredictPenalty,
  2, // Processor ID
  0, 0, 0, 0, // No instruction-level machine model.
  G3Itineraries);

static const llvm::MCSchedModel G4ItinerariesModel(
  MCSchedModel::DefaultIssueWidth,
  MCSchedModel::DefaultMinLatency,
  MCSchedModel::DefaultLoadLatency,
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultMispredictPenalty,
  3, // Processor ID
  0, 0, 0, 0, // No instruction-level machine model.
  G4Itineraries);

static const llvm::MCSchedModel G4PlusItinerariesModel(
  MCSchedModel::DefaultIssueWidth,
  MCSchedModel::DefaultMinLatency,
  MCSchedModel::DefaultLoadLatency,
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultMispredictPenalty,
  4, // Processor ID
  0, 0, 0, 0, // No instruction-level machine model.
  G4PlusItineraries);

static const llvm::MCSchedModel G5ItinerariesModel(
  MCSchedModel::DefaultIssueWidth,
  MCSchedModel::DefaultMinLatency,
  MCSchedModel::DefaultLoadLatency,
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultMispredictPenalty,
  5, // Processor ID
  0, 0, 0, 0, // No instruction-level machine model.
  G5Itineraries);

static const llvm::MCSchedModel PPCA2ItinerariesModel(
  MCSchedModel::DefaultIssueWidth,
  MCSchedModel::DefaultMinLatency,
  MCSchedModel::DefaultLoadLatency,
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultMispredictPenalty,
  6, // Processor ID
  0, 0, 0, 0, // No instruction-level machine model.
  PPCA2Itineraries);

static const llvm::MCSchedModel PPCE500mcModel(
  2, // IssueWidth
  MCSchedModel::DefaultMinLatency,
  5, // LoadLatency
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultMispredictPenalty,
  7, // Processor ID
  0, 0, 0, 0, // No instruction-level machine model.
  PPCE500mcItineraries);

static const llvm::MCSchedModel PPCE5500Model(
  2, // IssueWidth
  MCSchedModel::DefaultMinLatency,
  6, // LoadLatency
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultMispredictPenalty,
  8, // Processor ID
  0, 0, 0, 0, // No instruction-level machine model.
  PPCE5500Itineraries);

// Sorted (by key) array of itineraries for CPU subtype.
extern const llvm::SubtargetInfoKV PPCProcSchedKV[] = {
  { "440", (const void *)&PPC440ItinerariesModel },
  { "450", (const void *)&PPC440ItinerariesModel },
  { "601", (const void *)&G3ItinerariesModel },
  { "602", (const void *)&G3ItinerariesModel },
  { "603", (const void *)&G3ItinerariesModel },
  { "603e", (const void *)&G3ItinerariesModel },
  { "603ev", (const void *)&G3ItinerariesModel },
  { "604", (const void *)&G3ItinerariesModel },
  { "604e", (const void *)&G3ItinerariesModel },
  { "620", (const void *)&G3ItinerariesModel },
  { "7400", (const void *)&G4ItinerariesModel },
  { "7450", (const void *)&G4PlusItinerariesModel },
  { "750", (const void *)&G4ItinerariesModel },
  { "970", (const void *)&G5ItinerariesModel },
  { "a2", (const void *)&PPCA2ItinerariesModel },
  { "e500mc", (const void *)&PPCE500mcModel },
  { "e5500", (const void *)&PPCE5500Model },
  { "g3", (const void *)&G3ItinerariesModel },
  { "g4", (const void *)&G4ItinerariesModel },
  { "g4+", (const void *)&G4PlusItinerariesModel },
  { "g5", (const void *)&G5ItinerariesModel },
  { "generic", (const void *)&G3ItinerariesModel },
  { "ppc", (const void *)&G3ItinerariesModel },
  { "ppc64", (const void *)&G5ItinerariesModel },
  { "pwr6", (const void *)&G5ItinerariesModel },
  { "pwr7", (const void *)&G5ItinerariesModel }
};
#undef DBGFIELD
static inline void InitPPCMCSubtargetInfo(MCSubtargetInfo *II, StringRef TT, StringRef CPU, StringRef FS) {
  II->InitMCSubtargetInfo(TT, CPU, FS, PPCFeatureKV, PPCSubTypeKV, 
                      PPCProcSchedKV, PPCWriteProcResTable, PPCWriteLatencyTable, PPCReadAdvanceTable, 
                      PPCStages, PPCOperandCycles, PPCForwardingPaths, 8, 26);
}

} // End llvm namespace 
#endif // GET_SUBTARGETINFO_MC_DESC


#ifdef GET_SUBTARGETINFO_TARGET_DESC
#undef GET_SUBTARGETINFO_TARGET_DESC
#include "llvm/Support/Debug.h"
#include "llvm/Support/raw_ostream.h"
// ParseSubtargetFeatures - Parses features string setting specified
// subtarget options.
void llvm::PPCSubtarget::ParseSubtargetFeatures(StringRef CPU, StringRef FS) {
  DEBUG(dbgs() << "\nFeatures:" << FS);
  DEBUG(dbgs() << "\nCPU:" << CPU << "\n\n");
  InitMCProcessorInfo(CPU, FS);
  uint64_t Bits = getFeatureBits();
  if ((Bits & PPC::Directive32) != 0 && DarwinDirective < PPC::DIR_32) DarwinDirective = PPC::DIR_32;
  if ((Bits & PPC::Directive64) != 0 && DarwinDirective < PPC::DIR_64) DarwinDirective = PPC::DIR_64;
  if ((Bits & PPC::Directive440) != 0 && DarwinDirective < PPC::DIR_440) DarwinDirective = PPC::DIR_440;
  if ((Bits & PPC::Directive601) != 0 && DarwinDirective < PPC::DIR_601) DarwinDirective = PPC::DIR_601;
  if ((Bits & PPC::Directive602) != 0 && DarwinDirective < PPC::DIR_602) DarwinDirective = PPC::DIR_602;
  if ((Bits & PPC::Directive603) != 0 && DarwinDirective < PPC::DIR_603) DarwinDirective = PPC::DIR_603;
  if ((Bits & PPC::Directive604) != 0 && DarwinDirective < PPC::DIR_603) DarwinDirective = PPC::DIR_603;
  if ((Bits & PPC::Directive620) != 0 && DarwinDirective < PPC::DIR_603) DarwinDirective = PPC::DIR_603;
  if ((Bits & PPC::Directive750) != 0 && DarwinDirective < PPC::DIR_750) DarwinDirective = PPC::DIR_750;
  if ((Bits & PPC::Directive970) != 0 && DarwinDirective < PPC::DIR_970) DarwinDirective = PPC::DIR_970;
  if ((Bits & PPC::Directive7400) != 0 && DarwinDirective < PPC::DIR_7400) DarwinDirective = PPC::DIR_7400;
  if ((Bits & PPC::DirectiveA2) != 0 && DarwinDirective < PPC::DIR_A2) DarwinDirective = PPC::DIR_A2;
  if ((Bits & PPC::DirectiveE500mc) != 0 && DarwinDirective < PPC::DIR_E500mc) DarwinDirective = PPC::DIR_E500mc;
  if ((Bits & PPC::DirectiveE5500) != 0 && DarwinDirective < PPC::DIR_E5500) DarwinDirective = PPC::DIR_E5500;
  if ((Bits & PPC::DirectivePwr6) != 0 && DarwinDirective < PPC::DIR_PWR6) DarwinDirective = PPC::DIR_PWR6;
  if ((Bits & PPC::DirectivePwr7) != 0 && DarwinDirective < PPC::DIR_PWR7) DarwinDirective = PPC::DIR_PWR7;
  if ((Bits & PPC::Feature64Bit) != 0) Has64BitSupport = true;
  if ((Bits & PPC::Feature64BitRegs) != 0) Use64BitRegs = true;
  if ((Bits & PPC::FeatureAltivec) != 0) HasAltivec = true;
  if ((Bits & PPC::FeatureBookE) != 0) IsBookE = true;
  if ((Bits & PPC::FeatureFSqrt) != 0) HasFSQRT = true;
  if ((Bits & PPC::FeatureISEL) != 0) HasISEL = true;
  if ((Bits & PPC::FeatureMFOCRF) != 0) HasMFOCRF = true;
  if ((Bits & PPC::FeatureSTFIWX) != 0) HasSTFIWX = true;
}
#endif // GET_SUBTARGETINFO_TARGET_DESC


#ifdef GET_SUBTARGETINFO_HEADER
#undef GET_SUBTARGETINFO_HEADER
namespace llvm {
class DFAPacketizer;
struct PPCGenSubtargetInfo : public TargetSubtargetInfo {
  explicit PPCGenSubtargetInfo(StringRef TT, StringRef CPU, StringRef FS);
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
extern const llvm::SubtargetFeatureKV PPCFeatureKV[];
extern const llvm::SubtargetFeatureKV PPCSubTypeKV[];
extern const llvm::SubtargetInfoKV PPCProcSchedKV[];
extern const llvm::MCWriteProcResEntry PPCWriteProcResTable[];
extern const llvm::MCWriteLatencyEntry PPCWriteLatencyTable[];
extern const llvm::MCReadAdvanceEntry PPCReadAdvanceTable[];
extern const llvm::InstrStage PPCStages[];
extern const unsigned PPCOperandCycles[];
extern const unsigned PPCForwardingPaths[];
PPCGenSubtargetInfo::PPCGenSubtargetInfo(StringRef TT, StringRef CPU, StringRef FS)
  : TargetSubtargetInfo() {
  InitMCSubtargetInfo(TT, CPU, FS, PPCFeatureKV, PPCSubTypeKV, 
                      PPCProcSchedKV, PPCWriteProcResTable, PPCWriteLatencyTable, PPCReadAdvanceTable, 
                      PPCStages, PPCOperandCycles, PPCForwardingPaths, 8, 26);
}

unsigned PPCGenSubtargetInfo
::resolveSchedClass(unsigned SchedClass, const MachineInstr *MI, const TargetSchedModel *SchedModel) const {
  report_fatal_error("Expected a variant SchedClass");
} // PPCGenSubtargetInfo::resolveSchedClass
} // End llvm namespace 
#endif // GET_SUBTARGETINFO_CTOR

