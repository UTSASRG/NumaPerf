/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Assembly Matcher Source Fragment                                           *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/


#ifdef GET_ASSEMBLER_HEADER
#undef GET_ASSEMBLER_HEADER
  // This should be included into the middle of the declaration of
  // your subclasses implementation of MCTargetAsmParser.
  unsigned ComputeAvailableFeatures(uint64_t FeatureBits) const;
  void convertToMCInst(unsigned Kind, MCInst &Inst, unsigned Opcode,
                       const SmallVectorImpl<MCParsedAsmOperand*> &Operands);
  void convertToMapAndConstraints(unsigned Kind,
                           const SmallVectorImpl<MCParsedAsmOperand*> &Operands);
  bool mnemonicIsValid(StringRef Mnemonic);
  unsigned MatchInstructionImpl(
                           const SmallVectorImpl<MCParsedAsmOperand*> &Operands,
                                MCInst &Inst,
                                unsigned &ErrorInfo, bool matchingInlineAsm,
                                unsigned VariantID = 0);
#endif // GET_ASSEMBLER_HEADER_INFO


#ifdef GET_OPERAND_DIAGNOSTIC_TYPES
#undef GET_OPERAND_DIAGNOSTIC_TYPES

#endif // GET_OPERAND_DIAGNOSTIC_TYPES


#ifdef GET_REGISTER_MATCHER
#undef GET_REGISTER_MATCHER

// Flags for subtarget features that participate in instruction matching.
enum SubtargetFeatureFlag {
  Feature_None = 0
};

static unsigned MatchRegisterName(StringRef Name) {
  switch (Name.size()) {
  default: break;
  case 2:	 // 10 strings to match.
    if (Name[0] != 'r')
      break;
    switch (Name[1]) {
    default: break;
    case '0':	 // 1 string to match.
      return 2;	 // "r0"
    case '1':	 // 1 string to match.
      return 3;	 // "r1"
    case '2':	 // 1 string to match.
      return 4;	 // "r2"
    case '3':	 // 1 string to match.
      return 5;	 // "r3"
    case '4':	 // 1 string to match.
      return 6;	 // "r4"
    case '5':	 // 1 string to match.
      return 7;	 // "r5"
    case '6':	 // 1 string to match.
      return 8;	 // "r6"
    case '7':	 // 1 string to match.
      return 9;	 // "r7"
    case '8':	 // 1 string to match.
      return 10;	 // "r8"
    case '9':	 // 1 string to match.
      return 11;	 // "r9"
    }
    break;
  case 3:	 // 23 strings to match.
    if (Name[0] != 'r')
      break;
    switch (Name[1]) {
    default: break;
    case '1':	 // 10 strings to match.
      switch (Name[2]) {
      default: break;
      case '0':	 // 1 string to match.
        return 12;	 // "r10"
      case '1':	 // 1 string to match.
        return 13;	 // "r11"
      case '2':	 // 1 string to match.
        return 14;	 // "r12"
      case '3':	 // 1 string to match.
        return 15;	 // "r13"
      case '4':	 // 1 string to match.
        return 16;	 // "r14"
      case '5':	 // 1 string to match.
        return 17;	 // "r15"
      case '6':	 // 1 string to match.
        return 18;	 // "r16"
      case '7':	 // 1 string to match.
        return 19;	 // "r17"
      case '8':	 // 1 string to match.
        return 20;	 // "r18"
      case '9':	 // 1 string to match.
        return 21;	 // "r19"
      }
      break;
    case '2':	 // 10 strings to match.
      switch (Name[2]) {
      default: break;
      case '0':	 // 1 string to match.
        return 22;	 // "r20"
      case '1':	 // 1 string to match.
        return 23;	 // "r21"
      case '2':	 // 1 string to match.
        return 24;	 // "r22"
      case '3':	 // 1 string to match.
        return 25;	 // "r23"
      case '4':	 // 1 string to match.
        return 26;	 // "r24"
      case '5':	 // 1 string to match.
        return 27;	 // "r25"
      case '6':	 // 1 string to match.
        return 28;	 // "r26"
      case '7':	 // 1 string to match.
        return 29;	 // "r27"
      case '8':	 // 1 string to match.
        return 30;	 // "r28"
      case '9':	 // 1 string to match.
        return 31;	 // "r29"
      }
      break;
    case '3':	 // 2 strings to match.
      switch (Name[2]) {
      default: break;
      case '0':	 // 1 string to match.
        return 32;	 // "r30"
      case '1':	 // 1 string to match.
        return 33;	 // "r31"
      }
      break;
    case 'p':	 // 1 string to match.
      if (Name[2] != 'c')
        break;
      return 40;	 // "rpc"
    }
    break;
  case 4:	 // 8 strings to match.
    if (Name[0] != 'r')
      break;
    switch (Name[1]) {
    default: break;
    case 'b':	 // 1 string to match.
      if (memcmp(Name.data()+2, "tr", 2))
        break;
      return 34;	 // "rbtr"
    case 'e':	 // 3 strings to match.
      switch (Name[2]) {
      default: break;
      case 'a':	 // 1 string to match.
        if (Name[3] != 'r')
          break;
        return 35;	 // "rear"
      case 'd':	 // 1 string to match.
        if (Name[3] != 'r')
          break;
        return 36;	 // "redr"
      case 's':	 // 1 string to match.
        if (Name[3] != 'r')
          break;
        return 37;	 // "resr"
      }
      break;
    case 'f':	 // 1 string to match.
      if (memcmp(Name.data()+2, "sr", 2))
        break;
      return 38;	 // "rfsr"
    case 'm':	 // 1 string to match.
      if (memcmp(Name.data()+2, "sr", 2))
        break;
      return 39;	 // "rmsr"
    case 'p':	 // 1 string to match.
      if (memcmp(Name.data()+2, "id", 2))
        break;
      return 41;	 // "rpid"
    case 'z':	 // 1 string to match.
      if (memcmp(Name.data()+2, "pr", 2))
        break;
      return 58;	 // "rzpr"
    }
    break;
  case 5:	 // 11 strings to match.
    if (Name[0] != 'r')
      break;
    switch (Name[1]) {
    default: break;
    case 'p':	 // 10 strings to match.
      if (memcmp(Name.data()+2, "vr", 2))
        break;
      switch (Name[4]) {
      default: break;
      case '0':	 // 1 string to match.
        return 42;	 // "rpvr0"
      case '1':	 // 1 string to match.
        return 43;	 // "rpvr1"
      case '2':	 // 1 string to match.
        return 44;	 // "rpvr2"
      case '3':	 // 1 string to match.
        return 45;	 // "rpvr3"
      case '4':	 // 1 string to match.
        return 46;	 // "rpvr4"
      case '5':	 // 1 string to match.
        return 47;	 // "rpvr5"
      case '6':	 // 1 string to match.
        return 48;	 // "rpvr6"
      case '7':	 // 1 string to match.
        return 49;	 // "rpvr7"
      case '8':	 // 1 string to match.
        return 50;	 // "rpvr8"
      case '9':	 // 1 string to match.
        return 51;	 // "rpvr9"
      }
      break;
    case 't':	 // 1 string to match.
      if (memcmp(Name.data()+2, "lbx", 3))
        break;
      return 57;	 // "rtlbx"
    }
    break;
  case 6:	 // 5 strings to match.
    if (Name[0] != 'r')
      break;
    switch (Name[1]) {
    default: break;
    case 'p':	 // 2 strings to match.
      if (memcmp(Name.data()+2, "vr1", 3))
        break;
      switch (Name[5]) {
      default: break;
      case '0':	 // 1 string to match.
        return 52;	 // "rpvr10"
      case '1':	 // 1 string to match.
        return 53;	 // "rpvr11"
      }
      break;
    case 't':	 // 3 strings to match.
      if (memcmp(Name.data()+2, "lb", 2))
        break;
      switch (Name[4]) {
      default: break;
      case 'h':	 // 1 string to match.
        if (Name[5] != 'i')
          break;
        return 54;	 // "rtlbhi"
      case 'l':	 // 1 string to match.
        if (Name[5] != 'o')
          break;
        return 55;	 // "rtlblo"
      case 's':	 // 1 string to match.
        if (Name[5] != 'x')
          break;
        return 56;	 // "rtlbsx"
      }
      break;
    }
    break;
  case 7:	 // 1 string to match.
    if (memcmp(Name.data()+0, "rmsr[c]", 7))
      break;
    return 1;	 // "rmsr[c]"
  }
  return 0;
}

#endif // GET_REGISTER_MATCHER


#ifdef GET_SUBTARGET_FEATURE_NAME
#undef GET_SUBTARGET_FEATURE_NAME

// User-level names for subtarget features that participate in
// instruction matching.
static const char *getSubtargetFeatureName(unsigned Val) {
  switch(Val) {
  default: return "(unknown)";
  }
}

#endif // GET_SUBTARGET_FEATURE_NAME


