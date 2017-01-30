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

namespace Mips {
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
    ABSQ_S_PH	= 17,
    ABSQ_S_QB	= 18,
    ABSQ_S_W	= 19,
    ADD	= 20,
    ADDQH_PH	= 21,
    ADDQH_R_PH	= 22,
    ADDQH_R_W	= 23,
    ADDQH_W	= 24,
    ADDQ_PH	= 25,
    ADDQ_S_PH	= 26,
    ADDQ_S_W	= 27,
    ADDSC	= 28,
    ADDUH_QB	= 29,
    ADDUH_R_QB	= 30,
    ADDU_PH	= 31,
    ADDU_QB	= 32,
    ADDU_S_PH	= 33,
    ADDU_S_QB	= 34,
    ADDWC	= 35,
    ADDi	= 36,
    ADDiu	= 37,
    ADDu	= 38,
    ADJCALLSTACKDOWN	= 39,
    ADJCALLSTACKUP	= 40,
    AND	= 41,
    AND64	= 42,
    ANDi	= 43,
    APPEND	= 44,
    ATOMIC_CMP_SWAP_I16	= 45,
    ATOMIC_CMP_SWAP_I16_P8	= 46,
    ATOMIC_CMP_SWAP_I32	= 47,
    ATOMIC_CMP_SWAP_I32_P8	= 48,
    ATOMIC_CMP_SWAP_I64	= 49,
    ATOMIC_CMP_SWAP_I64_P8	= 50,
    ATOMIC_CMP_SWAP_I8	= 51,
    ATOMIC_CMP_SWAP_I8_P8	= 52,
    ATOMIC_LOAD_ADD_I16	= 53,
    ATOMIC_LOAD_ADD_I16_P8	= 54,
    ATOMIC_LOAD_ADD_I32	= 55,
    ATOMIC_LOAD_ADD_I32_P8	= 56,
    ATOMIC_LOAD_ADD_I64	= 57,
    ATOMIC_LOAD_ADD_I64_P8	= 58,
    ATOMIC_LOAD_ADD_I8	= 59,
    ATOMIC_LOAD_ADD_I8_P8	= 60,
    ATOMIC_LOAD_AND_I16	= 61,
    ATOMIC_LOAD_AND_I16_P8	= 62,
    ATOMIC_LOAD_AND_I32	= 63,
    ATOMIC_LOAD_AND_I32_P8	= 64,
    ATOMIC_LOAD_AND_I64	= 65,
    ATOMIC_LOAD_AND_I64_P8	= 66,
    ATOMIC_LOAD_AND_I8	= 67,
    ATOMIC_LOAD_AND_I8_P8	= 68,
    ATOMIC_LOAD_NAND_I16	= 69,
    ATOMIC_LOAD_NAND_I16_P8	= 70,
    ATOMIC_LOAD_NAND_I32	= 71,
    ATOMIC_LOAD_NAND_I32_P8	= 72,
    ATOMIC_LOAD_NAND_I64	= 73,
    ATOMIC_LOAD_NAND_I64_P8	= 74,
    ATOMIC_LOAD_NAND_I8	= 75,
    ATOMIC_LOAD_NAND_I8_P8	= 76,
    ATOMIC_LOAD_OR_I16	= 77,
    ATOMIC_LOAD_OR_I16_P8	= 78,
    ATOMIC_LOAD_OR_I32	= 79,
    ATOMIC_LOAD_OR_I32_P8	= 80,
    ATOMIC_LOAD_OR_I64	= 81,
    ATOMIC_LOAD_OR_I64_P8	= 82,
    ATOMIC_LOAD_OR_I8	= 83,
    ATOMIC_LOAD_OR_I8_P8	= 84,
    ATOMIC_LOAD_SUB_I16	= 85,
    ATOMIC_LOAD_SUB_I16_P8	= 86,
    ATOMIC_LOAD_SUB_I32	= 87,
    ATOMIC_LOAD_SUB_I32_P8	= 88,
    ATOMIC_LOAD_SUB_I64	= 89,
    ATOMIC_LOAD_SUB_I64_P8	= 90,
    ATOMIC_LOAD_SUB_I8	= 91,
    ATOMIC_LOAD_SUB_I8_P8	= 92,
    ATOMIC_LOAD_XOR_I16	= 93,
    ATOMIC_LOAD_XOR_I16_P8	= 94,
    ATOMIC_LOAD_XOR_I32	= 95,
    ATOMIC_LOAD_XOR_I32_P8	= 96,
    ATOMIC_LOAD_XOR_I64	= 97,
    ATOMIC_LOAD_XOR_I64_P8	= 98,
    ATOMIC_LOAD_XOR_I8	= 99,
    ATOMIC_LOAD_XOR_I8_P8	= 100,
    ATOMIC_SWAP_I16	= 101,
    ATOMIC_SWAP_I16_P8	= 102,
    ATOMIC_SWAP_I32	= 103,
    ATOMIC_SWAP_I32_P8	= 104,
    ATOMIC_SWAP_I64	= 105,
    ATOMIC_SWAP_I64_P8	= 106,
    ATOMIC_SWAP_I8	= 107,
    ATOMIC_SWAP_I8_P8	= 108,
    AddiuRxImmX16	= 109,
    AddiuRxPcImmX16	= 110,
    AddiuRxRxImmX16	= 111,
    AddiuRxRyOffMemX16	= 112,
    AdduRxRyRz16	= 113,
    AndRxRxRy16	= 114,
    B	= 115,
    BALIGN	= 116,
    BAL_BR	= 117,
    BC1F	= 118,
    BC1T	= 119,
    BEQ	= 120,
    BEQ64	= 121,
    BGEZ	= 122,
    BGEZ64	= 123,
    BGEZAL	= 124,
    BGTZ	= 125,
    BGTZ64	= 126,
    BITREV	= 127,
    BLEZ	= 128,
    BLEZ64	= 129,
    BLTZ	= 130,
    BLTZ64	= 131,
    BLTZAL	= 132,
    BNE	= 133,
    BNE64	= 134,
    BPOSGE32	= 135,
    BPOSGE32_PSEUDO	= 136,
    BeqzRxImmX16	= 137,
    BimmX16	= 138,
    BnezRxImmX16	= 139,
    BteqzT8CmpX16	= 140,
    BteqzT8CmpiX16	= 141,
    BteqzT8SltX16	= 142,
    BteqzT8SltiX16	= 143,
    BteqzT8SltiuX16	= 144,
    BteqzT8SltuX16	= 145,
    BteqzX16	= 146,
    BtnezT8CmpX16	= 147,
    BtnezT8CmpiX16	= 148,
    BtnezT8SltX16	= 149,
    BtnezT8SltiX16	= 150,
    BtnezT8SltiuX16	= 151,
    BtnezT8SltuX16	= 152,
    BtnezX16	= 153,
    BuildPairF64	= 154,
    CEIL_L_D64	= 155,
    CEIL_L_S	= 156,
    CEIL_W_D32	= 157,
    CEIL_W_D64	= 158,
    CEIL_W_S	= 159,
    CFC1	= 160,
    CLO	= 161,
    CLZ	= 162,
    CMPGDU_EQ_QB	= 163,
    CMPGDU_LE_QB	= 164,
    CMPGDU_LT_QB	= 165,
    CMPGU_EQ_QB	= 166,
    CMPGU_LE_QB	= 167,
    CMPGU_LT_QB	= 168,
    CMPU_EQ_QB	= 169,
    CMPU_LE_QB	= 170,
    CMPU_LT_QB	= 171,
    CMP_EQ_PH	= 172,
    CMP_LE_PH	= 173,
    CMP_LT_PH	= 174,
    CPRESTORE	= 175,
    CTC1	= 176,
    CVT_D32_S	= 177,
    CVT_D32_W	= 178,
    CVT_D64_L	= 179,
    CVT_D64_S	= 180,
    CVT_D64_W	= 181,
    CVT_L_D64	= 182,
    CVT_L_S	= 183,
    CVT_S_D32	= 184,
    CVT_S_D64	= 185,
    CVT_S_L	= 186,
    CVT_S_W	= 187,
    CVT_W_D32	= 188,
    CVT_W_D64	= 189,
    CVT_W_S	= 190,
    DADD	= 191,
    DADDi	= 192,
    DADDiu	= 193,
    DADDu	= 194,
    DANDi	= 195,
    DCLO	= 196,
    DCLZ	= 197,
    DEXT	= 198,
    DEXTM	= 199,
    DEXTU	= 200,
    DINS	= 201,
    DINSM	= 202,
    DINSU	= 203,
    DMFC0_3OP64	= 204,
    DMFC1	= 205,
    DMFC2_3OP64	= 206,
    DMTC0_3OP64	= 207,
    DMTC1	= 208,
    DMTC2_3OP64	= 209,
    DMULT	= 210,
    DMULTu	= 211,
    DPAQX_SA_W_PH	= 212,
    DPAQX_SA_W_PH_PSEUDO	= 213,
    DPAQX_S_W_PH	= 214,
    DPAQX_S_W_PH_PSEUDO	= 215,
    DPAQ_SA_L_W	= 216,
    DPAQ_SA_L_W_PSEUDO	= 217,
    DPAQ_S_W_PH	= 218,
    DPAQ_S_W_PH_PSEUDO	= 219,
    DPAU_H_QBL	= 220,
    DPAU_H_QBL_PSEUDO	= 221,
    DPAU_H_QBR	= 222,
    DPAU_H_QBR_PSEUDO	= 223,
    DPAX_W_PH	= 224,
    DPAX_W_PH_PSEUDO	= 225,
    DPA_W_PH	= 226,
    DPA_W_PH_PSEUDO	= 227,
    DPSQX_SA_W_PH	= 228,
    DPSQX_SA_W_PH_PSEUDO	= 229,
    DPSQX_S_W_PH	= 230,
    DPSQX_S_W_PH_PSEUDO	= 231,
    DPSQ_SA_L_W	= 232,
    DPSQ_SA_L_W_PSEUDO	= 233,
    DPSQ_S_W_PH	= 234,
    DPSQ_S_W_PH_PSEUDO	= 235,
    DPSU_H_QBL	= 236,
    DPSU_H_QBL_PSEUDO	= 237,
    DPSU_H_QBR	= 238,
    DPSU_H_QBR_PSEUDO	= 239,
    DPSX_W_PH	= 240,
    DPSX_W_PH_PSEUDO	= 241,
    DPS_W_PH	= 242,
    DPS_W_PH_PSEUDO	= 243,
    DROTR	= 244,
    DROTRV	= 245,
    DSBH	= 246,
    DSDIV	= 247,
    DSHD	= 248,
    DSLL	= 249,
    DSLL32	= 250,
    DSLL64_32	= 251,
    DSLLV	= 252,
    DSRA	= 253,
    DSRA32	= 254,
    DSRAV	= 255,
    DSRL	= 256,
    DSRL32	= 257,
    DSRLV	= 258,
    DSUBu	= 259,
    DUDIV	= 260,
    DivRxRy16	= 261,
    DivuRxRy16	= 262,
    DynAlloc	= 263,
    DynAlloc64	= 264,
    EXT	= 265,
    EXTP	= 266,
    EXTPDP	= 267,
    EXTPDPV	= 268,
    EXTPV	= 269,
    EXTRV_RS_W	= 270,
    EXTRV_R_W	= 271,
    EXTRV_S_H	= 272,
    EXTRV_W	= 273,
    EXTR_RS_W	= 274,
    EXTR_R_W	= 275,
    EXTR_S_H	= 276,
    EXTR_W	= 277,
    ExtractElementF64	= 278,
    FABS_D32	= 279,
    FABS_D64	= 280,
    FABS_S	= 281,
    FADD_D32	= 282,
    FADD_D64	= 283,
    FADD_S	= 284,
    FCMP_D32	= 285,
    FCMP_D64	= 286,
    FCMP_S32	= 287,
    FDIV_D32	= 288,
    FDIV_D64	= 289,
    FDIV_S	= 290,
    FLOOR_L_D64	= 291,
    FLOOR_L_S	= 292,
    FLOOR_W_D32	= 293,
    FLOOR_W_D64	= 294,
    FLOOR_W_S	= 295,
    FMOV_D32	= 296,
    FMOV_D64	= 297,
    FMOV_S	= 298,
    FMUL_D32	= 299,
    FMUL_D64	= 300,
    FMUL_S	= 301,
    FNEG_D32	= 302,
    FNEG_D64	= 303,
    FNEG_S	= 304,
    FSQRT_D32	= 305,
    FSQRT_D64	= 306,
    FSQRT_S	= 307,
    FSUB_D32	= 308,
    FSUB_D64	= 309,
    FSUB_S	= 310,
    INS	= 311,
    INSV	= 312,
    J	= 313,
    JAL	= 314,
    JALR	= 315,
    JALR64	= 316,
    JR	= 317,
    JR64	= 318,
    JrRa16	= 319,
    JrcRa16	= 320,
    JrcRx16	= 321,
    JumpLinkReg16	= 322,
    LB	= 323,
    LB64	= 324,
    LB64_P8	= 325,
    LBUX	= 326,
    LB_P8	= 327,
    LBu	= 328,
    LBu64	= 329,
    LBu64_P8	= 330,
    LBu_P8	= 331,
    LD	= 332,
    LDC1	= 333,
    LDC164	= 334,
    LDC164_P8	= 335,
    LDL	= 336,
    LDL_P8	= 337,
    LDR	= 338,
    LDR_P8	= 339,
    LDXC1	= 340,
    LDXC164	= 341,
    LDXC164_P8	= 342,
    LD_P8	= 343,
    LEA_ADDiu	= 344,
    LEA_ADDiu64	= 345,
    LH	= 346,
    LH64	= 347,
    LH64_P8	= 348,
    LHX	= 349,
    LH_P8	= 350,
    LHu	= 351,
    LHu64	= 352,
    LHu64_P8	= 353,
    LHu_P8	= 354,
    LL	= 355,
    LLD	= 356,
    LLD_P8	= 357,
    LL_P8	= 358,
    LUXC1	= 359,
    LUXC164	= 360,
    LUi	= 361,
    LUi64	= 362,
    LW	= 363,
    LW64	= 364,
    LW64_P8	= 365,
    LWC1	= 366,
    LWC1_P8	= 367,
    LWL	= 368,
    LWL64	= 369,
    LWL64_P8	= 370,
    LWL_P8	= 371,
    LWR	= 372,
    LWR64	= 373,
    LWR64_P8	= 374,
    LWR_P8	= 375,
    LWX	= 376,
    LWXC1	= 377,
    LWXC1_P8	= 378,
    LW_P8	= 379,
    LWu64	= 380,
    LWu64_P8	= 381,
    LbRxRyOffMemX16	= 382,
    LbuRxRyOffMemX16	= 383,
    LhRxRyOffMemX16	= 384,
    LhuRxRyOffMemX16	= 385,
    LiRxImmX16	= 386,
    LoadAddr32Imm	= 387,
    LoadAddr32Reg	= 388,
    LoadImm32Reg	= 389,
    LwRxRyOffMemX16	= 390,
    LwRxSpImmX16	= 391,
    MADD	= 392,
    MADDU	= 393,
    MADDU_DSP	= 394,
    MADDU_DSP_PSEUDO	= 395,
    MADD_D32	= 396,
    MADD_D64	= 397,
    MADD_DSP	= 398,
    MADD_DSP_PSEUDO	= 399,
    MADD_S	= 400,
    MAQ_SA_W_PHL	= 401,
    MAQ_SA_W_PHL_PSEUDO	= 402,
    MAQ_SA_W_PHR	= 403,
    MAQ_SA_W_PHR_PSEUDO	= 404,
    MAQ_S_W_PHL	= 405,
    MAQ_S_W_PHL_PSEUDO	= 406,
    MAQ_S_W_PHR	= 407,
    MAQ_S_W_PHR_PSEUDO	= 408,
    MFC0_3OP	= 409,
    MFC0_3OP64	= 410,
    MFC1	= 411,
    MFC2_3OP	= 412,
    MFC2_3OP64	= 413,
    MFHI	= 414,
    MFHI64	= 415,
    MFLO	= 416,
    MFLO64	= 417,
    MODSUB	= 418,
    MOVCCRToCCR	= 419,
    MOVF_D32	= 420,
    MOVF_D64	= 421,
    MOVF_I	= 422,
    MOVF_I64	= 423,
    MOVF_S	= 424,
    MOVN_I64_D64	= 425,
    MOVN_I64_I	= 426,
    MOVN_I64_I64	= 427,
    MOVN_I64_S	= 428,
    MOVN_I_D32	= 429,
    MOVN_I_D64	= 430,
    MOVN_I_I	= 431,
    MOVN_I_I64	= 432,
    MOVN_I_S	= 433,
    MOVT_D32	= 434,
    MOVT_D64	= 435,
    MOVT_I	= 436,
    MOVT_I64	= 437,
    MOVT_S	= 438,
    MOVZ_I64_D64	= 439,
    MOVZ_I64_I	= 440,
    MOVZ_I64_I64	= 441,
    MOVZ_I64_S	= 442,
    MOVZ_I_D32	= 443,
    MOVZ_I_D64	= 444,
    MOVZ_I_I	= 445,
    MOVZ_I_I64	= 446,
    MOVZ_I_S	= 447,
    MSUB	= 448,
    MSUBU	= 449,
    MSUBU_DSP	= 450,
    MSUBU_DSP_PSEUDO	= 451,
    MSUB_D32	= 452,
    MSUB_D64	= 453,
    MSUB_DSP	= 454,
    MSUB_DSP_PSEUDO	= 455,
    MSUB_S	= 456,
    MTC0_3OP	= 457,
    MTC0_3OP64	= 458,
    MTC1	= 459,
    MTC2_3OP	= 460,
    MTC2_3OP64	= 461,
    MTHI	= 462,
    MTHI64	= 463,
    MTHLIP	= 464,
    MTHLIP_PSEUDO	= 465,
    MTLO	= 466,
    MTLO64	= 467,
    MUL	= 468,
    MULEQ_S_W_PHL	= 469,
    MULEQ_S_W_PHR	= 470,
    MULEU_S_PH_QBL	= 471,
    MULEU_S_PH_QBR	= 472,
    MULQ_RS_PH	= 473,
    MULQ_RS_W	= 474,
    MULQ_S_PH	= 475,
    MULQ_S_W	= 476,
    MULSAQ_S_W_PH	= 477,
    MULSAQ_S_W_PH_PSEUDO	= 478,
    MULSA_W_PH	= 479,
    MULSA_W_PH_PSEUDO	= 480,
    MULT	= 481,
    MULTU_DSP	= 482,
    MULTU_DSP_PSEUDO	= 483,
    MULT_DSP	= 484,
    MULT_DSP_PSEUDO	= 485,
    MULTu	= 486,
    MUL_PH	= 487,
    MUL_S_PH	= 488,
    Mfhi16	= 489,
    Mflo16	= 490,
    Move32R16	= 491,
    MoveR3216	= 492,
    MultRxRy16	= 493,
    MultRxRyRz16	= 494,
    MultuRxRy16	= 495,
    MultuRxRyRz16	= 496,
    NMADD_D32	= 497,
    NMADD_D64	= 498,
    NMADD_S	= 499,
    NMSUB_D32	= 500,
    NMSUB_D64	= 501,
    NMSUB_S	= 502,
    NOP	= 503,
    NOR	= 504,
    NOR64	= 505,
    NegRxRy16	= 506,
    NotRxRy16	= 507,
    OR	= 508,
    OR64	= 509,
    ORi	= 510,
    ORi64	= 511,
    OrRxRxRy16	= 512,
    PACKRL_PH	= 513,
    PICK_PH	= 514,
    PICK_QB	= 515,
    PRECEQU_PH_QBL	= 516,
    PRECEQU_PH_QBLA	= 517,
    PRECEQU_PH_QBR	= 518,
    PRECEQU_PH_QBRA	= 519,
    PRECEQ_W_PHL	= 520,
    PRECEQ_W_PHR	= 521,
    PRECEU_PH_QBL	= 522,
    PRECEU_PH_QBLA	= 523,
    PRECEU_PH_QBR	= 524,
    PRECEU_PH_QBRA	= 525,
    PRECRQU_S_QB_PH	= 526,
    PRECRQ_PH_W	= 527,
    PRECRQ_QB_PH	= 528,
    PRECRQ_RS_PH_W	= 529,
    PRECR_QB_PH	= 530,
    PRECR_SRA_PH_W	= 531,
    PRECR_SRA_R_PH_W	= 532,
    PREPEND	= 533,
    RADDU_W_QB	= 534,
    RDDSP	= 535,
    RDHWR	= 536,
    RDHWR64	= 537,
    REPLV_PH	= 538,
    REPLV_QB	= 539,
    REPL_PH	= 540,
    REPL_QB	= 541,
    RET	= 542,
    ROTR	= 543,
    ROTRV	= 544,
    ROUND_L_D64	= 545,
    ROUND_L_S	= 546,
    ROUND_W_D32	= 547,
    ROUND_W_D64	= 548,
    ROUND_W_S	= 549,
    RestoreIncSpF16	= 550,
    RestoreRaF16	= 551,
    RetRA	= 552,
    RetRA16	= 553,
    SB	= 554,
    SB64	= 555,
    SB64_P8	= 556,
    SB_P8	= 557,
    SC	= 558,
    SCD	= 559,
    SCD_P8	= 560,
    SC_P8	= 561,
    SD	= 562,
    SDC1	= 563,
    SDC164	= 564,
    SDC164_P8	= 565,
    SDIV	= 566,
    SDL	= 567,
    SDL_P8	= 568,
    SDR	= 569,
    SDR_P8	= 570,
    SDXC1	= 571,
    SDXC164	= 572,
    SDXC164_P8	= 573,
    SD_P8	= 574,
    SEB	= 575,
    SEB64	= 576,
    SEH	= 577,
    SEH64	= 578,
    SH	= 579,
    SH64	= 580,
    SH64_P8	= 581,
    SHILO	= 582,
    SHILOV	= 583,
    SHILOV_PSEUDO	= 584,
    SHILO_PSEUDO	= 585,
    SHLLV_PH	= 586,
    SHLLV_QB	= 587,
    SHLLV_S_PH	= 588,
    SHLLV_S_W	= 589,
    SHLL_PH	= 590,
    SHLL_QB	= 591,
    SHLL_S_PH	= 592,
    SHLL_S_W	= 593,
    SHRAV_PH	= 594,
    SHRAV_QB	= 595,
    SHRAV_R_PH	= 596,
    SHRAV_R_QB	= 597,
    SHRAV_R_W	= 598,
    SHRA_PH	= 599,
    SHRA_QB	= 600,
    SHRA_R_PH	= 601,
    SHRA_R_QB	= 602,
    SHRA_R_W	= 603,
    SHRLV_PH	= 604,
    SHRLV_QB	= 605,
    SHRL_PH	= 606,
    SHRL_QB	= 607,
    SH_P8	= 608,
    SLL	= 609,
    SLL64_32	= 610,
    SLL64_64	= 611,
    SLLV	= 612,
    SLT	= 613,
    SLT64	= 614,
    SLTi	= 615,
    SLTi64	= 616,
    SLTiu	= 617,
    SLTiu64	= 618,
    SLTu	= 619,
    SLTu64	= 620,
    SRA	= 621,
    SRAV	= 622,
    SRL	= 623,
    SRLV	= 624,
    SUB	= 625,
    SUBQH_PH	= 626,
    SUBQH_R_PH	= 627,
    SUBQH_R_W	= 628,
    SUBQH_W	= 629,
    SUBQ_PH	= 630,
    SUBQ_S_PH	= 631,
    SUBQ_S_W	= 632,
    SUBUH_QB	= 633,
    SUBUH_R_QB	= 634,
    SUBU_PH	= 635,
    SUBU_QB	= 636,
    SUBU_S_PH	= 637,
    SUBU_S_QB	= 638,
    SUBu	= 639,
    SUXC1	= 640,
    SUXC164	= 641,
    SW	= 642,
    SW64	= 643,
    SW64_P8	= 644,
    SWC1	= 645,
    SWC1_P8	= 646,
    SWL	= 647,
    SWL64	= 648,
    SWL64_P8	= 649,
    SWL_P8	= 650,
    SWR	= 651,
    SWR64	= 652,
    SWR64_P8	= 653,
    SWR_P8	= 654,
    SWXC1	= 655,
    SWXC1_P8	= 656,
    SW_P8	= 657,
    SYNC	= 658,
    SaveDecSpF16	= 659,
    SaveRaF16	= 660,
    SbRxRyOffMemX16	= 661,
    SelBeqZ	= 662,
    SelBneZ	= 663,
    SelTBteqZCmp	= 664,
    SelTBteqZCmpi	= 665,
    SelTBteqZSlt	= 666,
    SelTBteqZSlti	= 667,
    SelTBteqZSltiu	= 668,
    SelTBteqZSltu	= 669,
    SelTBtneZCmp	= 670,
    SelTBtneZCmpi	= 671,
    SelTBtneZSlt	= 672,
    SelTBtneZSlti	= 673,
    SelTBtneZSltiu	= 674,
    SelTBtneZSltu	= 675,
    ShRxRyOffMemX16	= 676,
    SllX16	= 677,
    SllvRxRy16	= 678,
    SltCCRxRy16	= 679,
    SltRxRy16	= 680,
    SltiCCRxImmX16	= 681,
    SltiuCCRxImmX16	= 682,
    SltuCCRxRy16	= 683,
    SltuRxRyRz16	= 684,
    SraX16	= 685,
    SravRxRy16	= 686,
    SrlX16	= 687,
    SrlvRxRy16	= 688,
    SubuRxRyRz16	= 689,
    SwRxRyOffMemX16	= 690,
    SwRxSpImmX16	= 691,
    TAILCALL	= 692,
    TAILCALL64_R	= 693,
    TAILCALL_R	= 694,
    TRUNC_L_D64	= 695,
    TRUNC_L_S	= 696,
    TRUNC_W_D32	= 697,
    TRUNC_W_D64	= 698,
    TRUNC_W_S	= 699,
    UDIV	= 700,
    WRDSP	= 701,
    WSBH	= 702,
    XOR	= 703,
    XOR64	= 704,
    XORi	= 705,
    XORi64	= 706,
    XorRxRxRy16	= 707,
    INSTRUCTION_LIST_END = 708
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

static const uint16_t ImplicitList1[] = { Mips::DSPCtrl, 0 };
static const uint16_t ImplicitList2[] = { Mips::SP, 0 };
static const uint16_t ImplicitList3[] = { Mips::AT, 0 };
static const uint16_t ImplicitList4[] = { Mips::RA, 0 };
static const uint16_t ImplicitList5[] = { Mips::FCR31, 0 };
static const uint16_t ImplicitList6[] = { Mips::HI64, Mips::LO64, 0 };
static const uint16_t ImplicitList7[] = { Mips::AC0, 0 };
static const uint16_t ImplicitList8[] = { Mips::DSPCtrl, Mips::AC0, 0 };
static const uint16_t ImplicitList9[] = { Mips::HI, Mips::LO, 0 };
static const uint16_t ImplicitList10[] = { Mips::SP_64, 0 };
static const uint16_t ImplicitList11[] = { Mips::HI, 0 };
static const uint16_t ImplicitList12[] = { Mips::HI64, 0 };
static const uint16_t ImplicitList13[] = { Mips::LO, 0 };
static const uint16_t ImplicitList14[] = { Mips::LO64, 0 };

static const MCOperandInfo OperandInfo2[] = { { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo3[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo4[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo5[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo6[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo7[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo8[] = { { Mips::DSPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::DSPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo9[] = { { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo10[] = { { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo11[] = { { Mips::DSPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::DSPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::DSPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo12[] = { { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo13[] = { { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo14[] = { { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo15[] = { { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo16[] = { { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo17[] = { { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo18[] = { { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo19[] = { { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo20[] = { { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo21[] = { { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo22[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo23[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo24[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo25[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo26[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo27[] = { { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo28[] = { { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo29[] = { { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo30[] = { { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo31[] = { { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo32[] = { { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo33[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo34[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo35[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo36[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo37[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo38[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo39[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo40[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo41[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo42[] = { { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CCRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo43[] = { { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::DSPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::DSPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo44[] = { { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo45[] = { { Mips::CCRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo46[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo47[] = { { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo48[] = { { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo49[] = { { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo50[] = { { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo51[] = { { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo52[] = { { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo53[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo54[] = { { Mips::ACRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo55[] = { { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo56[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo57[] = { { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo58[] = { { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo59[] = { { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo60[] = { { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::ACRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo61[] = { { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::ACRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo62[] = { { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo63[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo64[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo65[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo66[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo67[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo68[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo69[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo70[] = { { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo71[] = { { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo72[] = { { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo73[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo74[] = { { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo75[] = { { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo76[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo77[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo78[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo79[] = { { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo80[] = { { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo81[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo82[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo83[] = { { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo84[] = { { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo85[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo86[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo87[] = { { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo88[] = { { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo89[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo90[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo91[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo92[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPUSPRegRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo93[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo94[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo95[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo96[] = { { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo97[] = { { Mips::CCRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CCRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo98[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo99[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo100[] = { { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo101[] = { { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo102[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo103[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo104[] = { { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo105[] = { { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo106[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo107[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo108[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo109[] = { { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo110[] = { { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo111[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo112[] = { { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo113[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo114[] = { { Mips::ACRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo115[] = { { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo116[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo117[] = { { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::DSPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo118[] = { { Mips::DSPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo119[] = { { Mips::DSPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo120[] = { { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::HWRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo121[] = { { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::HWRegs64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo122[] = { { Mips::DSPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo123[] = { { Mips::DSPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo124[] = { { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo125[] = { { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo126[] = { { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo127[] = { { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo128[] = { { Mips::ACRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo129[] = { { Mips::DSPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::DSPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo130[] = { { Mips::DSPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::DSPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo131[] = { { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo132[] = { { Mips::CPURegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo133[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo134[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo135[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo136[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };

extern const MCInstrDesc MipsInsts[] = {
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
  { 17,	2,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo8 },  // Inst #17 = ABSQ_S_PH
  { 18,	2,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo8 },  // Inst #18 = ABSQ_S_QB
  { 19,	2,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo9 },  // Inst #19 = ABSQ_S_W
  { 20,	3,	1,	1,	4,	0|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, NULL, NULL, OperandInfo10 },  // Inst #20 = ADD
  { 21,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, NULL, NULL, OperandInfo11 },  // Inst #21 = ADDQH_PH
  { 22,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, NULL, NULL, OperandInfo11 },  // Inst #22 = ADDQH_R_PH
  { 23,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, NULL, NULL, OperandInfo10 },  // Inst #23 = ADDQH_R_W
  { 24,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, NULL, NULL, OperandInfo10 },  // Inst #24 = ADDQH_W
  { 25,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo11 },  // Inst #25 = ADDQ_PH
  { 26,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo11 },  // Inst #26 = ADDQ_S_PH
  { 27,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo10 },  // Inst #27 = ADDQ_S_W
  { 28,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo10 },  // Inst #28 = ADDSC
  { 29,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, NULL, NULL, OperandInfo11 },  // Inst #29 = ADDUH_QB
  { 30,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, NULL, NULL, OperandInfo11 },  // Inst #30 = ADDUH_R_QB
  { 31,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo11 },  // Inst #31 = ADDU_PH
  { 32,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo11 },  // Inst #32 = ADDU_QB
  { 33,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo11 },  // Inst #33 = ADDU_S_PH
  { 34,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo11 },  // Inst #34 = ADDU_S_QB
  { 35,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, ImplicitList1, ImplicitList1, OperandInfo10 },  // Inst #35 = ADDWC
  { 36,	3,	1,	1,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo12 },  // Inst #36 = ADDi
  { 37,	3,	1,	1,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::CheapAsAMove), 0x2ULL, NULL, NULL, OperandInfo12 },  // Inst #37 = ADDiu
  { 38,	3,	1,	1,	4,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable), 0x1ULL, NULL, NULL, OperandInfo10 },  // Inst #38 = ADDu
  { 39,	1,	0,	7,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList2, ImplicitList2, OperandInfo2 },  // Inst #39 = ADJCALLSTACKDOWN
  { 40,	2,	0,	7,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList2, ImplicitList2, OperandInfo13 },  // Inst #40 = ADJCALLSTACKUP
  { 41,	3,	1,	1,	4,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable), 0x1ULL, NULL, NULL, OperandInfo10 },  // Inst #41 = AND
  { 42,	3,	1,	1,	4,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable), 0x1ULL, NULL, NULL, OperandInfo14 },  // Inst #42 = AND64
  { 43,	3,	1,	1,	4,	0|(1<<MCID::Rematerializable), 0x2ULL, NULL, NULL, OperandInfo12 },  // Inst #43 = ANDi
  { 44,	4,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo15 },  // Inst #44 = APPEND
  { 45,	4,	1,	7,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo16 },  // Inst #45 = ATOMIC_CMP_SWAP_I16
  { 46,	4,	1,	7,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo17 },  // Inst #46 = ATOMIC_CMP_SWAP_I16_P8
  { 47,	4,	1,	7,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo16 },  // Inst #47 = ATOMIC_CMP_SWAP_I32
  { 48,	4,	1,	7,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo17 },  // Inst #48 = ATOMIC_CMP_SWAP_I32_P8
  { 49,	4,	1,	7,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo18 },  // Inst #49 = ATOMIC_CMP_SWAP_I64
  { 50,	4,	1,	7,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo19 },  // Inst #50 = ATOMIC_CMP_SWAP_I64_P8
  { 51,	4,	1,	7,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo16 },  // Inst #51 = ATOMIC_CMP_SWAP_I8
  { 52,	4,	1,	7,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo17 },  // Inst #52 = ATOMIC_CMP_SWAP_I8_P8
  { 53,	3,	1,	7,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo10 },  // Inst #53 = ATOMIC_LOAD_ADD_I16
  { 54,	3,	1,	7,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo20 },  // Inst #54 = ATOMIC_LOAD_ADD_I16_P8
  { 55,	3,	1,	7,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo10 },  // Inst #55 = ATOMIC_LOAD_ADD_I32
  { 56,	3,	1,	7,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo20 },  // Inst #56 = ATOMIC_LOAD_ADD_I32_P8
  { 57,	3,	1,	7,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo21 },  // Inst #57 = ATOMIC_LOAD_ADD_I64
  { 58,	3,	1,	7,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo14 },  // Inst #58 = ATOMIC_LOAD_ADD_I64_P8
  { 59,	3,	1,	7,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo10 },  // Inst #59 = ATOMIC_LOAD_ADD_I8
  { 60,	3,	1,	7,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo20 },  // Inst #60 = ATOMIC_LOAD_ADD_I8_P8
  { 61,	3,	1,	7,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo10 },  // Inst #61 = ATOMIC_LOAD_AND_I16
  { 62,	3,	1,	7,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo20 },  // Inst #62 = ATOMIC_LOAD_AND_I16_P8
  { 63,	3,	1,	7,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo10 },  // Inst #63 = ATOMIC_LOAD_AND_I32
  { 64,	3,	1,	7,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo20 },  // Inst #64 = ATOMIC_LOAD_AND_I32_P8
  { 65,	3,	1,	7,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo21 },  // Inst #65 = ATOMIC_LOAD_AND_I64
  { 66,	3,	1,	7,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo14 },  // Inst #66 = ATOMIC_LOAD_AND_I64_P8
  { 67,	3,	1,	7,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo10 },  // Inst #67 = ATOMIC_LOAD_AND_I8
  { 68,	3,	1,	7,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo20 },  // Inst #68 = ATOMIC_LOAD_AND_I8_P8
  { 69,	3,	1,	7,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo10 },  // Inst #69 = ATOMIC_LOAD_NAND_I16
  { 70,	3,	1,	7,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo20 },  // Inst #70 = ATOMIC_LOAD_NAND_I16_P8
  { 71,	3,	1,	7,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo10 },  // Inst #71 = ATOMIC_LOAD_NAND_I32
  { 72,	3,	1,	7,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo20 },  // Inst #72 = ATOMIC_LOAD_NAND_I32_P8
  { 73,	3,	1,	7,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo21 },  // Inst #73 = ATOMIC_LOAD_NAND_I64
  { 74,	3,	1,	7,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo14 },  // Inst #74 = ATOMIC_LOAD_NAND_I64_P8
  { 75,	3,	1,	7,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo10 },  // Inst #75 = ATOMIC_LOAD_NAND_I8
  { 76,	3,	1,	7,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo20 },  // Inst #76 = ATOMIC_LOAD_NAND_I8_P8
  { 77,	3,	1,	7,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo10 },  // Inst #77 = ATOMIC_LOAD_OR_I16
  { 78,	3,	1,	7,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo20 },  // Inst #78 = ATOMIC_LOAD_OR_I16_P8
  { 79,	3,	1,	7,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo10 },  // Inst #79 = ATOMIC_LOAD_OR_I32
  { 80,	3,	1,	7,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo20 },  // Inst #80 = ATOMIC_LOAD_OR_I32_P8
  { 81,	3,	1,	7,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo21 },  // Inst #81 = ATOMIC_LOAD_OR_I64
  { 82,	3,	1,	7,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo14 },  // Inst #82 = ATOMIC_LOAD_OR_I64_P8
  { 83,	3,	1,	7,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo10 },  // Inst #83 = ATOMIC_LOAD_OR_I8
  { 84,	3,	1,	7,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo20 },  // Inst #84 = ATOMIC_LOAD_OR_I8_P8
  { 85,	3,	1,	7,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo10 },  // Inst #85 = ATOMIC_LOAD_SUB_I16
  { 86,	3,	1,	7,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo20 },  // Inst #86 = ATOMIC_LOAD_SUB_I16_P8
  { 87,	3,	1,	7,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo10 },  // Inst #87 = ATOMIC_LOAD_SUB_I32
  { 88,	3,	1,	7,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo20 },  // Inst #88 = ATOMIC_LOAD_SUB_I32_P8
  { 89,	3,	1,	7,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo21 },  // Inst #89 = ATOMIC_LOAD_SUB_I64
  { 90,	3,	1,	7,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo14 },  // Inst #90 = ATOMIC_LOAD_SUB_I64_P8
  { 91,	3,	1,	7,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo10 },  // Inst #91 = ATOMIC_LOAD_SUB_I8
  { 92,	3,	1,	7,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo20 },  // Inst #92 = ATOMIC_LOAD_SUB_I8_P8
  { 93,	3,	1,	7,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo10 },  // Inst #93 = ATOMIC_LOAD_XOR_I16
  { 94,	3,	1,	7,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo20 },  // Inst #94 = ATOMIC_LOAD_XOR_I16_P8
  { 95,	3,	1,	7,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo10 },  // Inst #95 = ATOMIC_LOAD_XOR_I32
  { 96,	3,	1,	7,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo20 },  // Inst #96 = ATOMIC_LOAD_XOR_I32_P8
  { 97,	3,	1,	7,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo21 },  // Inst #97 = ATOMIC_LOAD_XOR_I64
  { 98,	3,	1,	7,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo14 },  // Inst #98 = ATOMIC_LOAD_XOR_I64_P8
  { 99,	3,	1,	7,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo10 },  // Inst #99 = ATOMIC_LOAD_XOR_I8
  { 100,	3,	1,	7,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo20 },  // Inst #100 = ATOMIC_LOAD_XOR_I8_P8
  { 101,	3,	1,	7,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo10 },  // Inst #101 = ATOMIC_SWAP_I16
  { 102,	3,	1,	7,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo20 },  // Inst #102 = ATOMIC_SWAP_I16_P8
  { 103,	3,	1,	7,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo10 },  // Inst #103 = ATOMIC_SWAP_I32
  { 104,	3,	1,	7,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo20 },  // Inst #104 = ATOMIC_SWAP_I32_P8
  { 105,	3,	1,	7,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo21 },  // Inst #105 = ATOMIC_SWAP_I64
  { 106,	3,	1,	7,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo14 },  // Inst #106 = ATOMIC_SWAP_I64_P8
  { 107,	3,	1,	7,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo10 },  // Inst #107 = ATOMIC_SWAP_I8
  { 108,	3,	1,	7,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo20 },  // Inst #108 = ATOMIC_SWAP_I8_P8
  { 109,	2,	1,	1,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x10ULL, NULL, NULL, OperandInfo22 },  // Inst #109 = AddiuRxImmX16
  { 110,	2,	1,	1,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x10ULL, NULL, NULL, OperandInfo22 },  // Inst #110 = AddiuRxPcImmX16
  { 111,	3,	1,	1,	0,	0|(1<<MCID::Rematerializable), 0x10ULL, NULL, NULL, OperandInfo23 },  // Inst #111 = AddiuRxRxImmX16
  { 112,	3,	1,	1,	0,	0, 0x12ULL, NULL, NULL, OperandInfo24 },  // Inst #112 = AddiuRxRyOffMemX16
  { 113,	3,	1,	1,	0,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable), 0x5ULL, NULL, NULL, OperandInfo25 },  // Inst #113 = AdduRxRyRz16
  { 114,	3,	1,	1,	0,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable), 0x3ULL, NULL, NULL, OperandInfo26 },  // Inst #114 = AndRxRxRy16
  { 115,	1,	0,	2,	4,	0|(1<<MCID::Branch)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x2ULL, NULL, ImplicitList3, OperandInfo27 },  // Inst #115 = B
  { 116,	4,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo15 },  // Inst #116 = BALIGN
  { 117,	1,	0,	2,	4,	0|(1<<MCID::Branch)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, ImplicitList4, OperandInfo27 },  // Inst #117 = BAL_BR
  { 118,	1,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x5ULL, ImplicitList5, NULL, OperandInfo27 },  // Inst #118 = BC1F
  { 119,	1,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x5ULL, ImplicitList5, NULL, OperandInfo27 },  // Inst #119 = BC1T
  { 120,	3,	0,	2,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x2ULL, NULL, ImplicitList3, OperandInfo28 },  // Inst #120 = BEQ
  { 121,	3,	0,	2,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x2ULL, NULL, ImplicitList3, OperandInfo29 },  // Inst #121 = BEQ64
  { 122,	2,	0,	2,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x2ULL, NULL, ImplicitList3, OperandInfo30 },  // Inst #122 = BGEZ
  { 123,	2,	0,	2,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x2ULL, NULL, ImplicitList3, OperandInfo31 },  // Inst #123 = BGEZ64
  { 124,	2,	0,	2,	4,	0|(1<<MCID::DelaySlot)|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, ImplicitList4, OperandInfo30 },  // Inst #124 = BGEZAL
  { 125,	2,	0,	2,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x2ULL, NULL, ImplicitList3, OperandInfo30 },  // Inst #125 = BGTZ
  { 126,	2,	0,	2,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x2ULL, NULL, ImplicitList3, OperandInfo31 },  // Inst #126 = BGTZ64
  { 127,	2,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo9 },  // Inst #127 = BITREV
  { 128,	2,	0,	2,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x2ULL, NULL, ImplicitList3, OperandInfo30 },  // Inst #128 = BLEZ
  { 129,	2,	0,	2,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x2ULL, NULL, ImplicitList3, OperandInfo31 },  // Inst #129 = BLEZ64
  { 130,	2,	0,	2,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x2ULL, NULL, ImplicitList3, OperandInfo30 },  // Inst #130 = BLTZ
  { 131,	2,	0,	2,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x2ULL, NULL, ImplicitList3, OperandInfo31 },  // Inst #131 = BLTZ64
  { 132,	2,	0,	2,	4,	0|(1<<MCID::DelaySlot)|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, ImplicitList4, OperandInfo30 },  // Inst #132 = BLTZAL
  { 133,	3,	0,	2,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x2ULL, NULL, ImplicitList3, OperandInfo28 },  // Inst #133 = BNE
  { 134,	3,	0,	2,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x2ULL, NULL, ImplicitList3, OperandInfo29 },  // Inst #134 = BNE64
  { 135,	1,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, ImplicitList1, NULL, OperandInfo27 },  // Inst #135 = BPOSGE32
  { 136,	1,	1,	7,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList1, NULL, OperandInfo32 },  // Inst #136 = BPOSGE32_PSEUDO
  { 137,	2,	0,	1,	0,	0|(1<<MCID::Branch)|(1<<MCID::Terminator), 0x10ULL, NULL, NULL, OperandInfo33 },  // Inst #137 = BeqzRxImmX16
  { 138,	1,	0,	1,	0,	0|(1<<MCID::Branch)|(1<<MCID::Barrier)|(1<<MCID::Terminator), 0xeULL, NULL, NULL, OperandInfo27 },  // Inst #138 = BimmX16
  { 139,	2,	0,	1,	0,	0|(1<<MCID::Branch)|(1<<MCID::Terminator), 0x10ULL, NULL, NULL, OperandInfo33 },  // Inst #139 = BnezRxImmX16
  { 140,	3,	0,	1,	0,	0|(1<<MCID::Branch)|(1<<MCID::Terminator), 0x14ULL, NULL, NULL, OperandInfo34 },  // Inst #140 = BteqzT8CmpX16
  { 141,	3,	0,	1,	0,	0|(1<<MCID::Branch)|(1<<MCID::Terminator), 0x14ULL, NULL, NULL, OperandInfo35 },  // Inst #141 = BteqzT8CmpiX16
  { 142,	3,	0,	1,	0,	0|(1<<MCID::Branch)|(1<<MCID::Terminator), 0x14ULL, NULL, NULL, OperandInfo34 },  // Inst #142 = BteqzT8SltX16
  { 143,	3,	0,	1,	0,	0|(1<<MCID::Branch)|(1<<MCID::Terminator), 0x14ULL, NULL, NULL, OperandInfo35 },  // Inst #143 = BteqzT8SltiX16
  { 144,	3,	0,	1,	0,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x14ULL, NULL, NULL, OperandInfo35 },  // Inst #144 = BteqzT8SltiuX16
  { 145,	3,	0,	1,	0,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x14ULL, NULL, NULL, OperandInfo34 },  // Inst #145 = BteqzT8SltuX16
  { 146,	1,	0,	1,	0,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x14ULL, NULL, NULL, OperandInfo5 },  // Inst #146 = BteqzX16
  { 147,	3,	0,	1,	0,	0|(1<<MCID::Branch)|(1<<MCID::Terminator), 0x14ULL, NULL, NULL, OperandInfo34 },  // Inst #147 = BtnezT8CmpX16
  { 148,	3,	0,	1,	0,	0|(1<<MCID::Branch)|(1<<MCID::Terminator), 0x14ULL, NULL, NULL, OperandInfo35 },  // Inst #148 = BtnezT8CmpiX16
  { 149,	3,	0,	1,	0,	0|(1<<MCID::Branch)|(1<<MCID::Terminator), 0x14ULL, NULL, NULL, OperandInfo34 },  // Inst #149 = BtnezT8SltX16
  { 150,	3,	0,	1,	0,	0|(1<<MCID::Branch)|(1<<MCID::Terminator), 0x14ULL, NULL, NULL, OperandInfo35 },  // Inst #150 = BtnezT8SltiX16
  { 151,	3,	0,	1,	0,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x14ULL, NULL, NULL, OperandInfo35 },  // Inst #151 = BtnezT8SltiuX16
  { 152,	3,	0,	1,	0,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x14ULL, NULL, NULL, OperandInfo34 },  // Inst #152 = BtnezT8SltuX16
  { 153,	1,	0,	1,	0,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x14ULL, NULL, NULL, OperandInfo5 },  // Inst #153 = BtnezX16
  { 154,	3,	1,	7,	4,	0|(1<<MCID::Pseudo), 0x0ULL, NULL, NULL, OperandInfo36 },  // Inst #154 = BuildPairF64
  { 155,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo37 },  // Inst #155 = CEIL_L_D64
  { 156,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo38 },  // Inst #156 = CEIL_L_S
  { 157,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo39 },  // Inst #157 = CEIL_W_D32
  { 158,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo40 },  // Inst #158 = CEIL_W_D64
  { 159,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo41 },  // Inst #159 = CEIL_W_S
  { 160,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo42 },  // Inst #160 = CFC1
  { 161,	2,	1,	1,	4,	0, 0x1ULL, NULL, NULL, OperandInfo9 },  // Inst #161 = CLO
  { 162,	2,	1,	1,	4,	0, 0x1ULL, NULL, NULL, OperandInfo9 },  // Inst #162 = CLZ
  { 163,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo43 },  // Inst #163 = CMPGDU_EQ_QB
  { 164,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo43 },  // Inst #164 = CMPGDU_LE_QB
  { 165,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo43 },  // Inst #165 = CMPGDU_LT_QB
  { 166,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo43 },  // Inst #166 = CMPGU_EQ_QB
  { 167,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo43 },  // Inst #167 = CMPGU_LE_QB
  { 168,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo43 },  // Inst #168 = CMPGU_LT_QB
  { 169,	2,	0,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo8 },  // Inst #169 = CMPU_EQ_QB
  { 170,	2,	0,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo8 },  // Inst #170 = CMPU_LE_QB
  { 171,	2,	0,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo8 },  // Inst #171 = CMPU_LT_QB
  { 172,	2,	0,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo8 },  // Inst #172 = CMP_EQ_PH
  { 173,	2,	0,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo8 },  // Inst #173 = CMP_LE_PH
  { 174,	2,	0,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo8 },  // Inst #174 = CMP_LT_PH
  { 175,	2,	0,	7,	4,	0|(1<<MCID::Pseudo), 0x0ULL, NULL, NULL, OperandInfo44 },  // Inst #175 = CPRESTORE
  { 176,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo45 },  // Inst #176 = CTC1
  { 177,	2,	1,	0,	4,	0, 0x4ULL, NULL, NULL, OperandInfo46 },  // Inst #177 = CVT_D32_S
  { 178,	2,	1,	0,	4,	0, 0x4ULL, NULL, NULL, OperandInfo46 },  // Inst #178 = CVT_D32_W
  { 179,	2,	1,	0,	4,	0, 0x4ULL, NULL, NULL, OperandInfo37 },  // Inst #179 = CVT_D64_L
  { 180,	2,	1,	0,	4,	0, 0x4ULL, NULL, NULL, OperandInfo38 },  // Inst #180 = CVT_D64_S
  { 181,	2,	1,	0,	4,	0, 0x4ULL, NULL, NULL, OperandInfo38 },  // Inst #181 = CVT_D64_W
  { 182,	2,	1,	0,	4,	0, 0x4ULL, NULL, NULL, OperandInfo37 },  // Inst #182 = CVT_L_D64
  { 183,	2,	1,	0,	4,	0, 0x4ULL, NULL, NULL, OperandInfo38 },  // Inst #183 = CVT_L_S
  { 184,	2,	1,	0,	4,	0, 0x4ULL, NULL, NULL, OperandInfo39 },  // Inst #184 = CVT_S_D32
  { 185,	2,	1,	0,	4,	0, 0x4ULL, NULL, NULL, OperandInfo40 },  // Inst #185 = CVT_S_D64
  { 186,	2,	1,	0,	4,	0, 0x4ULL, NULL, NULL, OperandInfo40 },  // Inst #186 = CVT_S_L
  { 187,	2,	1,	0,	4,	0, 0x4ULL, NULL, NULL, OperandInfo41 },  // Inst #187 = CVT_S_W
  { 188,	2,	1,	0,	4,	0, 0x4ULL, NULL, NULL, OperandInfo39 },  // Inst #188 = CVT_W_D32
  { 189,	2,	1,	0,	4,	0, 0x4ULL, NULL, NULL, OperandInfo40 },  // Inst #189 = CVT_W_D64
  { 190,	2,	1,	0,	4,	0, 0x4ULL, NULL, NULL, OperandInfo41 },  // Inst #190 = CVT_W_S
  { 191,	3,	1,	1,	4,	0|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, NULL, NULL, OperandInfo14 },  // Inst #191 = DADD
  { 192,	3,	1,	1,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x2ULL, NULL, NULL, OperandInfo47 },  // Inst #192 = DADDi
  { 193,	3,	1,	1,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::CheapAsAMove), 0x2ULL, NULL, NULL, OperandInfo47 },  // Inst #193 = DADDiu
  { 194,	3,	1,	1,	4,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable), 0x1ULL, NULL, NULL, OperandInfo14 },  // Inst #194 = DADDu
  { 195,	3,	1,	1,	4,	0|(1<<MCID::Rematerializable), 0x2ULL, NULL, NULL, OperandInfo47 },  // Inst #195 = DANDi
  { 196,	2,	1,	1,	4,	0, 0x1ULL, NULL, NULL, OperandInfo48 },  // Inst #196 = DCLO
  { 197,	2,	1,	1,	4,	0, 0x1ULL, NULL, NULL, OperandInfo48 },  // Inst #197 = DCLZ
  { 198,	4,	1,	0,	4,	0, 0x1ULL, NULL, NULL, OperandInfo49 },  // Inst #198 = DEXT
  { 199,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, NULL, NULL, OperandInfo49 },  // Inst #199 = DEXTM
  { 200,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, NULL, NULL, OperandInfo49 },  // Inst #200 = DEXTU
  { 201,	5,	1,	0,	4,	0, 0x1ULL, NULL, NULL, OperandInfo50 },  // Inst #201 = DINS
  { 202,	5,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, NULL, NULL, OperandInfo50 },  // Inst #202 = DINSM
  { 203,	5,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, NULL, NULL, OperandInfo50 },  // Inst #203 = DINSU
  { 204,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo47 },  // Inst #204 = DMFC0_3OP64
  { 205,	2,	1,	0,	4,	0|(1<<MCID::Bitcast), 0x4ULL, NULL, NULL, OperandInfo51 },  // Inst #205 = DMFC1
  { 206,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo47 },  // Inst #206 = DMFC2_3OP64
  { 207,	3,	2,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo52 },  // Inst #207 = DMTC0_3OP64
  { 208,	2,	1,	0,	4,	0|(1<<MCID::Bitcast), 0x4ULL, NULL, NULL, OperandInfo53 },  // Inst #208 = DMTC1
  { 209,	3,	2,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo52 },  // Inst #209 = DMTC2_3OP64
  { 210,	2,	0,	5,	4,	0|(1<<MCID::Commutable), 0x1ULL, NULL, ImplicitList6, OperandInfo48 },  // Inst #210 = DMULT
  { 211,	2,	0,	5,	4,	0|(1<<MCID::Commutable), 0x1ULL, NULL, ImplicitList6, OperandInfo48 },  // Inst #211 = DMULTu
  { 212,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo54 },  // Inst #212 = DPAQX_SA_W_PH
  { 213,	2,	0,	0,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList7, ImplicitList8, OperandInfo9 },  // Inst #213 = DPAQX_SA_W_PH_PSEUDO
  { 214,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo54 },  // Inst #214 = DPAQX_S_W_PH
  { 215,	2,	0,	0,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList7, ImplicitList8, OperandInfo9 },  // Inst #215 = DPAQX_S_W_PH_PSEUDO
  { 216,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo54 },  // Inst #216 = DPAQ_SA_L_W
  { 217,	2,	0,	0,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList7, ImplicitList8, OperandInfo9 },  // Inst #217 = DPAQ_SA_L_W_PSEUDO
  { 218,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo54 },  // Inst #218 = DPAQ_S_W_PH
  { 219,	2,	0,	0,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList7, ImplicitList8, OperandInfo9 },  // Inst #219 = DPAQ_S_W_PH_PSEUDO
  { 220,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo54 },  // Inst #220 = DPAU_H_QBL
  { 221,	2,	0,	0,	4,	0|(1<<MCID::Pseudo), 0x0ULL, ImplicitList7, ImplicitList8, OperandInfo9 },  // Inst #221 = DPAU_H_QBL_PSEUDO
  { 222,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo54 },  // Inst #222 = DPAU_H_QBR
  { 223,	2,	0,	0,	4,	0|(1<<MCID::Pseudo), 0x0ULL, ImplicitList7, ImplicitList8, OperandInfo9 },  // Inst #223 = DPAU_H_QBR_PSEUDO
  { 224,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo54 },  // Inst #224 = DPAX_W_PH
  { 225,	2,	0,	0,	4,	0|(1<<MCID::Pseudo), 0x0ULL, ImplicitList7, ImplicitList8, OperandInfo9 },  // Inst #225 = DPAX_W_PH_PSEUDO
  { 226,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo54 },  // Inst #226 = DPA_W_PH
  { 227,	2,	0,	0,	4,	0|(1<<MCID::Pseudo), 0x0ULL, ImplicitList7, ImplicitList8, OperandInfo9 },  // Inst #227 = DPA_W_PH_PSEUDO
  { 228,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo54 },  // Inst #228 = DPSQX_SA_W_PH
  { 229,	2,	0,	0,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList7, ImplicitList8, OperandInfo9 },  // Inst #229 = DPSQX_SA_W_PH_PSEUDO
  { 230,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo54 },  // Inst #230 = DPSQX_S_W_PH
  { 231,	2,	0,	0,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList7, ImplicitList8, OperandInfo9 },  // Inst #231 = DPSQX_S_W_PH_PSEUDO
  { 232,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo54 },  // Inst #232 = DPSQ_SA_L_W
  { 233,	2,	0,	0,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList7, ImplicitList8, OperandInfo9 },  // Inst #233 = DPSQ_SA_L_W_PSEUDO
  { 234,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo54 },  // Inst #234 = DPSQ_S_W_PH
  { 235,	2,	0,	0,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList7, ImplicitList8, OperandInfo9 },  // Inst #235 = DPSQ_S_W_PH_PSEUDO
  { 236,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo54 },  // Inst #236 = DPSU_H_QBL
  { 237,	2,	0,	0,	4,	0|(1<<MCID::Pseudo), 0x0ULL, ImplicitList7, ImplicitList8, OperandInfo9 },  // Inst #237 = DPSU_H_QBL_PSEUDO
  { 238,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo54 },  // Inst #238 = DPSU_H_QBR
  { 239,	2,	0,	0,	4,	0|(1<<MCID::Pseudo), 0x0ULL, ImplicitList7, ImplicitList8, OperandInfo9 },  // Inst #239 = DPSU_H_QBR_PSEUDO
  { 240,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo54 },  // Inst #240 = DPSX_W_PH
  { 241,	2,	0,	0,	4,	0|(1<<MCID::Pseudo), 0x0ULL, ImplicitList7, ImplicitList8, OperandInfo9 },  // Inst #241 = DPSX_W_PH_PSEUDO
  { 242,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo54 },  // Inst #242 = DPS_W_PH
  { 243,	2,	0,	0,	4,	0|(1<<MCID::Pseudo), 0x0ULL, ImplicitList7, ImplicitList8, OperandInfo9 },  // Inst #243 = DPS_W_PH_PSEUDO
  { 244,	3,	1,	1,	4,	0, 0x1ULL, NULL, NULL, OperandInfo47 },  // Inst #244 = DROTR
  { 245,	3,	1,	1,	4,	0, 0x1ULL, NULL, NULL, OperandInfo21 },  // Inst #245 = DROTRV
  { 246,	2,	1,	0,	4,	0, 0x1ULL, NULL, NULL, OperandInfo48 },  // Inst #246 = DSBH
  { 247,	2,	0,	4,	4,	0, 0x1ULL, NULL, ImplicitList6, OperandInfo48 },  // Inst #247 = DSDIV
  { 248,	2,	1,	0,	4,	0, 0x1ULL, NULL, NULL, OperandInfo48 },  // Inst #248 = DSHD
  { 249,	3,	1,	1,	4,	0, 0x1ULL, NULL, NULL, OperandInfo47 },  // Inst #249 = DSLL
  { 250,	3,	1,	1,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, NULL, NULL, OperandInfo47 },  // Inst #250 = DSLL32
  { 251,	2,	1,	1,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, NULL, NULL, OperandInfo55 },  // Inst #251 = DSLL64_32
  { 252,	3,	1,	1,	4,	0, 0x1ULL, NULL, NULL, OperandInfo21 },  // Inst #252 = DSLLV
  { 253,	3,	1,	1,	4,	0, 0x1ULL, NULL, NULL, OperandInfo47 },  // Inst #253 = DSRA
  { 254,	3,	1,	1,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, NULL, NULL, OperandInfo47 },  // Inst #254 = DSRA32
  { 255,	3,	1,	1,	4,	0, 0x1ULL, NULL, NULL, OperandInfo21 },  // Inst #255 = DSRAV
  { 256,	3,	1,	1,	4,	0, 0x1ULL, NULL, NULL, OperandInfo47 },  // Inst #256 = DSRL
  { 257,	3,	1,	1,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, NULL, NULL, OperandInfo47 },  // Inst #257 = DSRL32
  { 258,	3,	1,	1,	4,	0, 0x1ULL, NULL, NULL, OperandInfo21 },  // Inst #258 = DSRLV
  { 259,	3,	1,	1,	4,	0|(1<<MCID::Rematerializable), 0x1ULL, NULL, NULL, OperandInfo14 },  // Inst #259 = DSUBu
  { 260,	2,	0,	4,	4,	0, 0x1ULL, NULL, ImplicitList6, OperandInfo48 },  // Inst #260 = DUDIV
  { 261,	2,	0,	1,	0,	0, 0x3ULL, NULL, ImplicitList9, OperandInfo56 },  // Inst #261 = DivRxRy16
  { 262,	2,	0,	1,	0,	0, 0x3ULL, NULL, ImplicitList9, OperandInfo56 },  // Inst #262 = DivuRxRy16
  { 263,	3,	1,	0,	4,	0, 0x5ULL, ImplicitList2, NULL, OperandInfo57 },  // Inst #263 = DynAlloc
  { 264,	3,	1,	0,	4,	0, 0x5ULL, ImplicitList10, NULL, OperandInfo58 },  // Inst #264 = DynAlloc64
  { 265,	4,	1,	0,	4,	0, 0x1ULL, NULL, NULL, OperandInfo59 },  // Inst #265 = EXT
  { 266,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo60 },  // Inst #266 = EXTP
  { 267,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo60 },  // Inst #267 = EXTPDP
  { 268,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo61 },  // Inst #268 = EXTPDPV
  { 269,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo61 },  // Inst #269 = EXTPV
  { 270,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo61 },  // Inst #270 = EXTRV_RS_W
  { 271,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo61 },  // Inst #271 = EXTRV_R_W
  { 272,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo61 },  // Inst #272 = EXTRV_S_H
  { 273,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo61 },  // Inst #273 = EXTRV_W
  { 274,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo60 },  // Inst #274 = EXTR_RS_W
  { 275,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo60 },  // Inst #275 = EXTR_R_W
  { 276,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo60 },  // Inst #276 = EXTR_S_H
  { 277,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo60 },  // Inst #277 = EXTR_W
  { 278,	3,	1,	7,	4,	0|(1<<MCID::Pseudo), 0x0ULL, NULL, NULL, OperandInfo62 },  // Inst #278 = ExtractElementF64
  { 279,	2,	1,	0,	4,	0, 0x4ULL, NULL, NULL, OperandInfo63 },  // Inst #279 = FABS_D32
  { 280,	2,	1,	0,	4,	0, 0x4ULL, NULL, NULL, OperandInfo37 },  // Inst #280 = FABS_D64
  { 281,	2,	1,	0,	4,	0, 0x4ULL, NULL, NULL, OperandInfo41 },  // Inst #281 = FABS_S
  { 282,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x4ULL, NULL, NULL, OperandInfo64 },  // Inst #282 = FADD_D32
  { 283,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x4ULL, NULL, NULL, OperandInfo65 },  // Inst #283 = FADD_D64
  { 284,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x4ULL, NULL, NULL, OperandInfo66 },  // Inst #284 = FADD_S
  { 285,	3,	0,	0,	4,	0, 0x6ULL, NULL, ImplicitList5, OperandInfo67 },  // Inst #285 = FCMP_D32
  { 286,	3,	0,	0,	4,	0, 0x6ULL, NULL, ImplicitList5, OperandInfo68 },  // Inst #286 = FCMP_D64
  { 287,	3,	0,	0,	4,	0, 0x6ULL, NULL, ImplicitList5, OperandInfo69 },  // Inst #287 = FCMP_S32
  { 288,	3,	1,	0,	4,	0, 0x4ULL, NULL, NULL, OperandInfo64 },  // Inst #288 = FDIV_D32
  { 289,	3,	1,	0,	4,	0, 0x4ULL, NULL, NULL, OperandInfo65 },  // Inst #289 = FDIV_D64
  { 290,	3,	1,	0,	4,	0, 0x4ULL, NULL, NULL, OperandInfo66 },  // Inst #290 = FDIV_S
  { 291,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo37 },  // Inst #291 = FLOOR_L_D64
  { 292,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo38 },  // Inst #292 = FLOOR_L_S
  { 293,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo39 },  // Inst #293 = FLOOR_W_D32
  { 294,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo40 },  // Inst #294 = FLOOR_W_D64
  { 295,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo41 },  // Inst #295 = FLOOR_W_S
  { 296,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo63 },  // Inst #296 = FMOV_D32
  { 297,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo37 },  // Inst #297 = FMOV_D64
  { 298,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo41 },  // Inst #298 = FMOV_S
  { 299,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x4ULL, NULL, NULL, OperandInfo64 },  // Inst #299 = FMUL_D32
  { 300,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x4ULL, NULL, NULL, OperandInfo65 },  // Inst #300 = FMUL_D64
  { 301,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x4ULL, NULL, NULL, OperandInfo66 },  // Inst #301 = FMUL_S
  { 302,	2,	1,	0,	4,	0, 0x4ULL, NULL, NULL, OperandInfo63 },  // Inst #302 = FNEG_D32
  { 303,	2,	1,	0,	4,	0, 0x4ULL, NULL, NULL, OperandInfo37 },  // Inst #303 = FNEG_D64
  { 304,	2,	1,	0,	4,	0, 0x4ULL, NULL, NULL, OperandInfo41 },  // Inst #304 = FNEG_S
  { 305,	2,	1,	0,	4,	0, 0x4ULL, NULL, NULL, OperandInfo63 },  // Inst #305 = FSQRT_D32
  { 306,	2,	1,	0,	4,	0, 0x4ULL, NULL, NULL, OperandInfo37 },  // Inst #306 = FSQRT_D64
  { 307,	2,	1,	0,	4,	0, 0x4ULL, NULL, NULL, OperandInfo41 },  // Inst #307 = FSQRT_S
  { 308,	3,	1,	0,	4,	0, 0x4ULL, NULL, NULL, OperandInfo64 },  // Inst #308 = FSUB_D32
  { 309,	3,	1,	0,	4,	0, 0x4ULL, NULL, NULL, OperandInfo65 },  // Inst #309 = FSUB_D64
  { 310,	3,	1,	0,	4,	0, 0x4ULL, NULL, NULL, OperandInfo66 },  // Inst #310 = FSUB_S
  { 311,	5,	1,	0,	4,	0, 0x1ULL, NULL, NULL, OperandInfo70 },  // Inst #311 = INS
  { 312,	3,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x6ULL, ImplicitList1, NULL, OperandInfo71 },  // Inst #312 = INSV
  { 313,	1,	0,	2,	4,	0|(1<<MCID::Branch)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x3ULL, NULL, ImplicitList3, OperandInfo5 },  // Inst #313 = J
  { 314,	1,	0,	2,	4,	0|(1<<MCID::DelaySlot)|(1<<MCID::Call), 0x3ULL, NULL, ImplicitList4, OperandInfo5 },  // Inst #314 = JAL
  { 315,	1,	0,	2,	4,	0|(1<<MCID::DelaySlot)|(1<<MCID::Call), 0x1ULL, NULL, ImplicitList4, OperandInfo32 },  // Inst #315 = JALR
  { 316,	1,	0,	2,	4,	0|(1<<MCID::DelaySlot)|(1<<MCID::Call), 0x1ULL, NULL, ImplicitList4, OperandInfo72 },  // Inst #316 = JALR64
  { 317,	1,	0,	2,	4,	0|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x1ULL, NULL, NULL, OperandInfo32 },  // Inst #317 = JR
  { 318,	1,	0,	2,	4,	0|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x1ULL, NULL, NULL, OperandInfo72 },  // Inst #318 = JR64
  { 319,	0,	0,	1,	0,	0|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x3ULL, NULL, NULL, 0 },  // Inst #319 = JrRa16
  { 320,	0,	0,	1,	0,	0|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x3ULL, NULL, NULL, 0 },  // Inst #320 = JrcRa16
  { 321,	1,	0,	1,	0,	0|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::Terminator), 0x3ULL, NULL, NULL, OperandInfo73 },  // Inst #321 = JrcRx16
  { 322,	1,	0,	2,	0,	0|(1<<MCID::Call), 0x3ULL, NULL, NULL, OperandInfo73 },  // Inst #322 = JumpLinkReg16
  { 323,	3,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x5ULL, NULL, NULL, OperandInfo57 },  // Inst #323 = LB
  { 324,	3,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x5ULL, NULL, NULL, OperandInfo74 },  // Inst #324 = LB64
  { 325,	3,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x5ULL, NULL, NULL, OperandInfo58 },  // Inst #325 = LB64_P8
  { 326,	3,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x6ULL, NULL, NULL, OperandInfo10 },  // Inst #326 = LBUX
  { 327,	3,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x5ULL, NULL, NULL, OperandInfo75 },  // Inst #327 = LB_P8
  { 328,	3,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x5ULL, NULL, NULL, OperandInfo57 },  // Inst #328 = LBu
  { 329,	3,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x5ULL, NULL, NULL, OperandInfo74 },  // Inst #329 = LBu64
  { 330,	3,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x5ULL, NULL, NULL, OperandInfo58 },  // Inst #330 = LBu64_P8
  { 331,	3,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x5ULL, NULL, NULL, OperandInfo75 },  // Inst #331 = LBu_P8
  { 332,	3,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x5ULL, NULL, NULL, OperandInfo74 },  // Inst #332 = LD
  { 333,	3,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x5ULL, NULL, NULL, OperandInfo76 },  // Inst #333 = LDC1
  { 334,	3,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x5ULL, NULL, NULL, OperandInfo77 },  // Inst #334 = LDC164
  { 335,	3,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x5ULL, NULL, NULL, OperandInfo78 },  // Inst #335 = LDC164_P8
  { 336,	4,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x5ULL, NULL, NULL, OperandInfo79 },  // Inst #336 = LDL
  { 337,	4,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x5ULL, NULL, NULL, OperandInfo80 },  // Inst #337 = LDL_P8
  { 338,	4,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x5ULL, NULL, NULL, OperandInfo79 },  // Inst #338 = LDR
  { 339,	4,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x5ULL, NULL, NULL, OperandInfo80 },  // Inst #339 = LDR_P8
  { 340,	3,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x6ULL, NULL, NULL, OperandInfo36 },  // Inst #340 = LDXC1
  { 341,	3,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x6ULL, NULL, NULL, OperandInfo81 },  // Inst #341 = LDXC164
  { 342,	3,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x6ULL, NULL, NULL, OperandInfo82 },  // Inst #342 = LDXC164_P8
  { 343,	3,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x5ULL, NULL, NULL, OperandInfo58 },  // Inst #343 = LD_P8
  { 344,	3,	1,	0,	4,	0, 0x5ULL, NULL, NULL, OperandInfo57 },  // Inst #344 = LEA_ADDiu
  { 345,	3,	1,	0,	4,	0, 0x5ULL, NULL, NULL, OperandInfo58 },  // Inst #345 = LEA_ADDiu64
  { 346,	3,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x5ULL, NULL, NULL, OperandInfo57 },  // Inst #346 = LH
  { 347,	3,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x5ULL, NULL, NULL, OperandInfo74 },  // Inst #347 = LH64
  { 348,	3,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x5ULL, NULL, NULL, OperandInfo58 },  // Inst #348 = LH64_P8
  { 349,	3,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x6ULL, NULL, NULL, OperandInfo10 },  // Inst #349 = LHX
  { 350,	3,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x5ULL, NULL, NULL, OperandInfo75 },  // Inst #350 = LH_P8
  { 351,	3,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x5ULL, NULL, NULL, OperandInfo57 },  // Inst #351 = LHu
  { 352,	3,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x5ULL, NULL, NULL, OperandInfo74 },  // Inst #352 = LHu64
  { 353,	3,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x5ULL, NULL, NULL, OperandInfo58 },  // Inst #353 = LHu64_P8
  { 354,	3,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x5ULL, NULL, NULL, OperandInfo75 },  // Inst #354 = LHu_P8
  { 355,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x5ULL, NULL, NULL, OperandInfo57 },  // Inst #355 = LL
  { 356,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x5ULL, NULL, NULL, OperandInfo74 },  // Inst #356 = LLD
  { 357,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x5ULL, NULL, NULL, OperandInfo58 },  // Inst #357 = LLD_P8
  { 358,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x5ULL, NULL, NULL, OperandInfo75 },  // Inst #358 = LL_P8
  { 359,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo36 },  // Inst #359 = LUXC1
  { 360,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo81 },  // Inst #360 = LUXC164
  { 361,	2,	1,	1,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::CheapAsAMove), 0x2ULL, NULL, NULL, OperandInfo83 },  // Inst #361 = LUi
  { 362,	2,	1,	1,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::CheapAsAMove), 0x2ULL, NULL, NULL, OperandInfo84 },  // Inst #362 = LUi64
  { 363,	3,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x5ULL, NULL, NULL, OperandInfo57 },  // Inst #363 = LW
  { 364,	3,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x5ULL, NULL, NULL, OperandInfo74 },  // Inst #364 = LW64
  { 365,	3,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x5ULL, NULL, NULL, OperandInfo58 },  // Inst #365 = LW64_P8
  { 366,	3,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x5ULL, NULL, NULL, OperandInfo85 },  // Inst #366 = LWC1
  { 367,	3,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x5ULL, NULL, NULL, OperandInfo86 },  // Inst #367 = LWC1_P8
  { 368,	4,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x5ULL, NULL, NULL, OperandInfo87 },  // Inst #368 = LWL
  { 369,	4,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x5ULL, NULL, NULL, OperandInfo79 },  // Inst #369 = LWL64
  { 370,	4,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x5ULL, NULL, NULL, OperandInfo80 },  // Inst #370 = LWL64_P8
  { 371,	4,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x5ULL, NULL, NULL, OperandInfo88 },  // Inst #371 = LWL_P8
  { 372,	4,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x5ULL, NULL, NULL, OperandInfo87 },  // Inst #372 = LWR
  { 373,	4,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x5ULL, NULL, NULL, OperandInfo79 },  // Inst #373 = LWR64
  { 374,	4,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x5ULL, NULL, NULL, OperandInfo80 },  // Inst #374 = LWR64_P8
  { 375,	4,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x5ULL, NULL, NULL, OperandInfo88 },  // Inst #375 = LWR_P8
  { 376,	3,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x6ULL, NULL, NULL, OperandInfo10 },  // Inst #376 = LWX
  { 377,	3,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x6ULL, NULL, NULL, OperandInfo89 },  // Inst #377 = LWXC1
  { 378,	3,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x6ULL, NULL, NULL, OperandInfo90 },  // Inst #378 = LWXC1_P8
  { 379,	3,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x5ULL, NULL, NULL, OperandInfo75 },  // Inst #379 = LW_P8
  { 380,	3,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x5ULL, NULL, NULL, OperandInfo74 },  // Inst #380 = LWu64
  { 381,	3,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x5ULL, NULL, NULL, OperandInfo58 },  // Inst #381 = LWu64_P8
  { 382,	4,	1,	6,	0,	0|(1<<MCID::MayLoad), 0x11ULL, NULL, NULL, OperandInfo91 },  // Inst #382 = LbRxRyOffMemX16
  { 383,	4,	1,	6,	0,	0|(1<<MCID::MayLoad), 0x11ULL, NULL, NULL, OperandInfo91 },  // Inst #383 = LbuRxRyOffMemX16
  { 384,	4,	1,	6,	0,	0|(1<<MCID::MayLoad), 0x11ULL, NULL, NULL, OperandInfo91 },  // Inst #384 = LhRxRyOffMemX16
  { 385,	4,	1,	6,	0,	0|(1<<MCID::MayLoad), 0x11ULL, NULL, NULL, OperandInfo91 },  // Inst #385 = LhuRxRyOffMemX16
  { 386,	2,	1,	1,	0,	0, 0x10ULL, NULL, NULL, OperandInfo22 },  // Inst #386 = LiRxImmX16
  { 387,	2,	1,	7,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo83 },  // Inst #387 = LoadAddr32Imm
  { 388,	3,	1,	7,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo57 },  // Inst #388 = LoadAddr32Reg
  { 389,	2,	1,	7,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo83 },  // Inst #389 = LoadImm32Reg
  { 390,	4,	1,	6,	0,	0|(1<<MCID::MayLoad), 0x11ULL, NULL, NULL, OperandInfo91 },  // Inst #390 = LwRxRyOffMemX16
  { 391,	3,	1,	6,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x10ULL, NULL, NULL, OperandInfo92 },  // Inst #391 = LwRxSpImmX16
  { 392,	2,	0,	5,	4,	0|(1<<MCID::Commutable), 0x1ULL, ImplicitList9, ImplicitList9, OperandInfo9 },  // Inst #392 = MADD
  { 393,	2,	0,	5,	4,	0|(1<<MCID::Commutable), 0x1ULL, ImplicitList9, ImplicitList9, OperandInfo9 },  // Inst #393 = MADDU
  { 394,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo54 },  // Inst #394 = MADDU_DSP
  { 395,	2,	0,	0,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::Commutable), 0x0ULL, ImplicitList7, ImplicitList8, OperandInfo9 },  // Inst #395 = MADDU_DSP_PSEUDO
  { 396,	4,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo93 },  // Inst #396 = MADD_D32
  { 397,	4,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo94 },  // Inst #397 = MADD_D64
  { 398,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo54 },  // Inst #398 = MADD_DSP
  { 399,	2,	0,	0,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::Commutable), 0x0ULL, ImplicitList7, ImplicitList8, OperandInfo9 },  // Inst #399 = MADD_DSP_PSEUDO
  { 400,	4,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo95 },  // Inst #400 = MADD_S
  { 401,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo54 },  // Inst #401 = MAQ_SA_W_PHL
  { 402,	2,	0,	0,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList7, ImplicitList8, OperandInfo9 },  // Inst #402 = MAQ_SA_W_PHL_PSEUDO
  { 403,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo54 },  // Inst #403 = MAQ_SA_W_PHR
  { 404,	2,	0,	0,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList7, ImplicitList8, OperandInfo9 },  // Inst #404 = MAQ_SA_W_PHR_PSEUDO
  { 405,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo54 },  // Inst #405 = MAQ_S_W_PHL
  { 406,	2,	0,	0,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList7, ImplicitList8, OperandInfo9 },  // Inst #406 = MAQ_S_W_PHL_PSEUDO
  { 407,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo54 },  // Inst #407 = MAQ_S_W_PHR
  { 408,	2,	0,	0,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList7, ImplicitList8, OperandInfo9 },  // Inst #408 = MAQ_S_W_PHR_PSEUDO
  { 409,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo12 },  // Inst #409 = MFC0_3OP
  { 410,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo47 },  // Inst #410 = MFC0_3OP64
  { 411,	2,	1,	0,	4,	0|(1<<MCID::Bitcast), 0x4ULL, NULL, NULL, OperandInfo96 },  // Inst #411 = MFC1
  { 412,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo12 },  // Inst #412 = MFC2_3OP
  { 413,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo47 },  // Inst #413 = MFC2_3OP64
  { 414,	1,	1,	3,	4,	0, 0x1ULL, ImplicitList11, NULL, OperandInfo32 },  // Inst #414 = MFHI
  { 415,	1,	1,	3,	4,	0, 0x1ULL, ImplicitList12, NULL, OperandInfo72 },  // Inst #415 = MFHI64
  { 416,	1,	1,	3,	4,	0, 0x1ULL, ImplicitList13, NULL, OperandInfo32 },  // Inst #416 = MFLO
  { 417,	1,	1,	3,	4,	0, 0x1ULL, ImplicitList14, NULL, OperandInfo72 },  // Inst #417 = MFLO64
  { 418,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo10 },  // Inst #418 = MODSUB
  { 419,	2,	1,	7,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo97 },  // Inst #419 = MOVCCRToCCR
  { 420,	3,	1,	0,	4,	0, 0x6ULL, ImplicitList5, NULL, OperandInfo98 },  // Inst #420 = MOVF_D32
  { 421,	3,	1,	0,	4,	0, 0x6ULL, ImplicitList5, NULL, OperandInfo99 },  // Inst #421 = MOVF_D64
  { 422,	3,	1,	0,	4,	0, 0x6ULL, ImplicitList5, NULL, OperandInfo100 },  // Inst #422 = MOVF_I
  { 423,	3,	1,	0,	4,	0, 0x6ULL, ImplicitList5, NULL, OperandInfo101 },  // Inst #423 = MOVF_I64
  { 424,	3,	1,	0,	4,	0, 0x6ULL, ImplicitList5, NULL, OperandInfo102 },  // Inst #424 = MOVF_S
  { 425,	4,	1,	0,	4,	0, 0x4ULL, NULL, NULL, OperandInfo103 },  // Inst #425 = MOVN_I64_D64
  { 426,	4,	1,	0,	4,	0, 0x1ULL, NULL, NULL, OperandInfo104 },  // Inst #426 = MOVN_I64_I
  { 427,	4,	1,	0,	4,	0, 0x1ULL, NULL, NULL, OperandInfo105 },  // Inst #427 = MOVN_I64_I64
  { 428,	4,	1,	0,	4,	0, 0x4ULL, NULL, NULL, OperandInfo106 },  // Inst #428 = MOVN_I64_S
  { 429,	4,	1,	0,	4,	0, 0x4ULL, NULL, NULL, OperandInfo107 },  // Inst #429 = MOVN_I_D32
  { 430,	4,	1,	0,	4,	0, 0x4ULL, NULL, NULL, OperandInfo108 },  // Inst #430 = MOVN_I_D64
  { 431,	4,	1,	0,	4,	0, 0x1ULL, NULL, NULL, OperandInfo109 },  // Inst #431 = MOVN_I_I
  { 432,	4,	1,	0,	4,	0, 0x1ULL, NULL, NULL, OperandInfo110 },  // Inst #432 = MOVN_I_I64
  { 433,	4,	1,	0,	4,	0, 0x4ULL, NULL, NULL, OperandInfo111 },  // Inst #433 = MOVN_I_S
  { 434,	3,	1,	0,	4,	0, 0x6ULL, ImplicitList5, NULL, OperandInfo98 },  // Inst #434 = MOVT_D32
  { 435,	3,	1,	0,	4,	0, 0x6ULL, ImplicitList5, NULL, OperandInfo99 },  // Inst #435 = MOVT_D64
  { 436,	3,	1,	0,	4,	0, 0x6ULL, ImplicitList5, NULL, OperandInfo100 },  // Inst #436 = MOVT_I
  { 437,	3,	1,	0,	4,	0, 0x6ULL, ImplicitList5, NULL, OperandInfo101 },  // Inst #437 = MOVT_I64
  { 438,	3,	1,	0,	4,	0, 0x6ULL, ImplicitList5, NULL, OperandInfo102 },  // Inst #438 = MOVT_S
  { 439,	4,	1,	0,	4,	0, 0x4ULL, NULL, NULL, OperandInfo103 },  // Inst #439 = MOVZ_I64_D64
  { 440,	4,	1,	0,	4,	0, 0x1ULL, NULL, NULL, OperandInfo104 },  // Inst #440 = MOVZ_I64_I
  { 441,	4,	1,	0,	4,	0, 0x1ULL, NULL, NULL, OperandInfo105 },  // Inst #441 = MOVZ_I64_I64
  { 442,	4,	1,	0,	4,	0, 0x4ULL, NULL, NULL, OperandInfo106 },  // Inst #442 = MOVZ_I64_S
  { 443,	4,	1,	0,	4,	0, 0x4ULL, NULL, NULL, OperandInfo107 },  // Inst #443 = MOVZ_I_D32
  { 444,	4,	1,	0,	4,	0, 0x4ULL, NULL, NULL, OperandInfo108 },  // Inst #444 = MOVZ_I_D64
  { 445,	4,	1,	0,	4,	0, 0x1ULL, NULL, NULL, OperandInfo109 },  // Inst #445 = MOVZ_I_I
  { 446,	4,	1,	0,	4,	0, 0x1ULL, NULL, NULL, OperandInfo110 },  // Inst #446 = MOVZ_I_I64
  { 447,	4,	1,	0,	4,	0, 0x4ULL, NULL, NULL, OperandInfo111 },  // Inst #447 = MOVZ_I_S
  { 448,	2,	0,	5,	4,	0, 0x1ULL, ImplicitList9, ImplicitList9, OperandInfo9 },  // Inst #448 = MSUB
  { 449,	2,	0,	5,	4,	0, 0x1ULL, ImplicitList9, ImplicitList9, OperandInfo9 },  // Inst #449 = MSUBU
  { 450,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo54 },  // Inst #450 = MSUBU_DSP
  { 451,	2,	0,	0,	4,	0|(1<<MCID::Pseudo), 0x0ULL, ImplicitList7, ImplicitList8, OperandInfo9 },  // Inst #451 = MSUBU_DSP_PSEUDO
  { 452,	4,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo93 },  // Inst #452 = MSUB_D32
  { 453,	4,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo94 },  // Inst #453 = MSUB_D64
  { 454,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo54 },  // Inst #454 = MSUB_DSP
  { 455,	2,	0,	0,	4,	0|(1<<MCID::Pseudo), 0x0ULL, ImplicitList7, ImplicitList8, OperandInfo9 },  // Inst #455 = MSUB_DSP_PSEUDO
  { 456,	4,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo95 },  // Inst #456 = MSUB_S
  { 457,	3,	2,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo112 },  // Inst #457 = MTC0_3OP
  { 458,	3,	2,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo52 },  // Inst #458 = MTC0_3OP64
  { 459,	2,	1,	0,	4,	0|(1<<MCID::Bitcast), 0x4ULL, NULL, NULL, OperandInfo113 },  // Inst #459 = MTC1
  { 460,	3,	2,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo112 },  // Inst #460 = MTC2_3OP
  { 461,	3,	2,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo52 },  // Inst #461 = MTC2_3OP64
  { 462,	1,	0,	3,	4,	0, 0x1ULL, NULL, ImplicitList11, OperandInfo32 },  // Inst #462 = MTHI
  { 463,	1,	0,	3,	4,	0, 0x1ULL, NULL, ImplicitList12, OperandInfo72 },  // Inst #463 = MTHI64
  { 464,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo114 },  // Inst #464 = MTHLIP
  { 465,	1,	0,	0,	4,	0|(1<<MCID::Pseudo), 0x0ULL, ImplicitList7, ImplicitList8, OperandInfo32 },  // Inst #465 = MTHLIP_PSEUDO
  { 466,	1,	0,	3,	4,	0, 0x1ULL, NULL, ImplicitList13, OperandInfo32 },  // Inst #466 = MTLO
  { 467,	1,	0,	3,	4,	0, 0x1ULL, NULL, ImplicitList14, OperandInfo72 },  // Inst #467 = MTLO64
  { 468,	3,	1,	5,	4,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable), 0x1ULL, NULL, NULL, OperandInfo10 },  // Inst #468 = MUL
  { 469,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo43 },  // Inst #469 = MULEQ_S_W_PHL
  { 470,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo43 },  // Inst #470 = MULEQ_S_W_PHR
  { 471,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo11 },  // Inst #471 = MULEU_S_PH_QBL
  { 472,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo11 },  // Inst #472 = MULEU_S_PH_QBR
  { 473,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo11 },  // Inst #473 = MULQ_RS_PH
  { 474,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo10 },  // Inst #474 = MULQ_RS_W
  { 475,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo11 },  // Inst #475 = MULQ_S_PH
  { 476,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo10 },  // Inst #476 = MULQ_S_W
  { 477,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo54 },  // Inst #477 = MULSAQ_S_W_PH
  { 478,	2,	0,	0,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList7, ImplicitList8, OperandInfo9 },  // Inst #478 = MULSAQ_S_W_PH_PSEUDO
  { 479,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo54 },  // Inst #479 = MULSA_W_PH
  { 480,	2,	0,	0,	4,	0|(1<<MCID::Pseudo), 0x0ULL, ImplicitList7, ImplicitList8, OperandInfo9 },  // Inst #480 = MULSA_W_PH_PSEUDO
  { 481,	2,	0,	5,	4,	0|(1<<MCID::Commutable), 0x1ULL, NULL, ImplicitList9, OperandInfo9 },  // Inst #481 = MULT
  { 482,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo54 },  // Inst #482 = MULTU_DSP
  { 483,	2,	0,	0,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::Commutable), 0x0ULL, NULL, ImplicitList8, OperandInfo9 },  // Inst #483 = MULTU_DSP_PSEUDO
  { 484,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo54 },  // Inst #484 = MULT_DSP
  { 485,	2,	0,	0,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::Commutable), 0x0ULL, NULL, ImplicitList8, OperandInfo9 },  // Inst #485 = MULT_DSP_PSEUDO
  { 486,	2,	0,	5,	4,	0|(1<<MCID::Commutable), 0x1ULL, NULL, ImplicitList9, OperandInfo9 },  // Inst #486 = MULTu
  { 487,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo11 },  // Inst #487 = MUL_PH
  { 488,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo11 },  // Inst #488 = MUL_S_PH
  { 489,	1,	1,	1,	0,	0, 0x3ULL, ImplicitList11, NULL, OperandInfo73 },  // Inst #489 = Mfhi16
  { 490,	1,	1,	1,	0,	0, 0x3ULL, ImplicitList13, NULL, OperandInfo73 },  // Inst #490 = Mflo16
  { 491,	2,	1,	1,	0,	0|(1<<MCID::UnmodeledSideEffects), 0xaULL, NULL, NULL, OperandInfo115 },  // Inst #491 = Move32R16
  { 492,	2,	1,	1,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x9ULL, NULL, NULL, OperandInfo116 },  // Inst #492 = MoveR3216
  { 493,	2,	0,	7,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::Commutable), 0x0ULL, NULL, ImplicitList9, OperandInfo56 },  // Inst #493 = MultRxRy16
  { 494,	3,	1,	7,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::Commutable), 0x0ULL, NULL, ImplicitList9, OperandInfo25 },  // Inst #494 = MultRxRyRz16
  { 495,	2,	0,	7,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::Commutable), 0x0ULL, NULL, ImplicitList9, OperandInfo56 },  // Inst #495 = MultuRxRy16
  { 496,	3,	1,	7,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::Commutable), 0x0ULL, NULL, ImplicitList9, OperandInfo25 },  // Inst #496 = MultuRxRyRz16
  { 497,	4,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo93 },  // Inst #497 = NMADD_D32
  { 498,	4,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo94 },  // Inst #498 = NMADD_D64
  { 499,	4,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo95 },  // Inst #499 = NMADD_S
  { 500,	4,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo93 },  // Inst #500 = NMSUB_D32
  { 501,	4,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo94 },  // Inst #501 = NMSUB_D64
  { 502,	4,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo95 },  // Inst #502 = NMSUB_S
  { 503,	0,	0,	1,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x3ULL, NULL, NULL, 0 },  // Inst #503 = NOP
  { 504,	3,	1,	1,	4,	0|(1<<MCID::Commutable), 0x1ULL, NULL, NULL, OperandInfo10 },  // Inst #504 = NOR
  { 505,	3,	1,	1,	4,	0|(1<<MCID::Commutable), 0x1ULL, NULL, NULL, OperandInfo14 },  // Inst #505 = NOR64
  { 506,	2,	1,	1,	0,	0, 0x3ULL, NULL, NULL, OperandInfo56 },  // Inst #506 = NegRxRy16
  { 507,	2,	1,	1,	0,	0, 0x3ULL, NULL, NULL, OperandInfo56 },  // Inst #507 = NotRxRy16
  { 508,	3,	1,	1,	4,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable), 0x1ULL, NULL, NULL, OperandInfo10 },  // Inst #508 = OR
  { 509,	3,	1,	1,	4,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable), 0x1ULL, NULL, NULL, OperandInfo14 },  // Inst #509 = OR64
  { 510,	3,	1,	1,	4,	0|(1<<MCID::Rematerializable), 0x2ULL, NULL, NULL, OperandInfo12 },  // Inst #510 = ORi
  { 511,	3,	1,	1,	4,	0|(1<<MCID::Rematerializable), 0x2ULL, NULL, NULL, OperandInfo47 },  // Inst #511 = ORi64
  { 512,	3,	1,	1,	0,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable), 0x3ULL, NULL, NULL, OperandInfo26 },  // Inst #512 = OrRxRxRy16
  { 513,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo11 },  // Inst #513 = PACKRL_PH
  { 514,	3,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x6ULL, ImplicitList1, NULL, OperandInfo11 },  // Inst #514 = PICK_PH
  { 515,	3,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x6ULL, ImplicitList1, NULL, OperandInfo11 },  // Inst #515 = PICK_QB
  { 516,	2,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo8 },  // Inst #516 = PRECEQU_PH_QBL
  { 517,	2,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo8 },  // Inst #517 = PRECEQU_PH_QBLA
  { 518,	2,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo8 },  // Inst #518 = PRECEQU_PH_QBR
  { 519,	2,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo8 },  // Inst #519 = PRECEQU_PH_QBRA
  { 520,	2,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo117 },  // Inst #520 = PRECEQ_W_PHL
  { 521,	2,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo117 },  // Inst #521 = PRECEQ_W_PHR
  { 522,	2,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo8 },  // Inst #522 = PRECEU_PH_QBL
  { 523,	2,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo8 },  // Inst #523 = PRECEU_PH_QBLA
  { 524,	2,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo8 },  // Inst #524 = PRECEU_PH_QBR
  { 525,	2,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo8 },  // Inst #525 = PRECEU_PH_QBRA
  { 526,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo11 },  // Inst #526 = PRECRQU_S_QB_PH
  { 527,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo118 },  // Inst #527 = PRECRQ_PH_W
  { 528,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo11 },  // Inst #528 = PRECRQ_QB_PH
  { 529,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo118 },  // Inst #529 = PRECRQ_RS_PH_W
  { 530,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo11 },  // Inst #530 = PRECR_QB_PH
  { 531,	4,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo119 },  // Inst #531 = PRECR_SRA_PH_W
  { 532,	4,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo119 },  // Inst #532 = PRECR_SRA_R_PH_W
  { 533,	4,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo15 },  // Inst #533 = PREPEND
  { 534,	2,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo117 },  // Inst #534 = RADDU_W_QB
  { 535,	2,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x6ULL, ImplicitList1, NULL, OperandInfo83 },  // Inst #535 = RDDSP
  { 536,	2,	1,	1,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, NULL, NULL, OperandInfo120 },  // Inst #536 = RDHWR
  { 537,	2,	1,	1,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, NULL, NULL, OperandInfo121 },  // Inst #537 = RDHWR64
  { 538,	2,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo122 },  // Inst #538 = REPLV_PH
  { 539,	2,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo122 },  // Inst #539 = REPLV_QB
  { 540,	2,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo123 },  // Inst #540 = REPL_PH
  { 541,	2,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo123 },  // Inst #541 = REPL_QB
  { 542,	1,	0,	2,	4,	0|(1<<MCID::Return)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects)|(1<<MCID::ExtraSrcRegAllocReq), 0x1ULL, NULL, NULL, OperandInfo32 },  // Inst #542 = RET
  { 543,	3,	1,	1,	4,	0, 0x1ULL, NULL, NULL, OperandInfo12 },  // Inst #543 = ROTR
  { 544,	3,	1,	1,	4,	0, 0x1ULL, NULL, NULL, OperandInfo10 },  // Inst #544 = ROTRV
  { 545,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo37 },  // Inst #545 = ROUND_L_D64
  { 546,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo38 },  // Inst #546 = ROUND_L_S
  { 547,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo39 },  // Inst #547 = ROUND_W_D32
  { 548,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo40 },  // Inst #548 = ROUND_W_D64
  { 549,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo41 },  // Inst #549 = ROUND_W_S
  { 550,	1,	0,	6,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0xbULL, NULL, NULL, OperandInfo5 },  // Inst #550 = RestoreIncSpF16
  { 551,	1,	0,	6,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0xbULL, NULL, NULL, OperandInfo5 },  // Inst #551 = RestoreRaF16
  { 552,	0,	0,	7,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::Return)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x0ULL, NULL, NULL, 0 },  // Inst #552 = RetRA
  { 553,	0,	0,	7,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::Return)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::ExtraSrcRegAllocReq), 0x0ULL, NULL, NULL, 0 },  // Inst #553 = RetRA16
  { 554,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x5ULL, NULL, NULL, OperandInfo57 },  // Inst #554 = SB
  { 555,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x5ULL, NULL, NULL, OperandInfo74 },  // Inst #555 = SB64
  { 556,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x5ULL, NULL, NULL, OperandInfo58 },  // Inst #556 = SB64_P8
  { 557,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x5ULL, NULL, NULL, OperandInfo75 },  // Inst #557 = SB_P8
  { 558,	4,	1,	0,	4,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x5ULL, NULL, NULL, OperandInfo124 },  // Inst #558 = SC
  { 559,	4,	1,	0,	4,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x5ULL, NULL, NULL, OperandInfo125 },  // Inst #559 = SCD
  { 560,	4,	1,	0,	4,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x5ULL, NULL, NULL, OperandInfo126 },  // Inst #560 = SCD_P8
  { 561,	4,	1,	0,	4,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x5ULL, NULL, NULL, OperandInfo127 },  // Inst #561 = SC_P8
  { 562,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x5ULL, NULL, NULL, OperandInfo74 },  // Inst #562 = SD
  { 563,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x5ULL, NULL, NULL, OperandInfo76 },  // Inst #563 = SDC1
  { 564,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x5ULL, NULL, NULL, OperandInfo77 },  // Inst #564 = SDC164
  { 565,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x5ULL, NULL, NULL, OperandInfo78 },  // Inst #565 = SDC164_P8
  { 566,	2,	0,	4,	4,	0, 0x1ULL, NULL, ImplicitList9, OperandInfo9 },  // Inst #566 = SDIV
  { 567,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x5ULL, NULL, NULL, OperandInfo74 },  // Inst #567 = SDL
  { 568,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x5ULL, NULL, NULL, OperandInfo58 },  // Inst #568 = SDL_P8
  { 569,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x5ULL, NULL, NULL, OperandInfo74 },  // Inst #569 = SDR
  { 570,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x5ULL, NULL, NULL, OperandInfo58 },  // Inst #570 = SDR_P8
  { 571,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x6ULL, NULL, NULL, OperandInfo36 },  // Inst #571 = SDXC1
  { 572,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x6ULL, NULL, NULL, OperandInfo81 },  // Inst #572 = SDXC164
  { 573,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x6ULL, NULL, NULL, OperandInfo82 },  // Inst #573 = SDXC164_P8
  { 574,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x5ULL, NULL, NULL, OperandInfo58 },  // Inst #574 = SD_P8
  { 575,	2,	1,	0,	4,	0, 0x1ULL, NULL, NULL, OperandInfo9 },  // Inst #575 = SEB
  { 576,	2,	1,	0,	4,	0, 0x1ULL, NULL, NULL, OperandInfo48 },  // Inst #576 = SEB64
  { 577,	2,	1,	0,	4,	0, 0x1ULL, NULL, NULL, OperandInfo9 },  // Inst #577 = SEH
  { 578,	2,	1,	0,	4,	0, 0x1ULL, NULL, NULL, OperandInfo48 },  // Inst #578 = SEH64
  { 579,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x5ULL, NULL, NULL, OperandInfo57 },  // Inst #579 = SH
  { 580,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x5ULL, NULL, NULL, OperandInfo74 },  // Inst #580 = SH64
  { 581,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x5ULL, NULL, NULL, OperandInfo58 },  // Inst #581 = SH64_P8
  { 582,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo128 },  // Inst #582 = SHILO
  { 583,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo114 },  // Inst #583 = SHILOV
  { 584,	1,	0,	0,	4,	0|(1<<MCID::Pseudo), 0x0ULL, ImplicitList7, ImplicitList8, OperandInfo32 },  // Inst #584 = SHILOV_PSEUDO
  { 585,	1,	0,	0,	4,	0|(1<<MCID::Pseudo), 0x0ULL, ImplicitList7, ImplicitList8, OperandInfo5 },  // Inst #585 = SHILO_PSEUDO
  { 586,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo129 },  // Inst #586 = SHLLV_PH
  { 587,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo129 },  // Inst #587 = SHLLV_QB
  { 588,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo129 },  // Inst #588 = SHLLV_S_PH
  { 589,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo10 },  // Inst #589 = SHLLV_S_W
  { 590,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo130 },  // Inst #590 = SHLL_PH
  { 591,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo130 },  // Inst #591 = SHLL_QB
  { 592,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo130 },  // Inst #592 = SHLL_S_PH
  { 593,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo12 },  // Inst #593 = SHLL_S_W
  { 594,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo129 },  // Inst #594 = SHRAV_PH
  { 595,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo129 },  // Inst #595 = SHRAV_QB
  { 596,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo129 },  // Inst #596 = SHRAV_R_PH
  { 597,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo129 },  // Inst #597 = SHRAV_R_QB
  { 598,	3,	1,	0,	4,	0, 0x6ULL, NULL, ImplicitList1, OperandInfo10 },  // Inst #598 = SHRAV_R_W
  { 599,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo130 },  // Inst #599 = SHRA_PH
  { 600,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo130 },  // Inst #600 = SHRA_QB
  { 601,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo130 },  // Inst #601 = SHRA_R_PH
  { 602,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo130 },  // Inst #602 = SHRA_R_QB
  { 603,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo12 },  // Inst #603 = SHRA_R_W
  { 604,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo129 },  // Inst #604 = SHRLV_PH
  { 605,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo129 },  // Inst #605 = SHRLV_QB
  { 606,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo130 },  // Inst #606 = SHRL_PH
  { 607,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo130 },  // Inst #607 = SHRL_QB
  { 608,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x5ULL, NULL, NULL, OperandInfo75 },  // Inst #608 = SH_P8
  { 609,	3,	1,	1,	4,	0, 0x1ULL, NULL, NULL, OperandInfo12 },  // Inst #609 = SLL
  { 610,	2,	1,	1,	4,	0, 0x1ULL, NULL, NULL, OperandInfo55 },  // Inst #610 = SLL64_32
  { 611,	2,	1,	1,	4,	0, 0x1ULL, NULL, NULL, OperandInfo48 },  // Inst #611 = SLL64_64
  { 612,	3,	1,	1,	4,	0, 0x1ULL, NULL, NULL, OperandInfo10 },  // Inst #612 = SLLV
  { 613,	3,	1,	1,	4,	0, 0x1ULL, NULL, NULL, OperandInfo10 },  // Inst #613 = SLT
  { 614,	3,	1,	1,	4,	0, 0x1ULL, NULL, NULL, OperandInfo131 },  // Inst #614 = SLT64
  { 615,	3,	1,	1,	4,	0, 0x2ULL, NULL, NULL, OperandInfo12 },  // Inst #615 = SLTi
  { 616,	3,	1,	1,	4,	0, 0x2ULL, NULL, NULL, OperandInfo132 },  // Inst #616 = SLTi64
  { 617,	3,	1,	1,	4,	0, 0x2ULL, NULL, NULL, OperandInfo12 },  // Inst #617 = SLTiu
  { 618,	3,	1,	1,	4,	0, 0x2ULL, NULL, NULL, OperandInfo132 },  // Inst #618 = SLTiu64
  { 619,	3,	1,	1,	4,	0, 0x1ULL, NULL, NULL, OperandInfo10 },  // Inst #619 = SLTu
  { 620,	3,	1,	1,	4,	0, 0x1ULL, NULL, NULL, OperandInfo131 },  // Inst #620 = SLTu64
  { 621,	3,	1,	1,	4,	0, 0x1ULL, NULL, NULL, OperandInfo12 },  // Inst #621 = SRA
  { 622,	3,	1,	1,	4,	0, 0x1ULL, NULL, NULL, OperandInfo10 },  // Inst #622 = SRAV
  { 623,	3,	1,	1,	4,	0, 0x1ULL, NULL, NULL, OperandInfo12 },  // Inst #623 = SRL
  { 624,	3,	1,	1,	4,	0, 0x1ULL, NULL, NULL, OperandInfo10 },  // Inst #624 = SRLV
  { 625,	3,	1,	1,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, NULL, NULL, OperandInfo10 },  // Inst #625 = SUB
  { 626,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo11 },  // Inst #626 = SUBQH_PH
  { 627,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo11 },  // Inst #627 = SUBQH_R_PH
  { 628,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo10 },  // Inst #628 = SUBQH_R_W
  { 629,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo10 },  // Inst #629 = SUBQH_W
  { 630,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo11 },  // Inst #630 = SUBQ_PH
  { 631,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo11 },  // Inst #631 = SUBQ_S_PH
  { 632,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo10 },  // Inst #632 = SUBQ_S_W
  { 633,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo11 },  // Inst #633 = SUBUH_QB
  { 634,	3,	1,	0,	4,	0, 0x6ULL, NULL, NULL, OperandInfo11 },  // Inst #634 = SUBUH_R_QB
  { 635,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo11 },  // Inst #635 = SUBU_PH
  { 636,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo11 },  // Inst #636 = SUBU_QB
  { 637,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo11 },  // Inst #637 = SUBU_S_PH
  { 638,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo11 },  // Inst #638 = SUBU_S_QB
  { 639,	3,	1,	1,	4,	0|(1<<MCID::Rematerializable), 0x1ULL, NULL, NULL, OperandInfo10 },  // Inst #639 = SUBu
  { 640,	3,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo36 },  // Inst #640 = SUXC1
  { 641,	3,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo81 },  // Inst #641 = SUXC164
  { 642,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x5ULL, NULL, NULL, OperandInfo57 },  // Inst #642 = SW
  { 643,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x5ULL, NULL, NULL, OperandInfo74 },  // Inst #643 = SW64
  { 644,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x5ULL, NULL, NULL, OperandInfo58 },  // Inst #644 = SW64_P8
  { 645,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x5ULL, NULL, NULL, OperandInfo85 },  // Inst #645 = SWC1
  { 646,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x5ULL, NULL, NULL, OperandInfo86 },  // Inst #646 = SWC1_P8
  { 647,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x5ULL, NULL, NULL, OperandInfo57 },  // Inst #647 = SWL
  { 648,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x5ULL, NULL, NULL, OperandInfo74 },  // Inst #648 = SWL64
  { 649,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x5ULL, NULL, NULL, OperandInfo58 },  // Inst #649 = SWL64_P8
  { 650,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x5ULL, NULL, NULL, OperandInfo75 },  // Inst #650 = SWL_P8
  { 651,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x5ULL, NULL, NULL, OperandInfo57 },  // Inst #651 = SWR
  { 652,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x5ULL, NULL, NULL, OperandInfo74 },  // Inst #652 = SWR64
  { 653,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x5ULL, NULL, NULL, OperandInfo58 },  // Inst #653 = SWR64_P8
  { 654,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x5ULL, NULL, NULL, OperandInfo75 },  // Inst #654 = SWR_P8
  { 655,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x6ULL, NULL, NULL, OperandInfo89 },  // Inst #655 = SWXC1
  { 656,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x6ULL, NULL, NULL, OperandInfo90 },  // Inst #656 = SWXC1_P8
  { 657,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x5ULL, NULL, NULL, OperandInfo75 },  // Inst #657 = SW_P8
  { 658,	1,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, NULL, OperandInfo2 },  // Inst #658 = SYNC
  { 659,	1,	0,	8,	0,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0xbULL, NULL, NULL, OperandInfo5 },  // Inst #659 = SaveDecSpF16
  { 660,	1,	0,	8,	0,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0xbULL, NULL, NULL, OperandInfo5 },  // Inst #660 = SaveRaF16
  { 661,	4,	0,	8,	0,	0|(1<<MCID::MayStore), 0x11ULL, NULL, NULL, OperandInfo91 },  // Inst #661 = SbRxRyOffMemX16
  { 662,	4,	1,	1,	0,	0, 0x0ULL, NULL, NULL, OperandInfo133 },  // Inst #662 = SelBeqZ
  { 663,	4,	1,	1,	0,	0, 0x0ULL, NULL, NULL, OperandInfo133 },  // Inst #663 = SelBneZ
  { 664,	5,	1,	1,	0,	0, 0x0ULL, NULL, NULL, OperandInfo134 },  // Inst #664 = SelTBteqZCmp
  { 665,	5,	1,	1,	0,	0, 0x0ULL, NULL, NULL, OperandInfo135 },  // Inst #665 = SelTBteqZCmpi
  { 666,	5,	1,	1,	0,	0, 0x0ULL, NULL, NULL, OperandInfo134 },  // Inst #666 = SelTBteqZSlt
  { 667,	5,	1,	1,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo135 },  // Inst #667 = SelTBteqZSlti
  { 668,	5,	1,	1,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo135 },  // Inst #668 = SelTBteqZSltiu
  { 669,	5,	1,	1,	0,	0, 0x0ULL, NULL, NULL, OperandInfo134 },  // Inst #669 = SelTBteqZSltu
  { 670,	5,	1,	1,	0,	0, 0x0ULL, NULL, NULL, OperandInfo134 },  // Inst #670 = SelTBtneZCmp
  { 671,	5,	1,	1,	0,	0, 0x0ULL, NULL, NULL, OperandInfo135 },  // Inst #671 = SelTBtneZCmpi
  { 672,	5,	1,	1,	0,	0, 0x0ULL, NULL, NULL, OperandInfo134 },  // Inst #672 = SelTBtneZSlt
  { 673,	5,	1,	1,	0,	0, 0x0ULL, NULL, NULL, OperandInfo135 },  // Inst #673 = SelTBtneZSlti
  { 674,	5,	1,	1,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo135 },  // Inst #674 = SelTBtneZSltiu
  { 675,	5,	1,	1,	0,	0, 0x0ULL, NULL, NULL, OperandInfo134 },  // Inst #675 = SelTBtneZSltu
  { 676,	4,	0,	8,	0,	0|(1<<MCID::MayStore), 0x11ULL, NULL, NULL, OperandInfo91 },  // Inst #676 = ShRxRyOffMemX16
  { 677,	3,	1,	1,	0,	0, 0x13ULL, NULL, NULL, OperandInfo136 },  // Inst #677 = SllX16
  { 678,	3,	1,	1,	0,	0, 0x3ULL, NULL, NULL, OperandInfo26 },  // Inst #678 = SllvRxRy16
  { 679,	3,	1,	1,	0,	0, 0x3ULL, NULL, NULL, OperandInfo25 },  // Inst #679 = SltCCRxRy16
  { 680,	2,	1,	1,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x3ULL, NULL, NULL, OperandInfo56 },  // Inst #680 = SltRxRy16
  { 681,	3,	1,	1,	0,	0, 0x10ULL, NULL, NULL, OperandInfo136 },  // Inst #681 = SltiCCRxImmX16
  { 682,	3,	1,	1,	0,	0, 0x10ULL, NULL, NULL, OperandInfo136 },  // Inst #682 = SltiuCCRxImmX16
  { 683,	3,	1,	1,	0,	0, 0x3ULL, NULL, NULL, OperandInfo25 },  // Inst #683 = SltuCCRxRy16
  { 684,	3,	1,	1,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x3ULL, NULL, NULL, OperandInfo25 },  // Inst #684 = SltuRxRyRz16
  { 685,	3,	1,	1,	0,	0, 0x13ULL, NULL, NULL, OperandInfo136 },  // Inst #685 = SraX16
  { 686,	3,	1,	1,	0,	0, 0x3ULL, NULL, NULL, OperandInfo26 },  // Inst #686 = SravRxRy16
  { 687,	3,	1,	1,	0,	0, 0x13ULL, NULL, NULL, OperandInfo136 },  // Inst #687 = SrlX16
  { 688,	3,	1,	1,	0,	0, 0x3ULL, NULL, NULL, OperandInfo26 },  // Inst #688 = SrlvRxRy16
  { 689,	3,	1,	1,	0,	0|(1<<MCID::Rematerializable), 0x5ULL, NULL, NULL, OperandInfo25 },  // Inst #689 = SubuRxRyRz16
  { 690,	4,	0,	8,	0,	0|(1<<MCID::MayStore), 0x11ULL, NULL, NULL, OperandInfo91 },  // Inst #690 = SwRxRyOffMemX16
  { 691,	3,	1,	8,	0,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x10ULL, NULL, NULL, OperandInfo92 },  // Inst #691 = SwRxSpImmX16
  { 692,	1,	0,	2,	4,	0|(1<<MCID::Return)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Call)|(1<<MCID::Terminator)|(1<<MCID::ExtraSrcRegAllocReq), 0x3ULL, NULL, ImplicitList3, OperandInfo5 },  // Inst #692 = TAILCALL
  { 693,	1,	0,	2,	4,	0|(1<<MCID::Return)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Call)|(1<<MCID::Terminator)|(1<<MCID::ExtraSrcRegAllocReq), 0x1ULL, NULL, NULL, OperandInfo72 },  // Inst #693 = TAILCALL64_R
  { 694,	1,	0,	2,	4,	0|(1<<MCID::Return)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Call)|(1<<MCID::Terminator)|(1<<MCID::ExtraSrcRegAllocReq), 0x1ULL, NULL, NULL, OperandInfo32 },  // Inst #694 = TAILCALL_R
  { 695,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo37 },  // Inst #695 = TRUNC_L_D64
  { 696,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo38 },  // Inst #696 = TRUNC_L_S
  { 697,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo39 },  // Inst #697 = TRUNC_W_D32
  { 698,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo40 },  // Inst #698 = TRUNC_W_D64
  { 699,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, NULL, NULL, OperandInfo41 },  // Inst #699 = TRUNC_W_S
  { 700,	2,	0,	4,	4,	0, 0x1ULL, NULL, ImplicitList9, OperandInfo9 },  // Inst #700 = UDIV
  { 701,	2,	0,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, NULL, ImplicitList1, OperandInfo83 },  // Inst #701 = WRDSP
  { 702,	2,	1,	0,	4,	0, 0x1ULL, NULL, NULL, OperandInfo9 },  // Inst #702 = WSBH
  { 703,	3,	1,	1,	4,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable), 0x1ULL, NULL, NULL, OperandInfo10 },  // Inst #703 = XOR
  { 704,	3,	1,	1,	4,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable), 0x1ULL, NULL, NULL, OperandInfo14 },  // Inst #704 = XOR64
  { 705,	3,	1,	1,	4,	0|(1<<MCID::Rematerializable), 0x2ULL, NULL, NULL, OperandInfo12 },  // Inst #705 = XORi
  { 706,	3,	1,	1,	4,	0|(1<<MCID::Rematerializable), 0x2ULL, NULL, NULL, OperandInfo47 },  // Inst #706 = XORi64
  { 707,	3,	1,	1,	0,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable), 0x3ULL, NULL, NULL, OperandInfo26 },  // Inst #707 = XorRxRxRy16
};

extern const char MipsInstrNameData[] = {
  /* 0 */ 'L', 'D', 'C', '1', 0,
  /* 5 */ 'S', 'D', 'C', '1', 0,
  /* 10 */ 'C', 'F', 'C', '1', 0,
  /* 15 */ 'D', 'M', 'F', 'C', '1', 0,
  /* 21 */ 'C', 'T', 'C', '1', 0,
  /* 26 */ 'D', 'M', 'T', 'C', '1', 0,
  /* 32 */ 'L', 'W', 'C', '1', 0,
  /* 37 */ 'S', 'W', 'C', '1', 0,
  /* 42 */ 'L', 'D', 'X', 'C', '1', 0,
  /* 48 */ 'S', 'D', 'X', 'C', '1', 0,
  /* 54 */ 'L', 'U', 'X', 'C', '1', 0,
  /* 60 */ 'S', 'U', 'X', 'C', '1', 0,
  /* 66 */ 'L', 'W', 'X', 'C', '1', 0,
  /* 72 */ 'S', 'W', 'X', 'C', '1', 0,
  /* 78 */ 'D', 'S', 'R', 'A', '3', '2', 0,
  /* 85 */ 'F', 'S', 'U', 'B', '_', 'D', '3', '2', 0,
  /* 94 */ 'N', 'M', 'S', 'U', 'B', '_', 'D', '3', '2', 0,
  /* 104 */ 'F', 'A', 'D', 'D', '_', 'D', '3', '2', 0,
  /* 113 */ 'N', 'M', 'A', 'D', 'D', '_', 'D', '3', '2', 0,
  /* 123 */ 'M', 'O', 'V', 'F', '_', 'D', '3', '2', 0,
  /* 132 */ 'F', 'N', 'E', 'G', '_', 'D', '3', '2', 0,
  /* 141 */ 'M', 'O', 'V', 'N', '_', 'I', '_', 'D', '3', '2', 0,
  /* 152 */ 'M', 'O', 'V', 'Z', '_', 'I', '_', 'D', '3', '2', 0,
  /* 163 */ 'F', 'M', 'U', 'L', '_', 'D', '3', '2', 0,
  /* 172 */ 'F', 'C', 'M', 'P', '_', 'D', '3', '2', 0,
  /* 181 */ 'F', 'A', 'B', 'S', '_', 'D', '3', '2', 0,
  /* 190 */ 'C', 'V', 'T', '_', 'S', '_', 'D', '3', '2', 0,
  /* 200 */ 'F', 'S', 'Q', 'R', 'T', '_', 'D', '3', '2', 0,
  /* 210 */ 'M', 'O', 'V', 'T', '_', 'D', '3', '2', 0,
  /* 219 */ 'F', 'D', 'I', 'V', '_', 'D', '3', '2', 0,
  /* 228 */ 'F', 'M', 'O', 'V', '_', 'D', '3', '2', 0,
  /* 237 */ 'T', 'R', 'U', 'N', 'C', '_', 'W', '_', 'D', '3', '2', 0,
  /* 249 */ 'R', 'O', 'U', 'N', 'D', '_', 'W', '_', 'D', '3', '2', 0,
  /* 261 */ 'C', 'E', 'I', 'L', '_', 'W', '_', 'D', '3', '2', 0,
  /* 272 */ 'F', 'L', 'O', 'O', 'R', '_', 'W', '_', 'D', '3', '2', 0,
  /* 284 */ 'C', 'V', 'T', '_', 'W', '_', 'D', '3', '2', 0,
  /* 294 */ 'B', 'P', 'O', 'S', 'G', 'E', '3', '2', 0,
  /* 303 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'S', 'U', 'B', '_', 'I', '3', '2', 0,
  /* 323 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'D', 'D', '_', 'I', '3', '2', 0,
  /* 343 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'A', 'N', 'D', '_', 'I', '3', '2', 0,
  /* 364 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'N', 'D', '_', 'I', '3', '2', 0,
  /* 384 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'S', 'W', 'A', 'P', '_', 'I', '3', '2', 0,
  /* 400 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'C', 'M', 'P', '_', 'S', 'W', 'A', 'P', '_', 'I', '3', '2', 0,
  /* 420 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'X', 'O', 'R', '_', 'I', '3', '2', 0,
  /* 440 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'O', 'R', '_', 'I', '3', '2', 0,
  /* 459 */ 'D', 'S', 'L', 'L', '3', '2', 0,
  /* 466 */ 'D', 'S', 'R', 'L', '3', '2', 0,
  /* 473 */ 'F', 'C', 'M', 'P', '_', 'S', '3', '2', 0,
  /* 482 */ 'D', 'S', 'L', 'L', '6', '4', '_', '3', '2', 0,
  /* 492 */ 'L', 'D', 'C', '1', '6', '4', 0,
  /* 499 */ 'S', 'D', 'C', '1', '6', '4', 0,
  /* 506 */ 'L', 'D', 'X', 'C', '1', '6', '4', 0,
  /* 514 */ 'S', 'D', 'X', 'C', '1', '6', '4', 0,
  /* 522 */ 'L', 'U', 'X', 'C', '1', '6', '4', 0,
  /* 530 */ 'S', 'U', 'X', 'C', '1', '6', '4', 0,
  /* 538 */ 'S', 'E', 'B', '6', '4', 0,
  /* 544 */ 'L', 'B', '6', '4', 0,
  /* 549 */ 'S', 'B', '6', '4', 0,
  /* 554 */ 'A', 'N', 'D', '6', '4', 0,
  /* 560 */ 'M', 'O', 'V', 'N', '_', 'I', '6', '4', '_', 'D', '6', '4', 0,
  /* 573 */ 'M', 'O', 'V', 'Z', '_', 'I', '6', '4', '_', 'D', '6', '4', 0,
  /* 586 */ 'F', 'S', 'U', 'B', '_', 'D', '6', '4', 0,
  /* 595 */ 'N', 'M', 'S', 'U', 'B', '_', 'D', '6', '4', 0,
  /* 605 */ 'F', 'A', 'D', 'D', '_', 'D', '6', '4', 0,
  /* 614 */ 'N', 'M', 'A', 'D', 'D', '_', 'D', '6', '4', 0,
  /* 624 */ 'M', 'O', 'V', 'F', '_', 'D', '6', '4', 0,
  /* 633 */ 'F', 'N', 'E', 'G', '_', 'D', '6', '4', 0,
  /* 642 */ 'M', 'O', 'V', 'N', '_', 'I', '_', 'D', '6', '4', 0,
  /* 653 */ 'M', 'O', 'V', 'Z', '_', 'I', '_', 'D', '6', '4', 0,
  /* 664 */ 'F', 'M', 'U', 'L', '_', 'D', '6', '4', 0,
  /* 673 */ 'T', 'R', 'U', 'N', 'C', '_', 'L', '_', 'D', '6', '4', 0,
  /* 685 */ 'R', 'O', 'U', 'N', 'D', '_', 'L', '_', 'D', '6', '4', 0,
  /* 697 */ 'C', 'E', 'I', 'L', '_', 'L', '_', 'D', '6', '4', 0,
  /* 708 */ 'F', 'L', 'O', 'O', 'R', '_', 'L', '_', 'D', '6', '4', 0,
  /* 720 */ 'C', 'V', 'T', '_', 'L', '_', 'D', '6', '4', 0,
  /* 730 */ 'F', 'C', 'M', 'P', '_', 'D', '6', '4', 0,
  /* 739 */ 'F', 'A', 'B', 'S', '_', 'D', '6', '4', 0,
  /* 748 */ 'C', 'V', 'T', '_', 'S', '_', 'D', '6', '4', 0,
  /* 758 */ 'F', 'S', 'Q', 'R', 'T', '_', 'D', '6', '4', 0,
  /* 768 */ 'M', 'O', 'V', 'T', '_', 'D', '6', '4', 0,
  /* 777 */ 'F', 'D', 'I', 'V', '_', 'D', '6', '4', 0,
  /* 786 */ 'F', 'M', 'O', 'V', '_', 'D', '6', '4', 0,
  /* 795 */ 'T', 'R', 'U', 'N', 'C', '_', 'W', '_', 'D', '6', '4', 0,
  /* 807 */ 'R', 'O', 'U', 'N', 'D', '_', 'W', '_', 'D', '6', '4', 0,
  /* 819 */ 'C', 'E', 'I', 'L', '_', 'W', '_', 'D', '6', '4', 0,
  /* 830 */ 'F', 'L', 'O', 'O', 'R', '_', 'W', '_', 'D', '6', '4', 0,
  /* 842 */ 'C', 'V', 'T', '_', 'W', '_', 'D', '6', '4', 0,
  /* 852 */ 'B', 'N', 'E', '6', '4', 0,
  /* 858 */ 'B', 'u', 'i', 'l', 'd', 'P', 'a', 'i', 'r', 'F', '6', '4', 0,
  /* 871 */ 'E', 'x', 't', 'r', 'a', 'c', 't', 'E', 'l', 'e', 'm', 'e', 'n', 't', 'F', '6', '4', 0,
  /* 889 */ 'S', 'E', 'H', '6', '4', 0,
  /* 895 */ 'L', 'H', '6', '4', 0,
  /* 900 */ 'S', 'H', '6', '4', 0,
  /* 905 */ 'M', 'F', 'H', 'I', '6', '4', 0,
  /* 912 */ 'M', 'T', 'H', 'I', '6', '4', 0,
  /* 919 */ 'M', 'O', 'V', 'N', '_', 'I', '6', '4', '_', 'I', '6', '4', 0,
  /* 932 */ 'M', 'O', 'V', 'Z', '_', 'I', '6', '4', '_', 'I', '6', '4', 0,
  /* 945 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'S', 'U', 'B', '_', 'I', '6', '4', 0,
  /* 965 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'D', 'D', '_', 'I', '6', '4', 0,
  /* 985 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'A', 'N', 'D', '_', 'I', '6', '4', 0,
  /* 1006 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'N', 'D', '_', 'I', '6', '4', 0,
  /* 1026 */ 'M', 'O', 'V', 'F', '_', 'I', '6', '4', 0,
  /* 1035 */ 'M', 'O', 'V', 'N', '_', 'I', '_', 'I', '6', '4', 0,
  /* 1046 */ 'M', 'O', 'V', 'Z', '_', 'I', '_', 'I', '6', '4', 0,
  /* 1057 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'S', 'W', 'A', 'P', '_', 'I', '6', '4', 0,
  /* 1073 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'C', 'M', 'P', '_', 'S', 'W', 'A', 'P', '_', 'I', '6', '4', 0,
  /* 1093 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'X', 'O', 'R', '_', 'I', '6', '4', 0,
  /* 1113 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'O', 'R', '_', 'I', '6', '4', 0,
  /* 1132 */ 'M', 'O', 'V', 'T', '_', 'I', '6', '4', 0,
  /* 1141 */ 'L', 'W', 'L', '6', '4', 0,
  /* 1147 */ 'S', 'W', 'L', '6', '4', 0,
  /* 1153 */ 'M', 'F', 'L', 'O', '6', '4', 0,
  /* 1160 */ 'M', 'T', 'L', 'O', '6', '4', 0,
  /* 1167 */ 'D', 'M', 'F', 'C', '0', '_', '3', 'O', 'P', '6', '4', 0,
  /* 1179 */ 'D', 'M', 'T', 'C', '0', '_', '3', 'O', 'P', '6', '4', 0,
  /* 1191 */ 'D', 'M', 'F', 'C', '2', '_', '3', 'O', 'P', '6', '4', 0,
  /* 1203 */ 'D', 'M', 'T', 'C', '2', '_', '3', 'O', 'P', '6', '4', 0,
  /* 1215 */ 'B', 'E', 'Q', '6', '4', 0,
  /* 1221 */ 'J', 'R', '6', '4', 0,
  /* 1226 */ 'J', 'A', 'L', 'R', '6', '4', 0,
  /* 1233 */ 'N', 'O', 'R', '6', '4', 0,
  /* 1239 */ 'X', 'O', 'R', '6', '4', 0,
  /* 1245 */ 'R', 'D', 'H', 'W', 'R', '6', '4', 0,
  /* 1253 */ 'L', 'W', 'R', '6', '4', 0,
  /* 1259 */ 'S', 'W', 'R', '6', '4', 0,
  /* 1265 */ 'S', 'L', 'T', '6', '4', 0,
  /* 1271 */ 'L', 'W', '6', '4', 0,
  /* 1276 */ 'S', 'W', '6', '4', 0,
  /* 1281 */ 'B', 'G', 'E', 'Z', '6', '4', 0,
  /* 1288 */ 'B', 'L', 'E', 'Z', '6', '4', 0,
  /* 1295 */ 'B', 'G', 'T', 'Z', '6', '4', 0,
  /* 1302 */ 'B', 'L', 'T', 'Z', '6', '4', 0,
  /* 1309 */ 'S', 'L', 'L', '6', '4', '_', '6', '4', 0,
  /* 1318 */ 'D', 'y', 'n', 'A', 'l', 'l', 'o', 'c', '6', '4', 0,
  /* 1329 */ 'X', 'O', 'R', 'i', '6', '4', 0,
  /* 1336 */ 'S', 'L', 'T', 'i', '6', '4', 0,
  /* 1343 */ 'L', 'U', 'i', '6', '4', 0,
  /* 1349 */ 'L', 'B', 'u', '6', '4', 0,
  /* 1355 */ 'L', 'H', 'u', '6', '4', 0,
  /* 1361 */ 'S', 'L', 'T', 'u', '6', '4', 0,
  /* 1368 */ 'L', 'W', 'u', '6', '4', 0,
  /* 1374 */ 'L', 'E', 'A', '_', 'A', 'D', 'D', 'i', 'u', '6', '4', 0,
  /* 1386 */ 'S', 'L', 'T', 'i', 'u', '6', '4', 0,
  /* 1394 */ 'M', 'o', 'v', 'e', 'R', '3', '2', '1', '6', 0,
  /* 1404 */ 'R', 'e', 't', 'R', 'A', '1', '6', 0,
  /* 1412 */ 'R', 'e', 's', 't', 'o', 'r', 'e', 'R', 'a', 'F', '1', '6', 0,
  /* 1425 */ 'S', 'a', 'v', 'e', 'R', 'a', 'F', '1', '6', 0,
  /* 1435 */ 'S', 'a', 'v', 'e', 'D', 'e', 'c', 'S', 'p', 'F', '1', '6', 0,
  /* 1448 */ 'R', 'e', 's', 't', 'o', 'r', 'e', 'I', 'n', 'c', 'S', 'p', 'F', '1', '6', 0,
  /* 1464 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'S', 'U', 'B', '_', 'I', '1', '6', 0,
  /* 1484 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'D', 'D', '_', 'I', '1', '6', 0,
  /* 1504 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'A', 'N', 'D', '_', 'I', '1', '6', 0,
  /* 1525 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'N', 'D', '_', 'I', '1', '6', 0,
  /* 1545 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'S', 'W', 'A', 'P', '_', 'I', '1', '6', 0,
  /* 1561 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'C', 'M', 'P', '_', 'S', 'W', 'A', 'P', '_', 'I', '1', '6', 0,
  /* 1581 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'X', 'O', 'R', '_', 'I', '1', '6', 0,
  /* 1601 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'O', 'R', '_', 'I', '1', '6', 0,
  /* 1620 */ 'M', 'o', 'v', 'e', '3', '2', 'R', '1', '6', 0,
  /* 1630 */ 'S', 'r', 'a', 'X', '1', '6', 0,
  /* 1637 */ 'B', 't', 'n', 'e', 'z', 'T', '8', 'C', 'm', 'p', 'i', 'X', '1', '6', 0,
  /* 1652 */ 'B', 't', 'e', 'q', 'z', 'T', '8', 'C', 'm', 'p', 'i', 'X', '1', '6', 0,
  /* 1667 */ 'B', 't', 'n', 'e', 'z', 'T', '8', 'S', 'l', 't', 'i', 'X', '1', '6', 0,
  /* 1682 */ 'B', 't', 'e', 'q', 'z', 'T', '8', 'S', 'l', 't', 'i', 'X', '1', '6', 0,
  /* 1697 */ 'S', 'l', 'l', 'X', '1', '6', 0,
  /* 1704 */ 'S', 'r', 'l', 'X', '1', '6', 0,
  /* 1711 */ 'L', 'b', 'R', 'x', 'R', 'y', 'O', 'f', 'f', 'M', 'e', 'm', 'X', '1', '6', 0,
  /* 1727 */ 'S', 'b', 'R', 'x', 'R', 'y', 'O', 'f', 'f', 'M', 'e', 'm', 'X', '1', '6', 0,
  /* 1743 */ 'L', 'h', 'R', 'x', 'R', 'y', 'O', 'f', 'f', 'M', 'e', 'm', 'X', '1', '6', 0,
  /* 1759 */ 'S', 'h', 'R', 'x', 'R', 'y', 'O', 'f', 'f', 'M', 'e', 'm', 'X', '1', '6', 0,
  /* 1775 */ 'L', 'b', 'u', 'R', 'x', 'R', 'y', 'O', 'f', 'f', 'M', 'e', 'm', 'X', '1', '6', 0,
  /* 1792 */ 'L', 'h', 'u', 'R', 'x', 'R', 'y', 'O', 'f', 'f', 'M', 'e', 'm', 'X', '1', '6', 0,
  /* 1809 */ 'A', 'd', 'd', 'i', 'u', 'R', 'x', 'R', 'y', 'O', 'f', 'f', 'M', 'e', 'm', 'X', '1', '6', 0,
  /* 1828 */ 'L', 'w', 'R', 'x', 'R', 'y', 'O', 'f', 'f', 'M', 'e', 'm', 'X', '1', '6', 0,
  /* 1844 */ 'S', 'w', 'R', 'x', 'R', 'y', 'O', 'f', 'f', 'M', 'e', 'm', 'X', '1', '6', 0,
  /* 1860 */ 'A', 'd', 'd', 'i', 'u', 'R', 'x', 'P', 'c', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 1876 */ 'L', 'w', 'R', 'x', 'S', 'p', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 1889 */ 'S', 'w', 'R', 'x', 'S', 'p', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 1902 */ 'S', 'l', 't', 'i', 'C', 'C', 'R', 'x', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 1917 */ 'S', 'l', 't', 'i', 'u', 'C', 'C', 'R', 'x', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 1933 */ 'L', 'i', 'R', 'x', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 1944 */ 'A', 'd', 'd', 'i', 'u', 'R', 'x', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 1958 */ 'A', 'd', 'd', 'i', 'u', 'R', 'x', 'R', 'x', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 1974 */ 'B', 'n', 'e', 'z', 'R', 'x', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 1987 */ 'B', 'e', 'q', 'z', 'R', 'x', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 2000 */ 'B', 'i', 'm', 'm', 'X', '1', '6', 0,
  /* 2008 */ 'B', 't', 'n', 'e', 'z', 'T', '8', 'C', 'm', 'p', 'X', '1', '6', 0,
  /* 2022 */ 'B', 't', 'e', 'q', 'z', 'T', '8', 'C', 'm', 'p', 'X', '1', '6', 0,
  /* 2036 */ 'B', 't', 'n', 'e', 'z', 'T', '8', 'S', 'l', 't', 'X', '1', '6', 0,
  /* 2050 */ 'B', 't', 'e', 'q', 'z', 'T', '8', 'S', 'l', 't', 'X', '1', '6', 0,
  /* 2064 */ 'B', 't', 'n', 'e', 'z', 'T', '8', 'S', 'l', 't', 'i', 'u', 'X', '1', '6', 0,
  /* 2080 */ 'B', 't', 'e', 'q', 'z', 'T', '8', 'S', 'l', 't', 'i', 'u', 'X', '1', '6', 0,
  /* 2096 */ 'B', 't', 'n', 'e', 'z', 'T', '8', 'S', 'l', 't', 'u', 'X', '1', '6', 0,
  /* 2111 */ 'B', 't', 'e', 'q', 'z', 'T', '8', 'S', 'l', 't', 'u', 'X', '1', '6', 0,
  /* 2126 */ 'B', 't', 'n', 'e', 'z', 'X', '1', '6', 0,
  /* 2135 */ 'B', 't', 'e', 'q', 'z', 'X', '1', '6', 0,
  /* 2144 */ 'J', 'r', 'c', 'R', 'a', '1', '6', 0,
  /* 2152 */ 'J', 'r', 'R', 'a', '1', '6', 0,
  /* 2159 */ 'J', 'u', 'm', 'p', 'L', 'i', 'n', 'k', 'R', 'e', 'g', '1', '6', 0,
  /* 2173 */ 'M', 'f', 'h', 'i', '1', '6', 0,
  /* 2180 */ 'M', 'f', 'l', 'o', '1', '6', 0,
  /* 2187 */ 'J', 'r', 'c', 'R', 'x', '1', '6', 0,
  /* 2195 */ 'S', 'l', 't', 'C', 'C', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 2207 */ 'S', 'l', 't', 'u', 'C', 'C', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 2220 */ 'N', 'e', 'g', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 2230 */ 'S', 'l', 't', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 2240 */ 'M', 'u', 'l', 't', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 2251 */ 'N', 'o', 't', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 2261 */ 'M', 'u', 'l', 't', 'u', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 2273 */ 'D', 'i', 'v', 'u', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 2284 */ 'S', 'r', 'a', 'v', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 2295 */ 'D', 'i', 'v', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 2305 */ 'S', 'l', 'l', 'v', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 2316 */ 'S', 'r', 'l', 'v', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 2327 */ 'A', 'n', 'd', 'R', 'x', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 2339 */ 'O', 'r', 'R', 'x', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 2350 */ 'X', 'o', 'r', 'R', 'x', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 2362 */ 'M', 'u', 'l', 't', 'R', 'x', 'R', 'y', 'R', 'z', '1', '6', 0,
  /* 2375 */ 'S', 'u', 'b', 'u', 'R', 'x', 'R', 'y', 'R', 'z', '1', '6', 0,
  /* 2388 */ 'A', 'd', 'd', 'u', 'R', 'x', 'R', 'y', 'R', 'z', '1', '6', 0,
  /* 2401 */ 'S', 'l', 't', 'u', 'R', 'x', 'R', 'y', 'R', 'z', '1', '6', 0,
  /* 2414 */ 'M', 'u', 'l', 't', 'u', 'R', 'x', 'R', 'y', 'R', 'z', '1', '6', 0,
  /* 2428 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'S', 'U', 'B', '_', 'I', '8', 0,
  /* 2447 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'D', 'D', '_', 'I', '8', 0,
  /* 2466 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'A', 'N', 'D', '_', 'I', '8', 0,
  /* 2486 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'N', 'D', '_', 'I', '8', 0,
  /* 2505 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'S', 'W', 'A', 'P', '_', 'I', '8', 0,
  /* 2520 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'C', 'M', 'P', '_', 'S', 'W', 'A', 'P', '_', 'I', '8', 0,
  /* 2539 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'X', 'O', 'R', '_', 'I', '8', 0,
  /* 2558 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'O', 'R', '_', 'I', '8', 0,
  /* 2576 */ 'L', 'W', 'C', '1', '_', 'P', '8', 0,
  /* 2584 */ 'S', 'W', 'C', '1', '_', 'P', '8', 0,
  /* 2592 */ 'L', 'W', 'X', 'C', '1', '_', 'P', '8', 0,
  /* 2601 */ 'S', 'W', 'X', 'C', '1', '_', 'P', '8', 0,
  /* 2610 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'S', 'U', 'B', '_', 'I', '3', '2', '_', 'P', '8', 0,
  /* 2633 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'D', 'D', '_', 'I', '3', '2', '_', 'P', '8', 0,
  /* 2656 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'A', 'N', 'D', '_', 'I', '3', '2', '_', 'P', '8', 0,
  /* 2680 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'N', 'D', '_', 'I', '3', '2', '_', 'P', '8', 0,
  /* 2703 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'S', 'W', 'A', 'P', '_', 'I', '3', '2', '_', 'P', '8', 0,
  /* 2722 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'C', 'M', 'P', '_', 'S', 'W', 'A', 'P', '_', 'I', '3', '2', '_', 'P', '8', 0,
  /* 2745 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'X', 'O', 'R', '_', 'I', '3', '2', '_', 'P', '8', 0,
  /* 2768 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'O', 'R', '_', 'I', '3', '2', '_', 'P', '8', 0,
  /* 2790 */ 'L', 'D', 'C', '1', '6', '4', '_', 'P', '8', 0,
  /* 2800 */ 'S', 'D', 'C', '1', '6', '4', '_', 'P', '8', 0,
  /* 2810 */ 'L', 'D', 'X', 'C', '1', '6', '4', '_', 'P', '8', 0,
  /* 2821 */ 'S', 'D', 'X', 'C', '1', '6', '4', '_', 'P', '8', 0,
  /* 2832 */ 'L', 'B', '6', '4', '_', 'P', '8', 0,
  /* 2840 */ 'S', 'B', '6', '4', '_', 'P', '8', 0,
  /* 2848 */ 'L', 'H', '6', '4', '_', 'P', '8', 0,
  /* 2856 */ 'S', 'H', '6', '4', '_', 'P', '8', 0,
  /* 2864 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'S', 'U', 'B', '_', 'I', '6', '4', '_', 'P', '8', 0,
  /* 2887 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'D', 'D', '_', 'I', '6', '4', '_', 'P', '8', 0,
  /* 2910 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'A', 'N', 'D', '_', 'I', '6', '4', '_', 'P', '8', 0,
  /* 2934 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'N', 'D', '_', 'I', '6', '4', '_', 'P', '8', 0,
  /* 2957 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'S', 'W', 'A', 'P', '_', 'I', '6', '4', '_', 'P', '8', 0,
  /* 2976 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'C', 'M', 'P', '_', 'S', 'W', 'A', 'P', '_', 'I', '6', '4', '_', 'P', '8', 0,
  /* 2999 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'X', 'O', 'R', '_', 'I', '6', '4', '_', 'P', '8', 0,
  /* 3022 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'O', 'R', '_', 'I', '6', '4', '_', 'P', '8', 0,
  /* 3044 */ 'L', 'W', 'L', '6', '4', '_', 'P', '8', 0,
  /* 3053 */ 'S', 'W', 'L', '6', '4', '_', 'P', '8', 0,
  /* 3062 */ 'L', 'W', 'R', '6', '4', '_', 'P', '8', 0,
  /* 3071 */ 'S', 'W', 'R', '6', '4', '_', 'P', '8', 0,
  /* 3080 */ 'L', 'W', '6', '4', '_', 'P', '8', 0,
  /* 3088 */ 'S', 'W', '6', '4', '_', 'P', '8', 0,
  /* 3096 */ 'L', 'B', 'u', '6', '4', '_', 'P', '8', 0,
  /* 3105 */ 'L', 'H', 'u', '6', '4', '_', 'P', '8', 0,
  /* 3114 */ 'L', 'W', 'u', '6', '4', '_', 'P', '8', 0,
  /* 3123 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'S', 'U', 'B', '_', 'I', '1', '6', '_', 'P', '8', 0,
  /* 3146 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'D', 'D', '_', 'I', '1', '6', '_', 'P', '8', 0,
  /* 3169 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'A', 'N', 'D', '_', 'I', '1', '6', '_', 'P', '8', 0,
  /* 3193 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'N', 'D', '_', 'I', '1', '6', '_', 'P', '8', 0,
  /* 3216 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'S', 'W', 'A', 'P', '_', 'I', '1', '6', '_', 'P', '8', 0,
  /* 3235 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'C', 'M', 'P', '_', 'S', 'W', 'A', 'P', '_', 'I', '1', '6', '_', 'P', '8', 0,
  /* 3258 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'X', 'O', 'R', '_', 'I', '1', '6', '_', 'P', '8', 0,
  /* 3281 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'O', 'R', '_', 'I', '1', '6', '_', 'P', '8', 0,
  /* 3303 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'S', 'U', 'B', '_', 'I', '8', '_', 'P', '8', 0,
  /* 3325 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'D', 'D', '_', 'I', '8', '_', 'P', '8', 0,
  /* 3347 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'A', 'N', 'D', '_', 'I', '8', '_', 'P', '8', 0,
  /* 3370 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'N', 'D', '_', 'I', '8', '_', 'P', '8', 0,
  /* 3392 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'S', 'W', 'A', 'P', '_', 'I', '8', '_', 'P', '8', 0,
  /* 3410 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'C', 'M', 'P', '_', 'S', 'W', 'A', 'P', '_', 'I', '8', '_', 'P', '8', 0,
  /* 3432 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'X', 'O', 'R', '_', 'I', '8', '_', 'P', '8', 0,
  /* 3454 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'O', 'R', '_', 'I', '8', '_', 'P', '8', 0,
  /* 3475 */ 'L', 'B', '_', 'P', '8', 0,
  /* 3481 */ 'S', 'B', '_', 'P', '8', 0,
  /* 3487 */ 'S', 'C', '_', 'P', '8', 0,
  /* 3493 */ 'S', 'C', 'D', '_', 'P', '8', 0,
  /* 3500 */ 'L', 'L', 'D', '_', 'P', '8', 0,
  /* 3507 */ 'S', 'D', '_', 'P', '8', 0,
  /* 3513 */ 'L', 'H', '_', 'P', '8', 0,
  /* 3519 */ 'S', 'H', '_', 'P', '8', 0,
  /* 3525 */ 'L', 'D', 'L', '_', 'P', '8', 0,
  /* 3532 */ 'S', 'D', 'L', '_', 'P', '8', 0,
  /* 3539 */ 'L', 'L', '_', 'P', '8', 0,
  /* 3545 */ 'L', 'W', 'L', '_', 'P', '8', 0,
  /* 3552 */ 'S', 'W', 'L', '_', 'P', '8', 0,
  /* 3559 */ 'L', 'D', 'R', '_', 'P', '8', 0,
  /* 3566 */ 'S', 'D', 'R', '_', 'P', '8', 0,
  /* 3573 */ 'L', 'W', 'R', '_', 'P', '8', 0,
  /* 3580 */ 'S', 'W', 'R', '_', 'P', '8', 0,
  /* 3587 */ 'L', 'W', '_', 'P', '8', 0,
  /* 3593 */ 'S', 'W', '_', 'P', '8', 0,
  /* 3599 */ 'L', 'B', 'u', '_', 'P', '8', 0,
  /* 3606 */ 'L', 'H', 'u', '_', 'P', '8', 0,
  /* 3613 */ 'P', 'R', 'E', 'C', 'E', 'U', '_', 'P', 'H', '_', 'Q', 'B', 'L', 'A', 0,
  /* 3628 */ 'P', 'R', 'E', 'C', 'E', 'Q', 'U', '_', 'P', 'H', '_', 'Q', 'B', 'L', 'A', 0,
  /* 3644 */ 'P', 'R', 'E', 'C', 'E', 'U', '_', 'P', 'H', '_', 'Q', 'B', 'R', 'A', 0,
  /* 3659 */ 'P', 'R', 'E', 'C', 'E', 'Q', 'U', '_', 'P', 'H', '_', 'Q', 'B', 'R', 'A', 0,
  /* 3675 */ 'D', 'S', 'R', 'A', 0,
  /* 3680 */ 'R', 'e', 't', 'R', 'A', 0,
  /* 3686 */ 'S', 'E', 'B', 0,
  /* 3690 */ 'L', 'B', 0,
  /* 3693 */ 'S', 'H', 'R', 'A', '_', 'Q', 'B', 0,
  /* 3701 */ 'C', 'M', 'P', 'G', 'D', 'U', '_', 'L', 'E', '_', 'Q', 'B', 0,
  /* 3714 */ 'C', 'M', 'P', 'G', 'U', '_', 'L', 'E', '_', 'Q', 'B', 0,
  /* 3726 */ 'C', 'M', 'P', 'U', '_', 'L', 'E', '_', 'Q', 'B', 0,
  /* 3737 */ 'S', 'U', 'B', 'U', 'H', '_', 'Q', 'B', 0,
  /* 3746 */ 'A', 'D', 'D', 'U', 'H', '_', 'Q', 'B', 0,
  /* 3755 */ 'P', 'I', 'C', 'K', '_', 'Q', 'B', 0,
  /* 3763 */ 'S', 'H', 'L', 'L', '_', 'Q', 'B', 0,
  /* 3771 */ 'R', 'E', 'P', 'L', '_', 'Q', 'B', 0,
  /* 3779 */ 'S', 'H', 'R', 'L', '_', 'Q', 'B', 0,
  /* 3787 */ 'C', 'M', 'P', 'G', 'D', 'U', '_', 'E', 'Q', '_', 'Q', 'B', 0,
  /* 3800 */ 'C', 'M', 'P', 'G', 'U', '_', 'E', 'Q', '_', 'Q', 'B', 0,
  /* 3812 */ 'C', 'M', 'P', 'U', '_', 'E', 'Q', '_', 'Q', 'B', 0,
  /* 3823 */ 'S', 'H', 'R', 'A', '_', 'R', '_', 'Q', 'B', 0,
  /* 3833 */ 'S', 'U', 'B', 'U', 'H', '_', 'R', '_', 'Q', 'B', 0,
  /* 3844 */ 'A', 'D', 'D', 'U', 'H', '_', 'R', '_', 'Q', 'B', 0,
  /* 3855 */ 'S', 'H', 'R', 'A', 'V', '_', 'R', '_', 'Q', 'B', 0,
  /* 3866 */ 'A', 'B', 'S', 'Q', '_', 'S', '_', 'Q', 'B', 0,
  /* 3876 */ 'S', 'U', 'B', 'U', '_', 'S', '_', 'Q', 'B', 0,
  /* 3886 */ 'A', 'D', 'D', 'U', '_', 'S', '_', 'Q', 'B', 0,
  /* 3896 */ 'C', 'M', 'P', 'G', 'D', 'U', '_', 'L', 'T', '_', 'Q', 'B', 0,
  /* 3909 */ 'C', 'M', 'P', 'G', 'U', '_', 'L', 'T', '_', 'Q', 'B', 0,
  /* 3921 */ 'C', 'M', 'P', 'U', '_', 'L', 'T', '_', 'Q', 'B', 0,
  /* 3932 */ 'S', 'U', 'B', 'U', '_', 'Q', 'B', 0,
  /* 3940 */ 'A', 'D', 'D', 'U', '_', 'Q', 'B', 0,
  /* 3948 */ 'S', 'H', 'R', 'A', 'V', '_', 'Q', 'B', 0,
  /* 3957 */ 'S', 'H', 'L', 'L', 'V', '_', 'Q', 'B', 0,
  /* 3966 */ 'R', 'E', 'P', 'L', 'V', '_', 'Q', 'B', 0,
  /* 3975 */ 'S', 'H', 'R', 'L', 'V', '_', 'Q', 'B', 0,
  /* 3984 */ 'R', 'A', 'D', 'D', 'U', '_', 'W', '_', 'Q', 'B', 0,
  /* 3995 */ 'S', 'B', 0,
  /* 3998 */ 'M', 'O', 'D', 'S', 'U', 'B', 0,
  /* 4005 */ 'M', 'S', 'U', 'B', 0,
  /* 4010 */ 'S', 'Y', 'N', 'C', 0,
  /* 4015 */ 'A', 'D', 'D', 'S', 'C', 0,
  /* 4021 */ 'A', 'D', 'D', 'W', 'C', 0,
  /* 4027 */ 'S', 'C', 'D', 0,
  /* 4031 */ 'D', 'A', 'D', 'D', 0,
  /* 4036 */ 'M', 'A', 'D', 'D', 0,
  /* 4041 */ 'D', 'S', 'H', 'D', 0,
  /* 4046 */ 'L', 'L', 'D', 0,
  /* 4050 */ 'A', 'N', 'D', 0,
  /* 4054 */ 'P', 'R', 'E', 'P', 'E', 'N', 'D', 0,
  /* 4062 */ 'A', 'P', 'P', 'E', 'N', 'D', 0,
  /* 4069 */ 'L', 'I', 'F', 'E', 'T', 'I', 'M', 'E', '_', 'E', 'N', 'D', 0,
  /* 4082 */ 'S', 'D', 0,
  /* 4085 */ 'R', 'E', 'G', '_', 'S', 'E', 'Q', 'U', 'E', 'N', 'C', 'E', 0,
  /* 4098 */ 'B', 'U', 'N', 'D', 'L', 'E', 0,
  /* 4105 */ 'B', 'N', 'E', 0,
  /* 4109 */ 'C', 'P', 'R', 'E', 'S', 'T', 'O', 'R', 'E', 0,
  /* 4119 */ 'D', 'B', 'G', '_', 'V', 'A', 'L', 'U', 'E', 0,
  /* 4129 */ 'B', 'C', '1', 'F', 0,
  /* 4134 */ 'I', 'M', 'P', 'L', 'I', 'C', 'I', 'T', '_', 'D', 'E', 'F', 0,
  /* 4147 */ 'E', 'X', 'T', 'R', 'A', 'C', 'T', '_', 'S', 'U', 'B', 'R', 'E', 'G', 0,
  /* 4162 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'S', 'U', 'B', 'R', 'E', 'G', 0,
  /* 4176 */ 'S', 'U', 'B', 'R', 'E', 'G', '_', 'T', 'O', '_', 'R', 'E', 'G', 0,
  /* 4190 */ 'D', 'S', 'B', 'H', 0,
  /* 4195 */ 'W', 'S', 'B', 'H', 0,
  /* 4200 */ 'S', 'E', 'H', 0,
  /* 4204 */ 'L', 'H', 0,
  /* 4207 */ 'S', 'H', 'R', 'A', '_', 'P', 'H', 0,
  /* 4215 */ 'P', 'R', 'E', 'C', 'R', 'Q', '_', 'Q', 'B', '_', 'P', 'H', 0,
  /* 4228 */ 'P', 'R', 'E', 'C', 'R', '_', 'Q', 'B', '_', 'P', 'H', 0,
  /* 4240 */ 'P', 'R', 'E', 'C', 'R', 'Q', 'U', '_', 'S', '_', 'Q', 'B', '_', 'P', 'H', 0,
  /* 4256 */ 'C', 'M', 'P', '_', 'L', 'E', '_', 'P', 'H', 0,
  /* 4266 */ 'S', 'U', 'B', 'Q', 'H', '_', 'P', 'H', 0,
  /* 4275 */ 'A', 'D', 'D', 'Q', 'H', '_', 'P', 'H', 0,
  /* 4284 */ 'P', 'I', 'C', 'K', '_', 'P', 'H', 0,
  /* 4292 */ 'S', 'H', 'L', 'L', '_', 'P', 'H', 0,
  /* 4300 */ 'R', 'E', 'P', 'L', '_', 'P', 'H', 0,
  /* 4308 */ 'S', 'H', 'R', 'L', '_', 'P', 'H', 0,
  /* 4316 */ 'P', 'A', 'C', 'K', 'R', 'L', '_', 'P', 'H', 0,
  /* 4326 */ 'M', 'U', 'L', '_', 'P', 'H', 0,
  /* 4333 */ 'S', 'U', 'B', 'Q', '_', 'P', 'H', 0,
  /* 4341 */ 'A', 'D', 'D', 'Q', '_', 'P', 'H', 0,
  /* 4349 */ 'C', 'M', 'P', '_', 'E', 'Q', '_', 'P', 'H', 0,
  /* 4359 */ 'S', 'H', 'R', 'A', '_', 'R', '_', 'P', 'H', 0,
  /* 4369 */ 'S', 'U', 'B', 'Q', 'H', '_', 'R', '_', 'P', 'H', 0,
  /* 4380 */ 'A', 'D', 'D', 'Q', 'H', '_', 'R', '_', 'P', 'H', 0,
  /* 4391 */ 'S', 'H', 'R', 'A', 'V', '_', 'R', '_', 'P', 'H', 0,
  /* 4402 */ 'M', 'U', 'L', 'Q', '_', 'R', 'S', '_', 'P', 'H', 0,
  /* 4413 */ 'S', 'H', 'L', 'L', '_', 'S', '_', 'P', 'H', 0,
  /* 4423 */ 'M', 'U', 'L', '_', 'S', '_', 'P', 'H', 0,
  /* 4432 */ 'S', 'U', 'B', 'Q', '_', 'S', '_', 'P', 'H', 0,
  /* 4442 */ 'A', 'D', 'D', 'Q', '_', 'S', '_', 'P', 'H', 0,
  /* 4452 */ 'M', 'U', 'L', 'Q', '_', 'S', '_', 'P', 'H', 0,
  /* 4462 */ 'A', 'B', 'S', 'Q', '_', 'S', '_', 'P', 'H', 0,
  /* 4472 */ 'S', 'U', 'B', 'U', '_', 'S', '_', 'P', 'H', 0,
  /* 4482 */ 'A', 'D', 'D', 'U', '_', 'S', '_', 'P', 'H', 0,
  /* 4492 */ 'S', 'H', 'L', 'L', 'V', '_', 'S', '_', 'P', 'H', 0,
  /* 4503 */ 'C', 'M', 'P', '_', 'L', 'T', '_', 'P', 'H', 0,
  /* 4513 */ 'S', 'U', 'B', 'U', '_', 'P', 'H', 0,
  /* 4521 */ 'A', 'D', 'D', 'U', '_', 'P', 'H', 0,
  /* 4529 */ 'S', 'H', 'R', 'A', 'V', '_', 'P', 'H', 0,
  /* 4538 */ 'S', 'H', 'L', 'L', 'V', '_', 'P', 'H', 0,
  /* 4547 */ 'R', 'E', 'P', 'L', 'V', '_', 'P', 'H', 0,
  /* 4556 */ 'S', 'H', 'R', 'L', 'V', '_', 'P', 'H', 0,
  /* 4565 */ 'D', 'P', 'A', '_', 'W', '_', 'P', 'H', 0,
  /* 4574 */ 'M', 'U', 'L', 'S', 'A', '_', 'W', '_', 'P', 'H', 0,
  /* 4585 */ 'D', 'P', 'A', 'Q', 'X', '_', 'S', 'A', '_', 'W', '_', 'P', 'H', 0,
  /* 4599 */ 'D', 'P', 'S', 'Q', 'X', '_', 'S', 'A', '_', 'W', '_', 'P', 'H', 0,
  /* 4613 */ 'D', 'P', 'S', '_', 'W', '_', 'P', 'H', 0,
  /* 4622 */ 'D', 'P', 'A', 'Q', '_', 'S', '_', 'W', '_', 'P', 'H', 0,
  /* 4634 */ 'M', 'U', 'L', 'S', 'A', 'Q', '_', 'S', '_', 'W', '_', 'P', 'H', 0,
  /* 4648 */ 'D', 'P', 'S', 'Q', '_', 'S', '_', 'W', '_', 'P', 'H', 0,
  /* 4660 */ 'D', 'P', 'A', 'Q', 'X', '_', 'S', '_', 'W', '_', 'P', 'H', 0,
  /* 4673 */ 'D', 'P', 'S', 'Q', 'X', '_', 'S', '_', 'W', '_', 'P', 'H', 0,
  /* 4686 */ 'D', 'P', 'A', 'X', '_', 'W', '_', 'P', 'H', 0,
  /* 4696 */ 'D', 'P', 'S', 'X', '_', 'W', '_', 'P', 'H', 0,
  /* 4706 */ 'S', 'H', 0,
  /* 4709 */ 'E', 'X', 'T', 'R', '_', 'S', '_', 'H', 0,
  /* 4718 */ 'E', 'X', 'T', 'R', 'V', '_', 'S', '_', 'H', 0,
  /* 4728 */ 'M', 'F', 'H', 'I', 0,
  /* 4733 */ 'P', 'H', 'I', 0,
  /* 4737 */ 'M', 'T', 'H', 'I', 0,
  /* 4742 */ 'M', 'O', 'V', 'N', '_', 'I', '6', '4', '_', 'I', 0,
  /* 4753 */ 'M', 'O', 'V', 'Z', '_', 'I', '6', '4', '_', 'I', 0,
  /* 4764 */ 'M', 'O', 'V', 'F', '_', 'I', 0,
  /* 4771 */ 'M', 'O', 'V', 'N', '_', 'I', '_', 'I', 0,
  /* 4780 */ 'M', 'O', 'V', 'Z', '_', 'I', '_', 'I', 0,
  /* 4789 */ 'M', 'O', 'V', 'T', '_', 'I', 0,
  /* 4796 */ 'J', 0,
  /* 4798 */ 'J', 'A', 'L', 0,
  /* 4802 */ 'B', 'G', 'E', 'Z', 'A', 'L', 0,
  /* 4809 */ 'B', 'L', 'T', 'Z', 'A', 'L', 0,
  /* 4816 */ 'M', 'U', 'L', 'E', 'U', '_', 'S', '_', 'P', 'H', '_', 'Q', 'B', 'L', 0,
  /* 4831 */ 'P', 'R', 'E', 'C', 'E', 'U', '_', 'P', 'H', '_', 'Q', 'B', 'L', 0,
  /* 4845 */ 'P', 'R', 'E', 'C', 'E', 'Q', 'U', '_', 'P', 'H', '_', 'Q', 'B', 'L', 0,
  /* 4860 */ 'D', 'P', 'A', 'U', '_', 'H', '_', 'Q', 'B', 'L', 0,
  /* 4871 */ 'D', 'P', 'S', 'U', '_', 'H', '_', 'Q', 'B', 'L', 0,
  /* 4882 */ 'L', 'D', 'L', 0,
  /* 4886 */ 'S', 'D', 'L', 0,
  /* 4890 */ 'G', 'C', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 4899 */ 'P', 'R', 'O', 'L', 'O', 'G', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 4912 */ 'E', 'H', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 4921 */ 'M', 'A', 'Q', '_', 'S', 'A', '_', 'W', '_', 'P', 'H', 'L', 0,
  /* 4934 */ 'P', 'R', 'E', 'C', 'E', 'Q', '_', 'W', '_', 'P', 'H', 'L', 0,
  /* 4947 */ 'M', 'A', 'Q', '_', 'S', '_', 'W', '_', 'P', 'H', 'L', 0,
  /* 4959 */ 'M', 'U', 'L', 'E', 'Q', '_', 'S', '_', 'W', '_', 'P', 'H', 'L', 0,
  /* 4973 */ 'T', 'A', 'I', 'L', 'C', 'A', 'L', 'L', 0,
  /* 4982 */ 'K', 'I', 'L', 'L', 0,
  /* 4987 */ 'D', 'S', 'L', 'L', 0,
  /* 4992 */ 'D', 'S', 'R', 'L', 0,
  /* 4997 */ 'M', 'U', 'L', 0,
  /* 5001 */ 'L', 'W', 'L', 0,
  /* 5005 */ 'S', 'W', 'L', 0,
  /* 5009 */ 'C', 'V', 'T', '_', 'D', '6', '4', '_', 'L', 0,
  /* 5019 */ 'C', 'V', 'T', '_', 'S', '_', 'L', 0,
  /* 5027 */ 'I', 'N', 'L', 'I', 'N', 'E', 'A', 'S', 'M', 0,
  /* 5037 */ 'D', 'I', 'N', 'S', 'M', 0,
  /* 5043 */ 'D', 'E', 'X', 'T', 'M', 0,
  /* 5049 */ 'B', 'A', 'L', 'I', 'G', 'N', 0,
  /* 5056 */ 'A', 'D', 'J', 'C', 'A', 'L', 'L', 'S', 'T', 'A', 'C', 'K', 'D', 'O', 'W', 'N', 0,
  /* 5073 */ 'B', 'P', 'O', 'S', 'G', 'E', '3', '2', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 5089 */ 'D', 'P', 'A', '_', 'W', '_', 'P', 'H', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 5105 */ 'M', 'U', 'L', 'S', 'A', '_', 'W', '_', 'P', 'H', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 5123 */ 'D', 'P', 'A', 'Q', 'X', '_', 'S', 'A', '_', 'W', '_', 'P', 'H', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 5144 */ 'D', 'P', 'S', 'Q', 'X', '_', 'S', 'A', '_', 'W', '_', 'P', 'H', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 5165 */ 'D', 'P', 'S', '_', 'W', '_', 'P', 'H', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 5181 */ 'D', 'P', 'A', 'Q', '_', 'S', '_', 'W', '_', 'P', 'H', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 5200 */ 'M', 'U', 'L', 'S', 'A', 'Q', '_', 'S', '_', 'W', '_', 'P', 'H', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 5221 */ 'D', 'P', 'S', 'Q', '_', 'S', '_', 'W', '_', 'P', 'H', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 5240 */ 'D', 'P', 'A', 'Q', 'X', '_', 'S', '_', 'W', '_', 'P', 'H', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 5260 */ 'D', 'P', 'S', 'Q', 'X', '_', 'S', '_', 'W', '_', 'P', 'H', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 5280 */ 'D', 'P', 'A', 'X', '_', 'W', '_', 'P', 'H', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 5297 */ 'D', 'P', 'S', 'X', '_', 'W', '_', 'P', 'H', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 5314 */ 'D', 'P', 'A', 'U', '_', 'H', '_', 'Q', 'B', 'L', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 5332 */ 'D', 'P', 'S', 'U', '_', 'H', '_', 'Q', 'B', 'L', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 5350 */ 'M', 'A', 'Q', '_', 'S', 'A', '_', 'W', '_', 'P', 'H', 'L', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 5370 */ 'M', 'A', 'Q', '_', 'S', '_', 'W', '_', 'P', 'H', 'L', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 5389 */ 'S', 'H', 'I', 'L', 'O', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 5402 */ 'M', 'T', 'H', 'L', 'I', 'P', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 5416 */ 'M', 'S', 'U', 'B', '_', 'D', 'S', 'P', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 5432 */ 'M', 'A', 'D', 'D', '_', 'D', 'S', 'P', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 5448 */ 'M', 'U', 'L', 'T', '_', 'D', 'S', 'P', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 5464 */ 'M', 'S', 'U', 'B', 'U', '_', 'D', 'S', 'P', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 5481 */ 'M', 'A', 'D', 'D', 'U', '_', 'D', 'S', 'P', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 5498 */ 'M', 'U', 'L', 'T', 'U', '_', 'D', 'S', 'P', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 5515 */ 'D', 'P', 'A', 'U', '_', 'H', '_', 'Q', 'B', 'R', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 5533 */ 'D', 'P', 'S', 'U', '_', 'H', '_', 'Q', 'B', 'R', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 5551 */ 'M', 'A', 'Q', '_', 'S', 'A', '_', 'W', '_', 'P', 'H', 'R', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 5571 */ 'M', 'A', 'Q', '_', 'S', '_', 'W', '_', 'P', 'H', 'R', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 5590 */ 'S', 'H', 'I', 'L', 'O', 'V', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 5604 */ 'D', 'P', 'A', 'Q', '_', 'S', 'A', '_', 'L', '_', 'W', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 5623 */ 'D', 'P', 'S', 'Q', '_', 'S', 'A', '_', 'L', '_', 'W', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 5642 */ 'D', 'C', 'L', 'O', 0,
  /* 5647 */ 'M', 'F', 'L', 'O', 0,
  /* 5652 */ 'S', 'H', 'I', 'L', 'O', 0,
  /* 5658 */ 'M', 'T', 'L', 'O', 0,
  /* 5663 */ 'E', 'X', 'T', 'P', 'D', 'P', 0,
  /* 5670 */ 'M', 'T', 'H', 'L', 'I', 'P', 0,
  /* 5677 */ 'M', 'F', 'C', '0', '_', '3', 'O', 'P', 0,
  /* 5686 */ 'M', 'T', 'C', '0', '_', '3', 'O', 'P', 0,
  /* 5695 */ 'M', 'F', 'C', '2', '_', '3', 'O', 'P', 0,
  /* 5704 */ 'M', 'T', 'C', '2', '_', '3', 'O', 'P', 0,
  /* 5713 */ 'N', 'O', 'P', 0,
  /* 5717 */ 'R', 'D', 'D', 'S', 'P', 0,
  /* 5723 */ 'W', 'R', 'D', 'S', 'P', 0,
  /* 5729 */ 'M', 'S', 'U', 'B', '_', 'D', 'S', 'P', 0,
  /* 5738 */ 'M', 'A', 'D', 'D', '_', 'D', 'S', 'P', 0,
  /* 5747 */ 'M', 'U', 'L', 'T', '_', 'D', 'S', 'P', 0,
  /* 5756 */ 'M', 'S', 'U', 'B', 'U', '_', 'D', 'S', 'P', 0,
  /* 5766 */ 'M', 'A', 'D', 'D', 'U', '_', 'D', 'S', 'P', 0,
  /* 5776 */ 'M', 'U', 'L', 'T', 'U', '_', 'D', 'S', 'P', 0,
  /* 5786 */ 'E', 'X', 'T', 'P', 0,
  /* 5791 */ 'A', 'D', 'J', 'C', 'A', 'L', 'L', 'S', 'T', 'A', 'C', 'K', 'U', 'P', 0,
  /* 5806 */ 'B', 'E', 'Q', 0,
  /* 5810 */ 'M', 'U', 'L', 'E', 'U', '_', 'S', '_', 'P', 'H', '_', 'Q', 'B', 'R', 0,
  /* 5825 */ 'P', 'R', 'E', 'C', 'E', 'U', '_', 'P', 'H', '_', 'Q', 'B', 'R', 0,
  /* 5839 */ 'P', 'R', 'E', 'C', 'E', 'Q', 'U', '_', 'P', 'H', '_', 'Q', 'B', 'R', 0,
  /* 5854 */ 'D', 'P', 'A', 'U', '_', 'H', '_', 'Q', 'B', 'R', 0,
  /* 5865 */ 'D', 'P', 'S', 'U', '_', 'H', '_', 'Q', 'B', 'R', 0,
  /* 5876 */ 'B', 'A', 'L', '_', 'B', 'R', 0,
  /* 5883 */ 'M', 'O', 'V', 'C', 'C', 'R', 'T', 'o', 'C', 'C', 'R', 0,
  /* 5895 */ 'L', 'D', 'R', 0,
  /* 5899 */ 'S', 'D', 'R', 0,
  /* 5903 */ 'M', 'A', 'Q', '_', 'S', 'A', '_', 'W', '_', 'P', 'H', 'R', 0,
  /* 5916 */ 'P', 'R', 'E', 'C', 'E', 'Q', '_', 'W', '_', 'P', 'H', 'R', 0,
  /* 5929 */ 'M', 'A', 'Q', '_', 'S', '_', 'W', '_', 'P', 'H', 'R', 0,
  /* 5941 */ 'M', 'U', 'L', 'E', 'Q', '_', 'S', '_', 'W', '_', 'P', 'H', 'R', 0,
  /* 5955 */ 'J', 'R', 0,
  /* 5958 */ 'J', 'A', 'L', 'R', 0,
  /* 5963 */ 'N', 'O', 'R', 0,
  /* 5967 */ 'X', 'O', 'R', 0,
  /* 5971 */ 'D', 'R', 'O', 'T', 'R', 0,
  /* 5977 */ 'R', 'D', 'H', 'W', 'R', 0,
  /* 5983 */ 'L', 'W', 'R', 0,
  /* 5987 */ 'S', 'W', 'R', 0,
  /* 5991 */ 'T', 'A', 'I', 'L', 'C', 'A', 'L', 'L', '6', '4', '_', 'R', 0,
  /* 6004 */ 'T', 'A', 'I', 'L', 'C', 'A', 'L', 'L', '_', 'R', 0,
  /* 6015 */ 'D', 'I', 'N', 'S', 0,
  /* 6020 */ 'C', 'O', 'P', 'Y', '_', 'T', 'O', '_', 'R', 'E', 'G', 'C', 'L', 'A', 'S', 'S', 0,
  /* 6037 */ 'C', 'V', 'T', '_', 'D', '3', '2', '_', 'S', 0,
  /* 6047 */ 'C', 'V', 'T', '_', 'D', '6', '4', '_', 'S', 0,
  /* 6057 */ 'M', 'O', 'V', 'N', '_', 'I', '6', '4', '_', 'S', 0,
  /* 6068 */ 'M', 'O', 'V', 'Z', '_', 'I', '6', '4', '_', 'S', 0,
  /* 6079 */ 'F', 'S', 'U', 'B', '_', 'S', 0,
  /* 6086 */ 'N', 'M', 'S', 'U', 'B', '_', 'S', 0,
  /* 6094 */ 'F', 'A', 'D', 'D', '_', 'S', 0,
  /* 6101 */ 'N', 'M', 'A', 'D', 'D', '_', 'S', 0,
  /* 6109 */ 'M', 'O', 'V', 'F', '_', 'S', 0,
  /* 6116 */ 'F', 'N', 'E', 'G', '_', 'S', 0,
  /* 6123 */ 'M', 'O', 'V', 'N', '_', 'I', '_', 'S', 0,
  /* 6132 */ 'M', 'O', 'V', 'Z', '_', 'I', '_', 'S', 0,
  /* 6141 */ 'F', 'M', 'U', 'L', '_', 'S', 0,
  /* 6148 */ 'T', 'R', 'U', 'N', 'C', '_', 'L', '_', 'S', 0,
  /* 6158 */ 'R', 'O', 'U', 'N', 'D', '_', 'L', '_', 'S', 0,
  /* 6168 */ 'C', 'E', 'I', 'L', '_', 'L', '_', 'S', 0,
  /* 6177 */ 'F', 'L', 'O', 'O', 'R', '_', 'L', '_', 'S', 0,
  /* 6187 */ 'C', 'V', 'T', '_', 'L', '_', 'S', 0,
  /* 6195 */ 'F', 'A', 'B', 'S', '_', 'S', 0,
  /* 6202 */ 'F', 'S', 'Q', 'R', 'T', '_', 'S', 0,
  /* 6210 */ 'M', 'O', 'V', 'T', '_', 'S', 0,
  /* 6217 */ 'F', 'D', 'I', 'V', '_', 'S', 0,
  /* 6224 */ 'F', 'M', 'O', 'V', '_', 'S', 0,
  /* 6231 */ 'T', 'R', 'U', 'N', 'C', '_', 'W', '_', 'S', 0,
  /* 6241 */ 'R', 'O', 'U', 'N', 'D', '_', 'W', '_', 'S', 0,
  /* 6251 */ 'C', 'E', 'I', 'L', '_', 'W', '_', 'S', 0,
  /* 6260 */ 'F', 'L', 'O', 'O', 'R', '_', 'W', '_', 'S', 0,
  /* 6270 */ 'C', 'V', 'T', '_', 'W', '_', 'S', 0,
  /* 6278 */ 'B', 'C', '1', 'T', 0,
  /* 6283 */ 'R', 'E', 'T', 0,
  /* 6287 */ 'S', 'L', 'T', 0,
  /* 6291 */ 'D', 'M', 'U', 'L', 'T', 0,
  /* 6297 */ 'L', 'I', 'F', 'E', 'T', 'I', 'M', 'E', '_', 'S', 'T', 'A', 'R', 'T', 0,
  /* 6312 */ 'D', 'E', 'X', 'T', 0,
  /* 6317 */ 'M', 'S', 'U', 'B', 'U', 0,
  /* 6323 */ 'M', 'A', 'D', 'D', 'U', 0,
  /* 6329 */ 'D', 'I', 'N', 'S', 'U', 0,
  /* 6335 */ 'D', 'E', 'X', 'T', 'U', 0,
  /* 6341 */ 'D', 'S', 'R', 'A', 'V', 0,
  /* 6347 */ 'B', 'I', 'T', 'R', 'E', 'V', 0,
  /* 6354 */ 'D', 'S', 'D', 'I', 'V', 0,
  /* 6360 */ 'D', 'U', 'D', 'I', 'V', 0,
  /* 6366 */ 'D', 'S', 'L', 'L', 'V', 0,
  /* 6372 */ 'D', 'S', 'R', 'L', 'V', 0,
  /* 6378 */ 'S', 'H', 'I', 'L', 'O', 'V', 0,
  /* 6385 */ 'E', 'X', 'T', 'P', 'D', 'P', 'V', 0,
  /* 6393 */ 'E', 'X', 'T', 'P', 'V', 0,
  /* 6399 */ 'D', 'R', 'O', 'T', 'R', 'V', 0,
  /* 6406 */ 'I', 'N', 'S', 'V', 0,
  /* 6411 */ 'L', 'W', 0,
  /* 6414 */ 'S', 'W', 0,
  /* 6417 */ 'C', 'V', 'T', '_', 'D', '3', '2', '_', 'W', 0,
  /* 6427 */ 'C', 'V', 'T', '_', 'D', '6', '4', '_', 'W', 0,
  /* 6437 */ 'P', 'R', 'E', 'C', 'R', '_', 'S', 'R', 'A', '_', 'P', 'H', '_', 'W', 0,
  /* 6452 */ 'P', 'R', 'E', 'C', 'R', 'Q', '_', 'P', 'H', '_', 'W', 0,
  /* 6464 */ 'P', 'R', 'E', 'C', 'R', '_', 'S', 'R', 'A', '_', 'R', '_', 'P', 'H', '_', 'W', 0,
  /* 6481 */ 'P', 'R', 'E', 'C', 'R', 'Q', '_', 'R', 'S', '_', 'P', 'H', '_', 'W', 0,
  /* 6496 */ 'S', 'U', 'B', 'Q', 'H', '_', 'W', 0,
  /* 6504 */ 'A', 'D', 'D', 'Q', 'H', '_', 'W', 0,
  /* 6512 */ 'D', 'P', 'A', 'Q', '_', 'S', 'A', '_', 'L', '_', 'W', 0,
  /* 6524 */ 'D', 'P', 'S', 'Q', '_', 'S', 'A', '_', 'L', '_', 'W', 0,
  /* 6536 */ 'E', 'X', 'T', 'R', '_', 'W', 0,
  /* 6543 */ 'S', 'H', 'R', 'A', '_', 'R', '_', 'W', 0,
  /* 6552 */ 'S', 'U', 'B', 'Q', 'H', '_', 'R', '_', 'W', 0,
  /* 6562 */ 'A', 'D', 'D', 'Q', 'H', '_', 'R', '_', 'W', 0,
  /* 6572 */ 'E', 'X', 'T', 'R', '_', 'R', '_', 'W', 0,
  /* 6581 */ 'S', 'H', 'R', 'A', 'V', '_', 'R', '_', 'W', 0,
  /* 6591 */ 'E', 'X', 'T', 'R', 'V', '_', 'R', '_', 'W', 0,
  /* 6601 */ 'M', 'U', 'L', 'Q', '_', 'R', 'S', '_', 'W', 0,
  /* 6611 */ 'E', 'X', 'T', 'R', '_', 'R', 'S', '_', 'W', 0,
  /* 6621 */ 'E', 'X', 'T', 'R', 'V', '_', 'R', 'S', '_', 'W', 0,
  /* 6632 */ 'S', 'H', 'L', 'L', '_', 'S', '_', 'W', 0,
  /* 6641 */ 'S', 'U', 'B', 'Q', '_', 'S', '_', 'W', 0,
  /* 6650 */ 'A', 'D', 'D', 'Q', '_', 'S', '_', 'W', 0,
  /* 6659 */ 'M', 'U', 'L', 'Q', '_', 'S', '_', 'W', 0,
  /* 6668 */ 'A', 'B', 'S', 'Q', '_', 'S', '_', 'W', 0,
  /* 6677 */ 'C', 'V', 'T', '_', 'S', '_', 'W', 0,
  /* 6685 */ 'S', 'H', 'L', 'L', 'V', '_', 'S', '_', 'W', 0,
  /* 6695 */ 'E', 'X', 'T', 'R', 'V', '_', 'W', 0,
  /* 6703 */ 'L', 'H', 'X', 0,
  /* 6707 */ 'L', 'B', 'U', 'X', 0,
  /* 6712 */ 'L', 'W', 'X', 0,
  /* 6716 */ 'C', 'O', 'P', 'Y', 0,
  /* 6721 */ 'B', 'G', 'E', 'Z', 0,
  /* 6726 */ 'B', 'L', 'E', 'Z', 0,
  /* 6731 */ 'D', 'C', 'L', 'Z', 0,
  /* 6736 */ 'B', 'G', 'T', 'Z', 0,
  /* 6741 */ 'B', 'L', 'T', 'Z', 0,
  /* 6746 */ 'S', 'e', 'l', 'B', 'n', 'e', 'Z', 0,
  /* 6754 */ 'S', 'e', 'l', 'B', 'e', 'q', 'Z', 0,
  /* 6762 */ 'D', 'y', 'n', 'A', 'l', 'l', 'o', 'c', 0,
  /* 6771 */ 'L', 'o', 'a', 'd', 'I', 'm', 'm', '3', '2', 'R', 'e', 'g', 0,
  /* 6784 */ 'L', 'o', 'a', 'd', 'A', 'd', 'd', 'r', '3', '2', 'R', 'e', 'g', 0,
  /* 6798 */ 'D', 'A', 'D', 'D', 'i', 0,
  /* 6804 */ 'D', 'A', 'N', 'D', 'i', 0,
  /* 6810 */ 'X', 'O', 'R', 'i', 0,
  /* 6815 */ 'S', 'L', 'T', 'i', 0,
  /* 6820 */ 'L', 'U', 'i', 0,
  /* 6824 */ 'S', 'e', 'l', 'T', 'B', 't', 'n', 'e', 'Z', 'C', 'm', 'p', 'i', 0,
  /* 6838 */ 'S', 'e', 'l', 'T', 'B', 't', 'e', 'q', 'Z', 'C', 'm', 'p', 'i', 0,
  /* 6852 */ 'S', 'e', 'l', 'T', 'B', 't', 'n', 'e', 'Z', 'S', 'l', 't', 'i', 0,
  /* 6866 */ 'S', 'e', 'l', 'T', 'B', 't', 'e', 'q', 'Z', 'S', 'l', 't', 'i', 0,
  /* 6880 */ 'L', 'o', 'a', 'd', 'A', 'd', 'd', 'r', '3', '2', 'I', 'm', 'm', 0,
  /* 6894 */ 'S', 'e', 'l', 'T', 'B', 't', 'n', 'e', 'Z', 'C', 'm', 'p', 0,
  /* 6907 */ 'S', 'e', 'l', 'T', 'B', 't', 'e', 'q', 'Z', 'C', 'm', 'p', 0,
  /* 6920 */ 'S', 'e', 'l', 'T', 'B', 't', 'n', 'e', 'Z', 'S', 'l', 't', 0,
  /* 6933 */ 'S', 'e', 'l', 'T', 'B', 't', 'e', 'q', 'Z', 'S', 'l', 't', 0,
  /* 6946 */ 'L', 'B', 'u', 0,
  /* 6950 */ 'D', 'S', 'U', 'B', 'u', 0,
  /* 6956 */ 'D', 'A', 'D', 'D', 'u', 0,
  /* 6962 */ 'L', 'H', 'u', 0,
  /* 6966 */ 'S', 'L', 'T', 'u', 0,
  /* 6971 */ 'D', 'M', 'U', 'L', 'T', 'u', 0,
  /* 6978 */ 'D', 'A', 'D', 'D', 'i', 'u', 0,
  /* 6985 */ 'L', 'E', 'A', '_', 'A', 'D', 'D', 'i', 'u', 0,
  /* 6995 */ 'S', 'L', 'T', 'i', 'u', 0,
  /* 7001 */ 'S', 'e', 'l', 'T', 'B', 't', 'n', 'e', 'Z', 'S', 'l', 't', 'i', 'u', 0,
  /* 7016 */ 'S', 'e', 'l', 'T', 'B', 't', 'e', 'q', 'Z', 'S', 'l', 't', 'i', 'u', 0,
  /* 7031 */ 'S', 'e', 'l', 'T', 'B', 't', 'n', 'e', 'Z', 'S', 'l', 't', 'u', 0,
  /* 7045 */ 'S', 'e', 'l', 'T', 'B', 't', 'e', 'q', 'Z', 'S', 'l', 't', 'u', 0,
};

extern const unsigned MipsInstrNameIndices[] = {
    4733U, 5027U, 4899U, 4912U, 4890U, 4982U, 4147U, 4162U, 
    4134U, 4176U, 6020U, 4119U, 4085U, 6716U, 4098U, 6297U, 
    4069U, 4462U, 3866U, 6668U, 4032U, 4275U, 4380U, 6562U, 
    6504U, 4341U, 4442U, 6650U, 4015U, 3746U, 3844U, 4521U, 
    3940U, 4482U, 3886U, 4021U, 6799U, 6979U, 6957U, 5056U, 
    5791U, 4050U, 554U, 6805U, 4062U, 1561U, 3235U, 400U, 
    2722U, 1073U, 2976U, 2520U, 3410U, 1484U, 3146U, 323U, 
    2633U, 965U, 2887U, 2447U, 3325U, 1525U, 3193U, 364U, 
    2680U, 1006U, 2934U, 2486U, 3370U, 1504U, 3169U, 343U, 
    2656U, 985U, 2910U, 2466U, 3347U, 1601U, 3281U, 440U, 
    2768U, 1113U, 3022U, 2558U, 3454U, 1464U, 3123U, 303U, 
    2610U, 945U, 2864U, 2428U, 3303U, 1581U, 3258U, 420U, 
    2745U, 1093U, 2999U, 2539U, 3432U, 1545U, 3216U, 384U, 
    2703U, 1057U, 2957U, 2505U, 3392U, 1944U, 1860U, 1958U, 
    1809U, 2388U, 2327U, 3688U, 5049U, 5876U, 4129U, 6278U, 
    5806U, 1215U, 6721U, 1281U, 4802U, 6736U, 1295U, 6347U, 
    6726U, 1288U, 6741U, 1302U, 4809U, 4105U, 852U, 294U, 
    5073U, 1987U, 2000U, 1974U, 2022U, 1652U, 2050U, 1682U, 
    2080U, 2111U, 2135U, 2008U, 1637U, 2036U, 1667U, 2064U, 
    2096U, 2126U, 858U, 697U, 6168U, 261U, 819U, 6251U, 
    10U, 5643U, 6732U, 3787U, 3701U, 3896U, 3800U, 3714U, 
    3909U, 3812U, 3726U, 3921U, 4349U, 4256U, 4503U, 4109U, 
    21U, 6037U, 6417U, 5009U, 6047U, 6427U, 720U, 6187U, 
    190U, 748U, 5019U, 6677U, 284U, 842U, 6270U, 4031U, 
    6798U, 6978U, 6956U, 6804U, 5642U, 6731U, 6312U, 5043U, 
    6335U, 6015U, 5037U, 6329U, 1167U, 15U, 1191U, 1179U, 
    26U, 1203U, 6291U, 6971U, 4585U, 5123U, 4660U, 5240U, 
    6512U, 5604U, 4622U, 5181U, 4860U, 5314U, 5854U, 5515U, 
    4686U, 5280U, 4565U, 5089U, 4599U, 5144U, 4673U, 5260U, 
    6524U, 5623U, 4648U, 5221U, 4871U, 5332U, 5865U, 5533U, 
    4696U, 5297U, 4613U, 5165U, 5971U, 6399U, 4190U, 6354U, 
    4041U, 4987U, 459U, 482U, 6366U, 3675U, 78U, 6341U, 
    4992U, 466U, 6372U, 6950U, 6360U, 2295U, 2273U, 6762U, 
    1318U, 6313U, 5786U, 5663U, 6385U, 6393U, 6621U, 6591U, 
    4718U, 6695U, 6611U, 6572U, 4709U, 6536U, 871U, 181U, 
    739U, 6195U, 104U, 605U, 6094U, 172U, 730U, 473U, 
    219U, 777U, 6217U, 708U, 6177U, 272U, 830U, 6260U, 
    228U, 786U, 6224U, 163U, 664U, 6141U, 132U, 633U, 
    6116U, 200U, 758U, 6202U, 85U, 586U, 6079U, 6016U, 
    6406U, 4796U, 4798U, 5958U, 1226U, 5955U, 1221U, 2152U, 
    2144U, 2187U, 2159U, 3690U, 544U, 2832U, 6707U, 3475U, 
    6946U, 1349U, 3096U, 3599U, 4047U, 0U, 492U, 2790U, 
    4882U, 3525U, 5895U, 3559U, 42U, 506U, 2810U, 3501U, 
    6985U, 1374U, 4204U, 895U, 2848U, 6703U, 3513U, 6962U, 
    1355U, 3105U, 3606U, 4979U, 4046U, 3500U, 3539U, 54U, 
    522U, 6820U, 1343U, 6411U, 1271U, 3080U, 32U, 2576U, 
    5001U, 1141U, 3044U, 3545U, 5983U, 1253U, 3062U, 3573U, 
    6712U, 66U, 2592U, 3587U, 1368U, 3114U, 1711U, 1775U, 
    1743U, 1792U, 1933U, 6880U, 6784U, 6771U, 1828U, 1876U, 
    4036U, 6323U, 5766U, 5481U, 114U, 615U, 5738U, 5432U, 
    6102U, 4921U, 5350U, 5903U, 5551U, 4947U, 5370U, 5929U, 
    5571U, 5677U, 1168U, 16U, 5695U, 1192U, 4728U, 905U, 
    5647U, 1153U, 3998U, 5883U, 123U, 624U, 4764U, 1026U, 
    6109U, 560U, 4742U, 919U, 6057U, 141U, 642U, 4771U, 
    1035U, 6123U, 210U, 768U, 4789U, 1132U, 6210U, 573U, 
    4753U, 932U, 6068U, 152U, 653U, 4780U, 1046U, 6132U, 
    4005U, 6317U, 5756U, 5464U, 95U, 596U, 5729U, 5416U, 
    6087U, 5686U, 1180U, 27U, 5704U, 1204U, 4737U, 912U, 
    5670U, 5402U, 5658U, 1160U, 4997U, 4959U, 5941U, 4816U, 
    5810U, 4402U, 6601U, 4452U, 6659U, 4634U, 5200U, 4574U, 
    5105U, 6292U, 5776U, 5498U, 5747U, 5448U, 6972U, 4326U, 
    4423U, 2173U, 2180U, 1620U, 1394U, 2240U, 2362U, 2261U, 
    2414U, 113U, 614U, 6101U, 94U, 595U, 6086U, 5713U, 
    5963U, 1233U, 2220U, 2251U, 5964U, 1234U, 6811U, 1330U, 
    2339U, 4316U, 4284U, 3755U, 4845U, 3628U, 5839U, 3659U, 
    4934U, 5916U, 4831U, 3613U, 5825U, 3644U, 4240U, 6452U, 
    4215U, 6481U, 4228U, 6437U, 6464U, 4054U, 3984U, 5717U, 
    5977U, 1245U, 4547U, 3966U, 4300U, 3771U, 6283U, 5972U, 
    6400U, 685U, 6158U, 249U, 807U, 6241U, 1448U, 1412U, 
    3680U, 1404U, 3995U, 549U, 2840U, 3481U, 4018U, 4027U, 
    3493U, 3487U, 4082U, 5U, 499U, 2800U, 6355U, 4886U, 
    3532U, 5899U, 3566U, 48U, 514U, 2821U, 3507U, 3686U, 
    538U, 4200U, 889U, 4706U, 900U, 2856U, 5652U, 6378U, 
    5590U, 5389U, 4538U, 3957U, 4492U, 6685U, 4292U, 3763U, 
    4413U, 6632U, 4529U, 3948U, 4391U, 3855U, 6581U, 4207U, 
    3693U, 4359U, 3823U, 6543U, 4556U, 3975U, 4308U, 3779U, 
    3519U, 4988U, 483U, 1309U, 6367U, 6287U, 1265U, 6815U, 
    1336U, 6995U, 1386U, 6966U, 1361U, 3676U, 6342U, 4993U, 
    6373U, 4001U, 4266U, 4369U, 6552U, 6496U, 4333U, 4432U, 
    6641U, 3737U, 3833U, 4513U, 3932U, 4472U, 3876U, 6951U, 
    60U, 530U, 6414U, 1276U, 3088U, 37U, 2584U, 5005U, 
    1147U, 3053U, 3552U, 5987U, 1259U, 3071U, 3580U, 72U, 
    2601U, 3593U, 4010U, 1435U, 1425U, 1727U, 6754U, 6746U, 
    6907U, 6838U, 6933U, 6866U, 7016U, 7045U, 6894U, 6824U, 
    6920U, 6852U, 7001U, 7031U, 1759U, 1697U, 2305U, 2195U, 
    2230U, 1902U, 1917U, 2207U, 2401U, 1630U, 2284U, 1704U, 
    2316U, 2375U, 1844U, 1889U, 4973U, 5991U, 6004U, 673U, 
    6148U, 237U, 795U, 6231U, 6361U, 5723U, 4195U, 5967U, 
    1239U, 6810U, 1329U, 2350U, 
};

static inline void InitMipsMCInstrInfo(MCInstrInfo *II) {
  II->InitMCInstrInfo(MipsInsts, MipsInstrNameIndices, MipsInstrNameData, 708);
}

} // End llvm namespace 
#endif // GET_INSTRINFO_MC_DESC


#ifdef GET_INSTRINFO_HEADER
#undef GET_INSTRINFO_HEADER
namespace llvm {
struct MipsGenInstrInfo : public TargetInstrInfoImpl {
  explicit MipsGenInstrInfo(int SO = -1, int DO = -1);
};
} // End llvm namespace 
#endif // GET_INSTRINFO_HEADER


#ifdef GET_INSTRINFO_CTOR
#undef GET_INSTRINFO_CTOR
namespace llvm {
extern const MCInstrDesc MipsInsts[];
extern const unsigned MipsInstrNameIndices[];
extern const char MipsInstrNameData[];
MipsGenInstrInfo::MipsGenInstrInfo(int SO, int DO)
  : TargetInstrInfoImpl(SO, DO) {
  InitMCInstrInfo(MipsInsts, MipsInstrNameIndices, MipsInstrNameData, 708);
}
} // End llvm namespace 
#endif // GET_INSTRINFO_CTOR

