/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Target Instruction Enum Values                                             *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/


#ifdef GET_INSTRINFO_ENUM
#undef GET_INSTRINFO_ENUM
namespace llvm {

namespace MBlaze {
  enum {
    PHI	= 0,
    INLINEASM	= 1,
    PROLOG_LABEL	= 2,
    EH_LABEL	= 3,
    GC_LABEL	= 4,
    KILL	= 5,
    EXTRACT_SUBREG	= 6,
    INSERT_SUBREG	= 7,
    IMPLICIT_DEF	= 8,
    SUBREG_TO_REG	= 9,
    COPY_TO_REGCLASS	= 10,
    DBG_VALUE	= 11,
    REG_SEQUENCE	= 12,
    COPY	= 13,
    BUNDLE	= 14,
    LIFETIME_START	= 15,
    LIFETIME_END	= 16,
    ADD	= 17,
    ADDC	= 18,
    ADDI	= 19,
    ADDIC	= 20,
    ADDIK	= 21,
    ADDIK32	= 22,
    ADDIKC	= 23,
    ADDK	= 24,
    ADDKC	= 25,
    ADJCALLSTACKDOWN	= 26,
    ADJCALLSTACKUP	= 27,
    AGET	= 28,
    AGETD	= 29,
    AND	= 30,
    ANDI	= 31,
    ANDN	= 32,
    ANDNI	= 33,
    APUT	= 34,
    APUTD	= 35,
    BEQ	= 36,
    BEQD	= 37,
    BEQI	= 38,
    BEQID	= 39,
    BGE	= 40,
    BGED	= 41,
    BGEI	= 42,
    BGEID	= 43,
    BGT	= 44,
    BGTD	= 45,
    BGTI	= 46,
    BGTID	= 47,
    BLE	= 48,
    BLED	= 49,
    BLEI	= 50,
    BLEID	= 51,
    BLT	= 52,
    BLTD	= 53,
    BLTI	= 54,
    BLTID	= 55,
    BNE	= 56,
    BNED	= 57,
    BNEI	= 58,
    BNEID	= 59,
    BR	= 60,
    BRA	= 61,
    BRAD	= 62,
    BRAI	= 63,
    BRAID	= 64,
    BRALD	= 65,
    BRALID	= 66,
    BRD	= 67,
    BRI	= 68,
    BRID	= 69,
    BRK	= 70,
    BRKI	= 71,
    BRLD	= 72,
    BRLID	= 73,
    BRLID32	= 74,
    BSLL	= 75,
    BSLLI	= 76,
    BSRA	= 77,
    BSRAI	= 78,
    BSRL	= 79,
    BSRLI	= 80,
    CAGET	= 81,
    CAGETD	= 82,
    CAPUT	= 83,
    CAPUTD	= 84,
    CAS32	= 85,
    CGET	= 86,
    CGETD	= 87,
    CLZ	= 88,
    CMP	= 89,
    CMPU	= 90,
    CPUT	= 91,
    CPUTD	= 92,
    DMEMBAR	= 93,
    EAGET	= 94,
    EAGETD	= 95,
    ECAGET	= 96,
    ECAGETD	= 97,
    ECGET	= 98,
    ECGETD	= 99,
    EGET	= 100,
    EGETD	= 101,
    FADD	= 102,
    FCMP_EQ	= 103,
    FCMP_GE	= 104,
    FCMP_GT	= 105,
    FCMP_LE	= 106,
    FCMP_LT	= 107,
    FCMP_NE	= 108,
    FCMP_UN	= 109,
    FDIV	= 110,
    FINT	= 111,
    FLT	= 112,
    FMUL	= 113,
    FORI	= 114,
    FRSUB	= 115,
    FSQRT	= 116,
    GET	= 117,
    GETD	= 118,
    IDIV	= 119,
    IDIVU	= 120,
    IDMEMBAR	= 121,
    IMEMBAR	= 122,
    IMM	= 123,
    LAA32	= 124,
    LAD32	= 125,
    LAN32	= 126,
    LAO32	= 127,
    LAS32	= 128,
    LAX32	= 129,
    LBU	= 130,
    LBUI	= 131,
    LBUR	= 132,
    LHU	= 133,
    LHUI	= 134,
    LHUR	= 135,
    LW	= 136,
    LWF	= 137,
    LWFI	= 138,
    LWI	= 139,
    LWR	= 140,
    LWX	= 141,
    MEMBARRIER	= 142,
    MFS	= 143,
    MSRCLR	= 144,
    MSRSET	= 145,
    MTS	= 146,
    MUL	= 147,
    MULH	= 148,
    MULHSU	= 149,
    MULHU	= 150,
    MULI	= 151,
    NAGET	= 152,
    NAGETD	= 153,
    NAPUT	= 154,
    NAPUTD	= 155,
    NCAGET	= 156,
    NCAGETD	= 157,
    NCAPUT	= 158,
    NCAPUTD	= 159,
    NCGET	= 160,
    NCGETD	= 161,
    NCPUT	= 162,
    NCPUTD	= 163,
    NEAGET	= 164,
    NEAGETD	= 165,
    NECAGET	= 166,
    NECAGETD	= 167,
    NECGET	= 168,
    NECGETD	= 169,
    NEGET	= 170,
    NEGETD	= 171,
    NGET	= 172,
    NGETD	= 173,
    NOP	= 174,
    NPUT	= 175,
    NPUTD	= 176,
    OR	= 177,
    ORI	= 178,
    ORI32	= 179,
    PCMPBF	= 180,
    PCMPEQ	= 181,
    PCMPNE	= 182,
    PUT	= 183,
    PUTD	= 184,
    RSUB	= 185,
    RSUBC	= 186,
    RSUBI	= 187,
    RSUBIC	= 188,
    RSUBIK	= 189,
    RSUBIKC	= 190,
    RSUBK	= 191,
    RSUBKC	= 192,
    RTBD	= 193,
    RTED	= 194,
    RTID	= 195,
    RTSD	= 196,
    SB	= 197,
    SBI	= 198,
    SBR	= 199,
    SEXT16	= 200,
    SEXT8	= 201,
    SH	= 202,
    SHI	= 203,
    SHR	= 204,
    SRA	= 205,
    SRC	= 206,
    SRL	= 207,
    SW	= 208,
    SWF	= 209,
    SWFI	= 210,
    SWI	= 211,
    SWP32	= 212,
    SWR	= 213,
    SWX	= 214,
    Select_CC	= 215,
    Select_FCC	= 216,
    ShiftL	= 217,
    ShiftRA	= 218,
    ShiftRL	= 219,
    TAGET	= 220,
    TAGETD	= 221,
    TAPUT	= 222,
    TAPUTD	= 223,
    TCAGET	= 224,
    TCAGETD	= 225,
    TCAPUT	= 226,
    TCAPUTD	= 227,
    TCGET	= 228,
    TCGETD	= 229,
    TCPUT	= 230,
    TCPUTD	= 231,
    TEAGET	= 232,
    TEAGETD	= 233,
    TECAGET	= 234,
    TECAGETD	= 235,
    TECGET	= 236,
    TECGETD	= 237,
    TEGET	= 238,
    TEGETD	= 239,
    TGET	= 240,
    TGETD	= 241,
    TNAGET	= 242,
    TNAGETD	= 243,
    TNAPUT	= 244,
    TNAPUTD	= 245,
    TNCAGET	= 246,
    TNCAGETD	= 247,
    TNCAPUT	= 248,
    TNCAPUTD	= 249,
    TNCGET	= 250,
    TNCGETD	= 251,
    TNCPUT	= 252,
    TNCPUTD	= 253,
    TNEAGET	= 254,
    TNEAGETD	= 255,
    TNECAGET	= 256,
    TNECAGETD	= 257,
    TNECGET	= 258,
    TNECGETD	= 259,
    TNEGET	= 260,
    TNEGETD	= 261,
    TNGET	= 262,
    TNGETD	= 263,
    TNPUT	= 264,
    TNPUTD	= 265,
    TPUT	= 266,
    TPUTD	= 267,
    WDC	= 268,
    WDCC	= 269,
    WDCF	= 270,
    WIC	= 271,
    XOR	= 272,
    XORI	= 273,
    INSTRUCTION_LIST_END = 274
  };
}
} // End llvm namespace 
#endif // GET_INSTRINFO_ENUM

/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Target Instruction Descriptors                                             *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/