#ifdef GET_MATCHER_IMPLEMENTATION
#undef GET_MATCHER_IMPLEMENTATION

namespace {
enum OperatorConversionKind {
  CVT_Done,
  CVT_Reg,
  CVT_Tied,
  CVT_addImmOperands,
  CVT_addFslOperands,
  CVT_addMemOperands,
  CVT_NUM_CONVERTERS
};

enum InstructionConversionKind {
  Convert__Reg1_0__Reg1_1__Reg1_2,
  Convert__Reg1_0__Reg1_1__Imm1_2,
  Convert__Reg1_0__Fsl1_1,
  Convert__Reg1_0__Reg1_1,
  Convert__Reg1_0__Imm1_1,
  Convert__Reg1_0,
  Convert__Imm1_0,
  Convert__Reg1_1__Reg1_2__Reg1_3,
  Convert__Reg1_0__Reg1_2__Reg1_1,
  Convert__Reg1_0__Mem2_1,
  Convert_NoOperands,
  Convert__Reg1_0__Imm1_2__Reg1_1,
  Convert__Fsl1_0,
  Convert__Reg1_1__Reg1_2,
  CVT_NUM_SIGNATURES
};

} // end anonymous namespace

static const uint8_t ConversionTable[CVT_NUM_SIGNATURES][7] = {
  // Convert__Reg1_0__Reg1_1__Reg1_2
  { CVT_Reg, 1, CVT_Reg, 2, CVT_Reg, 3, CVT_Done },
  // Convert__Reg1_0__Reg1_1__Imm1_2
  { CVT_Reg, 1, CVT_Reg, 2, CVT_addImmOperands, 3, CVT_Done },
  // Convert__Reg1_0__Fsl1_1
  { CVT_Reg, 1, CVT_addFslOperands, 2, CVT_Done },
  // Convert__Reg1_0__Reg1_1
  { CVT_Reg, 1, CVT_Reg, 2, CVT_Done },
  // Convert__Reg1_0__Imm1_1
  { CVT_Reg, 1, CVT_addImmOperands, 2, CVT_Done },
  // Convert__Reg1_0
  { CVT_Reg, 1, CVT_Done },
  // Convert__Imm1_0
  { CVT_addImmOperands, 1, CVT_Done },
  // Convert__Reg1_1__Reg1_2__Reg1_3
  { CVT_Reg, 2, CVT_Reg, 3, CVT_Reg, 4, CVT_Done },
  // Convert__Reg1_0__Reg1_2__Reg1_1
  { CVT_Reg, 1, CVT_Reg, 3, CVT_Reg, 2, CVT_Done },
  // Convert__Reg1_0__Mem2_1
  { CVT_Reg, 1, CVT_addMemOperands, 2, CVT_Done },
  // Convert_NoOperands
  { CVT_Done },
  // Convert__Reg1_0__Imm1_2__Reg1_1
  { CVT_Reg, 1, CVT_addImmOperands, 3, CVT_Reg, 2, CVT_Done },
  // Convert__Fsl1_0
  { CVT_addFslOperands, 1, CVT_Done },
  // Convert__Reg1_1__Reg1_2
  { CVT_Reg, 2, CVT_Reg, 3, CVT_Done },
};

void MBlazeAsmParser::
convertToMCInst(unsigned Kind, MCInst &Inst, unsigned Opcode,
                const SmallVectorImpl<MCParsedAsmOperand*> &Operands) {
  assert(Kind < CVT_NUM_SIGNATURES && "Invalid signature!");
  const uint8_t *Converter = ConversionTable[Kind];
  Inst.setOpcode(Opcode);
  for (const uint8_t *p = Converter; *p; p+= 2) {
    switch (*p) {
    default: llvm_unreachable("invalid conversion entry!");
    case CVT_Reg:
      static_cast<MBlazeOperand*>(Operands[*(p + 1)])->addRegOperands(Inst, 1);
      break;
    case CVT_Tied:
      Inst.addOperand(Inst.getOperand(*(p + 1)));
      break;
    case CVT_addImmOperands:
      static_cast<MBlazeOperand*>(Operands[*(p + 1)])->addImmOperands(Inst, 1);
      break;
    case CVT_addFslOperands:
      static_cast<MBlazeOperand*>(Operands[*(p + 1)])->addFslOperands(Inst, 1);
      break;
    case CVT_addMemOperands:
      static_cast<MBlazeOperand*>(Operands[*(p + 1)])->addMemOperands(Inst, 2);
      break;
    }
  }
}

void MBlazeAsmParser::
convertToMapAndConstraints(unsigned Kind,
                           const SmallVectorImpl<MCParsedAsmOperand*> &Operands) {
  assert(Kind < CVT_NUM_SIGNATURES && "Invalid signature!");
  unsigned NumMCOperands = 0;
  const uint8_t *Converter = ConversionTable[Kind];
  for (const uint8_t *p = Converter; *p; p+= 2) {
    switch (*p) {
    default: llvm_unreachable("invalid conversion entry!");
    case CVT_Reg:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      ++NumMCOperands;
      break;
    case CVT_Tied:
      ++NumMCOperands;
      break;
    case CVT_addImmOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_addFslOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_addMemOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 2;
      break;
    }
  }
}

namespace {

/// MatchClassKind - The kinds of classes which participate in
/// instruction matching.
enum MatchClassKind {
  InvalidMatchClass = 0,
  MCK__DOT_clear, // '.clear'
  MCK__DOT_eq, // '.eq'
  MCK__DOT_flush, // '.flush'
  MCK__DOT_ge, // '.ge'
  MCK__DOT_gt, // '.gt'
  MCK__DOT_le, // '.le'
  MCK__DOT_lt, // '.lt'
  MCK__DOT_ne, // '.ne'
  MCK__DOT_un, // '.un'
  MCK_0, // '0'
  MCK_1, // '1'
  MCK_2, // '2'
  MCK_SPR, // register class 'SPR'
  MCK_GPR, // register class 'GPR'
  MCK_CRC, // register class 'CRC'
  MCK_Imm, // user defined class 'ImmAsmOperand'
  MCK_Fsl, // user defined class 'MBlazeFslAsmOperand'
  MCK_Mem, // user defined class 'MBlazeMemAsmOperand'
  NumMatchClassKinds
};

}

static MatchClassKind matchTokenString(StringRef Name) {
  switch (Name.size()) {
  default: break;
  case 1:	 // 3 strings to match.
    switch (Name[0]) {
    default: break;
    case '0':	 // 1 string to match.
      return MCK_0;	 // "0"
    case '1':	 // 1 string to match.
      return MCK_1;	 // "1"
    case '2':	 // 1 string to match.
      return MCK_2;	 // "2"
    }
    break;
  case 3:	 // 7 strings to match.
    if (Name[0] != '.')
      break;
    switch (Name[1]) {
    default: break;
    case 'e':	 // 1 string to match.
      if (Name[2] != 'q')
        break;
      return MCK__DOT_eq;	 // ".eq"
    case 'g':	 // 2 strings to match.
      switch (Name[2]) {
      default: break;
      case 'e':	 // 1 string to match.
        return MCK__DOT_ge;	 // ".ge"
      case 't':	 // 1 string to match.
        return MCK__DOT_gt;	 // ".gt"
      }
      break;
    case 'l':	 // 2 strings to match.
      switch (Name[2]) {
      default: break;
      case 'e':	 // 1 string to match.
        return MCK__DOT_le;	 // ".le"
      case 't':	 // 1 string to match.
        return MCK__DOT_lt;	 // ".lt"
      }
      break;
    case 'n':	 // 1 string to match.
      if (Name[2] != 'e')
        break;
      return MCK__DOT_ne;	 // ".ne"
    case 'u':	 // 1 string to match.
      if (Name[2] != 'n')
        break;
      return MCK__DOT_un;	 // ".un"
    }
    break;
  case 6:	 // 2 strings to match.
    if (Name[0] != '.')
      break;
    switch (Name[1]) {
    default: break;
    case 'c':	 // 1 string to match.
      if (memcmp(Name.data()+2, "lear", 4))
        break;
      return MCK__DOT_clear;	 // ".clear"
    case 'f':	 // 1 string to match.
      if (memcmp(Name.data()+2, "lush", 4))
        break;
      return MCK__DOT_flush;	 // ".flush"
    }
    break;
  }
  return InvalidMatchClass;
}

/// isSubclass - Compute whether \p A is a subclass of \p B.
static bool isSubclass(MatchClassKind A, MatchClassKind B) {
  if (A == B)
    return true;

  switch (A) {
  default:
    return false;
  }
}

