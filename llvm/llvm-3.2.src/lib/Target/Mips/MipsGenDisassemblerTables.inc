/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|*  * Mips Disassembler                                                       *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#include "llvm/MC/MCInst.h"
#include "llvm/Support/Debug.h"
#include "llvm/Support/DataTypes.h"
#include "llvm/Support/LEB128.h"
#include "llvm/Support/raw_ostream.h"
#include <assert.h>

namespace llvm {

// Helper function for extracting fields from encoded instructions.
template<typename InsnType>
static InsnType fieldFromInstruction(InsnType insn, unsigned startBit,
                                     unsigned numBits) {
    assert(startBit + numBits <= (sizeof(InsnType)*8) &&
           "Instruction field out of bounds!");
    InsnType fieldMask;
    if (numBits == sizeof(InsnType)*8)
      fieldMask = (InsnType)(-1LL);
    else
      fieldMask = ((1 << numBits) - 1) << startBit;
    return (insn & fieldMask) >> startBit;
}

static const uint8_t DecoderTableMips32[] = {
/* 0 */       MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 3 */       MCD::OPC_FilterValue, 0, 151, 2, // Skip to: 670
/* 7 */       MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 10 */      MCD::OPC_FilterValue, 0, 29, 0, // Skip to: 43
/* 14 */      MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 17 */      MCD::OPC_FilterValue, 0, 188, 18, // Skip to: 4817
/* 21 */      MCD::OPC_CheckPredicate, 0, 10, 0, // Skip to: 35
/* 25 */      MCD::OPC_CheckField, 6, 15, 0, 4, 0, // Skip to: 35
/* 31 */      MCD::OPC_Decode, 247, 3, 0, // Opcode: NOP
/* 35 */      MCD::OPC_CheckPredicate, 0, 170, 18, // Skip to: 4817
/* 39 */      MCD::OPC_Decode, 225, 4, 1, // Opcode: SLL
/* 43 */      MCD::OPC_FilterValue, 1, 39, 0, // Skip to: 86
/* 47 */      MCD::OPC_ExtractField, 16, 5,  // Inst{20-16} ...
/* 50 */      MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 68
/* 54 */      MCD::OPC_CheckPredicate, 0, 151, 18, // Skip to: 4817
/* 58 */      MCD::OPC_CheckField, 6, 5, 0, 145, 18, // Skip to: 4817
/* 64 */      MCD::OPC_Decode, 166, 3, 2, // Opcode: MOVF_I
/* 68 */      MCD::OPC_FilterValue, 1, 137, 18, // Skip to: 4817
/* 72 */      MCD::OPC_CheckPredicate, 0, 133, 18, // Skip to: 4817
/* 76 */      MCD::OPC_CheckField, 6, 5, 0, 127, 18, // Skip to: 4817
/* 82 */      MCD::OPC_Decode, 180, 3, 2, // Opcode: MOVT_I
/* 86 */      MCD::OPC_FilterValue, 2, 27, 0, // Skip to: 117
/* 90 */      MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 93 */      MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 105
/* 97 */      MCD::OPC_CheckPredicate, 0, 108, 18, // Skip to: 4817
/* 101 */     MCD::OPC_Decode, 239, 4, 1, // Opcode: SRL
/* 105 */     MCD::OPC_FilterValue, 1, 100, 18, // Skip to: 4817
/* 109 */     MCD::OPC_CheckPredicate, 1, 96, 18, // Skip to: 4817
/* 113 */     MCD::OPC_Decode, 159, 4, 1, // Opcode: ROTR
/* 117 */     MCD::OPC_FilterValue, 3, 14, 0, // Skip to: 135
/* 121 */     MCD::OPC_CheckPredicate, 0, 84, 18, // Skip to: 4817
/* 125 */     MCD::OPC_CheckField, 21, 5, 0, 78, 18, // Skip to: 4817
/* 131 */     MCD::OPC_Decode, 237, 4, 1, // Opcode: SRA
/* 135 */     MCD::OPC_FilterValue, 4, 14, 0, // Skip to: 153
/* 139 */     MCD::OPC_CheckPredicate, 0, 66, 18, // Skip to: 4817
/* 143 */     MCD::OPC_CheckField, 6, 5, 0, 60, 18, // Skip to: 4817
/* 149 */     MCD::OPC_Decode, 228, 4, 3, // Opcode: SLLV
/* 153 */     MCD::OPC_FilterValue, 6, 27, 0, // Skip to: 184
/* 157 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 160 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 172
/* 164 */     MCD::OPC_CheckPredicate, 0, 41, 18, // Skip to: 4817
/* 168 */     MCD::OPC_Decode, 240, 4, 3, // Opcode: SRLV
/* 172 */     MCD::OPC_FilterValue, 1, 33, 18, // Skip to: 4817
/* 176 */     MCD::OPC_CheckPredicate, 1, 29, 18, // Skip to: 4817
/* 180 */     MCD::OPC_Decode, 160, 4, 3, // Opcode: ROTRV
/* 184 */     MCD::OPC_FilterValue, 7, 14, 0, // Skip to: 202
/* 188 */     MCD::OPC_CheckPredicate, 0, 17, 18, // Skip to: 4817
/* 192 */     MCD::OPC_CheckField, 6, 5, 0, 11, 18, // Skip to: 4817
/* 198 */     MCD::OPC_Decode, 238, 4, 3, // Opcode: SRAV
/* 202 */     MCD::OPC_FilterValue, 8, 14, 0, // Skip to: 220
/* 206 */     MCD::OPC_CheckPredicate, 0, 255, 17, // Skip to: 4817
/* 210 */     MCD::OPC_CheckField, 6, 15, 0, 249, 17, // Skip to: 4817
/* 216 */     MCD::OPC_Decode, 189, 2, 4, // Opcode: JR
/* 220 */     MCD::OPC_FilterValue, 9, 15, 0, // Skip to: 239
/* 224 */     MCD::OPC_CheckPredicate, 0, 237, 17, // Skip to: 4817
/* 228 */     MCD::OPC_CheckField, 6, 15, 224, 7, 230, 17, // Skip to: 4817
/* 235 */     MCD::OPC_Decode, 187, 2, 4, // Opcode: JALR
/* 239 */     MCD::OPC_FilterValue, 10, 14, 0, // Skip to: 257
/* 243 */     MCD::OPC_CheckPredicate, 0, 218, 17, // Skip to: 4817
/* 247 */     MCD::OPC_CheckField, 6, 5, 0, 212, 17, // Skip to: 4817
/* 253 */     MCD::OPC_Decode, 189, 3, 5, // Opcode: MOVZ_I_I
/* 257 */     MCD::OPC_FilterValue, 11, 14, 0, // Skip to: 275
/* 261 */     MCD::OPC_CheckPredicate, 0, 200, 17, // Skip to: 4817
/* 265 */     MCD::OPC_CheckField, 6, 5, 0, 194, 17, // Skip to: 4817
/* 271 */     MCD::OPC_Decode, 175, 3, 5, // Opcode: MOVN_I_I
/* 275 */     MCD::OPC_FilterValue, 15, 14, 0, // Skip to: 293
/* 279 */     MCD::OPC_CheckPredicate, 0, 182, 17, // Skip to: 4817
/* 283 */     MCD::OPC_CheckField, 11, 15, 0, 176, 17, // Skip to: 4817
/* 289 */     MCD::OPC_Decode, 146, 5, 6, // Opcode: SYNC
/* 293 */     MCD::OPC_FilterValue, 16, 20, 0, // Skip to: 317
/* 297 */     MCD::OPC_CheckPredicate, 0, 164, 17, // Skip to: 4817
/* 301 */     MCD::OPC_CheckField, 16, 10, 0, 158, 17, // Skip to: 4817
/* 307 */     MCD::OPC_CheckField, 6, 5, 0, 152, 17, // Skip to: 4817
/* 313 */     MCD::OPC_Decode, 158, 3, 7, // Opcode: MFHI
/* 317 */     MCD::OPC_FilterValue, 17, 14, 0, // Skip to: 335
/* 321 */     MCD::OPC_CheckPredicate, 0, 140, 17, // Skip to: 4817
/* 325 */     MCD::OPC_CheckField, 6, 15, 0, 134, 17, // Skip to: 4817
/* 331 */     MCD::OPC_Decode, 206, 3, 4, // Opcode: MTHI
/* 335 */     MCD::OPC_FilterValue, 18, 20, 0, // Skip to: 359
/* 339 */     MCD::OPC_CheckPredicate, 0, 122, 17, // Skip to: 4817
/* 343 */     MCD::OPC_CheckField, 16, 10, 0, 116, 17, // Skip to: 4817
/* 349 */     MCD::OPC_CheckField, 6, 5, 0, 110, 17, // Skip to: 4817
/* 355 */     MCD::OPC_Decode, 160, 3, 7, // Opcode: MFLO
/* 359 */     MCD::OPC_FilterValue, 19, 14, 0, // Skip to: 377
/* 363 */     MCD::OPC_CheckPredicate, 0, 98, 17, // Skip to: 4817
/* 367 */     MCD::OPC_CheckField, 6, 15, 0, 92, 17, // Skip to: 4817
/* 373 */     MCD::OPC_Decode, 210, 3, 4, // Opcode: MTLO
/* 377 */     MCD::OPC_FilterValue, 24, 36, 0, // Skip to: 417
/* 381 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 384 */     MCD::OPC_FilterValue, 0, 77, 17, // Skip to: 4817
/* 388 */     MCD::OPC_ExtractField, 13, 3,  // Inst{15-13} ...
/* 391 */     MCD::OPC_FilterValue, 0, 70, 17, // Skip to: 4817
/* 395 */     MCD::OPC_CheckPredicate, 0, 10, 0, // Skip to: 409
/* 399 */     MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 409
/* 405 */     MCD::OPC_Decode, 225, 3, 8, // Opcode: MULT
/* 409 */     MCD::OPC_CheckPredicate, 2, 52, 17, // Skip to: 4817
/* 413 */     MCD::OPC_Decode, 228, 3, 9, // Opcode: MULT_DSP
/* 417 */     MCD::OPC_FilterValue, 25, 36, 0, // Skip to: 457
/* 421 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 424 */     MCD::OPC_FilterValue, 0, 37, 17, // Skip to: 4817
/* 428 */     MCD::OPC_ExtractField, 13, 3,  // Inst{15-13} ...
/* 431 */     MCD::OPC_FilterValue, 0, 30, 17, // Skip to: 4817
/* 435 */     MCD::OPC_CheckPredicate, 0, 10, 0, // Skip to: 449
/* 439 */     MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 449
/* 445 */     MCD::OPC_Decode, 230, 3, 8, // Opcode: MULTu
/* 449 */     MCD::OPC_CheckPredicate, 2, 12, 17, // Skip to: 4817
/* 453 */     MCD::OPC_Decode, 226, 3, 9, // Opcode: MULTU_DSP
/* 457 */     MCD::OPC_FilterValue, 26, 14, 0, // Skip to: 475
/* 461 */     MCD::OPC_CheckPredicate, 0, 0, 17, // Skip to: 4817
/* 465 */     MCD::OPC_CheckField, 6, 10, 0, 250, 16, // Skip to: 4817
/* 471 */     MCD::OPC_Decode, 182, 4, 8, // Opcode: SDIV
/* 475 */     MCD::OPC_FilterValue, 27, 14, 0, // Skip to: 493
/* 479 */     MCD::OPC_CheckPredicate, 0, 238, 16, // Skip to: 4817
/* 483 */     MCD::OPC_CheckField, 6, 10, 0, 232, 16, // Skip to: 4817
/* 489 */     MCD::OPC_Decode, 188, 5, 8, // Opcode: UDIV
/* 493 */     MCD::OPC_FilterValue, 32, 13, 0, // Skip to: 510
/* 497 */     MCD::OPC_CheckPredicate, 0, 220, 16, // Skip to: 4817
/* 501 */     MCD::OPC_CheckField, 6, 5, 0, 214, 16, // Skip to: 4817
/* 507 */     MCD::OPC_Decode, 20, 3, // Opcode: ADD
/* 510 */     MCD::OPC_FilterValue, 33, 13, 0, // Skip to: 527
/* 514 */     MCD::OPC_CheckPredicate, 0, 203, 16, // Skip to: 4817
/* 518 */     MCD::OPC_CheckField, 6, 5, 0, 197, 16, // Skip to: 4817
/* 524 */     MCD::OPC_Decode, 38, 3, // Opcode: ADDu
/* 527 */     MCD::OPC_FilterValue, 34, 14, 0, // Skip to: 545
/* 531 */     MCD::OPC_CheckPredicate, 0, 186, 16, // Skip to: 4817
/* 535 */     MCD::OPC_CheckField, 6, 5, 0, 180, 16, // Skip to: 4817
/* 541 */     MCD::OPC_Decode, 241, 4, 3, // Opcode: SUB
/* 545 */     MCD::OPC_FilterValue, 35, 14, 0, // Skip to: 563
/* 549 */     MCD::OPC_CheckPredicate, 0, 168, 16, // Skip to: 4817
/* 553 */     MCD::OPC_CheckField, 6, 5, 0, 162, 16, // Skip to: 4817
/* 559 */     MCD::OPC_Decode, 255, 4, 3, // Opcode: SUBu
/* 563 */     MCD::OPC_FilterValue, 36, 13, 0, // Skip to: 580
/* 567 */     MCD::OPC_CheckPredicate, 0, 150, 16, // Skip to: 4817
/* 571 */     MCD::OPC_CheckField, 6, 5, 0, 144, 16, // Skip to: 4817
/* 577 */     MCD::OPC_Decode, 41, 3, // Opcode: AND
/* 580 */     MCD::OPC_FilterValue, 37, 14, 0, // Skip to: 598
/* 584 */     MCD::OPC_CheckPredicate, 0, 133, 16, // Skip to: 4817
/* 588 */     MCD::OPC_CheckField, 6, 5, 0, 127, 16, // Skip to: 4817
/* 594 */     MCD::OPC_Decode, 252, 3, 3, // Opcode: OR
/* 598 */     MCD::OPC_FilterValue, 38, 14, 0, // Skip to: 616
/* 602 */     MCD::OPC_CheckPredicate, 0, 115, 16, // Skip to: 4817
/* 606 */     MCD::OPC_CheckField, 6, 5, 0, 109, 16, // Skip to: 4817
/* 612 */     MCD::OPC_Decode, 191, 5, 3, // Opcode: XOR
/* 616 */     MCD::OPC_FilterValue, 39, 14, 0, // Skip to: 634
/* 620 */     MCD::OPC_CheckPredicate, 0, 97, 16, // Skip to: 4817
/* 624 */     MCD::OPC_CheckField, 6, 5, 0, 91, 16, // Skip to: 4817
/* 630 */     MCD::OPC_Decode, 248, 3, 3, // Opcode: NOR
/* 634 */     MCD::OPC_FilterValue, 42, 14, 0, // Skip to: 652
/* 638 */     MCD::OPC_CheckPredicate, 0, 79, 16, // Skip to: 4817
/* 642 */     MCD::OPC_CheckField, 6, 5, 0, 73, 16, // Skip to: 4817
/* 648 */     MCD::OPC_Decode, 229, 4, 3, // Opcode: SLT
/* 652 */     MCD::OPC_FilterValue, 43, 65, 16, // Skip to: 4817
/* 656 */     MCD::OPC_CheckPredicate, 0, 61, 16, // Skip to: 4817
/* 660 */     MCD::OPC_CheckField, 6, 5, 0, 55, 16, // Skip to: 4817
/* 666 */     MCD::OPC_Decode, 235, 4, 3, // Opcode: SLTu
/* 670 */     MCD::OPC_FilterValue, 1, 80, 0, // Skip to: 754
/* 674 */     MCD::OPC_ExtractField, 16, 5,  // Inst{20-16} ...
/* 677 */     MCD::OPC_FilterValue, 0, 21, 0, // Skip to: 702
/* 681 */     MCD::OPC_CheckPredicate, 0, 9, 0, // Skip to: 694
/* 685 */     MCD::OPC_CheckField, 21, 5, 0, 3, 0, // Skip to: 694
/* 691 */     MCD::OPC_Decode, 117, 10, // Opcode: BAL_BR
/* 694 */     MCD::OPC_CheckPredicate, 0, 23, 16, // Skip to: 4817
/* 698 */     MCD::OPC_Decode, 130, 1, 11, // Opcode: BLTZ
/* 702 */     MCD::OPC_FilterValue, 1, 7, 0, // Skip to: 713
/* 706 */     MCD::OPC_CheckPredicate, 0, 11, 16, // Skip to: 4817
/* 710 */     MCD::OPC_Decode, 122, 11, // Opcode: BGEZ
/* 713 */     MCD::OPC_FilterValue, 16, 8, 0, // Skip to: 725
/* 717 */     MCD::OPC_CheckPredicate, 0, 0, 16, // Skip to: 4817
/* 721 */     MCD::OPC_Decode, 132, 1, 11, // Opcode: BLTZAL
/* 725 */     MCD::OPC_FilterValue, 17, 7, 0, // Skip to: 736
/* 729 */     MCD::OPC_CheckPredicate, 0, 244, 15, // Skip to: 4817
/* 733 */     MCD::OPC_Decode, 124, 11, // Opcode: BGEZAL
/* 736 */     MCD::OPC_FilterValue, 28, 237, 15, // Skip to: 4817
/* 740 */     MCD::OPC_CheckPredicate, 2, 233, 15, // Skip to: 4817
/* 744 */     MCD::OPC_CheckField, 21, 5, 0, 227, 15, // Skip to: 4817
/* 750 */     MCD::OPC_Decode, 135, 1, 10, // Opcode: BPOSGE32
/* 754 */     MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 766
/* 758 */     MCD::OPC_CheckPredicate, 3, 215, 15, // Skip to: 4817
/* 762 */     MCD::OPC_Decode, 185, 2, 12, // Opcode: J
/* 766 */     MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 778
/* 770 */     MCD::OPC_CheckPredicate, 0, 203, 15, // Skip to: 4817
/* 774 */     MCD::OPC_Decode, 186, 2, 12, // Opcode: JAL
/* 778 */     MCD::OPC_FilterValue, 4, 20, 0, // Skip to: 802
/* 782 */     MCD::OPC_CheckPredicate, 3, 9, 0, // Skip to: 795
/* 786 */     MCD::OPC_CheckField, 16, 10, 0, 3, 0, // Skip to: 795
/* 792 */     MCD::OPC_Decode, 115, 10, // Opcode: B
/* 795 */     MCD::OPC_CheckPredicate, 0, 178, 15, // Skip to: 4817
/* 799 */     MCD::OPC_Decode, 120, 13, // Opcode: BEQ
/* 802 */     MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 814
/* 806 */     MCD::OPC_CheckPredicate, 0, 167, 15, // Skip to: 4817
/* 810 */     MCD::OPC_Decode, 133, 1, 13, // Opcode: BNE
/* 814 */     MCD::OPC_FilterValue, 6, 14, 0, // Skip to: 832
/* 818 */     MCD::OPC_CheckPredicate, 0, 155, 15, // Skip to: 4817
/* 822 */     MCD::OPC_CheckField, 16, 5, 0, 149, 15, // Skip to: 4817
/* 828 */     MCD::OPC_Decode, 128, 1, 11, // Opcode: BLEZ
/* 832 */     MCD::OPC_FilterValue, 7, 13, 0, // Skip to: 849
/* 836 */     MCD::OPC_CheckPredicate, 0, 137, 15, // Skip to: 4817
/* 840 */     MCD::OPC_CheckField, 16, 5, 0, 131, 15, // Skip to: 4817
/* 846 */     MCD::OPC_Decode, 125, 11, // Opcode: BGTZ
/* 849 */     MCD::OPC_FilterValue, 8, 7, 0, // Skip to: 860
/* 853 */     MCD::OPC_CheckPredicate, 0, 120, 15, // Skip to: 4817
/* 857 */     MCD::OPC_Decode, 36, 14, // Opcode: ADDi
/* 860 */     MCD::OPC_FilterValue, 9, 7, 0, // Skip to: 871
/* 864 */     MCD::OPC_CheckPredicate, 0, 109, 15, // Skip to: 4817
/* 868 */     MCD::OPC_Decode, 37, 14, // Opcode: ADDiu
/* 871 */     MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 883
/* 875 */     MCD::OPC_CheckPredicate, 0, 98, 15, // Skip to: 4817
/* 879 */     MCD::OPC_Decode, 231, 4, 14, // Opcode: SLTi
/* 883 */     MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 895
/* 887 */     MCD::OPC_CheckPredicate, 0, 86, 15, // Skip to: 4817
/* 891 */     MCD::OPC_Decode, 233, 4, 14, // Opcode: SLTiu
/* 895 */     MCD::OPC_FilterValue, 12, 7, 0, // Skip to: 906
/* 899 */     MCD::OPC_CheckPredicate, 0, 74, 15, // Skip to: 4817
/* 903 */     MCD::OPC_Decode, 43, 15, // Opcode: ANDi
/* 906 */     MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 918
/* 910 */     MCD::OPC_CheckPredicate, 0, 63, 15, // Skip to: 4817
/* 914 */     MCD::OPC_Decode, 254, 3, 15, // Opcode: ORi
/* 918 */     MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 930
/* 922 */     MCD::OPC_CheckPredicate, 0, 51, 15, // Skip to: 4817
/* 926 */     MCD::OPC_Decode, 193, 5, 15, // Opcode: XORi
/* 930 */     MCD::OPC_FilterValue, 15, 14, 0, // Skip to: 948
/* 934 */     MCD::OPC_CheckPredicate, 0, 39, 15, // Skip to: 4817
/* 938 */     MCD::OPC_CheckField, 21, 5, 0, 33, 15, // Skip to: 4817
/* 944 */     MCD::OPC_Decode, 233, 2, 16, // Opcode: LUi
/* 948 */     MCD::OPC_FilterValue, 16, 39, 0, // Skip to: 991
/* 952 */     MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 955 */     MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 973
/* 959 */     MCD::OPC_CheckPredicate, 0, 14, 15, // Skip to: 4817
/* 963 */     MCD::OPC_CheckField, 3, 8, 0, 8, 15, // Skip to: 4817
/* 969 */     MCD::OPC_Decode, 153, 3, 17, // Opcode: MFC0_3OP
/* 973 */     MCD::OPC_FilterValue, 4, 0, 15, // Skip to: 4817
/* 977 */     MCD::OPC_CheckPredicate, 0, 252, 14, // Skip to: 4817
/* 981 */     MCD::OPC_CheckField, 3, 8, 0, 246, 14, // Skip to: 4817
/* 987 */     MCD::OPC_Decode, 201, 3, 18, // Opcode: MTC0_3OP
/* 991 */     MCD::OPC_FilterValue, 17, 109, 3, // Skip to: 1872
/* 995 */     MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 998 */     MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 1016
/* 1002 */    MCD::OPC_CheckPredicate, 0, 227, 14, // Skip to: 4817
/* 1006 */    MCD::OPC_CheckField, 0, 11, 0, 221, 14, // Skip to: 4817
/* 1012 */    MCD::OPC_Decode, 155, 3, 19, // Opcode: MFC1
/* 1016 */    MCD::OPC_FilterValue, 1, 14, 0, // Skip to: 1034
/* 1020 */    MCD::OPC_CheckPredicate, 0, 209, 14, // Skip to: 4817
/* 1024 */    MCD::OPC_CheckField, 0, 11, 0, 203, 14, // Skip to: 4817
/* 1030 */    MCD::OPC_Decode, 205, 1, 20, // Opcode: DMFC1
/* 1034 */    MCD::OPC_FilterValue, 2, 14, 0, // Skip to: 1052
/* 1038 */    MCD::OPC_CheckPredicate, 0, 191, 14, // Skip to: 4817
/* 1042 */    MCD::OPC_CheckField, 0, 11, 0, 185, 14, // Skip to: 4817
/* 1048 */    MCD::OPC_Decode, 160, 1, 21, // Opcode: CFC1
/* 1052 */    MCD::OPC_FilterValue, 4, 14, 0, // Skip to: 1070
/* 1056 */    MCD::OPC_CheckPredicate, 0, 173, 14, // Skip to: 4817
/* 1060 */    MCD::OPC_CheckField, 0, 11, 0, 167, 14, // Skip to: 4817
/* 1066 */    MCD::OPC_Decode, 203, 3, 22, // Opcode: MTC1
/* 1070 */    MCD::OPC_FilterValue, 5, 14, 0, // Skip to: 1088
/* 1074 */    MCD::OPC_CheckPredicate, 0, 155, 14, // Skip to: 4817
/* 1078 */    MCD::OPC_CheckField, 0, 11, 0, 149, 14, // Skip to: 4817
/* 1084 */    MCD::OPC_Decode, 208, 1, 23, // Opcode: DMTC1
/* 1088 */    MCD::OPC_FilterValue, 6, 14, 0, // Skip to: 1106
/* 1092 */    MCD::OPC_CheckPredicate, 0, 137, 14, // Skip to: 4817
/* 1096 */    MCD::OPC_CheckField, 0, 11, 0, 131, 14, // Skip to: 4817
/* 1102 */    MCD::OPC_Decode, 176, 1, 24, // Opcode: CTC1
/* 1106 */    MCD::OPC_FilterValue, 8, 25, 0, // Skip to: 1135
/* 1110 */    MCD::OPC_ExtractField, 16, 5,  // Inst{20-16} ...
/* 1113 */    MCD::OPC_FilterValue, 0, 7, 0, // Skip to: 1124
/* 1117 */    MCD::OPC_CheckPredicate, 0, 112, 14, // Skip to: 4817
/* 1121 */    MCD::OPC_Decode, 118, 25, // Opcode: BC1F
/* 1124 */    MCD::OPC_FilterValue, 1, 105, 14, // Skip to: 4817
/* 1128 */    MCD::OPC_CheckPredicate, 0, 101, 14, // Skip to: 4817
/* 1132 */    MCD::OPC_Decode, 119, 25, // Opcode: BC1T
/* 1135 */    MCD::OPC_FilterValue, 16, 87, 1, // Skip to: 1482
/* 1139 */    MCD::OPC_ExtractField, 4, 2,  // Inst{5-4} ...
/* 1142 */    MCD::OPC_FilterValue, 0, 195, 0, // Skip to: 1341
/* 1146 */    MCD::OPC_ExtractField, 0, 4,  // Inst{3-0} ...
/* 1149 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 1161
/* 1153 */    MCD::OPC_CheckPredicate, 0, 76, 14, // Skip to: 4817
/* 1157 */    MCD::OPC_Decode, 156, 2, 26, // Opcode: FADD_S
/* 1161 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 1173
/* 1165 */    MCD::OPC_CheckPredicate, 0, 64, 14, // Skip to: 4817
/* 1169 */    MCD::OPC_Decode, 182, 2, 26, // Opcode: FSUB_S
/* 1173 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 1185
/* 1177 */    MCD::OPC_CheckPredicate, 0, 52, 14, // Skip to: 4817
/* 1181 */    MCD::OPC_Decode, 173, 2, 26, // Opcode: FMUL_S
/* 1185 */    MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 1197
/* 1189 */    MCD::OPC_CheckPredicate, 0, 40, 14, // Skip to: 4817
/* 1193 */    MCD::OPC_Decode, 162, 2, 26, // Opcode: FDIV_S
/* 1197 */    MCD::OPC_FilterValue, 4, 14, 0, // Skip to: 1215
/* 1201 */    MCD::OPC_CheckPredicate, 0, 28, 14, // Skip to: 4817
/* 1205 */    MCD::OPC_CheckField, 16, 5, 0, 22, 14, // Skip to: 4817
/* 1211 */    MCD::OPC_Decode, 179, 2, 27, // Opcode: FSQRT_S
/* 1215 */    MCD::OPC_FilterValue, 5, 14, 0, // Skip to: 1233
/* 1219 */    MCD::OPC_CheckPredicate, 3, 10, 14, // Skip to: 4817
/* 1223 */    MCD::OPC_CheckField, 16, 5, 0, 4, 14, // Skip to: 4817
/* 1229 */    MCD::OPC_Decode, 153, 2, 27, // Opcode: FABS_S
/* 1233 */    MCD::OPC_FilterValue, 6, 14, 0, // Skip to: 1251
/* 1237 */    MCD::OPC_CheckPredicate, 0, 248, 13, // Skip to: 4817
/* 1241 */    MCD::OPC_CheckField, 16, 5, 0, 242, 13, // Skip to: 4817
/* 1247 */    MCD::OPC_Decode, 170, 2, 27, // Opcode: FMOV_S
/* 1251 */    MCD::OPC_FilterValue, 7, 14, 0, // Skip to: 1269
/* 1255 */    MCD::OPC_CheckPredicate, 3, 230, 13, // Skip to: 4817
/* 1259 */    MCD::OPC_CheckField, 16, 5, 0, 224, 13, // Skip to: 4817
/* 1265 */    MCD::OPC_Decode, 176, 2, 27, // Opcode: FNEG_S
/* 1269 */    MCD::OPC_FilterValue, 12, 14, 0, // Skip to: 1287
/* 1273 */    MCD::OPC_CheckPredicate, 0, 212, 13, // Skip to: 4817
/* 1277 */    MCD::OPC_CheckField, 16, 5, 0, 206, 13, // Skip to: 4817
/* 1283 */    MCD::OPC_Decode, 165, 4, 27, // Opcode: ROUND_W_S
/* 1287 */    MCD::OPC_FilterValue, 13, 14, 0, // Skip to: 1305
/* 1291 */    MCD::OPC_CheckPredicate, 0, 194, 13, // Skip to: 4817
/* 1295 */    MCD::OPC_CheckField, 16, 5, 0, 188, 13, // Skip to: 4817
/* 1301 */    MCD::OPC_Decode, 187, 5, 27, // Opcode: TRUNC_W_S
/* 1305 */    MCD::OPC_FilterValue, 14, 14, 0, // Skip to: 1323
/* 1309 */    MCD::OPC_CheckPredicate, 0, 176, 13, // Skip to: 4817
/* 1313 */    MCD::OPC_CheckField, 16, 5, 0, 170, 13, // Skip to: 4817
/* 1319 */    MCD::OPC_Decode, 159, 1, 27, // Opcode: CEIL_W_S
/* 1323 */    MCD::OPC_FilterValue, 15, 162, 13, // Skip to: 4817
/* 1327 */    MCD::OPC_CheckPredicate, 0, 158, 13, // Skip to: 4817
/* 1331 */    MCD::OPC_CheckField, 16, 5, 0, 152, 13, // Skip to: 4817
/* 1337 */    MCD::OPC_Decode, 167, 2, 27, // Opcode: FLOOR_W_S
/* 1341 */    MCD::OPC_FilterValue, 1, 58, 0, // Skip to: 1403
/* 1345 */    MCD::OPC_ExtractField, 0, 4,  // Inst{3-0} ...
/* 1348 */    MCD::OPC_FilterValue, 1, 27, 0, // Skip to: 1379
/* 1352 */    MCD::OPC_ExtractField, 16, 5,  // Inst{20-16} ...
/* 1355 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 1367
/* 1359 */    MCD::OPC_CheckPredicate, 0, 126, 13, // Skip to: 4817
/* 1363 */    MCD::OPC_Decode, 168, 3, 28, // Opcode: MOVF_S
/* 1367 */    MCD::OPC_FilterValue, 1, 118, 13, // Skip to: 4817
/* 1371 */    MCD::OPC_CheckPredicate, 0, 114, 13, // Skip to: 4817
/* 1375 */    MCD::OPC_Decode, 182, 3, 28, // Opcode: MOVT_S
/* 1379 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 1391
/* 1383 */    MCD::OPC_CheckPredicate, 0, 102, 13, // Skip to: 4817
/* 1387 */    MCD::OPC_Decode, 191, 3, 29, // Opcode: MOVZ_I_S
/* 1391 */    MCD::OPC_FilterValue, 3, 94, 13, // Skip to: 4817
/* 1395 */    MCD::OPC_CheckPredicate, 0, 90, 13, // Skip to: 4817
/* 1399 */    MCD::OPC_Decode, 177, 3, 29, // Opcode: MOVN_I_S
/* 1403 */    MCD::OPC_FilterValue, 2, 57, 0, // Skip to: 1464
/* 1407 */    MCD::OPC_ExtractField, 0, 4,  // Inst{3-0} ...
/* 1410 */    MCD::OPC_FilterValue, 1, 14, 0, // Skip to: 1428
/* 1414 */    MCD::OPC_CheckPredicate, 4, 71, 13, // Skip to: 4817
/* 1418 */    MCD::OPC_CheckField, 16, 5, 0, 65, 13, // Skip to: 4817
/* 1424 */    MCD::OPC_Decode, 177, 1, 30, // Opcode: CVT_D32_S
/* 1428 */    MCD::OPC_FilterValue, 4, 14, 0, // Skip to: 1446
/* 1432 */    MCD::OPC_CheckPredicate, 0, 53, 13, // Skip to: 4817
/* 1436 */    MCD::OPC_CheckField, 16, 5, 0, 47, 13, // Skip to: 4817
/* 1442 */    MCD::OPC_Decode, 190, 1, 27, // Opcode: CVT_W_S
/* 1446 */    MCD::OPC_FilterValue, 5, 39, 13, // Skip to: 4817
/* 1450 */    MCD::OPC_CheckPredicate, 0, 35, 13, // Skip to: 4817
/* 1454 */    MCD::OPC_CheckField, 16, 5, 0, 29, 13, // Skip to: 4817
/* 1460 */    MCD::OPC_Decode, 183, 1, 31, // Opcode: CVT_L_S
/* 1464 */    MCD::OPC_FilterValue, 3, 21, 13, // Skip to: 4817
/* 1468 */    MCD::OPC_CheckPredicate, 0, 17, 13, // Skip to: 4817
/* 1472 */    MCD::OPC_CheckField, 6, 5, 0, 11, 13, // Skip to: 4817
/* 1478 */    MCD::OPC_Decode, 159, 2, 32, // Opcode: FCMP_S32
/* 1482 */    MCD::OPC_FilterValue, 17, 87, 1, // Skip to: 1829
/* 1486 */    MCD::OPC_ExtractField, 4, 2,  // Inst{5-4} ...
/* 1489 */    MCD::OPC_FilterValue, 0, 195, 0, // Skip to: 1688
/* 1493 */    MCD::OPC_ExtractField, 0, 4,  // Inst{3-0} ...
/* 1496 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 1508
/* 1500 */    MCD::OPC_CheckPredicate, 4, 241, 12, // Skip to: 4817
/* 1504 */    MCD::OPC_Decode, 154, 2, 33, // Opcode: FADD_D32
/* 1508 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 1520
/* 1512 */    MCD::OPC_CheckPredicate, 4, 229, 12, // Skip to: 4817
/* 1516 */    MCD::OPC_Decode, 180, 2, 33, // Opcode: FSUB_D32
/* 1520 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 1532
/* 1524 */    MCD::OPC_CheckPredicate, 4, 217, 12, // Skip to: 4817
/* 1528 */    MCD::OPC_Decode, 171, 2, 33, // Opcode: FMUL_D32
/* 1532 */    MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 1544
/* 1536 */    MCD::OPC_CheckPredicate, 4, 205, 12, // Skip to: 4817
/* 1540 */    MCD::OPC_Decode, 160, 2, 33, // Opcode: FDIV_D32
/* 1544 */    MCD::OPC_FilterValue, 4, 14, 0, // Skip to: 1562
/* 1548 */    MCD::OPC_CheckPredicate, 4, 193, 12, // Skip to: 4817
/* 1552 */    MCD::OPC_CheckField, 16, 5, 0, 187, 12, // Skip to: 4817
/* 1558 */    MCD::OPC_Decode, 177, 2, 34, // Opcode: FSQRT_D32
/* 1562 */    MCD::OPC_FilterValue, 5, 14, 0, // Skip to: 1580
/* 1566 */    MCD::OPC_CheckPredicate, 3, 175, 12, // Skip to: 4817
/* 1570 */    MCD::OPC_CheckField, 16, 5, 0, 169, 12, // Skip to: 4817
/* 1576 */    MCD::OPC_Decode, 151, 2, 34, // Opcode: FABS_D32
/* 1580 */    MCD::OPC_FilterValue, 6, 14, 0, // Skip to: 1598
/* 1584 */    MCD::OPC_CheckPredicate, 4, 157, 12, // Skip to: 4817
/* 1588 */    MCD::OPC_CheckField, 16, 5, 0, 151, 12, // Skip to: 4817
/* 1594 */    MCD::OPC_Decode, 168, 2, 34, // Opcode: FMOV_D32
/* 1598 */    MCD::OPC_FilterValue, 7, 14, 0, // Skip to: 1616
/* 1602 */    MCD::OPC_CheckPredicate, 3, 139, 12, // Skip to: 4817
/* 1606 */    MCD::OPC_CheckField, 16, 5, 0, 133, 12, // Skip to: 4817
/* 1612 */    MCD::OPC_Decode, 174, 2, 34, // Opcode: FNEG_D32
/* 1616 */    MCD::OPC_FilterValue, 12, 14, 0, // Skip to: 1634
/* 1620 */    MCD::OPC_CheckPredicate, 4, 121, 12, // Skip to: 4817
/* 1624 */    MCD::OPC_CheckField, 16, 5, 0, 115, 12, // Skip to: 4817
/* 1630 */    MCD::OPC_Decode, 163, 4, 35, // Opcode: ROUND_W_D32
/* 1634 */    MCD::OPC_FilterValue, 13, 14, 0, // Skip to: 1652
/* 1638 */    MCD::OPC_CheckPredicate, 4, 103, 12, // Skip to: 4817
/* 1642 */    MCD::OPC_CheckField, 16, 5, 0, 97, 12, // Skip to: 4817
/* 1648 */    MCD::OPC_Decode, 185, 5, 35, // Opcode: TRUNC_W_D32
/* 1652 */    MCD::OPC_FilterValue, 14, 14, 0, // Skip to: 1670
/* 1656 */    MCD::OPC_CheckPredicate, 4, 85, 12, // Skip to: 4817
/* 1660 */    MCD::OPC_CheckField, 16, 5, 0, 79, 12, // Skip to: 4817
/* 1666 */    MCD::OPC_Decode, 157, 1, 35, // Opcode: CEIL_W_D32
/* 1670 */    MCD::OPC_FilterValue, 15, 71, 12, // Skip to: 4817
/* 1674 */    MCD::OPC_CheckPredicate, 4, 67, 12, // Skip to: 4817
/* 1678 */    MCD::OPC_CheckField, 16, 5, 0, 61, 12, // Skip to: 4817
/* 1684 */    MCD::OPC_Decode, 165, 2, 35, // Opcode: FLOOR_W_D32
/* 1688 */    MCD::OPC_FilterValue, 1, 58, 0, // Skip to: 1750
/* 1692 */    MCD::OPC_ExtractField, 0, 4,  // Inst{3-0} ...
/* 1695 */    MCD::OPC_FilterValue, 1, 27, 0, // Skip to: 1726
/* 1699 */    MCD::OPC_ExtractField, 16, 5,  // Inst{20-16} ...
/* 1702 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 1714
/* 1706 */    MCD::OPC_CheckPredicate, 4, 35, 12, // Skip to: 4817
/* 1710 */    MCD::OPC_Decode, 164, 3, 36, // Opcode: MOVF_D32
/* 1714 */    MCD::OPC_FilterValue, 1, 27, 12, // Skip to: 4817
/* 1718 */    MCD::OPC_CheckPredicate, 4, 23, 12, // Skip to: 4817
/* 1722 */    MCD::OPC_Decode, 178, 3, 36, // Opcode: MOVT_D32
/* 1726 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 1738
/* 1730 */    MCD::OPC_CheckPredicate, 4, 11, 12, // Skip to: 4817
/* 1734 */    MCD::OPC_Decode, 187, 3, 37, // Opcode: MOVZ_I_D32
/* 1738 */    MCD::OPC_FilterValue, 3, 3, 12, // Skip to: 4817
/* 1742 */    MCD::OPC_CheckPredicate, 4, 255, 11, // Skip to: 4817
/* 1746 */    MCD::OPC_Decode, 173, 3, 37, // Opcode: MOVN_I_D32
/* 1750 */    MCD::OPC_FilterValue, 2, 57, 0, // Skip to: 1811
/* 1754 */    MCD::OPC_ExtractField, 0, 4,  // Inst{3-0} ...
/* 1757 */    MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 1775
/* 1761 */    MCD::OPC_CheckPredicate, 4, 236, 11, // Skip to: 4817
/* 1765 */    MCD::OPC_CheckField, 16, 5, 0, 230, 11, // Skip to: 4817
/* 1771 */    MCD::OPC_Decode, 184, 1, 35, // Opcode: CVT_S_D32
/* 1775 */    MCD::OPC_FilterValue, 4, 14, 0, // Skip to: 1793
/* 1779 */    MCD::OPC_CheckPredicate, 4, 218, 11, // Skip to: 4817
/* 1783 */    MCD::OPC_CheckField, 16, 5, 0, 212, 11, // Skip to: 4817
/* 1789 */    MCD::OPC_Decode, 188, 1, 35, // Opcode: CVT_W_D32
/* 1793 */    MCD::OPC_FilterValue, 5, 204, 11, // Skip to: 4817
/* 1797 */    MCD::OPC_CheckPredicate, 0, 200, 11, // Skip to: 4817
/* 1801 */    MCD::OPC_CheckField, 16, 5, 0, 194, 11, // Skip to: 4817
/* 1807 */    MCD::OPC_Decode, 182, 1, 38, // Opcode: CVT_L_D64
/* 1811 */    MCD::OPC_FilterValue, 3, 186, 11, // Skip to: 4817
/* 1815 */    MCD::OPC_CheckPredicate, 4, 182, 11, // Skip to: 4817
/* 1819 */    MCD::OPC_CheckField, 6, 5, 0, 176, 11, // Skip to: 4817
/* 1825 */    MCD::OPC_Decode, 157, 2, 39, // Opcode: FCMP_D32
/* 1829 */    MCD::OPC_FilterValue, 20, 168, 11, // Skip to: 4817
/* 1833 */    MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 1836 */    MCD::OPC_FilterValue, 32, 14, 0, // Skip to: 1854
/* 1840 */    MCD::OPC_CheckPredicate, 0, 157, 11, // Skip to: 4817
/* 1844 */    MCD::OPC_CheckField, 16, 5, 0, 151, 11, // Skip to: 4817
/* 1850 */    MCD::OPC_Decode, 187, 1, 27, // Opcode: CVT_S_W
/* 1854 */    MCD::OPC_FilterValue, 33, 143, 11, // Skip to: 4817
/* 1858 */    MCD::OPC_CheckPredicate, 4, 139, 11, // Skip to: 4817
/* 1862 */    MCD::OPC_CheckField, 16, 5, 0, 133, 11, // Skip to: 4817
/* 1868 */    MCD::OPC_Decode, 178, 1, 30, // Opcode: CVT_D32_W
/* 1872 */    MCD::OPC_FilterValue, 18, 39, 0, // Skip to: 1915
/* 1876 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 1879 */    MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 1897
/* 1883 */    MCD::OPC_CheckPredicate, 0, 114, 11, // Skip to: 4817
/* 1887 */    MCD::OPC_CheckField, 3, 8, 0, 108, 11, // Skip to: 4817
/* 1893 */    MCD::OPC_Decode, 156, 3, 17, // Opcode: MFC2_3OP
/* 1897 */    MCD::OPC_FilterValue, 4, 100, 11, // Skip to: 4817
/* 1901 */    MCD::OPC_CheckPredicate, 0, 96, 11, // Skip to: 4817
/* 1905 */    MCD::OPC_CheckField, 3, 8, 0, 90, 11, // Skip to: 4817
/* 1911 */    MCD::OPC_Decode, 204, 3, 18, // Opcode: MTC2_3OP
/* 1915 */    MCD::OPC_FilterValue, 19, 207, 0, // Skip to: 2126
/* 1919 */    MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 1922 */    MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 1940
/* 1926 */    MCD::OPC_CheckPredicate, 5, 71, 11, // Skip to: 4817
/* 1930 */    MCD::OPC_CheckField, 11, 5, 0, 65, 11, // Skip to: 4817
/* 1936 */    MCD::OPC_Decode, 249, 2, 40, // Opcode: LWXC1
/* 1940 */    MCD::OPC_FilterValue, 1, 14, 0, // Skip to: 1958
/* 1944 */    MCD::OPC_CheckPredicate, 6, 53, 11, // Skip to: 4817
/* 1948 */    MCD::OPC_CheckField, 11, 5, 0, 47, 11, // Skip to: 4817
/* 1954 */    MCD::OPC_Decode, 212, 2, 41, // Opcode: LDXC1
/* 1958 */    MCD::OPC_FilterValue, 5, 14, 0, // Skip to: 1976
/* 1962 */    MCD::OPC_CheckPredicate, 7, 35, 11, // Skip to: 4817
/* 1966 */    MCD::OPC_CheckField, 11, 5, 0, 29, 11, // Skip to: 4817
/* 1972 */    MCD::OPC_Decode, 231, 2, 41, // Opcode: LUXC1
/* 1976 */    MCD::OPC_FilterValue, 8, 14, 0, // Skip to: 1994
/* 1980 */    MCD::OPC_CheckPredicate, 5, 17, 11, // Skip to: 4817
/* 1984 */    MCD::OPC_CheckField, 6, 5, 0, 11, 11, // Skip to: 4817
/* 1990 */    MCD::OPC_Decode, 143, 5, 42, // Opcode: SWXC1
/* 1994 */    MCD::OPC_FilterValue, 9, 14, 0, // Skip to: 2012
/* 1998 */    MCD::OPC_CheckPredicate, 6, 255, 10, // Skip to: 4817
/* 2002 */    MCD::OPC_CheckField, 6, 5, 0, 249, 10, // Skip to: 4817
/* 2008 */    MCD::OPC_Decode, 187, 4, 43, // Opcode: SDXC1
/* 2012 */    MCD::OPC_FilterValue, 13, 14, 0, // Skip to: 2030
/* 2016 */    MCD::OPC_CheckPredicate, 7, 237, 10, // Skip to: 4817
/* 2020 */    MCD::OPC_CheckField, 6, 5, 0, 231, 10, // Skip to: 4817
/* 2026 */    MCD::OPC_Decode, 128, 5, 43, // Opcode: SUXC1
/* 2030 */    MCD::OPC_FilterValue, 32, 8, 0, // Skip to: 2042
/* 2034 */    MCD::OPC_CheckPredicate, 1, 219, 10, // Skip to: 4817
/* 2038 */    MCD::OPC_Decode, 144, 3, 44, // Opcode: MADD_S
/* 2042 */    MCD::OPC_FilterValue, 33, 8, 0, // Skip to: 2054
/* 2046 */    MCD::OPC_CheckPredicate, 8, 207, 10, // Skip to: 4817
/* 2050 */    MCD::OPC_Decode, 140, 3, 45, // Opcode: MADD_D32
/* 2054 */    MCD::OPC_FilterValue, 40, 8, 0, // Skip to: 2066
/* 2058 */    MCD::OPC_CheckPredicate, 1, 195, 10, // Skip to: 4817
/* 2062 */    MCD::OPC_Decode, 200, 3, 44, // Opcode: MSUB_S
/* 2066 */    MCD::OPC_FilterValue, 41, 8, 0, // Skip to: 2078
/* 2070 */    MCD::OPC_CheckPredicate, 8, 183, 10, // Skip to: 4817
/* 2074 */    MCD::OPC_Decode, 196, 3, 45, // Opcode: MSUB_D32
/* 2078 */    MCD::OPC_FilterValue, 48, 8, 0, // Skip to: 2090
/* 2082 */    MCD::OPC_CheckPredicate, 9, 171, 10, // Skip to: 4817
/* 2086 */    MCD::OPC_Decode, 243, 3, 44, // Opcode: NMADD_S
/* 2090 */    MCD::OPC_FilterValue, 49, 8, 0, // Skip to: 2102
/* 2094 */    MCD::OPC_CheckPredicate, 10, 159, 10, // Skip to: 4817
/* 2098 */    MCD::OPC_Decode, 241, 3, 45, // Opcode: NMADD_D32
/* 2102 */    MCD::OPC_FilterValue, 56, 8, 0, // Skip to: 2114
/* 2106 */    MCD::OPC_CheckPredicate, 9, 147, 10, // Skip to: 4817
/* 2110 */    MCD::OPC_Decode, 246, 3, 44, // Opcode: NMSUB_S
/* 2114 */    MCD::OPC_FilterValue, 57, 139, 10, // Skip to: 4817
/* 2118 */    MCD::OPC_CheckPredicate, 10, 135, 10, // Skip to: 4817
/* 2122 */    MCD::OPC_Decode, 244, 3, 45, // Opcode: NMSUB_D32
/* 2126 */    MCD::OPC_FilterValue, 28, 171, 0, // Skip to: 2301
/* 2130 */    MCD::OPC_ExtractField, 0, 11,  // Inst{10-0} ...
/* 2133 */    MCD::OPC_FilterValue, 0, 29, 0, // Skip to: 2166
/* 2137 */    MCD::OPC_ExtractField, 13, 3,  // Inst{15-13} ...
/* 2140 */    MCD::OPC_FilterValue, 0, 113, 10, // Skip to: 4817
/* 2144 */    MCD::OPC_CheckPredicate, 0, 10, 0, // Skip to: 2158
/* 2148 */    MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 2158
/* 2154 */    MCD::OPC_Decode, 136, 3, 8, // Opcode: MADD
/* 2158 */    MCD::OPC_CheckPredicate, 2, 95, 10, // Skip to: 4817
/* 2162 */    MCD::OPC_Decode, 142, 3, 9, // Opcode: MADD_DSP
/* 2166 */    MCD::OPC_FilterValue, 1, 29, 0, // Skip to: 2199
/* 2170 */    MCD::OPC_ExtractField, 13, 3,  // Inst{15-13} ...
/* 2173 */    MCD::OPC_FilterValue, 0, 80, 10, // Skip to: 4817
/* 2177 */    MCD::OPC_CheckPredicate, 0, 10, 0, // Skip to: 2191
/* 2181 */    MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 2191
/* 2187 */    MCD::OPC_Decode, 137, 3, 8, // Opcode: MADDU
/* 2191 */    MCD::OPC_CheckPredicate, 2, 62, 10, // Skip to: 4817
/* 2195 */    MCD::OPC_Decode, 138, 3, 9, // Opcode: MADDU_DSP
/* 2199 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 2211
/* 2203 */    MCD::OPC_CheckPredicate, 3, 50, 10, // Skip to: 4817
/* 2207 */    MCD::OPC_Decode, 212, 3, 3, // Opcode: MUL
/* 2211 */    MCD::OPC_FilterValue, 4, 29, 0, // Skip to: 2244
/* 2215 */    MCD::OPC_ExtractField, 13, 3,  // Inst{15-13} ...
/* 2218 */    MCD::OPC_FilterValue, 0, 35, 10, // Skip to: 4817
/* 2222 */    MCD::OPC_CheckPredicate, 0, 10, 0, // Skip to: 2236
/* 2226 */    MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 2236
/* 2232 */    MCD::OPC_Decode, 192, 3, 8, // Opcode: MSUB
/* 2236 */    MCD::OPC_CheckPredicate, 2, 17, 10, // Skip to: 4817
/* 2240 */    MCD::OPC_Decode, 198, 3, 9, // Opcode: MSUB_DSP
/* 2244 */    MCD::OPC_FilterValue, 5, 29, 0, // Skip to: 2277
/* 2248 */    MCD::OPC_ExtractField, 13, 3,  // Inst{15-13} ...
/* 2251 */    MCD::OPC_FilterValue, 0, 2, 10, // Skip to: 4817
/* 2255 */    MCD::OPC_CheckPredicate, 0, 10, 0, // Skip to: 2269
/* 2259 */    MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 2269
/* 2265 */    MCD::OPC_Decode, 193, 3, 8, // Opcode: MSUBU
/* 2269 */    MCD::OPC_CheckPredicate, 2, 240, 9, // Skip to: 4817
/* 2273 */    MCD::OPC_Decode, 194, 3, 9, // Opcode: MSUBU_DSP
/* 2277 */    MCD::OPC_FilterValue, 32, 8, 0, // Skip to: 2289
/* 2281 */    MCD::OPC_CheckPredicate, 11, 228, 9, // Skip to: 4817
/* 2285 */    MCD::OPC_Decode, 162, 1, 46, // Opcode: CLZ
/* 2289 */    MCD::OPC_FilterValue, 33, 220, 9, // Skip to: 4817
/* 2293 */    MCD::OPC_CheckPredicate, 11, 216, 9, // Skip to: 4817
/* 2297 */    MCD::OPC_Decode, 161, 1, 46, // Opcode: CLO
/* 2301 */    MCD::OPC_FilterValue, 31, 248, 8, // Skip to: 4601
/* 2305 */    MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 2308 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 2320
/* 2312 */    MCD::OPC_CheckPredicate, 1, 197, 9, // Skip to: 4817
/* 2316 */    MCD::OPC_Decode, 137, 2, 47, // Opcode: EXT
/* 2320 */    MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 2332
/* 2324 */    MCD::OPC_CheckPredicate, 1, 185, 9, // Skip to: 4817
/* 2328 */    MCD::OPC_Decode, 183, 2, 48, // Opcode: INS
/* 2332 */    MCD::OPC_FilterValue, 10, 39, 0, // Skip to: 2375
/* 2336 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 2339 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 2351
/* 2343 */    MCD::OPC_CheckPredicate, 2, 166, 9, // Skip to: 4817
/* 2347 */    MCD::OPC_Decode, 248, 2, 3, // Opcode: LWX
/* 2351 */    MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 2363
/* 2355 */    MCD::OPC_CheckPredicate, 2, 154, 9, // Skip to: 4817
/* 2359 */    MCD::OPC_Decode, 221, 2, 3, // Opcode: LHX
/* 2363 */    MCD::OPC_FilterValue, 6, 146, 9, // Skip to: 4817
/* 2367 */    MCD::OPC_CheckPredicate, 2, 142, 9, // Skip to: 4817
/* 2371 */    MCD::OPC_Decode, 198, 2, 3, // Opcode: LBUX
/* 2375 */    MCD::OPC_FilterValue, 12, 14, 0, // Skip to: 2393
/* 2379 */    MCD::OPC_CheckPredicate, 2, 130, 9, // Skip to: 4817
/* 2383 */    MCD::OPC_CheckField, 6, 10, 0, 124, 9, // Skip to: 4817
/* 2389 */    MCD::OPC_Decode, 184, 2, 49, // Opcode: INSV
/* 2393 */    MCD::OPC_FilterValue, 16, 32, 1, // Skip to: 2685
/* 2397 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 2400 */    MCD::OPC_FilterValue, 0, 7, 0, // Skip to: 2411
/* 2404 */    MCD::OPC_CheckPredicate, 2, 105, 9, // Skip to: 4817
/* 2408 */    MCD::OPC_Decode, 32, 50, // Opcode: ADDU_QB
/* 2411 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 2423
/* 2415 */    MCD::OPC_CheckPredicate, 2, 94, 9, // Skip to: 4817
/* 2419 */    MCD::OPC_Decode, 252, 4, 50, // Opcode: SUBU_QB
/* 2423 */    MCD::OPC_FilterValue, 4, 7, 0, // Skip to: 2434
/* 2427 */    MCD::OPC_CheckPredicate, 2, 82, 9, // Skip to: 4817
/* 2431 */    MCD::OPC_Decode, 34, 50, // Opcode: ADDU_S_QB
/* 2434 */    MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 2446
/* 2438 */    MCD::OPC_CheckPredicate, 2, 71, 9, // Skip to: 4817
/* 2442 */    MCD::OPC_Decode, 254, 4, 50, // Opcode: SUBU_S_QB
/* 2446 */    MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 2458
/* 2450 */    MCD::OPC_CheckPredicate, 2, 59, 9, // Skip to: 4817
/* 2454 */    MCD::OPC_Decode, 215, 3, 50, // Opcode: MULEU_S_PH_QBL
/* 2458 */    MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 2470
/* 2462 */    MCD::OPC_CheckPredicate, 2, 47, 9, // Skip to: 4817
/* 2466 */    MCD::OPC_Decode, 216, 3, 50, // Opcode: MULEU_S_PH_QBR
/* 2470 */    MCD::OPC_FilterValue, 8, 7, 0, // Skip to: 2481
/* 2474 */    MCD::OPC_CheckPredicate, 12, 35, 9, // Skip to: 4817
/* 2478 */    MCD::OPC_Decode, 31, 50, // Opcode: ADDU_PH
/* 2481 */    MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 2493
/* 2485 */    MCD::OPC_CheckPredicate, 12, 24, 9, // Skip to: 4817
/* 2489 */    MCD::OPC_Decode, 251, 4, 50, // Opcode: SUBU_PH
/* 2493 */    MCD::OPC_FilterValue, 10, 7, 0, // Skip to: 2504
/* 2497 */    MCD::OPC_CheckPredicate, 2, 12, 9, // Skip to: 4817
/* 2501 */    MCD::OPC_Decode, 25, 50, // Opcode: ADDQ_PH
/* 2504 */    MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 2516
/* 2508 */    MCD::OPC_CheckPredicate, 2, 1, 9, // Skip to: 4817
/* 2512 */    MCD::OPC_Decode, 246, 4, 50, // Opcode: SUBQ_PH
/* 2516 */    MCD::OPC_FilterValue, 12, 7, 0, // Skip to: 2527
/* 2520 */    MCD::OPC_CheckPredicate, 12, 245, 8, // Skip to: 4817
/* 2524 */    MCD::OPC_Decode, 33, 50, // Opcode: ADDU_S_PH
/* 2527 */    MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 2539
/* 2531 */    MCD::OPC_CheckPredicate, 12, 234, 8, // Skip to: 4817
/* 2535 */    MCD::OPC_Decode, 253, 4, 50, // Opcode: SUBU_S_PH
/* 2539 */    MCD::OPC_FilterValue, 14, 7, 0, // Skip to: 2550
/* 2543 */    MCD::OPC_CheckPredicate, 2, 222, 8, // Skip to: 4817
/* 2547 */    MCD::OPC_Decode, 26, 50, // Opcode: ADDQ_S_PH
/* 2550 */    MCD::OPC_FilterValue, 15, 8, 0, // Skip to: 2562
/* 2554 */    MCD::OPC_CheckPredicate, 2, 211, 8, // Skip to: 4817
/* 2558 */    MCD::OPC_Decode, 247, 4, 50, // Opcode: SUBQ_S_PH
/* 2562 */    MCD::OPC_FilterValue, 16, 7, 0, // Skip to: 2573
/* 2566 */    MCD::OPC_CheckPredicate, 2, 199, 8, // Skip to: 4817
/* 2570 */    MCD::OPC_Decode, 28, 3, // Opcode: ADDSC
/* 2573 */    MCD::OPC_FilterValue, 17, 7, 0, // Skip to: 2584
/* 2577 */    MCD::OPC_CheckPredicate, 2, 188, 8, // Skip to: 4817
/* 2581 */    MCD::OPC_Decode, 35, 3, // Opcode: ADDWC
/* 2584 */    MCD::OPC_FilterValue, 18, 8, 0, // Skip to: 2596
/* 2588 */    MCD::OPC_CheckPredicate, 2, 177, 8, // Skip to: 4817
/* 2592 */    MCD::OPC_Decode, 162, 3, 3, // Opcode: MODSUB
/* 2596 */    MCD::OPC_FilterValue, 20, 14, 0, // Skip to: 2614
/* 2600 */    MCD::OPC_CheckPredicate, 2, 165, 8, // Skip to: 4817
/* 2604 */    MCD::OPC_CheckField, 16, 5, 0, 159, 8, // Skip to: 4817
/* 2610 */    MCD::OPC_Decode, 150, 4, 51, // Opcode: RADDU_W_QB
/* 2614 */    MCD::OPC_FilterValue, 22, 7, 0, // Skip to: 2625
/* 2618 */    MCD::OPC_CheckPredicate, 2, 147, 8, // Skip to: 4817
/* 2622 */    MCD::OPC_Decode, 27, 3, // Opcode: ADDQ_S_W
/* 2625 */    MCD::OPC_FilterValue, 23, 8, 0, // Skip to: 2637
/* 2629 */    MCD::OPC_CheckPredicate, 2, 136, 8, // Skip to: 4817
/* 2633 */    MCD::OPC_Decode, 248, 4, 3, // Opcode: SUBQ_S_W
/* 2637 */    MCD::OPC_FilterValue, 28, 8, 0, // Skip to: 2649
/* 2641 */    MCD::OPC_CheckPredicate, 2, 124, 8, // Skip to: 4817
/* 2645 */    MCD::OPC_Decode, 213, 3, 52, // Opcode: MULEQ_S_W_PHL
/* 2649 */    MCD::OPC_FilterValue, 29, 8, 0, // Skip to: 2661
/* 2653 */    MCD::OPC_CheckPredicate, 2, 112, 8, // Skip to: 4817
/* 2657 */    MCD::OPC_Decode, 214, 3, 52, // Opcode: MULEQ_S_W_PHR
/* 2661 */    MCD::OPC_FilterValue, 30, 8, 0, // Skip to: 2673
/* 2665 */    MCD::OPC_CheckPredicate, 12, 100, 8, // Skip to: 4817
/* 2669 */    MCD::OPC_Decode, 219, 3, 50, // Opcode: MULQ_S_PH
/* 2673 */    MCD::OPC_FilterValue, 31, 92, 8, // Skip to: 4817
/* 2677 */    MCD::OPC_CheckPredicate, 2, 88, 8, // Skip to: 4817
/* 2681 */    MCD::OPC_Decode, 217, 3, 50, // Opcode: MULQ_RS_PH
/* 2685 */    MCD::OPC_FilterValue, 17, 47, 1, // Skip to: 2992
/* 2689 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 2692 */    MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 2710
/* 2696 */    MCD::OPC_CheckPredicate, 2, 69, 8, // Skip to: 4817
/* 2700 */    MCD::OPC_CheckField, 11, 5, 0, 63, 8, // Skip to: 4817
/* 2706 */    MCD::OPC_Decode, 169, 1, 53, // Opcode: CMPU_EQ_QB
/* 2710 */    MCD::OPC_FilterValue, 1, 14, 0, // Skip to: 2728
/* 2714 */    MCD::OPC_CheckPredicate, 2, 51, 8, // Skip to: 4817
/* 2718 */    MCD::OPC_CheckField, 11, 5, 0, 45, 8, // Skip to: 4817
/* 2724 */    MCD::OPC_Decode, 171, 1, 53, // Opcode: CMPU_LT_QB
/* 2728 */    MCD::OPC_FilterValue, 2, 14, 0, // Skip to: 2746
/* 2732 */    MCD::OPC_CheckPredicate, 2, 33, 8, // Skip to: 4817
/* 2736 */    MCD::OPC_CheckField, 11, 5, 0, 27, 8, // Skip to: 4817
/* 2742 */    MCD::OPC_Decode, 170, 1, 53, // Opcode: CMPU_LE_QB
/* 2746 */    MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 2758
/* 2750 */    MCD::OPC_CheckPredicate, 2, 15, 8, // Skip to: 4817
/* 2754 */    MCD::OPC_Decode, 131, 4, 50, // Opcode: PICK_QB
/* 2758 */    MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 2770
/* 2762 */    MCD::OPC_CheckPredicate, 2, 3, 8, // Skip to: 4817
/* 2766 */    MCD::OPC_Decode, 166, 1, 52, // Opcode: CMPGU_EQ_QB
/* 2770 */    MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 2782
/* 2774 */    MCD::OPC_CheckPredicate, 2, 247, 7, // Skip to: 4817
/* 2778 */    MCD::OPC_Decode, 168, 1, 52, // Opcode: CMPGU_LT_QB
/* 2782 */    MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 2794
/* 2786 */    MCD::OPC_CheckPredicate, 2, 235, 7, // Skip to: 4817
/* 2790 */    MCD::OPC_Decode, 167, 1, 52, // Opcode: CMPGU_LE_QB
/* 2794 */    MCD::OPC_FilterValue, 8, 14, 0, // Skip to: 2812
/* 2798 */    MCD::OPC_CheckPredicate, 2, 223, 7, // Skip to: 4817
/* 2802 */    MCD::OPC_CheckField, 11, 5, 0, 217, 7, // Skip to: 4817
/* 2808 */    MCD::OPC_Decode, 172, 1, 53, // Opcode: CMP_EQ_PH
/* 2812 */    MCD::OPC_FilterValue, 9, 14, 0, // Skip to: 2830
/* 2816 */    MCD::OPC_CheckPredicate, 2, 205, 7, // Skip to: 4817
/* 2820 */    MCD::OPC_CheckField, 11, 5, 0, 199, 7, // Skip to: 4817
/* 2826 */    MCD::OPC_Decode, 174, 1, 53, // Opcode: CMP_LT_PH
/* 2830 */    MCD::OPC_FilterValue, 10, 14, 0, // Skip to: 2848
/* 2834 */    MCD::OPC_CheckPredicate, 2, 187, 7, // Skip to: 4817
/* 2838 */    MCD::OPC_CheckField, 11, 5, 0, 181, 7, // Skip to: 4817
/* 2844 */    MCD::OPC_Decode, 173, 1, 53, // Opcode: CMP_LE_PH
/* 2848 */    MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 2860
/* 2852 */    MCD::OPC_CheckPredicate, 2, 169, 7, // Skip to: 4817
/* 2856 */    MCD::OPC_Decode, 130, 4, 50, // Opcode: PICK_PH
/* 2860 */    MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 2872
/* 2864 */    MCD::OPC_CheckPredicate, 2, 157, 7, // Skip to: 4817
/* 2868 */    MCD::OPC_Decode, 144, 4, 50, // Opcode: PRECRQ_QB_PH
/* 2872 */    MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 2884
/* 2876 */    MCD::OPC_CheckPredicate, 12, 145, 7, // Skip to: 4817
/* 2880 */    MCD::OPC_Decode, 146, 4, 50, // Opcode: PRECR_QB_PH
/* 2884 */    MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 2896
/* 2888 */    MCD::OPC_CheckPredicate, 2, 133, 7, // Skip to: 4817
/* 2892 */    MCD::OPC_Decode, 129, 4, 50, // Opcode: PACKRL_PH
/* 2896 */    MCD::OPC_FilterValue, 15, 8, 0, // Skip to: 2908
/* 2900 */    MCD::OPC_CheckPredicate, 2, 121, 7, // Skip to: 4817
/* 2904 */    MCD::OPC_Decode, 142, 4, 50, // Opcode: PRECRQU_S_QB_PH
/* 2908 */    MCD::OPC_FilterValue, 20, 8, 0, // Skip to: 2920
/* 2912 */    MCD::OPC_CheckPredicate, 2, 109, 7, // Skip to: 4817
/* 2916 */    MCD::OPC_Decode, 143, 4, 54, // Opcode: PRECRQ_PH_W
/* 2920 */    MCD::OPC_FilterValue, 21, 8, 0, // Skip to: 2932
/* 2924 */    MCD::OPC_CheckPredicate, 2, 97, 7, // Skip to: 4817
/* 2928 */    MCD::OPC_Decode, 145, 4, 54, // Opcode: PRECRQ_RS_PH_W
/* 2932 */    MCD::OPC_FilterValue, 24, 8, 0, // Skip to: 2944
/* 2936 */    MCD::OPC_CheckPredicate, 12, 85, 7, // Skip to: 4817
/* 2940 */    MCD::OPC_Decode, 163, 1, 52, // Opcode: CMPGDU_EQ_QB
/* 2944 */    MCD::OPC_FilterValue, 25, 8, 0, // Skip to: 2956
/* 2948 */    MCD::OPC_CheckPredicate, 12, 73, 7, // Skip to: 4817
/* 2952 */    MCD::OPC_Decode, 165, 1, 52, // Opcode: CMPGDU_LT_QB
/* 2956 */    MCD::OPC_FilterValue, 26, 8, 0, // Skip to: 2968
/* 2960 */    MCD::OPC_CheckPredicate, 12, 61, 7, // Skip to: 4817
/* 2964 */    MCD::OPC_Decode, 164, 1, 52, // Opcode: CMPGDU_LE_QB
/* 2968 */    MCD::OPC_FilterValue, 30, 8, 0, // Skip to: 2980
/* 2972 */    MCD::OPC_CheckPredicate, 12, 49, 7, // Skip to: 4817
/* 2976 */    MCD::OPC_Decode, 147, 4, 55, // Opcode: PRECR_SRA_PH_W
/* 2980 */    MCD::OPC_FilterValue, 31, 41, 7, // Skip to: 4817
/* 2984 */    MCD::OPC_CheckPredicate, 12, 37, 7, // Skip to: 4817
/* 2988 */    MCD::OPC_Decode, 148, 4, 55, // Opcode: PRECR_SRA_R_PH_W
/* 2992 */    MCD::OPC_FilterValue, 18, 55, 1, // Skip to: 3307
/* 2996 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 2999 */    MCD::OPC_FilterValue, 1, 13, 0, // Skip to: 3016
/* 3003 */    MCD::OPC_CheckPredicate, 12, 18, 7, // Skip to: 4817
/* 3007 */    MCD::OPC_CheckField, 21, 5, 0, 12, 7, // Skip to: 4817
/* 3013 */    MCD::OPC_Decode, 18, 56, // Opcode: ABSQ_S_QB
/* 3016 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 3028
/* 3020 */    MCD::OPC_CheckPredicate, 2, 1, 7, // Skip to: 4817
/* 3024 */    MCD::OPC_Decode, 157, 4, 57, // Opcode: REPL_QB
/* 3028 */    MCD::OPC_FilterValue, 3, 14, 0, // Skip to: 3046
/* 3032 */    MCD::OPC_CheckPredicate, 2, 245, 6, // Skip to: 4817
/* 3036 */    MCD::OPC_CheckField, 21, 5, 0, 239, 6, // Skip to: 4817
/* 3042 */    MCD::OPC_Decode, 155, 4, 58, // Opcode: REPLV_QB
/* 3046 */    MCD::OPC_FilterValue, 4, 14, 0, // Skip to: 3064
/* 3050 */    MCD::OPC_CheckPredicate, 2, 227, 6, // Skip to: 4817
/* 3054 */    MCD::OPC_CheckField, 21, 5, 0, 221, 6, // Skip to: 4817
/* 3060 */    MCD::OPC_Decode, 132, 4, 56, // Opcode: PRECEQU_PH_QBL
/* 3064 */    MCD::OPC_FilterValue, 5, 14, 0, // Skip to: 3082
/* 3068 */    MCD::OPC_CheckPredicate, 2, 209, 6, // Skip to: 4817
/* 3072 */    MCD::OPC_CheckField, 21, 5, 0, 203, 6, // Skip to: 4817
/* 3078 */    MCD::OPC_Decode, 134, 4, 56, // Opcode: PRECEQU_PH_QBR
/* 3082 */    MCD::OPC_FilterValue, 6, 14, 0, // Skip to: 3100
/* 3086 */    MCD::OPC_CheckPredicate, 2, 191, 6, // Skip to: 4817
/* 3090 */    MCD::OPC_CheckField, 21, 5, 0, 185, 6, // Skip to: 4817
/* 3096 */    MCD::OPC_Decode, 133, 4, 56, // Opcode: PRECEQU_PH_QBLA
/* 3100 */    MCD::OPC_FilterValue, 7, 14, 0, // Skip to: 3118
/* 3104 */    MCD::OPC_CheckPredicate, 2, 173, 6, // Skip to: 4817
/* 3108 */    MCD::OPC_CheckField, 21, 5, 0, 167, 6, // Skip to: 4817
/* 3114 */    MCD::OPC_Decode, 135, 4, 56, // Opcode: PRECEQU_PH_QBRA
/* 3118 */    MCD::OPC_FilterValue, 9, 13, 0, // Skip to: 3135
/* 3122 */    MCD::OPC_CheckPredicate, 2, 155, 6, // Skip to: 4817
/* 3126 */    MCD::OPC_CheckField, 21, 5, 0, 149, 6, // Skip to: 4817
/* 3132 */    MCD::OPC_Decode, 17, 56, // Opcode: ABSQ_S_PH
/* 3135 */    MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 3147
/* 3139 */    MCD::OPC_CheckPredicate, 2, 138, 6, // Skip to: 4817
/* 3143 */    MCD::OPC_Decode, 156, 4, 57, // Opcode: REPL_PH
/* 3147 */    MCD::OPC_FilterValue, 11, 14, 0, // Skip to: 3165
/* 3151 */    MCD::OPC_CheckPredicate, 2, 126, 6, // Skip to: 4817
/* 3155 */    MCD::OPC_CheckField, 21, 5, 0, 120, 6, // Skip to: 4817
/* 3161 */    MCD::OPC_Decode, 154, 4, 58, // Opcode: REPLV_PH
/* 3165 */    MCD::OPC_FilterValue, 12, 14, 0, // Skip to: 3183
/* 3169 */    MCD::OPC_CheckPredicate, 2, 108, 6, // Skip to: 4817
/* 3173 */    MCD::OPC_CheckField, 21, 5, 0, 102, 6, // Skip to: 4817
/* 3179 */    MCD::OPC_Decode, 136, 4, 59, // Opcode: PRECEQ_W_PHL
/* 3183 */    MCD::OPC_FilterValue, 13, 14, 0, // Skip to: 3201
/* 3187 */    MCD::OPC_CheckPredicate, 2, 90, 6, // Skip to: 4817
/* 3191 */    MCD::OPC_CheckField, 21, 5, 0, 84, 6, // Skip to: 4817
/* 3197 */    MCD::OPC_Decode, 137, 4, 59, // Opcode: PRECEQ_W_PHR
/* 3201 */    MCD::OPC_FilterValue, 17, 13, 0, // Skip to: 3218
/* 3205 */    MCD::OPC_CheckPredicate, 2, 72, 6, // Skip to: 4817
/* 3209 */    MCD::OPC_CheckField, 21, 5, 0, 66, 6, // Skip to: 4817
/* 3215 */    MCD::OPC_Decode, 19, 60, // Opcode: ABSQ_S_W
/* 3218 */    MCD::OPC_FilterValue, 27, 13, 0, // Skip to: 3235
/* 3222 */    MCD::OPC_CheckPredicate, 2, 55, 6, // Skip to: 4817
/* 3226 */    MCD::OPC_CheckField, 21, 5, 0, 49, 6, // Skip to: 4817
/* 3232 */    MCD::OPC_Decode, 127, 60, // Opcode: BITREV
/* 3235 */    MCD::OPC_FilterValue, 28, 14, 0, // Skip to: 3253
/* 3239 */    MCD::OPC_CheckPredicate, 2, 38, 6, // Skip to: 4817
/* 3243 */    MCD::OPC_CheckField, 21, 5, 0, 32, 6, // Skip to: 4817
/* 3249 */    MCD::OPC_Decode, 138, 4, 56, // Opcode: PRECEU_PH_QBL
/* 3253 */    MCD::OPC_FilterValue, 29, 14, 0, // Skip to: 3271
/* 3257 */    MCD::OPC_CheckPredicate, 2, 20, 6, // Skip to: 4817
/* 3261 */    MCD::OPC_CheckField, 21, 5, 0, 14, 6, // Skip to: 4817
/* 3267 */    MCD::OPC_Decode, 140, 4, 56, // Opcode: PRECEU_PH_QBR
/* 3271 */    MCD::OPC_FilterValue, 30, 14, 0, // Skip to: 3289
/* 3275 */    MCD::OPC_CheckPredicate, 2, 2, 6, // Skip to: 4817
/* 3279 */    MCD::OPC_CheckField, 21, 5, 0, 252, 5, // Skip to: 4817
/* 3285 */    MCD::OPC_Decode, 139, 4, 56, // Opcode: PRECEU_PH_QBLA
/* 3289 */    MCD::OPC_FilterValue, 31, 244, 5, // Skip to: 4817
/* 3293 */    MCD::OPC_CheckPredicate, 2, 240, 5, // Skip to: 4817
/* 3297 */    MCD::OPC_CheckField, 21, 5, 0, 234, 5, // Skip to: 4817
/* 3303 */    MCD::OPC_Decode, 141, 4, 56, // Opcode: PRECEU_PH_QBRA
/* 3307 */    MCD::OPC_FilterValue, 19, 11, 1, // Skip to: 3578
/* 3311 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 3314 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 3326
/* 3318 */    MCD::OPC_CheckPredicate, 2, 215, 5, // Skip to: 4817
/* 3322 */    MCD::OPC_Decode, 207, 4, 61, // Opcode: SHLL_QB
/* 3326 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 3338
/* 3330 */    MCD::OPC_CheckPredicate, 2, 203, 5, // Skip to: 4817
/* 3334 */    MCD::OPC_Decode, 223, 4, 61, // Opcode: SHRL_QB
/* 3338 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 3350
/* 3342 */    MCD::OPC_CheckPredicate, 2, 191, 5, // Skip to: 4817
/* 3346 */    MCD::OPC_Decode, 203, 4, 62, // Opcode: SHLLV_QB
/* 3350 */    MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 3362
/* 3354 */    MCD::OPC_CheckPredicate, 2, 179, 5, // Skip to: 4817
/* 3358 */    MCD::OPC_Decode, 221, 4, 62, // Opcode: SHRLV_QB
/* 3362 */    MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 3374
/* 3366 */    MCD::OPC_CheckPredicate, 12, 167, 5, // Skip to: 4817
/* 3370 */    MCD::OPC_Decode, 216, 4, 61, // Opcode: SHRA_QB
/* 3374 */    MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 3386
/* 3378 */    MCD::OPC_CheckPredicate, 12, 155, 5, // Skip to: 4817
/* 3382 */    MCD::OPC_Decode, 218, 4, 61, // Opcode: SHRA_R_QB
/* 3386 */    MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 3398
/* 3390 */    MCD::OPC_CheckPredicate, 12, 143, 5, // Skip to: 4817
/* 3394 */    MCD::OPC_Decode, 211, 4, 62, // Opcode: SHRAV_QB
/* 3398 */    MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 3410
/* 3402 */    MCD::OPC_CheckPredicate, 12, 131, 5, // Skip to: 4817
/* 3406 */    MCD::OPC_Decode, 213, 4, 62, // Opcode: SHRAV_R_QB
/* 3410 */    MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 3422
/* 3414 */    MCD::OPC_CheckPredicate, 2, 119, 5, // Skip to: 4817
/* 3418 */    MCD::OPC_Decode, 206, 4, 61, // Opcode: SHLL_PH
/* 3422 */    MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 3434
/* 3426 */    MCD::OPC_CheckPredicate, 2, 107, 5, // Skip to: 4817
/* 3430 */    MCD::OPC_Decode, 215, 4, 61, // Opcode: SHRA_PH
/* 3434 */    MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 3446
/* 3438 */    MCD::OPC_CheckPredicate, 2, 95, 5, // Skip to: 4817
/* 3442 */    MCD::OPC_Decode, 202, 4, 62, // Opcode: SHLLV_PH
/* 3446 */    MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 3458
/* 3450 */    MCD::OPC_CheckPredicate, 2, 83, 5, // Skip to: 4817
/* 3454 */    MCD::OPC_Decode, 210, 4, 62, // Opcode: SHRAV_PH
/* 3458 */    MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 3470
/* 3462 */    MCD::OPC_CheckPredicate, 2, 71, 5, // Skip to: 4817
/* 3466 */    MCD::OPC_Decode, 208, 4, 61, // Opcode: SHLL_S_PH
/* 3470 */    MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 3482
/* 3474 */    MCD::OPC_CheckPredicate, 2, 59, 5, // Skip to: 4817
/* 3478 */    MCD::OPC_Decode, 217, 4, 61, // Opcode: SHRA_R_PH
/* 3482 */    MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 3494
/* 3486 */    MCD::OPC_CheckPredicate, 2, 47, 5, // Skip to: 4817
/* 3490 */    MCD::OPC_Decode, 204, 4, 62, // Opcode: SHLLV_S_PH
/* 3494 */    MCD::OPC_FilterValue, 15, 8, 0, // Skip to: 3506
/* 3498 */    MCD::OPC_CheckPredicate, 2, 35, 5, // Skip to: 4817
/* 3502 */    MCD::OPC_Decode, 212, 4, 62, // Opcode: SHRAV_R_PH
/* 3506 */    MCD::OPC_FilterValue, 20, 8, 0, // Skip to: 3518
/* 3510 */    MCD::OPC_CheckPredicate, 2, 23, 5, // Skip to: 4817
/* 3514 */    MCD::OPC_Decode, 209, 4, 63, // Opcode: SHLL_S_W
/* 3518 */    MCD::OPC_FilterValue, 21, 8, 0, // Skip to: 3530
/* 3522 */    MCD::OPC_CheckPredicate, 2, 11, 5, // Skip to: 4817
/* 3526 */    MCD::OPC_Decode, 219, 4, 63, // Opcode: SHRA_R_W
/* 3530 */    MCD::OPC_FilterValue, 22, 8, 0, // Skip to: 3542
/* 3534 */    MCD::OPC_CheckPredicate, 2, 255, 4, // Skip to: 4817
/* 3538 */    MCD::OPC_Decode, 205, 4, 64, // Opcode: SHLLV_S_W
/* 3542 */    MCD::OPC_FilterValue, 23, 8, 0, // Skip to: 3554
/* 3546 */    MCD::OPC_CheckPredicate, 2, 243, 4, // Skip to: 4817
/* 3550 */    MCD::OPC_Decode, 214, 4, 64, // Opcode: SHRAV_R_W
/* 3554 */    MCD::OPC_FilterValue, 25, 8, 0, // Skip to: 3566
/* 3558 */    MCD::OPC_CheckPredicate, 12, 231, 4, // Skip to: 4817
/* 3562 */    MCD::OPC_Decode, 222, 4, 61, // Opcode: SHRL_PH
/* 3566 */    MCD::OPC_FilterValue, 27, 223, 4, // Skip to: 4817
/* 3570 */    MCD::OPC_CheckPredicate, 12, 219, 4, // Skip to: 4817
/* 3574 */    MCD::OPC_Decode, 220, 4, 62, // Opcode: SHRLV_PH
/* 3578 */    MCD::OPC_FilterValue, 24, 189, 0, // Skip to: 3771
/* 3582 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 3585 */    MCD::OPC_FilterValue, 0, 7, 0, // Skip to: 3596
/* 3589 */    MCD::OPC_CheckPredicate, 12, 200, 4, // Skip to: 4817
/* 3593 */    MCD::OPC_Decode, 29, 50, // Opcode: ADDUH_QB
/* 3596 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 3608
/* 3600 */    MCD::OPC_CheckPredicate, 12, 189, 4, // Skip to: 4817
/* 3604 */    MCD::OPC_Decode, 249, 4, 50, // Opcode: SUBUH_QB
/* 3608 */    MCD::OPC_FilterValue, 2, 7, 0, // Skip to: 3619
/* 3612 */    MCD::OPC_CheckPredicate, 12, 177, 4, // Skip to: 4817
/* 3616 */    MCD::OPC_Decode, 30, 50, // Opcode: ADDUH_R_QB
/* 3619 */    MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 3631
/* 3623 */    MCD::OPC_CheckPredicate, 12, 166, 4, // Skip to: 4817
/* 3627 */    MCD::OPC_Decode, 250, 4, 50, // Opcode: SUBUH_R_QB
/* 3631 */    MCD::OPC_FilterValue, 8, 7, 0, // Skip to: 3642
/* 3635 */    MCD::OPC_CheckPredicate, 12, 154, 4, // Skip to: 4817
/* 3639 */    MCD::OPC_Decode, 21, 50, // Opcode: ADDQH_PH
/* 3642 */    MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 3654
/* 3646 */    MCD::OPC_CheckPredicate, 12, 143, 4, // Skip to: 4817
/* 3650 */    MCD::OPC_Decode, 242, 4, 50, // Opcode: SUBQH_PH
/* 3654 */    MCD::OPC_FilterValue, 10, 7, 0, // Skip to: 3665
/* 3658 */    MCD::OPC_CheckPredicate, 12, 131, 4, // Skip to: 4817
/* 3662 */    MCD::OPC_Decode, 22, 50, // Opcode: ADDQH_R_PH
/* 3665 */    MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 3677
/* 3669 */    MCD::OPC_CheckPredicate, 12, 120, 4, // Skip to: 4817
/* 3673 */    MCD::OPC_Decode, 243, 4, 50, // Opcode: SUBQH_R_PH
/* 3677 */    MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 3689
/* 3681 */    MCD::OPC_CheckPredicate, 12, 108, 4, // Skip to: 4817
/* 3685 */    MCD::OPC_Decode, 231, 3, 50, // Opcode: MUL_PH
/* 3689 */    MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 3701
/* 3693 */    MCD::OPC_CheckPredicate, 12, 96, 4, // Skip to: 4817
/* 3697 */    MCD::OPC_Decode, 232, 3, 50, // Opcode: MUL_S_PH
/* 3701 */    MCD::OPC_FilterValue, 16, 7, 0, // Skip to: 3712
/* 3705 */    MCD::OPC_CheckPredicate, 12, 84, 4, // Skip to: 4817
/* 3709 */    MCD::OPC_Decode, 24, 3, // Opcode: ADDQH_W
/* 3712 */    MCD::OPC_FilterValue, 17, 8, 0, // Skip to: 3724
/* 3716 */    MCD::OPC_CheckPredicate, 12, 73, 4, // Skip to: 4817
/* 3720 */    MCD::OPC_Decode, 245, 4, 3, // Opcode: SUBQH_W
/* 3724 */    MCD::OPC_FilterValue, 18, 7, 0, // Skip to: 3735
/* 3728 */    MCD::OPC_CheckPredicate, 12, 61, 4, // Skip to: 4817
/* 3732 */    MCD::OPC_Decode, 23, 3, // Opcode: ADDQH_R_W
/* 3735 */    MCD::OPC_FilterValue, 19, 8, 0, // Skip to: 3747
/* 3739 */    MCD::OPC_CheckPredicate, 12, 50, 4, // Skip to: 4817
/* 3743 */    MCD::OPC_Decode, 244, 4, 3, // Opcode: SUBQH_R_W
/* 3747 */    MCD::OPC_FilterValue, 22, 8, 0, // Skip to: 3759
/* 3751 */    MCD::OPC_CheckPredicate, 12, 38, 4, // Skip to: 4817
/* 3755 */    MCD::OPC_Decode, 220, 3, 3, // Opcode: MULQ_S_W
/* 3759 */    MCD::OPC_FilterValue, 23, 30, 4, // Skip to: 4817
/* 3763 */    MCD::OPC_CheckPredicate, 12, 26, 4, // Skip to: 4817
/* 3767 */    MCD::OPC_Decode, 218, 3, 3, // Opcode: MULQ_RS_W
/* 3771 */    MCD::OPC_FilterValue, 32, 57, 0, // Skip to: 3832
/* 3775 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 3778 */    MCD::OPC_FilterValue, 2, 14, 0, // Skip to: 3796
/* 3782 */    MCD::OPC_CheckPredicate, 13, 7, 4, // Skip to: 4817
/* 3786 */    MCD::OPC_CheckField, 21, 5, 0, 1, 4, // Skip to: 4817
/* 3792 */    MCD::OPC_Decode, 190, 5, 60, // Opcode: WSBH
/* 3796 */    MCD::OPC_FilterValue, 16, 14, 0, // Skip to: 3814
/* 3800 */    MCD::OPC_CheckPredicate, 14, 245, 3, // Skip to: 4817
/* 3804 */    MCD::OPC_CheckField, 21, 5, 0, 239, 3, // Skip to: 4817
/* 3810 */    MCD::OPC_Decode, 191, 4, 60, // Opcode: SEB
/* 3814 */    MCD::OPC_FilterValue, 24, 231, 3, // Skip to: 4817
/* 3818 */    MCD::OPC_CheckPredicate, 14, 227, 3, // Skip to: 4817
/* 3822 */    MCD::OPC_CheckField, 21, 5, 0, 221, 3, // Skip to: 4817
/* 3828 */    MCD::OPC_Decode, 193, 4, 60, // Opcode: SEH
/* 3832 */    MCD::OPC_FilterValue, 48, 143, 1, // Skip to: 4235
/* 3836 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 3839 */    MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 3857
/* 3843 */    MCD::OPC_CheckPredicate, 12, 202, 3, // Skip to: 4817
/* 3847 */    MCD::OPC_CheckField, 13, 3, 0, 196, 3, // Skip to: 4817
/* 3853 */    MCD::OPC_Decode, 226, 1, 9, // Opcode: DPA_W_PH
/* 3857 */    MCD::OPC_FilterValue, 1, 14, 0, // Skip to: 3875
/* 3861 */    MCD::OPC_CheckPredicate, 12, 184, 3, // Skip to: 4817
/* 3865 */    MCD::OPC_CheckField, 13, 3, 0, 178, 3, // Skip to: 4817
/* 3871 */    MCD::OPC_Decode, 242, 1, 9, // Opcode: DPS_W_PH
/* 3875 */    MCD::OPC_FilterValue, 2, 14, 0, // Skip to: 3893
/* 3879 */    MCD::OPC_CheckPredicate, 12, 166, 3, // Skip to: 4817
/* 3883 */    MCD::OPC_CheckField, 13, 3, 0, 160, 3, // Skip to: 4817
/* 3889 */    MCD::OPC_Decode, 223, 3, 9, // Opcode: MULSA_W_PH
/* 3893 */    MCD::OPC_FilterValue, 3, 14, 0, // Skip to: 3911
/* 3897 */    MCD::OPC_CheckPredicate, 2, 148, 3, // Skip to: 4817
/* 3901 */    MCD::OPC_CheckField, 13, 3, 0, 142, 3, // Skip to: 4817
/* 3907 */    MCD::OPC_Decode, 220, 1, 9, // Opcode: DPAU_H_QBL
/* 3911 */    MCD::OPC_FilterValue, 4, 14, 0, // Skip to: 3929
/* 3915 */    MCD::OPC_CheckPredicate, 2, 130, 3, // Skip to: 4817
/* 3919 */    MCD::OPC_CheckField, 13, 3, 0, 124, 3, // Skip to: 4817
/* 3925 */    MCD::OPC_Decode, 218, 1, 9, // Opcode: DPAQ_S_W_PH
/* 3929 */    MCD::OPC_FilterValue, 5, 14, 0, // Skip to: 3947
/* 3933 */    MCD::OPC_CheckPredicate, 2, 112, 3, // Skip to: 4817
/* 3937 */    MCD::OPC_CheckField, 13, 3, 0, 106, 3, // Skip to: 4817
/* 3943 */    MCD::OPC_Decode, 234, 1, 9, // Opcode: DPSQ_S_W_PH
/* 3947 */    MCD::OPC_FilterValue, 6, 14, 0, // Skip to: 3965
/* 3951 */    MCD::OPC_CheckPredicate, 2, 94, 3, // Skip to: 4817
/* 3955 */    MCD::OPC_CheckField, 13, 3, 0, 88, 3, // Skip to: 4817
/* 3961 */    MCD::OPC_Decode, 221, 3, 9, // Opcode: MULSAQ_S_W_PH
/* 3965 */    MCD::OPC_FilterValue, 7, 14, 0, // Skip to: 3983
/* 3969 */    MCD::OPC_CheckPredicate, 2, 76, 3, // Skip to: 4817
/* 3973 */    MCD::OPC_CheckField, 13, 3, 0, 70, 3, // Skip to: 4817
/* 3979 */    MCD::OPC_Decode, 222, 1, 9, // Opcode: DPAU_H_QBR
/* 3983 */    MCD::OPC_FilterValue, 8, 14, 0, // Skip to: 4001
/* 3987 */    MCD::OPC_CheckPredicate, 12, 58, 3, // Skip to: 4817
/* 3991 */    MCD::OPC_CheckField, 13, 3, 0, 52, 3, // Skip to: 4817
/* 3997 */    MCD::OPC_Decode, 224, 1, 9, // Opcode: DPAX_W_PH
/* 4001 */    MCD::OPC_FilterValue, 9, 14, 0, // Skip to: 4019
/* 4005 */    MCD::OPC_CheckPredicate, 12, 40, 3, // Skip to: 4817
/* 4009 */    MCD::OPC_CheckField, 13, 3, 0, 34, 3, // Skip to: 4817
/* 4015 */    MCD::OPC_Decode, 240, 1, 9, // Opcode: DPSX_W_PH
/* 4019 */    MCD::OPC_FilterValue, 11, 14, 0, // Skip to: 4037
/* 4023 */    MCD::OPC_CheckPredicate, 2, 22, 3, // Skip to: 4817
/* 4027 */    MCD::OPC_CheckField, 13, 3, 0, 16, 3, // Skip to: 4817
/* 4033 */    MCD::OPC_Decode, 236, 1, 9, // Opcode: DPSU_H_QBL
/* 4037 */    MCD::OPC_FilterValue, 12, 14, 0, // Skip to: 4055
/* 4041 */    MCD::OPC_CheckPredicate, 2, 4, 3, // Skip to: 4817
/* 4045 */    MCD::OPC_CheckField, 13, 3, 0, 254, 2, // Skip to: 4817
/* 4051 */    MCD::OPC_Decode, 216, 1, 9, // Opcode: DPAQ_SA_L_W
/* 4055 */    MCD::OPC_FilterValue, 13, 14, 0, // Skip to: 4073
/* 4059 */    MCD::OPC_CheckPredicate, 2, 242, 2, // Skip to: 4817
/* 4063 */    MCD::OPC_CheckField, 13, 3, 0, 236, 2, // Skip to: 4817
/* 4069 */    MCD::OPC_Decode, 232, 1, 9, // Opcode: DPSQ_SA_L_W
/* 4073 */    MCD::OPC_FilterValue, 15, 14, 0, // Skip to: 4091
/* 4077 */    MCD::OPC_CheckPredicate, 2, 224, 2, // Skip to: 4817
/* 4081 */    MCD::OPC_CheckField, 13, 3, 0, 218, 2, // Skip to: 4817
/* 4087 */    MCD::OPC_Decode, 238, 1, 9, // Opcode: DPSU_H_QBR
/* 4091 */    MCD::OPC_FilterValue, 16, 14, 0, // Skip to: 4109
/* 4095 */    MCD::OPC_CheckPredicate, 2, 206, 2, // Skip to: 4817
/* 4099 */    MCD::OPC_CheckField, 13, 3, 0, 200, 2, // Skip to: 4817
/* 4105 */    MCD::OPC_Decode, 145, 3, 9, // Opcode: MAQ_SA_W_PHL
/* 4109 */    MCD::OPC_FilterValue, 18, 14, 0, // Skip to: 4127
/* 4113 */    MCD::OPC_CheckPredicate, 2, 188, 2, // Skip to: 4817
/* 4117 */    MCD::OPC_CheckField, 13, 3, 0, 182, 2, // Skip to: 4817
/* 4123 */    MCD::OPC_Decode, 147, 3, 9, // Opcode: MAQ_SA_W_PHR
/* 4127 */    MCD::OPC_FilterValue, 20, 14, 0, // Skip to: 4145
/* 4131 */    MCD::OPC_CheckPredicate, 2, 170, 2, // Skip to: 4817
/* 4135 */    MCD::OPC_CheckField, 13, 3, 0, 164, 2, // Skip to: 4817
/* 4141 */    MCD::OPC_Decode, 149, 3, 9, // Opcode: MAQ_S_W_PHL
/* 4145 */    MCD::OPC_FilterValue, 22, 14, 0, // Skip to: 4163
/* 4149 */    MCD::OPC_CheckPredicate, 2, 152, 2, // Skip to: 4817
/* 4153 */    MCD::OPC_CheckField, 13, 3, 0, 146, 2, // Skip to: 4817
/* 4159 */    MCD::OPC_Decode, 151, 3, 9, // Opcode: MAQ_S_W_PHR
/* 4163 */    MCD::OPC_FilterValue, 24, 14, 0, // Skip to: 4181
/* 4167 */    MCD::OPC_CheckPredicate, 12, 134, 2, // Skip to: 4817
/* 4171 */    MCD::OPC_CheckField, 13, 3, 0, 128, 2, // Skip to: 4817
/* 4177 */    MCD::OPC_Decode, 214, 1, 9, // Opcode: DPAQX_S_W_PH
/* 4181 */    MCD::OPC_FilterValue, 25, 14, 0, // Skip to: 4199
/* 4185 */    MCD::OPC_CheckPredicate, 12, 116, 2, // Skip to: 4817
/* 4189 */    MCD::OPC_CheckField, 13, 3, 0, 110, 2, // Skip to: 4817
/* 4195 */    MCD::OPC_Decode, 230, 1, 9, // Opcode: DPSQX_S_W_PH
/* 4199 */    MCD::OPC_FilterValue, 26, 14, 0, // Skip to: 4217
/* 4203 */    MCD::OPC_CheckPredicate, 12, 98, 2, // Skip to: 4817
/* 4207 */    MCD::OPC_CheckField, 13, 3, 0, 92, 2, // Skip to: 4817
/* 4213 */    MCD::OPC_Decode, 212, 1, 9, // Opcode: DPAQX_SA_W_PH
/* 4217 */    MCD::OPC_FilterValue, 27, 84, 2, // Skip to: 4817
/* 4221 */    MCD::OPC_CheckPredicate, 12, 80, 2, // Skip to: 4817
/* 4225 */    MCD::OPC_CheckField, 13, 3, 0, 74, 2, // Skip to: 4817
/* 4231 */    MCD::OPC_Decode, 228, 1, 9, // Opcode: DPSQX_SA_W_PH
/* 4235 */    MCD::OPC_FilterValue, 49, 37, 0, // Skip to: 4276
/* 4239 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 4242 */    MCD::OPC_FilterValue, 0, 7, 0, // Skip to: 4253
/* 4246 */    MCD::OPC_CheckPredicate, 12, 55, 2, // Skip to: 4817
/* 4250 */    MCD::OPC_Decode, 44, 65, // Opcode: APPEND
/* 4253 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 4265
/* 4257 */    MCD::OPC_CheckPredicate, 12, 44, 2, // Skip to: 4817
/* 4261 */    MCD::OPC_Decode, 149, 4, 65, // Opcode: PREPEND
/* 4265 */    MCD::OPC_FilterValue, 16, 36, 2, // Skip to: 4817
/* 4269 */    MCD::OPC_CheckPredicate, 12, 32, 2, // Skip to: 4817
/* 4273 */    MCD::OPC_Decode, 116, 65, // Opcode: BALIGN
/* 4276 */    MCD::OPC_FilterValue, 56, 41, 1, // Skip to: 4577
/* 4280 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 4283 */    MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 4301
/* 4287 */    MCD::OPC_CheckPredicate, 2, 14, 2, // Skip to: 4817
/* 4291 */    MCD::OPC_CheckField, 13, 3, 0, 8, 2, // Skip to: 4817
/* 4297 */    MCD::OPC_Decode, 149, 2, 66, // Opcode: EXTR_W
/* 4301 */    MCD::OPC_FilterValue, 1, 14, 0, // Skip to: 4319
/* 4305 */    MCD::OPC_CheckPredicate, 2, 252, 1, // Skip to: 4817
/* 4309 */    MCD::OPC_CheckField, 13, 3, 0, 246, 1, // Skip to: 4817
/* 4315 */    MCD::OPC_Decode, 145, 2, 67, // Opcode: EXTRV_W
/* 4319 */    MCD::OPC_FilterValue, 2, 14, 0, // Skip to: 4337
/* 4323 */    MCD::OPC_CheckPredicate, 2, 234, 1, // Skip to: 4817
/* 4327 */    MCD::OPC_CheckField, 13, 3, 0, 228, 1, // Skip to: 4817
/* 4333 */    MCD::OPC_Decode, 138, 2, 66, // Opcode: EXTP
/* 4337 */    MCD::OPC_FilterValue, 3, 14, 0, // Skip to: 4355
/* 4341 */    MCD::OPC_CheckPredicate, 2, 216, 1, // Skip to: 4817
/* 4345 */    MCD::OPC_CheckField, 13, 3, 0, 210, 1, // Skip to: 4817
/* 4351 */    MCD::OPC_Decode, 141, 2, 67, // Opcode: EXTPV
/* 4355 */    MCD::OPC_FilterValue, 4, 14, 0, // Skip to: 4373
/* 4359 */    MCD::OPC_CheckPredicate, 2, 198, 1, // Skip to: 4817
/* 4363 */    MCD::OPC_CheckField, 13, 3, 0, 192, 1, // Skip to: 4817
/* 4369 */    MCD::OPC_Decode, 147, 2, 66, // Opcode: EXTR_R_W
/* 4373 */    MCD::OPC_FilterValue, 5, 14, 0, // Skip to: 4391
/* 4377 */    MCD::OPC_CheckPredicate, 2, 180, 1, // Skip to: 4817
/* 4381 */    MCD::OPC_CheckField, 13, 3, 0, 174, 1, // Skip to: 4817
/* 4387 */    MCD::OPC_Decode, 143, 2, 67, // Opcode: EXTRV_R_W
/* 4391 */    MCD::OPC_FilterValue, 6, 14, 0, // Skip to: 4409
/* 4395 */    MCD::OPC_CheckPredicate, 2, 162, 1, // Skip to: 4817
/* 4399 */    MCD::OPC_CheckField, 13, 3, 0, 156, 1, // Skip to: 4817
/* 4405 */    MCD::OPC_Decode, 146, 2, 66, // Opcode: EXTR_RS_W
/* 4409 */    MCD::OPC_FilterValue, 7, 14, 0, // Skip to: 4427
/* 4413 */    MCD::OPC_CheckPredicate, 2, 144, 1, // Skip to: 4817
/* 4417 */    MCD::OPC_CheckField, 13, 3, 0, 138, 1, // Skip to: 4817
/* 4423 */    MCD::OPC_Decode, 142, 2, 67, // Opcode: EXTRV_RS_W
/* 4427 */    MCD::OPC_FilterValue, 10, 14, 0, // Skip to: 4445
/* 4431 */    MCD::OPC_CheckPredicate, 2, 126, 1, // Skip to: 4817
/* 4435 */    MCD::OPC_CheckField, 13, 3, 0, 120, 1, // Skip to: 4817
/* 4441 */    MCD::OPC_Decode, 139, 2, 66, // Opcode: EXTPDP
/* 4445 */    MCD::OPC_FilterValue, 11, 14, 0, // Skip to: 4463
/* 4449 */    MCD::OPC_CheckPredicate, 2, 108, 1, // Skip to: 4817
/* 4453 */    MCD::OPC_CheckField, 13, 3, 0, 102, 1, // Skip to: 4817
/* 4459 */    MCD::OPC_Decode, 140, 2, 67, // Opcode: EXTPDPV
/* 4463 */    MCD::OPC_FilterValue, 14, 14, 0, // Skip to: 4481
/* 4467 */    MCD::OPC_CheckPredicate, 2, 90, 1, // Skip to: 4817
/* 4471 */    MCD::OPC_CheckField, 13, 3, 0, 84, 1, // Skip to: 4817
/* 4477 */    MCD::OPC_Decode, 148, 2, 66, // Opcode: EXTR_S_H
/* 4481 */    MCD::OPC_FilterValue, 15, 14, 0, // Skip to: 4499
/* 4485 */    MCD::OPC_CheckPredicate, 2, 72, 1, // Skip to: 4817
/* 4489 */    MCD::OPC_CheckField, 13, 3, 0, 66, 1, // Skip to: 4817
/* 4495 */    MCD::OPC_Decode, 144, 2, 67, // Opcode: EXTRV_S_H
/* 4499 */    MCD::OPC_FilterValue, 18, 8, 0, // Skip to: 4511
/* 4503 */    MCD::OPC_CheckPredicate, 2, 54, 1, // Skip to: 4817
/* 4507 */    MCD::OPC_Decode, 151, 4, 68, // Opcode: RDDSP
/* 4511 */    MCD::OPC_FilterValue, 19, 8, 0, // Skip to: 4523
/* 4515 */    MCD::OPC_CheckPredicate, 2, 42, 1, // Skip to: 4817
/* 4519 */    MCD::OPC_Decode, 189, 5, 69, // Opcode: WRDSP
/* 4523 */    MCD::OPC_FilterValue, 26, 14, 0, // Skip to: 4541
/* 4527 */    MCD::OPC_CheckPredicate, 2, 30, 1, // Skip to: 4817
/* 4531 */    MCD::OPC_CheckField, 13, 7, 0, 24, 1, // Skip to: 4817
/* 4537 */    MCD::OPC_Decode, 198, 4, 70, // Opcode: SHILO
/* 4541 */    MCD::OPC_FilterValue, 27, 14, 0, // Skip to: 4559
/* 4545 */    MCD::OPC_CheckPredicate, 2, 12, 1, // Skip to: 4817
/* 4549 */    MCD::OPC_CheckField, 13, 8, 0, 6, 1, // Skip to: 4817
/* 4555 */    MCD::OPC_Decode, 199, 4, 71, // Opcode: SHILOV
/* 4559 */    MCD::OPC_FilterValue, 31, 254, 0, // Skip to: 4817
/* 4563 */    MCD::OPC_CheckPredicate, 2, 250, 0, // Skip to: 4817
/* 4567 */    MCD::OPC_CheckField, 13, 8, 0, 244, 0, // Skip to: 4817
/* 4573 */    MCD::OPC_Decode, 208, 3, 71, // Opcode: MTHLIP
/* 4577 */    MCD::OPC_FilterValue, 59, 236, 0, // Skip to: 4817
/* 4581 */    MCD::OPC_CheckPredicate, 0, 232, 0, // Skip to: 4817
/* 4585 */    MCD::OPC_CheckField, 21, 5, 0, 226, 0, // Skip to: 4817
/* 4591 */    MCD::OPC_CheckField, 6, 5, 0, 220, 0, // Skip to: 4817
/* 4597 */    MCD::OPC_Decode, 152, 4, 72, // Opcode: RDHWR
/* 4601 */    MCD::OPC_FilterValue, 32, 8, 0, // Skip to: 4613
/* 4605 */    MCD::OPC_CheckPredicate, 15, 208, 0, // Skip to: 4817
/* 4609 */    MCD::OPC_Decode, 195, 2, 73, // Opcode: LB
/* 4613 */    MCD::OPC_FilterValue, 33, 8, 0, // Skip to: 4625
/* 4617 */    MCD::OPC_CheckPredicate, 15, 196, 0, // Skip to: 4817
/* 4621 */    MCD::OPC_Decode, 218, 2, 73, // Opcode: LH
/* 4625 */    MCD::OPC_FilterValue, 34, 8, 0, // Skip to: 4637
/* 4629 */    MCD::OPC_CheckPredicate, 15, 184, 0, // Skip to: 4817
/* 4633 */    MCD::OPC_Decode, 240, 2, 73, // Opcode: LWL
/* 4637 */    MCD::OPC_FilterValue, 35, 8, 0, // Skip to: 4649
/* 4641 */    MCD::OPC_CheckPredicate, 15, 172, 0, // Skip to: 4817
/* 4645 */    MCD::OPC_Decode, 235, 2, 73, // Opcode: LW
/* 4649 */    MCD::OPC_FilterValue, 36, 8, 0, // Skip to: 4661
/* 4653 */    MCD::OPC_CheckPredicate, 15, 160, 0, // Skip to: 4817
/* 4657 */    MCD::OPC_Decode, 200, 2, 73, // Opcode: LBu
/* 4661 */    MCD::OPC_FilterValue, 37, 8, 0, // Skip to: 4673
/* 4665 */    MCD::OPC_CheckPredicate, 15, 148, 0, // Skip to: 4817
/* 4669 */    MCD::OPC_Decode, 223, 2, 73, // Opcode: LHu
/* 4673 */    MCD::OPC_FilterValue, 38, 8, 0, // Skip to: 4685
/* 4677 */    MCD::OPC_CheckPredicate, 15, 136, 0, // Skip to: 4817
/* 4681 */    MCD::OPC_Decode, 244, 2, 73, // Opcode: LWR
/* 4685 */    MCD::OPC_FilterValue, 40, 8, 0, // Skip to: 4697
/* 4689 */    MCD::OPC_CheckPredicate, 15, 124, 0, // Skip to: 4817
/* 4693 */    MCD::OPC_Decode, 170, 4, 73, // Opcode: SB
/* 4697 */    MCD::OPC_FilterValue, 41, 8, 0, // Skip to: 4709
/* 4701 */    MCD::OPC_CheckPredicate, 15, 112, 0, // Skip to: 4817
/* 4705 */    MCD::OPC_Decode, 195, 4, 73, // Opcode: SH
/* 4709 */    MCD::OPC_FilterValue, 42, 8, 0, // Skip to: 4721
/* 4713 */    MCD::OPC_CheckPredicate, 15, 100, 0, // Skip to: 4817
/* 4717 */    MCD::OPC_Decode, 135, 5, 73, // Opcode: SWL
/* 4721 */    MCD::OPC_FilterValue, 43, 8, 0, // Skip to: 4733
/* 4725 */    MCD::OPC_CheckPredicate, 15, 88, 0, // Skip to: 4817
/* 4729 */    MCD::OPC_Decode, 130, 5, 73, // Opcode: SW
/* 4733 */    MCD::OPC_FilterValue, 46, 8, 0, // Skip to: 4745
/* 4737 */    MCD::OPC_CheckPredicate, 15, 76, 0, // Skip to: 4817
/* 4741 */    MCD::OPC_Decode, 139, 5, 73, // Opcode: SWR
/* 4745 */    MCD::OPC_FilterValue, 48, 8, 0, // Skip to: 4757
/* 4749 */    MCD::OPC_CheckPredicate, 15, 64, 0, // Skip to: 4817
/* 4753 */    MCD::OPC_Decode, 227, 2, 73, // Opcode: LL
/* 4757 */    MCD::OPC_FilterValue, 49, 8, 0, // Skip to: 4769
/* 4761 */    MCD::OPC_CheckPredicate, 15, 52, 0, // Skip to: 4817
/* 4765 */    MCD::OPC_Decode, 238, 2, 74, // Opcode: LWC1
/* 4769 */    MCD::OPC_FilterValue, 53, 8, 0, // Skip to: 4781
/* 4773 */    MCD::OPC_CheckPredicate, 16, 40, 0, // Skip to: 4817
/* 4777 */    MCD::OPC_Decode, 205, 2, 74, // Opcode: LDC1
/* 4781 */    MCD::OPC_FilterValue, 56, 8, 0, // Skip to: 4793
/* 4785 */    MCD::OPC_CheckPredicate, 15, 28, 0, // Skip to: 4817
/* 4789 */    MCD::OPC_Decode, 174, 4, 73, // Opcode: SC
/* 4793 */    MCD::OPC_FilterValue, 57, 8, 0, // Skip to: 4805
/* 4797 */    MCD::OPC_CheckPredicate, 15, 16, 0, // Skip to: 4817
/* 4801 */    MCD::OPC_Decode, 133, 5, 74, // Opcode: SWC1
/* 4805 */    MCD::OPC_FilterValue, 61, 8, 0, // Skip to: 4817
/* 4809 */    MCD::OPC_CheckPredicate, 16, 4, 0, // Skip to: 4817
/* 4813 */    MCD::OPC_Decode, 179, 4, 74, // Opcode: SDC1
/* 4817 */    MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableMips6432[] = {
/* 0 */       MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 3 */       MCD::OPC_FilterValue, 0, 112, 2, // Skip to: 631
/* 7 */       MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 10 */      MCD::OPC_FilterValue, 1, 39, 0, // Skip to: 53
/* 14 */      MCD::OPC_ExtractField, 16, 5,  // Inst{20-16} ...
/* 17 */      MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 35
/* 21 */      MCD::OPC_CheckPredicate, 17, 86, 8, // Skip to: 2159
/* 25 */      MCD::OPC_CheckField, 6, 5, 0, 80, 8, // Skip to: 2159
/* 31 */      MCD::OPC_Decode, 167, 3, 75, // Opcode: MOVF_I64
/* 35 */      MCD::OPC_FilterValue, 1, 72, 8, // Skip to: 2159
/* 39 */      MCD::OPC_CheckPredicate, 17, 68, 8, // Skip to: 2159
/* 43 */      MCD::OPC_CheckField, 6, 5, 0, 62, 8, // Skip to: 2159
/* 49 */      MCD::OPC_Decode, 181, 3, 75, // Opcode: MOVT_I64
/* 53 */      MCD::OPC_FilterValue, 8, 14, 0, // Skip to: 71
/* 57 */      MCD::OPC_CheckPredicate, 0, 50, 8, // Skip to: 2159
/* 61 */      MCD::OPC_CheckField, 6, 15, 0, 44, 8, // Skip to: 2159
/* 67 */      MCD::OPC_Decode, 190, 2, 76, // Opcode: JR64
/* 71 */      MCD::OPC_FilterValue, 9, 15, 0, // Skip to: 90
/* 75 */      MCD::OPC_CheckPredicate, 0, 32, 8, // Skip to: 2159
/* 79 */      MCD::OPC_CheckField, 6, 15, 224, 7, 25, 8, // Skip to: 2159
/* 86 */      MCD::OPC_Decode, 188, 2, 76, // Opcode: JALR64
/* 90 */      MCD::OPC_FilterValue, 10, 14, 0, // Skip to: 108
/* 94 */      MCD::OPC_CheckPredicate, 17, 13, 8, // Skip to: 2159
/* 98 */      MCD::OPC_CheckField, 6, 5, 0, 7, 8, // Skip to: 2159
/* 104 */     MCD::OPC_Decode, 190, 3, 77, // Opcode: MOVZ_I_I64
/* 108 */     MCD::OPC_FilterValue, 11, 14, 0, // Skip to: 126
/* 112 */     MCD::OPC_CheckPredicate, 17, 251, 7, // Skip to: 2159
/* 116 */     MCD::OPC_CheckField, 6, 5, 0, 245, 7, // Skip to: 2159
/* 122 */     MCD::OPC_Decode, 176, 3, 77, // Opcode: MOVN_I_I64
/* 126 */     MCD::OPC_FilterValue, 16, 20, 0, // Skip to: 150
/* 130 */     MCD::OPC_CheckPredicate, 0, 233, 7, // Skip to: 2159
/* 134 */     MCD::OPC_CheckField, 16, 10, 0, 227, 7, // Skip to: 2159
/* 140 */     MCD::OPC_CheckField, 6, 5, 0, 221, 7, // Skip to: 2159
/* 146 */     MCD::OPC_Decode, 159, 3, 78, // Opcode: MFHI64
/* 150 */     MCD::OPC_FilterValue, 17, 14, 0, // Skip to: 168
/* 154 */     MCD::OPC_CheckPredicate, 0, 209, 7, // Skip to: 2159
/* 158 */     MCD::OPC_CheckField, 6, 15, 0, 203, 7, // Skip to: 2159
/* 164 */     MCD::OPC_Decode, 207, 3, 76, // Opcode: MTHI64
/* 168 */     MCD::OPC_FilterValue, 18, 20, 0, // Skip to: 192
/* 172 */     MCD::OPC_CheckPredicate, 0, 191, 7, // Skip to: 2159
/* 176 */     MCD::OPC_CheckField, 16, 10, 0, 185, 7, // Skip to: 2159
/* 182 */     MCD::OPC_CheckField, 6, 5, 0, 179, 7, // Skip to: 2159
/* 188 */     MCD::OPC_Decode, 161, 3, 78, // Opcode: MFLO64
/* 192 */     MCD::OPC_FilterValue, 19, 14, 0, // Skip to: 210
/* 196 */     MCD::OPC_CheckPredicate, 0, 167, 7, // Skip to: 2159
/* 200 */     MCD::OPC_CheckField, 6, 15, 0, 161, 7, // Skip to: 2159
/* 206 */     MCD::OPC_Decode, 211, 3, 76, // Opcode: MTLO64
/* 210 */     MCD::OPC_FilterValue, 20, 14, 0, // Skip to: 228
/* 214 */     MCD::OPC_CheckPredicate, 0, 149, 7, // Skip to: 2159
/* 218 */     MCD::OPC_CheckField, 6, 5, 0, 143, 7, // Skip to: 2159
/* 224 */     MCD::OPC_Decode, 252, 1, 79, // Opcode: DSLLV
/* 228 */     MCD::OPC_FilterValue, 22, 27, 0, // Skip to: 259
/* 232 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 235 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 247
/* 239 */     MCD::OPC_CheckPredicate, 0, 124, 7, // Skip to: 2159
/* 243 */     MCD::OPC_Decode, 130, 2, 79, // Opcode: DSRLV
/* 247 */     MCD::OPC_FilterValue, 1, 116, 7, // Skip to: 2159
/* 251 */     MCD::OPC_CheckPredicate, 18, 112, 7, // Skip to: 2159
/* 255 */     MCD::OPC_Decode, 245, 1, 79, // Opcode: DROTRV
/* 259 */     MCD::OPC_FilterValue, 23, 14, 0, // Skip to: 277
/* 263 */     MCD::OPC_CheckPredicate, 0, 100, 7, // Skip to: 2159
/* 267 */     MCD::OPC_CheckField, 6, 5, 0, 94, 7, // Skip to: 2159
/* 273 */     MCD::OPC_Decode, 255, 1, 79, // Opcode: DSRAV
/* 277 */     MCD::OPC_FilterValue, 28, 14, 0, // Skip to: 295
/* 281 */     MCD::OPC_CheckPredicate, 0, 82, 7, // Skip to: 2159
/* 285 */     MCD::OPC_CheckField, 6, 10, 0, 76, 7, // Skip to: 2159
/* 291 */     MCD::OPC_Decode, 210, 1, 80, // Opcode: DMULT
/* 295 */     MCD::OPC_FilterValue, 29, 14, 0, // Skip to: 313
/* 299 */     MCD::OPC_CheckPredicate, 0, 64, 7, // Skip to: 2159
/* 303 */     MCD::OPC_CheckField, 6, 10, 0, 58, 7, // Skip to: 2159
/* 309 */     MCD::OPC_Decode, 211, 1, 80, // Opcode: DMULTu
/* 313 */     MCD::OPC_FilterValue, 30, 14, 0, // Skip to: 331
/* 317 */     MCD::OPC_CheckPredicate, 0, 46, 7, // Skip to: 2159
/* 321 */     MCD::OPC_CheckField, 6, 10, 0, 40, 7, // Skip to: 2159
/* 327 */     MCD::OPC_Decode, 247, 1, 80, // Opcode: DSDIV
/* 331 */     MCD::OPC_FilterValue, 31, 14, 0, // Skip to: 349
/* 335 */     MCD::OPC_CheckPredicate, 0, 28, 7, // Skip to: 2159
/* 339 */     MCD::OPC_CheckField, 6, 10, 0, 22, 7, // Skip to: 2159
/* 345 */     MCD::OPC_Decode, 132, 2, 80, // Opcode: DUDIV
/* 349 */     MCD::OPC_FilterValue, 36, 13, 0, // Skip to: 366
/* 353 */     MCD::OPC_CheckPredicate, 0, 10, 7, // Skip to: 2159
/* 357 */     MCD::OPC_CheckField, 6, 5, 0, 4, 7, // Skip to: 2159
/* 363 */     MCD::OPC_Decode, 42, 81, // Opcode: AND64
/* 366 */     MCD::OPC_FilterValue, 37, 14, 0, // Skip to: 384
/* 370 */     MCD::OPC_CheckPredicate, 0, 249, 6, // Skip to: 2159
/* 374 */     MCD::OPC_CheckField, 6, 5, 0, 243, 6, // Skip to: 2159
/* 380 */     MCD::OPC_Decode, 253, 3, 81, // Opcode: OR64
/* 384 */     MCD::OPC_FilterValue, 38, 14, 0, // Skip to: 402
/* 388 */     MCD::OPC_CheckPredicate, 0, 231, 6, // Skip to: 2159
/* 392 */     MCD::OPC_CheckField, 6, 5, 0, 225, 6, // Skip to: 2159
/* 398 */     MCD::OPC_Decode, 192, 5, 81, // Opcode: XOR64
/* 402 */     MCD::OPC_FilterValue, 39, 14, 0, // Skip to: 420
/* 406 */     MCD::OPC_CheckPredicate, 0, 213, 6, // Skip to: 2159
/* 410 */     MCD::OPC_CheckField, 6, 5, 0, 207, 6, // Skip to: 2159
/* 416 */     MCD::OPC_Decode, 249, 3, 81, // Opcode: NOR64
/* 420 */     MCD::OPC_FilterValue, 42, 14, 0, // Skip to: 438
/* 424 */     MCD::OPC_CheckPredicate, 0, 195, 6, // Skip to: 2159
/* 428 */     MCD::OPC_CheckField, 6, 5, 0, 189, 6, // Skip to: 2159
/* 434 */     MCD::OPC_Decode, 230, 4, 82, // Opcode: SLT64
/* 438 */     MCD::OPC_FilterValue, 43, 14, 0, // Skip to: 456
/* 442 */     MCD::OPC_CheckPredicate, 0, 177, 6, // Skip to: 2159
/* 446 */     MCD::OPC_CheckField, 6, 5, 0, 171, 6, // Skip to: 2159
/* 452 */     MCD::OPC_Decode, 236, 4, 82, // Opcode: SLTu64
/* 456 */     MCD::OPC_FilterValue, 44, 14, 0, // Skip to: 474
/* 460 */     MCD::OPC_CheckPredicate, 0, 159, 6, // Skip to: 2159
/* 464 */     MCD::OPC_CheckField, 6, 5, 0, 153, 6, // Skip to: 2159
/* 470 */     MCD::OPC_Decode, 191, 1, 81, // Opcode: DADD
/* 474 */     MCD::OPC_FilterValue, 45, 14, 0, // Skip to: 492
/* 478 */     MCD::OPC_CheckPredicate, 0, 141, 6, // Skip to: 2159
/* 482 */     MCD::OPC_CheckField, 6, 5, 0, 135, 6, // Skip to: 2159
/* 488 */     MCD::OPC_Decode, 194, 1, 81, // Opcode: DADDu
/* 492 */     MCD::OPC_FilterValue, 47, 14, 0, // Skip to: 510
/* 496 */     MCD::OPC_CheckPredicate, 0, 123, 6, // Skip to: 2159
/* 500 */     MCD::OPC_CheckField, 6, 5, 0, 117, 6, // Skip to: 2159
/* 506 */     MCD::OPC_Decode, 131, 2, 81, // Opcode: DSUBu
/* 510 */     MCD::OPC_FilterValue, 56, 14, 0, // Skip to: 528
/* 514 */     MCD::OPC_CheckPredicate, 0, 105, 6, // Skip to: 2159
/* 518 */     MCD::OPC_CheckField, 21, 5, 0, 99, 6, // Skip to: 2159
/* 524 */     MCD::OPC_Decode, 249, 1, 83, // Opcode: DSLL
/* 528 */     MCD::OPC_FilterValue, 58, 27, 0, // Skip to: 559
/* 532 */     MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 535 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 547
/* 539 */     MCD::OPC_CheckPredicate, 0, 80, 6, // Skip to: 2159
/* 543 */     MCD::OPC_Decode, 128, 2, 83, // Opcode: DSRL
/* 547 */     MCD::OPC_FilterValue, 1, 72, 6, // Skip to: 2159
/* 551 */     MCD::OPC_CheckPredicate, 18, 68, 6, // Skip to: 2159
/* 555 */     MCD::OPC_Decode, 244, 1, 83, // Opcode: DROTR
/* 559 */     MCD::OPC_FilterValue, 59, 14, 0, // Skip to: 577
/* 563 */     MCD::OPC_CheckPredicate, 0, 56, 6, // Skip to: 2159
/* 567 */     MCD::OPC_CheckField, 21, 5, 0, 50, 6, // Skip to: 2159
/* 573 */     MCD::OPC_Decode, 253, 1, 83, // Opcode: DSRA
/* 577 */     MCD::OPC_FilterValue, 60, 14, 0, // Skip to: 595
/* 581 */     MCD::OPC_CheckPredicate, 0, 38, 6, // Skip to: 2159
/* 585 */     MCD::OPC_CheckField, 21, 5, 0, 32, 6, // Skip to: 2159
/* 591 */     MCD::OPC_Decode, 250, 1, 83, // Opcode: DSLL32
/* 595 */     MCD::OPC_FilterValue, 62, 14, 0, // Skip to: 613
/* 599 */     MCD::OPC_CheckPredicate, 0, 20, 6, // Skip to: 2159
/* 603 */     MCD::OPC_CheckField, 21, 5, 0, 14, 6, // Skip to: 2159
/* 609 */     MCD::OPC_Decode, 129, 2, 83, // Opcode: DSRL32
/* 613 */     MCD::OPC_FilterValue, 63, 6, 6, // Skip to: 2159
/* 617 */     MCD::OPC_CheckPredicate, 0, 2, 6, // Skip to: 2159
/* 621 */     MCD::OPC_CheckField, 21, 5, 0, 252, 5, // Skip to: 2159
/* 627 */     MCD::OPC_Decode, 254, 1, 83, // Opcode: DSRA32
/* 631 */     MCD::OPC_FilterValue, 1, 26, 0, // Skip to: 661
/* 635 */     MCD::OPC_ExtractField, 16, 5,  // Inst{20-16} ...
/* 638 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 650
/* 642 */     MCD::OPC_CheckPredicate, 0, 233, 5, // Skip to: 2159
/* 646 */     MCD::OPC_Decode, 131, 1, 84, // Opcode: BLTZ64
/* 650 */     MCD::OPC_FilterValue, 1, 225, 5, // Skip to: 2159
/* 654 */     MCD::OPC_CheckPredicate, 0, 221, 5, // Skip to: 2159
/* 658 */     MCD::OPC_Decode, 123, 84, // Opcode: BGEZ64
/* 661 */     MCD::OPC_FilterValue, 4, 7, 0, // Skip to: 672
/* 665 */     MCD::OPC_CheckPredicate, 0, 210, 5, // Skip to: 2159
/* 669 */     MCD::OPC_Decode, 121, 85, // Opcode: BEQ64
/* 672 */     MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 684
/* 676 */     MCD::OPC_CheckPredicate, 0, 199, 5, // Skip to: 2159
/* 680 */     MCD::OPC_Decode, 134, 1, 85, // Opcode: BNE64
/* 684 */     MCD::OPC_FilterValue, 6, 14, 0, // Skip to: 702
/* 688 */     MCD::OPC_CheckPredicate, 0, 187, 5, // Skip to: 2159
/* 692 */     MCD::OPC_CheckField, 16, 5, 0, 181, 5, // Skip to: 2159
/* 698 */     MCD::OPC_Decode, 129, 1, 84, // Opcode: BLEZ64
/* 702 */     MCD::OPC_FilterValue, 7, 13, 0, // Skip to: 719
/* 706 */     MCD::OPC_CheckPredicate, 0, 169, 5, // Skip to: 2159
/* 710 */     MCD::OPC_CheckField, 16, 5, 0, 163, 5, // Skip to: 2159
/* 716 */     MCD::OPC_Decode, 126, 84, // Opcode: BGTZ64
/* 719 */     MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 731
/* 723 */     MCD::OPC_CheckPredicate, 0, 152, 5, // Skip to: 2159
/* 727 */     MCD::OPC_Decode, 232, 4, 86, // Opcode: SLTi64
/* 731 */     MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 743
/* 735 */     MCD::OPC_CheckPredicate, 0, 140, 5, // Skip to: 2159
/* 739 */     MCD::OPC_Decode, 234, 4, 86, // Opcode: SLTiu64
/* 743 */     MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 755
/* 747 */     MCD::OPC_CheckPredicate, 0, 128, 5, // Skip to: 2159
/* 751 */     MCD::OPC_Decode, 195, 1, 87, // Opcode: DANDi
/* 755 */     MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 767
/* 759 */     MCD::OPC_CheckPredicate, 0, 116, 5, // Skip to: 2159
/* 763 */     MCD::OPC_Decode, 255, 3, 87, // Opcode: ORi64
/* 767 */     MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 779
/* 771 */     MCD::OPC_CheckPredicate, 0, 104, 5, // Skip to: 2159
/* 775 */     MCD::OPC_Decode, 194, 5, 87, // Opcode: XORi64
/* 779 */     MCD::OPC_FilterValue, 15, 14, 0, // Skip to: 797
/* 783 */     MCD::OPC_CheckPredicate, 0, 92, 5, // Skip to: 2159
/* 787 */     MCD::OPC_CheckField, 21, 5, 0, 86, 5, // Skip to: 2159
/* 793 */     MCD::OPC_Decode, 234, 2, 88, // Opcode: LUi64
/* 797 */     MCD::OPC_FilterValue, 16, 75, 0, // Skip to: 876
/* 801 */     MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 804 */     MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 822
/* 808 */     MCD::OPC_CheckPredicate, 0, 67, 5, // Skip to: 2159
/* 812 */     MCD::OPC_CheckField, 3, 8, 0, 61, 5, // Skip to: 2159
/* 818 */     MCD::OPC_Decode, 154, 3, 89, // Opcode: MFC0_3OP64
/* 822 */     MCD::OPC_FilterValue, 1, 14, 0, // Skip to: 840
/* 826 */     MCD::OPC_CheckPredicate, 0, 49, 5, // Skip to: 2159
/* 830 */     MCD::OPC_CheckField, 3, 8, 0, 43, 5, // Skip to: 2159
/* 836 */     MCD::OPC_Decode, 204, 1, 89, // Opcode: DMFC0_3OP64
/* 840 */     MCD::OPC_FilterValue, 4, 14, 0, // Skip to: 858
/* 844 */     MCD::OPC_CheckPredicate, 0, 31, 5, // Skip to: 2159
/* 848 */     MCD::OPC_CheckField, 3, 8, 0, 25, 5, // Skip to: 2159
/* 854 */     MCD::OPC_Decode, 202, 3, 90, // Opcode: MTC0_3OP64
/* 858 */     MCD::OPC_FilterValue, 5, 17, 5, // Skip to: 2159
/* 862 */     MCD::OPC_CheckPredicate, 0, 13, 5, // Skip to: 2159
/* 866 */     MCD::OPC_CheckField, 3, 8, 0, 7, 5, // Skip to: 2159
/* 872 */     MCD::OPC_Decode, 207, 1, 90, // Opcode: DMTC0_3OP64
/* 876 */     MCD::OPC_FilterValue, 17, 89, 2, // Skip to: 1481
/* 880 */     MCD::OPC_ExtractField, 4, 2,  // Inst{5-4} ...
/* 883 */     MCD::OPC_FilterValue, 0, 103, 1, // Skip to: 1246
/* 887 */     MCD::OPC_ExtractField, 0, 4,  // Inst{3-0} ...
/* 890 */     MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 908
/* 894 */     MCD::OPC_CheckPredicate, 19, 237, 4, // Skip to: 2159
/* 898 */     MCD::OPC_CheckField, 21, 5, 17, 231, 4, // Skip to: 2159
/* 904 */     MCD::OPC_Decode, 155, 2, 91, // Opcode: FADD_D64
/* 908 */     MCD::OPC_FilterValue, 1, 14, 0, // Skip to: 926
/* 912 */     MCD::OPC_CheckPredicate, 19, 219, 4, // Skip to: 2159
/* 916 */     MCD::OPC_CheckField, 21, 5, 17, 213, 4, // Skip to: 2159
/* 922 */     MCD::OPC_Decode, 181, 2, 91, // Opcode: FSUB_D64
/* 926 */     MCD::OPC_FilterValue, 2, 14, 0, // Skip to: 944
/* 930 */     MCD::OPC_CheckPredicate, 19, 201, 4, // Skip to: 2159
/* 934 */     MCD::OPC_CheckField, 21, 5, 17, 195, 4, // Skip to: 2159
/* 940 */     MCD::OPC_Decode, 172, 2, 91, // Opcode: FMUL_D64
/* 944 */     MCD::OPC_FilterValue, 3, 14, 0, // Skip to: 962
/* 948 */     MCD::OPC_CheckPredicate, 19, 183, 4, // Skip to: 2159
/* 952 */     MCD::OPC_CheckField, 21, 5, 17, 177, 4, // Skip to: 2159
/* 958 */     MCD::OPC_Decode, 161, 2, 91, // Opcode: FDIV_D64
/* 962 */     MCD::OPC_FilterValue, 4, 15, 0, // Skip to: 981
/* 966 */     MCD::OPC_CheckPredicate, 19, 165, 4, // Skip to: 2159
/* 970 */     MCD::OPC_CheckField, 16, 10, 160, 4, 158, 4, // Skip to: 2159
/* 977 */     MCD::OPC_Decode, 178, 2, 38, // Opcode: FSQRT_D64
/* 981 */     MCD::OPC_FilterValue, 5, 15, 0, // Skip to: 1000
/* 985 */     MCD::OPC_CheckPredicate, 3, 146, 4, // Skip to: 2159
/* 989 */     MCD::OPC_CheckField, 16, 10, 160, 4, 139, 4, // Skip to: 2159
/* 996 */     MCD::OPC_Decode, 152, 2, 38, // Opcode: FABS_D64
/* 1000 */    MCD::OPC_FilterValue, 6, 15, 0, // Skip to: 1019
/* 1004 */    MCD::OPC_CheckPredicate, 19, 127, 4, // Skip to: 2159
/* 1008 */    MCD::OPC_CheckField, 16, 10, 160, 4, 120, 4, // Skip to: 2159
/* 1015 */    MCD::OPC_Decode, 169, 2, 38, // Opcode: FMOV_D64
/* 1019 */    MCD::OPC_FilterValue, 7, 15, 0, // Skip to: 1038
/* 1023 */    MCD::OPC_CheckPredicate, 3, 108, 4, // Skip to: 2159
/* 1027 */    MCD::OPC_CheckField, 16, 10, 160, 4, 101, 4, // Skip to: 2159
/* 1034 */    MCD::OPC_Decode, 175, 2, 38, // Opcode: FNEG_D64
/* 1038 */    MCD::OPC_FilterValue, 8, 29, 0, // Skip to: 1071
/* 1042 */    MCD::OPC_ExtractField, 16, 10,  // Inst{25-16} ...
/* 1045 */    MCD::OPC_FilterValue, 128, 4, 8, 0, // Skip to: 1058
/* 1050 */    MCD::OPC_CheckPredicate, 19, 81, 4, // Skip to: 2159
/* 1054 */    MCD::OPC_Decode, 162, 4, 31, // Opcode: ROUND_L_S
/* 1058 */    MCD::OPC_FilterValue, 160, 4, 72, 4, // Skip to: 2159
/* 1063 */    MCD::OPC_CheckPredicate, 19, 68, 4, // Skip to: 2159
/* 1067 */    MCD::OPC_Decode, 161, 4, 38, // Opcode: ROUND_L_D64
/* 1071 */    MCD::OPC_FilterValue, 9, 29, 0, // Skip to: 1104
/* 1075 */    MCD::OPC_ExtractField, 16, 10,  // Inst{25-16} ...
/* 1078 */    MCD::OPC_FilterValue, 128, 4, 8, 0, // Skip to: 1091
/* 1083 */    MCD::OPC_CheckPredicate, 19, 48, 4, // Skip to: 2159
/* 1087 */    MCD::OPC_Decode, 184, 5, 31, // Opcode: TRUNC_L_S
/* 1091 */    MCD::OPC_FilterValue, 160, 4, 39, 4, // Skip to: 2159
/* 1096 */    MCD::OPC_CheckPredicate, 19, 35, 4, // Skip to: 2159
/* 1100 */    MCD::OPC_Decode, 183, 5, 38, // Opcode: TRUNC_L_D64
/* 1104 */    MCD::OPC_FilterValue, 10, 29, 0, // Skip to: 1137
/* 1108 */    MCD::OPC_ExtractField, 16, 10,  // Inst{25-16} ...
/* 1111 */    MCD::OPC_FilterValue, 128, 4, 8, 0, // Skip to: 1124
/* 1116 */    MCD::OPC_CheckPredicate, 19, 15, 4, // Skip to: 2159
/* 1120 */    MCD::OPC_Decode, 156, 1, 31, // Opcode: CEIL_L_S
/* 1124 */    MCD::OPC_FilterValue, 160, 4, 6, 4, // Skip to: 2159
/* 1129 */    MCD::OPC_CheckPredicate, 19, 2, 4, // Skip to: 2159
/* 1133 */    MCD::OPC_Decode, 155, 1, 38, // Opcode: CEIL_L_D64
/* 1137 */    MCD::OPC_FilterValue, 11, 29, 0, // Skip to: 1170
/* 1141 */    MCD::OPC_ExtractField, 16, 10,  // Inst{25-16} ...
/* 1144 */    MCD::OPC_FilterValue, 128, 4, 8, 0, // Skip to: 1157
/* 1149 */    MCD::OPC_CheckPredicate, 19, 238, 3, // Skip to: 2159
/* 1153 */    MCD::OPC_Decode, 164, 2, 31, // Opcode: FLOOR_L_S
/* 1157 */    MCD::OPC_FilterValue, 160, 4, 229, 3, // Skip to: 2159
/* 1162 */    MCD::OPC_CheckPredicate, 19, 225, 3, // Skip to: 2159
/* 1166 */    MCD::OPC_Decode, 163, 2, 38, // Opcode: FLOOR_L_D64
/* 1170 */    MCD::OPC_FilterValue, 12, 15, 0, // Skip to: 1189
/* 1174 */    MCD::OPC_CheckPredicate, 19, 213, 3, // Skip to: 2159
/* 1178 */    MCD::OPC_CheckField, 16, 10, 160, 4, 206, 3, // Skip to: 2159
/* 1185 */    MCD::OPC_Decode, 164, 4, 92, // Opcode: ROUND_W_D64
/* 1189 */    MCD::OPC_FilterValue, 13, 15, 0, // Skip to: 1208
/* 1193 */    MCD::OPC_CheckPredicate, 19, 194, 3, // Skip to: 2159
/* 1197 */    MCD::OPC_CheckField, 16, 10, 160, 4, 187, 3, // Skip to: 2159
/* 1204 */    MCD::OPC_Decode, 186, 5, 92, // Opcode: TRUNC_W_D64
/* 1208 */    MCD::OPC_FilterValue, 14, 15, 0, // Skip to: 1227
/* 1212 */    MCD::OPC_CheckPredicate, 19, 175, 3, // Skip to: 2159
/* 1216 */    MCD::OPC_CheckField, 16, 10, 160, 4, 168, 3, // Skip to: 2159
/* 1223 */    MCD::OPC_Decode, 158, 1, 92, // Opcode: CEIL_W_D64
/* 1227 */    MCD::OPC_FilterValue, 15, 160, 3, // Skip to: 2159
/* 1231 */    MCD::OPC_CheckPredicate, 19, 156, 3, // Skip to: 2159
/* 1235 */    MCD::OPC_CheckField, 16, 10, 160, 4, 149, 3, // Skip to: 2159
/* 1242 */    MCD::OPC_Decode, 166, 2, 92, // Opcode: FLOOR_W_D64
/* 1246 */    MCD::OPC_FilterValue, 1, 98, 0, // Skip to: 1348
/* 1250 */    MCD::OPC_ExtractField, 0, 4,  // Inst{3-0} ...
/* 1253 */    MCD::OPC_FilterValue, 1, 29, 0, // Skip to: 1286
/* 1257 */    MCD::OPC_ExtractField, 16, 10,  // Inst{25-16} ...
/* 1260 */    MCD::OPC_FilterValue, 160, 4, 8, 0, // Skip to: 1273
/* 1265 */    MCD::OPC_CheckPredicate, 19, 122, 3, // Skip to: 2159
/* 1269 */    MCD::OPC_Decode, 165, 3, 93, // Opcode: MOVF_D64
/* 1273 */    MCD::OPC_FilterValue, 161, 4, 113, 3, // Skip to: 2159
/* 1278 */    MCD::OPC_CheckPredicate, 19, 109, 3, // Skip to: 2159
/* 1282 */    MCD::OPC_Decode, 179, 3, 93, // Opcode: MOVT_D64
/* 1286 */    MCD::OPC_FilterValue, 2, 27, 0, // Skip to: 1317
/* 1290 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 1293 */    MCD::OPC_FilterValue, 16, 8, 0, // Skip to: 1305
/* 1297 */    MCD::OPC_CheckPredicate, 17, 90, 3, // Skip to: 2159
/* 1301 */    MCD::OPC_Decode, 186, 3, 94, // Opcode: MOVZ_I64_S
/* 1305 */    MCD::OPC_FilterValue, 17, 82, 3, // Skip to: 2159
/* 1309 */    MCD::OPC_CheckPredicate, 19, 78, 3, // Skip to: 2159
/* 1313 */    MCD::OPC_Decode, 188, 3, 95, // Opcode: MOVZ_I_D64
/* 1317 */    MCD::OPC_FilterValue, 3, 70, 3, // Skip to: 2159
/* 1321 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 1324 */    MCD::OPC_FilterValue, 16, 8, 0, // Skip to: 1336
/* 1328 */    MCD::OPC_CheckPredicate, 17, 59, 3, // Skip to: 2159
/* 1332 */    MCD::OPC_Decode, 172, 3, 94, // Opcode: MOVN_I64_S
/* 1336 */    MCD::OPC_FilterValue, 17, 51, 3, // Skip to: 2159
/* 1340 */    MCD::OPC_CheckPredicate, 19, 47, 3, // Skip to: 2159
/* 1344 */    MCD::OPC_Decode, 174, 3, 95, // Opcode: MOVN_I_D64
/* 1348 */    MCD::OPC_FilterValue, 2, 105, 0, // Skip to: 1457
/* 1352 */    MCD::OPC_ExtractField, 16, 10,  // Inst{25-16} ...
/* 1355 */    MCD::OPC_FilterValue, 128, 4, 14, 0, // Skip to: 1374
/* 1360 */    MCD::OPC_CheckPredicate, 19, 27, 3, // Skip to: 2159
/* 1364 */    MCD::OPC_CheckField, 0, 4, 1, 21, 3, // Skip to: 2159
/* 1370 */    MCD::OPC_Decode, 180, 1, 31, // Opcode: CVT_D64_S
/* 1374 */    MCD::OPC_FilterValue, 160, 4, 27, 0, // Skip to: 1406
/* 1379 */    MCD::OPC_ExtractField, 0, 4,  // Inst{3-0} ...
/* 1382 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 1394
/* 1386 */    MCD::OPC_CheckPredicate, 19, 1, 3, // Skip to: 2159
/* 1390 */    MCD::OPC_Decode, 185, 1, 92, // Opcode: CVT_S_D64
/* 1394 */    MCD::OPC_FilterValue, 4, 249, 2, // Skip to: 2159
/* 1398 */    MCD::OPC_CheckPredicate, 19, 245, 2, // Skip to: 2159
/* 1402 */    MCD::OPC_Decode, 189, 1, 92, // Opcode: CVT_W_D64
/* 1406 */    MCD::OPC_FilterValue, 128, 5, 14, 0, // Skip to: 1425
/* 1411 */    MCD::OPC_CheckPredicate, 19, 232, 2, // Skip to: 2159
/* 1415 */    MCD::OPC_CheckField, 0, 4, 1, 226, 2, // Skip to: 2159
/* 1421 */    MCD::OPC_Decode, 181, 1, 31, // Opcode: CVT_D64_W
/* 1425 */    MCD::OPC_FilterValue, 160, 5, 217, 2, // Skip to: 2159
/* 1430 */    MCD::OPC_ExtractField, 0, 4,  // Inst{3-0} ...
/* 1433 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 1445
/* 1437 */    MCD::OPC_CheckPredicate, 19, 206, 2, // Skip to: 2159
/* 1441 */    MCD::OPC_Decode, 186, 1, 92, // Opcode: CVT_S_L
/* 1445 */    MCD::OPC_FilterValue, 1, 198, 2, // Skip to: 2159
/* 1449 */    MCD::OPC_CheckPredicate, 19, 194, 2, // Skip to: 2159
/* 1453 */    MCD::OPC_Decode, 179, 1, 38, // Opcode: CVT_D64_L
/* 1457 */    MCD::OPC_FilterValue, 3, 186, 2, // Skip to: 2159
/* 1461 */    MCD::OPC_CheckPredicate, 19, 182, 2, // Skip to: 2159
/* 1465 */    MCD::OPC_CheckField, 21, 5, 17, 176, 2, // Skip to: 2159
/* 1471 */    MCD::OPC_CheckField, 6, 5, 0, 170, 2, // Skip to: 2159
/* 1477 */    MCD::OPC_Decode, 158, 2, 96, // Opcode: FCMP_D64
/* 1481 */    MCD::OPC_FilterValue, 18, 75, 0, // Skip to: 1560
/* 1485 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 1488 */    MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 1506
/* 1492 */    MCD::OPC_CheckPredicate, 0, 151, 2, // Skip to: 2159
/* 1496 */    MCD::OPC_CheckField, 3, 8, 0, 145, 2, // Skip to: 2159
/* 1502 */    MCD::OPC_Decode, 157, 3, 89, // Opcode: MFC2_3OP64
/* 1506 */    MCD::OPC_FilterValue, 1, 14, 0, // Skip to: 1524
/* 1510 */    MCD::OPC_CheckPredicate, 0, 133, 2, // Skip to: 2159
/* 1514 */    MCD::OPC_CheckField, 3, 8, 0, 127, 2, // Skip to: 2159
/* 1520 */    MCD::OPC_Decode, 206, 1, 89, // Opcode: DMFC2_3OP64
/* 1524 */    MCD::OPC_FilterValue, 4, 14, 0, // Skip to: 1542
/* 1528 */    MCD::OPC_CheckPredicate, 0, 115, 2, // Skip to: 2159
/* 1532 */    MCD::OPC_CheckField, 3, 8, 0, 109, 2, // Skip to: 2159
/* 1538 */    MCD::OPC_Decode, 205, 3, 90, // Opcode: MTC2_3OP64
/* 1542 */    MCD::OPC_FilterValue, 5, 101, 2, // Skip to: 2159
/* 1546 */    MCD::OPC_CheckPredicate, 0, 97, 2, // Skip to: 2159
/* 1550 */    MCD::OPC_CheckField, 3, 8, 0, 91, 2, // Skip to: 2159
/* 1556 */    MCD::OPC_Decode, 209, 1, 90, // Opcode: DMTC2_3OP64
/* 1560 */    MCD::OPC_FilterValue, 19, 75, 0, // Skip to: 1639
/* 1564 */    MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 1567 */    MCD::OPC_FilterValue, 1, 14, 0, // Skip to: 1585
/* 1571 */    MCD::OPC_CheckPredicate, 20, 72, 2, // Skip to: 2159
/* 1575 */    MCD::OPC_CheckField, 11, 5, 0, 66, 2, // Skip to: 2159
/* 1581 */    MCD::OPC_Decode, 213, 2, 97, // Opcode: LDXC164
/* 1585 */    MCD::OPC_FilterValue, 5, 14, 0, // Skip to: 1603
/* 1589 */    MCD::OPC_CheckPredicate, 17, 54, 2, // Skip to: 2159
/* 1593 */    MCD::OPC_CheckField, 11, 5, 0, 48, 2, // Skip to: 2159
/* 1599 */    MCD::OPC_Decode, 232, 2, 97, // Opcode: LUXC164
/* 1603 */    MCD::OPC_FilterValue, 9, 14, 0, // Skip to: 1621
/* 1607 */    MCD::OPC_CheckPredicate, 20, 36, 2, // Skip to: 2159
/* 1611 */    MCD::OPC_CheckField, 6, 5, 0, 30, 2, // Skip to: 2159
/* 1617 */    MCD::OPC_Decode, 188, 4, 98, // Opcode: SDXC164
/* 1621 */    MCD::OPC_FilterValue, 13, 22, 2, // Skip to: 2159
/* 1625 */    MCD::OPC_CheckPredicate, 17, 18, 2, // Skip to: 2159
/* 1629 */    MCD::OPC_CheckField, 6, 5, 0, 12, 2, // Skip to: 2159
/* 1635 */    MCD::OPC_Decode, 129, 5, 98, // Opcode: SUXC164
/* 1639 */    MCD::OPC_FilterValue, 24, 8, 0, // Skip to: 1651
/* 1643 */    MCD::OPC_CheckPredicate, 0, 0, 2, // Skip to: 2159
/* 1647 */    MCD::OPC_Decode, 192, 1, 87, // Opcode: DADDi
/* 1651 */    MCD::OPC_FilterValue, 25, 8, 0, // Skip to: 1663
/* 1655 */    MCD::OPC_CheckPredicate, 0, 244, 1, // Skip to: 2159
/* 1659 */    MCD::OPC_Decode, 193, 1, 87, // Opcode: DADDiu
/* 1663 */    MCD::OPC_FilterValue, 26, 8, 0, // Skip to: 1675
/* 1667 */    MCD::OPC_CheckPredicate, 15, 232, 1, // Skip to: 2159
/* 1671 */    MCD::OPC_Decode, 208, 2, 73, // Opcode: LDL
/* 1675 */    MCD::OPC_FilterValue, 27, 8, 0, // Skip to: 1687
/* 1679 */    MCD::OPC_CheckPredicate, 15, 220, 1, // Skip to: 2159
/* 1683 */    MCD::OPC_Decode, 210, 2, 73, // Opcode: LDR
/* 1687 */    MCD::OPC_FilterValue, 28, 27, 0, // Skip to: 1718
/* 1691 */    MCD::OPC_ExtractField, 0, 11,  // Inst{10-0} ...
/* 1694 */    MCD::OPC_FilterValue, 36, 8, 0, // Skip to: 1706
/* 1698 */    MCD::OPC_CheckPredicate, 11, 201, 1, // Skip to: 2159
/* 1702 */    MCD::OPC_Decode, 197, 1, 99, // Opcode: DCLZ
/* 1706 */    MCD::OPC_FilterValue, 37, 193, 1, // Skip to: 2159
/* 1710 */    MCD::OPC_CheckPredicate, 11, 189, 1, // Skip to: 2159
/* 1714 */    MCD::OPC_Decode, 196, 1, 99, // Opcode: DCLO
/* 1718 */    MCD::OPC_FilterValue, 31, 185, 0, // Skip to: 1907
/* 1722 */    MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 1725 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 1737
/* 1729 */    MCD::OPC_CheckPredicate, 1, 170, 1, // Skip to: 2159
/* 1733 */    MCD::OPC_Decode, 199, 1, 100, // Opcode: DEXTM
/* 1737 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 1749
/* 1741 */    MCD::OPC_CheckPredicate, 1, 158, 1, // Skip to: 2159
/* 1745 */    MCD::OPC_Decode, 200, 1, 100, // Opcode: DEXTU
/* 1749 */    MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 1761
/* 1753 */    MCD::OPC_CheckPredicate, 1, 146, 1, // Skip to: 2159
/* 1757 */    MCD::OPC_Decode, 198, 1, 100, // Opcode: DEXT
/* 1761 */    MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 1773
/* 1765 */    MCD::OPC_CheckPredicate, 1, 134, 1, // Skip to: 2159
/* 1769 */    MCD::OPC_Decode, 202, 1, 101, // Opcode: DINSM
/* 1773 */    MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 1785
/* 1777 */    MCD::OPC_CheckPredicate, 1, 122, 1, // Skip to: 2159
/* 1781 */    MCD::OPC_Decode, 203, 1, 101, // Opcode: DINSU
/* 1785 */    MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 1797
/* 1789 */    MCD::OPC_CheckPredicate, 1, 110, 1, // Skip to: 2159
/* 1793 */    MCD::OPC_Decode, 201, 1, 101, // Opcode: DINS
/* 1797 */    MCD::OPC_FilterValue, 32, 39, 0, // Skip to: 1840
/* 1801 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 1804 */    MCD::OPC_FilterValue, 16, 14, 0, // Skip to: 1822
/* 1808 */    MCD::OPC_CheckPredicate, 14, 91, 1, // Skip to: 2159
/* 1812 */    MCD::OPC_CheckField, 21, 5, 0, 85, 1, // Skip to: 2159
/* 1818 */    MCD::OPC_Decode, 192, 4, 102, // Opcode: SEB64
/* 1822 */    MCD::OPC_FilterValue, 24, 77, 1, // Skip to: 2159
/* 1826 */    MCD::OPC_CheckPredicate, 14, 73, 1, // Skip to: 2159
/* 1830 */    MCD::OPC_CheckField, 21, 5, 0, 67, 1, // Skip to: 2159
/* 1836 */    MCD::OPC_Decode, 194, 4, 102, // Opcode: SEH64
/* 1840 */    MCD::OPC_FilterValue, 36, 39, 0, // Skip to: 1883
/* 1844 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 1847 */    MCD::OPC_FilterValue, 2, 14, 0, // Skip to: 1865
/* 1851 */    MCD::OPC_CheckPredicate, 13, 48, 1, // Skip to: 2159
/* 1855 */    MCD::OPC_CheckField, 21, 5, 0, 42, 1, // Skip to: 2159
/* 1861 */    MCD::OPC_Decode, 246, 1, 102, // Opcode: DSBH
/* 1865 */    MCD::OPC_FilterValue, 5, 34, 1, // Skip to: 2159
/* 1869 */    MCD::OPC_CheckPredicate, 13, 30, 1, // Skip to: 2159
/* 1873 */    MCD::OPC_CheckField, 21, 5, 0, 24, 1, // Skip to: 2159
/* 1879 */    MCD::OPC_Decode, 248, 1, 102, // Opcode: DSHD
/* 1883 */    MCD::OPC_FilterValue, 59, 16, 1, // Skip to: 2159
/* 1887 */    MCD::OPC_CheckPredicate, 0, 12, 1, // Skip to: 2159
/* 1891 */    MCD::OPC_CheckField, 21, 5, 0, 6, 1, // Skip to: 2159
/* 1897 */    MCD::OPC_CheckField, 6, 5, 0, 0, 1, // Skip to: 2159
/* 1903 */    MCD::OPC_Decode, 153, 4, 103, // Opcode: RDHWR64
/* 1907 */    MCD::OPC_FilterValue, 32, 8, 0, // Skip to: 1919
/* 1911 */    MCD::OPC_CheckPredicate, 15, 244, 0, // Skip to: 2159
/* 1915 */    MCD::OPC_Decode, 196, 2, 73, // Opcode: LB64
/* 1919 */    MCD::OPC_FilterValue, 33, 8, 0, // Skip to: 1931
/* 1923 */    MCD::OPC_CheckPredicate, 15, 232, 0, // Skip to: 2159
/* 1927 */    MCD::OPC_Decode, 219, 2, 73, // Opcode: LH64
/* 1931 */    MCD::OPC_FilterValue, 35, 8, 0, // Skip to: 1943
/* 1935 */    MCD::OPC_CheckPredicate, 15, 220, 0, // Skip to: 2159
/* 1939 */    MCD::OPC_Decode, 236, 2, 73, // Opcode: LW64
/* 1943 */    MCD::OPC_FilterValue, 36, 8, 0, // Skip to: 1955
/* 1947 */    MCD::OPC_CheckPredicate, 15, 208, 0, // Skip to: 2159
/* 1951 */    MCD::OPC_Decode, 201, 2, 73, // Opcode: LBu64
/* 1955 */    MCD::OPC_FilterValue, 37, 8, 0, // Skip to: 1967
/* 1959 */    MCD::OPC_CheckPredicate, 15, 196, 0, // Skip to: 2159
/* 1963 */    MCD::OPC_Decode, 224, 2, 73, // Opcode: LHu64
/* 1967 */    MCD::OPC_FilterValue, 39, 8, 0, // Skip to: 1979
/* 1971 */    MCD::OPC_CheckPredicate, 15, 184, 0, // Skip to: 2159
/* 1975 */    MCD::OPC_Decode, 252, 2, 73, // Opcode: LWu64
/* 1979 */    MCD::OPC_FilterValue, 40, 8, 0, // Skip to: 1991
/* 1983 */    MCD::OPC_CheckPredicate, 15, 172, 0, // Skip to: 2159
/* 1987 */    MCD::OPC_Decode, 171, 4, 73, // Opcode: SB64
/* 1991 */    MCD::OPC_FilterValue, 41, 8, 0, // Skip to: 2003
/* 1995 */    MCD::OPC_CheckPredicate, 15, 160, 0, // Skip to: 2159
/* 1999 */    MCD::OPC_Decode, 196, 4, 73, // Opcode: SH64
/* 2003 */    MCD::OPC_FilterValue, 43, 8, 0, // Skip to: 2015
/* 2007 */    MCD::OPC_CheckPredicate, 15, 148, 0, // Skip to: 2159
/* 2011 */    MCD::OPC_Decode, 131, 5, 73, // Opcode: SW64
/* 2015 */    MCD::OPC_FilterValue, 44, 8, 0, // Skip to: 2027
/* 2019 */    MCD::OPC_CheckPredicate, 15, 136, 0, // Skip to: 2159
/* 2023 */    MCD::OPC_Decode, 183, 4, 73, // Opcode: SDL
/* 2027 */    MCD::OPC_FilterValue, 45, 8, 0, // Skip to: 2039
/* 2031 */    MCD::OPC_CheckPredicate, 15, 124, 0, // Skip to: 2159
/* 2035 */    MCD::OPC_Decode, 185, 4, 73, // Opcode: SDR
/* 2039 */    MCD::OPC_FilterValue, 48, 8, 0, // Skip to: 2051
/* 2043 */    MCD::OPC_CheckPredicate, 21, 112, 0, // Skip to: 2159
/* 2047 */    MCD::OPC_Decode, 230, 2, 73, // Opcode: LL_P8
/* 2051 */    MCD::OPC_FilterValue, 49, 8, 0, // Skip to: 2063
/* 2055 */    MCD::OPC_CheckPredicate, 21, 100, 0, // Skip to: 2159
/* 2059 */    MCD::OPC_Decode, 239, 2, 74, // Opcode: LWC1_P8
/* 2063 */    MCD::OPC_FilterValue, 52, 8, 0, // Skip to: 2075
/* 2067 */    MCD::OPC_CheckPredicate, 15, 88, 0, // Skip to: 2159
/* 2071 */    MCD::OPC_Decode, 228, 2, 73, // Opcode: LLD
/* 2075 */    MCD::OPC_FilterValue, 53, 8, 0, // Skip to: 2087
/* 2079 */    MCD::OPC_CheckPredicate, 22, 76, 0, // Skip to: 2159
/* 2083 */    MCD::OPC_Decode, 206, 2, 74, // Opcode: LDC164
/* 2087 */    MCD::OPC_FilterValue, 55, 8, 0, // Skip to: 2099
/* 2091 */    MCD::OPC_CheckPredicate, 15, 64, 0, // Skip to: 2159
/* 2095 */    MCD::OPC_Decode, 204, 2, 73, // Opcode: LD
/* 2099 */    MCD::OPC_FilterValue, 56, 8, 0, // Skip to: 2111
/* 2103 */    MCD::OPC_CheckPredicate, 21, 52, 0, // Skip to: 2159
/* 2107 */    MCD::OPC_Decode, 177, 4, 73, // Opcode: SC_P8
/* 2111 */    MCD::OPC_FilterValue, 57, 8, 0, // Skip to: 2123
/* 2115 */    MCD::OPC_CheckPredicate, 21, 40, 0, // Skip to: 2159
/* 2119 */    MCD::OPC_Decode, 134, 5, 74, // Opcode: SWC1_P8
/* 2123 */    MCD::OPC_FilterValue, 60, 8, 0, // Skip to: 2135
/* 2127 */    MCD::OPC_CheckPredicate, 15, 28, 0, // Skip to: 2159
/* 2131 */    MCD::OPC_Decode, 175, 4, 73, // Opcode: SCD
/* 2135 */    MCD::OPC_FilterValue, 61, 8, 0, // Skip to: 2147
/* 2139 */    MCD::OPC_CheckPredicate, 22, 16, 0, // Skip to: 2159
/* 2143 */    MCD::OPC_Decode, 180, 4, 74, // Opcode: SDC164
/* 2147 */    MCD::OPC_FilterValue, 63, 8, 0, // Skip to: 2159
/* 2151 */    MCD::OPC_CheckPredicate, 15, 4, 0, // Skip to: 2159
/* 2155 */    MCD::OPC_Decode, 178, 4, 73, // Opcode: SD
/* 2159 */    MCD::OPC_Fail,
  0
};

static bool checkDecoderPredicate(unsigned Idx, uint64_t Bits) {
  switch (Idx) {
  default: llvm_unreachable("Invalid index!");
  case 0:
    return (!(Bits & Mips::FeatureMips16));
  case 1:
    return ((Bits & Mips::FeatureMips32r2) && !(Bits & Mips::FeatureMips16));
  case 2:
    return ((Bits & Mips::FeatureDSP));
  case 3:
    return ((Bits & Mips::FeatureMips32) && !(Bits & Mips::FeatureMips16));
  case 4:
    return (!(Bits & Mips::FeatureFP64Bit) && !(Bits & Mips::FeatureMips16));
  case 5:
    return ((Bits & Mips::FeatureMips32r2) && (Bits & Mips::FeatureMips64) && !(Bits & Mips::FeatureMips16));
  case 6:
    return ((Bits & Mips::FeatureMips32r2) && !(Bits & Mips::FeatureMips64) && !(Bits & Mips::FeatureMips16));
  case 7:
    return (!(Bits & Mips::FeatureMips64) && !(Bits & Mips::FeatureMips16));
  case 8:
    return ((Bits & Mips::FeatureMips32r2) && !(Bits & Mips::FeatureFP64Bit) && !(Bits & Mips::FeatureMips16));
  case 9:
    return ((Bits & Mips::FeatureMips32r2) && (Bits & Mips::FeatureMips32) && !(Bits & Mips::FeatureMips16));
  case 10:
    return ((Bits & Mips::FeatureMips32r2) && !(Bits & Mips::FeatureFP64Bit) && (Bits & Mips::FeatureMips32) && !(Bits & Mips::FeatureMips16));
  case 11:
    return ((Bits & Mips::FeatureBitCount) && !(Bits & Mips::FeatureMips16));
  case 12:
    return ((Bits & Mips::FeatureDSPR2));
  case 13:
    return ((Bits & Mips::FeatureSwap) && !(Bits & Mips::FeatureMips16));
  case 14:
    return ((Bits & Mips::FeatureSEInReg) && !(Bits & Mips::FeatureMips16));
  case 15:
    return (!(Bits & Mips::FeatureN64) && !(Bits & Mips::FeatureMips16));
  case 16:
    return (!(Bits & Mips::FeatureN64) && !(Bits & Mips::FeatureMips64) && !(Bits & Mips::FeatureMips16));
  case 17:
    return ((Bits & Mips::FeatureMips64) && !(Bits & Mips::FeatureMips16));
  case 18:
    return ((Bits & Mips::FeatureMips64r2) && !(Bits & Mips::FeatureMips16));
  case 19:
    return ((Bits & Mips::FeatureFP64Bit) && !(Bits & Mips::FeatureMips16));
  case 20:
    return ((Bits & Mips::FeatureMips64) && !(Bits & Mips::FeatureN64) && !(Bits & Mips::FeatureMips16));
  case 21:
    return ((Bits & Mips::FeatureN64) && !(Bits & Mips::FeatureMips16));
  case 22:
    return (!(Bits & Mips::FeatureN64) && (Bits & Mips::FeatureMips64) && !(Bits & Mips::FeatureMips16));
  }
}

template<typename InsnType>
static DecodeStatus decodeToMCInst(DecodeStatus S, unsigned Idx, InsnType insn, MCInst &MI,
                                   uint64_t Address, const void *Decoder) {
  InsnType tmp;
  switch (Idx) {
  default: llvm_unreachable("Invalid index!");
  case 0:
    return S;
  case 1:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 2:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 3:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 4:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 5:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 6:
    tmp = fieldFromInstruction(insn, 6, 5);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 7:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 8:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 9:
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeACRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 10:
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTarget(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 11:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTarget(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 12:
    if (DecodeJumpTarget(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 13:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTarget(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 14:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeSimm16(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 15:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 16:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 17:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 3);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 18:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 3);
    MI.addOperand(MCOperand::CreateImm(tmp));
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 19:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 20:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 21:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCCRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 22:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 23:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 24:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCCRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 25:
    if (DecodeBC1(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 26:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 27:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 28:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 29:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 30:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 31:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 32:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeCondCode(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 33:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 34:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 35:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 36:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 37:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 38:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 39:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeCondCode(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 40:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 41:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 42:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 43:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 44:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 45:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 46:
    tmp = 0;
    tmp |= (fieldFromInstruction(insn, 11, 5) << 0);
    tmp |= (fieldFromInstruction(insn, 16, 5) << 0);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 47:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    MI.addOperand(MCOperand::CreateImm(tmp));
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeExtSize(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 48:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    MI.addOperand(MCOperand::CreateImm(tmp));
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeInsSize(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 49:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 50:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeDSPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeDSPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDSPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 51:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeDSPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 52:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeDSPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDSPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 53:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeDSPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDSPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 54:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeDSPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 55:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDSPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    MI.addOperand(MCOperand::CreateImm(tmp));
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 56:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeDSPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDSPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 57:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeDSPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 10);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 58:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeDSPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 59:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDSPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 60:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 61:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeDSPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDSPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 62:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeDSPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDSPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 63:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 64:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 65:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    MI.addOperand(MCOperand::CreateImm(tmp));
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 66:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeACRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 67:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeACRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 68:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 10);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 69:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 10);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 70:
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeACRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 20, 6);
    if (DecodeSimm16(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 71:
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeACRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 72:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeHWRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 73:
    if (DecodeMem(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 74:
    if (DecodeFMem(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 75:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 76:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 77:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 78:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 79:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 80:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 81:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 82:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 83:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 84:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTarget(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 85:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTarget(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 86:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 87:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 88:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 89:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 3);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 90:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 3);
    MI.addOperand(MCOperand::CreateImm(tmp));
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 91:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 92:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 93:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 94:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 95:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 96:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeCondCode(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 97:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 98:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPURegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 99:
    tmp = 0;
    tmp |= (fieldFromInstruction(insn, 11, 5) << 0);
    tmp |= (fieldFromInstruction(insn, 16, 5) << 0);
    if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 100:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    MI.addOperand(MCOperand::CreateImm(tmp));
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeExtSize(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 101:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    MI.addOperand(MCOperand::CreateImm(tmp));
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeInsSize(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 102:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 103:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCPU64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeHWRegs64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  }
}

template<typename InsnType>
static DecodeStatus decodeInstruction(const uint8_t DecodeTable[], MCInst &MI,
                                      InsnType insn, uint64_t Address,
                                      const void *DisAsm,
                                      const MCSubtargetInfo &STI) {
  uint64_t Bits = STI.getFeatureBits();

  const uint8_t *Ptr = DecodeTable;
  uint32_t CurFieldValue = 0;
  DecodeStatus S = MCDisassembler::Success;
  for (;;) {
    ptrdiff_t Loc = Ptr - DecodeTable;
    switch (*Ptr) {
    default:
      errs() << Loc << ": Unexpected decode table opcode!\n";
      return MCDisassembler::Fail;
    case MCD::OPC_ExtractField: {
      unsigned Start = *++Ptr;
      unsigned Len = *++Ptr;
      ++Ptr;
      CurFieldValue = fieldFromInstruction(insn, Start, Len);
      DEBUG(dbgs() << Loc << ": OPC_ExtractField(" << Start << ", "
                   << Len << "): " << CurFieldValue << "\n");
      break;
    }
    case MCD::OPC_FilterValue: {
      // Decode the field value.
      unsigned Len;
      InsnType Val = decodeULEB128(++Ptr, &Len);
      Ptr += Len;
      // NumToSkip is a plain 16-bit integer.
      unsigned NumToSkip = *Ptr++;
      NumToSkip |= (*Ptr++) << 8;

      // Perform the filter operation.
      if (Val != CurFieldValue)
        Ptr += NumToSkip;
      DEBUG(dbgs() << Loc << ": OPC_FilterValue(" << Val << ", " << NumToSkip
                   << "): " << ((Val != CurFieldValue) ? "FAIL:" : "PASS:")
                   << " continuing at " << (Ptr - DecodeTable) << "\n");

      break;
    }
    case MCD::OPC_CheckField: {
      unsigned Start = *++Ptr;
      unsigned Len = *++Ptr;
      InsnType FieldValue = fieldFromInstruction(insn, Start, Len);
      // Decode the field value.
      uint32_t ExpectedValue = decodeULEB128(++Ptr, &Len);
      Ptr += Len;
      // NumToSkip is a plain 16-bit integer.
      unsigned NumToSkip = *Ptr++;
      NumToSkip |= (*Ptr++) << 8;

      // If the actual and expected values don't match, skip.
      if (ExpectedValue != FieldValue)
        Ptr += NumToSkip;
      DEBUG(dbgs() << Loc << ": OPC_CheckField(" << Start << ", "
                   << Len << ", " << ExpectedValue << ", " << NumToSkip
                   << "): FieldValue = " << FieldValue << ", ExpectedValue = "
                   << ExpectedValue << ": "
                   << ((ExpectedValue == FieldValue) ? "PASS\n" : "FAIL\n"));
      break;
    }
    case MCD::OPC_CheckPredicate: {
      unsigned Len;
      // Decode the Predicate Index value.
      unsigned PIdx = decodeULEB128(++Ptr, &Len);
      Ptr += Len;
      // NumToSkip is a plain 16-bit integer.
      unsigned NumToSkip = *Ptr++;
      NumToSkip |= (*Ptr++) << 8;
      // Check the predicate.
      bool Pred;
      if (!(Pred = checkDecoderPredicate(PIdx, Bits)))
        Ptr += NumToSkip;
      (void)Pred;
      DEBUG(dbgs() << Loc << ": OPC_CheckPredicate(" << PIdx << "): "
            << (Pred ? "PASS\n" : "FAIL\n"));

      break;
    }
    case MCD::OPC_Decode: {
      unsigned Len;
      // Decode the Opcode value.
      unsigned Opc = decodeULEB128(++Ptr, &Len);
      Ptr += Len;
      unsigned DecodeIdx = decodeULEB128(Ptr, &Len);
      Ptr += Len;
      DEBUG(dbgs() << Loc << ": OPC_Decode: opcode " << Opc
                   << ", using decoder " << DecodeIdx << "\n" );
      DEBUG(dbgs() << "----- DECODE SUCCESSFUL -----\n");

      MI.setOpcode(Opc);
      return decodeToMCInst(S, DecodeIdx, insn, MI, Address, DisAsm);
    }
    case MCD::OPC_SoftFail: {
      // Decode the mask values.
      unsigned Len;
      InsnType PositiveMask = decodeULEB128(++Ptr, &Len);
      Ptr += Len;
      InsnType NegativeMask = decodeULEB128(Ptr, &Len);
      Ptr += Len;
      bool Fail = (insn & PositiveMask) || (~insn & NegativeMask);
      if (Fail)
        S = MCDisassembler::SoftFail;
      DEBUG(dbgs() << Loc << ": OPC_SoftFail: " << (Fail ? "FAIL\n":"PASS\n"));
      break;
    }
    case MCD::OPC_Fail: {
      DEBUG(dbgs() << Loc << ": OPC_Fail\n");
      return MCDisassembler::Fail;
    }
    }
  }
  llvm_unreachable("bogosity detected in disassembler state machine!");
}


} // End llvm namespace