#ifdef GET_INSTRINFO_MC_DESC
#undef GET_INSTRINFO_MC_DESC
namespace llvm {

static const uint16_t ImplicitList1[] = { MBlaze::CARRY, 0 };
static const uint16_t ImplicitList2[] = { MBlaze::R1, 0 };
static const uint16_t ImplicitList3[] = { MBlaze::R3, MBlaze::R4, MBlaze::R5, MBlaze::R6, MBlaze::R7, MBlaze::R8, MBlaze::R9, MBlaze::R10, MBlaze::R11, MBlaze::R12, MBlaze::CARRY, 0 };

static const MCOperandInfo OperandInfo2[] = { { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo3[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo4[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo5[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo6[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo7[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo8[] = { { MBlaze::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MBlaze::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MBlaze::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo9[] = { { MBlaze::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MBlaze::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo10[] = { { MBlaze::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo11[] = { { MBlaze::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MBlaze::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo12[] = { { MBlaze::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo13[] = { { MBlaze::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MBlaze::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MBlaze::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MBlaze::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo14[] = { { MBlaze::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MBlaze::GPRRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { MBlaze::GPRRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo15[] = { { MBlaze::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MBlaze::GPRRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo16[] = { { MBlaze::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MBlaze::SPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo17[] = { { MBlaze::SPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MBlaze::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo18[] = { { MBlaze::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { MBlaze::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo19[] = { { MBlaze::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MBlaze::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MBlaze::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MBlaze::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };

extern const MCInstrDesc MBlazeInsts[] = {
  { 0,	0,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::Variadic)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, 0 },  // Inst #0 = PHI
  { 1,	0,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::Variadic), 0x0ULL, NULL, NULL, 0 },  // Inst #1 = INLINEASM
  { 2,	1,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::NotDuplicable)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo2 },  // Inst #2 = PROLOG_LABEL
  { 3,	1,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::NotDuplicable)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo2 },  // Inst #3 = EH_LABEL
  { 4,	1,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::NotDuplicable)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo2 },  // Inst #4 = GC_LABEL
  { 5,	0,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::Variadic), 0x0ULL, NULL, NULL, 0 },  // Inst #5 = KILL
  { 6,	3,	1,	0,	0,	0|(1<<MCID::Pseudo), 0x0ULL, NULL, NULL, OperandInfo3 },  // Inst #6 = EXTRACT_SUBREG
  { 7,	4,	1,	0,	0,	0|(1<<MCID::Pseudo), 0x0ULL, NULL, NULL, OperandInfo4 },  // Inst #7 = INSERT_SUBREG
  { 8,	1,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::Rematerializable)|(1<<MCID::CheapAsAMove), 0x0ULL, NULL, NULL, OperandInfo5 },  // Inst #8 = IMPLICIT_DEF
  { 9,	4,	1,	0,	0,	0|(1<<MCID::Pseudo), 0x0ULL, NULL, NULL, OperandInfo6 },  // Inst #9 = SUBREG_TO_REG
  { 10,	3,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::CheapAsAMove), 0x0ULL, NULL, NULL, OperandInfo3 },  // Inst #10 = COPY_TO_REGCLASS
  { 11,	0,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::Variadic), 0x0ULL, NULL, NULL, 0 },  // Inst #11 = DBG_VALUE
  { 12,	1,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::Variadic)|(1<<MCID::CheapAsAMove), 0x0ULL, NULL, NULL, OperandInfo5 },  // Inst #12 = REG_SEQUENCE
  { 13,	2,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::CheapAsAMove), 0x0ULL, NULL, NULL, OperandInfo7 },  // Inst #13 = COPY
  { 14,	0,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::Variadic)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, 0 },  // Inst #14 = BUNDLE
  { 15,	1,	0,	0,	0,	0|(1<<MCID::Pseudo), 0x0ULL, NULL, NULL, OperandInfo2 },  // Inst #15 = LIFETIME_START
  { 16,	1,	0,	0,	0,	0|(1<<MCID::Pseudo), 0x0ULL, NULL, NULL, OperandInfo2 },  // Inst #16 = LIFETIME_END
  { 17,	3,	1,	1,	0,	0|(1<<MCID::Commutable)|(1<<MCID::CheapAsAMove), 0x1ULL, NULL, ImplicitList1, OperandInfo8 },  // Inst #17 = ADD
  { 18,	3,	1,	1,	0,	0|(1<<MCID::Commutable)|(1<<MCID::CheapAsAMove), 0x1ULL, ImplicitList1, ImplicitList1, OperandInfo8 },  // Inst #18 = ADDC
  { 19,	3,	1,	1,	0,	0|(1<<MCID::CheapAsAMove), 0x2ULL, NULL, ImplicitList1, OperandInfo9 },  // Inst #19 = ADDI
  { 20,	3,	1,	1,	0,	0|(1<<MCID::CheapAsAMove), 0x2ULL, ImplicitList1, ImplicitList1, OperandInfo9 },  // Inst #20 = ADDIC
  { 21,	3,	1,	1,	0,	0|(1<<MCID::CheapAsAMove), 0x2ULL, NULL, NULL, OperandInfo9 },  // Inst #21 = ADDIK
  { 22,	3,	1,	1,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo9 },  // Inst #22 = ADDIK32
  { 23,	3,	1,	1,	0,	0|(1<<MCID::UnmodeledSideEffects)|(1<<MCID::CheapAsAMove), 0x2ULL, ImplicitList1, NULL, OperandInfo9 },  // Inst #23 = ADDIKC
  { 24,	3,	1,	1,	0,	0|(1<<MCID::Commutable)|(1<<MCID::CheapAsAMove), 0x1ULL, NULL, NULL, OperandInfo8 },  // Inst #24 = ADDK
  { 25,	3,	1,	1,	0,	0|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects)|(1<<MCID::CheapAsAMove), 0x1ULL, ImplicitList1, NULL, OperandInfo8 },  // Inst #25 = ADDKC
  { 26,	1,	0,	17,	0,	0, 0x0ULL, ImplicitList2, ImplicitList2, OperandInfo5 },  // Inst #26 = ADJCALLSTACKDOWN
  { 27,	2,	0,	17,	0,	0, 0x0ULL, ImplicitList2, ImplicitList2, OperandInfo7 },  // Inst #27 = ADJCALLSTACKUP
  { 28,	2,	1,	13,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0xbULL, NULL, NULL, OperandInfo10 },  // Inst #28 = AGET
  { 29,	2,	1,	13,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x5ULL, NULL, NULL, OperandInfo11 },  // Inst #29 = AGETD
  { 30,	3,	1,	1,	0,	0|(1<<MCID::Commutable)|(1<<MCID::CheapAsAMove), 0x1ULL, NULL, NULL, OperandInfo8 },  // Inst #30 = AND
  { 31,	3,	1,	1,	0,	0|(1<<MCID::CheapAsAMove), 0x2ULL, NULL, NULL, OperandInfo9 },  // Inst #31 = ANDI
  { 32,	3,	1,	1,	0,	0|(1<<MCID::CheapAsAMove), 0x1ULL, NULL, NULL, OperandInfo8 },  // Inst #32 = ANDN
  { 33,	3,	1,	1,	0,	0|(1<<MCID::UnmodeledSideEffects)|(1<<MCID::CheapAsAMove), 0x2ULL, NULL, NULL, OperandInfo9 },  // Inst #33 = ANDNI
  { 34,	2,	0,	14,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0xeULL, NULL, NULL, OperandInfo10 },  // Inst #34 = APUT
  { 35,	2,	0,	14,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x3ULL, NULL, NULL, OperandInfo11 },  // Inst #35 = APUTD
  { 36,	2,	0,	5,	0,	0|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x3ULL, NULL, NULL, OperandInfo11 },  // Inst #36 = BEQ
  { 37,	2,	0,	5,	0,	0|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x3ULL, NULL, NULL, OperandInfo11 },  // Inst #37 = BEQD
  { 38,	2,	0,	5,	0,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo10 },  // Inst #38 = BEQI
  { 39,	2,	0,	5,	0,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x4ULL, NULL, NULL, OperandInfo10 },  // Inst #39 = BEQID
  { 40,	2,	0,	5,	0,	0|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x3ULL, NULL, NULL, OperandInfo11 },  // Inst #40 = BGE
  { 41,	2,	0,	5,	0,	0|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x3ULL, NULL, NULL, OperandInfo11 },  // Inst #41 = BGED
  { 42,	2,	0,	5,	0,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo10 },  // Inst #42 = BGEI
  { 43,	2,	0,	5,	0,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x4ULL, NULL, NULL, OperandInfo10 },  // Inst #43 = BGEID
  { 44,	2,	0,	5,	0,	0|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x3ULL, NULL, NULL, OperandInfo11 },  // Inst #44 = BGT
  { 45,	2,	0,	5,	0,	0|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x3ULL, NULL, NULL, OperandInfo11 },  // Inst #45 = BGTD
  { 46,	2,	0,	5,	0,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo10 },  // Inst #46 = BGTI
  { 47,	2,	0,	5,	0,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x4ULL, NULL, NULL, OperandInfo10 },  // Inst #47 = BGTID
  { 48,	2,	0,	5,	0,	0|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x3ULL, NULL, NULL, OperandInfo11 },  // Inst #48 = BLE
  { 49,	2,	0,	5,	0,	0|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x3ULL, NULL, NULL, OperandInfo11 },  // Inst #49 = BLED
  { 50,	2,	0,	5,	0,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo10 },  // Inst #50 = BLEI
  { 51,	2,	0,	5,	0,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x4ULL, NULL, NULL, OperandInfo10 },  // Inst #51 = BLEID
  { 52,	2,	0,	5,	0,	0|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x3ULL, NULL, NULL, OperandInfo11 },  // Inst #52 = BLT
  { 53,	2,	0,	5,	0,	0|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x3ULL, NULL, NULL, OperandInfo11 },  // Inst #53 = BLTD
  { 54,	2,	0,	5,	0,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo10 },  // Inst #54 = BLTI
  { 55,	2,	0,	5,	0,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x4ULL, NULL, NULL, OperandInfo10 },  // Inst #55 = BLTID
  { 56,	2,	0,	5,	0,	0|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x3ULL, NULL, NULL, OperandInfo11 },  // Inst #56 = BNE
  { 57,	2,	0,	5,	0,	0|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x3ULL, NULL, NULL, OperandInfo11 },  // Inst #57 = BNED
  { 58,	2,	0,	5,	0,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo10 },  // Inst #58 = BNEI
  { 59,	2,	0,	5,	0,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x4ULL, NULL, NULL, OperandInfo10 },  // Inst #59 = BNEID
  { 60,	1,	0,	4,	0,	0|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x7ULL, NULL, NULL, OperandInfo12 },  // Inst #60 = BR
  { 61,	1,	0,	4,	0,	0|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x7ULL, NULL, NULL, OperandInfo12 },  // Inst #61 = BRA
  { 62,	1,	0,	4,	0,	0|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x7ULL, NULL, NULL, OperandInfo12 },  // Inst #62 = BRAD
  { 63,	1,	0,	4,	0,	0|(1<<MCID::Branch)|(1<<MCID::Barrier)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x8ULL, NULL, NULL, OperandInfo5 },  // Inst #63 = BRAI
  { 64,	1,	0,	4,	0,	0|(1<<MCID::Branch)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x8ULL, NULL, NULL, OperandInfo5 },  // Inst #64 = BRAID
  { 65,	2,	0,	6,	0,	0|(1<<MCID::DelaySlot)|(1<<MCID::Call), 0x5ULL, ImplicitList2, ImplicitList3, OperandInfo11 },  // Inst #65 = BRALD
  { 66,	2,	0,	6,	0,	0|(1<<MCID::DelaySlot)|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, ImplicitList2, ImplicitList3, OperandInfo10 },  // Inst #66 = BRALID
  { 67,	1,	0,	4,	0,	0|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x7ULL, NULL, NULL, OperandInfo12 },  // Inst #67 = BRD
  { 68,	1,	0,	4,	0,	0|(1<<MCID::Branch)|(1<<MCID::Barrier)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x8ULL, NULL, NULL, OperandInfo5 },  // Inst #68 = BRI
  { 69,	1,	0,	4,	0,	0|(1<<MCID::Branch)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x8ULL, NULL, NULL, OperandInfo5 },  // Inst #69 = BRID
  { 70,	2,	0,	6,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x5ULL, NULL, NULL, OperandInfo11 },  // Inst #70 = BRK
  { 71,	2,	0,	6,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo10 },  // Inst #71 = BRKI
  { 72,	2,	0,	6,	0,	0|(1<<MCID::DelaySlot)|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x5ULL, ImplicitList2, ImplicitList3, OperandInfo11 },  // Inst #72 = BRLD
  { 73,	2,	0,	6,	0,	0|(1<<MCID::DelaySlot)|(1<<MCID::Call), 0x6ULL, ImplicitList2, ImplicitList3, OperandInfo10 },  // Inst #73 = BRLID
  { 74,	2,	0,	6,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo10 },  // Inst #74 = BRLID32
  { 75,	3,	1,	18,	0,	0, 0x1ULL, NULL, NULL, OperandInfo8 },  // Inst #75 = BSLL
  { 76,	3,	1,	18,	0,	0, 0x2ULL, NULL, NULL, OperandInfo9 },  // Inst #76 = BSLLI
  { 77,	3,	1,	18,	0,	0, 0x1ULL, NULL, NULL, OperandInfo8 },  // Inst #77 = BSRA
  { 78,	3,	1,	18,	0,	0, 0x2ULL, NULL, NULL, OperandInfo9 },  // Inst #78 = BSRAI
  { 79,	3,	1,	18,	0,	0, 0x1ULL, NULL, NULL, OperandInfo8 },  // Inst #79 = BSRL
  { 80,	3,	1,	18,	0,	0, 0x2ULL, NULL, NULL, OperandInfo9 },  // Inst #80 = BSRLI
  { 81,	2,	1,	13,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0xbULL, NULL, NULL, OperandInfo10 },  // Inst #81 = CAGET
  { 82,	2,	1,	13,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x5ULL, NULL, NULL, OperandInfo11 },  // Inst #82 = CAGETD
  { 83,	2,	0,	14,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0xeULL, NULL, NULL, OperandInfo10 },  // Inst #83 = CAPUT
  { 84,	2,	0,	14,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x3ULL, NULL, NULL, OperandInfo11 },  // Inst #84 = CAPUTD
  { 85,	4,	1,	17,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #85 = CAS32
  { 86,	2,	1,	13,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0xbULL, NULL, NULL, OperandInfo10 },  // Inst #86 = CGET
  { 87,	2,	1,	13,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x5ULL, NULL, NULL, OperandInfo11 },  // Inst #87 = CGETD
  { 88,	2,	1,	1,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x15ULL, NULL, NULL, OperandInfo11 },  // Inst #88 = CLZ
  { 89,	3,	1,	1,	0,	0|(1<<MCID::UnmodeledSideEffects)|(1<<MCID::CheapAsAMove), 0x1ULL, NULL, NULL, OperandInfo8 },  // Inst #89 = CMP
  { 90,	3,	1,	1,	0,	0|(1<<MCID::UnmodeledSideEffects)|(1<<MCID::CheapAsAMove), 0x1ULL, NULL, NULL, OperandInfo8 },  // Inst #90 = CMPU
  { 91,	2,	0,	14,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0xeULL, NULL, NULL, OperandInfo10 },  // Inst #91 = CPUT
  { 92,	2,	0,	14,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x3ULL, NULL, NULL, OperandInfo11 },  // Inst #92 = CPUTD
  { 93,	0,	0,	1,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x14ULL, NULL, NULL, 0 },  // Inst #93 = DMEMBAR
  { 94,	2,	1,	13,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0xbULL, NULL, NULL, OperandInfo10 },  // Inst #94 = EAGET
  { 95,	2,	1,	13,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x5ULL, NULL, NULL, OperandInfo11 },  // Inst #95 = EAGETD
  { 96,	2,	1,	13,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0xbULL, NULL, NULL, OperandInfo10 },  // Inst #96 = ECAGET
  { 97,	2,	1,	13,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x5ULL, NULL, NULL, OperandInfo11 },  // Inst #97 = ECAGETD
  { 98,	2,	1,	13,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0xbULL, NULL, NULL, OperandInfo10 },  // Inst #98 = ECGET
  { 99,	2,	1,	13,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x5ULL, NULL, NULL, OperandInfo11 },  // Inst #99 = ECGETD
  { 100,	2,	1,	13,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0xbULL, NULL, NULL, OperandInfo10 },  // Inst #100 = EGET
  { 101,	2,	1,	13,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x5ULL, NULL, NULL, OperandInfo11 },  // Inst #101 = EGETD
  { 102,	3,	1,	7,	0,	0, 0x1ULL, NULL, NULL, OperandInfo8 },  // Inst #102 = FADD
  { 103,	3,	1,	8,	0,	0|(1<<MCID::UnmodeledSideEffects)|(1<<MCID::CheapAsAMove), 0x1ULL, NULL, NULL, OperandInfo8 },  // Inst #103 = FCMP_EQ
  { 104,	3,	1,	8,	0,	0|(1<<MCID::UnmodeledSideEffects)|(1<<MCID::CheapAsAMove), 0x1ULL, NULL, NULL, OperandInfo8 },  // Inst #104 = FCMP_GE
  { 105,	3,	1,	8,	0,	0|(1<<MCID::UnmodeledSideEffects)|(1<<MCID::CheapAsAMove), 0x1ULL, NULL, NULL, OperandInfo8 },  // Inst #105 = FCMP_GT
  { 106,	3,	1,	8,	0,	0|(1<<MCID::UnmodeledSideEffects)|(1<<MCID::CheapAsAMove), 0x1ULL, NULL, NULL, OperandInfo8 },  // Inst #106 = FCMP_LE
  { 107,	3,	1,	8,	0,	0|(1<<MCID::UnmodeledSideEffects)|(1<<MCID::CheapAsAMove), 0x1ULL, NULL, NULL, OperandInfo8 },  // Inst #107 = FCMP_LT
  { 108,	3,	1,	8,	0,	0|(1<<MCID::UnmodeledSideEffects)|(1<<MCID::CheapAsAMove), 0x1ULL, NULL, NULL, OperandInfo8 },  // Inst #108 = FCMP_NE
  { 109,	3,	1,	8,	0,	0|(1<<MCID::UnmodeledSideEffects)|(1<<MCID::CheapAsAMove), 0x1ULL, NULL, NULL, OperandInfo8 },  // Inst #109 = FCMP_UN
  { 110,	3,	1,	9,	0,	0, 0x1ULL, NULL, NULL, OperandInfo8 },  // Inst #110 = FDIV
  { 111,	2,	1,	11,	0,	0, 0x1ULL, NULL, NULL, OperandInfo11 },  // Inst #111 = FINT
  { 112,	2,	1,	10,	0,	0, 0x1ULL, NULL, NULL, OperandInfo11 },  // Inst #112 = FLT
  { 113,	3,	1,	7,	0,	0, 0x1ULL, NULL, NULL, OperandInfo8 },  // Inst #113 = FMUL
  { 114,	3,	1,	1,	0,	0, 0x2ULL, NULL, NULL, OperandInfo9 },  // Inst #114 = FORI
  { 115,	3,	1,	7,	0,	0, 0x12ULL, NULL, NULL, OperandInfo8 },  // Inst #115 = FRSUB
  { 116,	2,	1,	12,	0,	0, 0x1ULL, NULL, NULL, OperandInfo11 },  // Inst #116 = FSQRT
  { 117,	2,	1,	13,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0xbULL, NULL, NULL, OperandInfo10 },  // Inst #117 = GET
  { 118,	2,	1,	13,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x5ULL, NULL, NULL, OperandInfo11 },  // Inst #118 = GETD
  { 119,	3,	1,	2,	0,	0, 0x12ULL, NULL, NULL, OperandInfo8 },  // Inst #119 = IDIV
  { 120,	3,	1,	2,	0,	0, 0x12ULL, NULL, NULL, OperandInfo8 },  // Inst #120 = IDIVU
  { 121,	0,	0,	1,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x14ULL, NULL, NULL, 0 },  // Inst #121 = IDMEMBAR
  { 122,	0,	0,	1,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x14ULL, NULL, NULL, 0 },  // Inst #122 = IMEMBAR
  { 123,	1,	0,	1,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x8ULL, NULL, NULL, OperandInfo5 },  // Inst #123 = IMM
  { 124,	3,	1,	17,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #124 = LAA32
  { 125,	3,	1,	17,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #125 = LAD32
  { 126,	3,	1,	17,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #126 = LAN32
  { 127,	3,	1,	17,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #127 = LAO32
  { 128,	3,	1,	17,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #128 = LAS32
  { 129,	3,	1,	17,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #129 = LAX32
  { 130,	3,	1,	15,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad)|(1<<MCID::Rematerializable), 0x1ULL, NULL, NULL, OperandInfo14 },  // Inst #130 = LBU
  { 131,	3,	1,	15,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad)|(1<<MCID::Rematerializable), 0x2ULL, NULL, NULL, OperandInfo15 },  // Inst #131 = LBUI
  { 132,	3,	1,	15,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad)|(1<<MCID::Rematerializable), 0x1ULL, NULL, NULL, OperandInfo14 },  // Inst #132 = LBUR
  { 133,	3,	1,	15,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad)|(1<<MCID::Rematerializable), 0x1ULL, NULL, NULL, OperandInfo14 },  // Inst #133 = LHU
  { 134,	3,	1,	15,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad)|(1<<MCID::Rematerializable), 0x2ULL, NULL, NULL, OperandInfo15 },  // Inst #134 = LHUI
  { 135,	3,	1,	15,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad)|(1<<MCID::Rematerializable), 0x1ULL, NULL, NULL, OperandInfo14 },  // Inst #135 = LHUR
  { 136,	3,	1,	15,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad)|(1<<MCID::Rematerializable), 0x1ULL, NULL, NULL, OperandInfo14 },  // Inst #136 = LW
  { 137,	3,	1,	15,	0,	0|(1<<MCID::MayLoad), 0x1ULL, NULL, NULL, OperandInfo14 },  // Inst #137 = LWF
  { 138,	3,	1,	15,	0,	0|(1<<MCID::MayLoad), 0x2ULL, NULL, NULL, OperandInfo15 },  // Inst #138 = LWFI
  { 139,	3,	1,	15,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad)|(1<<MCID::Rematerializable), 0x2ULL, NULL, NULL, OperandInfo15 },  // Inst #139 = LWI
  { 140,	3,	1,	15,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad)|(1<<MCID::Rematerializable), 0x1ULL, NULL, NULL, OperandInfo14 },  // Inst #140 = LWR
  { 141,	3,	1,	15,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad)|(1<<MCID::Rematerializable), 0x1ULL, NULL, ImplicitList1, OperandInfo14 },  // Inst #141 = LWX
  { 142,	0,	0,	17,	0,	0|(1<<MCID::UsesCustomInserter)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, 0 },  // Inst #142 = MEMBARRIER
  { 143,	2,	1,	1,	0,	0|(1<<MCID::UnmodeledSideEffects), 0xcULL, NULL, NULL, OperandInfo16 },  // Inst #143 = MFS
  { 144,	2,	1,	1,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x13ULL, NULL, NULL, OperandInfo10 },  // Inst #144 = MSRCLR
  { 145,	2,	1,	1,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x13ULL, NULL, NULL, OperandInfo10 },  // Inst #145 = MSRSET
  { 146,	2,	1,	1,	0,	0|(1<<MCID::UnmodeledSideEffects), 0xdULL, NULL, NULL, OperandInfo17 },  // Inst #146 = MTS
  { 147,	3,	1,	3,	0,	0|(1<<MCID::Commutable), 0x1ULL, NULL, NULL, OperandInfo8 },  // Inst #147 = MUL
  { 148,	3,	1,	3,	0,	0|(1<<MCID::Commutable), 0x1ULL, NULL, NULL, OperandInfo8 },  // Inst #148 = MULH
  { 149,	3,	1,	3,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, NULL, NULL, OperandInfo8 },  // Inst #149 = MULHSU
  { 150,	3,	1,	3,	0,	0|(1<<MCID::Commutable), 0x1ULL, NULL, NULL, OperandInfo8 },  // Inst #150 = MULHU
  { 151,	3,	1,	1,	0,	0, 0x2ULL, NULL, NULL, OperandInfo9 },  // Inst #151 = MULI
  { 152,	2,	1,	13,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0xbULL, NULL, ImplicitList1, OperandInfo10 },  // Inst #152 = NAGET
  { 153,	2,	1,	13,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x5ULL, NULL, ImplicitList1, OperandInfo11 },  // Inst #153 = NAGETD
  { 154,	2,	0,	14,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0xeULL, NULL, ImplicitList1, OperandInfo10 },  // Inst #154 = NAPUT
  { 155,	2,	0,	14,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x3ULL, NULL, ImplicitList1, OperandInfo11 },  // Inst #155 = NAPUTD
  { 156,	2,	1,	13,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0xbULL, NULL, ImplicitList1, OperandInfo10 },  // Inst #156 = NCAGET
  { 157,	2,	1,	13,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x5ULL, NULL, ImplicitList1, OperandInfo11 },  // Inst #157 = NCAGETD
  { 158,	2,	0,	14,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0xeULL, NULL, ImplicitList1, OperandInfo10 },  // Inst #158 = NCAPUT
  { 159,	2,	0,	14,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x3ULL, NULL, ImplicitList1, OperandInfo11 },  // Inst #159 = NCAPUTD
  { 160,	2,	1,	13,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0xbULL, NULL, ImplicitList1, OperandInfo10 },  // Inst #160 = NCGET
  { 161,	2,	1,	13,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x5ULL, NULL, ImplicitList1, OperandInfo11 },  // Inst #161 = NCGETD
  { 162,	2,	0,	14,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0xeULL, NULL, ImplicitList1, OperandInfo10 },  // Inst #162 = NCPUT
  { 163,	2,	0,	14,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x3ULL, NULL, ImplicitList1, OperandInfo11 },  // Inst #163 = NCPUTD
  { 164,	2,	1,	13,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0xbULL, NULL, ImplicitList1, OperandInfo10 },  // Inst #164 = NEAGET
  { 165,	2,	1,	13,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x5ULL, NULL, ImplicitList1, OperandInfo11 },  // Inst #165 = NEAGETD
  { 166,	2,	1,	13,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0xbULL, NULL, ImplicitList1, OperandInfo10 },  // Inst #166 = NECAGET
  { 167,	2,	1,	13,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x5ULL, NULL, ImplicitList1, OperandInfo11 },  // Inst #167 = NECAGETD
  { 168,	2,	1,	13,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0xbULL, NULL, ImplicitList1, OperandInfo10 },  // Inst #168 = NECGET
  { 169,	2,	1,	13,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x5ULL, NULL, ImplicitList1, OperandInfo11 },  // Inst #169 = NECGETD
  { 170,	2,	1,	13,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0xbULL, NULL, ImplicitList1, OperandInfo10 },  // Inst #170 = NEGET
  { 171,	2,	1,	13,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x5ULL, NULL, ImplicitList1, OperandInfo11 },  // Inst #171 = NEGETD
  { 172,	2,	1,	13,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0xbULL, NULL, ImplicitList1, OperandInfo10 },  // Inst #172 = NGET
  { 173,	2,	1,	13,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x5ULL, NULL, ImplicitList1, OperandInfo11 },  // Inst #173 = NGETD
  { 174,	0,	0,	1,	0,	0, 0x14ULL, NULL, NULL, 0 },  // Inst #174 = NOP
  { 175,	2,	0,	14,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0xeULL, NULL, ImplicitList1, OperandInfo10 },  // Inst #175 = NPUT
  { 176,	2,	0,	14,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x3ULL, NULL, ImplicitList1, OperandInfo11 },  // Inst #176 = NPUTD
  { 177,	3,	1,	1,	0,	0|(1<<MCID::Commutable)|(1<<MCID::CheapAsAMove), 0x1ULL, NULL, NULL, OperandInfo8 },  // Inst #177 = OR
  { 178,	3,	1,	1,	0,	0|(1<<MCID::CheapAsAMove), 0x2ULL, NULL, NULL, OperandInfo9 },  // Inst #178 = ORI
  { 179,	3,	1,	1,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo9 },  // Inst #179 = ORI32
  { 180,	3,	1,	1,	0,	0|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects)|(1<<MCID::CheapAsAMove), 0x1ULL, NULL, NULL, OperandInfo8 },  // Inst #180 = PCMPBF
  { 181,	3,	1,	1,	0,	0|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects)|(1<<MCID::CheapAsAMove), 0x1ULL, NULL, NULL, OperandInfo8 },  // Inst #181 = PCMPEQ
  { 182,	3,	1,	1,	0,	0|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects)|(1<<MCID::CheapAsAMove), 0x1ULL, NULL, NULL, OperandInfo8 },  // Inst #182 = PCMPNE
  { 183,	2,	0,	14,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0xeULL, NULL, NULL, OperandInfo10 },  // Inst #183 = PUT
  { 184,	2,	0,	14,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x3ULL, NULL, NULL, OperandInfo11 },  // Inst #184 = PUTD
  { 185,	3,	1,	1,	0,	0|(1<<MCID::CheapAsAMove), 0x12ULL, NULL, ImplicitList1, OperandInfo8 },  // Inst #185 = RSUB
  { 186,	3,	1,	1,	0,	0|(1<<MCID::CheapAsAMove), 0x12ULL, ImplicitList1, ImplicitList1, OperandInfo8 },  // Inst #186 = RSUBC
  { 187,	3,	1,	1,	0,	0|(1<<MCID::CheapAsAMove), 0x11ULL, NULL, ImplicitList1, OperandInfo18 },  // Inst #187 = RSUBI
  { 188,	3,	1,	1,	0,	0|(1<<MCID::CheapAsAMove), 0x11ULL, ImplicitList1, ImplicitList1, OperandInfo18 },  // Inst #188 = RSUBIC
  { 189,	3,	1,	1,	0,	0|(1<<MCID::CheapAsAMove), 0x11ULL, NULL, NULL, OperandInfo18 },  // Inst #189 = RSUBIK
  { 190,	3,	1,	1,	0,	0|(1<<MCID::UnmodeledSideEffects)|(1<<MCID::CheapAsAMove), 0x11ULL, ImplicitList1, NULL, OperandInfo18 },  // Inst #190 = RSUBIKC
  { 191,	3,	1,	1,	0,	0|(1<<MCID::CheapAsAMove), 0x12ULL, NULL, NULL, OperandInfo8 },  // Inst #191 = RSUBK
  { 192,	3,	1,	1,	0,	0|(1<<MCID::UnmodeledSideEffects)|(1<<MCID::CheapAsAMove), 0x12ULL, ImplicitList1, NULL, OperandInfo8 },  // Inst #192 = RSUBKC
  { 193,	2,	0,	4,	0,	0|(1<<MCID::Return)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo10 },  // Inst #193 = RTBD
  { 194,	2,	0,	4,	0,	0|(1<<MCID::Return)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo10 },  // Inst #194 = RTED
  { 195,	2,	0,	4,	0,	0|(1<<MCID::Return)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x4ULL, NULL, NULL, OperandInfo10 },  // Inst #195 = RTID
  { 196,	2,	0,	4,	0,	0|(1<<MCID::Return)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x4ULL, NULL, NULL, OperandInfo10 },  // Inst #196 = RTSD
  { 197,	3,	0,	16,	0,	0|(1<<MCID::MayStore), 0x1ULL, NULL, NULL, OperandInfo14 },  // Inst #197 = SB
  { 198,	3,	0,	16,	0,	0|(1<<MCID::MayStore), 0x2ULL, NULL, NULL, OperandInfo15 },  // Inst #198 = SBI
  { 199,	3,	0,	16,	0,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, NULL, NULL, OperandInfo14 },  // Inst #199 = SBR
  { 200,	2,	1,	1,	0,	0, 0x1ULL, NULL, NULL, OperandInfo11 },  // Inst #200 = SEXT16
  { 201,	2,	1,	1,	0,	0, 0x1ULL, NULL, NULL, OperandInfo11 },  // Inst #201 = SEXT8
  { 202,	3,	0,	16,	0,	0|(1<<MCID::MayStore), 0x1ULL, NULL, NULL, OperandInfo14 },  // Inst #202 = SH
  { 203,	3,	0,	16,	0,	0|(1<<MCID::MayStore), 0x2ULL, NULL, NULL, OperandInfo15 },  // Inst #203 = SHI
  { 204,	3,	0,	16,	0,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, NULL, NULL, OperandInfo14 },  // Inst #204 = SHR
  { 205,	2,	1,	1,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, NULL, ImplicitList1, OperandInfo11 },  // Inst #205 = SRA
  { 206,	2,	1,	1,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, ImplicitList1, ImplicitList1, OperandInfo11 },  // Inst #206 = SRC
  { 207,	2,	1,	1,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, NULL, ImplicitList1, OperandInfo11 },  // Inst #207 = SRL
  { 208,	3,	0,	16,	0,	0|(1<<MCID::MayStore), 0x1ULL, NULL, NULL, OperandInfo14 },  // Inst #208 = SW
  { 209,	3,	0,	16,	0,	0|(1<<MCID::MayStore), 0x1ULL, NULL, NULL, OperandInfo14 },  // Inst #209 = SWF
  { 210,	3,	0,	16,	0,	0|(1<<MCID::MayStore), 0x2ULL, NULL, NULL, OperandInfo14 },  // Inst #210 = SWFI
  { 211,	3,	0,	16,	0,	0|(1<<MCID::MayStore), 0x2ULL, NULL, NULL, OperandInfo15 },  // Inst #211 = SWI
  { 212,	3,	1,	17,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #212 = SWP32
  { 213,	3,	0,	16,	0,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, NULL, NULL, OperandInfo14 },  // Inst #213 = SWR
  { 214,	3,	0,	16,	0,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, NULL, ImplicitList1, OperandInfo14 },  // Inst #214 = SWX
  { 215,	5,	1,	17,	0,	0|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo19 },  // Inst #215 = Select_CC
  { 216,	5,	1,	17,	0,	0|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo19 },  // Inst #216 = Select_FCC
  { 217,	3,	1,	17,	0,	0|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #217 = ShiftL
  { 218,	3,	1,	17,	0,	0|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #218 = ShiftRA
  { 219,	3,	1,	17,	0,	0|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #219 = ShiftRL
  { 220,	2,	1,	13,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0xbULL, NULL, NULL, OperandInfo10 },  // Inst #220 = TAGET
  { 221,	2,	1,	13,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x5ULL, NULL, NULL, OperandInfo11 },  // Inst #221 = TAGETD
  { 222,	1,	0,	14,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0xfULL, NULL, NULL, OperandInfo5 },  // Inst #222 = TAPUT
  { 223,	1,	0,	14,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x10ULL, NULL, NULL, OperandInfo12 },  // Inst #223 = TAPUTD
  { 224,	2,	1,	13,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0xbULL, NULL, NULL, OperandInfo10 },  // Inst #224 = TCAGET
  { 225,	2,	1,	13,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x5ULL, NULL, NULL, OperandInfo11 },  // Inst #225 = TCAGETD
  { 226,	1,	0,	14,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0xfULL, NULL, NULL, OperandInfo5 },  // Inst #226 = TCAPUT
  { 227,	1,	0,	14,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x10ULL, NULL, NULL, OperandInfo12 },  // Inst #227 = TCAPUTD
  { 228,	2,	1,	13,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0xbULL, NULL, NULL, OperandInfo10 },  // Inst #228 = TCGET
  { 229,	2,	1,	13,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x5ULL, NULL, NULL, OperandInfo11 },  // Inst #229 = TCGETD
  { 230,	1,	0,	14,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0xfULL, NULL, NULL, OperandInfo5 },  // Inst #230 = TCPUT
  { 231,	1,	0,	14,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x10ULL, NULL, NULL, OperandInfo12 },  // Inst #231 = TCPUTD
  { 232,	2,	1,	13,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0xbULL, NULL, NULL, OperandInfo10 },  // Inst #232 = TEAGET
  { 233,	2,	1,	13,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x5ULL, NULL, NULL, OperandInfo11 },  // Inst #233 = TEAGETD
  { 234,	2,	1,	13,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0xbULL, NULL, NULL, OperandInfo10 },  // Inst #234 = TECAGET
  { 235,	2,	1,	13,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x5ULL, NULL, NULL, OperandInfo11 },  // Inst #235 = TECAGETD
  { 236,	2,	1,	13,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0xbULL, NULL, NULL, OperandInfo10 },  // Inst #236 = TECGET
  { 237,	2,	1,	13,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x5ULL, NULL, NULL, OperandInfo11 },  // Inst #237 = TECGETD
  { 238,	2,	1,	13,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0xbULL, NULL, NULL, OperandInfo10 },  // Inst #238 = TEGET
  { 239,	2,	1,	13,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x5ULL, NULL, NULL, OperandInfo11 },  // Inst #239 = TEGETD
  { 240,	2,	1,	13,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0xbULL, NULL, NULL, OperandInfo10 },  // Inst #240 = TGET
  { 241,	2,	1,	13,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x5ULL, NULL, NULL, OperandInfo11 },  // Inst #241 = TGETD
  { 242,	2,	1,	13,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0xbULL, NULL, ImplicitList1, OperandInfo10 },  // Inst #242 = TNAGET
  { 243,	2,	1,	13,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x5ULL, NULL, ImplicitList1, OperandInfo11 },  // Inst #243 = TNAGETD
  { 244,	1,	0,	14,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0xfULL, NULL, ImplicitList1, OperandInfo5 },  // Inst #244 = TNAPUT
  { 245,	1,	0,	14,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x10ULL, NULL, ImplicitList1, OperandInfo12 },  // Inst #245 = TNAPUTD
  { 246,	2,	1,	13,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0xbULL, NULL, ImplicitList1, OperandInfo10 },  // Inst #246 = TNCAGET
  { 247,	2,	1,	13,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x5ULL, NULL, ImplicitList1, OperandInfo11 },  // Inst #247 = TNCAGETD
  { 248,	1,	0,	14,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0xfULL, NULL, ImplicitList1, OperandInfo5 },  // Inst #248 = TNCAPUT
  { 249,	1,	0,	14,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x10ULL, NULL, ImplicitList1, OperandInfo12 },  // Inst #249 = TNCAPUTD
  { 250,	2,	1,	13,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0xbULL, NULL, ImplicitList1, OperandInfo10 },  // Inst #250 = TNCGET
  { 251,	2,	1,	13,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x5ULL, NULL, ImplicitList1, OperandInfo11 },  // Inst #251 = TNCGETD
  { 252,	1,	0,	14,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0xfULL, NULL, ImplicitList1, OperandInfo5 },  // Inst #252 = TNCPUT
  { 253,	1,	0,	14,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x10ULL, NULL, ImplicitList1, OperandInfo12 },  // Inst #253 = TNCPUTD
  { 254,	2,	1,	13,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0xbULL, NULL, ImplicitList1, OperandInfo10 },  // Inst #254 = TNEAGET
  { 255,	2,	1,	13,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x5ULL, NULL, ImplicitList1, OperandInfo11 },  // Inst #255 = TNEAGETD
  { 256,	2,	1,	13,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0xbULL, NULL, ImplicitList1, OperandInfo10 },  // Inst #256 = TNECAGET
  { 257,	2,	1,	13,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x5ULL, NULL, ImplicitList1, OperandInfo11 },  // Inst #257 = TNECAGETD
  { 258,	2,	1,	13,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0xbULL, NULL, ImplicitList1, OperandInfo10 },  // Inst #258 = TNECGET
  { 259,	2,	1,	13,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x5ULL, NULL, ImplicitList1, OperandInfo11 },  // Inst #259 = TNECGETD
  { 260,	2,	1,	13,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0xbULL, NULL, ImplicitList1, OperandInfo10 },  // Inst #260 = TNEGET
  { 261,	2,	1,	13,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x5ULL, NULL, ImplicitList1, OperandInfo11 },  // Inst #261 = TNEGETD
  { 262,	2,	1,	13,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0xbULL, NULL, ImplicitList1, OperandInfo10 },  // Inst #262 = TNGET
  { 263,	2,	1,	13,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x5ULL, NULL, ImplicitList1, OperandInfo11 },  // Inst #263 = TNGETD
  { 264,	1,	0,	14,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0xfULL, NULL, ImplicitList1, OperandInfo5 },  // Inst #264 = TNPUT
  { 265,	1,	0,	14,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x10ULL, NULL, ImplicitList1, OperandInfo12 },  // Inst #265 = TNPUTD
  { 266,	1,	0,	14,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0xfULL, NULL, NULL, OperandInfo5 },  // Inst #266 = TPUT
  { 267,	1,	0,	14,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x10ULL, NULL, NULL, OperandInfo12 },  // Inst #267 = TPUTD
  { 268,	2,	0,	19,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x3ULL, NULL, NULL, OperandInfo11 },  // Inst #268 = WDC
  { 269,	2,	0,	19,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x3ULL, NULL, NULL, OperandInfo11 },  // Inst #269 = WDCC
  { 270,	2,	0,	19,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x3ULL, NULL, NULL, OperandInfo11 },  // Inst #270 = WDCF
  { 271,	2,	0,	19,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x3ULL, NULL, NULL, OperandInfo11 },  // Inst #271 = WIC
  { 272,	3,	1,	1,	0,	0|(1<<MCID::Commutable)|(1<<MCID::CheapAsAMove), 0x1ULL, NULL, NULL, OperandInfo8 },  // Inst #272 = XOR
  { 273,	3,	1,	1,	0,	0|(1<<MCID::CheapAsAMove), 0x2ULL, NULL, NULL, OperandInfo9 },  // Inst #273 = XORI
};

extern const char MBlazeInstrNameData[] = {
  /* 0 */ 'L', 'A', 'A', '3', '2', 0,
  /* 6 */ 'L', 'A', 'D', '3', '2', 0,
  /* 12 */ 'B', 'R', 'L', 'I', 'D', '3', '2', 0,
  /* 20 */ 'O', 'R', 'I', '3', '2', 0,
  /* 26 */ 'A', 'D', 'D', 'I', 'K', '3', '2', 0,
  /* 34 */ 'L', 'A', 'N', '3', '2', 0,
  /* 40 */ 'L', 'A', 'O', '3', '2', 0,
  /* 46 */ 'S', 'W', 'P', '3', '2', 0,
  /* 52 */ 'C', 'A', 'S', '3', '2', 0,
  /* 58 */ 'L', 'A', 'S', '3', '2', 0,
  /* 64 */ 'L', 'A', 'X', '3', '2', 0,
  /* 70 */ 'S', 'E', 'X', 'T', '1', '6', 0,
  /* 77 */ 'S', 'E', 'X', 'T', '8', 0,
  /* 83 */ 'B', 'R', 'A', 0,
  /* 87 */ 'B', 'S', 'R', 'A', 0,
  /* 92 */ 'S', 'h', 'i', 'f', 't', 'R', 'A', 0,
  /* 100 */ 'S', 'B', 0,
  /* 103 */ 'F', 'R', 'S', 'U', 'B', 0,
  /* 109 */ 'R', 'S', 'U', 'B', 'C', 0,
  /* 115 */ 'W', 'D', 'C', 'C', 0,
  /* 120 */ 'S', 'e', 'l', 'e', 'c', 't', '_', 'F', 'C', 'C', 0,
  /* 131 */ 'S', 'e', 'l', 'e', 'c', 't', '_', 'C', 'C', 0,
  /* 141 */ 'A', 'D', 'D', 'C', 0,
  /* 146 */ 'W', 'D', 'C', 0,
  /* 150 */ 'R', 'S', 'U', 'B', 'I', 'C', 0,
  /* 157 */ 'A', 'D', 'D', 'I', 'C', 0,
  /* 163 */ 'W', 'I', 'C', 0,
  /* 167 */ 'R', 'S', 'U', 'B', 'K', 'C', 0,
  /* 174 */ 'A', 'D', 'D', 'K', 'C', 0,
  /* 180 */ 'R', 'S', 'U', 'B', 'I', 'K', 'C', 0,
  /* 188 */ 'A', 'D', 'D', 'I', 'K', 'C', 0,
  /* 195 */ 'S', 'R', 'C', 0,
  /* 199 */ 'B', 'R', 'A', 'D', 0,
  /* 204 */ 'R', 'T', 'B', 'D', 0,
  /* 209 */ 'F', 'A', 'D', 'D', 0,
  /* 214 */ 'B', 'G', 'E', 'D', 0,
  /* 219 */ 'B', 'L', 'E', 'D', 0,
  /* 224 */ 'B', 'N', 'E', 'D', 0,
  /* 229 */ 'R', 'T', 'E', 'D', 0,
  /* 234 */ 'B', 'R', 'A', 'I', 'D', 0,
  /* 240 */ 'B', 'G', 'E', 'I', 'D', 0,
  /* 246 */ 'B', 'L', 'E', 'I', 'D', 0,
  /* 252 */ 'B', 'N', 'E', 'I', 'D', 0,
  /* 258 */ 'B', 'R', 'A', 'L', 'I', 'D', 0,
  /* 265 */ 'B', 'R', 'L', 'I', 'D', 0,
  /* 271 */ 'B', 'E', 'Q', 'I', 'D', 0,
  /* 277 */ 'B', 'R', 'I', 'D', 0,
  /* 282 */ 'B', 'G', 'T', 'I', 'D', 0,
  /* 288 */ 'B', 'L', 'T', 'I', 'D', 0,
  /* 294 */ 'R', 'T', 'I', 'D', 0,
  /* 299 */ 'B', 'R', 'A', 'L', 'D', 0,
  /* 305 */ 'B', 'R', 'L', 'D', 0,
  /* 310 */ 'A', 'N', 'D', 0,
  /* 314 */ 'L', 'I', 'F', 'E', 'T', 'I', 'M', 'E', '_', 'E', 'N', 'D', 0,
  /* 327 */ 'B', 'E', 'Q', 'D', 0,
  /* 332 */ 'B', 'R', 'D', 0,
  /* 336 */ 'R', 'T', 'S', 'D', 0,
  /* 341 */ 'T', 'N', 'E', 'C', 'A', 'G', 'E', 'T', 'D', 0,
  /* 351 */ 'T', 'E', 'C', 'A', 'G', 'E', 'T', 'D', 0,
  /* 360 */ 'T', 'N', 'C', 'A', 'G', 'E', 'T', 'D', 0,
  /* 369 */ 'T', 'C', 'A', 'G', 'E', 'T', 'D', 0,
  /* 377 */ 'T', 'N', 'E', 'A', 'G', 'E', 'T', 'D', 0,
  /* 386 */ 'T', 'E', 'A', 'G', 'E', 'T', 'D', 0,
  /* 394 */ 'T', 'N', 'A', 'G', 'E', 'T', 'D', 0,
  /* 402 */ 'T', 'A', 'G', 'E', 'T', 'D', 0,
  /* 409 */ 'T', 'N', 'E', 'C', 'G', 'E', 'T', 'D', 0,
  /* 418 */ 'T', 'E', 'C', 'G', 'E', 'T', 'D', 0,
  /* 426 */ 'T', 'N', 'C', 'G', 'E', 'T', 'D', 0,
  /* 434 */ 'T', 'C', 'G', 'E', 'T', 'D', 0,
  /* 441 */ 'T', 'N', 'E', 'G', 'E', 'T', 'D', 0,
  /* 449 */ 'T', 'E', 'G', 'E', 'T', 'D', 0,
  /* 456 */ 'T', 'N', 'G', 'E', 'T', 'D', 0,
  /* 463 */ 'T', 'G', 'E', 'T', 'D', 0,
  /* 469 */ 'B', 'G', 'T', 'D', 0,
  /* 474 */ 'B', 'L', 'T', 'D', 0,
  /* 479 */ 'T', 'N', 'C', 'A', 'P', 'U', 'T', 'D', 0,
  /* 488 */ 'T', 'C', 'A', 'P', 'U', 'T', 'D', 0,
  /* 496 */ 'T', 'N', 'A', 'P', 'U', 'T', 'D', 0,
  /* 504 */ 'T', 'A', 'P', 'U', 'T', 'D', 0,
  /* 511 */ 'T', 'N', 'C', 'P', 'U', 'T', 'D', 0,
  /* 519 */ 'T', 'C', 'P', 'U', 'T', 'D', 0,
  /* 526 */ 'T', 'N', 'P', 'U', 'T', 'D', 0,
  /* 533 */ 'T', 'P', 'U', 'T', 'D', 0,
  /* 539 */ 'R', 'E', 'G', '_', 'S', 'E', 'Q', 'U', 'E', 'N', 'C', 'E', 0,
  /* 552 */ 'B', 'G', 'E', 0,
  /* 556 */ 'F', 'C', 'M', 'P', '_', 'G', 'E', 0,
  /* 564 */ 'B', 'L', 'E', 0,
  /* 568 */ 'B', 'U', 'N', 'D', 'L', 'E', 0,
  /* 575 */ 'F', 'C', 'M', 'P', '_', 'L', 'E', 0,
  /* 583 */ 'B', 'N', 'E', 0,
  /* 587 */ 'P', 'C', 'M', 'P', 'N', 'E', 0,
  /* 594 */ 'F', 'C', 'M', 'P', '_', 'N', 'E', 0,
  /* 602 */ 'D', 'B', 'G', '_', 'V', 'A', 'L', 'U', 'E', 0,
  /* 612 */ 'P', 'C', 'M', 'P', 'B', 'F', 0,
  /* 619 */ 'W', 'D', 'C', 'F', 0,
  /* 624 */ 'I', 'M', 'P', 'L', 'I', 'C', 'I', 'T', '_', 'D', 'E', 'F', 0,
  /* 637 */ 'L', 'W', 'F', 0,
  /* 641 */ 'S', 'W', 'F', 0,
  /* 645 */ 'E', 'X', 'T', 'R', 'A', 'C', 'T', '_', 'S', 'U', 'B', 'R', 'E', 'G', 0,
  /* 660 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'S', 'U', 'B', 'R', 'E', 'G', 0,
  /* 674 */ 'S', 'U', 'B', 'R', 'E', 'G', '_', 'T', 'O', '_', 'R', 'E', 'G', 0,
  /* 688 */ 'M', 'U', 'L', 'H', 0,
  /* 693 */ 'S', 'H', 0,
  /* 696 */ 'B', 'R', 'A', 'I', 0,
  /* 701 */ 'B', 'S', 'R', 'A', 'I', 0,
  /* 707 */ 'S', 'B', 'I', 0,
  /* 711 */ 'R', 'S', 'U', 'B', 'I', 0,
  /* 717 */ 'A', 'D', 'D', 'I', 0,
  /* 722 */ 'A', 'N', 'D', 'I', 0,
  /* 727 */ 'B', 'G', 'E', 'I', 0,
  /* 732 */ 'B', 'L', 'E', 'I', 0,
  /* 737 */ 'B', 'N', 'E', 'I', 0,
  /* 742 */ 'L', 'W', 'F', 'I', 0,
  /* 747 */ 'S', 'W', 'F', 'I', 0,
  /* 752 */ 'P', 'H', 'I', 0,
  /* 756 */ 'S', 'H', 'I', 0,
  /* 760 */ 'B', 'R', 'K', 'I', 0,
  /* 765 */ 'B', 'S', 'L', 'L', 'I', 0,
  /* 771 */ 'B', 'S', 'R', 'L', 'I', 0,
  /* 777 */ 'M', 'U', 'L', 'I', 0,
  /* 782 */ 'A', 'N', 'D', 'N', 'I', 0,
  /* 788 */ 'B', 'E', 'Q', 'I', 0,
  /* 793 */ 'B', 'R', 'I', 0,
  /* 797 */ 'F', 'O', 'R', 'I', 0,
  /* 802 */ 'X', 'O', 'R', 'I', 0,
  /* 807 */ 'B', 'G', 'T', 'I', 0,
  /* 812 */ 'B', 'L', 'T', 'I', 0,
  /* 817 */ 'L', 'B', 'U', 'I', 0,
  /* 822 */ 'L', 'H', 'U', 'I', 0,
  /* 827 */ 'L', 'W', 'I', 0,
  /* 831 */ 'S', 'W', 'I', 0,
  /* 835 */ 'R', 'S', 'U', 'B', 'K', 0,
  /* 841 */ 'A', 'D', 'D', 'K', 0,
  /* 846 */ 'R', 'S', 'U', 'B', 'I', 'K', 0,
  /* 853 */ 'A', 'D', 'D', 'I', 'K', 0,
  /* 859 */ 'B', 'R', 'K', 0,
  /* 863 */ 'G', 'C', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 872 */ 'P', 'R', 'O', 'L', 'O', 'G', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 885 */ 'E', 'H', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 894 */ 'K', 'I', 'L', 'L', 0,
  /* 899 */ 'B', 'S', 'L', 'L', 0,
  /* 904 */ 'B', 'S', 'R', 'L', 0,
  /* 909 */ 'S', 'h', 'i', 'f', 't', 'R', 'L', 0,
  /* 917 */ 'F', 'M', 'U', 'L', 0,
  /* 922 */ 'S', 'h', 'i', 'f', 't', 'L', 0,
  /* 929 */ 'I', 'M', 'M', 0,
  /* 933 */ 'I', 'N', 'L', 'I', 'N', 'E', 'A', 'S', 'M', 0,
  /* 943 */ 'A', 'N', 'D', 'N', 0,
  /* 948 */ 'F', 'C', 'M', 'P', '_', 'U', 'N', 0,
  /* 956 */ 'A', 'D', 'J', 'C', 'A', 'L', 'L', 'S', 'T', 'A', 'C', 'K', 'D', 'O', 'W', 'N', 0,
  /* 973 */ 'C', 'M', 'P', 0,
  /* 977 */ 'N', 'O', 'P', 0,
  /* 981 */ 'A', 'D', 'J', 'C', 'A', 'L', 'L', 'S', 'T', 'A', 'C', 'K', 'U', 'P', 0,
  /* 996 */ 'B', 'E', 'Q', 0,
  /* 1000 */ 'P', 'C', 'M', 'P', 'E', 'Q', 0,
  /* 1007 */ 'F', 'C', 'M', 'P', '_', 'E', 'Q', 0,
  /* 1015 */ 'I', 'D', 'M', 'E', 'M', 'B', 'A', 'R', 0,
  /* 1024 */ 'I', 'M', 'E', 'M', 'B', 'A', 'R', 0,
  /* 1032 */ 'S', 'B', 'R', 0,
  /* 1036 */ 'M', 'E', 'M', 'B', 'A', 'R', 'R', 'I', 'E', 'R', 0,
  /* 1047 */ 'S', 'H', 'R', 0,
  /* 1051 */ 'M', 'S', 'R', 'C', 'L', 'R', 0,
  /* 1058 */ 'X', 'O', 'R', 0,
  /* 1062 */ 'L', 'B', 'U', 'R', 0,
  /* 1067 */ 'L', 'H', 'U', 'R', 0,
  /* 1072 */ 'L', 'W', 'R', 0,
  /* 1076 */ 'S', 'W', 'R', 0,
  /* 1080 */ 'M', 'F', 'S', 0,
  /* 1084 */ 'C', 'O', 'P', 'Y', '_', 'T', 'O', '_', 'R', 'E', 'G', 'C', 'L', 'A', 'S', 'S', 0,
  /* 1101 */ 'M', 'T', 'S', 0,
  /* 1105 */ 'T', 'N', 'E', 'C', 'A', 'G', 'E', 'T', 0,
  /* 1114 */ 'T', 'E', 'C', 'A', 'G', 'E', 'T', 0,
  /* 1122 */ 'T', 'N', 'C', 'A', 'G', 'E', 'T', 0,
  /* 1130 */ 'T', 'C', 'A', 'G', 'E', 'T', 0,
  /* 1137 */ 'T', 'N', 'E', 'A', 'G', 'E', 'T', 0,
  /* 1145 */ 'T', 'E', 'A', 'G', 'E', 'T', 0,
  /* 1152 */ 'T', 'N', 'A', 'G', 'E', 'T', 0,
  /* 1159 */ 'T', 'A', 'G', 'E', 'T', 0,
  /* 1165 */ 'T', 'N', 'E', 'C', 'G', 'E', 'T', 0,
  /* 1173 */ 'T', 'E', 'C', 'G', 'E', 'T', 0,
  /* 1180 */ 'T', 'N', 'C', 'G', 'E', 'T', 0,
  /* 1187 */ 'T', 'C', 'G', 'E', 'T', 0,
  /* 1193 */ 'T', 'N', 'E', 'G', 'E', 'T', 0,
  /* 1200 */ 'T', 'E', 'G', 'E', 'T', 0,
  /* 1206 */ 'T', 'N', 'G', 'E', 'T', 0,
  /* 1212 */ 'T', 'G', 'E', 'T', 0,
  /* 1217 */ 'M', 'S', 'R', 'S', 'E', 'T', 0,
  /* 1224 */ 'B', 'G', 'T', 0,
  /* 1228 */ 'F', 'C', 'M', 'P', '_', 'G', 'T', 0,
  /* 1236 */ 'B', 'L', 'T', 0,
  /* 1240 */ 'F', 'L', 'T', 0,
  /* 1244 */ 'F', 'C', 'M', 'P', '_', 'L', 'T', 0,
  /* 1252 */ 'F', 'I', 'N', 'T', 0,
  /* 1257 */ 'L', 'I', 'F', 'E', 'T', 'I', 'M', 'E', '_', 'S', 'T', 'A', 'R', 'T', 0,
  /* 1272 */ 'F', 'S', 'Q', 'R', 'T', 0,
  /* 1278 */ 'T', 'N', 'C', 'A', 'P', 'U', 'T', 0,
  /* 1286 */ 'T', 'C', 'A', 'P', 'U', 'T', 0,
  /* 1293 */ 'T', 'N', 'A', 'P', 'U', 'T', 0,
  /* 1300 */ 'T', 'A', 'P', 'U', 'T', 0,
  /* 1306 */ 'T', 'N', 'C', 'P', 'U', 'T', 0,
  /* 1313 */ 'T', 'C', 'P', 'U', 'T', 0,
  /* 1319 */ 'T', 'N', 'P', 'U', 'T', 0,
  /* 1325 */ 'T', 'P', 'U', 'T', 0,
  /* 1330 */ 'L', 'B', 'U', 0,
  /* 1334 */ 'M', 'U', 'L', 'H', 'U', 0,
  /* 1340 */ 'C', 'M', 'P', 'U', 0,
  /* 1345 */ 'M', 'U', 'L', 'H', 'S', 'U', 0,
  /* 1352 */ 'I', 'D', 'I', 'V', 'U', 0,
  /* 1358 */ 'F', 'D', 'I', 'V', 0,
  /* 1363 */ 'I', 'D', 'I', 'V', 0,
  /* 1368 */ 'L', 'W', 0,
  /* 1371 */ 'S', 'W', 0,
  /* 1374 */ 'L', 'W', 'X', 0,
  /* 1378 */ 'S', 'W', 'X', 0,
  /* 1382 */ 'C', 'O', 'P', 'Y', 0,
  /* 1387 */ 'C', 'L', 'Z', 0,
};

extern const unsigned MBlazeInstrNameIndices[] = {
    752U, 933U, 872U, 885U, 863U, 894U, 645U, 660U, 
    624U, 674U, 1084U, 602U, 539U, 1382U, 568U, 1257U, 
    314U, 210U, 141U, 717U, 157U, 853U, 26U, 188U, 
    841U, 174U, 956U, 981U, 1109U, 345U, 310U, 722U, 
    943U, 782U, 1281U, 482U, 996U, 327U, 788U, 271U, 
    552U, 214U, 727U, 240U, 1224U, 469U, 807U, 282U, 
    564U, 219U, 732U, 246U, 1236U, 474U, 812U, 288U, 
    583U, 224U, 737U, 252U, 1033U, 83U, 199U, 696U, 
    234U, 299U, 258U, 332U, 793U, 277U, 859U, 760U, 
    305U, 265U, 12U, 899U, 765U, 87U, 701U, 904U, 
    771U, 1108U, 344U, 1280U, 481U, 52U, 1168U, 412U, 
    1387U, 973U, 1340U, 1308U, 513U, 1016U, 1139U, 379U, 
    1107U, 343U, 1167U, 411U, 1195U, 443U, 209U, 1007U, 
    556U, 1228U, 575U, 1244U, 594U, 948U, 1358U, 1252U, 
    1240U, 917U, 797U, 103U, 1272U, 1110U, 346U, 1363U, 
    1352U, 1015U, 1024U, 929U, 0U, 6U, 34U, 40U, 
    58U, 64U, 1330U, 817U, 1062U, 1336U, 822U, 1067U, 
    1368U, 637U, 742U, 827U, 1072U, 1374U, 1036U, 1080U, 
    1051U, 1217U, 1101U, 918U, 688U, 1345U, 1334U, 777U, 
    1153U, 395U, 1294U, 497U, 1123U, 361U, 1279U, 480U, 
    1181U, 427U, 1307U, 512U, 1138U, 378U, 1106U, 342U, 
    1166U, 410U, 1194U, 442U, 1207U, 457U, 977U, 1320U, 
    527U, 1059U, 798U, 20U, 612U, 1000U, 587U, 1282U, 
    483U, 104U, 109U, 711U, 150U, 846U, 180U, 835U, 
    167U, 204U, 229U, 294U, 336U, 100U, 707U, 1032U, 
    70U, 77U, 693U, 756U, 1047U, 88U, 195U, 905U, 
    1371U, 641U, 747U, 831U, 46U, 1076U, 1378U, 131U, 
    120U, 922U, 92U, 909U, 1159U, 402U, 1300U, 504U, 
    1130U, 369U, 1286U, 488U, 1187U, 434U, 1313U, 519U, 
    1145U, 386U, 1114U, 351U, 1173U, 418U, 1200U, 449U, 
    1212U, 463U, 1152U, 394U, 1293U, 496U, 1122U, 360U, 
    1278U, 479U, 1180U, 426U, 1306U, 511U, 1137U, 377U, 
    1105U, 341U, 1165U, 409U, 1193U, 441U, 1206U, 456U, 
    1319U, 526U, 1325U, 533U, 146U, 115U, 619U, 163U, 
    1058U, 802U, 
};

static inline void InitMBlazeMCInstrInfo(MCInstrInfo *II) {
  II->InitMCInstrInfo(MBlazeInsts, MBlazeInstrNameIndices, MBlazeInstrNameData, 274);
}

} // End llvm namespace 
#endif // GET_INSTRINFO_MC_DESC


#ifdef GET_INSTRINFO_HEADER
#undef GET_INSTRINFO_HEADER
namespace llvm {
struct MBlazeGenInstrInfo : public TargetInstrInfoImpl {
  explicit MBlazeGenInstrInfo(int SO = -1, int DO = -1);
};
} // End llvm namespace 
#endif // GET_INSTRINFO_HEADER


#ifdef GET_INSTRINFO_CTOR
#undef GET_INSTRINFO_CTOR
namespace llvm {
extern const MCInstrDesc MBlazeInsts[];
extern const unsigned MBlazeInstrNameIndices[];
extern const char MBlazeInstrNameData[];
MBlazeGenInstrInfo::MBlazeGenInstrInfo(int SO, int DO)
  : TargetInstrInfoImpl(SO, DO) {
  InitMCInstrInfo(MBlazeInsts, MBlazeInstrNameIndices, MBlazeInstrNameData, 274);
}
} // End llvm namespace 
#endif // GET_INSTRINFO_CTOR