static unsigned validateOperandClass(MCParsedAsmOperand *GOp, MatchClassKind Kind) {
  MBlazeOperand &Operand = *(MBlazeOperand*)GOp;
  if (Kind == InvalidMatchClass)
    return MCTargetAsmParser::Match_InvalidOperand;

  if (Operand.isToken())
    return isSubclass(matchTokenString(Operand.getToken()), Kind) ?
             MCTargetAsmParser::Match_Success :
             MCTargetAsmParser::Match_InvalidOperand;

  // 'Imm' class
  if (Kind == MCK_Imm) {
    if (Operand.isImm())
      return MCTargetAsmParser::Match_Success;
  }

  // 'Fsl' class
  if (Kind == MCK_Fsl) {
    if (Operand.isFsl())
      return MCTargetAsmParser::Match_Success;
  }

  // 'Mem' class
  if (Kind == MCK_Mem) {
    if (Operand.isMem())
      return MCTargetAsmParser::Match_Success;
  }

  if (Operand.isReg()) {
    MatchClassKind OpKind;
    switch (Operand.getReg()) {
    default: OpKind = InvalidMatchClass; break;
    case MBlaze::R0: OpKind = MCK_GPR; break;
    case MBlaze::R1: OpKind = MCK_GPR; break;
    case MBlaze::R2: OpKind = MCK_GPR; break;
    case MBlaze::R3: OpKind = MCK_GPR; break;
    case MBlaze::R4: OpKind = MCK_GPR; break;
    case MBlaze::R5: OpKind = MCK_GPR; break;
    case MBlaze::R6: OpKind = MCK_GPR; break;
    case MBlaze::R7: OpKind = MCK_GPR; break;
    case MBlaze::R8: OpKind = MCK_GPR; break;
    case MBlaze::R9: OpKind = MCK_GPR; break;
    case MBlaze::R10: OpKind = MCK_GPR; break;
    case MBlaze::R11: OpKind = MCK_GPR; break;
    case MBlaze::R12: OpKind = MCK_GPR; break;
    case MBlaze::R13: OpKind = MCK_GPR; break;
    case MBlaze::R14: OpKind = MCK_GPR; break;
    case MBlaze::R15: OpKind = MCK_GPR; break;
    case MBlaze::R16: OpKind = MCK_GPR; break;
    case MBlaze::R17: OpKind = MCK_GPR; break;
    case MBlaze::R18: OpKind = MCK_GPR; break;
    case MBlaze::R19: OpKind = MCK_GPR; break;
    case MBlaze::R20: OpKind = MCK_GPR; break;
    case MBlaze::R21: OpKind = MCK_GPR; break;
    case MBlaze::R22: OpKind = MCK_GPR; break;
    case MBlaze::R23: OpKind = MCK_GPR; break;
    case MBlaze::R24: OpKind = MCK_GPR; break;
    case MBlaze::R25: OpKind = MCK_GPR; break;
    case MBlaze::R26: OpKind = MCK_GPR; break;
    case MBlaze::R27: OpKind = MCK_GPR; break;
    case MBlaze::R28: OpKind = MCK_GPR; break;
    case MBlaze::R29: OpKind = MCK_GPR; break;
    case MBlaze::R30: OpKind = MCK_GPR; break;
    case MBlaze::R31: OpKind = MCK_GPR; break;
    case MBlaze::RPC: OpKind = MCK_SPR; break;
    case MBlaze::RMSR: OpKind = MCK_SPR; break;
    case MBlaze::REAR: OpKind = MCK_SPR; break;
    case MBlaze::RESR: OpKind = MCK_SPR; break;
    case MBlaze::RFSR: OpKind = MCK_SPR; break;
    case MBlaze::RBTR: OpKind = MCK_SPR; break;
    case MBlaze::REDR: OpKind = MCK_SPR; break;
    case MBlaze::RPID: OpKind = MCK_SPR; break;
    case MBlaze::RZPR: OpKind = MCK_SPR; break;
    case MBlaze::RTLBX: OpKind = MCK_SPR; break;
    case MBlaze::RTLBLO: OpKind = MCK_SPR; break;
    case MBlaze::RTLBHI: OpKind = MCK_SPR; break;
    case MBlaze::RPVR0: OpKind = MCK_SPR; break;
    case MBlaze::RPVR1: OpKind = MCK_SPR; break;
    case MBlaze::RPVR2: OpKind = MCK_SPR; break;
    case MBlaze::RPVR3: OpKind = MCK_SPR; break;
    case MBlaze::RPVR4: OpKind = MCK_SPR; break;
    case MBlaze::RPVR5: OpKind = MCK_SPR; break;
    case MBlaze::RPVR6: OpKind = MCK_SPR; break;
    case MBlaze::RPVR7: OpKind = MCK_SPR; break;
    case MBlaze::RPVR8: OpKind = MCK_SPR; break;
    case MBlaze::RPVR9: OpKind = MCK_SPR; break;
    case MBlaze::RPVR10: OpKind = MCK_SPR; break;
    case MBlaze::RPVR11: OpKind = MCK_SPR; break;
    case MBlaze::CARRY: OpKind = MCK_CRC; break;
    }
    return isSubclass(OpKind, Kind) ? MCTargetAsmParser::Match_Success :
                                      MCTargetAsmParser::Match_InvalidOperand;
  }

  return MCTargetAsmParser::Match_InvalidOperand;
}

unsigned MBlazeAsmParser::
ComputeAvailableFeatures(uint64_t FB) const {
  unsigned Features = 0;
  return Features;
}

static const char *const MnemonicTable =
    "\003add\004addc\004addi\005addic\005addik\006addikc\004addk\005addkc\004"
    "aget\005agetd\003and\004andi\004andn\005andni\004aput\005aputd\003beq\004"
    "beqd\004beqi\005beqid\003bge\004bged\004bgei\005bgeid\003bgt\004bgtd\004"
    "bgti\005bgtid\003ble\004bled\004blei\005bleid\003blt\004bltd\004blti\005"
    "bltid\003bne\004bned\004bnei\005bneid\002br\003bra\004brad\004brai\005b"
    "raid\005brald\006bralid\003brd\003bri\004brid\003brk\004brki\004brld\005"
    "brlid\004bsll\005bslli\004bsra\005bsrai\004bsrl\005bsrli\005caget\006ca"
    "getd\005caput\006caputd\004cget\005cgetd\003clz\003cmp\004cmpu\004cput\005"
    "cputd\005eaget\006eagetd\006ecaget\007ecagetd\005ecget\006ecgetd\004ege"
    "t\005egetd\004fadd\004fcmp\004fdiv\004fint\003flt\004fmul\005frsub\005f"
    "sqrt\003get\004getd\004idiv\005idivu\003imm\003lbu\004lbui\004lbur\003l"
    "hu\004lhui\004lhur\002lw\003lwi\003lwr\003lwx\004mbar\003mfs\006msrclr\006"
    "msrset\003mts\003mul\004mulh\006mulhsu\005mulhu\004muli\005naget\006nag"
    "etd\005naput\006naputd\006ncaget\007ncagetd\006ncaput\007ncaputd\005ncg"
    "et\006ncgetd\005ncput\006ncputd\006neaget\007neagetd\007necaget\010neca"
    "getd\006necget\007necgetd\005neget\006negetd\004nget\005ngetd\003nop\004"
    "nput\005nputd\002or\003ori\006pcmpbf\006pcmpeq\006pcmpne\003put\004putd"
    "\004rsub\005rsubc\005rsubi\006rsubic\006rsubik\007rsubikc\005rsubk\006r"
    "subkc\004rtbd\004rted\004rtid\004rtsd\002sb\003sbi\003sbr\006sext16\005"
    "sext8\002sh\003shi\003shr\003sra\003src\003srl\002sw\003swi\003swr\003s"
    "wx\005taget\006tagetd\005taput\006taputd\006tcaget\007tcagetd\006tcaput"
    "\007tcaputd\005tcget\006tcgetd\005tcput\006tcputd\006teaget\007teagetd\007"
    "tecaget\010tecagetd\006tecget\007tecgetd\005teget\006tegetd\004tget\005"
    "tgetd\006tnaget\007tnagetd\006tnaput\007tnaputd\007tncaget\010tncagetd\007"
    "tncaput\010tncaputd\006tncget\007tncgetd\006tncput\007tncputd\007tneage"
    "t\010tneagetd\010tnecaget\ttnecagetd\007tnecget\010tnecgetd\006tneget\007"
    "tnegetd\005tnget\006tngetd\005tnput\006tnputd\004tput\005tputd\003wdc\003"
    "wic\003xor\004xori";

namespace {
  struct MatchEntry {
    uint16_t Mnemonic;
    uint16_t Opcode;
    uint8_t ConvertFn;
    uint8_t RequiredFeatures;
    uint8_t Classes[4];
    uint8_t AsmVariantID;

    StringRef getMnemonic() const {
      return StringRef(MnemonicTable + Mnemonic + 1,
                       MnemonicTable[Mnemonic]);
    }
  };

  // Predicate for searching for an opcode.
  struct LessOpcode {
    bool operator()(const MatchEntry &LHS, StringRef RHS) {
      return LHS.getMnemonic() < RHS;
    }
    bool operator()(StringRef LHS, const MatchEntry &RHS) {
      return LHS < RHS.getMnemonic();
    }
    bool operator()(const MatchEntry &LHS, const MatchEntry &RHS) {
      return LHS.getMnemonic() < RHS.getMnemonic();
    }
  };
} // end anonymous namespace.

