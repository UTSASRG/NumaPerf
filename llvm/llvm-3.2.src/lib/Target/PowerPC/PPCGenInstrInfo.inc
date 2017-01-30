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

namespace PPC {
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
    ADD4	= 17,
    ADD8	= 18,
    ADDC	= 19,
    ADDC8	= 20,
    ADDE	= 21,
    ADDE8	= 22,
    ADDI	= 23,
    ADDI8	= 24,
    ADDI8L	= 25,
    ADDIC	= 26,
    ADDIC8	= 27,
    ADDICo	= 28,
    ADDIL	= 29,
    ADDIS	= 30,
    ADDIS8	= 31,
    ADDME	= 32,
    ADDME8	= 33,
    ADDZE	= 34,
    ADDZE8	= 35,
    ADJCALLSTACKDOWN	= 36,
    ADJCALLSTACKUP	= 37,
    AND	= 38,
    AND8	= 39,
    ANDC	= 40,
    ANDC8	= 41,
    ANDISo	= 42,
    ANDISo8	= 43,
    ANDIo	= 44,
    ANDIo8	= 45,
    ATOMIC_CMP_SWAP_I16	= 46,
    ATOMIC_CMP_SWAP_I32	= 47,
    ATOMIC_CMP_SWAP_I64	= 48,
    ATOMIC_CMP_SWAP_I8	= 49,
    ATOMIC_LOAD_ADD_I16	= 50,
    ATOMIC_LOAD_ADD_I32	= 51,
    ATOMIC_LOAD_ADD_I64	= 52,
    ATOMIC_LOAD_ADD_I8	= 53,
    ATOMIC_LOAD_AND_I16	= 54,
    ATOMIC_LOAD_AND_I32	= 55,
    ATOMIC_LOAD_AND_I64	= 56,
    ATOMIC_LOAD_AND_I8	= 57,
    ATOMIC_LOAD_NAND_I16	= 58,
    ATOMIC_LOAD_NAND_I32	= 59,
    ATOMIC_LOAD_NAND_I64	= 60,
    ATOMIC_LOAD_NAND_I8	= 61,
    ATOMIC_LOAD_OR_I16	= 62,
    ATOMIC_LOAD_OR_I32	= 63,
    ATOMIC_LOAD_OR_I64	= 64,
    ATOMIC_LOAD_OR_I8	= 65,
    ATOMIC_LOAD_SUB_I16	= 66,
    ATOMIC_LOAD_SUB_I32	= 67,
    ATOMIC_LOAD_SUB_I64	= 68,
    ATOMIC_LOAD_SUB_I8	= 69,
    ATOMIC_LOAD_XOR_I16	= 70,
    ATOMIC_LOAD_XOR_I32	= 71,
    ATOMIC_LOAD_XOR_I64	= 72,
    ATOMIC_LOAD_XOR_I8	= 73,
    ATOMIC_SWAP_I16	= 74,
    ATOMIC_SWAP_I32	= 75,
    ATOMIC_SWAP_I64	= 76,
    ATOMIC_SWAP_I8	= 77,
    B	= 78,
    BCC	= 79,
    BCTR	= 80,
    BCTR8	= 81,
    BCTRL8_Darwin	= 82,
    BCTRL8_ELF	= 83,
    BCTRL_Darwin	= 84,
    BCTRL_SVR4	= 85,
    BDNZ	= 86,
    BDNZ8	= 87,
    BDZ	= 88,
    BDZ8	= 89,
    BL8_Darwin	= 90,
    BL8_ELF	= 91,
    BL8_NOP_ELF	= 92,
    BLA8_Darwin	= 93,
    BLA8_ELF	= 94,
    BLA8_NOP_ELF	= 95,
    BLA_Darwin	= 96,
    BLA_SVR4	= 97,
    BLR	= 98,
    BL_Darwin	= 99,
    BL_SVR4	= 100,
    CMPD	= 101,
    CMPDI	= 102,
    CMPLD	= 103,
    CMPLDI	= 104,
    CMPLW	= 105,
    CMPLWI	= 106,
    CMPW	= 107,
    CMPWI	= 108,
    CNTLZD	= 109,
    CNTLZW	= 110,
    CR6SET	= 111,
    CR6UNSET	= 112,
    CREQV	= 113,
    CROR	= 114,
    CRSET	= 115,
    CRUNSET	= 116,
    DCBA	= 117,
    DCBF	= 118,
    DCBI	= 119,
    DCBST	= 120,
    DCBT	= 121,
    DCBTST	= 122,
    DCBZ	= 123,
    DCBZL	= 124,
    DIVD	= 125,
    DIVDU	= 126,
    DIVW	= 127,
    DIVWU	= 128,
    DSS	= 129,
    DSSALL	= 130,
    DST	= 131,
    DST64	= 132,
    DSTST	= 133,
    DSTST64	= 134,
    DSTSTT	= 135,
    DSTSTT64	= 136,
    DSTT	= 137,
    DSTT64	= 138,
    DYNALLOC	= 139,
    DYNALLOC8	= 140,
    EQV	= 141,
    EQV8	= 142,
    EXTSB	= 143,
    EXTSB8	= 144,
    EXTSH	= 145,
    EXTSH8	= 146,
    EXTSW	= 147,
    EXTSW_32	= 148,
    EXTSW_32_64	= 149,
    FABSD	= 150,
    FABSS	= 151,
    FADD	= 152,
    FADDS	= 153,
    FADDrtz	= 154,
    FCFID	= 155,
    FCMPUD	= 156,
    FCMPUS	= 157,
    FCTIDZ	= 158,
    FCTIWZ	= 159,
    FDIV	= 160,
    FDIVS	= 161,
    FMADD	= 162,
    FMADDS	= 163,
    FMR	= 164,
    FMSUB	= 165,
    FMSUBS	= 166,
    FMUL	= 167,
    FMULS	= 168,
    FNABSD	= 169,
    FNABSS	= 170,
    FNEGD	= 171,
    FNEGS	= 172,
    FNMADD	= 173,
    FNMADDS	= 174,
    FNMSUB	= 175,
    FNMSUBS	= 176,
    FRSP	= 177,
    FSELD	= 178,
    FSELS	= 179,
    FSQRT	= 180,
    FSQRTS	= 181,
    FSUB	= 182,
    FSUBS	= 183,
    ISEL	= 184,
    ISEL8	= 185,
    LA	= 186,
    LBZ	= 187,
    LBZ8	= 188,
    LBZU	= 189,
    LBZU8	= 190,
    LBZUX	= 191,
    LBZUX8	= 192,
    LBZX	= 193,
    LBZX8	= 194,
    LD	= 195,
    LDARX	= 196,
    LDU	= 197,
    LDUX	= 198,
    LDX	= 199,
    LDinto_toc	= 200,
    LDtoc	= 201,
    LDtocCPT	= 202,
    LDtocJTI	= 203,
    LDtoc_restore	= 204,
    LFD	= 205,
    LFDU	= 206,
    LFDUX	= 207,
    LFDX	= 208,
    LFS	= 209,
    LFSU	= 210,
    LFSUX	= 211,
    LFSX	= 212,
    LHA	= 213,
    LHA8	= 214,
    LHAU	= 215,
    LHAU8	= 216,
    LHAUX	= 217,
    LHAUX8	= 218,
    LHAX	= 219,
    LHAX8	= 220,
    LHBRX	= 221,
    LHZ	= 222,
    LHZ8	= 223,
    LHZU	= 224,
    LHZU8	= 225,
    LHZUX	= 226,
    LHZUX8	= 227,
    LHZX	= 228,
    LHZX8	= 229,
    LI	= 230,
    LI8	= 231,
    LIS	= 232,
    LIS8	= 233,
    LVEBX	= 234,
    LVEHX	= 235,
    LVEWX	= 236,
    LVSL	= 237,
    LVSR	= 238,
    LVX	= 239,
    LVXL	= 240,
    LWA	= 241,
    LWARX	= 242,
    LWAUX	= 243,
    LWAX	= 244,
    LWBRX	= 245,
    LWZ	= 246,
    LWZ8	= 247,
    LWZU	= 248,
    LWZU8	= 249,
    LWZUX	= 250,
    LWZUX8	= 251,
    LWZX	= 252,
    LWZX8	= 253,
    MCRF	= 254,
    MFCR	= 255,
    MFCR8	= 256,
    MFCR8pseud	= 257,
    MFCRpseud	= 258,
    MFCTR	= 259,
    MFCTR8	= 260,
    MFFS	= 261,
    MFLR	= 262,
    MFLR8	= 263,
    MFOCRF	= 264,
    MFTB8	= 265,
    MFVRSAVE	= 266,
    MFVSCR	= 267,
    MTCRF	= 268,
    MTCRF8	= 269,
    MTCTR	= 270,
    MTCTR8	= 271,
    MTFSB0	= 272,
    MTFSB1	= 273,
    MTFSF	= 274,
    MTLR	= 275,
    MTLR8	= 276,
    MTVRSAVE	= 277,
    MTVSCR	= 278,
    MULHD	= 279,
    MULHDU	= 280,
    MULHW	= 281,
    MULHWU	= 282,
    MULLD	= 283,
    MULLI	= 284,
    MULLW	= 285,
    MovePCtoLR	= 286,
    MovePCtoLR8	= 287,
    NAND	= 288,
    NAND8	= 289,
    NEG	= 290,
    NEG8	= 291,
    NOP	= 292,
    NOR	= 293,
    NOR8	= 294,
    OR	= 295,
    OR8	= 296,
    ORC	= 297,
    ORC8	= 298,
    ORI	= 299,
    ORI8	= 300,
    ORIS	= 301,
    ORIS8	= 302,
    RESTORE_CR	= 303,
    RLDCL	= 304,
    RLDICL	= 305,
    RLDICR	= 306,
    RLDIMI	= 307,
    RLWIMI	= 308,
    RLWINM	= 309,
    RLWINM8	= 310,
    RLWINMo	= 311,
    RLWNM	= 312,
    SELECT_CC_F4	= 313,
    SELECT_CC_F8	= 314,
    SELECT_CC_I4	= 315,
    SELECT_CC_I8	= 316,
    SELECT_CC_VRRC	= 317,
    SLD	= 318,
    SLW	= 319,
    SPILL_CR	= 320,
    SRAD	= 321,
    SRADI	= 322,
    SRAW	= 323,
    SRAWI	= 324,
    SRD	= 325,
    SRW	= 326,
    STB	= 327,
    STB8	= 328,
    STBU	= 329,
    STBU8	= 330,
    STBUX	= 331,
    STBUX8	= 332,
    STBX	= 333,
    STBX8	= 334,
    STD	= 335,
    STDCX	= 336,
    STDU	= 337,
    STDUX	= 338,
    STDX	= 339,
    STDX_32	= 340,
    STD_32	= 341,
    STFD	= 342,
    STFDU	= 343,
    STFDUX	= 344,
    STFDX	= 345,
    STFIWX	= 346,
    STFS	= 347,
    STFSU	= 348,
    STFSUX	= 349,
    STFSX	= 350,
    STH	= 351,
    STH8	= 352,
    STHBRX	= 353,
    STHU	= 354,
    STHU8	= 355,
    STHUX	= 356,
    STHUX8	= 357,
    STHX	= 358,
    STHX8	= 359,
    STVEBX	= 360,
    STVEHX	= 361,
    STVEWX	= 362,
    STVX	= 363,
    STVXL	= 364,
    STW	= 365,
    STW8	= 366,
    STWBRX	= 367,
    STWCX	= 368,
    STWU	= 369,
    STWU8	= 370,
    STWUX	= 371,
    STWUX8	= 372,
    STWX	= 373,
    STWX8	= 374,
    SUBF	= 375,
    SUBF8	= 376,
    SUBFC	= 377,
    SUBFC8	= 378,
    SUBFE	= 379,
    SUBFE8	= 380,
    SUBFIC	= 381,
    SUBFIC8	= 382,
    SUBFME	= 383,
    SUBFME8	= 384,
    SUBFZE	= 385,
    SUBFZE8	= 386,
    SYNC	= 387,
    TAILB	= 388,
    TAILB8	= 389,
    TAILBA	= 390,
    TAILBA8	= 391,
    TAILBCTR	= 392,
    TAILBCTR8	= 393,
    TCRETURNai	= 394,
    TCRETURNai8	= 395,
    TCRETURNdi	= 396,
    TCRETURNdi8	= 397,
    TCRETURNri	= 398,
    TCRETURNri8	= 399,
    TRAP	= 400,
    UPDATE_VRSAVE	= 401,
    VADDCUW	= 402,
    VADDFP	= 403,
    VADDSBS	= 404,
    VADDSHS	= 405,
    VADDSWS	= 406,
    VADDUBM	= 407,
    VADDUBS	= 408,
    VADDUHM	= 409,
    VADDUHS	= 410,
    VADDUWM	= 411,
    VADDUWS	= 412,
    VAND	= 413,
    VANDC	= 414,
    VAVGSB	= 415,
    VAVGSH	= 416,
    VAVGSW	= 417,
    VAVGUB	= 418,
    VAVGUH	= 419,
    VAVGUW	= 420,
    VCFSX	= 421,
    VCFSX_0	= 422,
    VCFUX	= 423,
    VCFUX_0	= 424,
    VCMPBFP	= 425,
    VCMPBFPo	= 426,
    VCMPEQFP	= 427,
    VCMPEQFPo	= 428,
    VCMPEQUB	= 429,
    VCMPEQUBo	= 430,
    VCMPEQUH	= 431,
    VCMPEQUHo	= 432,
    VCMPEQUW	= 433,
    VCMPEQUWo	= 434,
    VCMPGEFP	= 435,
    VCMPGEFPo	= 436,
    VCMPGTFP	= 437,
    VCMPGTFPo	= 438,
    VCMPGTSB	= 439,
    VCMPGTSBo	= 440,
    VCMPGTSH	= 441,
    VCMPGTSHo	= 442,
    VCMPGTSW	= 443,
    VCMPGTSWo	= 444,
    VCMPGTUB	= 445,
    VCMPGTUBo	= 446,
    VCMPGTUH	= 447,
    VCMPGTUHo	= 448,
    VCMPGTUW	= 449,
    VCMPGTUWo	= 450,
    VCTSXS	= 451,
    VCTSXS_0	= 452,
    VCTUXS	= 453,
    VCTUXS_0	= 454,
    VEXPTEFP	= 455,
    VLOGEFP	= 456,
    VMADDFP	= 457,
    VMAXFP	= 458,
    VMAXSB	= 459,
    VMAXSH	= 460,
    VMAXSW	= 461,
    VMAXUB	= 462,
    VMAXUH	= 463,
    VMAXUW	= 464,
    VMHADDSHS	= 465,
    VMHRADDSHS	= 466,
    VMINFP	= 467,
    VMINSB	= 468,
    VMINSH	= 469,
    VMINSW	= 470,
    VMINUB	= 471,
    VMINUH	= 472,
    VMINUW	= 473,
    VMLADDUHM	= 474,
    VMRGHB	= 475,
    VMRGHH	= 476,
    VMRGHW	= 477,
    VMRGLB	= 478,
    VMRGLH	= 479,
    VMRGLW	= 480,
    VMSUMMBM	= 481,
    VMSUMSHM	= 482,
    VMSUMSHS	= 483,
    VMSUMUBM	= 484,
    VMSUMUHM	= 485,
    VMSUMUHS	= 486,
    VMULESB	= 487,
    VMULESH	= 488,
    VMULEUB	= 489,
    VMULEUH	= 490,
    VMULOSB	= 491,
    VMULOSH	= 492,
    VMULOUB	= 493,
    VMULOUH	= 494,
    VNMSUBFP	= 495,
    VNOR	= 496,
    VOR	= 497,
    VPERM	= 498,
    VPKPX	= 499,
    VPKSHSS	= 500,
    VPKSHUS	= 501,
    VPKSWSS	= 502,
    VPKSWUS	= 503,
    VPKUHUM	= 504,
    VPKUHUS	= 505,
    VPKUWUM	= 506,
    VPKUWUS	= 507,
    VREFP	= 508,
    VRFIM	= 509,
    VRFIN	= 510,
    VRFIP	= 511,
    VRFIZ	= 512,
    VRLB	= 513,
    VRLH	= 514,
    VRLW	= 515,
    VRSQRTEFP	= 516,
    VSEL	= 517,
    VSL	= 518,
    VSLB	= 519,
    VSLDOI	= 520,
    VSLH	= 521,
    VSLO	= 522,
    VSLW	= 523,
    VSPLTB	= 524,
    VSPLTH	= 525,
    VSPLTISB	= 526,
    VSPLTISH	= 527,
    VSPLTISW	= 528,
    VSPLTW	= 529,
    VSR	= 530,
    VSRAB	= 531,
    VSRAH	= 532,
    VSRAW	= 533,
    VSRB	= 534,
    VSRH	= 535,
    VSRO	= 536,
    VSRW	= 537,
    VSUBCUW	= 538,
    VSUBFP	= 539,
    VSUBSBS	= 540,
    VSUBSHS	= 541,
    VSUBSWS	= 542,
    VSUBUBM	= 543,
    VSUBUBS	= 544,
    VSUBUHM	= 545,
    VSUBUHS	= 546,
    VSUBUWM	= 547,
    VSUBUWS	= 548,
    VSUM2SWS	= 549,
    VSUM4SBS	= 550,
    VSUM4SHS	= 551,
    VSUM4UBS	= 552,
    VSUMSWS	= 553,
    VUPKHPX	= 554,
    VUPKHSB	= 555,
    VUPKHSH	= 556,
    VUPKLPX	= 557,
    VUPKLSB	= 558,
    VUPKLSH	= 559,
    VXOR	= 560,
    V_SET0	= 561,
    XOR	= 562,
    XOR8	= 563,
    XORI	= 564,
    XORI8	= 565,
    XORIS	= 566,
    XORIS8	= 567,
    INSTRUCTION_LIST_END = 568
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

static const uint16_t ImplicitList1[] = { PPC::CARRY, 0 };
static const uint16_t ImplicitList2[] = { PPC::R1, 0 };
static const uint16_t ImplicitList3[] = { PPC::CR0, 0 };
static const uint16_t ImplicitList4[] = { PPC::CTR, 0 };
static const uint16_t ImplicitList5[] = { PPC::CTR8, PPC::RM, 0 };
static const uint16_t ImplicitList6[] = { PPC::LR8, 0 };
static const uint16_t ImplicitList7[] = { PPC::X11, PPC::CTR8, PPC::RM, 0 };
static const uint16_t ImplicitList8[] = { PPC::CTR, PPC::RM, 0 };
static const uint16_t ImplicitList9[] = { PPC::LR, 0 };
static const uint16_t ImplicitList10[] = { PPC::CTR8, 0 };
static const uint16_t ImplicitList11[] = { PPC::RM, 0 };
static const uint16_t ImplicitList12[] = { PPC::LR, PPC::RM, 0 };
static const uint16_t ImplicitList13[] = { PPC::CR1EQ, 0 };
static const uint16_t ImplicitList14[] = { PPC::X1, 0 };
static const uint16_t ImplicitList15[] = { PPC::CR6, 0 };

static const MCOperandInfo OperandInfo2[] = { { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo3[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo4[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo5[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo6[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo7[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo8[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo9[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo10[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo11[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo12[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo13[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo14[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo15[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo16[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo17[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo18[] = { { -1, 0|(1<<MCOI::Predicate), MCOI::OPERAND_UNKNOWN, 0 }, { PPC::CRRCRegClassID, 0|(1<<MCOI::Predicate), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo19[] = { { -1, 0|(1<<MCOI::Predicate), MCOI::OPERAND_UNKNOWN, 0 }, { PPC::CRRCRegClassID, 0|(1<<MCOI::Predicate), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo20[] = { { PPC::CRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo21[] = { { PPC::CRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo22[] = { { PPC::CRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo23[] = { { PPC::CRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo24[] = { { PPC::CRBITRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::CRBITRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::CRBITRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo25[] = { { PPC::CRBITRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo26[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo27[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo28[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo29[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo30[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo31[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo32[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo33[] = { { PPC::F8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::F8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo34[] = { { PPC::F4RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::F4RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo35[] = { { PPC::F8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::F8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::F8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo36[] = { { PPC::F4RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::F4RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::F4RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo37[] = { { PPC::CRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::F8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::F8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo38[] = { { PPC::CRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::F4RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::F4RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo39[] = { { PPC::F8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::F8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::F8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::F8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo40[] = { { PPC::F4RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::F4RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::F4RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::F4RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo41[] = { { PPC::F4RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::F8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo42[] = { { PPC::F4RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::F8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::F4RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::F4RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo43[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0|(1<<MCOI::Predicate), MCOI::OPERAND_UNKNOWN, 0 }, { PPC::CRRCRegClassID, 0|(1<<MCOI::Predicate), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo44[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0|(1<<MCOI::Predicate), MCOI::OPERAND_UNKNOWN, 0 }, { PPC::CRRCRegClassID, 0|(1<<MCOI::Predicate), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo45[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo46[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo47[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, ((1 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo48[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, ((1 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo49[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, ((1 << 16) | (1 << MCOI::TIED_TO)) }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo50[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, ((1 << 16) | (1 << MCOI::TIED_TO)) }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo51[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo52[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo53[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo54[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo55[] = { { PPC::F8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo56[] = { { PPC::F8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, ((1 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo57[] = { { PPC::F8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, ((1 << 16) | (1 << MCOI::TIED_TO)) }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo58[] = { { PPC::F8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo59[] = { { PPC::F4RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo60[] = { { PPC::F4RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, ((1 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo61[] = { { PPC::F4RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, ((1 << 16) | (1 << MCOI::TIED_TO)) }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo62[] = { { PPC::F4RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo63[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo64[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo65[] = { { PPC::VRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo66[] = { { PPC::CRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::CRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo67[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo68[] = { { PPC::F8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo69[] = { { PPC::VRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo70[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo71[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo72[] = { { PPC::F8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { PPC::F8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::F8RCRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo73[] = { { PPC::CRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo74[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo75[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo76[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo77[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo78[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo79[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo80[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo81[] = { { PPC::F4RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::CRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::F4RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::F4RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo82[] = { { PPC::F8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::CRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::F8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::F8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo83[] = { { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::CRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo84[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::CRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo85[] = { { PPC::VRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::CRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::VRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::VRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo86[] = { { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo87[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo88[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo89[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { PPC::GPRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo90[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { PPC::G8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo91[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { PPC::F8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo92[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { PPC::F8RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo93[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { PPC::F4RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo94[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { PPC::F4RCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo95[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo96[] = { { PPC::CTRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo97[] = { { PPC::CTRRC8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo98[] = { { PPC::VRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::VRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::VRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo99[] = { { PPC::VRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { PPC::VRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo100[] = { { PPC::VRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::VRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo101[] = { { PPC::VRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::VRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::VRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::VRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo102[] = { { PPC::VRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::VRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { PPC::VRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo103[] = { { PPC::VRRCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };

extern const MCInstrDesc PPCInsts[] = {
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
  { 17,	3,	1,	26,	0,	0, 0x8ULL, NULL, NULL, OperandInfo8 },  // Inst #17 = ADD4
  { 18,	3,	1,	26,	0,	0, 0x8ULL, NULL, NULL, OperandInfo9 },  // Inst #18 = ADD8
  { 19,	3,	1,	15,	0,	0, 0xcULL, NULL, ImplicitList1, OperandInfo8 },  // Inst #19 = ADDC
  { 20,	3,	1,	15,	0,	0, 0xcULL, NULL, ImplicitList1, OperandInfo9 },  // Inst #20 = ADDC8
  { 21,	3,	1,	15,	0,	0, 0x8ULL, ImplicitList1, ImplicitList1, OperandInfo8 },  // Inst #21 = ADDE
  { 22,	3,	1,	15,	0,	0, 0x8ULL, ImplicitList1, ImplicitList1, OperandInfo9 },  // Inst #22 = ADDE8
  { 23,	3,	1,	26,	0,	0, 0x8ULL, NULL, NULL, OperandInfo10 },  // Inst #23 = ADDI
  { 24,	3,	1,	26,	0,	0, 0x8ULL, NULL, NULL, OperandInfo11 },  // Inst #24 = ADDI8
  { 25,	3,	1,	26,	0,	0, 0x8ULL, NULL, NULL, OperandInfo11 },  // Inst #25 = ADDI8L
  { 26,	3,	1,	15,	0,	0, 0xcULL, NULL, ImplicitList1, OperandInfo10 },  // Inst #26 = ADDIC
  { 27,	3,	1,	15,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo11 },  // Inst #27 = ADDIC8
  { 28,	3,	1,	15,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x8ULL, NULL, ImplicitList1, OperandInfo10 },  // Inst #28 = ADDICo
  { 29,	3,	1,	26,	0,	0, 0x8ULL, NULL, NULL, OperandInfo10 },  // Inst #29 = ADDIL
  { 30,	3,	1,	26,	0,	0, 0x8ULL, NULL, NULL, OperandInfo10 },  // Inst #30 = ADDIS
  { 31,	3,	1,	26,	0,	0, 0x8ULL, NULL, NULL, OperandInfo11 },  // Inst #31 = ADDIS8
  { 32,	2,	1,	15,	0,	0, 0x8ULL, ImplicitList1, ImplicitList1, OperandInfo12 },  // Inst #32 = ADDME
  { 33,	2,	1,	15,	0,	0, 0x8ULL, ImplicitList1, ImplicitList1, OperandInfo13 },  // Inst #33 = ADDME8
  { 34,	2,	1,	15,	0,	0, 0x8ULL, ImplicitList1, ImplicitList1, OperandInfo12 },  // Inst #34 = ADDZE
  { 35,	2,	1,	15,	0,	0, 0x8ULL, ImplicitList1, ImplicitList1, OperandInfo13 },  // Inst #35 = ADDZE8
  { 36,	1,	0,	0,	0,	0, 0x0ULL, ImplicitList2, ImplicitList2, OperandInfo5 },  // Inst #36 = ADJCALLSTACKDOWN
  { 37,	2,	0,	0,	0,	0, 0x0ULL, ImplicitList2, ImplicitList2, OperandInfo7 },  // Inst #37 = ADJCALLSTACKUP
  { 38,	3,	1,	26,	0,	0, 0x8ULL, NULL, NULL, OperandInfo8 },  // Inst #38 = AND
  { 39,	3,	1,	26,	0,	0, 0x8ULL, NULL, NULL, OperandInfo9 },  // Inst #39 = AND8
  { 40,	3,	1,	26,	0,	0, 0x8ULL, NULL, NULL, OperandInfo8 },  // Inst #40 = ANDC
  { 41,	3,	1,	26,	0,	0, 0x8ULL, NULL, NULL, OperandInfo9 },  // Inst #41 = ANDC8
  { 42,	3,	1,	15,	0,	0, 0x8ULL, NULL, ImplicitList3, OperandInfo10 },  // Inst #42 = ANDISo
  { 43,	3,	1,	15,	0,	0, 0x8ULL, NULL, ImplicitList3, OperandInfo11 },  // Inst #43 = ANDISo8
  { 44,	3,	1,	15,	0,	0, 0x8ULL, NULL, ImplicitList3, OperandInfo10 },  // Inst #44 = ANDIo
  { 45,	3,	1,	15,	0,	0, 0x8ULL, NULL, ImplicitList3, OperandInfo11 },  // Inst #45 = ANDIo8
  { 46,	5,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList3, OperandInfo14 },  // Inst #46 = ATOMIC_CMP_SWAP_I16
  { 47,	5,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList3, OperandInfo14 },  // Inst #47 = ATOMIC_CMP_SWAP_I32
  { 48,	5,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList3, OperandInfo15 },  // Inst #48 = ATOMIC_CMP_SWAP_I64
  { 49,	5,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList3, OperandInfo14 },  // Inst #49 = ATOMIC_CMP_SWAP_I8
  { 50,	4,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList3, OperandInfo16 },  // Inst #50 = ATOMIC_LOAD_ADD_I16
  { 51,	4,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList3, OperandInfo16 },  // Inst #51 = ATOMIC_LOAD_ADD_I32
  { 52,	4,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList3, OperandInfo17 },  // Inst #52 = ATOMIC_LOAD_ADD_I64
  { 53,	4,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList3, OperandInfo16 },  // Inst #53 = ATOMIC_LOAD_ADD_I8
  { 54,	4,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList3, OperandInfo16 },  // Inst #54 = ATOMIC_LOAD_AND_I16
  { 55,	4,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList3, OperandInfo16 },  // Inst #55 = ATOMIC_LOAD_AND_I32
  { 56,	4,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList3, OperandInfo17 },  // Inst #56 = ATOMIC_LOAD_AND_I64
  { 57,	4,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList3, OperandInfo16 },  // Inst #57 = ATOMIC_LOAD_AND_I8
  { 58,	4,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList3, OperandInfo16 },  // Inst #58 = ATOMIC_LOAD_NAND_I16
  { 59,	4,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList3, OperandInfo16 },  // Inst #59 = ATOMIC_LOAD_NAND_I32
  { 60,	4,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList3, OperandInfo17 },  // Inst #60 = ATOMIC_LOAD_NAND_I64
  { 61,	4,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList3, OperandInfo16 },  // Inst #61 = ATOMIC_LOAD_NAND_I8
  { 62,	4,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList3, OperandInfo16 },  // Inst #62 = ATOMIC_LOAD_OR_I16
  { 63,	4,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList3, OperandInfo16 },  // Inst #63 = ATOMIC_LOAD_OR_I32
  { 64,	4,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList3, OperandInfo17 },  // Inst #64 = ATOMIC_LOAD_OR_I64
  { 65,	4,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList3, OperandInfo16 },  // Inst #65 = ATOMIC_LOAD_OR_I8
  { 66,	4,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList3, OperandInfo16 },  // Inst #66 = ATOMIC_LOAD_SUB_I16
  { 67,	4,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList3, OperandInfo16 },  // Inst #67 = ATOMIC_LOAD_SUB_I32
  { 68,	4,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList3, OperandInfo17 },  // Inst #68 = ATOMIC_LOAD_SUB_I64
  { 69,	4,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList3, OperandInfo16 },  // Inst #69 = ATOMIC_LOAD_SUB_I8
  { 70,	4,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList3, OperandInfo16 },  // Inst #70 = ATOMIC_LOAD_XOR_I16
  { 71,	4,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList3, OperandInfo16 },  // Inst #71 = ATOMIC_LOAD_XOR_I32
  { 72,	4,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList3, OperandInfo17 },  // Inst #72 = ATOMIC_LOAD_XOR_I64
  { 73,	4,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList3, OperandInfo16 },  // Inst #73 = ATOMIC_LOAD_XOR_I8
  { 74,	4,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList3, OperandInfo16 },  // Inst #74 = ATOMIC_SWAP_I16
  { 75,	4,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList3, OperandInfo16 },  // Inst #75 = ATOMIC_SWAP_I32
  { 76,	4,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList3, OperandInfo17 },  // Inst #76 = ATOMIC_SWAP_I64
  { 77,	4,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, ImplicitList3, OperandInfo16 },  // Inst #77 = ATOMIC_SWAP_I8
  { 78,	1,	0,	1,	0,	0|(1<<MCID::Branch)|(1<<MCID::Barrier)|(1<<MCID::Terminator), 0x38ULL, NULL, NULL, OperandInfo5 },  // Inst #78 = B
  { 79,	3,	0,	1,	0,	0|(1<<MCID::Branch)|(1<<MCID::Predicable)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, NULL, NULL, OperandInfo18 },  // Inst #79 = BCC
  { 80,	0,	0,	1,	0,	0|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList4, NULL, 0 },  // Inst #80 = BCTR
  { 81,	0,	0,	1,	0,	0|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::Call)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList5, NULL, 0 },  // Inst #81 = BCTR8
  { 82,	0,	0,	1,	0,	0|(1<<MCID::Call), 0x38ULL, ImplicitList5, ImplicitList6, 0 },  // Inst #82 = BCTRL8_Darwin
  { 83,	0,	0,	1,	0,	0|(1<<MCID::Call), 0x38ULL, ImplicitList7, ImplicitList6, 0 },  // Inst #83 = BCTRL8_ELF
  { 84,	0,	0,	1,	0,	0|(1<<MCID::Call), 0x38ULL, ImplicitList8, ImplicitList9, 0 },  // Inst #84 = BCTRL_Darwin
  { 85,	0,	0,	1,	0,	0|(1<<MCID::Call), 0x38ULL, ImplicitList8, ImplicitList9, 0 },  // Inst #85 = BCTRL_SVR4
  { 86,	1,	0,	1,	0,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList4, ImplicitList4, OperandInfo5 },  // Inst #86 = BDNZ
  { 87,	1,	0,	1,	0,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList10, ImplicitList10, OperandInfo5 },  // Inst #87 = BDNZ8
  { 88,	1,	0,	1,	0,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList4, ImplicitList4, OperandInfo5 },  // Inst #88 = BDZ
  { 89,	1,	0,	1,	0,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList10, ImplicitList10, OperandInfo5 },  // Inst #89 = BDZ8
  { 90,	1,	0,	1,	0,	0|(1<<MCID::Call), 0x38ULL, ImplicitList11, ImplicitList6, OperandInfo5 },  // Inst #90 = BL8_Darwin
  { 91,	1,	0,	1,	0,	0|(1<<MCID::Call), 0x38ULL, ImplicitList11, ImplicitList6, OperandInfo5 },  // Inst #91 = BL8_ELF
  { 92,	1,	0,	1,	0,	0|(1<<MCID::Call), 0x38ULL, ImplicitList11, ImplicitList6, OperandInfo5 },  // Inst #92 = BL8_NOP_ELF
  { 93,	1,	0,	1,	0,	0|(1<<MCID::Call), 0x38ULL, ImplicitList11, ImplicitList6, OperandInfo5 },  // Inst #93 = BLA8_Darwin
  { 94,	1,	0,	1,	0,	0|(1<<MCID::Call), 0x38ULL, ImplicitList11, ImplicitList6, OperandInfo5 },  // Inst #94 = BLA8_ELF
  { 95,	1,	0,	1,	0,	0|(1<<MCID::Call), 0x38ULL, ImplicitList11, ImplicitList6, OperandInfo5 },  // Inst #95 = BLA8_NOP_ELF
  { 96,	1,	0,	1,	0,	0|(1<<MCID::Call), 0x38ULL, ImplicitList11, ImplicitList9, OperandInfo5 },  // Inst #96 = BLA_Darwin
  { 97,	1,	0,	1,	0,	0|(1<<MCID::Call), 0x38ULL, ImplicitList11, ImplicitList9, OperandInfo5 },  // Inst #97 = BLA_SVR4
  { 98,	2,	0,	1,	0,	0|(1<<MCID::Return)|(1<<MCID::Barrier)|(1<<MCID::Predicable)|(1<<MCID::Terminator), 0x38ULL, ImplicitList12, NULL, OperandInfo19 },  // Inst #98 = BLR
  { 99,	1,	0,	1,	0,	0|(1<<MCID::Call), 0x38ULL, ImplicitList11, ImplicitList9, OperandInfo5 },  // Inst #99 = BL_Darwin
  { 100,	1,	0,	1,	0,	0|(1<<MCID::Call), 0x38ULL, ImplicitList11, ImplicitList9, OperandInfo5 },  // Inst #100 = BL_SVR4
  { 101,	3,	1,	12,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x8ULL, NULL, NULL, OperandInfo20 },  // Inst #101 = CMPD
  { 102,	3,	1,	12,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x8ULL, NULL, NULL, OperandInfo21 },  // Inst #102 = CMPDI
  { 103,	3,	1,	12,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x8ULL, NULL, NULL, OperandInfo20 },  // Inst #103 = CMPLD
  { 104,	3,	1,	12,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x8ULL, NULL, NULL, OperandInfo21 },  // Inst #104 = CMPLDI
  { 105,	3,	1,	12,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x8ULL, NULL, NULL, OperandInfo22 },  // Inst #105 = CMPLW
  { 106,	3,	1,	12,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x8ULL, NULL, NULL, OperandInfo23 },  // Inst #106 = CMPLWI
  { 107,	3,	1,	12,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x8ULL, NULL, NULL, OperandInfo22 },  // Inst #107 = CMPW
  { 108,	3,	1,	12,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x8ULL, NULL, NULL, OperandInfo23 },  // Inst #108 = CMPWI
  { 109,	2,	1,	15,	0,	0, 0x8ULL, NULL, NULL, OperandInfo13 },  // Inst #109 = CNTLZD
  { 110,	2,	1,	15,	0,	0, 0x8ULL, NULL, NULL, OperandInfo12 },  // Inst #110 = CNTLZW
  { 111,	0,	0,	2,	0,	0, 0x0ULL, NULL, ImplicitList13, 0 },  // Inst #111 = CR6SET
  { 112,	0,	0,	2,	0,	0, 0x0ULL, NULL, ImplicitList13, 0 },  // Inst #112 = CR6UNSET
  { 113,	3,	1,	2,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo24 },  // Inst #113 = CREQV
  { 114,	3,	1,	2,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo24 },  // Inst #114 = CROR
  { 115,	1,	1,	2,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo25 },  // Inst #115 = CRSET
  { 116,	1,	1,	2,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo25 },  // Inst #116 = CRUNSET
  { 117,	2,	0,	27,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo26 },  // Inst #117 = DCBA
  { 118,	2,	0,	27,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo26 },  // Inst #118 = DCBF
  { 119,	2,	0,	27,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo26 },  // Inst #119 = DCBI
  { 120,	2,	0,	27,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo26 },  // Inst #120 = DCBST
  { 121,	2,	0,	27,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo26 },  // Inst #121 = DCBT
  { 122,	2,	0,	27,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo26 },  // Inst #122 = DCBTST
  { 123,	2,	0,	27,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo26 },  // Inst #123 = DCBZ
  { 124,	2,	0,	27,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo26 },  // Inst #124 = DCBZL
  { 125,	3,	1,	13,	0,	0, 0xdULL, NULL, NULL, OperandInfo9 },  // Inst #125 = DIVD
  { 126,	3,	1,	13,	0,	0, 0xdULL, NULL, NULL, OperandInfo9 },  // Inst #126 = DIVDU
  { 127,	3,	1,	14,	0,	0, 0xdULL, NULL, NULL, OperandInfo8 },  // Inst #127 = DIVW
  { 128,	3,	1,	14,	0,	0, 0xdULL, NULL, NULL, OperandInfo8 },  // Inst #128 = DIVWU
  { 129,	4,	0,	37,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo27 },  // Inst #129 = DSS
  { 130,	4,	0,	37,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo27 },  // Inst #130 = DSSALL
  { 131,	4,	0,	37,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo28 },  // Inst #131 = DST
  { 132,	4,	0,	37,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo29 },  // Inst #132 = DST64
  { 133,	4,	0,	37,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo28 },  // Inst #133 = DSTST
  { 134,	4,	0,	37,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo29 },  // Inst #134 = DSTST64
  { 135,	4,	0,	37,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo28 },  // Inst #135 = DSTSTT
  { 136,	4,	0,	37,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo29 },  // Inst #136 = DSTSTT64
  { 137,	4,	0,	37,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo28 },  // Inst #137 = DSTT
  { 138,	4,	0,	37,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo29 },  // Inst #138 = DSTT64
  { 139,	4,	1,	0,	0,	0, 0x0ULL, ImplicitList2, ImplicitList2, OperandInfo30 },  // Inst #139 = DYNALLOC
  { 140,	4,	1,	0,	0,	0, 0x0ULL, ImplicitList14, ImplicitList14, OperandInfo31 },  // Inst #140 = DYNALLOC8
  { 141,	3,	1,	26,	0,	0, 0x8ULL, NULL, NULL, OperandInfo8 },  // Inst #141 = EQV
  { 142,	3,	1,	26,	0,	0, 0x8ULL, NULL, NULL, OperandInfo9 },  // Inst #142 = EQV8
  { 143,	2,	1,	26,	0,	0, 0x8ULL, NULL, NULL, OperandInfo12 },  // Inst #143 = EXTSB
  { 144,	2,	1,	26,	0,	0, 0x8ULL, NULL, NULL, OperandInfo13 },  // Inst #144 = EXTSB8
  { 145,	2,	1,	26,	0,	0, 0x8ULL, NULL, NULL, OperandInfo12 },  // Inst #145 = EXTSH
  { 146,	2,	1,	26,	0,	0, 0x8ULL, NULL, NULL, OperandInfo13 },  // Inst #146 = EXTSH8
  { 147,	2,	1,	26,	0,	0, 0x8ULL, NULL, NULL, OperandInfo13 },  // Inst #147 = EXTSW
  { 148,	2,	1,	26,	0,	0, 0x8ULL, NULL, NULL, OperandInfo12 },  // Inst #148 = EXTSW_32
  { 149,	2,	1,	26,	0,	0, 0x8ULL, NULL, NULL, OperandInfo32 },  // Inst #149 = EXTSW_32_64
  { 150,	2,	1,	10,	0,	0, 0x18ULL, NULL, NULL, OperandInfo33 },  // Inst #150 = FABSD
  { 151,	2,	1,	10,	0,	0, 0x18ULL, NULL, NULL, OperandInfo34 },  // Inst #151 = FABSS
  { 152,	3,	1,	5,	0,	0, 0x18ULL, ImplicitList11, NULL, OperandInfo35 },  // Inst #152 = FADD
  { 153,	3,	1,	10,	0,	0, 0x18ULL, ImplicitList11, NULL, OperandInfo36 },  // Inst #153 = FADDS
  { 154,	3,	1,	5,	0,	0, 0x1aULL, ImplicitList11, NULL, OperandInfo35 },  // Inst #154 = FADDrtz
  { 155,	2,	1,	10,	0,	0, 0x18ULL, ImplicitList11, NULL, OperandInfo33 },  // Inst #155 = FCFID
  { 156,	3,	1,	6,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x18ULL, NULL, NULL, OperandInfo37 },  // Inst #156 = FCMPUD
  { 157,	3,	1,	6,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x18ULL, NULL, NULL, OperandInfo38 },  // Inst #157 = FCMPUS
  { 158,	2,	1,	10,	0,	0, 0x18ULL, ImplicitList11, NULL, OperandInfo33 },  // Inst #158 = FCTIDZ
  { 159,	2,	1,	10,	0,	0, 0x18ULL, ImplicitList11, NULL, OperandInfo33 },  // Inst #159 = FCTIWZ
  { 160,	3,	1,	7,	0,	0, 0x18ULL, ImplicitList11, NULL, OperandInfo35 },  // Inst #160 = FDIV
  { 161,	3,	1,	8,	0,	0, 0x18ULL, ImplicitList11, NULL, OperandInfo36 },  // Inst #161 = FDIVS
  { 162,	4,	1,	9,	0,	0, 0x18ULL, ImplicitList11, NULL, OperandInfo39 },  // Inst #162 = FMADD
  { 163,	4,	1,	10,	0,	0, 0x18ULL, ImplicitList11, NULL, OperandInfo40 },  // Inst #163 = FMADDS
  { 164,	2,	1,	10,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo34 },  // Inst #164 = FMR
  { 165,	4,	1,	9,	0,	0, 0x18ULL, ImplicitList11, NULL, OperandInfo39 },  // Inst #165 = FMSUB
  { 166,	4,	1,	10,	0,	0, 0x18ULL, ImplicitList11, NULL, OperandInfo40 },  // Inst #166 = FMSUBS
  { 167,	3,	1,	9,	0,	0, 0x18ULL, ImplicitList11, NULL, OperandInfo35 },  // Inst #167 = FMUL
  { 168,	3,	1,	10,	0,	0, 0x18ULL, ImplicitList11, NULL, OperandInfo36 },  // Inst #168 = FMULS
  { 169,	2,	1,	10,	0,	0, 0x18ULL, NULL, NULL, OperandInfo33 },  // Inst #169 = FNABSD
  { 170,	2,	1,	10,	0,	0, 0x18ULL, NULL, NULL, OperandInfo34 },  // Inst #170 = FNABSS
  { 171,	2,	1,	10,	0,	0, 0x18ULL, NULL, NULL, OperandInfo33 },  // Inst #171 = FNEGD
  { 172,	2,	1,	10,	0,	0, 0x18ULL, NULL, NULL, OperandInfo34 },  // Inst #172 = FNEGS
  { 173,	4,	1,	9,	0,	0, 0x18ULL, ImplicitList11, NULL, OperandInfo39 },  // Inst #173 = FNMADD
  { 174,	4,	1,	10,	0,	0, 0x18ULL, ImplicitList11, NULL, OperandInfo40 },  // Inst #174 = FNMADDS
  { 175,	4,	1,	9,	0,	0, 0x18ULL, ImplicitList11, NULL, OperandInfo39 },  // Inst #175 = FNMSUB
  { 176,	4,	1,	10,	0,	0, 0x18ULL, ImplicitList11, NULL, OperandInfo40 },  // Inst #176 = FNMSUBS
  { 177,	2,	1,	10,	0,	0, 0x18ULL, ImplicitList11, NULL, OperandInfo41 },  // Inst #177 = FRSP
  { 178,	4,	1,	10,	0,	0, 0x18ULL, NULL, NULL, OperandInfo39 },  // Inst #178 = FSELD
  { 179,	4,	1,	10,	0,	0, 0x18ULL, NULL, NULL, OperandInfo42 },  // Inst #179 = FSELS
  { 180,	2,	1,	11,	0,	0, 0x18ULL, ImplicitList11, NULL, OperandInfo33 },  // Inst #180 = FSQRT
  { 181,	2,	1,	11,	0,	0, 0x18ULL, ImplicitList11, NULL, OperandInfo34 },  // Inst #181 = FSQRTS
  { 182,	3,	1,	5,	0,	0, 0x18ULL, ImplicitList11, NULL, OperandInfo35 },  // Inst #182 = FSUB
  { 183,	3,	1,	10,	0,	0, 0x18ULL, ImplicitList11, NULL, OperandInfo36 },  // Inst #183 = FSUBS
  { 184,	5,	1,	15,	0,	0|(1<<MCID::Predicable)|(1<<MCID::UnmodeledSideEffects), 0x8ULL, NULL, NULL, OperandInfo43 },  // Inst #184 = ISEL
  { 185,	5,	1,	15,	0,	0|(1<<MCID::Predicable)|(1<<MCID::UnmodeledSideEffects), 0x8ULL, NULL, NULL, OperandInfo44 },  // Inst #185 = ISEL8
  { 186,	3,	1,	15,	0,	0, 0x8ULL, NULL, NULL, OperandInfo10 },  // Inst #186 = LA
  { 187,	3,	1,	37,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo45 },  // Inst #187 = LBZ
  { 188,	3,	1,	37,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo46 },  // Inst #188 = LBZ8
  { 189,	4,	2,	38,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x10ULL, NULL, NULL, OperandInfo47 },  // Inst #189 = LBZU
  { 190,	4,	2,	38,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x10ULL, NULL, NULL, OperandInfo48 },  // Inst #190 = LBZU8
  { 191,	4,	2,	38,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x10ULL, NULL, NULL, OperandInfo49 },  // Inst #191 = LBZUX
  { 192,	4,	2,	38,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x10ULL, NULL, NULL, OperandInfo50 },  // Inst #192 = LBZUX8
  { 193,	3,	1,	37,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo51 },  // Inst #193 = LBZX
  { 194,	3,	1,	37,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo52 },  // Inst #194 = LBZX8
  { 195,	3,	1,	28,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo46 },  // Inst #195 = LD
  { 196,	3,	1,	29,	0,	0|(1<<MCID::MayLoad), 0x0ULL, NULL, NULL, OperandInfo52 },  // Inst #196 = LDARX
  { 197,	4,	2,	30,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x10ULL, NULL, NULL, OperandInfo48 },  // Inst #197 = LDU
  { 198,	4,	2,	30,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::UnmodeledSideEffects), 0x10ULL, NULL, NULL, OperandInfo50 },  // Inst #198 = LDUX
  { 199,	3,	1,	28,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo52 },  // Inst #199 = LDX
  { 200,	1,	0,	28,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::UnmodeledSideEffects), 0x10ULL, NULL, NULL, OperandInfo53 },  // Inst #200 = LDinto_toc
  { 201,	3,	1,	0,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo54 },  // Inst #201 = LDtoc
  { 202,	3,	1,	0,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo54 },  // Inst #202 = LDtocCPT
  { 203,	3,	1,	0,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo54 },  // Inst #203 = LDtocJTI
  { 204,	0,	0,	28,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::UnmodeledSideEffects), 0x10ULL, NULL, NULL, 0 },  // Inst #204 = LDtoc_restore
  { 205,	3,	1,	31,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo55 },  // Inst #205 = LFD
  { 206,	4,	2,	32,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x10ULL, NULL, NULL, OperandInfo56 },  // Inst #206 = LFDU
  { 207,	4,	2,	32,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x10ULL, NULL, NULL, OperandInfo57 },  // Inst #207 = LFDUX
  { 208,	3,	1,	31,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo58 },  // Inst #208 = LFDX
  { 209,	3,	1,	31,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo59 },  // Inst #209 = LFS
  { 210,	4,	2,	32,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x10ULL, NULL, NULL, OperandInfo60 },  // Inst #210 = LFSU
  { 211,	4,	2,	32,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x10ULL, NULL, NULL, OperandInfo61 },  // Inst #211 = LFSUX
  { 212,	3,	1,	31,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo62 },  // Inst #212 = LFSX
  { 213,	3,	1,	33,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x14ULL, NULL, NULL, OperandInfo45 },  // Inst #213 = LHA
  { 214,	3,	1,	33,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x14ULL, NULL, NULL, OperandInfo46 },  // Inst #214 = LHA8
  { 215,	4,	2,	34,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x10ULL, NULL, NULL, OperandInfo47 },  // Inst #215 = LHAU
  { 216,	4,	2,	34,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x10ULL, NULL, NULL, OperandInfo48 },  // Inst #216 = LHAU8
  { 217,	4,	2,	34,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x10ULL, NULL, NULL, OperandInfo49 },  // Inst #217 = LHAUX
  { 218,	4,	2,	34,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::UnmodeledSideEffects), 0x10ULL, NULL, NULL, OperandInfo50 },  // Inst #218 = LHAUX8
  { 219,	3,	1,	33,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x14ULL, NULL, NULL, OperandInfo51 },  // Inst #219 = LHAX
  { 220,	3,	1,	33,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x14ULL, NULL, NULL, OperandInfo52 },  // Inst #220 = LHAX8
  { 221,	3,	1,	37,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo51 },  // Inst #221 = LHBRX
  { 222,	3,	1,	37,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo45 },  // Inst #222 = LHZ
  { 223,	3,	1,	37,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo46 },  // Inst #223 = LHZ8
  { 224,	4,	2,	38,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x10ULL, NULL, NULL, OperandInfo47 },  // Inst #224 = LHZU
  { 225,	4,	2,	38,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x10ULL, NULL, NULL, OperandInfo48 },  // Inst #225 = LHZU8
  { 226,	4,	2,	38,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x10ULL, NULL, NULL, OperandInfo49 },  // Inst #226 = LHZUX
  { 227,	4,	2,	38,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x10ULL, NULL, NULL, OperandInfo50 },  // Inst #227 = LHZUX8
  { 228,	3,	1,	37,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo51 },  // Inst #228 = LHZX
  { 229,	3,	1,	37,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo52 },  // Inst #229 = LHZX8
  { 230,	2,	1,	26,	0,	0|(1<<MCID::MoveImm)|(1<<MCID::Rematerializable)|(1<<MCID::CheapAsAMove), 0x8ULL, NULL, NULL, OperandInfo63 },  // Inst #230 = LI
  { 231,	2,	1,	26,	0,	0|(1<<MCID::MoveImm)|(1<<MCID::Rematerializable)|(1<<MCID::CheapAsAMove), 0x8ULL, NULL, NULL, OperandInfo64 },  // Inst #231 = LI8
  { 232,	2,	1,	26,	0,	0|(1<<MCID::MoveImm)|(1<<MCID::Rematerializable)|(1<<MCID::CheapAsAMove), 0x8ULL, NULL, NULL, OperandInfo63 },  // Inst #232 = LIS
  { 233,	2,	1,	26,	0,	0|(1<<MCID::MoveImm)|(1<<MCID::Rematerializable)|(1<<MCID::CheapAsAMove), 0x8ULL, NULL, NULL, OperandInfo64 },  // Inst #233 = LIS8
  { 234,	3,	1,	37,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo65 },  // Inst #234 = LVEBX
  { 235,	3,	1,	37,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo65 },  // Inst #235 = LVEHX
  { 236,	3,	1,	37,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo65 },  // Inst #236 = LVEWX
  { 237,	3,	1,	37,	0,	0, 0x10ULL, NULL, NULL, OperandInfo65 },  // Inst #237 = LVSL
  { 238,	3,	1,	37,	0,	0, 0x10ULL, NULL, NULL, OperandInfo65 },  // Inst #238 = LVSR
  { 239,	3,	1,	37,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo65 },  // Inst #239 = LVX
  { 240,	3,	1,	37,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo65 },  // Inst #240 = LVXL
  { 241,	3,	1,	35,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x14ULL, NULL, NULL, OperandInfo46 },  // Inst #241 = LWA
  { 242,	3,	1,	36,	0,	0|(1<<MCID::MayLoad), 0x0ULL, NULL, NULL, OperandInfo51 },  // Inst #242 = LWARX
  { 243,	4,	2,	34,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::UnmodeledSideEffects), 0x10ULL, NULL, NULL, OperandInfo50 },  // Inst #243 = LWAUX
  { 244,	3,	1,	33,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x14ULL, NULL, NULL, OperandInfo52 },  // Inst #244 = LWAX
  { 245,	3,	1,	37,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo51 },  // Inst #245 = LWBRX
  { 246,	3,	1,	37,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo45 },  // Inst #246 = LWZ
  { 247,	3,	1,	37,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo46 },  // Inst #247 = LWZ8
  { 248,	4,	2,	38,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x10ULL, NULL, NULL, OperandInfo47 },  // Inst #248 = LWZU
  { 249,	4,	2,	38,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x10ULL, NULL, NULL, OperandInfo48 },  // Inst #249 = LWZU8
  { 250,	4,	2,	38,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x10ULL, NULL, NULL, OperandInfo49 },  // Inst #250 = LWZUX
  { 251,	4,	2,	38,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x10ULL, NULL, NULL, OperandInfo50 },  // Inst #251 = LWZUX8
  { 252,	3,	1,	37,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo51 },  // Inst #252 = LWZX
  { 253,	3,	1,	37,	0,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x10ULL, NULL, NULL, OperandInfo52 },  // Inst #253 = LWZX8
  { 254,	2,	1,	3,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x21ULL, NULL, NULL, OperandInfo66 },  // Inst #254 = MCRF
  { 255,	1,	1,	48,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x20ULL, NULL, NULL, OperandInfo67 },  // Inst #255 = MFCR
  { 256,	1,	1,	48,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x20ULL, NULL, NULL, OperandInfo53 },  // Inst #256 = MFCR8
  { 257,	2,	1,	48,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x20ULL, NULL, NULL, OperandInfo64 },  // Inst #257 = MFCR8pseud
  { 258,	2,	1,	48,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x20ULL, NULL, NULL, OperandInfo63 },  // Inst #258 = MFCRpseud
  { 259,	1,	1,	49,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x9ULL, ImplicitList4, NULL, OperandInfo67 },  // Inst #259 = MFCTR
  { 260,	1,	1,	49,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x9ULL, ImplicitList10, NULL, OperandInfo53 },  // Inst #260 = MFCTR8
  { 261,	1,	1,	16,	0,	0, 0x1aULL, ImplicitList11, NULL, OperandInfo68 },  // Inst #261 = MFFS
  { 262,	1,	1,	49,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x9ULL, ImplicitList9, NULL, OperandInfo67 },  // Inst #262 = MFLR
  { 263,	1,	1,	49,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x9ULL, ImplicitList6, NULL, OperandInfo53 },  // Inst #263 = MFLR8
  { 264,	2,	1,	48,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x21ULL, NULL, NULL, OperandInfo63 },  // Inst #264 = MFOCRF
  { 265,	1,	1,	50,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x9ULL, NULL, NULL, OperandInfo53 },  // Inst #265 = MFTB8
  { 266,	1,	1,	15,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x9ULL, NULL, NULL, OperandInfo67 },  // Inst #266 = MFVRSAVE
  { 267,	1,	1,	45,	0,	0|(1<<MCID::MayLoad), 0x0ULL, NULL, NULL, OperandInfo69 },  // Inst #267 = MFVSCR
  { 268,	2,	1,	4,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x20ULL, NULL, NULL, OperandInfo70 },  // Inst #268 = MTCRF
  { 269,	2,	1,	4,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x20ULL, NULL, NULL, OperandInfo71 },  // Inst #269 = MTCRF8
  { 270,	1,	0,	51,	0,	0, 0x9ULL, NULL, ImplicitList4, OperandInfo67 },  // Inst #270 = MTCTR
  { 271,	1,	0,	51,	0,	0, 0x9ULL, NULL, ImplicitList10, OperandInfo53 },  // Inst #271 = MTCTR8
  { 272,	1,	0,	17,	0,	0, 0x1aULL, ImplicitList11, ImplicitList11, OperandInfo5 },  // Inst #272 = MTFSB0
  { 273,	1,	0,	17,	0,	0, 0x1aULL, ImplicitList11, ImplicitList11, OperandInfo5 },  // Inst #273 = MTFSB1
  { 274,	4,	1,	17,	0,	0, 0x1aULL, ImplicitList11, ImplicitList11, OperandInfo72 },  // Inst #274 = MTFSF
  { 275,	1,	0,	51,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x9ULL, NULL, ImplicitList9, OperandInfo67 },  // Inst #275 = MTLR
  { 276,	1,	0,	51,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x9ULL, NULL, ImplicitList6, OperandInfo53 },  // Inst #276 = MTLR8
  { 277,	1,	0,	15,	0,	0|(1<<MCID::UnmodeledSideEffects), 0xaULL, NULL, NULL, OperandInfo67 },  // Inst #277 = MTVRSAVE
  { 278,	1,	0,	37,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo69 },  // Inst #278 = MTVSCR
  { 279,	3,	1,	19,	0,	0, 0x8ULL, NULL, NULL, OperandInfo9 },  // Inst #279 = MULHD
  { 280,	3,	1,	20,	0,	0, 0x8ULL, NULL, NULL, OperandInfo9 },  // Inst #280 = MULHDU
  { 281,	3,	1,	19,	0,	0, 0x8ULL, NULL, NULL, OperandInfo8 },  // Inst #281 = MULHW
  { 282,	3,	1,	20,	0,	0, 0x8ULL, NULL, NULL, OperandInfo8 },  // Inst #282 = MULHWU
  { 283,	3,	1,	18,	0,	0, 0x8ULL, NULL, NULL, OperandInfo9 },  // Inst #283 = MULLD
  { 284,	3,	1,	21,	0,	0, 0x8ULL, NULL, NULL, OperandInfo10 },  // Inst #284 = MULLI
  { 285,	3,	1,	19,	0,	0, 0x8ULL, NULL, NULL, OperandInfo8 },  // Inst #285 = MULLW
  { 286,	0,	0,	0,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x38ULL, NULL, ImplicitList9, 0 },  // Inst #286 = MovePCtoLR
  { 287,	0,	0,	0,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x38ULL, NULL, ImplicitList6, 0 },  // Inst #287 = MovePCtoLR8
  { 288,	3,	1,	26,	0,	0, 0x8ULL, NULL, NULL, OperandInfo8 },  // Inst #288 = NAND
  { 289,	3,	1,	26,	0,	0, 0x8ULL, NULL, NULL, OperandInfo9 },  // Inst #289 = NAND8
  { 290,	2,	1,	26,	0,	0, 0x8ULL, NULL, NULL, OperandInfo12 },  // Inst #290 = NEG
  { 291,	2,	1,	26,	0,	0, 0x8ULL, NULL, NULL, OperandInfo13 },  // Inst #291 = NEG8
  { 292,	0,	0,	26,	0,	0, 0x8ULL, NULL, NULL, 0 },  // Inst #292 = NOP
  { 293,	3,	1,	26,	0,	0, 0x8ULL, NULL, NULL, OperandInfo8 },  // Inst #293 = NOR
  { 294,	3,	1,	26,	0,	0, 0x8ULL, NULL, NULL, OperandInfo9 },  // Inst #294 = NOR8
  { 295,	3,	1,	26,	0,	0, 0x8ULL, NULL, NULL, OperandInfo8 },  // Inst #295 = OR
  { 296,	3,	1,	26,	0,	0, 0x8ULL, NULL, NULL, OperandInfo9 },  // Inst #296 = OR8
  { 297,	3,	1,	26,	0,	0, 0x8ULL, NULL, NULL, OperandInfo8 },  // Inst #297 = ORC
  { 298,	3,	1,	26,	0,	0, 0x8ULL, NULL, NULL, OperandInfo9 },  // Inst #298 = ORC8
  { 299,	3,	1,	26,	0,	0, 0x8ULL, NULL, NULL, OperandInfo10 },  // Inst #299 = ORI
  { 300,	3,	1,	26,	0,	0, 0x8ULL, NULL, NULL, OperandInfo11 },  // Inst #300 = ORI8
  { 301,	3,	1,	26,	0,	0, 0x8ULL, NULL, NULL, OperandInfo10 },  // Inst #301 = ORIS
  { 302,	3,	1,	26,	0,	0, 0x8ULL, NULL, NULL, OperandInfo11 },  // Inst #302 = ORIS8
  { 303,	3,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo73 },  // Inst #303 = RESTORE_CR
  { 304,	4,	1,	23,	0,	0, 0x8ULL, NULL, NULL, OperandInfo74 },  // Inst #304 = RLDCL
  { 305,	4,	1,	24,	0,	0, 0x8ULL, NULL, NULL, OperandInfo75 },  // Inst #305 = RLDICL
  { 306,	4,	1,	24,	0,	0, 0x8ULL, NULL, NULL, OperandInfo75 },  // Inst #306 = RLDICR
  { 307,	5,	1,	24,	0,	0|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x8ULL, NULL, NULL, OperandInfo76 },  // Inst #307 = RLDIMI
  { 308,	6,	1,	22,	0,	0|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0xcULL, NULL, NULL, OperandInfo77 },  // Inst #308 = RLWIMI
  { 309,	5,	1,	15,	0,	0, 0x8ULL, NULL, NULL, OperandInfo78 },  // Inst #309 = RLWINM
  { 310,	5,	1,	15,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x8ULL, NULL, NULL, OperandInfo79 },  // Inst #310 = RLWINM8
  { 311,	5,	1,	15,	0,	0|(1<<MCID::UnmodeledSideEffects), 0xcULL, NULL, ImplicitList3, OperandInfo78 },  // Inst #311 = RLWINMo
  { 312,	5,	1,	15,	0,	0, 0x8ULL, NULL, NULL, OperandInfo80 },  // Inst #312 = RLWNM
  { 313,	5,	1,	0,	0,	0|(1<<MCID::UsesCustomInserter)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo81 },  // Inst #313 = SELECT_CC_F4
  { 314,	5,	1,	0,	0,	0|(1<<MCID::UsesCustomInserter)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo82 },  // Inst #314 = SELECT_CC_F8
  { 315,	5,	1,	0,	0,	0|(1<<MCID::UsesCustomInserter)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo83 },  // Inst #315 = SELECT_CC_I4
  { 316,	5,	1,	0,	0,	0|(1<<MCID::UsesCustomInserter)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo84 },  // Inst #316 = SELECT_CC_I8
  { 317,	5,	1,	0,	0,	0|(1<<MCID::UsesCustomInserter)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo85 },  // Inst #317 = SELECT_CC_VRRC
  { 318,	3,	1,	23,	0,	0, 0x8ULL, NULL, NULL, OperandInfo86 },  // Inst #318 = SLD
  { 319,	3,	1,	15,	0,	0, 0x8ULL, NULL, NULL, OperandInfo8 },  // Inst #319 = SLW
  { 320,	3,	0,	0,	0,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo73 },  // Inst #320 = SPILL_CR
  { 321,	3,	1,	23,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo86 },  // Inst #321 = SRAD
  { 322,	3,	1,	24,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo11 },  // Inst #322 = SRADI
  { 323,	3,	1,	25,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo8 },  // Inst #323 = SRAW
  { 324,	3,	1,	25,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo10 },  // Inst #324 = SRAWI
  { 325,	3,	1,	23,	0,	0, 0x8ULL, NULL, NULL, OperandInfo86 },  // Inst #325 = SRD
  { 326,	3,	1,	15,	0,	0, 0x8ULL, NULL, NULL, OperandInfo8 },  // Inst #326 = SRW
  { 327,	3,	0,	45,	0,	0|(1<<MCID::MayStore), 0x10ULL, NULL, NULL, OperandInfo45 },  // Inst #327 = STB
  { 328,	3,	0,	45,	0,	0|(1<<MCID::MayStore), 0x10ULL, NULL, NULL, OperandInfo46 },  // Inst #328 = STB8
  { 329,	4,	1,	46,	0,	0|(1<<MCID::MayStore), 0x10ULL, NULL, NULL, OperandInfo87 },  // Inst #329 = STBU
  { 330,	4,	1,	46,	0,	0|(1<<MCID::MayStore), 0x10ULL, NULL, NULL, OperandInfo88 },  // Inst #330 = STBU8
  { 331,	4,	1,	46,	0,	0|(1<<MCID::MayStore), 0x14ULL, NULL, NULL, OperandInfo89 },  // Inst #331 = STBUX
  { 332,	4,	1,	46,	0,	0|(1<<MCID::MayStore), 0x14ULL, NULL, NULL, OperandInfo90 },  // Inst #332 = STBUX8
  { 333,	3,	0,	45,	0,	0|(1<<MCID::MayStore), 0x14ULL, NULL, NULL, OperandInfo51 },  // Inst #333 = STBX
  { 334,	3,	0,	45,	0,	0|(1<<MCID::MayStore), 0x14ULL, NULL, NULL, OperandInfo52 },  // Inst #334 = STBX8
  { 335,	3,	0,	39,	0,	0|(1<<MCID::MayStore), 0x10ULL, NULL, NULL, OperandInfo46 },  // Inst #335 = STD
  { 336,	3,	0,	40,	0,	0|(1<<MCID::MayStore), 0x0ULL, NULL, ImplicitList3, OperandInfo52 },  // Inst #336 = STDCX
  { 337,	4,	1,	41,	0,	0|(1<<MCID::MayStore), 0x10ULL, NULL, NULL, OperandInfo88 },  // Inst #337 = STDU
  { 338,	4,	1,	41,	0,	0|(1<<MCID::MayStore), 0x14ULL, NULL, NULL, OperandInfo90 },  // Inst #338 = STDUX
  { 339,	3,	0,	39,	0,	0|(1<<MCID::MayStore), 0x14ULL, NULL, NULL, OperandInfo52 },  // Inst #339 = STDX
  { 340,	3,	0,	39,	0,	0|(1<<MCID::MayStore), 0x14ULL, NULL, NULL, OperandInfo51 },  // Inst #340 = STDX_32
  { 341,	3,	0,	39,	0,	0|(1<<MCID::MayStore), 0x10ULL, NULL, NULL, OperandInfo45 },  // Inst #341 = STD_32
  { 342,	3,	0,	42,	0,	0|(1<<MCID::MayStore), 0x10ULL, NULL, NULL, OperandInfo55 },  // Inst #342 = STFD
  { 343,	4,	1,	43,	0,	0|(1<<MCID::MayStore), 0x10ULL, NULL, NULL, OperandInfo91 },  // Inst #343 = STFDU
  { 344,	4,	1,	43,	0,	0|(1<<MCID::MayStore), 0x14ULL, NULL, NULL, OperandInfo92 },  // Inst #344 = STFDUX
  { 345,	3,	0,	42,	0,	0|(1<<MCID::MayStore), 0x10ULL, NULL, NULL, OperandInfo58 },  // Inst #345 = STFDX
  { 346,	3,	0,	42,	0,	0|(1<<MCID::MayStore), 0x10ULL, NULL, NULL, OperandInfo58 },  // Inst #346 = STFIWX
  { 347,	3,	0,	42,	0,	0|(1<<MCID::MayStore), 0x10ULL, NULL, NULL, OperandInfo59 },  // Inst #347 = STFS
  { 348,	4,	1,	43,	0,	0|(1<<MCID::MayStore), 0x10ULL, NULL, NULL, OperandInfo93 },  // Inst #348 = STFSU
  { 349,	4,	1,	43,	0,	0|(1<<MCID::MayStore), 0x14ULL, NULL, NULL, OperandInfo94 },  // Inst #349 = STFSUX
  { 350,	3,	0,	42,	0,	0|(1<<MCID::MayStore), 0x10ULL, NULL, NULL, OperandInfo62 },  // Inst #350 = STFSX
  { 351,	3,	0,	45,	0,	0|(1<<MCID::MayStore), 0x10ULL, NULL, NULL, OperandInfo45 },  // Inst #351 = STH
  { 352,	3,	0,	45,	0,	0|(1<<MCID::MayStore), 0x10ULL, NULL, NULL, OperandInfo46 },  // Inst #352 = STH8
  { 353,	3,	0,	45,	0,	0|(1<<MCID::MayStore), 0x14ULL, NULL, NULL, OperandInfo51 },  // Inst #353 = STHBRX
  { 354,	4,	1,	46,	0,	0|(1<<MCID::MayStore), 0x10ULL, NULL, NULL, OperandInfo87 },  // Inst #354 = STHU
  { 355,	4,	1,	46,	0,	0|(1<<MCID::MayStore), 0x10ULL, NULL, NULL, OperandInfo88 },  // Inst #355 = STHU8
  { 356,	4,	1,	46,	0,	0|(1<<MCID::MayStore), 0x14ULL, NULL, NULL, OperandInfo89 },  // Inst #356 = STHUX
  { 357,	4,	1,	46,	0,	0|(1<<MCID::MayStore), 0x14ULL, NULL, NULL, OperandInfo90 },  // Inst #357 = STHUX8
  { 358,	3,	0,	45,	0,	0|(1<<MCID::MayStore), 0x14ULL, NULL, NULL, OperandInfo51 },  // Inst #358 = STHX
  { 359,	3,	0,	45,	0,	0|(1<<MCID::MayStore), 0x14ULL, NULL, NULL, OperandInfo52 },  // Inst #359 = STHX8
  { 360,	3,	0,	45,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x10ULL, NULL, NULL, OperandInfo65 },  // Inst #360 = STVEBX
  { 361,	3,	0,	45,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x10ULL, NULL, NULL, OperandInfo65 },  // Inst #361 = STVEHX
  { 362,	3,	0,	45,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x10ULL, NULL, NULL, OperandInfo65 },  // Inst #362 = STVEWX
  { 363,	3,	0,	45,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x10ULL, NULL, NULL, OperandInfo65 },  // Inst #363 = STVX
  { 364,	3,	0,	45,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x10ULL, NULL, NULL, OperandInfo65 },  // Inst #364 = STVXL
  { 365,	3,	0,	45,	0,	0|(1<<MCID::MayStore), 0x10ULL, NULL, NULL, OperandInfo45 },  // Inst #365 = STW
  { 366,	3,	0,	45,	0,	0|(1<<MCID::MayStore), 0x10ULL, NULL, NULL, OperandInfo46 },  // Inst #366 = STW8
  { 367,	3,	0,	45,	0,	0|(1<<MCID::MayStore), 0x14ULL, NULL, NULL, OperandInfo51 },  // Inst #367 = STWBRX
  { 368,	3,	0,	44,	0,	0|(1<<MCID::MayStore), 0x0ULL, NULL, ImplicitList3, OperandInfo51 },  // Inst #368 = STWCX
  { 369,	4,	1,	46,	0,	0|(1<<MCID::MayStore), 0x10ULL, NULL, NULL, OperandInfo87 },  // Inst #369 = STWU
  { 370,	4,	1,	46,	0,	0|(1<<MCID::MayStore), 0x10ULL, NULL, NULL, OperandInfo88 },  // Inst #370 = STWU8
  { 371,	4,	1,	46,	0,	0|(1<<MCID::MayStore), 0x14ULL, NULL, NULL, OperandInfo89 },  // Inst #371 = STWUX
  { 372,	4,	1,	46,	0,	0|(1<<MCID::MayStore), 0x14ULL, NULL, NULL, OperandInfo90 },  // Inst #372 = STWUX8
  { 373,	3,	0,	45,	0,	0|(1<<MCID::MayStore), 0x14ULL, NULL, NULL, OperandInfo51 },  // Inst #373 = STWX
  { 374,	3,	0,	45,	0,	0|(1<<MCID::MayStore), 0x14ULL, NULL, NULL, OperandInfo52 },  // Inst #374 = STWX8
  { 375,	3,	1,	15,	0,	0, 0x8ULL, NULL, NULL, OperandInfo8 },  // Inst #375 = SUBF
  { 376,	3,	1,	15,	0,	0, 0x8ULL, NULL, NULL, OperandInfo9 },  // Inst #376 = SUBF8
  { 377,	3,	1,	15,	0,	0, 0xcULL, NULL, ImplicitList1, OperandInfo8 },  // Inst #377 = SUBFC
  { 378,	3,	1,	15,	0,	0, 0xcULL, NULL, ImplicitList1, OperandInfo9 },  // Inst #378 = SUBFC8
  { 379,	3,	1,	15,	0,	0, 0x8ULL, ImplicitList1, ImplicitList1, OperandInfo8 },  // Inst #379 = SUBFE
  { 380,	3,	1,	15,	0,	0, 0x8ULL, ImplicitList1, ImplicitList1, OperandInfo9 },  // Inst #380 = SUBFE8
  { 381,	3,	1,	15,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo10 },  // Inst #381 = SUBFIC
  { 382,	3,	1,	15,	0,	0, 0x8ULL, NULL, ImplicitList1, OperandInfo11 },  // Inst #382 = SUBFIC8
  { 383,	2,	1,	15,	0,	0, 0x8ULL, ImplicitList1, ImplicitList1, OperandInfo12 },  // Inst #383 = SUBFME
  { 384,	2,	1,	15,	0,	0, 0x8ULL, ImplicitList1, ImplicitList1, OperandInfo13 },  // Inst #384 = SUBFME8
  { 385,	2,	1,	15,	0,	0, 0x8ULL, ImplicitList1, ImplicitList1, OperandInfo12 },  // Inst #385 = SUBFZE
  { 386,	2,	1,	15,	0,	0, 0x8ULL, ImplicitList1, ImplicitList1, OperandInfo13 },  // Inst #386 = SUBFZE8
  { 387,	0,	0,	47,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, 0 },  // Inst #387 = SYNC
  { 388,	1,	0,	1,	0,	0|(1<<MCID::Return)|(1<<MCID::Branch)|(1<<MCID::Barrier)|(1<<MCID::Call)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList11, NULL, OperandInfo5 },  // Inst #388 = TAILB
  { 389,	1,	0,	1,	0,	0|(1<<MCID::Return)|(1<<MCID::Branch)|(1<<MCID::Barrier)|(1<<MCID::Call)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList11, NULL, OperandInfo5 },  // Inst #389 = TAILB8
  { 390,	1,	0,	1,	0,	0|(1<<MCID::Return)|(1<<MCID::Branch)|(1<<MCID::Barrier)|(1<<MCID::Call)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList11, NULL, OperandInfo5 },  // Inst #390 = TAILBA
  { 391,	1,	0,	1,	0,	0|(1<<MCID::Return)|(1<<MCID::Branch)|(1<<MCID::Barrier)|(1<<MCID::Call)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList11, NULL, OperandInfo5 },  // Inst #391 = TAILBA8
  { 392,	0,	0,	1,	0,	0|(1<<MCID::Return)|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::Call)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList8, NULL, 0 },  // Inst #392 = TAILBCTR
  { 393,	0,	0,	1,	0,	0|(1<<MCID::Return)|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::Call)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x38ULL, ImplicitList5, NULL, 0 },  // Inst #393 = TAILBCTR8
  { 394,	2,	0,	0,	0,	0|(1<<MCID::Return)|(1<<MCID::Barrier)|(1<<MCID::Call)|(1<<MCID::Terminator), 0x0ULL, ImplicitList11, NULL, OperandInfo95 },  // Inst #394 = TCRETURNai
  { 395,	2,	0,	0,	0,	0|(1<<MCID::Return)|(1<<MCID::Barrier)|(1<<MCID::Call)|(1<<MCID::Terminator), 0x0ULL, ImplicitList11, NULL, OperandInfo95 },  // Inst #395 = TCRETURNai8
  { 396,	2,	0,	0,	0,	0|(1<<MCID::Return)|(1<<MCID::Barrier)|(1<<MCID::Call)|(1<<MCID::Terminator), 0x0ULL, ImplicitList11, NULL, OperandInfo95 },  // Inst #396 = TCRETURNdi
  { 397,	2,	0,	0,	0,	0|(1<<MCID::Return)|(1<<MCID::Barrier)|(1<<MCID::Call)|(1<<MCID::Terminator), 0x0ULL, ImplicitList11, NULL, OperandInfo95 },  // Inst #397 = TCRETURNdi8
  { 398,	2,	0,	0,	0,	0|(1<<MCID::Return)|(1<<MCID::Barrier)|(1<<MCID::Call)|(1<<MCID::Terminator), 0x0ULL, ImplicitList11, NULL, OperandInfo96 },  // Inst #398 = TCRETURNri
  { 399,	2,	0,	0,	0,	0|(1<<MCID::Return)|(1<<MCID::Barrier)|(1<<MCID::Call)|(1<<MCID::Terminator), 0x0ULL, ImplicitList11, NULL, OperandInfo97 },  // Inst #399 = TCRETURNri8
  { 400,	0,	0,	37,	0,	0|(1<<MCID::Barrier)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, 0 },  // Inst #400 = TRAP
  { 401,	2,	1,	0,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo12 },  // Inst #401 = UPDATE_VRSAVE
  { 402,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #402 = VADDCUW
  { 403,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #403 = VADDFP
  { 404,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #404 = VADDSBS
  { 405,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #405 = VADDSHS
  { 406,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #406 = VADDSWS
  { 407,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #407 = VADDUBM
  { 408,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #408 = VADDUBS
  { 409,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #409 = VADDUHM
  { 410,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #410 = VADDUHS
  { 411,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #411 = VADDUWM
  { 412,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #412 = VADDUWS
  { 413,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #413 = VAND
  { 414,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #414 = VANDC
  { 415,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #415 = VAVGSB
  { 416,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #416 = VAVGSH
  { 417,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #417 = VAVGSW
  { 418,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #418 = VAVGUB
  { 419,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #419 = VAVGUH
  { 420,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #420 = VAVGUW
  { 421,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo99 },  // Inst #421 = VCFSX
  { 422,	2,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo100 },  // Inst #422 = VCFSX_0
  { 423,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo99 },  // Inst #423 = VCFUX
  { 424,	2,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo100 },  // Inst #424 = VCFUX_0
  { 425,	3,	1,	53,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #425 = VCMPBFP
  { 426,	3,	1,	53,	0,	0, 0x28ULL, NULL, ImplicitList15, OperandInfo98 },  // Inst #426 = VCMPBFPo
  { 427,	3,	1,	53,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #427 = VCMPEQFP
  { 428,	3,	1,	53,	0,	0, 0x28ULL, NULL, ImplicitList15, OperandInfo98 },  // Inst #428 = VCMPEQFPo
  { 429,	3,	1,	53,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #429 = VCMPEQUB
  { 430,	3,	1,	53,	0,	0, 0x28ULL, NULL, ImplicitList15, OperandInfo98 },  // Inst #430 = VCMPEQUBo
  { 431,	3,	1,	53,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #431 = VCMPEQUH
  { 432,	3,	1,	53,	0,	0, 0x28ULL, NULL, ImplicitList15, OperandInfo98 },  // Inst #432 = VCMPEQUHo
  { 433,	3,	1,	53,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #433 = VCMPEQUW
  { 434,	3,	1,	53,	0,	0, 0x28ULL, NULL, ImplicitList15, OperandInfo98 },  // Inst #434 = VCMPEQUWo
  { 435,	3,	1,	53,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #435 = VCMPGEFP
  { 436,	3,	1,	53,	0,	0, 0x28ULL, NULL, ImplicitList15, OperandInfo98 },  // Inst #436 = VCMPGEFPo
  { 437,	3,	1,	53,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #437 = VCMPGTFP
  { 438,	3,	1,	53,	0,	0, 0x28ULL, NULL, ImplicitList15, OperandInfo98 },  // Inst #438 = VCMPGTFPo
  { 439,	3,	1,	53,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #439 = VCMPGTSB
  { 440,	3,	1,	53,	0,	0, 0x28ULL, NULL, ImplicitList15, OperandInfo98 },  // Inst #440 = VCMPGTSBo
  { 441,	3,	1,	53,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #441 = VCMPGTSH
  { 442,	3,	1,	53,	0,	0, 0x28ULL, NULL, ImplicitList15, OperandInfo98 },  // Inst #442 = VCMPGTSHo
  { 443,	3,	1,	53,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #443 = VCMPGTSW
  { 444,	3,	1,	53,	0,	0, 0x28ULL, NULL, ImplicitList15, OperandInfo98 },  // Inst #444 = VCMPGTSWo
  { 445,	3,	1,	53,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #445 = VCMPGTUB
  { 446,	3,	1,	53,	0,	0, 0x28ULL, NULL, ImplicitList15, OperandInfo98 },  // Inst #446 = VCMPGTUBo
  { 447,	3,	1,	53,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #447 = VCMPGTUH
  { 448,	3,	1,	53,	0,	0, 0x28ULL, NULL, ImplicitList15, OperandInfo98 },  // Inst #448 = VCMPGTUHo
  { 449,	3,	1,	53,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #449 = VCMPGTUW
  { 450,	3,	1,	53,	0,	0, 0x28ULL, NULL, ImplicitList15, OperandInfo98 },  // Inst #450 = VCMPGTUWo
  { 451,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo99 },  // Inst #451 = VCTSXS
  { 452,	2,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo100 },  // Inst #452 = VCTSXS_0
  { 453,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo99 },  // Inst #453 = VCTUXS
  { 454,	2,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo100 },  // Inst #454 = VCTUXS_0
  { 455,	2,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo100 },  // Inst #455 = VEXPTEFP
  { 456,	2,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo100 },  // Inst #456 = VLOGEFP
  { 457,	4,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo101 },  // Inst #457 = VMADDFP
  { 458,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #458 = VMAXFP
  { 459,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #459 = VMAXSB
  { 460,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #460 = VMAXSH
  { 461,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #461 = VMAXSW
  { 462,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #462 = VMAXUB
  { 463,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #463 = VMAXUH
  { 464,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #464 = VMAXUW
  { 465,	4,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo101 },  // Inst #465 = VMHADDSHS
  { 466,	4,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo101 },  // Inst #466 = VMHRADDSHS
  { 467,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #467 = VMINFP
  { 468,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #468 = VMINSB
  { 469,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #469 = VMINSH
  { 470,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #470 = VMINSW
  { 471,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #471 = VMINUB
  { 472,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #472 = VMINUH
  { 473,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #473 = VMINUW
  { 474,	4,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo101 },  // Inst #474 = VMLADDUHM
  { 475,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #475 = VMRGHB
  { 476,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #476 = VMRGHH
  { 477,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #477 = VMRGHW
  { 478,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #478 = VMRGLB
  { 479,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #479 = VMRGLH
  { 480,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #480 = VMRGLW
  { 481,	4,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo101 },  // Inst #481 = VMSUMMBM
  { 482,	4,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo101 },  // Inst #482 = VMSUMSHM
  { 483,	4,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo101 },  // Inst #483 = VMSUMSHS
  { 484,	4,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo101 },  // Inst #484 = VMSUMUBM
  { 485,	4,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo101 },  // Inst #485 = VMSUMUHM
  { 486,	4,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo101 },  // Inst #486 = VMSUMUHS
  { 487,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #487 = VMULESB
  { 488,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #488 = VMULESH
  { 489,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #489 = VMULEUB
  { 490,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #490 = VMULEUH
  { 491,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #491 = VMULOSB
  { 492,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #492 = VMULOSH
  { 493,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #493 = VMULOUB
  { 494,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #494 = VMULOUH
  { 495,	4,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo101 },  // Inst #495 = VNMSUBFP
  { 496,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #496 = VNOR
  { 497,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #497 = VOR
  { 498,	4,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo101 },  // Inst #498 = VPERM
  { 499,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #499 = VPKPX
  { 500,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #500 = VPKSHSS
  { 501,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #501 = VPKSHUS
  { 502,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #502 = VPKSWSS
  { 503,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #503 = VPKSWUS
  { 504,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #504 = VPKUHUM
  { 505,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #505 = VPKUHUS
  { 506,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #506 = VPKUWUM
  { 507,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #507 = VPKUWUS
  { 508,	2,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo100 },  // Inst #508 = VREFP
  { 509,	2,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo100 },  // Inst #509 = VRFIM
  { 510,	2,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo100 },  // Inst #510 = VRFIN
  { 511,	2,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo100 },  // Inst #511 = VRFIP
  { 512,	2,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo100 },  // Inst #512 = VRFIZ
  { 513,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #513 = VRLB
  { 514,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #514 = VRLH
  { 515,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #515 = VRLW
  { 516,	2,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo100 },  // Inst #516 = VRSQRTEFP
  { 517,	4,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo101 },  // Inst #517 = VSEL
  { 518,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #518 = VSL
  { 519,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #519 = VSLB
  { 520,	4,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo102 },  // Inst #520 = VSLDOI
  { 521,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #521 = VSLH
  { 522,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #522 = VSLO
  { 523,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #523 = VSLW
  { 524,	3,	1,	55,	0,	0, 0x28ULL, NULL, NULL, OperandInfo99 },  // Inst #524 = VSPLTB
  { 525,	3,	1,	55,	0,	0, 0x28ULL, NULL, NULL, OperandInfo99 },  // Inst #525 = VSPLTH
  { 526,	2,	1,	55,	0,	0, 0x28ULL, NULL, NULL, OperandInfo103 },  // Inst #526 = VSPLTISB
  { 527,	2,	1,	55,	0,	0, 0x28ULL, NULL, NULL, OperandInfo103 },  // Inst #527 = VSPLTISH
  { 528,	2,	1,	55,	0,	0, 0x28ULL, NULL, NULL, OperandInfo103 },  // Inst #528 = VSPLTISW
  { 529,	3,	1,	55,	0,	0, 0x28ULL, NULL, NULL, OperandInfo99 },  // Inst #529 = VSPLTW
  { 530,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #530 = VSR
  { 531,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #531 = VSRAB
  { 532,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #532 = VSRAH
  { 533,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #533 = VSRAW
  { 534,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #534 = VSRB
  { 535,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #535 = VSRH
  { 536,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #536 = VSRO
  { 537,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #537 = VSRW
  { 538,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #538 = VSUBCUW
  { 539,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #539 = VSUBFP
  { 540,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #540 = VSUBSBS
  { 541,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #541 = VSUBSHS
  { 542,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #542 = VSUBSWS
  { 543,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #543 = VSUBUBM
  { 544,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #544 = VSUBUBS
  { 545,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #545 = VSUBUHM
  { 546,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #546 = VSUBUHS
  { 547,	3,	1,	54,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #547 = VSUBUWM
  { 548,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #548 = VSUBUWS
  { 549,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #549 = VSUM2SWS
  { 550,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #550 = VSUM4SBS
  { 551,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #551 = VSUM4SHS
  { 552,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #552 = VSUM4UBS
  { 553,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #553 = VSUMSWS
  { 554,	2,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo100 },  // Inst #554 = VUPKHPX
  { 555,	2,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo100 },  // Inst #555 = VUPKHSB
  { 556,	2,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo100 },  // Inst #556 = VUPKHSH
  { 557,	2,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo100 },  // Inst #557 = VUPKLPX
  { 558,	2,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo100 },  // Inst #558 = VUPKLSB
  { 559,	2,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo100 },  // Inst #559 = VUPKLSH
  { 560,	3,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo98 },  // Inst #560 = VXOR
  { 561,	1,	1,	52,	0,	0, 0x28ULL, NULL, NULL, OperandInfo69 },  // Inst #561 = V_SET0
  { 562,	3,	1,	26,	0,	0, 0x8ULL, NULL, NULL, OperandInfo8 },  // Inst #562 = XOR
  { 563,	3,	1,	26,	0,	0, 0x8ULL, NULL, NULL, OperandInfo9 },  // Inst #563 = XOR8
  { 564,	3,	1,	26,	0,	0, 0x8ULL, NULL, NULL, OperandInfo10 },  // Inst #564 = XORI
  { 565,	3,	1,	26,	0,	0, 0x8ULL, NULL, NULL, OperandInfo11 },  // Inst #565 = XORI8
  { 566,	3,	1,	26,	0,	0, 0x8ULL, NULL, NULL, OperandInfo10 },  // Inst #566 = XORIS
  { 567,	3,	1,	26,	0,	0, 0x8ULL, NULL, NULL, OperandInfo11 },  // Inst #567 = XORIS8
};

extern const char PPCInstrNameData[] = {
  /* 0 */ 'M', 'T', 'F', 'S', 'B', '0', 0,
  /* 7 */ 'V', '_', 'S', 'E', 'T', '0', 0,
  /* 14 */ 'V', 'C', 'T', 'S', 'X', 'S', '_', '0', 0,
  /* 23 */ 'V', 'C', 'T', 'U', 'X', 'S', '_', '0', 0,
  /* 32 */ 'V', 'C', 'F', 'S', 'X', '_', '0', 0,
  /* 40 */ 'V', 'C', 'F', 'U', 'X', '_', '0', 0,
  /* 48 */ 'M', 'T', 'F', 'S', 'B', '1', 0,
  /* 55 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'S', 'U', 'B', '_', 'I', '3', '2', 0,
  /* 75 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'D', 'D', '_', 'I', '3', '2', 0,
  /* 95 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'A', 'N', 'D', '_', 'I', '3', '2', 0,
  /* 116 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'N', 'D', '_', 'I', '3', '2', 0,
  /* 136 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'S', 'W', 'A', 'P', '_', 'I', '3', '2', 0,
  /* 152 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'C', 'M', 'P', '_', 'S', 'W', 'A', 'P', '_', 'I', '3', '2', 0,
  /* 172 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'X', 'O', 'R', '_', 'I', '3', '2', 0,
  /* 192 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'O', 'R', '_', 'I', '3', '2', 0,
  /* 211 */ 'S', 'T', 'D', '_', '3', '2', 0,
  /* 218 */ 'E', 'X', 'T', 'S', 'W', '_', '3', '2', 0,
  /* 227 */ 'S', 'T', 'D', 'X', '_', '3', '2', 0,
  /* 235 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'S', 'U', 'B', '_', 'I', '6', '4', 0,
  /* 255 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'D', 'D', '_', 'I', '6', '4', 0,
  /* 275 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'A', 'N', 'D', '_', 'I', '6', '4', 0,
  /* 296 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'N', 'D', '_', 'I', '6', '4', 0,
  /* 316 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'S', 'W', 'A', 'P', '_', 'I', '6', '4', 0,
  /* 332 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'C', 'M', 'P', '_', 'S', 'W', 'A', 'P', '_', 'I', '6', '4', 0,
  /* 352 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'X', 'O', 'R', '_', 'I', '6', '4', 0,
  /* 372 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'O', 'R', '_', 'I', '6', '4', 0,
  /* 391 */ 'D', 'S', 'T', '6', '4', 0,
  /* 397 */ 'D', 'S', 'T', 'S', 'T', '6', '4', 0,
  /* 405 */ 'D', 'S', 'T', 'T', '6', '4', 0,
  /* 412 */ 'D', 'S', 'T', 'S', 'T', 'T', '6', '4', 0,
  /* 421 */ 'E', 'X', 'T', 'S', 'W', '_', '3', '2', '_', '6', '4', 0,
  /* 433 */ 'A', 'D', 'D', '4', 0,
  /* 438 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'C', 'C', '_', 'F', '4', 0,
  /* 451 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'C', 'C', '_', 'I', '4', 0,
  /* 464 */ 'B', 'L', 'A', '_', 'S', 'V', 'R', '4', 0,
  /* 473 */ 'B', 'L', '_', 'S', 'V', 'R', '4', 0,
  /* 481 */ 'B', 'C', 'T', 'R', 'L', '_', 'S', 'V', 'R', '4', 0,
  /* 492 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'S', 'U', 'B', '_', 'I', '1', '6', 0,
  /* 512 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'D', 'D', '_', 'I', '1', '6', 0,
  /* 532 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'A', 'N', 'D', '_', 'I', '1', '6', 0,
  /* 553 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'N', 'D', '_', 'I', '1', '6', 0,
  /* 573 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'S', 'W', 'A', 'P', '_', 'I', '1', '6', 0,
  /* 589 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'C', 'M', 'P', '_', 'S', 'W', 'A', 'P', '_', 'I', '1', '6', 0,
  /* 609 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'X', 'O', 'R', '_', 'I', '1', '6', 0,
  /* 629 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'O', 'R', '_', 'I', '1', '6', 0,
  /* 648 */ 'T', 'A', 'I', 'L', 'B', 'A', '8', 0,
  /* 656 */ 'L', 'H', 'A', '8', 0,
  /* 661 */ 'T', 'A', 'I', 'L', 'B', '8', 0,
  /* 668 */ 'E', 'X', 'T', 'S', 'B', '8', 0,
  /* 675 */ 'M', 'F', 'T', 'B', '8', 0,
  /* 681 */ 'S', 'T', 'B', '8', 0,
  /* 686 */ 'A', 'D', 'D', 'C', '8', 0,
  /* 692 */ 'A', 'N', 'D', 'C', '8', 0,
  /* 698 */ 'S', 'U', 'B', 'F', 'C', '8', 0,
  /* 705 */ 'A', 'D', 'D', 'I', 'C', '8', 0,
  /* 712 */ 'S', 'U', 'B', 'F', 'I', 'C', '8', 0,
  /* 720 */ 'D', 'Y', 'N', 'A', 'L', 'L', 'O', 'C', '8', 0,
  /* 730 */ 'O', 'R', 'C', '8', 0,
  /* 735 */ 'A', 'D', 'D', '8', 0,
  /* 740 */ 'N', 'A', 'N', 'D', '8', 0,
  /* 746 */ 'A', 'D', 'D', 'E', '8', 0,
  /* 752 */ 'S', 'U', 'B', 'F', 'E', '8', 0,
  /* 759 */ 'A', 'D', 'D', 'M', 'E', '8', 0,
  /* 766 */ 'S', 'U', 'B', 'F', 'M', 'E', '8', 0,
  /* 774 */ 'A', 'D', 'D', 'Z', 'E', '8', 0,
  /* 781 */ 'S', 'U', 'B', 'F', 'Z', 'E', '8', 0,
  /* 789 */ 'S', 'U', 'B', 'F', '8', 0,
  /* 795 */ 'M', 'T', 'C', 'R', 'F', '8', 0,
  /* 802 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'C', 'C', '_', 'F', '8', 0,
  /* 815 */ 'N', 'E', 'G', '8', 0,
  /* 820 */ 'E', 'X', 'T', 'S', 'H', '8', 0,
  /* 827 */ 'S', 'T', 'H', '8', 0,
  /* 832 */ 'A', 'D', 'D', 'I', '8', 0,
  /* 838 */ 'L', 'I', '8', 0,
  /* 842 */ 'X', 'O', 'R', 'I', '8', 0,
  /* 848 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'S', 'U', 'B', '_', 'I', '8', 0,
  /* 867 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'C', 'C', '_', 'I', '8', 0,
  /* 880 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'D', 'D', '_', 'I', '8', 0,
  /* 899 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'A', 'N', 'D', '_', 'I', '8', 0,
  /* 919 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'N', 'D', '_', 'I', '8', 0,
  /* 938 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'S', 'W', 'A', 'P', '_', 'I', '8', 0,
  /* 953 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'C', 'M', 'P', '_', 'S', 'W', 'A', 'P', '_', 'I', '8', 0,
  /* 972 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'X', 'O', 'R', '_', 'I', '8', 0,
  /* 991 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'O', 'R', '_', 'I', '8', 0,
  /* 1009 */ 'I', 'S', 'E', 'L', '8', 0,
  /* 1015 */ 'R', 'L', 'W', 'I', 'N', 'M', '8', 0,
  /* 1023 */ 'M', 'F', 'C', 'R', '8', 0,
  /* 1029 */ 'M', 'F', 'L', 'R', '8', 0,
  /* 1035 */ 'M', 'T', 'L', 'R', '8', 0,
  /* 1041 */ 'M', 'o', 'v', 'e', 'P', 'C', 't', 'o', 'L', 'R', '8', 0,
  /* 1053 */ 'N', 'O', 'R', '8', 0,
  /* 1058 */ 'X', 'O', 'R', '8', 0,
  /* 1063 */ 'T', 'A', 'I', 'L', 'B', 'C', 'T', 'R', '8', 0,
  /* 1073 */ 'M', 'F', 'C', 'T', 'R', '8', 0,
  /* 1080 */ 'M', 'T', 'C', 'T', 'R', '8', 0,
  /* 1087 */ 'A', 'D', 'D', 'I', 'S', '8', 0,
  /* 1094 */ 'L', 'I', 'S', '8', 0,
  /* 1099 */ 'X', 'O', 'R', 'I', 'S', '8', 0,
  /* 1106 */ 'L', 'H', 'A', 'U', '8', 0,
  /* 1112 */ 'S', 'T', 'B', 'U', '8', 0,
  /* 1118 */ 'S', 'T', 'H', 'U', '8', 0,
  /* 1124 */ 'S', 'T', 'W', 'U', '8', 0,
  /* 1130 */ 'L', 'B', 'Z', 'U', '8', 0,
  /* 1136 */ 'L', 'H', 'Z', 'U', '8', 0,
  /* 1142 */ 'L', 'W', 'Z', 'U', '8', 0,
  /* 1148 */ 'E', 'Q', 'V', '8', 0,
  /* 1153 */ 'S', 'T', 'W', '8', 0,
  /* 1158 */ 'L', 'H', 'A', 'X', '8', 0,
  /* 1164 */ 'S', 'T', 'B', 'X', '8', 0,
  /* 1170 */ 'S', 'T', 'H', 'X', '8', 0,
  /* 1176 */ 'L', 'H', 'A', 'U', 'X', '8', 0,
  /* 1183 */ 'S', 'T', 'B', 'U', 'X', '8', 0,
  /* 1190 */ 'S', 'T', 'H', 'U', 'X', '8', 0,
  /* 1197 */ 'S', 'T', 'W', 'U', 'X', '8', 0,
  /* 1204 */ 'L', 'B', 'Z', 'U', 'X', '8', 0,
  /* 1211 */ 'L', 'H', 'Z', 'U', 'X', '8', 0,
  /* 1218 */ 'L', 'W', 'Z', 'U', 'X', '8', 0,
  /* 1225 */ 'S', 'T', 'W', 'X', '8', 0,
  /* 1231 */ 'L', 'B', 'Z', 'X', '8', 0,
  /* 1237 */ 'L', 'H', 'Z', 'X', '8', 0,
  /* 1243 */ 'L', 'W', 'Z', 'X', '8', 0,
  /* 1249 */ 'L', 'B', 'Z', '8', 0,
  /* 1254 */ 'B', 'D', 'Z', '8', 0,
  /* 1259 */ 'L', 'H', 'Z', '8', 0,
  /* 1264 */ 'B', 'D', 'N', 'Z', '8', 0,
  /* 1270 */ 'L', 'W', 'Z', '8', 0,
  /* 1275 */ 'T', 'C', 'R', 'E', 'T', 'U', 'R', 'N', 'a', 'i', '8', 0,
  /* 1287 */ 'T', 'C', 'R', 'E', 'T', 'U', 'R', 'N', 'd', 'i', '8', 0,
  /* 1299 */ 'T', 'C', 'R', 'E', 'T', 'U', 'R', 'N', 'r', 'i', '8', 0,
  /* 1311 */ 'A', 'N', 'D', 'I', 'o', '8', 0,
  /* 1318 */ 'A', 'N', 'D', 'I', 'S', 'o', '8', 0,
  /* 1326 */ 'D', 'C', 'B', 'A', 0,
  /* 1331 */ 'T', 'A', 'I', 'L', 'B', 'A', 0,
  /* 1338 */ 'L', 'H', 'A', 0,
  /* 1342 */ 'L', 'A', 0,
  /* 1345 */ 'L', 'W', 'A', 0,
  /* 1349 */ 'V', 'S', 'R', 'A', 'B', 0,
  /* 1355 */ 'V', 'M', 'R', 'G', 'H', 'B', 0,
  /* 1362 */ 'V', 'M', 'R', 'G', 'L', 'B', 0,
  /* 1369 */ 'T', 'A', 'I', 'L', 'B', 0,
  /* 1375 */ 'V', 'R', 'L', 'B', 0,
  /* 1380 */ 'V', 'S', 'L', 'B', 0,
  /* 1385 */ 'V', 'S', 'R', 'B', 0,
  /* 1390 */ 'V', 'M', 'U', 'L', 'E', 'S', 'B', 0,
  /* 1398 */ 'V', 'A', 'V', 'G', 'S', 'B', 0,
  /* 1405 */ 'V', 'U', 'P', 'K', 'H', 'S', 'B', 0,
  /* 1413 */ 'V', 'S', 'P', 'L', 'T', 'I', 'S', 'B', 0,
  /* 1422 */ 'V', 'U', 'P', 'K', 'L', 'S', 'B', 0,
  /* 1430 */ 'V', 'M', 'I', 'N', 'S', 'B', 0,
  /* 1437 */ 'V', 'M', 'U', 'L', 'O', 'S', 'B', 0,
  /* 1445 */ 'V', 'C', 'M', 'P', 'G', 'T', 'S', 'B', 0,
  /* 1454 */ 'E', 'X', 'T', 'S', 'B', 0,
  /* 1460 */ 'V', 'M', 'A', 'X', 'S', 'B', 0,
  /* 1467 */ 'V', 'S', 'P', 'L', 'T', 'B', 0,
  /* 1474 */ 'S', 'T', 'B', 0,
  /* 1478 */ 'V', 'M', 'U', 'L', 'E', 'U', 'B', 0,
  /* 1486 */ 'V', 'A', 'V', 'G', 'U', 'B', 0,
  /* 1493 */ 'V', 'M', 'I', 'N', 'U', 'B', 0,
  /* 1500 */ 'V', 'M', 'U', 'L', 'O', 'U', 'B', 0,
  /* 1508 */ 'V', 'C', 'M', 'P', 'E', 'Q', 'U', 'B', 0,
  /* 1517 */ 'F', 'S', 'U', 'B', 0,
  /* 1522 */ 'F', 'M', 'S', 'U', 'B', 0,
  /* 1528 */ 'F', 'N', 'M', 'S', 'U', 'B', 0,
  /* 1535 */ 'V', 'C', 'M', 'P', 'G', 'T', 'U', 'B', 0,
  /* 1544 */ 'V', 'M', 'A', 'X', 'U', 'B', 0,
  /* 1551 */ 'B', 'C', 'C', 0,
  /* 1555 */ 'A', 'D', 'D', 'C', 0,
  /* 1560 */ 'V', 'A', 'N', 'D', 'C', 0,
  /* 1566 */ 'S', 'U', 'B', 'F', 'C', 0,
  /* 1572 */ 'A', 'D', 'D', 'I', 'C', 0,
  /* 1578 */ 'S', 'U', 'B', 'F', 'I', 'C', 0,
  /* 1585 */ 'S', 'Y', 'N', 'C', 0,
  /* 1590 */ 'D', 'Y', 'N', 'A', 'L', 'L', 'O', 'C', 0,
  /* 1599 */ 'O', 'R', 'C', 0,
  /* 1603 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'C', 'C', '_', 'V', 'R', 'R', 'C', 0,
  /* 1618 */ 'S', 'R', 'A', 'D', 0,
  /* 1623 */ 'F', 'A', 'D', 'D', 0,
  /* 1628 */ 'F', 'M', 'A', 'D', 'D', 0,
  /* 1634 */ 'F', 'N', 'M', 'A', 'D', 'D', 0,
  /* 1641 */ 'L', 'F', 'D', 0,
  /* 1645 */ 'S', 'T', 'F', 'D', 0,
  /* 1650 */ 'F', 'N', 'E', 'G', 'D', 0,
  /* 1656 */ 'M', 'U', 'L', 'H', 'D', 0,
  /* 1662 */ 'F', 'C', 'F', 'I', 'D', 0,
  /* 1668 */ 'F', 'S', 'E', 'L', 'D', 0,
  /* 1674 */ 'M', 'U', 'L', 'L', 'D', 0,
  /* 1680 */ 'C', 'M', 'P', 'L', 'D', 0,
  /* 1686 */ 'S', 'L', 'D', 0,
  /* 1690 */ 'N', 'A', 'N', 'D', 0,
  /* 1695 */ 'V', 'A', 'N', 'D', 0,
  /* 1700 */ 'L', 'I', 'F', 'E', 'T', 'I', 'M', 'E', '_', 'E', 'N', 'D', 0,
  /* 1713 */ 'C', 'M', 'P', 'D', 0,
  /* 1718 */ 'S', 'R', 'D', 0,
  /* 1722 */ 'F', 'A', 'B', 'S', 'D', 0,
  /* 1728 */ 'F', 'N', 'A', 'B', 'S', 'D', 0,
  /* 1735 */ 'S', 'T', 'D', 0,
  /* 1739 */ 'F', 'C', 'M', 'P', 'U', 'D', 0,
  /* 1746 */ 'D', 'I', 'V', 'D', 0,
  /* 1751 */ 'C', 'N', 'T', 'L', 'Z', 'D', 0,
  /* 1758 */ 'R', 'E', 'G', '_', 'S', 'E', 'Q', 'U', 'E', 'N', 'C', 'E', 0,
  /* 1771 */ 'A', 'D', 'D', 'E', 0,
  /* 1776 */ 'S', 'U', 'B', 'F', 'E', 0,
  /* 1782 */ 'B', 'U', 'N', 'D', 'L', 'E', 0,
  /* 1789 */ 'A', 'D', 'D', 'M', 'E', 0,
  /* 1795 */ 'S', 'U', 'B', 'F', 'M', 'E', 0,
  /* 1802 */ 'D', 'B', 'G', '_', 'V', 'A', 'L', 'U', 'E', 0,
  /* 1812 */ 'M', 'F', 'V', 'R', 'S', 'A', 'V', 'E', 0,
  /* 1821 */ 'M', 'T', 'V', 'R', 'S', 'A', 'V', 'E', 0,
  /* 1830 */ 'U', 'P', 'D', 'A', 'T', 'E', '_', 'V', 'R', 'S', 'A', 'V', 'E', 0,
  /* 1844 */ 'A', 'D', 'D', 'Z', 'E', 0,
  /* 1850 */ 'S', 'U', 'B', 'F', 'Z', 'E', 0,
  /* 1857 */ 'D', 'C', 'B', 'F', 0,
  /* 1862 */ 'S', 'U', 'B', 'F', 0,
  /* 1867 */ 'I', 'M', 'P', 'L', 'I', 'C', 'I', 'T', '_', 'D', 'E', 'F', 0,
  /* 1880 */ 'B', 'L', 'A', '8', '_', 'E', 'L', 'F', 0,
  /* 1889 */ 'B', 'L', '8', '_', 'E', 'L', 'F', 0,
  /* 1897 */ 'B', 'C', 'T', 'R', 'L', '8', '_', 'E', 'L', 'F', 0,
  /* 1908 */ 'B', 'L', 'A', '8', '_', 'N', 'O', 'P', '_', 'E', 'L', 'F', 0,
  /* 1921 */ 'B', 'L', '8', '_', 'N', 'O', 'P', '_', 'E', 'L', 'F', 0,
  /* 1933 */ 'M', 'C', 'R', 'F', 0,
  /* 1938 */ 'M', 'F', 'O', 'C', 'R', 'F', 0,
  /* 1945 */ 'M', 'T', 'C', 'R', 'F', 0,
  /* 1951 */ 'M', 'T', 'F', 'S', 'F', 0,
  /* 1957 */ 'N', 'E', 'G', 0,
  /* 1961 */ 'E', 'X', 'T', 'R', 'A', 'C', 'T', '_', 'S', 'U', 'B', 'R', 'E', 'G', 0,
  /* 1976 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'S', 'U', 'B', 'R', 'E', 'G', 0,
  /* 1990 */ 'S', 'U', 'B', 'R', 'E', 'G', '_', 'T', 'O', '_', 'R', 'E', 'G', 0,
  /* 2004 */ 'V', 'S', 'R', 'A', 'H', 0,
  /* 2010 */ 'V', 'M', 'R', 'G', 'H', 'H', 0,
  /* 2017 */ 'V', 'M', 'R', 'G', 'L', 'H', 0,
  /* 2024 */ 'V', 'R', 'L', 'H', 0,
  /* 2029 */ 'V', 'S', 'L', 'H', 0,
  /* 2034 */ 'V', 'S', 'R', 'H', 0,
  /* 2039 */ 'V', 'M', 'U', 'L', 'E', 'S', 'H', 0,
  /* 2047 */ 'V', 'A', 'V', 'G', 'S', 'H', 0,
  /* 2054 */ 'V', 'U', 'P', 'K', 'H', 'S', 'H', 0,
  /* 2062 */ 'V', 'S', 'P', 'L', 'T', 'I', 'S', 'H', 0,
  /* 2071 */ 'V', 'U', 'P', 'K', 'L', 'S', 'H', 0,
  /* 2079 */ 'V', 'M', 'I', 'N', 'S', 'H', 0,
  /* 2086 */ 'V', 'M', 'U', 'L', 'O', 'S', 'H', 0,
  /* 2094 */ 'V', 'C', 'M', 'P', 'G', 'T', 'S', 'H', 0,
  /* 2103 */ 'E', 'X', 'T', 'S', 'H', 0,
  /* 2109 */ 'V', 'M', 'A', 'X', 'S', 'H', 0,
  /* 2116 */ 'V', 'S', 'P', 'L', 'T', 'H', 0,
  /* 2123 */ 'S', 'T', 'H', 0,
  /* 2127 */ 'V', 'M', 'U', 'L', 'E', 'U', 'H', 0,
  /* 2135 */ 'V', 'A', 'V', 'G', 'U', 'H', 0,
  /* 2142 */ 'V', 'M', 'I', 'N', 'U', 'H', 0,
  /* 2149 */ 'V', 'M', 'U', 'L', 'O', 'U', 'H', 0,
  /* 2157 */ 'V', 'C', 'M', 'P', 'E', 'Q', 'U', 'H', 0,
  /* 2166 */ 'V', 'C', 'M', 'P', 'G', 'T', 'U', 'H', 0,
  /* 2175 */ 'V', 'M', 'A', 'X', 'U', 'H', 0,
  /* 2182 */ 'D', 'C', 'B', 'I', 0,
  /* 2187 */ 'S', 'R', 'A', 'D', 'I', 0,
  /* 2193 */ 'A', 'D', 'D', 'I', 0,
  /* 2198 */ 'C', 'M', 'P', 'L', 'D', 'I', 0,
  /* 2205 */ 'C', 'M', 'P', 'D', 'I', 0,
  /* 2211 */ 'P', 'H', 'I', 0,
  /* 2215 */ 'M', 'U', 'L', 'L', 'I', 0,
  /* 2221 */ 'R', 'L', 'D', 'I', 'M', 'I', 0,
  /* 2228 */ 'R', 'L', 'W', 'I', 'M', 'I', 0,
  /* 2235 */ 'V', 'S', 'L', 'D', 'O', 'I', 0,
  /* 2242 */ 'X', 'O', 'R', 'I', 0,
  /* 2247 */ 'L', 'D', 't', 'o', 'c', 'J', 'T', 'I', 0,
  /* 2256 */ 'S', 'R', 'A', 'W', 'I', 0,
  /* 2262 */ 'C', 'M', 'P', 'L', 'W', 'I', 0,
  /* 2269 */ 'C', 'M', 'P', 'W', 'I', 0,
  /* 2275 */ 'A', 'D', 'D', 'I', '8', 'L', 0,
  /* 2282 */ 'R', 'L', 'D', 'C', 'L', 0,
  /* 2288 */ 'R', 'L', 'D', 'I', 'C', 'L', 0,
  /* 2295 */ 'G', 'C', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 2304 */ 'P', 'R', 'O', 'L', 'O', 'G', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 2317 */ 'E', 'H', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 2326 */ 'I', 'S', 'E', 'L', 0,
  /* 2331 */ 'V', 'S', 'E', 'L', 0,
  /* 2336 */ 'A', 'D', 'D', 'I', 'L', 0,
  /* 2342 */ 'D', 'S', 'S', 'A', 'L', 'L', 0,
  /* 2349 */ 'K', 'I', 'L', 'L', 0,
  /* 2354 */ 'L', 'V', 'S', 'L', 0,
  /* 2359 */ 'F', 'M', 'U', 'L', 0,
  /* 2364 */ 'L', 'V', 'X', 'L', 0,
  /* 2369 */ 'S', 'T', 'V', 'X', 'L', 0,
  /* 2375 */ 'D', 'C', 'B', 'Z', 'L', 0,
  /* 2381 */ 'V', 'M', 'S', 'U', 'M', 'M', 'B', 'M', 0,
  /* 2390 */ 'V', 'S', 'U', 'B', 'U', 'B', 'M', 0,
  /* 2398 */ 'V', 'A', 'D', 'D', 'U', 'B', 'M', 0,
  /* 2406 */ 'V', 'M', 'S', 'U', 'M', 'U', 'B', 'M', 0,
  /* 2415 */ 'V', 'M', 'S', 'U', 'M', 'S', 'H', 'M', 0,
  /* 2424 */ 'V', 'S', 'U', 'B', 'U', 'H', 'M', 0,
  /* 2432 */ 'V', 'M', 'L', 'A', 'D', 'D', 'U', 'H', 'M', 0,
  /* 2442 */ 'V', 'A', 'D', 'D', 'U', 'H', 'M', 0,
  /* 2450 */ 'V', 'M', 'S', 'U', 'M', 'U', 'H', 'M', 0,
  /* 2459 */ 'V', 'R', 'F', 'I', 'M', 0,
  /* 2465 */ 'R', 'L', 'W', 'I', 'N', 'M', 0,
  /* 2472 */ 'R', 'L', 'W', 'N', 'M', 0,
  /* 2478 */ 'V', 'P', 'E', 'R', 'M', 0,
  /* 2484 */ 'I', 'N', 'L', 'I', 'N', 'E', 'A', 'S', 'M', 0,
  /* 2494 */ 'V', 'P', 'K', 'U', 'H', 'U', 'M', 0,
  /* 2502 */ 'V', 'P', 'K', 'U', 'W', 'U', 'M', 0,
  /* 2510 */ 'V', 'S', 'U', 'B', 'U', 'W', 'M', 0,
  /* 2518 */ 'V', 'A', 'D', 'D', 'U', 'W', 'M', 0,
  /* 2526 */ 'V', 'R', 'F', 'I', 'N', 0,
  /* 2532 */ 'A', 'D', 'J', 'C', 'A', 'L', 'L', 'S', 'T', 'A', 'C', 'K', 'D', 'O', 'W', 'N', 0,
  /* 2549 */ 'V', 'S', 'L', 'O', 0,
  /* 2554 */ 'V', 'S', 'R', 'O', 0,
  /* 2559 */ 'T', 'R', 'A', 'P', 0,
  /* 2564 */ 'V', 'C', 'M', 'P', 'B', 'F', 'P', 0,
  /* 2572 */ 'V', 'N', 'M', 'S', 'U', 'B', 'F', 'P', 0,
  /* 2581 */ 'V', 'S', 'U', 'B', 'F', 'P', 0,
  /* 2588 */ 'V', 'M', 'A', 'D', 'D', 'F', 'P', 0,
  /* 2596 */ 'V', 'A', 'D', 'D', 'F', 'P', 0,
  /* 2603 */ 'V', 'L', 'O', 'G', 'E', 'F', 'P', 0,
  /* 2611 */ 'V', 'C', 'M', 'P', 'G', 'E', 'F', 'P', 0,
  /* 2620 */ 'V', 'R', 'E', 'F', 'P', 0,
  /* 2626 */ 'V', 'E', 'X', 'P', 'T', 'E', 'F', 'P', 0,
  /* 2635 */ 'V', 'R', 'S', 'Q', 'R', 'T', 'E', 'F', 'P', 0,
  /* 2645 */ 'V', 'M', 'I', 'N', 'F', 'P', 0,
  /* 2652 */ 'V', 'C', 'M', 'P', 'E', 'Q', 'F', 'P', 0,
  /* 2661 */ 'V', 'C', 'M', 'P', 'G', 'T', 'F', 'P', 0,
  /* 2670 */ 'V', 'M', 'A', 'X', 'F', 'P', 0,
  /* 2677 */ 'V', 'R', 'F', 'I', 'P', 0,
  /* 2683 */ 'N', 'O', 'P', 0,
  /* 2687 */ 'F', 'R', 'S', 'P', 0,
  /* 2692 */ 'A', 'D', 'J', 'C', 'A', 'L', 'L', 'S', 'T', 'A', 'C', 'K', 'U', 'P', 0,
  /* 2707 */ 'M', 'F', 'C', 'R', 0,
  /* 2712 */ 'R', 'L', 'D', 'I', 'C', 'R', 0,
  /* 2719 */ 'M', 'F', 'V', 'S', 'C', 'R', 0,
  /* 2726 */ 'M', 'T', 'V', 'S', 'C', 'R', 0,
  /* 2733 */ 'R', 'E', 'S', 'T', 'O', 'R', 'E', '_', 'C', 'R', 0,
  /* 2744 */ 'S', 'P', 'I', 'L', 'L', '_', 'C', 'R', 0,
  /* 2753 */ 'B', 'L', 'R', 0,
  /* 2757 */ 'M', 'F', 'L', 'R', 0,
  /* 2762 */ 'M', 'T', 'L', 'R', 0,
  /* 2767 */ 'M', 'o', 'v', 'e', 'P', 'C', 't', 'o', 'L', 'R', 0,
  /* 2778 */ 'F', 'M', 'R', 0,
  /* 2782 */ 'V', 'N', 'O', 'R', 0,
  /* 2787 */ 'C', 'R', 'O', 'R', 0,
  /* 2792 */ 'V', 'O', 'R', 0,
  /* 2796 */ 'V', 'X', 'O', 'R', 0,
  /* 2801 */ 'L', 'V', 'S', 'R', 0,
  /* 2806 */ 'T', 'A', 'I', 'L', 'B', 'C', 'T', 'R', 0,
  /* 2815 */ 'M', 'F', 'C', 'T', 'R', 0,
  /* 2821 */ 'M', 'T', 'C', 'T', 'R', 0,
  /* 2827 */ 'V', 'S', 'U', 'M', '4', 'S', 'B', 'S', 0,
  /* 2836 */ 'V', 'S', 'U', 'B', 'S', 'B', 'S', 0,
  /* 2844 */ 'V', 'A', 'D', 'D', 'S', 'B', 'S', 0,
  /* 2852 */ 'V', 'S', 'U', 'M', '4', 'U', 'B', 'S', 0,
  /* 2861 */ 'V', 'S', 'U', 'B', 'U', 'B', 'S', 0,
  /* 2869 */ 'V', 'A', 'D', 'D', 'U', 'B', 'S', 0,
  /* 2877 */ 'F', 'S', 'U', 'B', 'S', 0,
  /* 2883 */ 'F', 'M', 'S', 'U', 'B', 'S', 0,
  /* 2890 */ 'F', 'N', 'M', 'S', 'U', 'B', 'S', 0,
  /* 2898 */ 'F', 'A', 'D', 'D', 'S', 0,
  /* 2904 */ 'F', 'M', 'A', 'D', 'D', 'S', 0,
  /* 2911 */ 'F', 'N', 'M', 'A', 'D', 'D', 'S', 0,
  /* 2919 */ 'M', 'F', 'F', 'S', 0,
  /* 2924 */ 'L', 'F', 'S', 0,
  /* 2928 */ 'S', 'T', 'F', 'S', 0,
  /* 2933 */ 'F', 'N', 'E', 'G', 'S', 0,
  /* 2939 */ 'V', 'S', 'U', 'M', '4', 'S', 'H', 'S', 0,
  /* 2948 */ 'V', 'S', 'U', 'B', 'S', 'H', 'S', 0,
  /* 2956 */ 'V', 'M', 'H', 'A', 'D', 'D', 'S', 'H', 'S', 0,
  /* 2966 */ 'V', 'M', 'H', 'R', 'A', 'D', 'D', 'S', 'H', 'S', 0,
  /* 2977 */ 'V', 'A', 'D', 'D', 'S', 'H', 'S', 0,
  /* 2985 */ 'V', 'M', 'S', 'U', 'M', 'S', 'H', 'S', 0,
  /* 2994 */ 'V', 'S', 'U', 'B', 'U', 'H', 'S', 0,
  /* 3002 */ 'V', 'A', 'D', 'D', 'U', 'H', 'S', 0,
  /* 3010 */ 'V', 'M', 'S', 'U', 'M', 'U', 'H', 'S', 0,
  /* 3019 */ 'A', 'D', 'D', 'I', 'S', 0,
  /* 3025 */ 'L', 'I', 'S', 0,
  /* 3029 */ 'X', 'O', 'R', 'I', 'S', 0,
  /* 3035 */ 'F', 'S', 'E', 'L', 'S', 0,
  /* 3041 */ 'F', 'M', 'U', 'L', 'S', 0,
  /* 3047 */ 'C', 'O', 'P', 'Y', '_', 'T', 'O', '_', 'R', 'E', 'G', 'C', 'L', 'A', 'S', 'S', 0,
  /* 3064 */ 'F', 'A', 'B', 'S', 'S', 0,
  /* 3070 */ 'F', 'N', 'A', 'B', 'S', 'S', 0,
  /* 3077 */ 'D', 'S', 'S', 0,
  /* 3081 */ 'V', 'P', 'K', 'S', 'H', 'S', 'S', 0,
  /* 3089 */ 'V', 'P', 'K', 'S', 'W', 'S', 'S', 0,
  /* 3097 */ 'F', 'S', 'Q', 'R', 'T', 'S', 0,
  /* 3104 */ 'V', 'P', 'K', 'S', 'H', 'U', 'S', 0,
  /* 3112 */ 'V', 'P', 'K', 'U', 'H', 'U', 'S', 0,
  /* 3120 */ 'F', 'C', 'M', 'P', 'U', 'S', 0,
  /* 3127 */ 'V', 'P', 'K', 'S', 'W', 'U', 'S', 0,
  /* 3135 */ 'V', 'P', 'K', 'U', 'W', 'U', 'S', 0,
  /* 3143 */ 'F', 'D', 'I', 'V', 'S', 0,
  /* 3149 */ 'V', 'S', 'U', 'M', '2', 'S', 'W', 'S', 0,
  /* 3158 */ 'V', 'S', 'U', 'B', 'S', 'W', 'S', 0,
  /* 3166 */ 'V', 'A', 'D', 'D', 'S', 'W', 'S', 0,
  /* 3174 */ 'V', 'S', 'U', 'M', 'S', 'W', 'S', 0,
  /* 3182 */ 'V', 'S', 'U', 'B', 'U', 'W', 'S', 0,
  /* 3190 */ 'V', 'A', 'D', 'D', 'U', 'W', 'S', 0,
  /* 3198 */ 'V', 'C', 'T', 'S', 'X', 'S', 0,
  /* 3205 */ 'V', 'C', 'T', 'U', 'X', 'S', 0,
  /* 3212 */ 'D', 'C', 'B', 'T', 0,
  /* 3217 */ 'C', 'R', '6', 'S', 'E', 'T', 0,
  /* 3224 */ 'C', 'R', '6', 'U', 'N', 'S', 'E', 'T', 0,
  /* 3233 */ 'C', 'R', 'U', 'N', 'S', 'E', 'T', 0,
  /* 3241 */ 'C', 'R', 'S', 'E', 'T', 0,
  /* 3247 */ 'L', 'D', 't', 'o', 'c', 'C', 'P', 'T', 0,
  /* 3256 */ 'L', 'I', 'F', 'E', 'T', 'I', 'M', 'E', '_', 'S', 'T', 'A', 'R', 'T', 0,
  /* 3271 */ 'F', 'S', 'Q', 'R', 'T', 0,
  /* 3277 */ 'D', 'C', 'B', 'S', 'T', 0,
  /* 3283 */ 'D', 'S', 'T', 0,
  /* 3287 */ 'D', 'C', 'B', 'T', 'S', 'T', 0,
  /* 3294 */ 'D', 'S', 'T', 'S', 'T', 0,
  /* 3300 */ 'D', 'S', 'T', 'T', 0,
  /* 3305 */ 'D', 'S', 'T', 'S', 'T', 'T', 0,
  /* 3312 */ 'L', 'H', 'A', 'U', 0,
  /* 3317 */ 'S', 'T', 'B', 'U', 0,
  /* 3322 */ 'L', 'F', 'D', 'U', 0,
  /* 3327 */ 'S', 'T', 'F', 'D', 'U', 0,
  /* 3333 */ 'M', 'U', 'L', 'H', 'D', 'U', 0,
  /* 3340 */ 'L', 'D', 'U', 0,
  /* 3344 */ 'S', 'T', 'D', 'U', 0,
  /* 3349 */ 'D', 'I', 'V', 'D', 'U', 0,
  /* 3355 */ 'S', 'T', 'H', 'U', 0,
  /* 3360 */ 'L', 'F', 'S', 'U', 0,
  /* 3365 */ 'S', 'T', 'F', 'S', 'U', 0,
  /* 3371 */ 'M', 'U', 'L', 'H', 'W', 'U', 0,
  /* 3378 */ 'S', 'T', 'W', 'U', 0,
  /* 3383 */ 'D', 'I', 'V', 'W', 'U', 0,
  /* 3389 */ 'L', 'B', 'Z', 'U', 0,
  /* 3394 */ 'L', 'H', 'Z', 'U', 0,
  /* 3399 */ 'L', 'W', 'Z', 'U', 0,
  /* 3404 */ 'F', 'D', 'I', 'V', 0,
  /* 3409 */ 'C', 'R', 'E', 'Q', 'V', 0,
  /* 3415 */ 'V', 'S', 'R', 'A', 'W', 0,
  /* 3421 */ 'V', 'M', 'R', 'G', 'H', 'W', 0,
  /* 3428 */ 'M', 'U', 'L', 'H', 'W', 0,
  /* 3434 */ 'V', 'M', 'R', 'G', 'L', 'W', 0,
  /* 3441 */ 'M', 'U', 'L', 'L', 'W', 0,
  /* 3447 */ 'C', 'M', 'P', 'L', 'W', 0,
  /* 3453 */ 'V', 'R', 'L', 'W', 0,
  /* 3458 */ 'V', 'S', 'L', 'W', 0,
  /* 3463 */ 'C', 'M', 'P', 'W', 0,
  /* 3468 */ 'V', 'S', 'R', 'W', 0,
  /* 3473 */ 'V', 'A', 'V', 'G', 'S', 'W', 0,
  /* 3480 */ 'V', 'S', 'P', 'L', 'T', 'I', 'S', 'W', 0,
  /* 3489 */ 'V', 'M', 'I', 'N', 'S', 'W', 0,
  /* 3496 */ 'V', 'C', 'M', 'P', 'G', 'T', 'S', 'W', 0,
  /* 3505 */ 'E', 'X', 'T', 'S', 'W', 0,
  /* 3511 */ 'V', 'M', 'A', 'X', 'S', 'W', 0,
  /* 3518 */ 'V', 'S', 'P', 'L', 'T', 'W', 0,
  /* 3525 */ 'S', 'T', 'W', 0,
  /* 3529 */ 'V', 'S', 'U', 'B', 'C', 'U', 'W', 0,
  /* 3537 */ 'V', 'A', 'D', 'D', 'C', 'U', 'W', 0,
  /* 3545 */ 'V', 'A', 'V', 'G', 'U', 'W', 0,
  /* 3552 */ 'V', 'M', 'I', 'N', 'U', 'W', 0,
  /* 3559 */ 'V', 'C', 'M', 'P', 'E', 'Q', 'U', 'W', 0,
  /* 3568 */ 'V', 'C', 'M', 'P', 'G', 'T', 'U', 'W', 0,
  /* 3577 */ 'V', 'M', 'A', 'X', 'U', 'W', 0,
  /* 3584 */ 'D', 'I', 'V', 'W', 0,
  /* 3589 */ 'C', 'N', 'T', 'L', 'Z', 'W', 0,
  /* 3596 */ 'L', 'H', 'A', 'X', 0,
  /* 3601 */ 'L', 'W', 'A', 'X', 0,
  /* 3606 */ 'L', 'V', 'E', 'B', 'X', 0,
  /* 3612 */ 'S', 'T', 'V', 'E', 'B', 'X', 0,
  /* 3619 */ 'S', 'T', 'B', 'X', 0,
  /* 3624 */ 'S', 'T', 'D', 'C', 'X', 0,
  /* 3630 */ 'S', 'T', 'W', 'C', 'X', 0,
  /* 3636 */ 'L', 'F', 'D', 'X', 0,
  /* 3641 */ 'S', 'T', 'F', 'D', 'X', 0,
  /* 3647 */ 'L', 'D', 'X', 0,
  /* 3651 */ 'S', 'T', 'D', 'X', 0,
  /* 3656 */ 'L', 'V', 'E', 'H', 'X', 0,
  /* 3662 */ 'S', 'T', 'V', 'E', 'H', 'X', 0,
  /* 3669 */ 'S', 'T', 'H', 'X', 0,
  /* 3674 */ 'V', 'U', 'P', 'K', 'H', 'P', 'X', 0,
  /* 3682 */ 'V', 'P', 'K', 'P', 'X', 0,
  /* 3688 */ 'V', 'U', 'P', 'K', 'L', 'P', 'X', 0,
  /* 3696 */ 'L', 'D', 'A', 'R', 'X', 0,
  /* 3702 */ 'L', 'W', 'A', 'R', 'X', 0,
  /* 3708 */ 'L', 'H', 'B', 'R', 'X', 0,
  /* 3714 */ 'S', 'T', 'H', 'B', 'R', 'X', 0,
  /* 3721 */ 'L', 'W', 'B', 'R', 'X', 0,
  /* 3727 */ 'S', 'T', 'W', 'B', 'R', 'X', 0,
  /* 3734 */ 'V', 'C', 'F', 'S', 'X', 0,
  /* 3740 */ 'L', 'F', 'S', 'X', 0,
  /* 3745 */ 'S', 'T', 'F', 'S', 'X', 0,
  /* 3751 */ 'L', 'H', 'A', 'U', 'X', 0,
  /* 3757 */ 'L', 'W', 'A', 'U', 'X', 0,
  /* 3763 */ 'S', 'T', 'B', 'U', 'X', 0,
  /* 3769 */ 'L', 'F', 'D', 'U', 'X', 0,
  /* 3775 */ 'S', 'T', 'F', 'D', 'U', 'X', 0,
  /* 3782 */ 'L', 'D', 'U', 'X', 0,
  /* 3787 */ 'S', 'T', 'D', 'U', 'X', 0,
  /* 3793 */ 'V', 'C', 'F', 'U', 'X', 0,
  /* 3799 */ 'S', 'T', 'H', 'U', 'X', 0,
  /* 3805 */ 'L', 'F', 'S', 'U', 'X', 0,
  /* 3811 */ 'S', 'T', 'F', 'S', 'U', 'X', 0,
  /* 3818 */ 'S', 'T', 'W', 'U', 'X', 0,
  /* 3824 */ 'L', 'B', 'Z', 'U', 'X', 0,
  /* 3830 */ 'L', 'H', 'Z', 'U', 'X', 0,
  /* 3836 */ 'L', 'W', 'Z', 'U', 'X', 0,
  /* 3842 */ 'L', 'V', 'X', 0,
  /* 3846 */ 'S', 'T', 'V', 'X', 0,
  /* 3851 */ 'L', 'V', 'E', 'W', 'X', 0,
  /* 3857 */ 'S', 'T', 'V', 'E', 'W', 'X', 0,
  /* 3864 */ 'S', 'T', 'F', 'I', 'W', 'X', 0,
  /* 3871 */ 'S', 'T', 'W', 'X', 0,
  /* 3876 */ 'L', 'B', 'Z', 'X', 0,
  /* 3881 */ 'L', 'H', 'Z', 'X', 0,
  /* 3886 */ 'L', 'W', 'Z', 'X', 0,
  /* 3891 */ 'C', 'O', 'P', 'Y', 0,
  /* 3896 */ 'D', 'C', 'B', 'Z', 0,
  /* 3901 */ 'L', 'B', 'Z', 0,
  /* 3905 */ 'B', 'D', 'Z', 0,
  /* 3909 */ 'F', 'C', 'T', 'I', 'D', 'Z', 0,
  /* 3916 */ 'L', 'H', 'Z', 0,
  /* 3920 */ 'V', 'R', 'F', 'I', 'Z', 0,
  /* 3926 */ 'B', 'D', 'N', 'Z', 0,
  /* 3931 */ 'F', 'C', 'T', 'I', 'W', 'Z', 0,
  /* 3938 */ 'L', 'W', 'Z', 0,
  /* 3942 */ 'L', 'D', 't', 'o', 'c', 0,
  /* 3948 */ 'L', 'D', 'i', 'n', 't', 'o', '_', 't', 'o', 'c', 0,
  /* 3959 */ 'M', 'F', 'C', 'R', '8', 'p', 's', 'e', 'u', 'd', 0,
  /* 3970 */ 'M', 'F', 'C', 'R', 'p', 's', 'e', 'u', 'd', 0,
  /* 3980 */ 'L', 'D', 't', 'o', 'c', '_', 'r', 'e', 's', 't', 'o', 'r', 'e', 0,
  /* 3994 */ 'T', 'C', 'R', 'E', 'T', 'U', 'R', 'N', 'a', 'i', 0,
  /* 4005 */ 'T', 'C', 'R', 'E', 'T', 'U', 'R', 'N', 'd', 'i', 0,
  /* 4016 */ 'T', 'C', 'R', 'E', 'T', 'U', 'R', 'N', 'r', 'i', 0,
  /* 4027 */ 'B', 'L', 'A', '8', '_', 'D', 'a', 'r', 'w', 'i', 'n', 0,
  /* 4039 */ 'B', 'L', '8', '_', 'D', 'a', 'r', 'w', 'i', 'n', 0,
  /* 4050 */ 'B', 'C', 'T', 'R', 'L', '8', '_', 'D', 'a', 'r', 'w', 'i', 'n', 0,
  /* 4064 */ 'B', 'L', 'A', '_', 'D', 'a', 'r', 'w', 'i', 'n', 0,
  /* 4075 */ 'B', 'L', '_', 'D', 'a', 'r', 'w', 'i', 'n', 0,
  /* 4085 */ 'B', 'C', 'T', 'R', 'L', '_', 'D', 'a', 'r', 'w', 'i', 'n', 0,
  /* 4098 */ 'V', 'C', 'M', 'P', 'G', 'T', 'S', 'B', 'o', 0,
  /* 4108 */ 'V', 'C', 'M', 'P', 'E', 'Q', 'U', 'B', 'o', 0,
  /* 4118 */ 'V', 'C', 'M', 'P', 'G', 'T', 'U', 'B', 'o', 0,
  /* 4128 */ 'A', 'D', 'D', 'I', 'C', 'o', 0,
  /* 4135 */ 'V', 'C', 'M', 'P', 'G', 'T', 'S', 'H', 'o', 0,
  /* 4145 */ 'V', 'C', 'M', 'P', 'E', 'Q', 'U', 'H', 'o', 0,
  /* 4155 */ 'V', 'C', 'M', 'P', 'G', 'T', 'U', 'H', 'o', 0,
  /* 4165 */ 'A', 'N', 'D', 'I', 'o', 0,
  /* 4171 */ 'R', 'L', 'W', 'I', 'N', 'M', 'o', 0,
  /* 4179 */ 'V', 'C', 'M', 'P', 'B', 'F', 'P', 'o', 0,
  /* 4188 */ 'V', 'C', 'M', 'P', 'G', 'E', 'F', 'P', 'o', 0,
  /* 4198 */ 'V', 'C', 'M', 'P', 'E', 'Q', 'F', 'P', 'o', 0,
  /* 4208 */ 'V', 'C', 'M', 'P', 'G', 'T', 'F', 'P', 'o', 0,
  /* 4218 */ 'A', 'N', 'D', 'I', 'S', 'o', 0,
  /* 4225 */ 'V', 'C', 'M', 'P', 'G', 'T', 'S', 'W', 'o', 0,
  /* 4235 */ 'V', 'C', 'M', 'P', 'E', 'Q', 'U', 'W', 'o', 0,
  /* 4245 */ 'V', 'C', 'M', 'P', 'G', 'T', 'U', 'W', 'o', 0,
  /* 4255 */ 'F', 'A', 'D', 'D', 'r', 't', 'z', 0,
};

extern const unsigned PPCInstrNameIndices[] = {
    2211U, 2484U, 2304U, 2317U, 2295U, 2349U, 1961U, 1976U, 
    1867U, 1990U, 3047U, 1802U, 1758U, 3891U, 1782U, 3256U, 
    1700U, 433U, 735U, 1555U, 686U, 1771U, 746U, 2193U, 
    832U, 2275U, 1572U, 705U, 4128U, 2336U, 3019U, 1087U, 
    1789U, 759U, 1844U, 774U, 2532U, 2692U, 1691U, 741U, 
    1561U, 692U, 4218U, 1318U, 4165U, 1311U, 589U, 152U, 
    332U, 953U, 512U, 75U, 255U, 880U, 553U, 116U, 
    296U, 919U, 532U, 95U, 275U, 899U, 629U, 192U, 
    372U, 991U, 492U, 55U, 235U, 848U, 609U, 172U, 
    352U, 972U, 573U, 136U, 316U, 938U, 1353U, 1551U, 
    2810U, 1067U, 4050U, 1897U, 4085U, 481U, 3926U, 1264U, 
    3905U, 1254U, 4039U, 1889U, 1921U, 4027U, 1880U, 1908U, 
    4064U, 464U, 2753U, 4075U, 473U, 1713U, 2205U, 1680U, 
    2198U, 3447U, 2262U, 3463U, 2269U, 1751U, 3589U, 3217U, 
    3224U, 3409U, 2787U, 3241U, 3233U, 1326U, 1857U, 2182U, 
    3277U, 3212U, 3287U, 3896U, 2375U, 1746U, 3349U, 3584U, 
    3383U, 3077U, 2342U, 3283U, 391U, 3294U, 397U, 3305U, 
    412U, 3300U, 405U, 1590U, 720U, 3411U, 1148U, 1454U, 
    668U, 2103U, 820U, 3505U, 218U, 421U, 1722U, 3064U, 
    1623U, 2898U, 4255U, 1662U, 1739U, 3120U, 3909U, 3931U, 
    3404U, 3143U, 1628U, 2904U, 2778U, 1522U, 2883U, 2359U, 
    3041U, 1728U, 3070U, 1650U, 2933U, 1634U, 2911U, 1528U, 
    2890U, 2687U, 1668U, 3035U, 3271U, 3097U, 1517U, 2877U, 
    2326U, 1009U, 1342U, 3901U, 1249U, 3389U, 1130U, 3824U, 
    1204U, 3876U, 1231U, 1671U, 3696U, 3340U, 3782U, 3647U, 
    3948U, 3942U, 3247U, 2247U, 3980U, 1641U, 3322U, 3769U, 
    3636U, 2924U, 3360U, 3805U, 3740U, 1338U, 656U, 3312U, 
    1106U, 3751U, 1176U, 3596U, 1158U, 3708U, 3916U, 1259U, 
    3394U, 1136U, 3830U, 1211U, 3881U, 1237U, 2218U, 838U, 
    3025U, 1094U, 3606U, 3656U, 3851U, 2354U, 2801U, 3842U, 
    2364U, 1345U, 3702U, 3757U, 3601U, 3721U, 3938U, 1270U, 
    3399U, 1142U, 3836U, 1218U, 3886U, 1243U, 1933U, 2707U, 
    1023U, 3959U, 3970U, 2815U, 1073U, 2919U, 2757U, 1029U, 
    1938U, 675U, 1812U, 2719U, 1945U, 795U, 2821U, 1080U, 
    0U, 48U, 1951U, 2762U, 1035U, 1821U, 2726U, 1656U, 
    3333U, 3428U, 3371U, 1674U, 2215U, 3441U, 2767U, 1041U, 
    1690U, 740U, 1957U, 815U, 2683U, 2783U, 1053U, 2784U, 
    1054U, 1599U, 730U, 2243U, 843U, 3030U, 1100U, 2733U, 
    2282U, 2288U, 2712U, 2221U, 2228U, 2465U, 1015U, 4171U, 
    2472U, 438U, 802U, 451U, 867U, 1603U, 1686U, 3459U, 
    2744U, 1618U, 2187U, 3416U, 2256U, 1718U, 3469U, 1474U, 
    681U, 3317U, 1112U, 3763U, 1183U, 3619U, 1164U, 1735U, 
    3624U, 3344U, 3787U, 3651U, 227U, 211U, 1645U, 3327U, 
    3775U, 3641U, 3864U, 2928U, 3365U, 3811U, 3745U, 2123U, 
    827U, 3714U, 3355U, 1118U, 3799U, 1190U, 3669U, 1170U, 
    3612U, 3662U, 3857U, 3846U, 2369U, 3525U, 1153U, 3727U, 
    3630U, 3378U, 1124U, 3818U, 1197U, 3871U, 1225U, 1862U, 
    789U, 1566U, 698U, 1776U, 752U, 1578U, 712U, 1795U, 
    766U, 1850U, 781U, 1585U, 1369U, 661U, 1331U, 648U, 
    2806U, 1063U, 3994U, 1275U, 4005U, 1287U, 4016U, 1299U, 
    2559U, 1830U, 3537U, 2596U, 2844U, 2977U, 3166U, 2398U, 
    2869U, 2442U, 3002U, 2518U, 3190U, 1695U, 1560U, 1398U, 
    2047U, 3473U, 1486U, 2135U, 3545U, 3734U, 32U, 3793U, 
    40U, 2564U, 4179U, 2652U, 4198U, 1508U, 4108U, 2157U, 
    4145U, 3559U, 4235U, 2611U, 4188U, 2661U, 4208U, 1445U, 
    4098U, 2094U, 4135U, 3496U, 4225U, 1535U, 4118U, 2166U, 
    4155U, 3568U, 4245U, 3198U, 14U, 3205U, 23U, 2626U, 
    2603U, 2588U, 2670U, 1460U, 2109U, 3511U, 1544U, 2175U, 
    3577U, 2956U, 2966U, 2645U, 1430U, 2079U, 3489U, 1493U, 
    2142U, 3552U, 2432U, 1355U, 2010U, 3421U, 1362U, 2017U, 
    3434U, 2381U, 2415U, 2985U, 2406U, 2450U, 3010U, 1390U, 
    2039U, 1478U, 2127U, 1437U, 2086U, 1500U, 2149U, 2572U, 
    2782U, 2792U, 2478U, 3682U, 3081U, 3104U, 3089U, 3127U, 
    2494U, 3112U, 2502U, 3135U, 2620U, 2459U, 2526U, 2677U, 
    3920U, 1375U, 2024U, 3453U, 2635U, 2331U, 2355U, 1380U, 
    2235U, 2029U, 2549U, 3458U, 1467U, 2116U, 1413U, 2062U, 
    3480U, 3518U, 2802U, 1349U, 2004U, 3415U, 1385U, 2034U, 
    2554U, 3468U, 3529U, 2581U, 2836U, 2948U, 3158U, 2390U, 
    2861U, 2424U, 2994U, 2510U, 3182U, 3149U, 2827U, 2939U, 
    2852U, 3174U, 3674U, 1405U, 2054U, 3688U, 1422U, 2071U, 
    2796U, 7U, 2797U, 1058U, 2242U, 842U, 3029U, 1099U, 
};

static inline void InitPPCMCInstrInfo(MCInstrInfo *II) {
  II->InitMCInstrInfo(PPCInsts, PPCInstrNameIndices, PPCInstrNameData, 568);
}

} // End llvm namespace 
#endif // GET_INSTRINFO_MC_DESC


#ifdef GET_INSTRINFO_HEADER
#undef GET_INSTRINFO_HEADER
namespace llvm {
struct PPCGenInstrInfo : public TargetInstrInfoImpl {
  explicit PPCGenInstrInfo(int SO = -1, int DO = -1);
};
} // End llvm namespace 
#endif // GET_INSTRINFO_HEADER


#ifdef GET_INSTRINFO_CTOR
#undef GET_INSTRINFO_CTOR
namespace llvm {
extern const MCInstrDesc PPCInsts[];
extern const unsigned PPCInstrNameIndices[];
extern const char PPCInstrNameData[];
PPCGenInstrInfo::PPCGenInstrInfo(int SO, int DO)
  : TargetInstrInfoImpl(SO, DO) {
  InitMCInstrInfo(PPCInsts, PPCInstrNameIndices, PPCInstrNameData, 568);
}
} // End llvm namespace 
#endif // GET_INSTRINFO_CTOR