static const MatchEntry MatchTable[234] = {
  { 0 /* add */, MBlaze::ADD, Convert__Reg1_0__Reg1_1__Reg1_2, 0, { MCK_GPR, MCK_GPR, MCK_GPR }, 0},
  { 4 /* addc */, MBlaze::ADDC, Convert__Reg1_0__Reg1_1__Reg1_2, 0, { MCK_GPR, MCK_GPR, MCK_GPR }, 0},
  { 9 /* addi */, MBlaze::ADDI, Convert__Reg1_0__Reg1_1__Imm1_2, 0, { MCK_GPR, MCK_GPR, MCK_Imm }, 0},
  { 14 /* addic */, MBlaze::ADDIC, Convert__Reg1_0__Reg1_1__Imm1_2, 0, { MCK_GPR, MCK_GPR, MCK_Imm }, 0},
  { 20 /* addik */, MBlaze::ADDIK, Convert__Reg1_0__Reg1_1__Imm1_2, 0, { MCK_GPR, MCK_GPR, MCK_Imm }, 0},
  { 26 /* addikc */, MBlaze::ADDIKC, Convert__Reg1_0__Reg1_1__Imm1_2, 0, { MCK_GPR, MCK_GPR, MCK_Imm }, 0},
  { 33 /* addk */, MBlaze::ADDK, Convert__Reg1_0__Reg1_1__Reg1_2, 0, { MCK_GPR, MCK_GPR, MCK_GPR }, 0},
  { 38 /* addkc */, MBlaze::ADDKC, Convert__Reg1_0__Reg1_1__Reg1_2, 0, { MCK_GPR, MCK_GPR, MCK_GPR }, 0},
  { 44 /* aget */, MBlaze::AGET, Convert__Reg1_0__Fsl1_1, 0, { MCK_GPR, MCK_Fsl }, 0},
  { 49 /* agetd */, MBlaze::AGETD, Convert__Reg1_0__Reg1_1, 0, { MCK_GPR, MCK_GPR }, 0},
  { 55 /* and */, MBlaze::AND, Convert__Reg1_0__Reg1_1__Reg1_2, 0, { MCK_GPR, MCK_GPR, MCK_GPR }, 0},
  { 59 /* andi */, MBlaze::ANDI, Convert__Reg1_0__Reg1_1__Imm1_2, 0, { MCK_GPR, MCK_GPR, MCK_Imm }, 0},
  { 64 /* andn */, MBlaze::ANDN, Convert__Reg1_0__Reg1_1__Reg1_2, 0, { MCK_GPR, MCK_GPR, MCK_GPR }, 0},
  { 69 /* andni */, MBlaze::ANDNI, Convert__Reg1_0__Reg1_1__Imm1_2, 0, { MCK_GPR, MCK_GPR, MCK_Imm }, 0},
  { 75 /* aput */, MBlaze::APUT, Convert__Reg1_0__Fsl1_1, 0, { MCK_GPR, MCK_Fsl }, 0},
  { 80 /* aputd */, MBlaze::APUTD, Convert__Reg1_0__Reg1_1, 0, { MCK_GPR, MCK_GPR }, 0},
  { 86 /* beq */, MBlaze::BEQ, Convert__Reg1_0__Reg1_1, 0, { MCK_GPR, MCK_GPR }, 0},
  { 90 /* beqd */, MBlaze::BEQD, Convert__Reg1_0__Reg1_1, 0, { MCK_GPR, MCK_GPR }, 0},
  { 95 /* beqi */, MBlaze::BEQI, Convert__Reg1_0__Imm1_1, 0, { MCK_GPR, MCK_Imm }, 0},
  { 100 /* beqid */, MBlaze::BEQID, Convert__Reg1_0__Imm1_1, 0, { MCK_GPR, MCK_Imm }, 0},
  { 106 /* bge */, MBlaze::BGE, Convert__Reg1_0__Reg1_1, 0, { MCK_GPR, MCK_GPR }, 0},
  { 110 /* bged */, MBlaze::BGED, Convert__Reg1_0__Reg1_1, 0, { MCK_GPR, MCK_GPR }, 0},
  { 115 /* bgei */, MBlaze::BGEI, Convert__Reg1_0__Imm1_1, 0, { MCK_GPR, MCK_Imm }, 0},
  { 120 /* bgeid */, MBlaze::BGEID, Convert__Reg1_0__Imm1_1, 0, { MCK_GPR, MCK_Imm }, 0},
  { 126 /* bgt */, MBlaze::BGT, Convert__Reg1_0__Reg1_1, 0, { MCK_GPR, MCK_GPR }, 0},
  { 130 /* bgtd */, MBlaze::BGTD, Convert__Reg1_0__Reg1_1, 0, { MCK_GPR, MCK_GPR }, 0},
  { 135 /* bgti */, MBlaze::BGTI, Convert__Reg1_0__Imm1_1, 0, { MCK_GPR, MCK_Imm }, 0},
  { 140 /* bgtid */, MBlaze::BGTID, Convert__Reg1_0__Imm1_1, 0, { MCK_GPR, MCK_Imm }, 0},
  { 146 /* ble */, MBlaze::BLE, Convert__Reg1_0__Reg1_1, 0, { MCK_GPR, MCK_GPR }, 0},
  { 150 /* bled */, MBlaze::BLED, Convert__Reg1_0__Reg1_1, 0, { MCK_GPR, MCK_GPR }, 0},
  { 155 /* blei */, MBlaze::BLEI, Convert__Reg1_0__Imm1_1, 0, { MCK_GPR, MCK_Imm }, 0},
  { 160 /* bleid */, MBlaze::BLEID, Convert__Reg1_0__Imm1_1, 0, { MCK_GPR, MCK_Imm }, 0},
  { 166 /* blt */, MBlaze::BLT, Convert__Reg1_0__Reg1_1, 0, { MCK_GPR, MCK_GPR }, 0},
  { 170 /* bltd */, MBlaze::BLTD, Convert__Reg1_0__Reg1_1, 0, { MCK_GPR, MCK_GPR }, 0},
  { 175 /* blti */, MBlaze::BLTI, Convert__Reg1_0__Imm1_1, 0, { MCK_GPR, MCK_Imm }, 0},
  { 180 /* bltid */, MBlaze::BLTID, Convert__Reg1_0__Imm1_1, 0, { MCK_GPR, MCK_Imm }, 0},
  { 186 /* bne */, MBlaze::BNE, Convert__Reg1_0__Reg1_1, 0, { MCK_GPR, MCK_GPR }, 0},
  { 190 /* bned */, MBlaze::BNED, Convert__Reg1_0__Reg1_1, 0, { MCK_GPR, MCK_GPR }, 0},
  { 195 /* bnei */, MBlaze::BNEI, Convert__Reg1_0__Imm1_1, 0, { MCK_GPR, MCK_Imm }, 0},
  { 200 /* bneid */, MBlaze::BNEID, Convert__Reg1_0__Imm1_1, 0, { MCK_GPR, MCK_Imm }, 0},
  { 206 /* br */, MBlaze::BR, Convert__Reg1_0, 0, { MCK_GPR }, 0},
  { 209 /* bra */, MBlaze::BRA, Convert__Reg1_0, 0, { MCK_GPR }, 0},
  { 213 /* brad */, MBlaze::BRAD, Convert__Reg1_0, 0, { MCK_GPR }, 0},
  { 218 /* brai */, MBlaze::BRAI, Convert__Imm1_0, 0, { MCK_Imm }, 0},
  { 223 /* braid */, MBlaze::BRAID, Convert__Imm1_0, 0, { MCK_Imm }, 0},
  { 229 /* brald */, MBlaze::BRALD, Convert__Reg1_0__Reg1_1, 0, { MCK_GPR, MCK_GPR }, 0},
  { 235 /* bralid */, MBlaze::BRALID, Convert__Reg1_0__Imm1_1, 0, { MCK_GPR, MCK_Imm }, 0},
  { 242 /* brd */, MBlaze::BRD, Convert__Reg1_0, 0, { MCK_GPR }, 0},
  { 246 /* bri */, MBlaze::BRI, Convert__Imm1_0, 0, { MCK_Imm }, 0},
  { 250 /* brid */, MBlaze::BRID, Convert__Imm1_0, 0, { MCK_Imm }, 0},
  { 255 /* brk */, MBlaze::BRK, Convert__Reg1_0__Reg1_1, 0, { MCK_GPR, MCK_GPR }, 0},
  { 259 /* brki */, MBlaze::BRKI, Convert__Reg1_0__Imm1_1, 0, { MCK_GPR, MCK_Imm }, 0},
  { 264 /* brld */, MBlaze::BRLD, Convert__Reg1_0__Reg1_1, 0, { MCK_GPR, MCK_GPR }, 0},
  { 269 /* brlid */, MBlaze::BRLID, Convert__Reg1_0__Imm1_1, 0, { MCK_GPR, MCK_Imm }, 0},
  { 275 /* bsll */, MBlaze::BSLL, Convert__Reg1_0__Reg1_1__Reg1_2, 0, { MCK_GPR, MCK_GPR, MCK_GPR }, 0},
  { 280 /* bslli */, MBlaze::BSLLI, Convert__Reg1_0__Reg1_1__Imm1_2, 0, { MCK_GPR, MCK_GPR, MCK_Imm }, 0},
  { 286 /* bsra */, MBlaze::BSRA, Convert__Reg1_0__Reg1_1__Reg1_2, 0, { MCK_GPR, MCK_GPR, MCK_GPR }, 0},
  { 291 /* bsrai */, MBlaze::BSRAI, Convert__Reg1_0__Reg1_1__Imm1_2, 0, { MCK_GPR, MCK_GPR, MCK_Imm }, 0},
  { 297 /* bsrl */, MBlaze::BSRL, Convert__Reg1_0__Reg1_1__Reg1_2, 0, { MCK_GPR, MCK_GPR, MCK_GPR }, 0},
  { 302 /* bsrli */, MBlaze::BSRLI, Convert__Reg1_0__Reg1_1__Imm1_2, 0, { MCK_GPR, MCK_GPR, MCK_Imm }, 0},
  { 308 /* caget */, MBlaze::CAGET, Convert__Reg1_0__Fsl1_1, 0, { MCK_GPR, MCK_Fsl }, 0},
  { 314 /* cagetd */, MBlaze::CAGETD, Convert__Reg1_0__Reg1_1, 0, { MCK_GPR, MCK_GPR }, 0},
  { 321 /* caput */, MBlaze::CAPUT, Convert__Reg1_0__Fsl1_1, 0, { MCK_GPR, MCK_Fsl }, 0},
  { 327 /* caputd */, MBlaze::CAPUTD, Convert__Reg1_0__Reg1_1, 0, { MCK_GPR, MCK_GPR }, 0},
  { 334 /* cget */, MBlaze::CGET, Convert__Reg1_0__Fsl1_1, 0, { MCK_GPR, MCK_Fsl }, 0},
  { 339 /* cgetd */, MBlaze::CGETD, Convert__Reg1_0__Reg1_1, 0, { MCK_GPR, MCK_GPR }, 0},
  { 345 /* clz */, MBlaze::CLZ, Convert__Reg1_0__Reg1_1, 0, { MCK_GPR, MCK_GPR }, 0},
  { 349 /* cmp */, MBlaze::CMP, Convert__Reg1_0__Reg1_1__Reg1_2, 0, { MCK_GPR, MCK_GPR, MCK_GPR }, 0},
  { 353 /* cmpu */, MBlaze::CMPU, Convert__Reg1_0__Reg1_1__Reg1_2, 0, { MCK_GPR, MCK_GPR, MCK_GPR }, 0},
  { 358 /* cput */, MBlaze::CPUT, Convert__Reg1_0__Fsl1_1, 0, { MCK_GPR, MCK_Fsl }, 0},
  { 363 /* cputd */, MBlaze::CPUTD, Convert__Reg1_0__Reg1_1, 0, { MCK_GPR, MCK_GPR }, 0},
  { 369 /* eaget */, MBlaze::EAGET, Convert__Reg1_0__Fsl1_1, 0, { MCK_GPR, MCK_Fsl }, 0},
  { 375 /* eagetd */, MBlaze::EAGETD, Convert__Reg1_0__Reg1_1, 0, { MCK_GPR, MCK_GPR }, 0},
  { 382 /* ecaget */, MBlaze::ECAGET, Convert__Reg1_0__Fsl1_1, 0, { MCK_GPR, MCK_Fsl }, 0},
  { 389 /* ecagetd */, MBlaze::ECAGETD, Convert__Reg1_0__Reg1_1, 0, { MCK_GPR, MCK_GPR }, 0},
  { 397 /* ecget */, MBlaze::ECGET, Convert__Reg1_0__Fsl1_1, 0, { MCK_GPR, MCK_Fsl }, 0},
  { 403 /* ecgetd */, MBlaze::ECGETD, Convert__Reg1_0__Reg1_1, 0, { MCK_GPR, MCK_GPR }, 0},
  { 410 /* eget */, MBlaze::EGET, Convert__Reg1_0__Fsl1_1, 0, { MCK_GPR, MCK_Fsl }, 0},
  { 415 /* egetd */, MBlaze::EGETD, Convert__Reg1_0__Reg1_1, 0, { MCK_GPR, MCK_GPR }, 0},
  { 421 /* fadd */, MBlaze::FADD, Convert__Reg1_0__Reg1_1__Reg1_2, 0, { MCK_GPR, MCK_GPR, MCK_GPR }, 0},
  { 426 /* fcmp */, MBlaze::FCMP_EQ, Convert__Reg1_1__Reg1_2__Reg1_3, 0, { MCK__DOT_eq, MCK_GPR, MCK_GPR, MCK_GPR }, 0},
  { 426 /* fcmp */, MBlaze::FCMP_GE, Convert__Reg1_1__Reg1_2__Reg1_3, 0, { MCK__DOT_ge, MCK_GPR, MCK_GPR, MCK_GPR }, 0},
  { 426 /* fcmp */, MBlaze::FCMP_GT, Convert__Reg1_1__Reg1_2__Reg1_3, 0, { MCK__DOT_gt, MCK_GPR, MCK_GPR, MCK_GPR }, 0},
  { 426 /* fcmp */, MBlaze::FCMP_LE, Convert__Reg1_1__Reg1_2__Reg1_3, 0, { MCK__DOT_le, MCK_GPR, MCK_GPR, MCK_GPR }, 0},
  { 426 /* fcmp */, MBlaze::FCMP_LT, Convert__Reg1_1__Reg1_2__Reg1_3, 0, { MCK__DOT_lt, MCK_GPR, MCK_GPR, MCK_GPR }, 0},
  { 426 /* fcmp */, MBlaze::FCMP_NE, Convert__Reg1_1__Reg1_2__Reg1_3, 0, { MCK__DOT_ne, MCK_GPR, MCK_GPR, MCK_GPR }, 0},
  { 426 /* fcmp */, MBlaze::FCMP_UN, Convert__Reg1_1__Reg1_2__Reg1_3, 0, { MCK__DOT_un, MCK_GPR, MCK_GPR, MCK_GPR }, 0},
  { 431 /* fdiv */, MBlaze::FDIV, Convert__Reg1_0__Reg1_1__Reg1_2, 0, { MCK_GPR, MCK_GPR, MCK_GPR }, 0},
  { 436 /* fint */, MBlaze::FINT, Convert__Reg1_0__Reg1_1, 0, { MCK_GPR, MCK_GPR }, 0},
  { 441 /* flt */, MBlaze::FLT, Convert__Reg1_0__Reg1_1, 0, { MCK_GPR, MCK_GPR }, 0},
  { 445 /* fmul */, MBlaze::FMUL, Convert__Reg1_0__Reg1_1__Reg1_2, 0, { MCK_GPR, MCK_GPR, MCK_GPR }, 0},
  { 450 /* frsub */, MBlaze::FRSUB, Convert__Reg1_0__Reg1_2__Reg1_1, 0, { MCK_GPR, MCK_GPR, MCK_GPR }, 0},
  { 456 /* fsqrt */, MBlaze::FSQRT, Convert__Reg1_0__Reg1_1, 0, { MCK_GPR, MCK_GPR }, 0},
  { 462 /* get */, MBlaze::GET, Convert__Reg1_0__Fsl1_1, 0, { MCK_GPR, MCK_Fsl }, 0},
  { 466 /* getd */, MBlaze::GETD, Convert__Reg1_0__Reg1_1, 0, { MCK_GPR, MCK_GPR }, 0},
  { 471 /* idiv */, MBlaze::IDIV, Convert__Reg1_0__Reg1_2__Reg1_1, 0, { MCK_GPR, MCK_GPR, MCK_GPR }, 0},
  { 476 /* idivu */, MBlaze::IDIVU, Convert__Reg1_0__Reg1_2__Reg1_1, 0, { MCK_GPR, MCK_GPR, MCK_GPR }, 0},
  { 482 /* imm */, MBlaze::IMM, Convert__Imm1_0, 0, { MCK_Imm }, 0},
  { 486 /* lbu */, MBlaze::LBU, Convert__Reg1_0__Mem2_1, 0, { MCK_GPR, MCK_Mem }, 0},
  { 490 /* lbui */, MBlaze::LBUI, Convert__Reg1_0__Mem2_1, 0, { MCK_GPR, MCK_Mem }, 0},
  { 495 /* lbur */, MBlaze::LBUR, Convert__Reg1_0__Mem2_1, 0, { MCK_GPR, MCK_Mem }, 0},
  { 500 /* lhu */, MBlaze::LHU, Convert__Reg1_0__Mem2_1, 0, { MCK_GPR, MCK_Mem }, 0},
  { 504 /* lhui */, MBlaze::LHUI, Convert__Reg1_0__Mem2_1, 0, { MCK_GPR, MCK_Mem }, 0},
  { 509 /* lhur */, MBlaze::LHUR, Convert__Reg1_0__Mem2_1, 0, { MCK_GPR, MCK_Mem }, 0},
  { 514 /* lw */, MBlaze::LW, Convert__Reg1_0__Mem2_1, 0, { MCK_GPR, MCK_Mem }, 0},
  { 517 /* lwi */, MBlaze::LWI, Convert__Reg1_0__Mem2_1, 0, { MCK_GPR, MCK_Mem }, 0},
  { 521 /* lwr */, MBlaze::LWR, Convert__Reg1_0__Mem2_1, 0, { MCK_GPR, MCK_Mem }, 0},
  { 525 /* lwx */, MBlaze::LWX, Convert__Reg1_0__Mem2_1, 0, { MCK_GPR, MCK_Mem }, 0},
  { 529 /* mbar */, MBlaze::IDMEMBAR, Convert_NoOperands, 0, { MCK_0 }, 0},
  { 529 /* mbar */, MBlaze::DMEMBAR, Convert_NoOperands, 0, { MCK_1 }, 0},
  { 529 /* mbar */, MBlaze::IMEMBAR, Convert_NoOperands, 0, { MCK_2 }, 0},
  { 534 /* mfs */, MBlaze::MFS, Convert__Reg1_0__Reg1_1, 0, { MCK_GPR, MCK_SPR }, 0},
  { 538 /* msrclr */, MBlaze::MSRCLR, Convert__Reg1_0__Imm1_1, 0, { MCK_GPR, MCK_Imm }, 0},
  { 545 /* msrset */, MBlaze::MSRSET, Convert__Reg1_0__Imm1_1, 0, { MCK_GPR, MCK_Imm }, 0},
  { 552 /* mts */, MBlaze::MTS, Convert__Reg1_0__Reg1_1, 0, { MCK_SPR, MCK_GPR }, 0},
  { 556 /* mul */, MBlaze::MUL, Convert__Reg1_0__Reg1_1__Reg1_2, 0, { MCK_GPR, MCK_GPR, MCK_GPR }, 0},
  { 560 /* mulh */, MBlaze::MULH, Convert__Reg1_0__Reg1_1__Reg1_2, 0, { MCK_GPR, MCK_GPR, MCK_GPR }, 0},
  { 565 /* mulhsu */, MBlaze::MULHSU, Convert__Reg1_0__Reg1_1__Reg1_2, 0, { MCK_GPR, MCK_GPR, MCK_GPR }, 0},
  { 572 /* mulhu */, MBlaze::MULHU, Convert__Reg1_0__Reg1_1__Reg1_2, 0, { MCK_GPR, MCK_GPR, MCK_GPR }, 0},
  { 578 /* muli */, MBlaze::MULI, Convert__Reg1_0__Reg1_1__Imm1_2, 0, { MCK_GPR, MCK_GPR, MCK_Imm }, 0},
  { 583 /* naget */, MBlaze::NAGET, Convert__Reg1_0__Fsl1_1, 0, { MCK_GPR, MCK_Fsl }, 0},
  { 589 /* nagetd */, MBlaze::NAGETD, Convert__Reg1_0__Reg1_1, 0, { MCK_GPR, MCK_GPR }, 0},
  { 596 /* naput */, MBlaze::NAPUT, Convert__Reg1_0__Fsl1_1, 0, { MCK_GPR, MCK_Fsl }, 0},
  { 602 /* naputd */, MBlaze::NAPUTD, Convert__Reg1_0__Reg1_1, 0, { MCK_GPR, MCK_GPR }, 0},
  { 609 /* ncaget */, MBlaze::NCAGET, Convert__Reg1_0__Fsl1_1, 0, { MCK_GPR, MCK_Fsl }, 0},
  { 616 /* ncagetd */, MBlaze::NCAGETD, Convert__Reg1_0__Reg1_1, 0, { MCK_GPR, MCK_GPR }, 0},
  { 624 /* ncaput */, MBlaze::NCAPUT, Convert__Reg1_0__Fsl1_1, 0, { MCK_GPR, MCK_Fsl }, 0},
  { 631 /* ncaputd */, MBlaze::NCAPUTD, Convert__Reg1_0__Reg1_1, 0, { MCK_GPR, MCK_GPR }, 0},
  { 639 /* ncget */, MBlaze::NCGET, Convert__Reg1_0__Fsl1_1, 0, { MCK_GPR, MCK_Fsl }, 0},
  { 645 /* ncgetd */, MBlaze::NCGETD, Convert__Reg1_0__Reg1_1, 0, { MCK_GPR, MCK_GPR }, 0},
  { 652 /* ncput */, MBlaze::NCPUT, Convert__Reg1_0__Fsl1_1, 0, { MCK_GPR, MCK_Fsl }, 0},
  { 658 /* ncputd */, MBlaze::NCPUTD, Convert__Reg1_0__Reg1_1, 0, { MCK_GPR, MCK_GPR }, 0},
  { 665 /* neaget */, MBlaze::NEAGET, Convert__Reg1_0__Fsl1_1, 0, { MCK_GPR, MCK_Fsl }, 0},
  { 672 /* neagetd */, MBlaze::NEAGETD, Convert__Reg1_0__Reg1_1, 0, { MCK_GPR, MCK_GPR }, 0},
  { 680 /* necaget */, MBlaze::NECAGET, Convert__Reg1_0__Fsl1_1, 0, { MCK_GPR, MCK_Fsl }, 0},
  { 688 /* necagetd */, MBlaze::NECAGETD, Convert__Reg1_0__Reg1_1, 0, { MCK_GPR, MCK_GPR }, 0},
  { 697 /* necget */, MBlaze::NECGET, Convert__Reg1_0__Fsl1_1, 0, { MCK_GPR, MCK_Fsl }, 0},
  { 704 /* necgetd */, MBlaze::NECGETD, Convert__Reg1_0__Reg1_1, 0, { MCK_GPR, MCK_GPR }, 0},
  { 712 /* neget */, MBlaze::NEGET, Convert__Reg1_0__Fsl1_1, 0, { MCK_GPR, MCK_Fsl }, 0},
  { 718 /* negetd */, MBlaze::NEGETD, Convert__Reg1_0__Reg1_1, 0, { MCK_GPR, MCK_GPR }, 0},
  { 725 /* nget */, MBlaze::NGET, Convert__Reg1_0__Fsl1_1, 0, { MCK_GPR, MCK_Fsl }, 0},
  { 730 /* ngetd */, MBlaze::NGETD, Convert__Reg1_0__Reg1_1, 0, { MCK_GPR, MCK_GPR }, 0},
  { 736 /* nop */, MBlaze::NOP, Convert_NoOperands, 0, {  }, 0},
  { 740 /* nput */, MBlaze::NPUT, Convert__Reg1_0__Fsl1_1, 0, { MCK_GPR, MCK_Fsl }, 0},
  { 745 /* nputd */, MBlaze::NPUTD, Convert__Reg1_0__Reg1_1, 0, { MCK_GPR, MCK_GPR }, 0},
  { 751 /* or */, MBlaze::OR, Convert__Reg1_0__Reg1_1__Reg1_2, 0, { MCK_GPR, MCK_GPR, MCK_GPR }, 0},
  { 754 /* ori */, MBlaze::FORI, Convert__Reg1_0__Reg1_1__Imm1_2, 0, { MCK_GPR, MCK_GPR, MCK_Imm }, 0},
  { 754 /* ori */, MBlaze::ORI, Convert__Reg1_0__Reg1_1__Imm1_2, 0, { MCK_GPR, MCK_GPR, MCK_Imm }, 0},
  { 758 /* pcmpbf */, MBlaze::PCMPBF, Convert__Reg1_0__Reg1_1__Reg1_2, 0, { MCK_GPR, MCK_GPR, MCK_GPR }, 0},
  { 765 /* pcmpeq */, MBlaze::PCMPEQ, Convert__Reg1_0__Reg1_1__Reg1_2, 0, { MCK_GPR, MCK_GPR, MCK_GPR }, 0},
  { 772 /* pcmpne */, MBlaze::PCMPNE, Convert__Reg1_0__Reg1_1__Reg1_2, 0, { MCK_GPR, MCK_GPR, MCK_GPR }, 0},
  { 779 /* put */, MBlaze::PUT, Convert__Reg1_0__Fsl1_1, 0, { MCK_GPR, MCK_Fsl }, 0},
  { 783 /* putd */, MBlaze::PUTD, Convert__Reg1_0__Reg1_1, 0, { MCK_GPR, MCK_GPR }, 0},
  { 788 /* rsub */, MBlaze::RSUB, Convert__Reg1_0__Reg1_2__Reg1_1, 0, { MCK_GPR, MCK_GPR, MCK_GPR }, 0},
  { 793 /* rsubc */, MBlaze::RSUBC, Convert__Reg1_0__Reg1_2__Reg1_1, 0, { MCK_GPR, MCK_GPR, MCK_GPR }, 0},
  { 799 /* rsubi */, MBlaze::RSUBI, Convert__Reg1_0__Imm1_2__Reg1_1, 0, { MCK_GPR, MCK_GPR, MCK_Imm }, 0},
  { 805 /* rsubic */, MBlaze::RSUBIC, Convert__Reg1_0__Imm1_2__Reg1_1, 0, { MCK_GPR, MCK_GPR, MCK_Imm }, 0},
  { 812 /* rsubik */, MBlaze::RSUBIK, Convert__Reg1_0__Imm1_2__Reg1_1, 0, { MCK_GPR, MCK_GPR, MCK_Imm }, 0},
  { 819 /* rsubikc */, MBlaze::RSUBIKC, Convert__Reg1_0__Imm1_2__Reg1_1, 0, { MCK_GPR, MCK_GPR, MCK_Imm }, 0},
  { 827 /* rsubk */, MBlaze::RSUBK, Convert__Reg1_0__Reg1_2__Reg1_1, 0, { MCK_GPR, MCK_GPR, MCK_GPR }, 0},
  { 833 /* rsubkc */, MBlaze::RSUBKC, Convert__Reg1_0__Reg1_2__Reg1_1, 0, { MCK_GPR, MCK_GPR, MCK_GPR }, 0},
  { 840 /* rtbd */, MBlaze::RTBD, Convert__Reg1_0__Imm1_1, 0, { MCK_GPR, MCK_Imm }, 0},
  { 845 /* rted */, MBlaze::RTED, Convert__Reg1_0__Imm1_1, 0, { MCK_GPR, MCK_Imm }, 0},
  { 850 /* rtid */, MBlaze::RTID, Convert__Reg1_0__Imm1_1, 0, { MCK_GPR, MCK_Imm }, 0},
  { 855 /* rtsd */, MBlaze::RTSD, Convert__Reg1_0__Imm1_1, 0, { MCK_GPR, MCK_Imm }, 0},
  { 860 /* sb */, MBlaze::SB, Convert__Reg1_0__Mem2_1, 0, { MCK_GPR, MCK_Mem }, 0},
  { 863 /* sbi */, MBlaze::SBI, Convert__Reg1_0__Mem2_1, 0, { MCK_GPR, MCK_Mem }, 0},
  { 867 /* sbr */, MBlaze::SBR, Convert__Reg1_0__Mem2_1, 0, { MCK_GPR, MCK_Mem }, 0},
  { 871 /* sext16 */, MBlaze::SEXT16, Convert__Reg1_0__Reg1_1, 0, { MCK_GPR, MCK_GPR }, 0},
  { 878 /* sext8 */, MBlaze::SEXT8, Convert__Reg1_0__Reg1_1, 0, { MCK_GPR, MCK_GPR }, 0},
  { 884 /* sh */, MBlaze::SH, Convert__Reg1_0__Mem2_1, 0, { MCK_GPR, MCK_Mem }, 0},
  { 887 /* shi */, MBlaze::SHI, Convert__Reg1_0__Mem2_1, 0, { MCK_GPR, MCK_Mem }, 0},
  { 891 /* shr */, MBlaze::SHR, Convert__Reg1_0__Mem2_1, 0, { MCK_GPR, MCK_Mem }, 0},
  { 895 /* sra */, MBlaze::SRA, Convert__Reg1_0__Reg1_1, 0, { MCK_GPR, MCK_GPR }, 0},
  { 899 /* src */, MBlaze::SRC, Convert__Reg1_0__Reg1_1, 0, { MCK_GPR, MCK_GPR }, 0},
  { 903 /* srl */, MBlaze::SRL, Convert__Reg1_0__Reg1_1, 0, { MCK_GPR, MCK_GPR }, 0},
  { 907 /* sw */, MBlaze::SW, Convert__Reg1_0__Mem2_1, 0, { MCK_GPR, MCK_Mem }, 0},
  { 910 /* swi */, MBlaze::SWI, Convert__Reg1_0__Mem2_1, 0, { MCK_GPR, MCK_Mem }, 0},
  { 914 /* swr */, MBlaze::SWR, Convert__Reg1_0__Mem2_1, 0, { MCK_GPR, MCK_Mem }, 0},
  { 918 /* swx */, MBlaze::SWX, Convert__Reg1_0__Mem2_1, 0, { MCK_GPR, MCK_Mem }, 0},
  { 922 /* taget */, MBlaze::TAGET, Convert__Reg1_0__Fsl1_1, 0, { MCK_GPR, MCK_Fsl }, 0},
  { 928 /* tagetd */, MBlaze::TAGETD, Convert__Reg1_0__Reg1_1, 0, { MCK_GPR, MCK_GPR }, 0},
  { 935 /* taput */, MBlaze::TAPUT, Convert__Fsl1_0, 0, { MCK_Fsl }, 0},
  { 941 /* taputd */, MBlaze::TAPUTD, Convert__Reg1_0, 0, { MCK_GPR }, 0},
  { 948 /* tcaget */, MBlaze::TCAGET, Convert__Reg1_0__Fsl1_1, 0, { MCK_GPR, MCK_Fsl }, 0},
  { 955 /* tcagetd */, MBlaze::TCAGETD, Convert__Reg1_0__Reg1_1, 0, { MCK_GPR, MCK_GPR }, 0},
  { 963 /* tcaput */, MBlaze::TCAPUT, Convert__Fsl1_0, 0, { MCK_Fsl }, 0},
  { 970 /* tcaputd */, MBlaze::TCAPUTD, Convert__Reg1_0, 0, { MCK_GPR }, 0},
  { 978 /* tcget */, MBlaze::TCGET, Convert__Reg1_0__Fsl1_1, 0, { MCK_GPR, MCK_Fsl }, 0},
  { 984 /* tcgetd */, MBlaze::TCGETD, Convert__Reg1_0__Reg1_1, 0, { MCK_GPR, MCK_GPR }, 0},
  { 991 /* tcput */, MBlaze::TCPUT, Convert__Fsl1_0, 0, { MCK_Fsl }, 0},
  { 997 /* tcputd */, MBlaze::TCPUTD, Convert__Reg1_0, 0, { MCK_GPR }, 0},
  { 1004 /* teaget */, MBlaze::TEAGET, Convert__Reg1_0__Fsl1_1, 0, { MCK_GPR, MCK_Fsl }, 0},
  { 1011 /* teagetd */, MBlaze::TEAGETD, Convert__Reg1_0__Reg1_1, 0, { MCK_GPR, MCK_GPR }, 0},
  { 1019 /* tecaget */, MBlaze::TECAGET, Convert__Reg1_0__Fsl1_1, 0, { MCK_GPR, MCK_Fsl }, 0},
  { 1027 /* tecagetd */, MBlaze::TECAGETD, Convert__Reg1_0__Reg1_1, 0, { MCK_GPR, MCK_GPR }, 0},
  { 1036 /* tecget */, MBlaze::TECGET, Convert__Reg1_0__Fsl1_1, 0, { MCK_GPR, MCK_Fsl }, 0},
  { 1043 /* tecgetd */, MBlaze::TECGETD, Convert__Reg1_0__Reg1_1, 0, { MCK_GPR, MCK_GPR }, 0},
  { 1051 /* teget */, MBlaze::TEGET, Convert__Reg1_0__Fsl1_1, 0, { MCK_GPR, MCK_Fsl }, 0},
  { 1057 /* tegetd */, MBlaze::TEGETD, Convert__Reg1_0__Reg1_1, 0, { MCK_GPR, MCK_GPR }, 0},
  { 1064 /* tget */, MBlaze::TGET, Convert__Reg1_0__Fsl1_1, 0, { MCK_GPR, MCK_Fsl }, 0},
  { 1069 /* tgetd */, MBlaze::TGETD, Convert__Reg1_0__Reg1_1, 0, { MCK_GPR, MCK_GPR }, 0},
  { 1075 /* tnaget */, MBlaze::TNAGET, Convert__Reg1_0__Fsl1_1, 0, { MCK_GPR, MCK_Fsl }, 0},
  { 1082 /* tnagetd */, MBlaze::TNAGETD, Convert__Reg1_0__Reg1_1, 0, { MCK_GPR, MCK_GPR }, 0},
  { 1090 /* tnaput */, MBlaze::TNAPUT, Convert__Fsl1_0, 0, { MCK_Fsl }, 0},
  { 1097 /* tnaputd */, MBlaze::TNAPUTD, Convert__Reg1_0, 0, { MCK_GPR }, 0},
  { 1105 /* tncaget */, MBlaze::TNCAGET, Convert__Reg1_0__Fsl1_1, 0, { MCK_GPR, MCK_Fsl }, 0},
  { 1113 /* tncagetd */, MBlaze::TNCAGETD, Convert__Reg1_0__Reg1_1, 0, { MCK_GPR, MCK_GPR }, 0},
  { 1122 /* tncaput */, MBlaze::TNCAPUT, Convert__Fsl1_0, 0, { MCK_Fsl }, 0},
  { 1130 /* tncaputd */, MBlaze::TNCAPUTD, Convert__Reg1_0, 0, { MCK_GPR }, 0},
  { 1139 /* tncget */, MBlaze::TNCGET, Convert__Reg1_0__Fsl1_1, 0, { MCK_GPR, MCK_Fsl }, 0},
  { 1146 /* tncgetd */, MBlaze::TNCGETD, Convert__Reg1_0__Reg1_1, 0, { MCK_GPR, MCK_GPR }, 0},
  { 1154 /* tncput */, MBlaze::TNCPUT, Convert__Fsl1_0, 0, { MCK_Fsl }, 0},
  { 1161 /* tncputd */, MBlaze::TNCPUTD, Convert__Reg1_0, 0, { MCK_GPR }, 0},
  { 1169 /* tneaget */, MBlaze::TNEAGET, Convert__Reg1_0__Fsl1_1, 0, { MCK_GPR, MCK_Fsl }, 0},
  { 1177 /* tneagetd */, MBlaze::TNEAGETD, Convert__Reg1_0__Reg1_1, 0, { MCK_GPR, MCK_GPR }, 0},
  { 1186 /* tnecaget */, MBlaze::TNECAGET, Convert__Reg1_0__Fsl1_1, 0, { MCK_GPR, MCK_Fsl }, 0},
  { 1195 /* tnecagetd */, MBlaze::TNECAGETD, Convert__Reg1_0__Reg1_1, 0, { MCK_GPR, MCK_GPR }, 0},
  { 1205 /* tnecget */, MBlaze::TNECGET, Convert__Reg1_0__Fsl1_1, 0, { MCK_GPR, MCK_Fsl }, 0},
  { 1213 /* tnecgetd */, MBlaze::TNECGETD, Convert__Reg1_0__Reg1_1, 0, { MCK_GPR, MCK_GPR }, 0},
  { 1222 /* tneget */, MBlaze::TNEGET, Convert__Reg1_0__Fsl1_1, 0, { MCK_GPR, MCK_Fsl }, 0},
  { 1229 /* tnegetd */, MBlaze::TNEGETD, Convert__Reg1_0__Reg1_1, 0, { MCK_GPR, MCK_GPR }, 0},
  { 1237 /* tnget */, MBlaze::TNGET, Convert__Reg1_0__Fsl1_1, 0, { MCK_GPR, MCK_Fsl }, 0},
  { 1243 /* tngetd */, MBlaze::TNGETD, Convert__Reg1_0__Reg1_1, 0, { MCK_GPR, MCK_GPR }, 0},
  { 1250 /* tnput */, MBlaze::TNPUT, Convert__Fsl1_0, 0, { MCK_Fsl }, 0},
  { 1256 /* tnputd */, MBlaze::TNPUTD, Convert__Reg1_0, 0, { MCK_GPR }, 0},
  { 1263 /* tput */, MBlaze::TPUT, Convert__Fsl1_0, 0, { MCK_Fsl }, 0},
  { 1268 /* tputd */, MBlaze::TPUTD, Convert__Reg1_0, 0, { MCK_GPR }, 0},
  { 1274 /* wdc */, MBlaze::WDC, Convert__Reg1_0__Reg1_1, 0, { MCK_GPR, MCK_GPR }, 0},
  { 1274 /* wdc */, MBlaze::WDCC, Convert__Reg1_1__Reg1_2, 0, { MCK__DOT_clear, MCK_GPR, MCK_GPR }, 0},
  { 1274 /* wdc */, MBlaze::WDCF, Convert__Reg1_1__Reg1_2, 0, { MCK__DOT_flush, MCK_GPR, MCK_GPR }, 0},
  { 1278 /* wic */, MBlaze::WIC, Convert__Reg1_0__Reg1_1, 0, { MCK_GPR, MCK_GPR }, 0},
  { 1282 /* xor */, MBlaze::XOR, Convert__Reg1_0__Reg1_1__Reg1_2, 0, { MCK_GPR, MCK_GPR, MCK_GPR }, 0},
  { 1286 /* xori */, MBlaze::XORI, Convert__Reg1_0__Reg1_1__Imm1_2, 0, { MCK_GPR, MCK_GPR, MCK_Imm }, 0},
};

bool MBlazeAsmParser::
mnemonicIsValid(StringRef Mnemonic) {
  // Search the table.
  std::pair<const MatchEntry*, const MatchEntry*> MnemonicRange =
    std::equal_range(MatchTable, MatchTable+234, Mnemonic, LessOpcode());
  return MnemonicRange.first != MnemonicRange.second;
}

unsigned MBlazeAsmParser::
MatchInstructionImpl(const SmallVectorImpl<MCParsedAsmOperand*> &Operands,
                     MCInst &Inst,
unsigned &ErrorInfo, bool matchingInlineAsm, unsigned VariantID) {
  // Eliminate obvious mismatches.
  if (Operands.size() > 5) {
    ErrorInfo = 5;
    return Match_InvalidOperand;
  }

  // Get the current feature set.
  unsigned AvailableFeatures = getAvailableFeatures();

  // Get the instruction mnemonic, which is the first token.
  StringRef Mnemonic = ((MBlazeOperand*)Operands[0])->getToken();

  // Some state to try to produce better error messages.
  bool HadMatchOtherThanFeatures = false;
  bool HadMatchOtherThanPredicate = false;
  unsigned RetCode = Match_InvalidOperand;
  unsigned MissingFeatures = ~0U;
  // Set ErrorInfo to the operand that mismatches if it is
  // wrong for all instances of the instruction.
  ErrorInfo = ~0U;
  // Search the table.
  std::pair<const MatchEntry*, const MatchEntry*> MnemonicRange =
    std::equal_range(MatchTable, MatchTable+234, Mnemonic, LessOpcode());

  // Return a more specific error code if no mnemonics match.
  if (MnemonicRange.first == MnemonicRange.second)
    return Match_MnemonicFail;

  for (const MatchEntry *it = MnemonicRange.first, *ie = MnemonicRange.second;
       it != ie; ++it) {
    // equal_range guarantees that instruction mnemonic matches.
    assert(Mnemonic == it->getMnemonic());
    if (VariantID != it->AsmVariantID) continue;
    bool OperandsValid = true;
    for (unsigned i = 0; i != 4; ++i) {
      if (i + 1 >= Operands.size()) {
        OperandsValid = (it->Classes[i] == InvalidMatchClass);
        if (!OperandsValid) ErrorInfo = i + 1;
        break;
      }
      unsigned Diag = validateOperandClass(Operands[i+1],
                                           (MatchClassKind)it->Classes[i]);
      if (Diag == Match_Success)
        continue;
      // If this operand is broken for all of the instances of this
      // mnemonic, keep track of it so we can report loc info.
      // If we already had a match that only failed due to a
      // target predicate, that diagnostic is preferred.
      if (!HadMatchOtherThanPredicate &&
          (it == MnemonicRange.first || ErrorInfo <= i+1)) {
        ErrorInfo = i+1;
        // InvalidOperand is the default. Prefer specificity.
        if (Diag != Match_InvalidOperand)
          RetCode = Diag;
      }
      // Otherwise, just reject this instance of the mnemonic.
      OperandsValid = false;
      break;
    }

    if (!OperandsValid) continue;
    if ((AvailableFeatures & it->RequiredFeatures) != it->RequiredFeatures) {
      HadMatchOtherThanFeatures = true;
      unsigned NewMissingFeatures = it->RequiredFeatures & ~AvailableFeatures;
      if (CountPopulation_32(NewMissingFeatures) <=
          CountPopulation_32(MissingFeatures))
        MissingFeatures = NewMissingFeatures;
      continue;
    }

    if (matchingInlineAsm) {
      Inst.setOpcode(it->Opcode);
      convertToMapAndConstraints(it->ConvertFn, Operands);
      return Match_Success;
    }

    // We have selected a definite instruction, convert the parsed
    // operands into the appropriate MCInst.
    convertToMCInst(it->ConvertFn, Inst, it->Opcode, Operands);

    // We have a potential match. Check the target predicate to
    // handle any context sensitive constraints.
    unsigned MatchResult;
    if ((MatchResult = checkTargetMatchPredicate(Inst)) != Match_Success) {
      Inst.clear();
      RetCode = MatchResult;
      HadMatchOtherThanPredicate = true;
      continue;
    }

    return Match_Success;
  }

  // Okay, we had no match.  Try to return a useful error code.
  if (HadMatchOtherThanPredicate || !HadMatchOtherThanFeatures)
    return RetCode;

  // Missing feature matches return which features were missing
  ErrorInfo = MissingFeatures;
  return Match_MissingFeature;
}

#endif // GET_MATCHER_IMPLEMENTATION

