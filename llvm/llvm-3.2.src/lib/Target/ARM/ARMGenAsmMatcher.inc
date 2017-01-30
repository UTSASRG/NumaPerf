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

  enum OperandMatchResultTy {
    MatchOperand_Success,    // operand matched successfully
    MatchOperand_NoMatch,    // operand did not match
    MatchOperand_ParseFail   // operand matched but had errors
  };
  OperandMatchResultTy MatchOperandParserImpl(
    SmallVectorImpl<MCParsedAsmOperand*> &Operands,
    StringRef Mnemonic);
  OperandMatchResultTy tryCustomParseOperand(
    SmallVectorImpl<MCParsedAsmOperand*> &Operands,
    unsigned MCK);

#endif // GET_ASSEMBLER_HEADER_INFO


#ifdef GET_OPERAND_DIAGNOSTIC_TYPES
#undef GET_OPERAND_DIAGNOSTIC_TYPES

  Match_ImmRange0_15,
  END_OPERAND_DIAGNOSTIC_TYPES
#endif // GET_OPERAND_DIAGNOSTIC_TYPES


#ifdef GET_REGISTER_MATCHER
#undef GET_REGISTER_MATCHER

// Flags for subtarget features that participate in instruction matching.
enum SubtargetFeatureFlag {
  Feature_HasV4T = (1 << 8),
  Feature_HasV5TE = (1 << 9),
  Feature_HasV6 = (1 << 10),
  Feature_HasV6T2 = (1 << 11),
  Feature_HasV7 = (1 << 12),
  Feature_HasVFP2 = (1 << 13),
  Feature_HasVFP3 = (1 << 14),
  Feature_HasVFP4 = (1 << 15),
  Feature_HasNEON = (1 << 5),
  Feature_HasFP16 = (1 << 3),
  Feature_HasDivide = (1 << 1),
  Feature_HasDivideInARM = (1 << 2),
  Feature_HasT2ExtractPack = (1 << 6),
  Feature_HasThumb2DSP = (1 << 7),
  Feature_HasDB = (1 << 0),
  Feature_HasMP = (1 << 4),
  Feature_IsThumb = (1 << 19),
  Feature_IsThumb2 = (1 << 20),
  Feature_IsMClass = (1 << 18),
  Feature_IsARClass = (1 << 16),
  Feature_IsARM = (1 << 17),
  Feature_None = 0
};

static unsigned MatchRegisterName(StringRef Name) {
  switch (Name.size()) {
  default: break;
  case 2:	 // 43 strings to match.
    switch (Name[0]) {
    default: break;
    case 'd':	 // 10 strings to match.
      switch (Name[1]) {
      default: break;
      case '0':	 // 1 string to match.
        return 3;	 // "d0"
      case '1':	 // 1 string to match.
        return 4;	 // "d1"
      case '2':	 // 1 string to match.
        return 5;	 // "d2"
      case '3':	 // 1 string to match.
        return 6;	 // "d3"
      case '4':	 // 1 string to match.
        return 7;	 // "d4"
      case '5':	 // 1 string to match.
        return 8;	 // "d5"
      case '6':	 // 1 string to match.
        return 9;	 // "d6"
      case '7':	 // 1 string to match.
        return 10;	 // "d7"
      case '8':	 // 1 string to match.
        return 11;	 // "d8"
      case '9':	 // 1 string to match.
        return 12;	 // "d9"
      }
      break;
    case 'l':	 // 1 string to match.
      if (Name[1] != 'r')
        break;
      return 40;	 // "lr"
    case 'p':	 // 1 string to match.
      if (Name[1] != 'c')
        break;
      return 43;	 // "pc"
    case 'q':	 // 10 strings to match.
      switch (Name[1]) {
      default: break;
      case '0':	 // 1 string to match.
        return 44;	 // "q0"
      case '1':	 // 1 string to match.
        return 45;	 // "q1"
      case '2':	 // 1 string to match.
        return 46;	 // "q2"
      case '3':	 // 1 string to match.
        return 47;	 // "q3"
      case '4':	 // 1 string to match.
        return 48;	 // "q4"
      case '5':	 // 1 string to match.
        return 49;	 // "q5"
      case '6':	 // 1 string to match.
        return 50;	 // "q6"
      case '7':	 // 1 string to match.
        return 51;	 // "q7"
      case '8':	 // 1 string to match.
        return 52;	 // "q8"
      case '9':	 // 1 string to match.
        return 53;	 // "q9"
      }
      break;
    case 'r':	 // 10 strings to match.
      switch (Name[1]) {
      default: break;
      case '0':	 // 1 string to match.
        return 60;	 // "r0"
      case '1':	 // 1 string to match.
        return 61;	 // "r1"
      case '2':	 // 1 string to match.
        return 62;	 // "r2"
      case '3':	 // 1 string to match.
        return 63;	 // "r3"
      case '4':	 // 1 string to match.
        return 64;	 // "r4"
      case '5':	 // 1 string to match.
        return 65;	 // "r5"
      case '6':	 // 1 string to match.
        return 66;	 // "r6"
      case '7':	 // 1 string to match.
        return 67;	 // "r7"
      case '8':	 // 1 string to match.
        return 68;	 // "r8"
      case '9':	 // 1 string to match.
        return 69;	 // "r9"
      }
      break;
    case 's':	 // 11 strings to match.
      switch (Name[1]) {
      default: break;
      case '0':	 // 1 string to match.
        return 73;	 // "s0"
      case '1':	 // 1 string to match.
        return 74;	 // "s1"
      case '2':	 // 1 string to match.
        return 75;	 // "s2"
      case '3':	 // 1 string to match.
        return 76;	 // "s3"
      case '4':	 // 1 string to match.
        return 77;	 // "s4"
      case '5':	 // 1 string to match.
        return 78;	 // "s5"
      case '6':	 // 1 string to match.
        return 79;	 // "s6"
      case '7':	 // 1 string to match.
        return 80;	 // "s7"
      case '8':	 // 1 string to match.
        return 81;	 // "s8"
      case '9':	 // 1 string to match.
        return 82;	 // "s9"
      case 'p':	 // 1 string to match.
        return 105;	 // "sp"
      }
      break;
    }
    break;
  case 3:	 // 53 strings to match.
    switch (Name[0]) {
    default: break;
    case 'd':	 // 22 strings to match.
      switch (Name[1]) {
      default: break;
      case '1':	 // 10 strings to match.
        switch (Name[2]) {
        default: break;
        case '0':	 // 1 string to match.
          return 13;	 // "d10"
        case '1':	 // 1 string to match.
          return 14;	 // "d11"
        case '2':	 // 1 string to match.
          return 15;	 // "d12"
        case '3':	 // 1 string to match.
          return 16;	 // "d13"
        case '4':	 // 1 string to match.
          return 17;	 // "d14"
        case '5':	 // 1 string to match.
          return 18;	 // "d15"
        case '6':	 // 1 string to match.
          return 19;	 // "d16"
        case '7':	 // 1 string to match.
          return 20;	 // "d17"
        case '8':	 // 1 string to match.
          return 21;	 // "d18"
        case '9':	 // 1 string to match.
          return 22;	 // "d19"
        }
        break;
      case '2':	 // 10 strings to match.
        switch (Name[2]) {
        default: break;
        case '0':	 // 1 string to match.
          return 23;	 // "d20"
        case '1':	 // 1 string to match.
          return 24;	 // "d21"
        case '2':	 // 1 string to match.
          return 25;	 // "d22"
        case '3':	 // 1 string to match.
          return 26;	 // "d23"
        case '4':	 // 1 string to match.
          return 27;	 // "d24"
        case '5':	 // 1 string to match.
          return 28;	 // "d25"
        case '6':	 // 1 string to match.
          return 29;	 // "d26"
        case '7':	 // 1 string to match.
          return 30;	 // "d27"
        case '8':	 // 1 string to match.
          return 31;	 // "d28"
        case '9':	 // 1 string to match.
          return 32;	 // "d29"
        }
        break;
      case '3':	 // 2 strings to match.
        switch (Name[2]) {
        default: break;
        case '0':	 // 1 string to match.
          return 33;	 // "d30"
        case '1':	 // 1 string to match.
          return 34;	 // "d31"
        }
        break;
      }
      break;
    case 'q':	 // 6 strings to match.
      if (Name[1] != '1')
        break;
      switch (Name[2]) {
      default: break;
      case '0':	 // 1 string to match.
        return 54;	 // "q10"
      case '1':	 // 1 string to match.
        return 55;	 // "q11"
      case '2':	 // 1 string to match.
        return 56;	 // "q12"
      case '3':	 // 1 string to match.
        return 57;	 // "q13"
      case '4':	 // 1 string to match.
        return 58;	 // "q14"
      case '5':	 // 1 string to match.
        return 59;	 // "q15"
      }
      break;
    case 'r':	 // 3 strings to match.
      if (Name[1] != '1')
        break;
      switch (Name[2]) {
      default: break;
      case '0':	 // 1 string to match.
        return 70;	 // "r10"
      case '1':	 // 1 string to match.
        return 71;	 // "r11"
      case '2':	 // 1 string to match.
        return 72;	 // "r12"
      }
      break;
    case 's':	 // 22 strings to match.
      switch (Name[1]) {
      default: break;
      case '1':	 // 10 strings to match.
        switch (Name[2]) {
        default: break;
        case '0':	 // 1 string to match.
          return 83;	 // "s10"
        case '1':	 // 1 string to match.
          return 84;	 // "s11"
        case '2':	 // 1 string to match.
          return 85;	 // "s12"
        case '3':	 // 1 string to match.
          return 86;	 // "s13"
        case '4':	 // 1 string to match.
          return 87;	 // "s14"
        case '5':	 // 1 string to match.
          return 88;	 // "s15"
        case '6':	 // 1 string to match.
          return 89;	 // "s16"
        case '7':	 // 1 string to match.
          return 90;	 // "s17"
        case '8':	 // 1 string to match.
          return 91;	 // "s18"
        case '9':	 // 1 string to match.
          return 92;	 // "s19"
        }
        break;
      case '2':	 // 10 strings to match.
        switch (Name[2]) {
        default: break;
        case '0':	 // 1 string to match.
          return 93;	 // "s20"
        case '1':	 // 1 string to match.
          return 94;	 // "s21"
        case '2':	 // 1 string to match.
          return 95;	 // "s22"
        case '3':	 // 1 string to match.
          return 96;	 // "s23"
        case '4':	 // 1 string to match.
          return 97;	 // "s24"
        case '5':	 // 1 string to match.
          return 98;	 // "s25"
        case '6':	 // 1 string to match.
          return 99;	 // "s26"
        case '7':	 // 1 string to match.
          return 100;	 // "s27"
        case '8':	 // 1 string to match.
          return 101;	 // "s28"
        case '9':	 // 1 string to match.
          return 102;	 // "s29"
        }
        break;
      case '3':	 // 2 strings to match.
        switch (Name[2]) {
        default: break;
        case '0':	 // 1 string to match.
          return 103;	 // "s30"
        case '1':	 // 1 string to match.
          return 104;	 // "s31"
        }
        break;
      }
      break;
    }
    break;
  case 4:	 // 3 strings to match.
    switch (Name[0]) {
    default: break;
    case 'a':	 // 1 string to match.
      if (memcmp(Name.data()+1, "psr", 3))
        break;
      return 1;	 // "apsr"
    case 'c':	 // 1 string to match.
      if (memcmp(Name.data()+1, "psr", 3))
        break;
      return 2;	 // "cpsr"
    case 's':	 // 1 string to match.
      if (memcmp(Name.data()+1, "psr", 3))
        break;
      return 106;	 // "spsr"
    }
    break;
  case 5:	 // 5 strings to match.
    switch (Name[0]) {
    default: break;
    case 'f':	 // 3 strings to match.
      if (Name[1] != 'p')
        break;
      switch (Name[2]) {
      default: break;
      case 'e':	 // 1 string to match.
        if (memcmp(Name.data()+3, "xc", 2))
          break;
        return 35;	 // "fpexc"
      case 's':	 // 2 strings to match.
        switch (Name[3]) {
        default: break;
        case 'c':	 // 1 string to match.
          if (Name[4] != 'r')
            break;
          return 36;	 // "fpscr"
        case 'i':	 // 1 string to match.
          if (Name[4] != 'd')
            break;
          return 38;	 // "fpsid"
        }
        break;
      }
      break;
    case 'm':	 // 2 strings to match.
      if (memcmp(Name.data()+1, "vfr", 3))
        break;
      switch (Name[4]) {
      default: break;
      case '0':	 // 1 string to match.
        return 41;	 // "mvfr0"
      case '1':	 // 1 string to match.
        return 42;	 // "mvfr1"
      }
      break;
    }
    break;
  case 7:	 // 1 string to match.
    if (memcmp(Name.data()+0, "itstate", 7))
      break;
    return 39;	 // "itstate"
  case 10:	 // 1 string to match.
    if (memcmp(Name.data()+0, "fpscr_nzcv", 10))
      break;
    return 37;	 // "fpscr_nzcv"
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
  case Feature_HasV4T: return "armv4t";
  case Feature_HasV5TE: return "armv5te";
  case Feature_HasV6: return "armv6";
  case Feature_HasV6T2: return "armv6t2";
  case Feature_HasV7: return "armv7";
  case Feature_HasVFP2: return "VFP2";
  case Feature_HasVFP3: return "VFP3";
  case Feature_HasVFP4: return "VFP4";
  case Feature_HasNEON: return "NEON";
  case Feature_HasFP16: return "half-float";
  case Feature_HasDivide: return "divide";
  case Feature_HasDivideInARM: return "";
  case Feature_HasT2ExtractPack: return "pack/extract";
  case Feature_HasThumb2DSP: return "thumb2-dsp";
  case Feature_HasDB: return "data-barriers";
  case Feature_HasMP: return "mp-extensions";
  case Feature_IsThumb: return "thumb";
  case Feature_IsThumb2: return "thumb2";
  case Feature_IsMClass: return "armv7m";
  case Feature_IsARClass: return "armv7a/r";
  case Feature_IsARM: return "arm-mode";
  default: return "(unknown)";
  }
}

#endif // GET_SUBTARGET_FEATURE_NAME


#ifdef GET_MATCHER_IMPLEMENTATION
#undef GET_MATCHER_IMPLEMENTATION

static void applyMnemonicAliases(StringRef &Mnemonic, unsigned Features) {
  switch (Mnemonic.size()) {
  default: break;
  case 3:	 // 3 strings to match.
    switch (Mnemonic[0]) {
    default: break;
    case 'r':	 // 1 string to match.
      if (memcmp(Mnemonic.data()+1, "fe", 2))
        break;
      Mnemonic = "rfeia";	 // "rfe"
      return;
    case 's':	 // 2 strings to match.
      switch (Mnemonic[1]) {
      default: break;
      case 'r':	 // 1 string to match.
        if (Mnemonic[2] != 's')
          break;
        Mnemonic = "srsia";	 // "srs"
        return;
      case 'w':	 // 1 string to match.
        if (Mnemonic[2] != 'i')
          break;
        Mnemonic = "svc";	 // "swi"
        return;
      }
      break;
    }
    break;
  case 4:	 // 10 strings to match.
    switch (Mnemonic[0]) {
    default: break;
    case 'f':	 // 8 strings to match.
      switch (Mnemonic[1]) {
      default: break;
      case 'l':	 // 2 strings to match.
        if (Mnemonic[2] != 'd')
          break;
        switch (Mnemonic[3]) {
        default: break;
        case 'd':	 // 1 string to match.
          if ((Features & Feature_HasVFP2) == Feature_HasVFP2)	 // "fldd"
            Mnemonic = "vldr";
          return;
        case 's':	 // 1 string to match.
          if ((Features & Feature_HasVFP2) == Feature_HasVFP2)	 // "flds"
            Mnemonic = "vldr";
          return;
        }
        break;
      case 'm':	 // 4 strings to match.
        switch (Mnemonic[2]) {
        default: break;
        case 'r':	 // 2 strings to match.
          switch (Mnemonic[3]) {
          default: break;
          case 's':	 // 1 string to match.
            if ((Features & Feature_HasVFP2) == Feature_HasVFP2)	 // "fmrs"
              Mnemonic = "vmov";
            return;
          case 'x':	 // 1 string to match.
            if ((Features & Feature_HasVFP2) == Feature_HasVFP2)	 // "fmrx"
              Mnemonic = "vmrs";
            return;
          }
          break;
        case 's':	 // 1 string to match.
          if (Mnemonic[3] != 'r')
            break;
          if ((Features & Feature_HasVFP2) == Feature_HasVFP2)	 // "fmsr"
            Mnemonic = "vmov";
          return;
        case 'x':	 // 1 string to match.
          if (Mnemonic[3] != 'r')
            break;
          if ((Features & Feature_HasVFP2) == Feature_HasVFP2)	 // "fmxr"
            Mnemonic = "vmsr";
          return;
        }
        break;
      case 's':	 // 2 strings to match.
        if (Mnemonic[2] != 't')
          break;
        switch (Mnemonic[3]) {
        default: break;
        case 'd':	 // 1 string to match.
          if ((Features & Feature_HasVFP2) == Feature_HasVFP2)	 // "fstd"
            Mnemonic = "vstr";
          return;
        case 's':	 // 1 string to match.
          if ((Features & Feature_HasVFP2) == Feature_HasVFP2)	 // "fsts"
            Mnemonic = "vstr";
          return;
        }
        break;
      }
      break;
    case 'v':	 // 2 strings to match.
      switch (Mnemonic[1]) {
      default: break;
      case 'l':	 // 1 string to match.
        if (memcmp(Mnemonic.data()+2, "dm", 2))
          break;
        Mnemonic = "vldmia";	 // "vldm"
        return;
      case 's':	 // 1 string to match.
        if (memcmp(Mnemonic.data()+2, "tm", 2))
          break;
        Mnemonic = "vstmia";	 // "vstm"
        return;
      }
      break;
    }
    break;
  case 5:	 // 51 strings to match.
    switch (Mnemonic[0]) {
    default: break;
    case 'f':	 // 18 strings to match.
      switch (Mnemonic[1]) {
      default: break;
      case 'a':	 // 2 strings to match.
        if (memcmp(Mnemonic.data()+2, "dd", 2))
          break;
        switch (Mnemonic[4]) {
        default: break;
        case 'd':	 // 1 string to match.
          if ((Features & Feature_HasVFP2) == Feature_HasVFP2)	 // "faddd"
            Mnemonic = "vadd.f64";
          return;
        case 's':	 // 1 string to match.
          if ((Features & Feature_HasVFP2) == Feature_HasVFP2)	 // "fadds"
            Mnemonic = "vadd.f32";
          return;
        }
        break;
      case 'c':	 // 4 strings to match.
        switch (Mnemonic[2]) {
        default: break;
        case 'm':	 // 2 strings to match.
          if (Mnemonic[3] != 'p')
            break;
          switch (Mnemonic[4]) {
          default: break;
          case 'd':	 // 1 string to match.
            if ((Features & Feature_HasVFP2) == Feature_HasVFP2)	 // "fcmpd"
              Mnemonic = "vcmp.f64";
            return;
          case 's':	 // 1 string to match.
            if ((Features & Feature_HasVFP2) == Feature_HasVFP2)	 // "fcmps"
              Mnemonic = "vcmp.f32";
            return;
          }
          break;
        case 'p':	 // 2 strings to match.
          if (Mnemonic[3] != 'y')
            break;
          switch (Mnemonic[4]) {
          default: break;
          case 'd':	 // 1 string to match.
            if ((Features & Feature_HasVFP2) == Feature_HasVFP2)	 // "fcpyd"
              Mnemonic = "vmov.f64";
            return;
          case 's':	 // 1 string to match.
            if ((Features & Feature_HasVFP2) == Feature_HasVFP2)	 // "fcpys"
              Mnemonic = "vmov.f32";
            return;
          }
          break;
        }
        break;
      case 'd':	 // 2 strings to match.
        if (memcmp(Mnemonic.data()+2, "iv", 2))
          break;
        switch (Mnemonic[4]) {
        default: break;
        case 'd':	 // 1 string to match.
          if ((Features & Feature_HasVFP2) == Feature_HasVFP2)	 // "fdivd"
            Mnemonic = "vdiv.f64";
          return;
        case 's':	 // 1 string to match.
          if ((Features & Feature_HasVFP2) == Feature_HasVFP2)	 // "fdivs"
            Mnemonic = "vdiv.f32";
          return;
        }
        break;
      case 'm':	 // 8 strings to match.
        switch (Mnemonic[2]) {
        default: break;
        case 'a':	 // 2 strings to match.
          if (Mnemonic[3] != 'c')
            break;
          switch (Mnemonic[4]) {
          default: break;
          case 'd':	 // 1 string to match.
            if ((Features & Feature_HasVFP2) == Feature_HasVFP2)	 // "fmacd"
              Mnemonic = "vmla.f64";
            return;
          case 's':	 // 1 string to match.
            if ((Features & Feature_HasVFP2) == Feature_HasVFP2)	 // "fmacs"
              Mnemonic = "vmla.f32";
            return;
          }
          break;
        case 'd':	 // 1 string to match.
          if (memcmp(Mnemonic.data()+3, "rr", 2))
            break;
          if ((Features & Feature_HasVFP2) == Feature_HasVFP2)	 // "fmdrr"
            Mnemonic = "vmov";
          return;
        case 'r':	 // 3 strings to match.
          switch (Mnemonic[3]) {
          default: break;
          case 'd':	 // 2 strings to match.
            switch (Mnemonic[4]) {
            default: break;
            case 'd':	 // 1 string to match.
              if ((Features & Feature_HasVFP2) == Feature_HasVFP2)	 // "fmrdd"
                Mnemonic = "vmov";
              return;
            case 's':	 // 1 string to match.
              if ((Features & Feature_HasVFP2) == Feature_HasVFP2)	 // "fmrds"
                Mnemonic = "vmov";
              return;
            }
            break;
          case 'r':	 // 1 string to match.
            if (Mnemonic[4] != 'd')
              break;
            if ((Features & Feature_HasVFP2) == Feature_HasVFP2)	 // "fmrrd"
              Mnemonic = "vmov";
            return;
          }
          break;
        case 'u':	 // 2 strings to match.
          if (Mnemonic[3] != 'l')
            break;
          switch (Mnemonic[4]) {
          default: break;
          case 'd':	 // 1 string to match.
            if ((Features & Feature_HasVFP2) == Feature_HasVFP2)	 // "fmuld"
              Mnemonic = "vmul.f64";
            return;
          case 's':	 // 1 string to match.
            if ((Features & Feature_HasVFP2) == Feature_HasVFP2)	 // "fmuls"
              Mnemonic = "vmul.f32";
            return;
          }
          break;
        }
        break;
      case 'n':	 // 2 strings to match.
        if (memcmp(Mnemonic.data()+2, "eg", 2))
          break;
        switch (Mnemonic[4]) {
        default: break;
        case 'd':	 // 1 string to match.
          if ((Features & Feature_HasVFP2) == Feature_HasVFP2)	 // "fnegd"
            Mnemonic = "vneg.f64";
          return;
        case 's':	 // 1 string to match.
          if ((Features & Feature_HasVFP2) == Feature_HasVFP2)	 // "fnegs"
            Mnemonic = "vneg.f32";
          return;
        }
        break;
      }
      break;
    case 'l':	 // 3 strings to match.
      if (memcmp(Mnemonic.data()+1, "dm", 2))
        break;
      switch (Mnemonic[3]) {
      default: break;
      case 'e':	 // 1 string to match.
        if (Mnemonic[4] != 'a')
          break;
        Mnemonic = "ldmdb";	 // "ldmea"
        return;
      case 'f':	 // 1 string to match.
        if (Mnemonic[4] != 'd')
          break;
        Mnemonic = "ldm";	 // "ldmfd"
        return;
      case 'i':	 // 1 string to match.
        if (Mnemonic[4] != 'a')
          break;
        Mnemonic = "ldm";	 // "ldmia"
        return;
      }
      break;
    case 'r':	 // 4 strings to match.
      if (memcmp(Mnemonic.data()+1, "fe", 2))
        break;
      switch (Mnemonic[3]) {
      default: break;
      case 'e':	 // 2 strings to match.
        switch (Mnemonic[4]) {
        default: break;
        case 'a':	 // 1 string to match.
          Mnemonic = "rfedb";	 // "rfeea"
          return;
        case 'd':	 // 1 string to match.
          Mnemonic = "rfeib";	 // "rfeed"
          return;
        }
        break;
      case 'f':	 // 2 strings to match.
        switch (Mnemonic[4]) {
        default: break;
        case 'a':	 // 1 string to match.
          Mnemonic = "rfeda";	 // "rfefa"
          return;
        case 'd':	 // 1 string to match.
          Mnemonic = "rfeia";	 // "rfefd"
          return;
        }
        break;
      }
      break;
    case 's':	 // 7 strings to match.
      switch (Mnemonic[1]) {
      default: break;
      case 'r':	 // 4 strings to match.
        if (Mnemonic[2] != 's')
          break;
        switch (Mnemonic[3]) {
        default: break;
        case 'e':	 // 2 strings to match.
          switch (Mnemonic[4]) {
          default: break;
          case 'a':	 // 1 string to match.
            Mnemonic = "srsdb";	 // "srsea"
            return;
          case 'd':	 // 1 string to match.
            Mnemonic = "srsib";	 // "srsed"
            return;
          }
          break;
        case 'f':	 // 2 strings to match.
          switch (Mnemonic[4]) {
          default: break;
          case 'a':	 // 1 string to match.
            Mnemonic = "srsda";	 // "srsfa"
            return;
          case 'd':	 // 1 string to match.
            Mnemonic = "srsia";	 // "srsfd"
            return;
          }
          break;
        }
        break;
      case 't':	 // 3 strings to match.
        if (Mnemonic[2] != 'm')
          break;
        switch (Mnemonic[3]) {
        default: break;
        case 'e':	 // 1 string to match.
          if (Mnemonic[4] != 'a')
            break;
          Mnemonic = "stm";	 // "stmea"
          return;
        case 'f':	 // 1 string to match.
          if (Mnemonic[4] != 'd')
            break;
          Mnemonic = "stmdb";	 // "stmfd"
          return;
        case 'i':	 // 1 string to match.
          if (Mnemonic[4] != 'a')
            break;
          Mnemonic = "stm";	 // "stmia"
          return;
        }
        break;
      }
      break;
    case 'v':	 // 19 strings to match.
      switch (Mnemonic[1]) {
      default: break;
      case 'a':	 // 3 strings to match.
        switch (Mnemonic[2]) {
        default: break;
        case 'b':	 // 1 string to match.
          if (memcmp(Mnemonic.data()+3, "sq", 2))
            break;
          if ((Features & Feature_HasNEON) == Feature_HasNEON)	 // "vabsq"
            Mnemonic = "vabs";
          return;
        case 'd':	 // 1 string to match.
          if (memcmp(Mnemonic.data()+3, "dq", 2))
            break;
          if ((Features & Feature_HasNEON) == Feature_HasNEON)	 // "vaddq"
            Mnemonic = "vadd";
          return;
        case 'n':	 // 1 string to match.
          if (memcmp(Mnemonic.data()+3, "dq", 2))
            break;
          if ((Features & Feature_HasNEON) == Feature_HasNEON)	 // "vandq"
            Mnemonic = "vand";
          return;
        }
        break;
      case 'b':	 // 1 string to match.
        if (memcmp(Mnemonic.data()+2, "icq", 3))
          break;
        if ((Features & Feature_HasNEON) == Feature_HasNEON)	 // "vbicq"
          Mnemonic = "vbic";
        return;
      case 'c':	 // 3 strings to match.
        switch (Mnemonic[2]) {
        default: break;
        case 'e':	 // 1 string to match.
          if (memcmp(Mnemonic.data()+3, "qq", 2))
            break;
          if ((Features & Feature_HasNEON) == Feature_HasNEON)	 // "vceqq"
            Mnemonic = "vceq";
          return;
        case 'l':	 // 1 string to match.
          if (memcmp(Mnemonic.data()+3, "eq", 2))
            break;
          if ((Features & Feature_HasNEON) == Feature_HasNEON)	 // "vcleq"
            Mnemonic = "vcle";
          return;
        case 'v':	 // 1 string to match.
          if (memcmp(Mnemonic.data()+3, "tq", 2))
            break;
          if ((Features & Feature_HasNEON) == Feature_HasNEON)	 // "vcvtq"
            Mnemonic = "vcvt";
          return;
        }
        break;
      case 'e':	 // 1 string to match.
        if (memcmp(Mnemonic.data()+2, "orq", 3))
          break;
        if ((Features & Feature_HasNEON) == Feature_HasNEON)	 // "veorq"
          Mnemonic = "veor";
        return;
      case 'm':	 // 5 strings to match.
        switch (Mnemonic[2]) {
        default: break;
        case 'a':	 // 1 string to match.
          if (memcmp(Mnemonic.data()+3, "xq", 2))
            break;
          if ((Features & Feature_HasNEON) == Feature_HasNEON)	 // "vmaxq"
            Mnemonic = "vmax";
          return;
        case 'i':	 // 1 string to match.
          if (memcmp(Mnemonic.data()+3, "nq", 2))
            break;
          if ((Features & Feature_HasNEON) == Feature_HasNEON)	 // "vminq"
            Mnemonic = "vmin";
          return;
        case 'o':	 // 1 string to match.
          if (memcmp(Mnemonic.data()+3, "vq", 2))
            break;
          if ((Features & Feature_HasNEON) == Feature_HasNEON)	 // "vmovq"
            Mnemonic = "vmov";
          return;
        case 'u':	 // 1 string to match.
          if (memcmp(Mnemonic.data()+3, "lq", 2))
            break;
          if ((Features & Feature_HasNEON) == Feature_HasNEON)	 // "vmulq"
            Mnemonic = "vmul";
          return;
        case 'v':	 // 1 string to match.
          if (memcmp(Mnemonic.data()+3, "nq", 2))
            break;
          if ((Features & Feature_HasNEON) == Feature_HasNEON)	 // "vmvnq"
            Mnemonic = "vmvn";
          return;
        }
        break;
      case 'o':	 // 1 string to match.
        if (memcmp(Mnemonic.data()+2, "rrq", 3))
          break;
        if ((Features & Feature_HasNEON) == Feature_HasNEON)	 // "vorrq"
          Mnemonic = "vorr";
        return;
      case 's':	 // 4 strings to match.
        switch (Mnemonic[2]) {
        default: break;
        case 'h':	 // 2 strings to match.
          switch (Mnemonic[3]) {
          default: break;
          case 'l':	 // 1 string to match.
            if (Mnemonic[4] != 'q')
              break;
            if ((Features & Feature_HasNEON) == Feature_HasNEON)	 // "vshlq"
              Mnemonic = "vshl";
            return;
          case 'r':	 // 1 string to match.
            if (Mnemonic[4] != 'q')
              break;
            if ((Features & Feature_HasNEON) == Feature_HasNEON)	 // "vshrq"
              Mnemonic = "vshr";
            return;
          }
          break;
        case 'u':	 // 1 string to match.
          if (memcmp(Mnemonic.data()+3, "bq", 2))
            break;
          if ((Features & Feature_HasNEON) == Feature_HasNEON)	 // "vsubq"
            Mnemonic = "vsub";
          return;
        case 'w':	 // 1 string to match.
          if (memcmp(Mnemonic.data()+3, "pq", 2))
            break;
          if ((Features & Feature_HasNEON) == Feature_HasNEON)	 // "vswpq"
            Mnemonic = "vswp";
          return;
        }
        break;
      case 'z':	 // 1 string to match.
        if (memcmp(Mnemonic.data()+2, "ipq", 3))
          break;
        if ((Features & Feature_HasNEON) == Feature_HasNEON)	 // "vzipq"
          Mnemonic = "vzip";
        return;
      }
      break;
    }
    break;
  case 6:	 // 10 strings to match.
    if (Mnemonic[0] != 'f')
      break;
    switch (Mnemonic[1]) {
    default: break;
    case 's':	 // 4 strings to match.
      switch (Mnemonic[2]) {
      default: break;
      case 'i':	 // 2 strings to match.
        if (memcmp(Mnemonic.data()+3, "to", 2))
          break;
        switch (Mnemonic[5]) {
        default: break;
        case 'd':	 // 1 string to match.
          if ((Features & Feature_HasVFP2) == Feature_HasVFP2)	 // "fsitod"
            Mnemonic = "vcvt.f64.s32";
          return;
        case 's':	 // 1 string to match.
          if ((Features & Feature_HasVFP2) == Feature_HasVFP2)	 // "fsitos"
            Mnemonic = "vcvt.f32.s32";
          return;
        }
        break;
      case 'q':	 // 2 strings to match.
        if (memcmp(Mnemonic.data()+3, "rt", 2))
          break;
        switch (Mnemonic[5]) {
        default: break;
        case 'd':	 // 1 string to match.
          if ((Features & Feature_HasVFP2) == Feature_HasVFP2)	 // "fsqrtd"
            Mnemonic = "vsqrt";
          return;
        case 's':	 // 1 string to match.
          if ((Features & Feature_HasVFP2) == Feature_HasVFP2)	 // "fsqrts"
            Mnemonic = "vsqrt";
          return;
        }
        break;
      }
      break;
    case 't':	 // 4 strings to match.
      if (Mnemonic[2] != 'o')
        break;
      switch (Mnemonic[3]) {
      default: break;
      case 's':	 // 2 strings to match.
        if (Mnemonic[4] != 'i')
          break;
        switch (Mnemonic[5]) {
        default: break;
        case 'd':	 // 1 string to match.
          if ((Features & Feature_HasVFP2) == Feature_HasVFP2)	 // "ftosid"
            Mnemonic = "vcvtr.s32.f64";
          return;
        case 's':	 // 1 string to match.
          if ((Features & Feature_HasVFP2) == Feature_HasVFP2)	 // "ftosis"
            Mnemonic = "vcvtr.s32.f32";
          return;
        }
        break;
      case 'u':	 // 2 strings to match.
        if (Mnemonic[4] != 'i')
          break;
        switch (Mnemonic[5]) {
        default: break;
        case 'd':	 // 1 string to match.
          if ((Features & Feature_HasVFP2) == Feature_HasVFP2)	 // "ftouid"
            Mnemonic = "vcvtr.u32.f64";
          return;
        case 's':	 // 1 string to match.
          if ((Features & Feature_HasVFP2) == Feature_HasVFP2)	 // "ftouis"
            Mnemonic = "vcvtr.u32.f32";
          return;
        }
        break;
      }
      break;
    case 'u':	 // 2 strings to match.
      if (memcmp(Mnemonic.data()+2, "ito", 3))
        break;
      switch (Mnemonic[5]) {
      default: break;
      case 'd':	 // 1 string to match.
        if ((Features & Feature_HasVFP2) == Feature_HasVFP2)	 // "fuitod"
          Mnemonic = "vcvt.f64.u32";
        return;
      case 's':	 // 1 string to match.
        if ((Features & Feature_HasVFP2) == Feature_HasVFP2)	 // "fuitos"
          Mnemonic = "vcvt.f32.u32";
        return;
      }
      break;
    }
    break;
  case 7:	 // 4 strings to match.
    if (memcmp(Mnemonic.data()+0, "fto", 3))
      break;
    switch (Mnemonic[3]) {
    default: break;
    case 's':	 // 2 strings to match.
      if (memcmp(Mnemonic.data()+4, "iz", 2))
        break;
      switch (Mnemonic[6]) {
      default: break;
      case 'd':	 // 1 string to match.
        if ((Features & Feature_HasVFP2) == Feature_HasVFP2)	 // "ftosizd"
          Mnemonic = "vcvt.s32.f64";
        return;
      case 's':	 // 1 string to match.
        if ((Features & Feature_HasVFP2) == Feature_HasVFP2)	 // "ftosizs"
          Mnemonic = "vcvt.s32.f32";
        return;
      }
      break;
    case 'u':	 // 2 strings to match.
      if (memcmp(Mnemonic.data()+4, "iz", 2))
        break;
      switch (Mnemonic[6]) {
      default: break;
      case 'd':	 // 1 string to match.
        if ((Features & Feature_HasVFP2) == Feature_HasVFP2)	 // "ftouizd"
          Mnemonic = "vcvt.u32.f64";
        return;
      case 's':	 // 1 string to match.
        if ((Features & Feature_HasVFP2) == Feature_HasVFP2)	 // "ftouizs"
          Mnemonic = "vcvt.u32.f32";
        return;
      }
      break;
    }
    break;
  case 8:	 // 5 strings to match.
    switch (Mnemonic[0]) {
    default: break;
    case 'q':	 // 1 string to match.
      if (memcmp(Mnemonic.data()+1, "subaddx", 7))
        break;
      Mnemonic = "qsax";	 // "qsubaddx"
      return;
    case 's':	 // 2 strings to match.
      switch (Mnemonic[1]) {
      default: break;
      case 'a':	 // 1 string to match.
        if (memcmp(Mnemonic.data()+2, "ddsubx", 6))
          break;
        Mnemonic = "sasx";	 // "saddsubx"
        return;
      case 's':	 // 1 string to match.
        if (memcmp(Mnemonic.data()+2, "ubaddx", 6))
          break;
        Mnemonic = "ssax";	 // "ssubaddx"
        return;
      }
      break;
    case 'u':	 // 2 strings to match.
      switch (Mnemonic[1]) {
      default: break;
      case 'a':	 // 1 string to match.
        if (memcmp(Mnemonic.data()+2, "ddsubx", 6))
          break;
        Mnemonic = "uasx";	 // "uaddsubx"
        return;
      case 's':	 // 1 string to match.
        if (memcmp(Mnemonic.data()+2, "ubaddx", 6))
          break;
        Mnemonic = "usax";	 // "usubaddx"
        return;
      }
      break;
    }
    break;
  case 9:	 // 8 strings to match.
    switch (Mnemonic[0]) {
    default: break;
    case 's':	 // 2 strings to match.
      if (Mnemonic[1] != 'h')
        break;
      switch (Mnemonic[2]) {
      default: break;
      case 'a':	 // 1 string to match.
        if (memcmp(Mnemonic.data()+3, "ddsubx", 6))
          break;
        Mnemonic = "shasx";	 // "shaddsubx"
        return;
      case 's':	 // 1 string to match.
        if (memcmp(Mnemonic.data()+3, "ubaddx", 6))
          break;
        Mnemonic = "shsax";	 // "shsubaddx"
        return;
      }
      break;
    case 'u':	 // 4 strings to match.
      switch (Mnemonic[1]) {
      default: break;
      case 'h':	 // 2 strings to match.
        switch (Mnemonic[2]) {
        default: break;
        case 'a':	 // 1 string to match.
          if (memcmp(Mnemonic.data()+3, "ddsubx", 6))
            break;
          Mnemonic = "uhasx";	 // "uhaddsubx"
          return;
        case 's':	 // 1 string to match.
          if (memcmp(Mnemonic.data()+3, "ubaddx", 6))
            break;
          Mnemonic = "uhsax";	 // "uhsubaddx"
          return;
        }
        break;
      case 'q':	 // 2 strings to match.
        switch (Mnemonic[2]) {
        default: break;
        case 'a':	 // 1 string to match.
          if (memcmp(Mnemonic.data()+3, "ddsubx", 6))
            break;
          Mnemonic = "uqasx";	 // "uqaddsubx"
          return;
        case 's':	 // 1 string to match.
          if (memcmp(Mnemonic.data()+3, "ubaddx", 6))
            break;
          Mnemonic = "uqsax";	 // "uqsubaddx"
          return;
        }
        break;
      }
      break;
    case 'v':	 // 2 strings to match.
      if (memcmp(Mnemonic.data()+1, "movq.f", 6))
        break;
      switch (Mnemonic[7]) {
      default: break;
      case '3':	 // 1 string to match.
        if (Mnemonic[8] != '2')
          break;
        if ((Features & Feature_HasNEON) == Feature_HasNEON)	 // "vmovq.f32"
          Mnemonic = "vmov.f32";
        return;
      case '6':	 // 1 string to match.
        if (Mnemonic[8] != '4')
          break;
        if ((Features & Feature_HasNEON) == Feature_HasNEON)	 // "vmovq.f64"
          Mnemonic = "vmov.f64";
        return;
      }
      break;
    }
    break;
  case 11:	 // 2 strings to match.
    if (memcmp(Mnemonic.data()+0, "vrecpeq.", 8))
      break;
    switch (Mnemonic[8]) {
    default: break;
    case 'f':	 // 1 string to match.
      if (memcmp(Mnemonic.data()+9, "32", 2))
        break;
      if ((Features & Feature_HasNEON) == Feature_HasNEON)	 // "vrecpeq.f32"
        Mnemonic = "vrecpe.f32";
      return;
    case 'u':	 // 1 string to match.
      if (memcmp(Mnemonic.data()+9, "32", 2))
        break;
      if ((Features & Feature_HasNEON) == Feature_HasNEON)	 // "vrecpeq.u32"
        Mnemonic = "vrecpe.u32";
      return;
    }
    break;
  }
}

namespace {
enum OperatorConversionKind {
  CVT_Done,
  CVT_Reg,
  CVT_Tied,
  CVT_addCCOutOperands,
  CVT_addCondCodeOperands,
  CVT_addRegShiftedRegOperands,
  CVT_addImmOperands,
  CVT_addRegShiftedImmOperands,
  CVT_addImm0_508s4Operands,
  CVT_regSP,
  CVT_addImm0_508s4NegOperands,
  CVT_addImm0_4095NegOperands,
  CVT_addT2SOImmNegOperands,
  CVT_addARMSOImmNegOperands,
  CVT_addImm0_1020s4Operands,
  CVT_addAdrLabelOperands,
  CVT_addARMSOImmNotOperands,
  CVT_addImmThumbSROperands,
  CVT_addBitfieldOperands,
  CVT_addCoprocNumOperands,
  CVT_addCoprocRegOperands,
  CVT_imm_0,
  CVT_addProcIFlagsOperands,
  CVT_imm_15,
  CVT_addMemBarrierOptOperands,
  CVT_imm_1,
  CVT_addITCondCodeOperands,
  CVT_addITMaskOperands,
  CVT_addAddrMode5Operands,
  CVT_addMemNoOffsetOperands,
  CVT_addCoprocOptionOperands,
  CVT_addPostIdxImm8s4Operands,
  CVT_addRegListOperands,
  CVT_addMemThumbRIs4Operands,
  CVT_addMemThumbRROperands,
  CVT_addMemThumbSPIOperands,
  CVT_addMemPCRelImm12Operands,
  CVT_addMemImm12OffsetOperands,
  CVT_addMemNegImm8OffsetOperands,
  CVT_addMemRegOffsetOperands,
  CVT_addMemUImm12OffsetOperands,
  CVT_addT2MemRegOffsetOperands,
  CVT_cvtLdWriteBackRegAddrModeImm12,
  CVT_cvtLdWriteBackRegT2AddrModeImm8,
  CVT_addAM2OffsetImmOperands,
  CVT_addPostIdxRegShiftedOperands,
  CVT_cvtLdWriteBackRegAddrMode2,
  CVT_addMemThumbRIs1Operands,
  CVT_addMemPosImm8OffsetOperands,
  CVT_addMemImm8s4OffsetOperands,
  CVT_addAddrMode3Operands,
  CVT_cvtT2LdrdPre,
  CVT_cvtLdrdPre,
  CVT_addAM3OffsetOperands,
  CVT_addMemImm0_1020s4OffsetOperands,
  CVT_addMemThumbRIs2Operands,
  CVT_cvtLdWriteBackRegAddrMode3,
  CVT_cvtLdExtTWriteBackReg,
  CVT_cvtLdExtTWriteBackImm,
  CVT_reg0,
  CVT_addT2SOImmNotOperands,
  CVT_regCPSR,
  CVT_imm_14,
  CVT_addMSRMaskOperands,
  CVT_cvtThumbMultiply,
  CVT_regR8,
  CVT_regR0,
  CVT_addPKHASRImmOperands,
  CVT_addImm1_32Operands,
  CVT_imm_4,
  CVT_addShifterImmOperands,
  CVT_addImm1_16Operands,
  CVT_cvtStWriteBackRegT2AddrModeImm8,
  CVT_cvtStWriteBackRegAddrModeImm12,
  CVT_cvtStWriteBackRegAddrMode2,
  CVT_addMemImm8OffsetOperands,
  CVT_cvtT2StrdPre,
  CVT_cvtStrdPre,
  CVT_cvtStWriteBackRegAddrMode3,
  CVT_cvtStExtTWriteBackImm,
  CVT_cvtStExtTWriteBackReg,
  CVT_addRotImmOperands,
  CVT_addMemTBBOperands,
  CVT_addMemTBHOperands,
  CVT_addNEONi16splatOperands,
  CVT_addNEONi32splatOperands,
  CVT_addFBits16Operands,
  CVT_addFBits32Operands,
  CVT_addVectorIndex16Operands,
  CVT_addVectorIndex32Operands,
  CVT_addVectorIndex8Operands,
  CVT_addVecListOperands,
  CVT_addAlignedMemoryOperands,
  CVT_addVecListIndexedOperands,
  CVT_cvtVLDwbFixed,
  CVT_cvtVLDwbRegister,
  CVT_addDPRRegListOperands,
  CVT_addSPRRegListOperands,
  CVT_addFPImmOperands,
  CVT_addNEONi32vmovOperands,
  CVT_addNEONi32vmovNegOperands,
  CVT_addNEONi64splatOperands,
  CVT_addNEONi8splatOperands,
  CVT_cvtVSTwbFixed,
  CVT_cvtVSTwbRegister,
  CVT_imm_2,
  CVT_imm_3,
  CVT_NUM_CONVERTERS
};

enum InstructionConversionKind {
  Convert__Reg1_2__CCOut1_0__Tie0__Reg1_3__CondCode2_1,
  Convert__Reg1_2__Reg1_2__RegShiftedReg3_3__CondCode2_1__CCOut1_0,
  Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_1__CCOut1_0,
  Convert__Reg1_2__Reg1_2__ARMSOImm1_3__CondCode2_1__CCOut1_0,
  Convert__Reg1_2__Reg1_2__RegShiftedImm2_3__CondCode2_1__CCOut1_0,
  Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_1__CCOut1_0,
  Convert__Reg1_2__Reg1_3__RegShiftedImm2_4__CondCode2_1__CCOut1_0,
  Convert__Reg1_2__Reg1_3__T2SOImm1_4__CondCode2_1__CCOut1_0,
  Convert__Reg1_2__Reg1_3__RegShiftedReg3_4__CondCode2_1__CCOut1_0,
  Convert__Reg1_2__Reg1_3__ARMSOImm1_4__CondCode2_1__CCOut1_0,
  Convert__Reg1_3__Reg1_4__Reg1_5__CondCode2_1__CCOut1_0,
  Convert__Reg1_3__Reg1_4__RegShiftedImm2_5__CondCode2_1__CCOut1_0,
  Convert__Reg1_1__Tie0__Reg1_2__CondCode2_0,
  Convert__Reg1_1__Tie0__Imm0_508s41_2__CondCode2_0,
  Convert__regSP__Tie0__Imm0_508s4Neg1_2__CondCode2_0,
  Convert__Reg1_1__Reg1_1__Imm0_40951_2__CondCode2_0,
  Convert__Reg1_1__Reg1_1__Imm0_4095Neg1_2__CondCode2_0,
  Convert__Reg1_2__CCOut1_0__Tie0__Imm0_2551_3__CondCode2_1,
  Convert__Reg1_2__Reg1_2__T2SOImm1_3__CondCode2_1__CCOut1_0,
  Convert__Reg1_2__Reg1_2__T2SOImmNeg1_3__CondCode2_1__CCOut1_0,
  Convert__Reg1_2__Reg1_2__ARMSOImmNeg1_3__CondCode2_1__CCOut1_0,
  Convert__Reg1_1__Reg1_2__Imm0_1020s41_3__CondCode2_0,
  Convert__Reg1_1__Imm0_40951_3__CondCode2_0,
  Convert__regSP__Tie0__Imm0_508s41_3__CondCode2_0,
  Convert__regSP__Tie0__Imm0_508s4Neg1_3__CondCode2_0,
  Convert__Reg1_1__Reg1_2__Imm0_40951_3__CondCode2_0,
  Convert__Reg1_1__Reg1_2__Imm0_4095Neg1_3__CondCode2_0,
  Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0,
  Convert__Reg1_3__Reg1_3__T2SOImmNeg1_4__CondCode2_1__CCOut1_0,
  Convert__Reg1_2__CCOut1_0__Reg1_3__Reg1_4__CondCode2_1,
  Convert__Reg1_2__CCOut1_0__Reg1_3__Imm0_71_4__CondCode2_1,
  Convert__Reg1_2__Reg1_3__T2SOImmNeg1_4__CondCode2_1__CCOut1_0,
  Convert__Reg1_2__Reg1_3__ARMSOImmNeg1_4__CondCode2_1__CCOut1_0,
  Convert__Reg1_3__Reg1_4__T2SOImm1_5__CondCode2_1__CCOut1_0,
  Convert__Reg1_3__Reg1_4__T2SOImmNeg1_5__CondCode2_1__CCOut1_0,
  Convert__Reg1_1__Imm1_2__CondCode2_0,
  Convert__Reg1_1__AdrLabel1_2__CondCode2_0,
  Convert__Reg1_2__Imm1_3__CondCode2_0,
  Convert__Reg1_2__Reg1_2__ARMSOImmNot1_3__CondCode2_1__CCOut1_0,
  Convert__Reg1_3__Reg1_3__Reg1_4__CondCode2_1__CCOut1_0,
  Convert__Reg1_3__Reg1_3__RegShiftedImm2_4__CondCode2_1__CCOut1_0,
  Convert__Reg1_3__Reg1_3__T2SOImm1_4__CondCode2_1__CCOut1_0,
  Convert__Reg1_2__Reg1_3__ARMSOImmNot1_4__CondCode2_1__CCOut1_0,
  Convert__Reg1_2__CCOut1_0__Reg1_2__ImmThumbSR1_3__CondCode2_1,
  Convert__Reg1_2__Reg1_2__ImmThumbSR1_3__CondCode2_1__CCOut1_0,
  Convert__Reg1_2__Reg1_2__Imm0_321_3__CondCode2_1__CCOut1_0,
  Convert__Reg1_3__Reg1_3__ImmThumbSR1_4__CondCode2_1__CCOut1_0,
  Convert__Reg1_2__CCOut1_0__Reg1_3__ImmThumbSR1_4__CondCode2_1,
  Convert__Reg1_2__Reg1_3__ImmThumbSR1_4__CondCode2_1__CCOut1_0,
  Convert__Reg1_2__Reg1_3__Imm0_321_4__CondCode2_1__CCOut1_0,
  Convert__Reg1_3__Reg1_4__ImmThumbSR1_5__CondCode2_1__CCOut1_0,
  Convert__Imm1_1__CondCode2_0,
  Convert__Imm1_2__CondCode2_0,
  Convert__Reg1_1__Tie0__Bitfield1_2__CondCode2_0,
  Convert__Reg1_1__Tie0__Reg1_2__Bitfield1_3__CondCode2_0,
  Convert__Imm0_2551_0,
  Convert__Imm0_655351_1__CondCode2_0,
  Convert__Imm1_0,
  Convert__CondCode2_0__Imm1_1,
  Convert__Reg1_0,
  Convert__Reg1_1__CondCode2_0,
  Convert__CondCode2_0__Reg1_1,
  Convert__CondCode2_0,
  Convert__Reg1_0__Imm1_1,
  Convert__CoprocNum1_0__Imm0_151_1__CoprocReg1_2__CoprocReg1_3__CoprocReg1_4__Imm0_71_5,
  Convert__CoprocNum1_1__Imm0_151_2__CoprocReg1_3__CoprocReg1_4__CoprocReg1_5__Imm0_71_6__CondCode2_0,
  Convert_NoOperands,
  Convert__Reg1_1__Reg1_2__CondCode2_0,
  Convert__Reg1_1__ARMSOImmNeg1_2__CondCode2_0,
  Convert__Reg1_1__T2SOImmNeg1_2__CondCode2_0,
  Convert__Reg1_1__RegShiftedImm2_2__CondCode2_0,
  Convert__Reg1_1__RegShiftedReg3_2__CondCode2_0,
  Convert__Reg1_1__T2SOImm1_2__CondCode2_0,
  Convert__Reg1_1__ARMSOImm1_2__CondCode2_0,
  Convert__Reg1_2__Reg1_3__CondCode2_0,
  Convert__Reg1_2__RegShiftedImm2_3__CondCode2_0,
  Convert__Reg1_2__T2SOImm1_3__CondCode2_0,
  Convert__Reg1_1__Imm0_2551_2__CondCode2_0,
  Convert__Imm0_311_0,
  Convert__Imm1_0__imm_0,
  Convert__Imm1_0__ProcIFlags1_1,
  Convert__Imm1_0__ProcIFlags1_2,
  Convert__Imm1_0__ProcIFlags1_1__Imm0_311_2,
  Convert__Imm1_0__ProcIFlags1_2__Imm1_3,
  Convert__Imm0_151_1__CondCode2_0,
  Convert__imm_15,
  Convert__MemBarrierOpt1_0,
  Convert__Reg1_1__Tie0__Reg1_2__imm_1__CondCode2_0,
  Convert__Reg1_1__Tie0__Reg1_2__imm_0__CondCode2_0,
  Convert__Imm0_2551_1__CondCode2_0,
  Convert__Imm0_2551_2__CondCode2_0,
  Convert__ITCondCode1_1__ITMask1_0,
  Convert__CoprocNum1_1__CoprocReg1_2__AddrMode52_3__CondCode2_0,
  Convert__CoprocNum1_1__CoprocReg1_2__MemNoOffset1_3__CoprocOption1_4__CondCode2_0,
  Convert__CoprocNum1_1__CoprocReg1_2__MemNoOffset1_3__PostIdxImm8s41_4__CondCode2_0,
  Convert__CoprocNum1_0__CoprocReg1_1__AddrMode52_2,
  Convert__CoprocNum1_0__CoprocReg1_1__MemNoOffset1_2__CoprocOption1_3,
  Convert__CoprocNum1_0__CoprocReg1_1__MemNoOffset1_2__PostIdxImm8s41_3,
  Convert__Reg1_1__CondCode2_0__RegList1_2,
  Convert__Reg1_2__CondCode2_0__RegList1_3,
  Convert__Reg1_1__CondCode2_0__RegList1_3,
  Convert__Reg1_1__Tie0__CondCode2_0__RegList1_3,
  Convert__Reg1_2__Tie0__CondCode2_0__RegList1_4,
  Convert__Reg1_1__MemThumbRIs42_2__CondCode2_0,
  Convert__Reg1_1__MemThumbRR2_2__CondCode2_0,
  Convert__Reg1_1__MemThumbSPI2_2__CondCode2_0,
  Convert__Reg1_1__MemPCRelImm121_2__CondCode2_0,
  Convert__Reg1_1__MemImm12Offset2_2__CondCode2_0,
  Convert__Reg1_1__MemNegImm8Offset2_2__CondCode2_0,
  Convert__Reg1_1__MemRegOffset3_2__CondCode2_0,
  Convert__Reg1_1__MemUImm12Offset2_2__CondCode2_0,
  Convert__Reg1_1__T2MemRegOffset3_2__CondCode2_0,
  Convert__Reg1_2__MemPCRelImm121_3__CondCode2_0,
  Convert__Reg1_2__MemUImm12Offset2_3__CondCode2_0,
  Convert__Reg1_2__T2MemRegOffset3_3__CondCode2_0,
  ConvertCustom_cvtLdWriteBackRegAddrModeImm12,
  ConvertCustom_cvtLdWriteBackRegT2AddrModeImm8,
  Convert__Reg1_1__MemNoOffset1_2__Tie1__AM2OffsetImm2_3__CondCode2_0,
  Convert__Reg1_1__MemNoOffset1_2__Tie1__Imm1_3__CondCode2_0,
  Convert__Reg1_1__MemNoOffset1_2__Tie1__PostIdxRegShifted2_3__CondCode2_0,
  ConvertCustom_cvtLdWriteBackRegAddrMode2,
  Convert__Reg1_1__MemThumbRIs12_2__CondCode2_0,
  Convert__Reg1_1__MemPosImm8Offset2_2__CondCode2_0,
  Convert__Reg1_1__Reg1_2__MemImm8s4Offset2_3__CondCode2_0,
  Convert__Reg1_1__Reg1_2__AddrMode33_3__CondCode2_0,
  ConvertCustom_cvtT2LdrdPre,
  Convert__Reg1_1__Reg1_2__MemNoOffset1_3__Tie2__Imm1_4__CondCode2_0,
  ConvertCustom_cvtLdrdPre,
  Convert__Reg1_1__Reg1_2__MemNoOffset1_3__Tie2__AM3Offset2_4__CondCode2_0,
  Convert__Reg1_1__MemImm0_1020s4Offset2_2__CondCode2_0,
  Convert__Reg1_1__MemNoOffset1_2__CondCode2_0,
  Convert__Reg1_1__Reg1_2__MemNoOffset1_3__CondCode2_0,
  Convert__Reg1_1__MemThumbRIs22_2__CondCode2_0,
  Convert__Reg1_1__AddrMode33_2__CondCode2_0,
  ConvertCustom_cvtLdWriteBackRegAddrMode3,
  Convert__Reg1_1__MemNoOffset1_2__Tie1__AM3Offset2_3__CondCode2_0,
  ConvertCustom_cvtLdExtTWriteBackReg,
  ConvertCustom_cvtLdExtTWriteBackImm,
  Convert__Reg1_2__CCOut1_0__Reg1_2__Imm0_311_3__CondCode2_1,
  Convert__Reg1_2__Reg1_2__Imm0_311_3__CondCode2_1__CCOut1_0,
  Convert__Reg1_3__Reg1_3__Imm0_311_4__CondCode2_1__CCOut1_0,
  Convert__Reg1_2__CCOut1_0__Reg1_3__Imm0_311_4__CondCode2_1,
  Convert__Reg1_2__Reg1_3__Imm0_311_4__CondCode2_1__CCOut1_0,
  Convert__Reg1_3__Reg1_4__Imm0_311_5__CondCode2_1__CCOut1_0,
  Convert__CoprocNum1_0__Imm0_71_1__Reg1_2__CoprocReg1_3__CoprocReg1_4__imm_0,
  Convert__CoprocNum1_1__Imm0_71_2__Reg1_3__CoprocReg1_4__CoprocReg1_5__imm_0__CondCode2_0,
  Convert__CoprocNum1_0__Imm0_71_1__Reg1_2__CoprocReg1_3__CoprocReg1_4__Imm0_71_5,
  Convert__CoprocNum1_1__Imm0_71_2__Reg1_3__CoprocReg1_4__CoprocReg1_5__Imm0_71_6__CondCode2_0,
  Convert__CoprocNum1_0__Imm0_151_1__Reg1_2__Reg1_3__CoprocReg1_4,
  Convert__CoprocNum1_1__Imm0_151_2__Reg1_3__Reg1_4__CoprocReg1_5__CondCode2_0,
  Convert__Reg1_1__Reg1_2__Reg1_3__Reg1_4__CondCode2_0,
  Convert__Reg1_2__Reg1_3__Reg1_4__Reg1_5__CondCode2_1__CCOut1_0,
  Convert__Reg1_1__T2SOImm1_2__CondCode2_0__reg0,
  Convert__Reg1_1__T2SOImmNot1_2__CondCode2_0__reg0,
  Convert__Reg1_1__Imm0_65535Expr1_2__CondCode2_0,
  Convert__Reg1_2__CCOut1_0__Imm0_2551_3__CondCode2_1,
  Convert__Reg1_2__Reg1_3__CondCode2_1__CCOut1_0,
  Convert__Reg1_2__ARMSOImmNot1_3__CondCode2_1__CCOut1_0,
  Convert__Reg1_2__RegShiftedReg3_3__CondCode2_1__CCOut1_0,
  Convert__Reg1_2__ARMSOImm1_3__CondCode2_1__CCOut1_0,
  Convert__Reg1_2__RegShiftedImm2_3__CondCode2_1__CCOut1_0,
  Convert__Reg1_2__T2SOImm1_3__CondCode2_0__reg0,
  Convert__Reg1_2__Reg1_3__CondCode2_0__reg0,
  Convert__Reg1_3__T2SOImm1_4__CondCode2_1__CCOut1_0,
  Convert__Reg1_3__Reg1_4__CondCode2_1__CCOut1_0,
  Convert__Reg1_0__Reg1_1,
  Convert__Reg1_0__regCPSR__Imm0_2551_1__imm_14__imm_0,
  Convert__Reg1_1__T2SOImm1_2__CondCode2_0__regCPSR,
  Convert__Reg1_1__Reg1_2__CondCode2_0__regCPSR,
  Convert__Reg1_2__T2SOImm1_3__CondCode2_0__regCPSR,
  Convert__Reg1_2__Reg1_3__CondCode2_0__regCPSR,
  Convert__Reg1_1__Tie0__Imm0_65535Expr1_2__CondCode2_0,
  Convert__Reg1_2__CoprocNum1_0__Imm0_71_1__CoprocReg1_3__CoprocReg1_4__imm_0,
  Convert__Reg1_3__CoprocNum1_1__Imm0_71_2__CoprocReg1_4__CoprocReg1_5__imm_0__CondCode2_0,
  Convert__Reg1_2__CoprocNum1_0__Imm0_71_1__CoprocReg1_3__CoprocReg1_4__Imm0_71_5,
  Convert__Reg1_3__CoprocNum1_1__Imm0_71_2__CoprocReg1_4__CoprocReg1_5__Imm0_71_6__CondCode2_0,
  Convert__Reg1_1__MSRMask1_2__CondCode2_0,
  Convert__MSRMask1_1__Reg1_2__CondCode2_0,
  Convert__MSRMask1_1__ARMSOImm1_2__CondCode2_0,
  Convert__Reg1_1__Reg1_2__Reg1_1__CondCode2_0,
  ConvertCustom_cvtThumbMultiply,
  Convert__Reg1_2__CCOut1_0__Reg1_3__CondCode2_1,
  Convert__Reg1_2__T2SOImm1_3__CondCode2_1__CCOut1_0,
  Convert__Reg1_3__RegShiftedImm2_4__CondCode2_1__CCOut1_0,
  Convert__Reg1_2__Reg1_3__imm_0__CondCode2_1__CCOut1_0,
  Convert__regR8__regR8__imm_14__imm_0,
  Convert__imm_0__CondCode2_0,
  Convert__regR0__regR0__CondCode2_0__reg0,
  Convert__Reg1_1__Reg1_2__Reg1_3__imm_0__CondCode2_0,
  Convert__Reg1_1__Reg1_2__Reg1_3__PKHLSLImm1_4__CondCode2_0,
  Convert__Reg1_1__Reg1_2__Reg1_3__PKHASRImm1_4__CondCode2_0,
  Convert__MemImm12Offset2_0,
  Convert__MemRegOffset3_0,
  Convert__MemNegImm8Offset2_1__CondCode2_0,
  Convert__MemUImm12Offset2_1__CondCode2_0,
  Convert__T2MemRegOffset3_1__CondCode2_0,
  Convert__CondCode2_0__RegList1_1,
  Convert__regSP__Tie0__CondCode2_0__RegList1_1,
  Convert__regSP__Tie0__CondCode2_0__RegList1_2,
  Convert__Reg1_1__Reg1_2__Imm0_311_3__Imm1_321_4__CondCode2_0,
  Convert__SetEndImm1_0,
  Convert__imm_4__CondCode2_0,
  Convert__Reg1_1__Reg1_2__Reg1_3__Reg1_4__Tie0__Tie1__CondCode2_0,
  Convert__Reg1_2__Reg1_3__Reg1_4__Reg1_5__Tie0__Tie1__CondCode2_1__CCOut1_0,
  Convert__Reg1_1__Reg1_2__Reg1_4__Reg1_3__CondCode2_0,
  Convert__Imm0_311_1,
  Convert__Imm0_311_2,
  Convert__Imm0_311_2__CondCode2_0,
  Convert__Imm0_311_3__CondCode2_0,
  Convert__Reg1_1__Imm1_321_2__Reg1_3__imm_0__CondCode2_0,
  Convert__Reg1_1__Imm1_321_2__Reg1_3__ShifterImm1_4__CondCode2_0,
  Convert__Reg1_1__Imm1_161_2__Reg1_3__CondCode2_0,
  ConvertCustom_cvtStWriteBackRegT2AddrModeImm8,
  Convert__MemNoOffset1_2__Reg1_1__Tie0__Imm1_3__CondCode2_0,
  ConvertCustom_cvtStWriteBackRegAddrModeImm12,
  Convert__MemNoOffset1_2__Reg1_1__Tie0__AM2OffsetImm2_3__CondCode2_0,
  Convert__MemNoOffset1_2__Reg1_1__Tie0__PostIdxRegShifted2_3__CondCode2_0,
  ConvertCustom_cvtStWriteBackRegAddrMode2,
  Convert__Reg1_1__MemImm8Offset2_2__CondCode2_0,
  ConvertCustom_cvtT2StrdPre,
  Convert__MemNoOffset1_3__Reg1_1__Reg1_2__Tie0__Imm1_4__CondCode2_0,
  ConvertCustom_cvtStrdPre,
  Convert__MemNoOffset1_3__Reg1_1__Reg1_2__Tie0__AM3Offset2_4__CondCode2_0,
  Convert__Reg1_1__Reg1_2__MemImm0_1020s4Offset2_3__CondCode2_0,
  Convert__Reg1_1__Reg1_2__Reg1_3__MemNoOffset1_4__CondCode2_0,
  ConvertCustom_cvtStWriteBackRegAddrMode3,
  Convert__MemNoOffset1_2__Reg1_1__Tie0__AM3Offset2_3__CondCode2_0,
  ConvertCustom_cvtStExtTWriteBackImm,
  ConvertCustom_cvtStExtTWriteBackReg,
  Convert__Imm24bit1_1__CondCode2_0,
  Convert__Reg1_1__Reg1_2__Reg1_3__RotImm1_4__CondCode2_0,
  Convert__Reg1_1__Reg1_2__imm_0__CondCode2_0,
  Convert__Reg1_2__Reg1_3__imm_0__CondCode2_0,
  Convert__Reg1_1__Reg1_2__RotImm1_3__CondCode2_0,
  Convert__Reg1_2__Reg1_3__RotImm1_4__CondCode2_0,
  Convert__MemTBB2_1__CondCode2_0,
  Convert__MemTBH2_1__CondCode2_0,
  Convert__Reg1_1__Imm0_311_2__Reg1_3__imm_0__CondCode2_0,
  Convert__Reg1_1__Imm0_311_2__Reg1_3__ShifterImm1_4__CondCode2_0,
  Convert__Reg1_1__Imm0_151_2__Reg1_3__CondCode2_0,
  Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0,
  Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0,
  Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0,
  Convert__Reg1_1__Reg1_1__Reg1_2__CondCode2_0,
  Convert__Reg1_2__NEONi16splat1_3__Tie0__CondCode2_0,
  Convert__Reg1_2__NEONi32splat1_3__Tie0__CondCode2_0,
  Convert__Reg1_1__Tie0__Reg1_2__Reg1_3__CondCode2_0,
  Convert__Reg1_2__Reg1_4__Reg1_3__CondCode2_0,
  Convert__Reg1_2__CondCode2_0,
  Convert__Reg1_3__Reg1_4__CondCode2_0,
  Convert__Reg1_3__Tie0__FBits161_5__CondCode2_0,
  Convert__Reg1_3__Tie0__FBits321_5__CondCode2_0,
  Convert__Reg1_3__Reg1_4__Imm1_5__CondCode2_0,
  Convert__Reg1_2__Reg1_3__VectorIndex161_4__CondCode2_0,
  Convert__Reg1_2__Reg1_3__VectorIndex321_4__CondCode2_0,
  Convert__Reg1_2__Reg1_3__VectorIndex81_4__CondCode2_0,
  Convert__Reg1_2__Reg1_2__Reg1_3__Imm0_31_4__CondCode2_0,
  Convert__Reg1_2__Reg1_2__Reg1_3__Imm0_151_4__CondCode2_0,
  Convert__Reg1_2__Reg1_2__Reg1_3__Imm0_11_4__CondCode2_0,
  Convert__Reg1_2__Reg1_2__Reg1_3__Imm0_71_4__CondCode2_0,
  Convert__Reg1_2__Reg1_3__Reg1_4__Imm0_31_5__CondCode2_0,
  Convert__Reg1_2__Reg1_3__Reg1_4__Imm0_151_5__CondCode2_0,
  Convert__Reg1_2__Reg1_3__Reg1_4__Imm0_11_5__CondCode2_0,
  Convert__Reg1_2__Reg1_3__Reg1_4__Imm0_71_5__CondCode2_0,
  Convert__VecListDPairAllLanes1_2__AlignedMemory2_3__CondCode2_0,
  Convert__VecListDPair1_2__AlignedMemory2_3__CondCode2_0,
  Convert__VecListFourD1_2__AlignedMemory2_3__CondCode2_0,
  Convert__VecListOneDAllLanes1_2__AlignedMemory2_3__CondCode2_0,
  Convert__VecListOneD1_2__AlignedMemory2_3__CondCode2_0,
  Convert__VecListOneDHWordIndexed2_2__AlignedMemory2_3__CondCode2_0,
  Convert__VecListThreeD1_2__AlignedMemory2_3__CondCode2_0,
  Convert__VecListOneDWordIndexed2_2__AlignedMemory2_3__CondCode2_0,
  Convert__VecListOneDByteIndexed2_2__AlignedMemory2_3__CondCode2_0,
  ConvertCustom_cvtVLDwbFixed,
  ConvertCustom_cvtVLDwbRegister,
  Convert__VecListOneDHWordIndexed2_2__AlignedMemory2_3__Reg1_4__CondCode2_0,
  Convert__VecListOneDWordIndexed2_2__AlignedMemory2_3__Reg1_4__CondCode2_0,
  Convert__VecListOneDByteIndexed2_2__AlignedMemory2_3__Reg1_4__CondCode2_0,
  Convert__Reg1_3__AlignedMemory2_8__Tie0__Imm1_5__CondCode2_0,
  Convert__Reg1_3__AlignedMemory1_8__Tie1__Imm1_9__Tie0__Imm1_5__CondCode2_0,
  Convert__Reg1_3__Reg1_8__Imm1_9__Tie0__Imm1_5__CondCode2_0,
  Convert__VecListDPairSpacedAllLanes1_2__AlignedMemory2_3__CondCode2_0,
  Convert__VecListDPairSpaced1_2__AlignedMemory2_3__CondCode2_0,
  Convert__VecListTwoDHWordIndexed2_2__AlignedMemory2_3__CondCode2_0,
  Convert__VecListTwoQHWordIndexed2_2__AlignedMemory2_3__CondCode2_0,
  Convert__VecListTwoDWordIndexed2_2__AlignedMemory2_3__CondCode2_0,
  Convert__VecListTwoQWordIndexed2_2__AlignedMemory2_3__CondCode2_0,
  Convert__VecListTwoDByteIndexed2_2__AlignedMemory2_3__CondCode2_0,
  Convert__VecListTwoDHWordIndexed2_2__AlignedMemory2_3__Reg1_4__CondCode2_0,
  Convert__VecListTwoQHWordIndexed2_2__AlignedMemory2_3__Reg1_4__CondCode2_0,
  Convert__VecListTwoDWordIndexed2_2__AlignedMemory2_3__Reg1_4__CondCode2_0,
  Convert__VecListTwoQWordIndexed2_2__AlignedMemory2_3__Reg1_4__CondCode2_0,
  Convert__VecListTwoDByteIndexed2_2__AlignedMemory2_3__Reg1_4__CondCode2_0,
  Convert__VecListThreeDAllLanes1_2__AlignedMemory2_3__CondCode2_0,
  Convert__VecListThreeDHWordIndexed2_2__AlignedMemory2_3__CondCode2_0,
  Convert__VecListThreeQAllLanes1_2__AlignedMemory2_3__CondCode2_0,
  Convert__VecListThreeQ1_2__AlignedMemory2_3__CondCode2_0,
  Convert__VecListThreeQHWordIndexed2_2__AlignedMemory2_3__CondCode2_0,
  Convert__VecListThreeDWordIndexed2_2__AlignedMemory2_3__CondCode2_0,
  Convert__VecListThreeQWordIndexed2_2__AlignedMemory2_3__CondCode2_0,
  Convert__VecListThreeDByteIndexed2_2__AlignedMemory2_3__CondCode2_0,
  Convert__VecListThreeDAllLanes1_2__AlignedMemory2_3__Reg1_4__CondCode2_0,
  Convert__VecListThreeD1_2__AlignedMemory2_3__Reg1_4__CondCode2_0,
  Convert__VecListThreeDHWordIndexed2_2__AlignedMemory2_3__Reg1_4__CondCode2_0,
  Convert__VecListThreeQAllLanes1_2__AlignedMemory2_3__Reg1_4__CondCode2_0,
  Convert__VecListThreeQ1_2__AlignedMemory2_3__Reg1_4__CondCode2_0,
  Convert__VecListThreeQHWordIndexed2_2__AlignedMemory2_3__Reg1_4__CondCode2_0,
  Convert__VecListThreeDWordIndexed2_2__AlignedMemory2_3__Reg1_4__CondCode2_0,
  Convert__VecListThreeQWordIndexed2_2__AlignedMemory2_3__Reg1_4__CondCode2_0,
  Convert__VecListThreeDByteIndexed2_2__AlignedMemory2_3__Reg1_4__CondCode2_0,
  Convert__Reg1_3__Reg1_4__Reg1_5__AlignedMemory2_7__CondCode2_0,
  Convert__Reg1_3__Reg1_4__Reg1_5__AlignedMemory1_7__Tie3__Imm1_8__CondCode2_0,
  Convert__Reg1_3__Reg1_6__Reg1_9__AlignedMemory2_13__CondCode2_0,
  Convert__Reg1_3__Reg1_6__Reg1_9__AlignedMemory1_13__Tie3__Imm1_14__CondCode2_0,
  Convert__VecListFourDAllLanes1_2__AlignedMemory2_3__CondCode2_0,
  Convert__VecListFourDHWordIndexed2_2__AlignedMemory2_3__CondCode2_0,
  Convert__VecListFourQAllLanes1_2__AlignedMemory2_3__CondCode2_0,
  Convert__VecListFourQ1_2__AlignedMemory2_3__CondCode2_0,
  Convert__VecListFourQHWordIndexed2_2__AlignedMemory2_3__CondCode2_0,
  Convert__VecListFourDWordIndexed2_2__AlignedMemory2_3__CondCode2_0,
  Convert__VecListFourQWordIndexed2_2__AlignedMemory2_3__CondCode2_0,
  Convert__VecListFourDByteIndexed2_2__AlignedMemory2_3__CondCode2_0,
  Convert__VecListFourDAllLanes1_2__AlignedMemory2_3__Reg1_4__CondCode2_0,
  Convert__VecListFourD1_2__AlignedMemory2_3__Reg1_4__CondCode2_0,
  Convert__VecListFourDHWordIndexed2_2__AlignedMemory2_3__Reg1_4__CondCode2_0,
  Convert__VecListFourQAllLanes1_2__AlignedMemory2_3__Reg1_4__CondCode2_0,
  Convert__VecListFourQ1_2__AlignedMemory2_3__Reg1_4__CondCode2_0,
  Convert__VecListFourQHWordIndexed2_2__AlignedMemory2_3__Reg1_4__CondCode2_0,
  Convert__VecListFourDWordIndexed2_2__AlignedMemory2_3__Reg1_4__CondCode2_0,
  Convert__VecListFourQWordIndexed2_2__AlignedMemory2_3__Reg1_4__CondCode2_0,
  Convert__VecListFourDByteIndexed2_2__AlignedMemory2_3__Reg1_4__CondCode2_0,
  Convert__Reg1_3__Reg1_4__Reg1_5__Reg1_6__AlignedMemory2_8__CondCode2_0,
  Convert__Reg1_3__Reg1_4__Reg1_5__Reg1_6__AlignedMemory1_8__Tie4__Imm1_9__CondCode2_0,
  Convert__Reg1_3__Reg1_6__Reg1_9__Reg1_12__AlignedMemory2_16__CondCode2_0,
  Convert__Reg1_3__Reg1_6__Reg1_9__Reg1_12__AlignedMemory1_16__Tie4__Imm1_17__CondCode2_0,
  Convert__Reg1_1__Tie0__CondCode2_0__DPRRegList1_3,
  Convert__Reg1_1__Tie0__CondCode2_0__SPRRegList1_3,
  Convert__Reg1_1__CondCode2_0__DPRRegList1_2,
  Convert__Reg1_1__CondCode2_0__SPRRegList1_2,
  Convert__Reg1_1__AddrMode52_2__CondCode2_0,
  Convert__Reg1_2__AddrMode52_3__CondCode2_0,
  Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__VectorIndex321_5__CondCode2_0,
  Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__VectorIndex161_5__CondCode2_0,
  Convert__Reg1_1__Reg1_2__Reg1_2__CondCode2_0,
  Convert__Reg1_2__Reg1_3__Reg1_3__CondCode2_0,
  Convert__Reg1_2__FPImm1_3__CondCode2_0,
  Convert__Reg1_2__NEONi32vmov1_3__CondCode2_0,
  Convert__Reg1_2__NEONi16splat1_3__CondCode2_0,
  Convert__Reg1_2__NEONi32vmovNeg1_3__CondCode2_0,
  Convert__Reg1_2__NEONi64splat1_3__CondCode2_0,
  Convert__Reg1_2__NEONi8splat1_3__CondCode2_0,
  Convert__Reg1_2__Tie0__Reg1_4__VectorIndex161_3__CondCode2_0,
  Convert__Reg1_2__Tie0__Reg1_4__VectorIndex321_3__CondCode2_0,
  Convert__Reg1_2__Tie0__Reg1_4__VectorIndex81_3__CondCode2_0,
  Convert__Reg1_2__Reg1_2__Reg1_3__VectorIndex321_4__CondCode2_0,
  Convert__Reg1_2__Reg1_2__Reg1_3__VectorIndex161_4__CondCode2_0,
  Convert__Reg1_2__Reg1_3__Reg1_4__VectorIndex321_5__CondCode2_0,
  Convert__Reg1_2__Reg1_3__Reg1_4__VectorIndex161_5__CondCode2_0,
  Convert__Reg1_2__Tie0__Reg1_3__CondCode2_0,
  Convert__regSP__Tie0__CondCode2_0__DPRRegList1_1,
  Convert__regSP__Tie0__CondCode2_0__SPRRegList1_1,
  Convert__regSP__Tie0__CondCode2_0__DPRRegList1_2,
  Convert__regSP__Tie0__CondCode2_0__SPRRegList1_2,
  Convert__Reg1_2__Reg1_3__ShrImm81_4__CondCode2_0,
  Convert__Reg1_2__Reg1_3__ShrImm161_4__CondCode2_0,
  Convert__Reg1_2__Reg1_3__ShrImm321_4__CondCode2_0,
  Convert__Reg1_2__Reg1_2__Imm1_3__CondCode2_0,
  Convert__Reg1_2__Reg1_3__Imm1_4__CondCode2_0,
  Convert__Reg1_2__Reg1_2__ShrImm161_3__CondCode2_0,
  Convert__Reg1_2__Reg1_2__ShrImm321_3__CondCode2_0,
  Convert__Reg1_2__Reg1_2__ShrImm641_3__CondCode2_0,
  Convert__Reg1_2__Reg1_2__ShrImm81_3__CondCode2_0,
  Convert__Reg1_2__Reg1_3__ShrImm641_4__CondCode2_0,
  Convert__Reg1_2__Tie0__Reg1_2__ShrImm161_3__CondCode2_0,
  Convert__Reg1_2__Tie0__Reg1_2__ShrImm321_3__CondCode2_0,
  Convert__Reg1_2__Tie0__Reg1_2__ShrImm641_3__CondCode2_0,
  Convert__Reg1_2__Tie0__Reg1_2__ShrImm81_3__CondCode2_0,
  Convert__Reg1_2__Tie0__Reg1_3__ShrImm161_4__CondCode2_0,
  Convert__Reg1_2__Tie0__Reg1_3__ShrImm321_4__CondCode2_0,
  Convert__Reg1_2__Tie0__Reg1_3__ShrImm641_4__CondCode2_0,
  Convert__Reg1_2__Tie0__Reg1_3__ShrImm81_4__CondCode2_0,
  Convert__Reg1_2__Reg1_3__Imm1_151_4__CondCode2_0,
  Convert__Reg1_2__Reg1_3__Imm161_4__CondCode2_0,
  Convert__Reg1_2__Reg1_3__Imm321_4__CondCode2_0,
  Convert__Reg1_2__Reg1_3__Imm1_71_4__CondCode2_0,
  Convert__Reg1_2__Reg1_3__Imm81_4__CondCode2_0,
  Convert__Reg1_2__Reg1_3__Imm1_311_4__CondCode2_0,
  Convert__Reg1_2__Tie0__Reg1_2__Imm1_3__CondCode2_0,
  Convert__Reg1_2__Tie0__Reg1_3__Imm1_4__CondCode2_0,
  Convert__AlignedMemory2_3__VecListDPair1_2__CondCode2_0,
  Convert__AlignedMemory2_3__VecListFourD1_2__CondCode2_0,
  Convert__AlignedMemory2_3__VecListOneD1_2__CondCode2_0,
  Convert__AlignedMemory2_3__VecListThreeD1_2__CondCode2_0,
  ConvertCustom_cvtVSTwbFixed,
  ConvertCustom_cvtVSTwbRegister,
  Convert__AlignedMemory2_8__Reg1_3__Imm1_5__CondCode2_0,
  Convert__AlignedMemory1_8__Tie0__Imm1_9__Reg1_3__Imm1_5__CondCode2_0,
  Convert__Reg1_8__Imm1_9__Reg1_3__Imm1_5__CondCode2_0,
  Convert__Reg1_8__Tie0__Imm1_10__Reg1_3__Imm1_5__CondCode2_0,
  Convert__AlignedMemory2_3__VecListDPairSpaced1_2__CondCode2_0,
  Convert__AlignedMemory2_7__Reg1_3__Reg1_4__Reg1_5__CondCode2_0,
  Convert__AlignedMemory1_7__Tie0__Imm1_8__Reg1_3__Reg1_4__Reg1_5__CondCode2_0,
  Convert__AlignedMemory2_8__Reg1_3__Reg1_4__Reg1_5__Reg1_6__CondCode2_0,
  Convert__AlignedMemory1_8__Tie0__Imm1_9__Reg1_3__Reg1_4__Reg1_5__Reg1_6__CondCode2_0,
  Convert__Reg1_1__Reg1_2__Tie0__Tie1__CondCode2_0,
  Convert__Reg1_2__Reg1_3__Tie0__Tie1__CondCode2_0,
  Convert__Reg1_2__VecListDPair1_3__Reg1_4__CondCode2_0,
  Convert__Reg1_2__VecListFourD1_3__Reg1_4__CondCode2_0,
  Convert__Reg1_2__VecListOneD1_3__Reg1_4__CondCode2_0,
  Convert__Reg1_2__VecListThreeD1_3__Reg1_4__CondCode2_0,
  Convert__Reg1_2__Tie0__VecListDPair1_3__Reg1_4__CondCode2_0,
  Convert__Reg1_2__Tie0__VecListFourD1_3__Reg1_4__CondCode2_0,
  Convert__Reg1_2__Tie0__VecListOneD1_3__Reg1_4__CondCode2_0,
  Convert__Reg1_2__Tie0__VecListThreeD1_3__Reg1_4__CondCode2_0,
  Convert__imm_2__CondCode2_0,
  Convert__imm_3__CondCode2_0,
  Convert__imm_1__CondCode2_0,
  CVT_NUM_SIGNATURES
};

} // end anonymous namespace

static const uint8_t ConversionTable[CVT_NUM_SIGNATURES][17] = {
  // Convert__Reg1_2__CCOut1_0__Tie0__Reg1_3__CondCode2_1
  { CVT_Reg, 3, CVT_addCCOutOperands, 1, CVT_Tied, 0, CVT_Reg, 4, CVT_addCondCodeOperands, 2, CVT_Done },
  // Convert__Reg1_2__Reg1_2__RegShiftedReg3_3__CondCode2_1__CCOut1_0
  { CVT_Reg, 3, CVT_Reg, 3, CVT_addRegShiftedRegOperands, 4, CVT_addCondCodeOperands, 2, CVT_addCCOutOperands, 1, CVT_Done },
  // Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_1__CCOut1_0
  { CVT_Reg, 3, CVT_Reg, 3, CVT_Reg, 4, CVT_addCondCodeOperands, 2, CVT_addCCOutOperands, 1, CVT_Done },
  // Convert__Reg1_2__Reg1_2__ARMSOImm1_3__CondCode2_1__CCOut1_0
  { CVT_Reg, 3, CVT_Reg, 3, CVT_addImmOperands, 4, CVT_addCondCodeOperands, 2, CVT_addCCOutOperands, 1, CVT_Done },
  // Convert__Reg1_2__Reg1_2__RegShiftedImm2_3__CondCode2_1__CCOut1_0
  { CVT_Reg, 3, CVT_Reg, 3, CVT_addRegShiftedImmOperands, 4, CVT_addCondCodeOperands, 2, CVT_addCCOutOperands, 1, CVT_Done },
  // Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_1__CCOut1_0
  { CVT_Reg, 3, CVT_Reg, 4, CVT_Reg, 5, CVT_addCondCodeOperands, 2, CVT_addCCOutOperands, 1, CVT_Done },
  // Convert__Reg1_2__Reg1_3__RegShiftedImm2_4__CondCode2_1__CCOut1_0
  { CVT_Reg, 3, CVT_Reg, 4, CVT_addRegShiftedImmOperands, 5, CVT_addCondCodeOperands, 2, CVT_addCCOutOperands, 1, CVT_Done },
  // Convert__Reg1_2__Reg1_3__T2SOImm1_4__CondCode2_1__CCOut1_0
  { CVT_Reg, 3, CVT_Reg, 4, CVT_addImmOperands, 5, CVT_addCondCodeOperands, 2, CVT_addCCOutOperands, 1, CVT_Done },
  // Convert__Reg1_2__Reg1_3__RegShiftedReg3_4__CondCode2_1__CCOut1_0
  { CVT_Reg, 3, CVT_Reg, 4, CVT_addRegShiftedRegOperands, 5, CVT_addCondCodeOperands, 2, CVT_addCCOutOperands, 1, CVT_Done },
  // Convert__Reg1_2__Reg1_3__ARMSOImm1_4__CondCode2_1__CCOut1_0
  { CVT_Reg, 3, CVT_Reg, 4, CVT_addImmOperands, 5, CVT_addCondCodeOperands, 2, CVT_addCCOutOperands, 1, CVT_Done },
  // Convert__Reg1_3__Reg1_4__Reg1_5__CondCode2_1__CCOut1_0
  { CVT_Reg, 4, CVT_Reg, 5, CVT_Reg, 6, CVT_addCondCodeOperands, 2, CVT_addCCOutOperands, 1, CVT_Done },
  // Convert__Reg1_3__Reg1_4__RegShiftedImm2_5__CondCode2_1__CCOut1_0
  { CVT_Reg, 4, CVT_Reg, 5, CVT_addRegShiftedImmOperands, 6, CVT_addCondCodeOperands, 2, CVT_addCCOutOperands, 1, CVT_Done },
  // Convert__Reg1_1__Tie0__Reg1_2__CondCode2_0
  { CVT_Reg, 2, CVT_Tied, 0, CVT_Reg, 3, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_1__Tie0__Imm0_508s41_2__CondCode2_0
  { CVT_Reg, 2, CVT_Tied, 0, CVT_addImm0_508s4Operands, 3, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__regSP__Tie0__Imm0_508s4Neg1_2__CondCode2_0
  { CVT_regSP, 0, CVT_Tied, 0, CVT_addImm0_508s4NegOperands, 3, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_1__Reg1_1__Imm0_40951_2__CondCode2_0
  { CVT_Reg, 2, CVT_Reg, 2, CVT_addImmOperands, 3, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_1__Reg1_1__Imm0_4095Neg1_2__CondCode2_0
  { CVT_Reg, 2, CVT_Reg, 2, CVT_addImm0_4095NegOperands, 3, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_2__CCOut1_0__Tie0__Imm0_2551_3__CondCode2_1
  { CVT_Reg, 3, CVT_addCCOutOperands, 1, CVT_Tied, 0, CVT_addImmOperands, 4, CVT_addCondCodeOperands, 2, CVT_Done },
  // Convert__Reg1_2__Reg1_2__T2SOImm1_3__CondCode2_1__CCOut1_0
  { CVT_Reg, 3, CVT_Reg, 3, CVT_addImmOperands, 4, CVT_addCondCodeOperands, 2, CVT_addCCOutOperands, 1, CVT_Done },
  // Convert__Reg1_2__Reg1_2__T2SOImmNeg1_3__CondCode2_1__CCOut1_0
  { CVT_Reg, 3, CVT_Reg, 3, CVT_addT2SOImmNegOperands, 4, CVT_addCondCodeOperands, 2, CVT_addCCOutOperands, 1, CVT_Done },
  // Convert__Reg1_2__Reg1_2__ARMSOImmNeg1_3__CondCode2_1__CCOut1_0
  { CVT_Reg, 3, CVT_Reg, 3, CVT_addARMSOImmNegOperands, 4, CVT_addCondCodeOperands, 2, CVT_addCCOutOperands, 1, CVT_Done },
  // Convert__Reg1_1__Reg1_2__Imm0_1020s41_3__CondCode2_0
  { CVT_Reg, 2, CVT_Reg, 3, CVT_addImm0_1020s4Operands, 4, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_1__Imm0_40951_3__CondCode2_0
  { CVT_Reg, 2, CVT_addImmOperands, 4, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__regSP__Tie0__Imm0_508s41_3__CondCode2_0
  { CVT_regSP, 0, CVT_Tied, 0, CVT_addImm0_508s4Operands, 4, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__regSP__Tie0__Imm0_508s4Neg1_3__CondCode2_0
  { CVT_regSP, 0, CVT_Tied, 0, CVT_addImm0_508s4NegOperands, 4, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_1__Reg1_2__Imm0_40951_3__CondCode2_0
  { CVT_Reg, 2, CVT_Reg, 3, CVT_addImmOperands, 4, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_1__Reg1_2__Imm0_4095Neg1_3__CondCode2_0
  { CVT_Reg, 2, CVT_Reg, 3, CVT_addImm0_4095NegOperands, 4, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0
  { CVT_Reg, 2, CVT_Reg, 3, CVT_Reg, 4, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_3__Reg1_3__T2SOImmNeg1_4__CondCode2_1__CCOut1_0
  { CVT_Reg, 4, CVT_Reg, 4, CVT_addT2SOImmNegOperands, 5, CVT_addCondCodeOperands, 2, CVT_addCCOutOperands, 1, CVT_Done },
  // Convert__Reg1_2__CCOut1_0__Reg1_3__Reg1_4__CondCode2_1
  { CVT_Reg, 3, CVT_addCCOutOperands, 1, CVT_Reg, 4, CVT_Reg, 5, CVT_addCondCodeOperands, 2, CVT_Done },
  // Convert__Reg1_2__CCOut1_0__Reg1_3__Imm0_71_4__CondCode2_1
  { CVT_Reg, 3, CVT_addCCOutOperands, 1, CVT_Reg, 4, CVT_addImmOperands, 5, CVT_addCondCodeOperands, 2, CVT_Done },
  // Convert__Reg1_2__Reg1_3__T2SOImmNeg1_4__CondCode2_1__CCOut1_0
  { CVT_Reg, 3, CVT_Reg, 4, CVT_addT2SOImmNegOperands, 5, CVT_addCondCodeOperands, 2, CVT_addCCOutOperands, 1, CVT_Done },
  // Convert__Reg1_2__Reg1_3__ARMSOImmNeg1_4__CondCode2_1__CCOut1_0
  { CVT_Reg, 3, CVT_Reg, 4, CVT_addARMSOImmNegOperands, 5, CVT_addCondCodeOperands, 2, CVT_addCCOutOperands, 1, CVT_Done },
  // Convert__Reg1_3__Reg1_4__T2SOImm1_5__CondCode2_1__CCOut1_0
  { CVT_Reg, 4, CVT_Reg, 5, CVT_addImmOperands, 6, CVT_addCondCodeOperands, 2, CVT_addCCOutOperands, 1, CVT_Done },
  // Convert__Reg1_3__Reg1_4__T2SOImmNeg1_5__CondCode2_1__CCOut1_0
  { CVT_Reg, 4, CVT_Reg, 5, CVT_addT2SOImmNegOperands, 6, CVT_addCondCodeOperands, 2, CVT_addCCOutOperands, 1, CVT_Done },
  // Convert__Reg1_1__Imm1_2__CondCode2_0
  { CVT_Reg, 2, CVT_addImmOperands, 3, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_1__AdrLabel1_2__CondCode2_0
  { CVT_Reg, 2, CVT_addAdrLabelOperands, 3, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_2__Imm1_3__CondCode2_0
  { CVT_Reg, 3, CVT_addImmOperands, 4, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_2__Reg1_2__ARMSOImmNot1_3__CondCode2_1__CCOut1_0
  { CVT_Reg, 3, CVT_Reg, 3, CVT_addARMSOImmNotOperands, 4, CVT_addCondCodeOperands, 2, CVT_addCCOutOperands, 1, CVT_Done },
  // Convert__Reg1_3__Reg1_3__Reg1_4__CondCode2_1__CCOut1_0
  { CVT_Reg, 4, CVT_Reg, 4, CVT_Reg, 5, CVT_addCondCodeOperands, 2, CVT_addCCOutOperands, 1, CVT_Done },
  // Convert__Reg1_3__Reg1_3__RegShiftedImm2_4__CondCode2_1__CCOut1_0
  { CVT_Reg, 4, CVT_Reg, 4, CVT_addRegShiftedImmOperands, 5, CVT_addCondCodeOperands, 2, CVT_addCCOutOperands, 1, CVT_Done },
  // Convert__Reg1_3__Reg1_3__T2SOImm1_4__CondCode2_1__CCOut1_0
  { CVT_Reg, 4, CVT_Reg, 4, CVT_addImmOperands, 5, CVT_addCondCodeOperands, 2, CVT_addCCOutOperands, 1, CVT_Done },
  // Convert__Reg1_2__Reg1_3__ARMSOImmNot1_4__CondCode2_1__CCOut1_0
  { CVT_Reg, 3, CVT_Reg, 4, CVT_addARMSOImmNotOperands, 5, CVT_addCondCodeOperands, 2, CVT_addCCOutOperands, 1, CVT_Done },
  // Convert__Reg1_2__CCOut1_0__Reg1_2__ImmThumbSR1_3__CondCode2_1
  { CVT_Reg, 3, CVT_addCCOutOperands, 1, CVT_Reg, 3, CVT_addImmThumbSROperands, 4, CVT_addCondCodeOperands, 2, CVT_Done },
  // Convert__Reg1_2__Reg1_2__ImmThumbSR1_3__CondCode2_1__CCOut1_0
  { CVT_Reg, 3, CVT_Reg, 3, CVT_addImmThumbSROperands, 4, CVT_addCondCodeOperands, 2, CVT_addCCOutOperands, 1, CVT_Done },
  // Convert__Reg1_2__Reg1_2__Imm0_321_3__CondCode2_1__CCOut1_0
  { CVT_Reg, 3, CVT_Reg, 3, CVT_addImmOperands, 4, CVT_addCondCodeOperands, 2, CVT_addCCOutOperands, 1, CVT_Done },
  // Convert__Reg1_3__Reg1_3__ImmThumbSR1_4__CondCode2_1__CCOut1_0
  { CVT_Reg, 4, CVT_Reg, 4, CVT_addImmThumbSROperands, 5, CVT_addCondCodeOperands, 2, CVT_addCCOutOperands, 1, CVT_Done },
  // Convert__Reg1_2__CCOut1_0__Reg1_3__ImmThumbSR1_4__CondCode2_1
  { CVT_Reg, 3, CVT_addCCOutOperands, 1, CVT_Reg, 4, CVT_addImmThumbSROperands, 5, CVT_addCondCodeOperands, 2, CVT_Done },
  // Convert__Reg1_2__Reg1_3__ImmThumbSR1_4__CondCode2_1__CCOut1_0
  { CVT_Reg, 3, CVT_Reg, 4, CVT_addImmThumbSROperands, 5, CVT_addCondCodeOperands, 2, CVT_addCCOutOperands, 1, CVT_Done },
  // Convert__Reg1_2__Reg1_3__Imm0_321_4__CondCode2_1__CCOut1_0
  { CVT_Reg, 3, CVT_Reg, 4, CVT_addImmOperands, 5, CVT_addCondCodeOperands, 2, CVT_addCCOutOperands, 1, CVT_Done },
  // Convert__Reg1_3__Reg1_4__ImmThumbSR1_5__CondCode2_1__CCOut1_0
  { CVT_Reg, 4, CVT_Reg, 5, CVT_addImmThumbSROperands, 6, CVT_addCondCodeOperands, 2, CVT_addCCOutOperands, 1, CVT_Done },
  // Convert__Imm1_1__CondCode2_0
  { CVT_addImmOperands, 2, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Imm1_2__CondCode2_0
  { CVT_addImmOperands, 3, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_1__Tie0__Bitfield1_2__CondCode2_0
  { CVT_Reg, 2, CVT_Tied, 0, CVT_addBitfieldOperands, 3, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_1__Tie0__Reg1_2__Bitfield1_3__CondCode2_0
  { CVT_Reg, 2, CVT_Tied, 0, CVT_Reg, 3, CVT_addBitfieldOperands, 4, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Imm0_2551_0
  { CVT_addImmOperands, 1, CVT_Done },
  // Convert__Imm0_655351_1__CondCode2_0
  { CVT_addImmOperands, 2, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Imm1_0
  { CVT_addImmOperands, 1, CVT_Done },
  // Convert__CondCode2_0__Imm1_1
  { CVT_addCondCodeOperands, 1, CVT_addImmOperands, 2, CVT_Done },
  // Convert__Reg1_0
  { CVT_Reg, 1, CVT_Done },
  // Convert__Reg1_1__CondCode2_0
  { CVT_Reg, 2, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__CondCode2_0__Reg1_1
  { CVT_addCondCodeOperands, 1, CVT_Reg, 2, CVT_Done },
  // Convert__CondCode2_0
  { CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_0__Imm1_1
  { CVT_Reg, 1, CVT_addImmOperands, 2, CVT_Done },
  // Convert__CoprocNum1_0__Imm0_151_1__CoprocReg1_2__CoprocReg1_3__CoprocReg1_4__Imm0_71_5
  { CVT_addCoprocNumOperands, 1, CVT_addImmOperands, 2, CVT_addCoprocRegOperands, 3, CVT_addCoprocRegOperands, 4, CVT_addCoprocRegOperands, 5, CVT_addImmOperands, 6, CVT_Done },
  // Convert__CoprocNum1_1__Imm0_151_2__CoprocReg1_3__CoprocReg1_4__CoprocReg1_5__Imm0_71_6__CondCode2_0
  { CVT_addCoprocNumOperands, 2, CVT_addImmOperands, 3, CVT_addCoprocRegOperands, 4, CVT_addCoprocRegOperands, 5, CVT_addCoprocRegOperands, 6, CVT_addImmOperands, 7, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert_NoOperands
  { CVT_Done },
  // Convert__Reg1_1__Reg1_2__CondCode2_0
  { CVT_Reg, 2, CVT_Reg, 3, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_1__ARMSOImmNeg1_2__CondCode2_0
  { CVT_Reg, 2, CVT_addARMSOImmNegOperands, 3, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_1__T2SOImmNeg1_2__CondCode2_0
  { CVT_Reg, 2, CVT_addT2SOImmNegOperands, 3, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_1__RegShiftedImm2_2__CondCode2_0
  { CVT_Reg, 2, CVT_addRegShiftedImmOperands, 3, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_1__RegShiftedReg3_2__CondCode2_0
  { CVT_Reg, 2, CVT_addRegShiftedRegOperands, 3, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_1__T2SOImm1_2__CondCode2_0
  { CVT_Reg, 2, CVT_addImmOperands, 3, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_1__ARMSOImm1_2__CondCode2_0
  { CVT_Reg, 2, CVT_addImmOperands, 3, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_2__Reg1_3__CondCode2_0
  { CVT_Reg, 3, CVT_Reg, 4, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_2__RegShiftedImm2_3__CondCode2_0
  { CVT_Reg, 3, CVT_addRegShiftedImmOperands, 4, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_2__T2SOImm1_3__CondCode2_0
  { CVT_Reg, 3, CVT_addImmOperands, 4, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_1__Imm0_2551_2__CondCode2_0
  { CVT_Reg, 2, CVT_addImmOperands, 3, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Imm0_311_0
  { CVT_addImmOperands, 1, CVT_Done },
  // Convert__Imm1_0__imm_0
  { CVT_addImmOperands, 1, CVT_imm_0, 0, CVT_Done },
  // Convert__Imm1_0__ProcIFlags1_1
  { CVT_addImmOperands, 1, CVT_addProcIFlagsOperands, 2, CVT_Done },
  // Convert__Imm1_0__ProcIFlags1_2
  { CVT_addImmOperands, 1, CVT_addProcIFlagsOperands, 3, CVT_Done },
  // Convert__Imm1_0__ProcIFlags1_1__Imm0_311_2
  { CVT_addImmOperands, 1, CVT_addProcIFlagsOperands, 2, CVT_addImmOperands, 3, CVT_Done },
  // Convert__Imm1_0__ProcIFlags1_2__Imm1_3
  { CVT_addImmOperands, 1, CVT_addProcIFlagsOperands, 3, CVT_addImmOperands, 4, CVT_Done },
  // Convert__Imm0_151_1__CondCode2_0
  { CVT_addImmOperands, 2, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__imm_15
  { CVT_imm_15, 0, CVT_Done },
  // Convert__MemBarrierOpt1_0
  { CVT_addMemBarrierOptOperands, 1, CVT_Done },
  // Convert__Reg1_1__Tie0__Reg1_2__imm_1__CondCode2_0
  { CVT_Reg, 2, CVT_Tied, 0, CVT_Reg, 3, CVT_imm_1, 0, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_1__Tie0__Reg1_2__imm_0__CondCode2_0
  { CVT_Reg, 2, CVT_Tied, 0, CVT_Reg, 3, CVT_imm_0, 0, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Imm0_2551_1__CondCode2_0
  { CVT_addImmOperands, 2, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Imm0_2551_2__CondCode2_0
  { CVT_addImmOperands, 3, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__ITCondCode1_1__ITMask1_0
  { CVT_addITCondCodeOperands, 2, CVT_addITMaskOperands, 1, CVT_Done },
  // Convert__CoprocNum1_1__CoprocReg1_2__AddrMode52_3__CondCode2_0
  { CVT_addCoprocNumOperands, 2, CVT_addCoprocRegOperands, 3, CVT_addAddrMode5Operands, 4, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__CoprocNum1_1__CoprocReg1_2__MemNoOffset1_3__CoprocOption1_4__CondCode2_0
  { CVT_addCoprocNumOperands, 2, CVT_addCoprocRegOperands, 3, CVT_addMemNoOffsetOperands, 4, CVT_addCoprocOptionOperands, 5, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__CoprocNum1_1__CoprocReg1_2__MemNoOffset1_3__PostIdxImm8s41_4__CondCode2_0
  { CVT_addCoprocNumOperands, 2, CVT_addCoprocRegOperands, 3, CVT_addMemNoOffsetOperands, 4, CVT_addPostIdxImm8s4Operands, 5, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__CoprocNum1_0__CoprocReg1_1__AddrMode52_2
  { CVT_addCoprocNumOperands, 1, CVT_addCoprocRegOperands, 2, CVT_addAddrMode5Operands, 3, CVT_Done },
  // Convert__CoprocNum1_0__CoprocReg1_1__MemNoOffset1_2__CoprocOption1_3
  { CVT_addCoprocNumOperands, 1, CVT_addCoprocRegOperands, 2, CVT_addMemNoOffsetOperands, 3, CVT_addCoprocOptionOperands, 4, CVT_Done },
  // Convert__CoprocNum1_0__CoprocReg1_1__MemNoOffset1_2__PostIdxImm8s41_3
  { CVT_addCoprocNumOperands, 1, CVT_addCoprocRegOperands, 2, CVT_addMemNoOffsetOperands, 3, CVT_addPostIdxImm8s4Operands, 4, CVT_Done },
  // Convert__Reg1_1__CondCode2_0__RegList1_2
  { CVT_Reg, 2, CVT_addCondCodeOperands, 1, CVT_addRegListOperands, 3, CVT_Done },
  // Convert__Reg1_2__CondCode2_0__RegList1_3
  { CVT_Reg, 3, CVT_addCondCodeOperands, 1, CVT_addRegListOperands, 4, CVT_Done },
  // Convert__Reg1_1__CondCode2_0__RegList1_3
  { CVT_Reg, 2, CVT_addCondCodeOperands, 1, CVT_addRegListOperands, 4, CVT_Done },
  // Convert__Reg1_1__Tie0__CondCode2_0__RegList1_3
  { CVT_Reg, 2, CVT_Tied, 0, CVT_addCondCodeOperands, 1, CVT_addRegListOperands, 4, CVT_Done },
  // Convert__Reg1_2__Tie0__CondCode2_0__RegList1_4
  { CVT_Reg, 3, CVT_Tied, 0, CVT_addCondCodeOperands, 1, CVT_addRegListOperands, 5, CVT_Done },
  // Convert__Reg1_1__MemThumbRIs42_2__CondCode2_0
  { CVT_Reg, 2, CVT_addMemThumbRIs4Operands, 3, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_1__MemThumbRR2_2__CondCode2_0
  { CVT_Reg, 2, CVT_addMemThumbRROperands, 3, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_1__MemThumbSPI2_2__CondCode2_0
  { CVT_Reg, 2, CVT_addMemThumbSPIOperands, 3, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_1__MemPCRelImm121_2__CondCode2_0
  { CVT_Reg, 2, CVT_addMemPCRelImm12Operands, 3, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_1__MemImm12Offset2_2__CondCode2_0
  { CVT_Reg, 2, CVT_addMemImm12OffsetOperands, 3, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_1__MemNegImm8Offset2_2__CondCode2_0
  { CVT_Reg, 2, CVT_addMemNegImm8OffsetOperands, 3, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_1__MemRegOffset3_2__CondCode2_0
  { CVT_Reg, 2, CVT_addMemRegOffsetOperands, 3, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_1__MemUImm12Offset2_2__CondCode2_0
  { CVT_Reg, 2, CVT_addMemUImm12OffsetOperands, 3, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_1__T2MemRegOffset3_2__CondCode2_0
  { CVT_Reg, 2, CVT_addT2MemRegOffsetOperands, 3, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_2__MemPCRelImm121_3__CondCode2_0
  { CVT_Reg, 3, CVT_addMemPCRelImm12Operands, 4, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_2__MemUImm12Offset2_3__CondCode2_0
  { CVT_Reg, 3, CVT_addMemUImm12OffsetOperands, 4, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_2__T2MemRegOffset3_3__CondCode2_0
  { CVT_Reg, 3, CVT_addT2MemRegOffsetOperands, 4, CVT_addCondCodeOperands, 1, CVT_Done },
  // ConvertCustom_cvtLdWriteBackRegAddrModeImm12
  { CVT_cvtLdWriteBackRegAddrModeImm12, 0, CVT_Done },
  // ConvertCustom_cvtLdWriteBackRegT2AddrModeImm8
  { CVT_cvtLdWriteBackRegT2AddrModeImm8, 0, CVT_Done },
  // Convert__Reg1_1__MemNoOffset1_2__Tie1__AM2OffsetImm2_3__CondCode2_0
  { CVT_Reg, 2, CVT_addMemNoOffsetOperands, 3, CVT_Tied, 1, CVT_addAM2OffsetImmOperands, 4, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_1__MemNoOffset1_2__Tie1__Imm1_3__CondCode2_0
  { CVT_Reg, 2, CVT_addMemNoOffsetOperands, 3, CVT_Tied, 1, CVT_addImmOperands, 4, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_1__MemNoOffset1_2__Tie1__PostIdxRegShifted2_3__CondCode2_0
  { CVT_Reg, 2, CVT_addMemNoOffsetOperands, 3, CVT_Tied, 1, CVT_addPostIdxRegShiftedOperands, 4, CVT_addCondCodeOperands, 1, CVT_Done },
  // ConvertCustom_cvtLdWriteBackRegAddrMode2
  { CVT_cvtLdWriteBackRegAddrMode2, 0, CVT_Done },
  // Convert__Reg1_1__MemThumbRIs12_2__CondCode2_0
  { CVT_Reg, 2, CVT_addMemThumbRIs1Operands, 3, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_1__MemPosImm8Offset2_2__CondCode2_0
  { CVT_Reg, 2, CVT_addMemPosImm8OffsetOperands, 3, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_1__Reg1_2__MemImm8s4Offset2_3__CondCode2_0
  { CVT_Reg, 2, CVT_Reg, 3, CVT_addMemImm8s4OffsetOperands, 4, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_1__Reg1_2__AddrMode33_3__CondCode2_0
  { CVT_Reg, 2, CVT_Reg, 3, CVT_addAddrMode3Operands, 4, CVT_addCondCodeOperands, 1, CVT_Done },
  // ConvertCustom_cvtT2LdrdPre
  { CVT_cvtT2LdrdPre, 0, CVT_Done },
  // Convert__Reg1_1__Reg1_2__MemNoOffset1_3__Tie2__Imm1_4__CondCode2_0
  { CVT_Reg, 2, CVT_Reg, 3, CVT_addMemNoOffsetOperands, 4, CVT_Tied, 2, CVT_addImmOperands, 5, CVT_addCondCodeOperands, 1, CVT_Done },
  // ConvertCustom_cvtLdrdPre
  { CVT_cvtLdrdPre, 0, CVT_Done },
  // Convert__Reg1_1__Reg1_2__MemNoOffset1_3__Tie2__AM3Offset2_4__CondCode2_0
  { CVT_Reg, 2, CVT_Reg, 3, CVT_addMemNoOffsetOperands, 4, CVT_Tied, 2, CVT_addAM3OffsetOperands, 5, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_1__MemImm0_1020s4Offset2_2__CondCode2_0
  { CVT_Reg, 2, CVT_addMemImm0_1020s4OffsetOperands, 3, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_1__MemNoOffset1_2__CondCode2_0
  { CVT_Reg, 2, CVT_addMemNoOffsetOperands, 3, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_1__Reg1_2__MemNoOffset1_3__CondCode2_0
  { CVT_Reg, 2, CVT_Reg, 3, CVT_addMemNoOffsetOperands, 4, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_1__MemThumbRIs22_2__CondCode2_0
  { CVT_Reg, 2, CVT_addMemThumbRIs2Operands, 3, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_1__AddrMode33_2__CondCode2_0
  { CVT_Reg, 2, CVT_addAddrMode3Operands, 3, CVT_addCondCodeOperands, 1, CVT_Done },
  // ConvertCustom_cvtLdWriteBackRegAddrMode3
  { CVT_cvtLdWriteBackRegAddrMode3, 0, CVT_Done },
  // Convert__Reg1_1__MemNoOffset1_2__Tie1__AM3Offset2_3__CondCode2_0
  { CVT_Reg, 2, CVT_addMemNoOffsetOperands, 3, CVT_Tied, 1, CVT_addAM3OffsetOperands, 4, CVT_addCondCodeOperands, 1, CVT_Done },
  // ConvertCustom_cvtLdExtTWriteBackReg
  { CVT_cvtLdExtTWriteBackReg, 0, CVT_Done },
  // ConvertCustom_cvtLdExtTWriteBackImm
  { CVT_cvtLdExtTWriteBackImm, 0, CVT_Done },
  // Convert__Reg1_2__CCOut1_0__Reg1_2__Imm0_311_3__CondCode2_1
  { CVT_Reg, 3, CVT_addCCOutOperands, 1, CVT_Reg, 3, CVT_addImmOperands, 4, CVT_addCondCodeOperands, 2, CVT_Done },
  // Convert__Reg1_2__Reg1_2__Imm0_311_3__CondCode2_1__CCOut1_0
  { CVT_Reg, 3, CVT_Reg, 3, CVT_addImmOperands, 4, CVT_addCondCodeOperands, 2, CVT_addCCOutOperands, 1, CVT_Done },
  // Convert__Reg1_3__Reg1_3__Imm0_311_4__CondCode2_1__CCOut1_0
  { CVT_Reg, 4, CVT_Reg, 4, CVT_addImmOperands, 5, CVT_addCondCodeOperands, 2, CVT_addCCOutOperands, 1, CVT_Done },
  // Convert__Reg1_2__CCOut1_0__Reg1_3__Imm0_311_4__CondCode2_1
  { CVT_Reg, 3, CVT_addCCOutOperands, 1, CVT_Reg, 4, CVT_addImmOperands, 5, CVT_addCondCodeOperands, 2, CVT_Done },
  // Convert__Reg1_2__Reg1_3__Imm0_311_4__CondCode2_1__CCOut1_0
  { CVT_Reg, 3, CVT_Reg, 4, CVT_addImmOperands, 5, CVT_addCondCodeOperands, 2, CVT_addCCOutOperands, 1, CVT_Done },
  // Convert__Reg1_3__Reg1_4__Imm0_311_5__CondCode2_1__CCOut1_0
  { CVT_Reg, 4, CVT_Reg, 5, CVT_addImmOperands, 6, CVT_addCondCodeOperands, 2, CVT_addCCOutOperands, 1, CVT_Done },
  // Convert__CoprocNum1_0__Imm0_71_1__Reg1_2__CoprocReg1_3__CoprocReg1_4__imm_0
  { CVT_addCoprocNumOperands, 1, CVT_addImmOperands, 2, CVT_Reg, 3, CVT_addCoprocRegOperands, 4, CVT_addCoprocRegOperands, 5, CVT_imm_0, 0, CVT_Done },
  // Convert__CoprocNum1_1__Imm0_71_2__Reg1_3__CoprocReg1_4__CoprocReg1_5__imm_0__CondCode2_0
  { CVT_addCoprocNumOperands, 2, CVT_addImmOperands, 3, CVT_Reg, 4, CVT_addCoprocRegOperands, 5, CVT_addCoprocRegOperands, 6, CVT_imm_0, 0, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__CoprocNum1_0__Imm0_71_1__Reg1_2__CoprocReg1_3__CoprocReg1_4__Imm0_71_5
  { CVT_addCoprocNumOperands, 1, CVT_addImmOperands, 2, CVT_Reg, 3, CVT_addCoprocRegOperands, 4, CVT_addCoprocRegOperands, 5, CVT_addImmOperands, 6, CVT_Done },
  // Convert__CoprocNum1_1__Imm0_71_2__Reg1_3__CoprocReg1_4__CoprocReg1_5__Imm0_71_6__CondCode2_0
  { CVT_addCoprocNumOperands, 2, CVT_addImmOperands, 3, CVT_Reg, 4, CVT_addCoprocRegOperands, 5, CVT_addCoprocRegOperands, 6, CVT_addImmOperands, 7, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__CoprocNum1_0__Imm0_151_1__Reg1_2__Reg1_3__CoprocReg1_4
  { CVT_addCoprocNumOperands, 1, CVT_addImmOperands, 2, CVT_Reg, 3, CVT_Reg, 4, CVT_addCoprocRegOperands, 5, CVT_Done },
  // Convert__CoprocNum1_1__Imm0_151_2__Reg1_3__Reg1_4__CoprocReg1_5__CondCode2_0
  { CVT_addCoprocNumOperands, 2, CVT_addImmOperands, 3, CVT_Reg, 4, CVT_Reg, 5, CVT_addCoprocRegOperands, 6, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_1__Reg1_2__Reg1_3__Reg1_4__CondCode2_0
  { CVT_Reg, 2, CVT_Reg, 3, CVT_Reg, 4, CVT_Reg, 5, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_2__Reg1_3__Reg1_4__Reg1_5__CondCode2_1__CCOut1_0
  { CVT_Reg, 3, CVT_Reg, 4, CVT_Reg, 5, CVT_Reg, 6, CVT_addCondCodeOperands, 2, CVT_addCCOutOperands, 1, CVT_Done },
  // Convert__Reg1_1__T2SOImm1_2__CondCode2_0__reg0
  { CVT_Reg, 2, CVT_addImmOperands, 3, CVT_addCondCodeOperands, 1, CVT_reg0, 0, CVT_Done },
  // Convert__Reg1_1__T2SOImmNot1_2__CondCode2_0__reg0
  { CVT_Reg, 2, CVT_addT2SOImmNotOperands, 3, CVT_addCondCodeOperands, 1, CVT_reg0, 0, CVT_Done },
  // Convert__Reg1_1__Imm0_65535Expr1_2__CondCode2_0
  { CVT_Reg, 2, CVT_addImmOperands, 3, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_2__CCOut1_0__Imm0_2551_3__CondCode2_1
  { CVT_Reg, 3, CVT_addCCOutOperands, 1, CVT_addImmOperands, 4, CVT_addCondCodeOperands, 2, CVT_Done },
  // Convert__Reg1_2__Reg1_3__CondCode2_1__CCOut1_0
  { CVT_Reg, 3, CVT_Reg, 4, CVT_addCondCodeOperands, 2, CVT_addCCOutOperands, 1, CVT_Done },
  // Convert__Reg1_2__ARMSOImmNot1_3__CondCode2_1__CCOut1_0
  { CVT_Reg, 3, CVT_addARMSOImmNotOperands, 4, CVT_addCondCodeOperands, 2, CVT_addCCOutOperands, 1, CVT_Done },
  // Convert__Reg1_2__RegShiftedReg3_3__CondCode2_1__CCOut1_0
  { CVT_Reg, 3, CVT_addRegShiftedRegOperands, 4, CVT_addCondCodeOperands, 2, CVT_addCCOutOperands, 1, CVT_Done },
  // Convert__Reg1_2__ARMSOImm1_3__CondCode2_1__CCOut1_0
  { CVT_Reg, 3, CVT_addImmOperands, 4, CVT_addCondCodeOperands, 2, CVT_addCCOutOperands, 1, CVT_Done },
  // Convert__Reg1_2__RegShiftedImm2_3__CondCode2_1__CCOut1_0
  { CVT_Reg, 3, CVT_addRegShiftedImmOperands, 4, CVT_addCondCodeOperands, 2, CVT_addCCOutOperands, 1, CVT_Done },
  // Convert__Reg1_2__T2SOImm1_3__CondCode2_0__reg0
  { CVT_Reg, 3, CVT_addImmOperands, 4, CVT_addCondCodeOperands, 1, CVT_reg0, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_3__CondCode2_0__reg0
  { CVT_Reg, 3, CVT_Reg, 4, CVT_addCondCodeOperands, 1, CVT_reg0, 0, CVT_Done },
  // Convert__Reg1_3__T2SOImm1_4__CondCode2_1__CCOut1_0
  { CVT_Reg, 4, CVT_addImmOperands, 5, CVT_addCondCodeOperands, 2, CVT_addCCOutOperands, 1, CVT_Done },
  // Convert__Reg1_3__Reg1_4__CondCode2_1__CCOut1_0
  { CVT_Reg, 4, CVT_Reg, 5, CVT_addCondCodeOperands, 2, CVT_addCCOutOperands, 1, CVT_Done },
  // Convert__Reg1_0__Reg1_1
  { CVT_Reg, 1, CVT_Reg, 2, CVT_Done },
  // Convert__Reg1_0__regCPSR__Imm0_2551_1__imm_14__imm_0
  { CVT_Reg, 1, CVT_regCPSR, 0, CVT_addImmOperands, 2, CVT_imm_14, 0, CVT_imm_0, 0, CVT_Done },
  // Convert__Reg1_1__T2SOImm1_2__CondCode2_0__regCPSR
  { CVT_Reg, 2, CVT_addImmOperands, 3, CVT_addCondCodeOperands, 1, CVT_regCPSR, 0, CVT_Done },
  // Convert__Reg1_1__Reg1_2__CondCode2_0__regCPSR
  { CVT_Reg, 2, CVT_Reg, 3, CVT_addCondCodeOperands, 1, CVT_regCPSR, 0, CVT_Done },
  // Convert__Reg1_2__T2SOImm1_3__CondCode2_0__regCPSR
  { CVT_Reg, 3, CVT_addImmOperands, 4, CVT_addCondCodeOperands, 1, CVT_regCPSR, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_3__CondCode2_0__regCPSR
  { CVT_Reg, 3, CVT_Reg, 4, CVT_addCondCodeOperands, 1, CVT_regCPSR, 0, CVT_Done },
  // Convert__Reg1_1__Tie0__Imm0_65535Expr1_2__CondCode2_0
  { CVT_Reg, 2, CVT_Tied, 0, CVT_addImmOperands, 3, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_2__CoprocNum1_0__Imm0_71_1__CoprocReg1_3__CoprocReg1_4__imm_0
  { CVT_Reg, 3, CVT_addCoprocNumOperands, 1, CVT_addImmOperands, 2, CVT_addCoprocRegOperands, 4, CVT_addCoprocRegOperands, 5, CVT_imm_0, 0, CVT_Done },
  // Convert__Reg1_3__CoprocNum1_1__Imm0_71_2__CoprocReg1_4__CoprocReg1_5__imm_0__CondCode2_0
  { CVT_Reg, 4, CVT_addCoprocNumOperands, 2, CVT_addImmOperands, 3, CVT_addCoprocRegOperands, 5, CVT_addCoprocRegOperands, 6, CVT_imm_0, 0, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_2__CoprocNum1_0__Imm0_71_1__CoprocReg1_3__CoprocReg1_4__Imm0_71_5
  { CVT_Reg, 3, CVT_addCoprocNumOperands, 1, CVT_addImmOperands, 2, CVT_addCoprocRegOperands, 4, CVT_addCoprocRegOperands, 5, CVT_addImmOperands, 6, CVT_Done },
  // Convert__Reg1_3__CoprocNum1_1__Imm0_71_2__CoprocReg1_4__CoprocReg1_5__Imm0_71_6__CondCode2_0
  { CVT_Reg, 4, CVT_addCoprocNumOperands, 2, CVT_addImmOperands, 3, CVT_addCoprocRegOperands, 5, CVT_addCoprocRegOperands, 6, CVT_addImmOperands, 7, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_1__MSRMask1_2__CondCode2_0
  { CVT_Reg, 2, CVT_addMSRMaskOperands, 3, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__MSRMask1_1__Reg1_2__CondCode2_0
  { CVT_addMSRMaskOperands, 2, CVT_Reg, 3, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__MSRMask1_1__ARMSOImm1_2__CondCode2_0
  { CVT_addMSRMaskOperands, 2, CVT_addImmOperands, 3, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_1__Reg1_2__Reg1_1__CondCode2_0
  { CVT_Reg, 2, CVT_Reg, 3, CVT_Reg, 2, CVT_addCondCodeOperands, 1, CVT_Done },
  // ConvertCustom_cvtThumbMultiply
  { CVT_cvtThumbMultiply, 0, CVT_Done },
  // Convert__Reg1_2__CCOut1_0__Reg1_3__CondCode2_1
  { CVT_Reg, 3, CVT_addCCOutOperands, 1, CVT_Reg, 4, CVT_addCondCodeOperands, 2, CVT_Done },
  // Convert__Reg1_2__T2SOImm1_3__CondCode2_1__CCOut1_0
  { CVT_Reg, 3, CVT_addImmOperands, 4, CVT_addCondCodeOperands, 2, CVT_addCCOutOperands, 1, CVT_Done },
  // Convert__Reg1_3__RegShiftedImm2_4__CondCode2_1__CCOut1_0
  { CVT_Reg, 4, CVT_addRegShiftedImmOperands, 5, CVT_addCondCodeOperands, 2, CVT_addCCOutOperands, 1, CVT_Done },
  // Convert__Reg1_2__Reg1_3__imm_0__CondCode2_1__CCOut1_0
  { CVT_Reg, 3, CVT_Reg, 4, CVT_imm_0, 0, CVT_addCondCodeOperands, 2, CVT_addCCOutOperands, 1, CVT_Done },
  // Convert__regR8__regR8__imm_14__imm_0
  { CVT_regR8, 0, CVT_regR8, 0, CVT_imm_14, 0, CVT_imm_0, 0, CVT_Done },
  // Convert__imm_0__CondCode2_0
  { CVT_imm_0, 0, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__regR0__regR0__CondCode2_0__reg0
  { CVT_regR0, 0, CVT_regR0, 0, CVT_addCondCodeOperands, 1, CVT_reg0, 0, CVT_Done },
  // Convert__Reg1_1__Reg1_2__Reg1_3__imm_0__CondCode2_0
  { CVT_Reg, 2, CVT_Reg, 3, CVT_Reg, 4, CVT_imm_0, 0, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_1__Reg1_2__Reg1_3__PKHLSLImm1_4__CondCode2_0
  { CVT_Reg, 2, CVT_Reg, 3, CVT_Reg, 4, CVT_addImmOperands, 5, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_1__Reg1_2__Reg1_3__PKHASRImm1_4__CondCode2_0
  { CVT_Reg, 2, CVT_Reg, 3, CVT_Reg, 4, CVT_addPKHASRImmOperands, 5, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__MemImm12Offset2_0
  { CVT_addMemImm12OffsetOperands, 1, CVT_Done },
  // Convert__MemRegOffset3_0
  { CVT_addMemRegOffsetOperands, 1, CVT_Done },
  // Convert__MemNegImm8Offset2_1__CondCode2_0
  { CVT_addMemNegImm8OffsetOperands, 2, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__MemUImm12Offset2_1__CondCode2_0
  { CVT_addMemUImm12OffsetOperands, 2, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__T2MemRegOffset3_1__CondCode2_0
  { CVT_addT2MemRegOffsetOperands, 2, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__CondCode2_0__RegList1_1
  { CVT_addCondCodeOperands, 1, CVT_addRegListOperands, 2, CVT_Done },
  // Convert__regSP__Tie0__CondCode2_0__RegList1_1
  { CVT_regSP, 0, CVT_Tied, 0, CVT_addCondCodeOperands, 1, CVT_addRegListOperands, 2, CVT_Done },
  // Convert__regSP__Tie0__CondCode2_0__RegList1_2
  { CVT_regSP, 0, CVT_Tied, 0, CVT_addCondCodeOperands, 1, CVT_addRegListOperands, 3, CVT_Done },
  // Convert__Reg1_1__Reg1_2__Imm0_311_3__Imm1_321_4__CondCode2_0
  { CVT_Reg, 2, CVT_Reg, 3, CVT_addImmOperands, 4, CVT_addImm1_32Operands, 5, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__SetEndImm1_0
  { CVT_addImmOperands, 1, CVT_Done },
  // Convert__imm_4__CondCode2_0
  { CVT_imm_4, 0, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_1__Reg1_2__Reg1_3__Reg1_4__Tie0__Tie1__CondCode2_0
  { CVT_Reg, 2, CVT_Reg, 3, CVT_Reg, 4, CVT_Reg, 5, CVT_Tied, 0, CVT_Tied, 1, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_2__Reg1_3__Reg1_4__Reg1_5__Tie0__Tie1__CondCode2_1__CCOut1_0
  { CVT_Reg, 3, CVT_Reg, 4, CVT_Reg, 5, CVT_Reg, 6, CVT_Tied, 0, CVT_Tied, 1, CVT_addCondCodeOperands, 2, CVT_addCCOutOperands, 1, CVT_Done },
  // Convert__Reg1_1__Reg1_2__Reg1_4__Reg1_3__CondCode2_0
  { CVT_Reg, 2, CVT_Reg, 3, CVT_Reg, 5, CVT_Reg, 4, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Imm0_311_1
  { CVT_addImmOperands, 2, CVT_Done },
  // Convert__Imm0_311_2
  { CVT_addImmOperands, 3, CVT_Done },
  // Convert__Imm0_311_2__CondCode2_0
  { CVT_addImmOperands, 3, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Imm0_311_3__CondCode2_0
  { CVT_addImmOperands, 4, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_1__Imm1_321_2__Reg1_3__imm_0__CondCode2_0
  { CVT_Reg, 2, CVT_addImm1_32Operands, 3, CVT_Reg, 4, CVT_imm_0, 0, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_1__Imm1_321_2__Reg1_3__ShifterImm1_4__CondCode2_0
  { CVT_Reg, 2, CVT_addImm1_32Operands, 3, CVT_Reg, 4, CVT_addShifterImmOperands, 5, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_1__Imm1_161_2__Reg1_3__CondCode2_0
  { CVT_Reg, 2, CVT_addImm1_16Operands, 3, CVT_Reg, 4, CVT_addCondCodeOperands, 1, CVT_Done },
  // ConvertCustom_cvtStWriteBackRegT2AddrModeImm8
  { CVT_cvtStWriteBackRegT2AddrModeImm8, 0, CVT_Done },
  // Convert__MemNoOffset1_2__Reg1_1__Tie0__Imm1_3__CondCode2_0
  { CVT_addMemNoOffsetOperands, 3, CVT_Reg, 2, CVT_Tied, 0, CVT_addImmOperands, 4, CVT_addCondCodeOperands, 1, CVT_Done },
  // ConvertCustom_cvtStWriteBackRegAddrModeImm12
  { CVT_cvtStWriteBackRegAddrModeImm12, 0, CVT_Done },
  // Convert__MemNoOffset1_2__Reg1_1__Tie0__AM2OffsetImm2_3__CondCode2_0
  { CVT_addMemNoOffsetOperands, 3, CVT_Reg, 2, CVT_Tied, 0, CVT_addAM2OffsetImmOperands, 4, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__MemNoOffset1_2__Reg1_1__Tie0__PostIdxRegShifted2_3__CondCode2_0
  { CVT_addMemNoOffsetOperands, 3, CVT_Reg, 2, CVT_Tied, 0, CVT_addPostIdxRegShiftedOperands, 4, CVT_addCondCodeOperands, 1, CVT_Done },
  // ConvertCustom_cvtStWriteBackRegAddrMode2
  { CVT_cvtStWriteBackRegAddrMode2, 0, CVT_Done },
  // Convert__Reg1_1__MemImm8Offset2_2__CondCode2_0
  { CVT_Reg, 2, CVT_addMemImm8OffsetOperands, 3, CVT_addCondCodeOperands, 1, CVT_Done },
  // ConvertCustom_cvtT2StrdPre
  { CVT_cvtT2StrdPre, 0, CVT_Done },
  // Convert__MemNoOffset1_3__Reg1_1__Reg1_2__Tie0__Imm1_4__CondCode2_0
  { CVT_addMemNoOffsetOperands, 4, CVT_Reg, 2, CVT_Reg, 3, CVT_Tied, 0, CVT_addImmOperands, 5, CVT_addCondCodeOperands, 1, CVT_Done },
  // ConvertCustom_cvtStrdPre
  { CVT_cvtStrdPre, 0, CVT_Done },
  // Convert__MemNoOffset1_3__Reg1_1__Reg1_2__Tie0__AM3Offset2_4__CondCode2_0
  { CVT_addMemNoOffsetOperands, 4, CVT_Reg, 2, CVT_Reg, 3, CVT_Tied, 0, CVT_addAM3OffsetOperands, 5, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_1__Reg1_2__MemImm0_1020s4Offset2_3__CondCode2_0
  { CVT_Reg, 2, CVT_Reg, 3, CVT_addMemImm0_1020s4OffsetOperands, 4, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_1__Reg1_2__Reg1_3__MemNoOffset1_4__CondCode2_0
  { CVT_Reg, 2, CVT_Reg, 3, CVT_Reg, 4, CVT_addMemNoOffsetOperands, 5, CVT_addCondCodeOperands, 1, CVT_Done },
  // ConvertCustom_cvtStWriteBackRegAddrMode3
  { CVT_cvtStWriteBackRegAddrMode3, 0, CVT_Done },
  // Convert__MemNoOffset1_2__Reg1_1__Tie0__AM3Offset2_3__CondCode2_0
  { CVT_addMemNoOffsetOperands, 3, CVT_Reg, 2, CVT_Tied, 0, CVT_addAM3OffsetOperands, 4, CVT_addCondCodeOperands, 1, CVT_Done },
  // ConvertCustom_cvtStExtTWriteBackImm
  { CVT_cvtStExtTWriteBackImm, 0, CVT_Done },
  // ConvertCustom_cvtStExtTWriteBackReg
  { CVT_cvtStExtTWriteBackReg, 0, CVT_Done },
  // Convert__Imm24bit1_1__CondCode2_0
  { CVT_addImmOperands, 2, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_1__Reg1_2__Reg1_3__RotImm1_4__CondCode2_0
  { CVT_Reg, 2, CVT_Reg, 3, CVT_Reg, 4, CVT_addRotImmOperands, 5, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_1__Reg1_2__imm_0__CondCode2_0
  { CVT_Reg, 2, CVT_Reg, 3, CVT_imm_0, 0, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_2__Reg1_3__imm_0__CondCode2_0
  { CVT_Reg, 3, CVT_Reg, 4, CVT_imm_0, 0, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_1__Reg1_2__RotImm1_3__CondCode2_0
  { CVT_Reg, 2, CVT_Reg, 3, CVT_addRotImmOperands, 4, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_2__Reg1_3__RotImm1_4__CondCode2_0
  { CVT_Reg, 3, CVT_Reg, 4, CVT_addRotImmOperands, 5, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__MemTBB2_1__CondCode2_0
  { CVT_addMemTBBOperands, 2, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__MemTBH2_1__CondCode2_0
  { CVT_addMemTBHOperands, 2, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_1__Imm0_311_2__Reg1_3__imm_0__CondCode2_0
  { CVT_Reg, 2, CVT_addImmOperands, 3, CVT_Reg, 4, CVT_imm_0, 0, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_1__Imm0_311_2__Reg1_3__ShifterImm1_4__CondCode2_0
  { CVT_Reg, 2, CVT_addImmOperands, 3, CVT_Reg, 4, CVT_addShifterImmOperands, 5, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_1__Imm0_151_2__Reg1_3__CondCode2_0
  { CVT_Reg, 2, CVT_addImmOperands, 3, CVT_Reg, 4, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0
  { CVT_Reg, 3, CVT_Tied, 0, CVT_Reg, 4, CVT_Reg, 5, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0
  { CVT_Reg, 3, CVT_Reg, 3, CVT_Reg, 4, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0
  { CVT_Reg, 3, CVT_Reg, 4, CVT_Reg, 5, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_1__Reg1_1__Reg1_2__CondCode2_0
  { CVT_Reg, 2, CVT_Reg, 2, CVT_Reg, 3, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_2__NEONi16splat1_3__Tie0__CondCode2_0
  { CVT_Reg, 3, CVT_addNEONi16splatOperands, 4, CVT_Tied, 0, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_2__NEONi32splat1_3__Tie0__CondCode2_0
  { CVT_Reg, 3, CVT_addNEONi32splatOperands, 4, CVT_Tied, 0, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_1__Tie0__Reg1_2__Reg1_3__CondCode2_0
  { CVT_Reg, 2, CVT_Tied, 0, CVT_Reg, 3, CVT_Reg, 4, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_2__Reg1_4__Reg1_3__CondCode2_0
  { CVT_Reg, 3, CVT_Reg, 5, CVT_Reg, 4, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_2__CondCode2_0
  { CVT_Reg, 3, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_3__Reg1_4__CondCode2_0
  { CVT_Reg, 4, CVT_Reg, 5, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_3__Tie0__FBits161_5__CondCode2_0
  { CVT_Reg, 4, CVT_Tied, 0, CVT_addFBits16Operands, 6, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_3__Tie0__FBits321_5__CondCode2_0
  { CVT_Reg, 4, CVT_Tied, 0, CVT_addFBits32Operands, 6, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_3__Reg1_4__Imm1_5__CondCode2_0
  { CVT_Reg, 4, CVT_Reg, 5, CVT_addImmOperands, 6, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_2__Reg1_3__VectorIndex161_4__CondCode2_0
  { CVT_Reg, 3, CVT_Reg, 4, CVT_addVectorIndex16Operands, 5, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_2__Reg1_3__VectorIndex321_4__CondCode2_0
  { CVT_Reg, 3, CVT_Reg, 4, CVT_addVectorIndex32Operands, 5, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_2__Reg1_3__VectorIndex81_4__CondCode2_0
  { CVT_Reg, 3, CVT_Reg, 4, CVT_addVectorIndex8Operands, 5, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_2__Reg1_2__Reg1_3__Imm0_31_4__CondCode2_0
  { CVT_Reg, 3, CVT_Reg, 3, CVT_Reg, 4, CVT_addImmOperands, 5, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_2__Reg1_2__Reg1_3__Imm0_151_4__CondCode2_0
  { CVT_Reg, 3, CVT_Reg, 3, CVT_Reg, 4, CVT_addImmOperands, 5, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_2__Reg1_2__Reg1_3__Imm0_11_4__CondCode2_0
  { CVT_Reg, 3, CVT_Reg, 3, CVT_Reg, 4, CVT_addImmOperands, 5, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_2__Reg1_2__Reg1_3__Imm0_71_4__CondCode2_0
  { CVT_Reg, 3, CVT_Reg, 3, CVT_Reg, 4, CVT_addImmOperands, 5, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_2__Reg1_3__Reg1_4__Imm0_31_5__CondCode2_0
  { CVT_Reg, 3, CVT_Reg, 4, CVT_Reg, 5, CVT_addImmOperands, 6, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_2__Reg1_3__Reg1_4__Imm0_151_5__CondCode2_0
  { CVT_Reg, 3, CVT_Reg, 4, CVT_Reg, 5, CVT_addImmOperands, 6, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_2__Reg1_3__Reg1_4__Imm0_11_5__CondCode2_0
  { CVT_Reg, 3, CVT_Reg, 4, CVT_Reg, 5, CVT_addImmOperands, 6, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_2__Reg1_3__Reg1_4__Imm0_71_5__CondCode2_0
  { CVT_Reg, 3, CVT_Reg, 4, CVT_Reg, 5, CVT_addImmOperands, 6, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__VecListDPairAllLanes1_2__AlignedMemory2_3__CondCode2_0
  { CVT_addVecListOperands, 3, CVT_addAlignedMemoryOperands, 4, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__VecListDPair1_2__AlignedMemory2_3__CondCode2_0
  { CVT_addVecListOperands, 3, CVT_addAlignedMemoryOperands, 4, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__VecListFourD1_2__AlignedMemory2_3__CondCode2_0
  { CVT_addVecListOperands, 3, CVT_addAlignedMemoryOperands, 4, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__VecListOneDAllLanes1_2__AlignedMemory2_3__CondCode2_0
  { CVT_addVecListOperands, 3, CVT_addAlignedMemoryOperands, 4, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__VecListOneD1_2__AlignedMemory2_3__CondCode2_0
  { CVT_addVecListOperands, 3, CVT_addAlignedMemoryOperands, 4, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__VecListOneDHWordIndexed2_2__AlignedMemory2_3__CondCode2_0
  { CVT_addVecListIndexedOperands, 3, CVT_addAlignedMemoryOperands, 4, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__VecListThreeD1_2__AlignedMemory2_3__CondCode2_0
  { CVT_addVecListOperands, 3, CVT_addAlignedMemoryOperands, 4, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__VecListOneDWordIndexed2_2__AlignedMemory2_3__CondCode2_0
  { CVT_addVecListIndexedOperands, 3, CVT_addAlignedMemoryOperands, 4, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__VecListOneDByteIndexed2_2__AlignedMemory2_3__CondCode2_0
  { CVT_addVecListIndexedOperands, 3, CVT_addAlignedMemoryOperands, 4, CVT_addCondCodeOperands, 1, CVT_Done },
  // ConvertCustom_cvtVLDwbFixed
  { CVT_cvtVLDwbFixed, 0, CVT_Done },
  // ConvertCustom_cvtVLDwbRegister
  { CVT_cvtVLDwbRegister, 0, CVT_Done },
  // Convert__VecListOneDHWordIndexed2_2__AlignedMemory2_3__Reg1_4__CondCode2_0
  { CVT_addVecListIndexedOperands, 3, CVT_addAlignedMemoryOperands, 4, CVT_Reg, 5, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__VecListOneDWordIndexed2_2__AlignedMemory2_3__Reg1_4__CondCode2_0
  { CVT_addVecListIndexedOperands, 3, CVT_addAlignedMemoryOperands, 4, CVT_Reg, 5, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__VecListOneDByteIndexed2_2__AlignedMemory2_3__Reg1_4__CondCode2_0
  { CVT_addVecListIndexedOperands, 3, CVT_addAlignedMemoryOperands, 4, CVT_Reg, 5, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_3__AlignedMemory2_8__Tie0__Imm1_5__CondCode2_0
  { CVT_Reg, 4, CVT_addAlignedMemoryOperands, 9, CVT_Tied, 0, CVT_addImmOperands, 6, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_3__AlignedMemory1_8__Tie1__Imm1_9__Tie0__Imm1_5__CondCode2_0
  { CVT_Reg, 4, CVT_addAlignedMemoryOperands, 9, CVT_Tied, 1, CVT_addImmOperands, 10, CVT_Tied, 0, CVT_addImmOperands, 6, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_3__Reg1_8__Imm1_9__Tie0__Imm1_5__CondCode2_0
  { CVT_Reg, 4, CVT_Reg, 9, CVT_addImmOperands, 10, CVT_Tied, 0, CVT_addImmOperands, 6, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__VecListDPairSpacedAllLanes1_2__AlignedMemory2_3__CondCode2_0
  { CVT_addVecListOperands, 3, CVT_addAlignedMemoryOperands, 4, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__VecListDPairSpaced1_2__AlignedMemory2_3__CondCode2_0
  { CVT_addVecListOperands, 3, CVT_addAlignedMemoryOperands, 4, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__VecListTwoDHWordIndexed2_2__AlignedMemory2_3__CondCode2_0
  { CVT_addVecListIndexedOperands, 3, CVT_addAlignedMemoryOperands, 4, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__VecListTwoQHWordIndexed2_2__AlignedMemory2_3__CondCode2_0
  { CVT_addVecListIndexedOperands, 3, CVT_addAlignedMemoryOperands, 4, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__VecListTwoDWordIndexed2_2__AlignedMemory2_3__CondCode2_0
  { CVT_addVecListIndexedOperands, 3, CVT_addAlignedMemoryOperands, 4, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__VecListTwoQWordIndexed2_2__AlignedMemory2_3__CondCode2_0
  { CVT_addVecListIndexedOperands, 3, CVT_addAlignedMemoryOperands, 4, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__VecListTwoDByteIndexed2_2__AlignedMemory2_3__CondCode2_0
  { CVT_addVecListIndexedOperands, 3, CVT_addAlignedMemoryOperands, 4, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__VecListTwoDHWordIndexed2_2__AlignedMemory2_3__Reg1_4__CondCode2_0
  { CVT_addVecListIndexedOperands, 3, CVT_addAlignedMemoryOperands, 4, CVT_Reg, 5, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__VecListTwoQHWordIndexed2_2__AlignedMemory2_3__Reg1_4__CondCode2_0
  { CVT_addVecListIndexedOperands, 3, CVT_addAlignedMemoryOperands, 4, CVT_Reg, 5, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__VecListTwoDWordIndexed2_2__AlignedMemory2_3__Reg1_4__CondCode2_0
  { CVT_addVecListIndexedOperands, 3, CVT_addAlignedMemoryOperands, 4, CVT_Reg, 5, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__VecListTwoQWordIndexed2_2__AlignedMemory2_3__Reg1_4__CondCode2_0
  { CVT_addVecListIndexedOperands, 3, CVT_addAlignedMemoryOperands, 4, CVT_Reg, 5, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__VecListTwoDByteIndexed2_2__AlignedMemory2_3__Reg1_4__CondCode2_0
  { CVT_addVecListIndexedOperands, 3, CVT_addAlignedMemoryOperands, 4, CVT_Reg, 5, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__VecListThreeDAllLanes1_2__AlignedMemory2_3__CondCode2_0
  { CVT_addVecListOperands, 3, CVT_addAlignedMemoryOperands, 4, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__VecListThreeDHWordIndexed2_2__AlignedMemory2_3__CondCode2_0
  { CVT_addVecListIndexedOperands, 3, CVT_addAlignedMemoryOperands, 4, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__VecListThreeQAllLanes1_2__AlignedMemory2_3__CondCode2_0
  { CVT_addVecListOperands, 3, CVT_addAlignedMemoryOperands, 4, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__VecListThreeQ1_2__AlignedMemory2_3__CondCode2_0
  { CVT_addVecListOperands, 3, CVT_addAlignedMemoryOperands, 4, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__VecListThreeQHWordIndexed2_2__AlignedMemory2_3__CondCode2_0
  { CVT_addVecListIndexedOperands, 3, CVT_addAlignedMemoryOperands, 4, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__VecListThreeDWordIndexed2_2__AlignedMemory2_3__CondCode2_0
  { CVT_addVecListIndexedOperands, 3, CVT_addAlignedMemoryOperands, 4, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__VecListThreeQWordIndexed2_2__AlignedMemory2_3__CondCode2_0
  { CVT_addVecListIndexedOperands, 3, CVT_addAlignedMemoryOperands, 4, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__VecListThreeDByteIndexed2_2__AlignedMemory2_3__CondCode2_0
  { CVT_addVecListIndexedOperands, 3, CVT_addAlignedMemoryOperands, 4, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__VecListThreeDAllLanes1_2__AlignedMemory2_3__Reg1_4__CondCode2_0
  { CVT_addVecListOperands, 3, CVT_addAlignedMemoryOperands, 4, CVT_Reg, 5, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__VecListThreeD1_2__AlignedMemory2_3__Reg1_4__CondCode2_0
  { CVT_addVecListOperands, 3, CVT_addAlignedMemoryOperands, 4, CVT_Reg, 5, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__VecListThreeDHWordIndexed2_2__AlignedMemory2_3__Reg1_4__CondCode2_0
  { CVT_addVecListIndexedOperands, 3, CVT_addAlignedMemoryOperands, 4, CVT_Reg, 5, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__VecListThreeQAllLanes1_2__AlignedMemory2_3__Reg1_4__CondCode2_0
  { CVT_addVecListOperands, 3, CVT_addAlignedMemoryOperands, 4, CVT_Reg, 5, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__VecListThreeQ1_2__AlignedMemory2_3__Reg1_4__CondCode2_0
  { CVT_addVecListOperands, 3, CVT_addAlignedMemoryOperands, 4, CVT_Reg, 5, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__VecListThreeQHWordIndexed2_2__AlignedMemory2_3__Reg1_4__CondCode2_0
  { CVT_addVecListIndexedOperands, 3, CVT_addAlignedMemoryOperands, 4, CVT_Reg, 5, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__VecListThreeDWordIndexed2_2__AlignedMemory2_3__Reg1_4__CondCode2_0
  { CVT_addVecListIndexedOperands, 3, CVT_addAlignedMemoryOperands, 4, CVT_Reg, 5, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__VecListThreeQWordIndexed2_2__AlignedMemory2_3__Reg1_4__CondCode2_0
  { CVT_addVecListIndexedOperands, 3, CVT_addAlignedMemoryOperands, 4, CVT_Reg, 5, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__VecListThreeDByteIndexed2_2__AlignedMemory2_3__Reg1_4__CondCode2_0
  { CVT_addVecListIndexedOperands, 3, CVT_addAlignedMemoryOperands, 4, CVT_Reg, 5, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_3__Reg1_4__Reg1_5__AlignedMemory2_7__CondCode2_0
  { CVT_Reg, 4, CVT_Reg, 5, CVT_Reg, 6, CVT_addAlignedMemoryOperands, 8, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_3__Reg1_4__Reg1_5__AlignedMemory1_7__Tie3__Imm1_8__CondCode2_0
  { CVT_Reg, 4, CVT_Reg, 5, CVT_Reg, 6, CVT_addAlignedMemoryOperands, 8, CVT_Tied, 3, CVT_addImmOperands, 9, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_3__Reg1_6__Reg1_9__AlignedMemory2_13__CondCode2_0
  { CVT_Reg, 4, CVT_Reg, 7, CVT_Reg, 10, CVT_addAlignedMemoryOperands, 14, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_3__Reg1_6__Reg1_9__AlignedMemory1_13__Tie3__Imm1_14__CondCode2_0
  { CVT_Reg, 4, CVT_Reg, 7, CVT_Reg, 10, CVT_addAlignedMemoryOperands, 14, CVT_Tied, 3, CVT_addImmOperands, 15, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__VecListFourDAllLanes1_2__AlignedMemory2_3__CondCode2_0
  { CVT_addVecListOperands, 3, CVT_addAlignedMemoryOperands, 4, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__VecListFourDHWordIndexed2_2__AlignedMemory2_3__CondCode2_0
  { CVT_addVecListIndexedOperands, 3, CVT_addAlignedMemoryOperands, 4, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__VecListFourQAllLanes1_2__AlignedMemory2_3__CondCode2_0
  { CVT_addVecListOperands, 3, CVT_addAlignedMemoryOperands, 4, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__VecListFourQ1_2__AlignedMemory2_3__CondCode2_0
  { CVT_addVecListOperands, 3, CVT_addAlignedMemoryOperands, 4, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__VecListFourQHWordIndexed2_2__AlignedMemory2_3__CondCode2_0
  { CVT_addVecListIndexedOperands, 3, CVT_addAlignedMemoryOperands, 4, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__VecListFourDWordIndexed2_2__AlignedMemory2_3__CondCode2_0
  { CVT_addVecListIndexedOperands, 3, CVT_addAlignedMemoryOperands, 4, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__VecListFourQWordIndexed2_2__AlignedMemory2_3__CondCode2_0
  { CVT_addVecListIndexedOperands, 3, CVT_addAlignedMemoryOperands, 4, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__VecListFourDByteIndexed2_2__AlignedMemory2_3__CondCode2_0
  { CVT_addVecListIndexedOperands, 3, CVT_addAlignedMemoryOperands, 4, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__VecListFourDAllLanes1_2__AlignedMemory2_3__Reg1_4__CondCode2_0
  { CVT_addVecListOperands, 3, CVT_addAlignedMemoryOperands, 4, CVT_Reg, 5, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__VecListFourD1_2__AlignedMemory2_3__Reg1_4__CondCode2_0
  { CVT_addVecListOperands, 3, CVT_addAlignedMemoryOperands, 4, CVT_Reg, 5, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__VecListFourDHWordIndexed2_2__AlignedMemory2_3__Reg1_4__CondCode2_0
  { CVT_addVecListIndexedOperands, 3, CVT_addAlignedMemoryOperands, 4, CVT_Reg, 5, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__VecListFourQAllLanes1_2__AlignedMemory2_3__Reg1_4__CondCode2_0
  { CVT_addVecListOperands, 3, CVT_addAlignedMemoryOperands, 4, CVT_Reg, 5, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__VecListFourQ1_2__AlignedMemory2_3__Reg1_4__CondCode2_0
  { CVT_addVecListOperands, 3, CVT_addAlignedMemoryOperands, 4, CVT_Reg, 5, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__VecListFourQHWordIndexed2_2__AlignedMemory2_3__Reg1_4__CondCode2_0
  { CVT_addVecListIndexedOperands, 3, CVT_addAlignedMemoryOperands, 4, CVT_Reg, 5, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__VecListFourDWordIndexed2_2__AlignedMemory2_3__Reg1_4__CondCode2_0
  { CVT_addVecListIndexedOperands, 3, CVT_addAlignedMemoryOperands, 4, CVT_Reg, 5, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__VecListFourQWordIndexed2_2__AlignedMemory2_3__Reg1_4__CondCode2_0
  { CVT_addVecListIndexedOperands, 3, CVT_addAlignedMemoryOperands, 4, CVT_Reg, 5, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__VecListFourDByteIndexed2_2__AlignedMemory2_3__Reg1_4__CondCode2_0
  { CVT_addVecListIndexedOperands, 3, CVT_addAlignedMemoryOperands, 4, CVT_Reg, 5, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_3__Reg1_4__Reg1_5__Reg1_6__AlignedMemory2_8__CondCode2_0
  { CVT_Reg, 4, CVT_Reg, 5, CVT_Reg, 6, CVT_Reg, 7, CVT_addAlignedMemoryOperands, 9, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_3__Reg1_4__Reg1_5__Reg1_6__AlignedMemory1_8__Tie4__Imm1_9__CondCode2_0
  { CVT_Reg, 4, CVT_Reg, 5, CVT_Reg, 6, CVT_Reg, 7, CVT_addAlignedMemoryOperands, 9, CVT_Tied, 4, CVT_addImmOperands, 10, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_3__Reg1_6__Reg1_9__Reg1_12__AlignedMemory2_16__CondCode2_0
  { CVT_Reg, 4, CVT_Reg, 7, CVT_Reg, 10, CVT_Reg, 13, CVT_addAlignedMemoryOperands, 17, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_3__Reg1_6__Reg1_9__Reg1_12__AlignedMemory1_16__Tie4__Imm1_17__CondCode2_0
  { CVT_Reg, 4, CVT_Reg, 7, CVT_Reg, 10, CVT_Reg, 13, CVT_addAlignedMemoryOperands, 17, CVT_Tied, 4, CVT_addImmOperands, 18, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_1__Tie0__CondCode2_0__DPRRegList1_3
  { CVT_Reg, 2, CVT_Tied, 0, CVT_addCondCodeOperands, 1, CVT_addDPRRegListOperands, 4, CVT_Done },
  // Convert__Reg1_1__Tie0__CondCode2_0__SPRRegList1_3
  { CVT_Reg, 2, CVT_Tied, 0, CVT_addCondCodeOperands, 1, CVT_addSPRRegListOperands, 4, CVT_Done },
  // Convert__Reg1_1__CondCode2_0__DPRRegList1_2
  { CVT_Reg, 2, CVT_addCondCodeOperands, 1, CVT_addDPRRegListOperands, 3, CVT_Done },
  // Convert__Reg1_1__CondCode2_0__SPRRegList1_2
  { CVT_Reg, 2, CVT_addCondCodeOperands, 1, CVT_addSPRRegListOperands, 3, CVT_Done },
  // Convert__Reg1_1__AddrMode52_2__CondCode2_0
  { CVT_Reg, 2, CVT_addAddrMode5Operands, 3, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_2__AddrMode52_3__CondCode2_0
  { CVT_Reg, 3, CVT_addAddrMode5Operands, 4, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__VectorIndex321_5__CondCode2_0
  { CVT_Reg, 3, CVT_Tied, 0, CVT_Reg, 4, CVT_Reg, 5, CVT_addVectorIndex32Operands, 6, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__VectorIndex161_5__CondCode2_0
  { CVT_Reg, 3, CVT_Tied, 0, CVT_Reg, 4, CVT_Reg, 5, CVT_addVectorIndex16Operands, 6, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_1__Reg1_2__Reg1_2__CondCode2_0
  { CVT_Reg, 2, CVT_Reg, 3, CVT_Reg, 3, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_2__Reg1_3__Reg1_3__CondCode2_0
  { CVT_Reg, 3, CVT_Reg, 4, CVT_Reg, 4, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_2__FPImm1_3__CondCode2_0
  { CVT_Reg, 3, CVT_addFPImmOperands, 4, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_2__NEONi32vmov1_3__CondCode2_0
  { CVT_Reg, 3, CVT_addNEONi32vmovOperands, 4, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_2__NEONi16splat1_3__CondCode2_0
  { CVT_Reg, 3, CVT_addNEONi16splatOperands, 4, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_2__NEONi32vmovNeg1_3__CondCode2_0
  { CVT_Reg, 3, CVT_addNEONi32vmovNegOperands, 4, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_2__NEONi64splat1_3__CondCode2_0
  { CVT_Reg, 3, CVT_addNEONi64splatOperands, 4, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_2__NEONi8splat1_3__CondCode2_0
  { CVT_Reg, 3, CVT_addNEONi8splatOperands, 4, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_2__Tie0__Reg1_4__VectorIndex161_3__CondCode2_0
  { CVT_Reg, 3, CVT_Tied, 0, CVT_Reg, 5, CVT_addVectorIndex16Operands, 4, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_2__Tie0__Reg1_4__VectorIndex321_3__CondCode2_0
  { CVT_Reg, 3, CVT_Tied, 0, CVT_Reg, 5, CVT_addVectorIndex32Operands, 4, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_2__Tie0__Reg1_4__VectorIndex81_3__CondCode2_0
  { CVT_Reg, 3, CVT_Tied, 0, CVT_Reg, 5, CVT_addVectorIndex8Operands, 4, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_2__Reg1_2__Reg1_3__VectorIndex321_4__CondCode2_0
  { CVT_Reg, 3, CVT_Reg, 3, CVT_Reg, 4, CVT_addVectorIndex32Operands, 5, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_2__Reg1_2__Reg1_3__VectorIndex161_4__CondCode2_0
  { CVT_Reg, 3, CVT_Reg, 3, CVT_Reg, 4, CVT_addVectorIndex16Operands, 5, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_2__Reg1_3__Reg1_4__VectorIndex321_5__CondCode2_0
  { CVT_Reg, 3, CVT_Reg, 4, CVT_Reg, 5, CVT_addVectorIndex32Operands, 6, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_2__Reg1_3__Reg1_4__VectorIndex161_5__CondCode2_0
  { CVT_Reg, 3, CVT_Reg, 4, CVT_Reg, 5, CVT_addVectorIndex16Operands, 6, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_2__Tie0__Reg1_3__CondCode2_0
  { CVT_Reg, 3, CVT_Tied, 0, CVT_Reg, 4, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__regSP__Tie0__CondCode2_0__DPRRegList1_1
  { CVT_regSP, 0, CVT_Tied, 0, CVT_addCondCodeOperands, 1, CVT_addDPRRegListOperands, 2, CVT_Done },
  // Convert__regSP__Tie0__CondCode2_0__SPRRegList1_1
  { CVT_regSP, 0, CVT_Tied, 0, CVT_addCondCodeOperands, 1, CVT_addSPRRegListOperands, 2, CVT_Done },
  // Convert__regSP__Tie0__CondCode2_0__DPRRegList1_2
  { CVT_regSP, 0, CVT_Tied, 0, CVT_addCondCodeOperands, 1, CVT_addDPRRegListOperands, 3, CVT_Done },
  // Convert__regSP__Tie0__CondCode2_0__SPRRegList1_2
  { CVT_regSP, 0, CVT_Tied, 0, CVT_addCondCodeOperands, 1, CVT_addSPRRegListOperands, 3, CVT_Done },
  // Convert__Reg1_2__Reg1_3__ShrImm81_4__CondCode2_0
  { CVT_Reg, 3, CVT_Reg, 4, CVT_addImmOperands, 5, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_2__Reg1_3__ShrImm161_4__CondCode2_0
  { CVT_Reg, 3, CVT_Reg, 4, CVT_addImmOperands, 5, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_2__Reg1_3__ShrImm321_4__CondCode2_0
  { CVT_Reg, 3, CVT_Reg, 4, CVT_addImmOperands, 5, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_2__Reg1_2__Imm1_3__CondCode2_0
  { CVT_Reg, 3, CVT_Reg, 3, CVT_addImmOperands, 4, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_2__Reg1_3__Imm1_4__CondCode2_0
  { CVT_Reg, 3, CVT_Reg, 4, CVT_addImmOperands, 5, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_2__Reg1_2__ShrImm161_3__CondCode2_0
  { CVT_Reg, 3, CVT_Reg, 3, CVT_addImmOperands, 4, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_2__Reg1_2__ShrImm321_3__CondCode2_0
  { CVT_Reg, 3, CVT_Reg, 3, CVT_addImmOperands, 4, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_2__Reg1_2__ShrImm641_3__CondCode2_0
  { CVT_Reg, 3, CVT_Reg, 3, CVT_addImmOperands, 4, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_2__Reg1_2__ShrImm81_3__CondCode2_0
  { CVT_Reg, 3, CVT_Reg, 3, CVT_addImmOperands, 4, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_2__Reg1_3__ShrImm641_4__CondCode2_0
  { CVT_Reg, 3, CVT_Reg, 4, CVT_addImmOperands, 5, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_2__Tie0__Reg1_2__ShrImm161_3__CondCode2_0
  { CVT_Reg, 3, CVT_Tied, 0, CVT_Reg, 3, CVT_addImmOperands, 4, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_2__Tie0__Reg1_2__ShrImm321_3__CondCode2_0
  { CVT_Reg, 3, CVT_Tied, 0, CVT_Reg, 3, CVT_addImmOperands, 4, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_2__Tie0__Reg1_2__ShrImm641_3__CondCode2_0
  { CVT_Reg, 3, CVT_Tied, 0, CVT_Reg, 3, CVT_addImmOperands, 4, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_2__Tie0__Reg1_2__ShrImm81_3__CondCode2_0
  { CVT_Reg, 3, CVT_Tied, 0, CVT_Reg, 3, CVT_addImmOperands, 4, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_2__Tie0__Reg1_3__ShrImm161_4__CondCode2_0
  { CVT_Reg, 3, CVT_Tied, 0, CVT_Reg, 4, CVT_addImmOperands, 5, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_2__Tie0__Reg1_3__ShrImm321_4__CondCode2_0
  { CVT_Reg, 3, CVT_Tied, 0, CVT_Reg, 4, CVT_addImmOperands, 5, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_2__Tie0__Reg1_3__ShrImm641_4__CondCode2_0
  { CVT_Reg, 3, CVT_Tied, 0, CVT_Reg, 4, CVT_addImmOperands, 5, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_2__Tie0__Reg1_3__ShrImm81_4__CondCode2_0
  { CVT_Reg, 3, CVT_Tied, 0, CVT_Reg, 4, CVT_addImmOperands, 5, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_2__Reg1_3__Imm1_151_4__CondCode2_0
  { CVT_Reg, 3, CVT_Reg, 4, CVT_addImmOperands, 5, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_2__Reg1_3__Imm161_4__CondCode2_0
  { CVT_Reg, 3, CVT_Reg, 4, CVT_addImmOperands, 5, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_2__Reg1_3__Imm321_4__CondCode2_0
  { CVT_Reg, 3, CVT_Reg, 4, CVT_addImmOperands, 5, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_2__Reg1_3__Imm1_71_4__CondCode2_0
  { CVT_Reg, 3, CVT_Reg, 4, CVT_addImmOperands, 5, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_2__Reg1_3__Imm81_4__CondCode2_0
  { CVT_Reg, 3, CVT_Reg, 4, CVT_addImmOperands, 5, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_2__Reg1_3__Imm1_311_4__CondCode2_0
  { CVT_Reg, 3, CVT_Reg, 4, CVT_addImmOperands, 5, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_2__Tie0__Reg1_2__Imm1_3__CondCode2_0
  { CVT_Reg, 3, CVT_Tied, 0, CVT_Reg, 3, CVT_addImmOperands, 4, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_2__Tie0__Reg1_3__Imm1_4__CondCode2_0
  { CVT_Reg, 3, CVT_Tied, 0, CVT_Reg, 4, CVT_addImmOperands, 5, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__AlignedMemory2_3__VecListDPair1_2__CondCode2_0
  { CVT_addAlignedMemoryOperands, 4, CVT_addVecListOperands, 3, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__AlignedMemory2_3__VecListFourD1_2__CondCode2_0
  { CVT_addAlignedMemoryOperands, 4, CVT_addVecListOperands, 3, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__AlignedMemory2_3__VecListOneD1_2__CondCode2_0
  { CVT_addAlignedMemoryOperands, 4, CVT_addVecListOperands, 3, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__AlignedMemory2_3__VecListThreeD1_2__CondCode2_0
  { CVT_addAlignedMemoryOperands, 4, CVT_addVecListOperands, 3, CVT_addCondCodeOperands, 1, CVT_Done },
  // ConvertCustom_cvtVSTwbFixed
  { CVT_cvtVSTwbFixed, 0, CVT_Done },
  // ConvertCustom_cvtVSTwbRegister
  { CVT_cvtVSTwbRegister, 0, CVT_Done },
  // Convert__AlignedMemory2_8__Reg1_3__Imm1_5__CondCode2_0
  { CVT_addAlignedMemoryOperands, 9, CVT_Reg, 4, CVT_addImmOperands, 6, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__AlignedMemory1_8__Tie0__Imm1_9__Reg1_3__Imm1_5__CondCode2_0
  { CVT_addAlignedMemoryOperands, 9, CVT_Tied, 0, CVT_addImmOperands, 10, CVT_Reg, 4, CVT_addImmOperands, 6, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_8__Imm1_9__Reg1_3__Imm1_5__CondCode2_0
  { CVT_Reg, 9, CVT_addImmOperands, 10, CVT_Reg, 4, CVT_addImmOperands, 6, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_8__Tie0__Imm1_10__Reg1_3__Imm1_5__CondCode2_0
  { CVT_Reg, 9, CVT_Tied, 0, CVT_addImmOperands, 11, CVT_Reg, 4, CVT_addImmOperands, 6, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__AlignedMemory2_3__VecListDPairSpaced1_2__CondCode2_0
  { CVT_addAlignedMemoryOperands, 4, CVT_addVecListOperands, 3, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__AlignedMemory2_7__Reg1_3__Reg1_4__Reg1_5__CondCode2_0
  { CVT_addAlignedMemoryOperands, 8, CVT_Reg, 4, CVT_Reg, 5, CVT_Reg, 6, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__AlignedMemory1_7__Tie0__Imm1_8__Reg1_3__Reg1_4__Reg1_5__CondCode2_0
  { CVT_addAlignedMemoryOperands, 8, CVT_Tied, 0, CVT_addImmOperands, 9, CVT_Reg, 4, CVT_Reg, 5, CVT_Reg, 6, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__AlignedMemory2_8__Reg1_3__Reg1_4__Reg1_5__Reg1_6__CondCode2_0
  { CVT_addAlignedMemoryOperands, 9, CVT_Reg, 4, CVT_Reg, 5, CVT_Reg, 6, CVT_Reg, 7, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__AlignedMemory1_8__Tie0__Imm1_9__Reg1_3__Reg1_4__Reg1_5__Reg1_6__CondCode2_0
  { CVT_addAlignedMemoryOperands, 9, CVT_Tied, 0, CVT_addImmOperands, 10, CVT_Reg, 4, CVT_Reg, 5, CVT_Reg, 6, CVT_Reg, 7, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_1__Reg1_2__Tie0__Tie1__CondCode2_0
  { CVT_Reg, 2, CVT_Reg, 3, CVT_Tied, 0, CVT_Tied, 1, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_2__Reg1_3__Tie0__Tie1__CondCode2_0
  { CVT_Reg, 3, CVT_Reg, 4, CVT_Tied, 0, CVT_Tied, 1, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_2__VecListDPair1_3__Reg1_4__CondCode2_0
  { CVT_Reg, 3, CVT_addVecListOperands, 4, CVT_Reg, 5, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_2__VecListFourD1_3__Reg1_4__CondCode2_0
  { CVT_Reg, 3, CVT_addVecListOperands, 4, CVT_Reg, 5, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_2__VecListOneD1_3__Reg1_4__CondCode2_0
  { CVT_Reg, 3, CVT_addVecListOperands, 4, CVT_Reg, 5, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_2__VecListThreeD1_3__Reg1_4__CondCode2_0
  { CVT_Reg, 3, CVT_addVecListOperands, 4, CVT_Reg, 5, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_2__Tie0__VecListDPair1_3__Reg1_4__CondCode2_0
  { CVT_Reg, 3, CVT_Tied, 0, CVT_addVecListOperands, 4, CVT_Reg, 5, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_2__Tie0__VecListFourD1_3__Reg1_4__CondCode2_0
  { CVT_Reg, 3, CVT_Tied, 0, CVT_addVecListOperands, 4, CVT_Reg, 5, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_2__Tie0__VecListOneD1_3__Reg1_4__CondCode2_0
  { CVT_Reg, 3, CVT_Tied, 0, CVT_addVecListOperands, 4, CVT_Reg, 5, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__Reg1_2__Tie0__VecListThreeD1_3__Reg1_4__CondCode2_0
  { CVT_Reg, 3, CVT_Tied, 0, CVT_addVecListOperands, 4, CVT_Reg, 5, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__imm_2__CondCode2_0
  { CVT_imm_2, 0, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__imm_3__CondCode2_0
  { CVT_imm_3, 0, CVT_addCondCodeOperands, 1, CVT_Done },
  // Convert__imm_1__CondCode2_0
  { CVT_imm_1, 0, CVT_addCondCodeOperands, 1, CVT_Done },
};

void ARMAsmParser::
convertToMCInst(unsigned Kind, MCInst &Inst, unsigned Opcode,
                const SmallVectorImpl<MCParsedAsmOperand*> &Operands) {
  assert(Kind < CVT_NUM_SIGNATURES && "Invalid signature!");
  const uint8_t *Converter = ConversionTable[Kind];
  Inst.setOpcode(Opcode);
  for (const uint8_t *p = Converter; *p; p+= 2) {
    switch (*p) {
    default: llvm_unreachable("invalid conversion entry!");
    case CVT_Reg:
      static_cast<ARMOperand*>(Operands[*(p + 1)])->addRegOperands(Inst, 1);
      break;
    case CVT_Tied:
      Inst.addOperand(Inst.getOperand(*(p + 1)));
      break;
    case CVT_addCCOutOperands:
      static_cast<ARMOperand*>(Operands[*(p + 1)])->addCCOutOperands(Inst, 1);
      break;
    case CVT_addCondCodeOperands:
      static_cast<ARMOperand*>(Operands[*(p + 1)])->addCondCodeOperands(Inst, 2);
      break;
    case CVT_addRegShiftedRegOperands:
      static_cast<ARMOperand*>(Operands[*(p + 1)])->addRegShiftedRegOperands(Inst, 3);
      break;
    case CVT_addImmOperands:
      static_cast<ARMOperand*>(Operands[*(p + 1)])->addImmOperands(Inst, 1);
      break;
    case CVT_addRegShiftedImmOperands:
      static_cast<ARMOperand*>(Operands[*(p + 1)])->addRegShiftedImmOperands(Inst, 2);
      break;
    case CVT_addImm0_508s4Operands:
      static_cast<ARMOperand*>(Operands[*(p + 1)])->addImm0_508s4Operands(Inst, 1);
      break;
    case CVT_regSP:
      Inst.addOperand(MCOperand::CreateReg(ARM::SP));
      break;
    case CVT_addImm0_508s4NegOperands:
      static_cast<ARMOperand*>(Operands[*(p + 1)])->addImm0_508s4NegOperands(Inst, 1);
      break;
    case CVT_addImm0_4095NegOperands:
      static_cast<ARMOperand*>(Operands[*(p + 1)])->addImm0_4095NegOperands(Inst, 1);
      break;
    case CVT_addT2SOImmNegOperands:
      static_cast<ARMOperand*>(Operands[*(p + 1)])->addT2SOImmNegOperands(Inst, 1);
      break;
    case CVT_addARMSOImmNegOperands:
      static_cast<ARMOperand*>(Operands[*(p + 1)])->addARMSOImmNegOperands(Inst, 1);
      break;
    case CVT_addImm0_1020s4Operands:
      static_cast<ARMOperand*>(Operands[*(p + 1)])->addImm0_1020s4Operands(Inst, 1);
      break;
    case CVT_addAdrLabelOperands:
      static_cast<ARMOperand*>(Operands[*(p + 1)])->addAdrLabelOperands(Inst, 1);
      break;
    case CVT_addARMSOImmNotOperands:
      static_cast<ARMOperand*>(Operands[*(p + 1)])->addARMSOImmNotOperands(Inst, 1);
      break;
    case CVT_addImmThumbSROperands:
      static_cast<ARMOperand*>(Operands[*(p + 1)])->addImmThumbSROperands(Inst, 1);
      break;
    case CVT_addBitfieldOperands:
      static_cast<ARMOperand*>(Operands[*(p + 1)])->addBitfieldOperands(Inst, 1);
      break;
    case CVT_addCoprocNumOperands:
      static_cast<ARMOperand*>(Operands[*(p + 1)])->addCoprocNumOperands(Inst, 1);
      break;
    case CVT_addCoprocRegOperands:
      static_cast<ARMOperand*>(Operands[*(p + 1)])->addCoprocRegOperands(Inst, 1);
      break;
    case CVT_imm_0:
      Inst.addOperand(MCOperand::CreateImm(0));
      break;
    case CVT_addProcIFlagsOperands:
      static_cast<ARMOperand*>(Operands[*(p + 1)])->addProcIFlagsOperands(Inst, 1);
      break;
    case CVT_imm_15:
      Inst.addOperand(MCOperand::CreateImm(15));
      break;
    case CVT_addMemBarrierOptOperands:
      static_cast<ARMOperand*>(Operands[*(p + 1)])->addMemBarrierOptOperands(Inst, 1);
      break;
    case CVT_imm_1:
      Inst.addOperand(MCOperand::CreateImm(1));
      break;
    case CVT_addITCondCodeOperands:
      static_cast<ARMOperand*>(Operands[*(p + 1)])->addITCondCodeOperands(Inst, 1);
      break;
    case CVT_addITMaskOperands:
      static_cast<ARMOperand*>(Operands[*(p + 1)])->addITMaskOperands(Inst, 1);
      break;
    case CVT_addAddrMode5Operands:
      static_cast<ARMOperand*>(Operands[*(p + 1)])->addAddrMode5Operands(Inst, 2);
      break;
    case CVT_addMemNoOffsetOperands:
      static_cast<ARMOperand*>(Operands[*(p + 1)])->addMemNoOffsetOperands(Inst, 1);
      break;
    case CVT_addCoprocOptionOperands:
      static_cast<ARMOperand*>(Operands[*(p + 1)])->addCoprocOptionOperands(Inst, 1);
      break;
    case CVT_addPostIdxImm8s4Operands:
      static_cast<ARMOperand*>(Operands[*(p + 1)])->addPostIdxImm8s4Operands(Inst, 1);
      break;
    case CVT_addRegListOperands:
      static_cast<ARMOperand*>(Operands[*(p + 1)])->addRegListOperands(Inst, 1);
      break;
    case CVT_addMemThumbRIs4Operands:
      static_cast<ARMOperand*>(Operands[*(p + 1)])->addMemThumbRIs4Operands(Inst, 2);
      break;
    case CVT_addMemThumbRROperands:
      static_cast<ARMOperand*>(Operands[*(p + 1)])->addMemThumbRROperands(Inst, 2);
      break;
    case CVT_addMemThumbSPIOperands:
      static_cast<ARMOperand*>(Operands[*(p + 1)])->addMemThumbSPIOperands(Inst, 2);
      break;
    case CVT_addMemPCRelImm12Operands:
      static_cast<ARMOperand*>(Operands[*(p + 1)])->addMemPCRelImm12Operands(Inst, 1);
      break;
    case CVT_addMemImm12OffsetOperands:
      static_cast<ARMOperand*>(Operands[*(p + 1)])->addMemImm12OffsetOperands(Inst, 2);
      break;
    case CVT_addMemNegImm8OffsetOperands:
      static_cast<ARMOperand*>(Operands[*(p + 1)])->addMemNegImm8OffsetOperands(Inst, 2);
      break;
    case CVT_addMemRegOffsetOperands:
      static_cast<ARMOperand*>(Operands[*(p + 1)])->addMemRegOffsetOperands(Inst, 3);
      break;
    case CVT_addMemUImm12OffsetOperands:
      static_cast<ARMOperand*>(Operands[*(p + 1)])->addMemUImm12OffsetOperands(Inst, 2);
      break;
    case CVT_addT2MemRegOffsetOperands:
      static_cast<ARMOperand*>(Operands[*(p + 1)])->addT2MemRegOffsetOperands(Inst, 3);
      break;
    case CVT_cvtLdWriteBackRegAddrModeImm12:
      cvtLdWriteBackRegAddrModeImm12(Inst, Operands);
      break;
    case CVT_cvtLdWriteBackRegT2AddrModeImm8:
      cvtLdWriteBackRegT2AddrModeImm8(Inst, Operands);
      break;
    case CVT_addAM2OffsetImmOperands:
      static_cast<ARMOperand*>(Operands[*(p + 1)])->addAM2OffsetImmOperands(Inst, 2);
      break;
    case CVT_addPostIdxRegShiftedOperands:
      static_cast<ARMOperand*>(Operands[*(p + 1)])->addPostIdxRegShiftedOperands(Inst, 2);
      break;
    case CVT_cvtLdWriteBackRegAddrMode2:
      cvtLdWriteBackRegAddrMode2(Inst, Operands);
      break;
    case CVT_addMemThumbRIs1Operands:
      static_cast<ARMOperand*>(Operands[*(p + 1)])->addMemThumbRIs1Operands(Inst, 2);
      break;
    case CVT_addMemPosImm8OffsetOperands:
      static_cast<ARMOperand*>(Operands[*(p + 1)])->addMemPosImm8OffsetOperands(Inst, 2);
      break;
    case CVT_addMemImm8s4OffsetOperands:
      static_cast<ARMOperand*>(Operands[*(p + 1)])->addMemImm8s4OffsetOperands(Inst, 2);
      break;
    case CVT_addAddrMode3Operands:
      static_cast<ARMOperand*>(Operands[*(p + 1)])->addAddrMode3Operands(Inst, 3);
      break;
    case CVT_cvtT2LdrdPre:
      cvtT2LdrdPre(Inst, Operands);
      break;
    case CVT_cvtLdrdPre:
      cvtLdrdPre(Inst, Operands);
      break;
    case CVT_addAM3OffsetOperands:
      static_cast<ARMOperand*>(Operands[*(p + 1)])->addAM3OffsetOperands(Inst, 2);
      break;
    case CVT_addMemImm0_1020s4OffsetOperands:
      static_cast<ARMOperand*>(Operands[*(p + 1)])->addMemImm0_1020s4OffsetOperands(Inst, 2);
      break;
    case CVT_addMemThumbRIs2Operands:
      static_cast<ARMOperand*>(Operands[*(p + 1)])->addMemThumbRIs2Operands(Inst, 2);
      break;
    case CVT_cvtLdWriteBackRegAddrMode3:
      cvtLdWriteBackRegAddrMode3(Inst, Operands);
      break;
    case CVT_cvtLdExtTWriteBackReg:
      cvtLdExtTWriteBackReg(Inst, Operands);
      break;
    case CVT_cvtLdExtTWriteBackImm:
      cvtLdExtTWriteBackImm(Inst, Operands);
      break;
    case CVT_reg0:
      Inst.addOperand(MCOperand::CreateReg(0));
      break;
    case CVT_addT2SOImmNotOperands:
      static_cast<ARMOperand*>(Operands[*(p + 1)])->addT2SOImmNotOperands(Inst, 1);
      break;
    case CVT_regCPSR:
      Inst.addOperand(MCOperand::CreateReg(ARM::CPSR));
      break;
    case CVT_imm_14:
      Inst.addOperand(MCOperand::CreateImm(14));
      break;
    case CVT_addMSRMaskOperands:
      static_cast<ARMOperand*>(Operands[*(p + 1)])->addMSRMaskOperands(Inst, 1);
      break;
    case CVT_cvtThumbMultiply:
      cvtThumbMultiply(Inst, Operands);
      break;
    case CVT_regR8:
      Inst.addOperand(MCOperand::CreateReg(ARM::R8));
      break;
    case CVT_regR0:
      Inst.addOperand(MCOperand::CreateReg(ARM::R0));
      break;
    case CVT_addPKHASRImmOperands:
      static_cast<ARMOperand*>(Operands[*(p + 1)])->addPKHASRImmOperands(Inst, 1);
      break;
    case CVT_addImm1_32Operands:
      static_cast<ARMOperand*>(Operands[*(p + 1)])->addImm1_32Operands(Inst, 1);
      break;
    case CVT_imm_4:
      Inst.addOperand(MCOperand::CreateImm(4));
      break;
    case CVT_addShifterImmOperands:
      static_cast<ARMOperand*>(Operands[*(p + 1)])->addShifterImmOperands(Inst, 1);
      break;
    case CVT_addImm1_16Operands:
      static_cast<ARMOperand*>(Operands[*(p + 1)])->addImm1_16Operands(Inst, 1);
      break;
    case CVT_cvtStWriteBackRegT2AddrModeImm8:
      cvtStWriteBackRegT2AddrModeImm8(Inst, Operands);
      break;
    case CVT_cvtStWriteBackRegAddrModeImm12:
      cvtStWriteBackRegAddrModeImm12(Inst, Operands);
      break;
    case CVT_cvtStWriteBackRegAddrMode2:
      cvtStWriteBackRegAddrMode2(Inst, Operands);
      break;
    case CVT_addMemImm8OffsetOperands:
      static_cast<ARMOperand*>(Operands[*(p + 1)])->addMemImm8OffsetOperands(Inst, 2);
      break;
    case CVT_cvtT2StrdPre:
      cvtT2StrdPre(Inst, Operands);
      break;
    case CVT_cvtStrdPre:
      cvtStrdPre(Inst, Operands);
      break;
    case CVT_cvtStWriteBackRegAddrMode3:
      cvtStWriteBackRegAddrMode3(Inst, Operands);
      break;
    case CVT_cvtStExtTWriteBackImm:
      cvtStExtTWriteBackImm(Inst, Operands);
      break;
    case CVT_cvtStExtTWriteBackReg:
      cvtStExtTWriteBackReg(Inst, Operands);
      break;
    case CVT_addRotImmOperands:
      static_cast<ARMOperand*>(Operands[*(p + 1)])->addRotImmOperands(Inst, 1);
      break;
    case CVT_addMemTBBOperands:
      static_cast<ARMOperand*>(Operands[*(p + 1)])->addMemTBBOperands(Inst, 2);
      break;
    case CVT_addMemTBHOperands:
      static_cast<ARMOperand*>(Operands[*(p + 1)])->addMemTBHOperands(Inst, 2);
      break;
    case CVT_addNEONi16splatOperands:
      static_cast<ARMOperand*>(Operands[*(p + 1)])->addNEONi16splatOperands(Inst, 1);
      break;
    case CVT_addNEONi32splatOperands:
      static_cast<ARMOperand*>(Operands[*(p + 1)])->addNEONi32splatOperands(Inst, 1);
      break;
    case CVT_addFBits16Operands:
      static_cast<ARMOperand*>(Operands[*(p + 1)])->addFBits16Operands(Inst, 1);
      break;
    case CVT_addFBits32Operands:
      static_cast<ARMOperand*>(Operands[*(p + 1)])->addFBits32Operands(Inst, 1);
      break;
    case CVT_addVectorIndex16Operands:
      static_cast<ARMOperand*>(Operands[*(p + 1)])->addVectorIndex16Operands(Inst, 1);
      break;
    case CVT_addVectorIndex32Operands:
      static_cast<ARMOperand*>(Operands[*(p + 1)])->addVectorIndex32Operands(Inst, 1);
      break;
    case CVT_addVectorIndex8Operands:
      static_cast<ARMOperand*>(Operands[*(p + 1)])->addVectorIndex8Operands(Inst, 1);
      break;
    case CVT_addVecListOperands:
      static_cast<ARMOperand*>(Operands[*(p + 1)])->addVecListOperands(Inst, 1);
      break;
    case CVT_addAlignedMemoryOperands:
      static_cast<ARMOperand*>(Operands[*(p + 1)])->addAlignedMemoryOperands(Inst, 2);
      break;
    case CVT_addVecListIndexedOperands:
      static_cast<ARMOperand*>(Operands[*(p + 1)])->addVecListIndexedOperands(Inst, 2);
      break;
    case CVT_cvtVLDwbFixed:
      cvtVLDwbFixed(Inst, Operands);
      break;
    case CVT_cvtVLDwbRegister:
      cvtVLDwbRegister(Inst, Operands);
      break;
    case CVT_addDPRRegListOperands:
      static_cast<ARMOperand*>(Operands[*(p + 1)])->addDPRRegListOperands(Inst, 1);
      break;
    case CVT_addSPRRegListOperands:
      static_cast<ARMOperand*>(Operands[*(p + 1)])->addSPRRegListOperands(Inst, 1);
      break;
    case CVT_addFPImmOperands:
      static_cast<ARMOperand*>(Operands[*(p + 1)])->addFPImmOperands(Inst, 1);
      break;
    case CVT_addNEONi32vmovOperands:
      static_cast<ARMOperand*>(Operands[*(p + 1)])->addNEONi32vmovOperands(Inst, 1);
      break;
    case CVT_addNEONi32vmovNegOperands:
      static_cast<ARMOperand*>(Operands[*(p + 1)])->addNEONi32vmovNegOperands(Inst, 1);
      break;
    case CVT_addNEONi64splatOperands:
      static_cast<ARMOperand*>(Operands[*(p + 1)])->addNEONi64splatOperands(Inst, 1);
      break;
    case CVT_addNEONi8splatOperands:
      static_cast<ARMOperand*>(Operands[*(p + 1)])->addNEONi8splatOperands(Inst, 1);
      break;
    case CVT_cvtVSTwbFixed:
      cvtVSTwbFixed(Inst, Operands);
      break;
    case CVT_cvtVSTwbRegister:
      cvtVSTwbRegister(Inst, Operands);
      break;
    case CVT_imm_2:
      Inst.addOperand(MCOperand::CreateImm(2));
      break;
    case CVT_imm_3:
      Inst.addOperand(MCOperand::CreateImm(3));
      break;
    }
  }
}

void ARMAsmParser::
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
    case CVT_addCCOutOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_addCondCodeOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 2;
      break;
    case CVT_addRegShiftedRegOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 3;
      break;
    case CVT_addImmOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_addRegShiftedImmOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 2;
      break;
    case CVT_addImm0_508s4Operands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_regSP:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      ++NumMCOperands;
      break;
    case CVT_addImm0_508s4NegOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_addImm0_4095NegOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_addT2SOImmNegOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_addARMSOImmNegOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_addImm0_1020s4Operands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_addAdrLabelOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_addARMSOImmNotOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_addImmThumbSROperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_addBitfieldOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_addCoprocNumOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_addCoprocRegOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_imm_0:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_addProcIFlagsOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_imm_15:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_addMemBarrierOptOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_imm_1:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_addITCondCodeOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_addITMaskOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_addAddrMode5Operands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 2;
      break;
    case CVT_addMemNoOffsetOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_addCoprocOptionOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_addPostIdxImm8s4Operands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_addRegListOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_addMemThumbRIs4Operands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 2;
      break;
    case CVT_addMemThumbRROperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 2;
      break;
    case CVT_addMemThumbSPIOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 2;
      break;
    case CVT_addMemPCRelImm12Operands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_addMemImm12OffsetOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 2;
      break;
    case CVT_addMemNegImm8OffsetOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 2;
      break;
    case CVT_addMemRegOffsetOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 3;
      break;
    case CVT_addMemUImm12OffsetOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 2;
      break;
    case CVT_addT2MemRegOffsetOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 3;
      break;
    case CVT_addAM2OffsetImmOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 2;
      break;
    case CVT_addPostIdxRegShiftedOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 2;
      break;
    case CVT_addMemThumbRIs1Operands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 2;
      break;
    case CVT_addMemPosImm8OffsetOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 2;
      break;
    case CVT_addMemImm8s4OffsetOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 2;
      break;
    case CVT_addAddrMode3Operands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 3;
      break;
    case CVT_addAM3OffsetOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 2;
      break;
    case CVT_addMemImm0_1020s4OffsetOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 2;
      break;
    case CVT_addMemThumbRIs2Operands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 2;
      break;
    case CVT_reg0:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      ++NumMCOperands;
      break;
    case CVT_addT2SOImmNotOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_regCPSR:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      ++NumMCOperands;
      break;
    case CVT_imm_14:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_addMSRMaskOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_regR8:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      ++NumMCOperands;
      break;
    case CVT_regR0:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      ++NumMCOperands;
      break;
    case CVT_addPKHASRImmOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_addImm1_32Operands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_imm_4:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_addShifterImmOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_addImm1_16Operands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_addMemImm8OffsetOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 2;
      break;
    case CVT_addRotImmOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_addMemTBBOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 2;
      break;
    case CVT_addMemTBHOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 2;
      break;
    case CVT_addNEONi16splatOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_addNEONi32splatOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_addFBits16Operands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_addFBits32Operands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_addVectorIndex16Operands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_addVectorIndex32Operands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_addVectorIndex8Operands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_addVecListOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_addAlignedMemoryOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 2;
      break;
    case CVT_addVecListIndexedOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 2;
      break;
    case CVT_addDPRRegListOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_addSPRRegListOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_addFPImmOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_addNEONi32vmovOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_addNEONi32vmovNegOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_addNEONi64splatOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_addNEONi8splatOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_imm_2:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_3:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    }
  }
}

namespace {

/// MatchClassKind - The kinds of classes which participate in
/// instruction matching.
enum MatchClassKind {
  InvalidMatchClass = 0,
  MCK__EXCLAIM_, // '!'
  MCK__35_0, // '#0'
  MCK__DOT_16, // '.16'
  MCK__DOT_8, // '.8'
  MCK__DOT_d, // '.d'
  MCK__DOT_f, // '.f'
  MCK__DOT_f16, // '.f16'
  MCK__DOT_f32, // '.f32'
  MCK__DOT_32, // '.32'
  MCK__DOT_f64, // '.f64'
  MCK__DOT_64, // '.64'
  MCK__DOT_p16, // '.p16'
  MCK__DOT_p8, // '.p8'
  MCK__DOT_s16, // '.s16'
  MCK__DOT_i16, // '.i16'
  MCK__DOT_s32, // '.s32'
  MCK__DOT_s64, // '.s64'
  MCK__DOT_s8, // '.s8'
  MCK__DOT_i8, // '.i8'
  MCK__DOT_u32, // '.u32'
  MCK__DOT_i32, // '.i32'
  MCK__DOT_u64, // '.u64'
  MCK__DOT_i64, // '.i64'
  MCK__DOT_u16, // '.u16'
  MCK__DOT_u8, // '.u8'
  MCK__DOT_w, // '.w'
  MCK_APSR_95_nzcv, // 'APSR_nzcv'
  MCK__91_, // '['
  MCK__93_, // ']'
  MCK__94_, // '^'
  MCK__123_, // '{'
  MCK__125_, // '}'
  MCK_Reg0, // derived register class
  MCK_tGPR, // register class 'tGPR'
  MCK_Reg9, // derived register class
  MCK_Reg8, // derived register class
  MCK_Reg6, // derived register class
  MCK_tcGPR, // register class 'tcGPR'
  MCK_rGPR, // register class 'rGPR'
  MCK_GPRsp, // register class 'GPRsp,SP'
  MCK_LR, // register class 'LR'
  MCK_GPRnopc, // register class 'GPRnopc'
  MCK_PC, // register class 'PC'
  MCK_hGPR, // register class 'hGPR'
  MCK_GPR, // register class 'GPR'
  MCK_SPR_8, // register class 'SPR_8'
  MCK_SPR, // register class 'SPR'
  MCK_DPR_8, // register class 'DPR_8'
  MCK_DPR_VFP2, // register class 'DPR_VFP2'
  MCK_DPR, // register class 'DPR'
  MCK_QPR_8, // register class 'QPR_8'
  MCK_Reg24, // derived register class
  MCK_Reg25, // derived register class
  MCK_QPR_VFP2, // register class 'QPR_VFP2'
  MCK_Reg22, // derived register class
  MCK_Reg23, // derived register class
  MCK_QPR, // register class 'QPR'
  MCK_DPair, // register class 'DPair'
  MCK_CCR, // register class 'CCR,CPSR'
  MCK_APSR, // register class 'APSR'
  MCK_SPSR, // register class 'SPSR'
  MCK_FPSCR, // register class 'FPSCR'
  MCK_FPSID, // register class 'FPSID'
  MCK_MVFR1, // register class 'MVFR1'
  MCK_MVFR0, // register class 'MVFR0'
  MCK_FPEXC, // register class 'FPEXC'
  MCK_Reg34, // derived register class
  MCK_Reg35, // derived register class
  MCK_Reg36, // derived register class
  MCK_Reg37, // derived register class
  MCK_Reg46, // derived register class
  MCK_Reg47, // derived register class
  MCK_Reg44, // derived register class
  MCK_Reg45, // derived register class
  MCK_Reg42, // derived register class
  MCK_Reg43, // derived register class
  MCK_Reg40, // derived register class
  MCK_Reg41, // derived register class
  MCK_QQPR, // register class 'QQPR'
  MCK_DQuad, // register class 'DQuad'
  MCK_Reg48, // derived register class
  MCK_Reg49, // derived register class
  MCK_Reg50, // derived register class
  MCK_Reg51, // derived register class
  MCK_DPairSpc, // register class 'DPairSpc'
  MCK_Reg53, // derived register class
  MCK_Reg54, // derived register class
  MCK_Reg55, // derived register class
  MCK_Reg56, // derived register class
  MCK_Reg57, // derived register class
  MCK_Reg58, // derived register class
  MCK_Reg59, // derived register class
  MCK_Reg60, // derived register class
  MCK_QQQQPR, // register class 'QQQQPR'
  MCK_Reg62, // derived register class
  MCK_Reg66, // derived register class
  MCK_Reg67, // derived register class
  MCK_Reg63, // derived register class
  MCK_Reg68, // derived register class
  MCK_Reg69, // derived register class
  MCK_Reg71, // derived register class
  MCK_Reg70, // derived register class
  MCK_Reg64, // derived register class
  MCK_GPRPair, // register class 'GPRPair'
  MCK_Reg79, // derived register class
  MCK_Reg80, // derived register class
  MCK_Reg81, // derived register class
  MCK_Reg82, // derived register class
  MCK_Reg83, // derived register class
  MCK_Reg84, // derived register class
  MCK_Reg72, // derived register class
  MCK_Reg73, // derived register class
  MCK_Reg85, // derived register class
  MCK_Reg74, // derived register class
  MCK_Reg86, // derived register class
  MCK_Reg75, // derived register class
  MCK_Reg76, // derived register class
  MCK_Reg87, // derived register class
  MCK_Reg77, // derived register class
  MCK_Reg88, // derived register class
  MCK_DTriple, // register class 'DTriple'
  MCK_Reg89, // derived register class
  MCK_Reg90, // derived register class
  MCK_Reg91, // derived register class
  MCK_Reg92, // derived register class
  MCK_Reg93, // derived register class
  MCK_Reg94, // derived register class
  MCK_DTripleSpc, // register class 'DTripleSpc,DQuadSpc'
  MCK_Reg96, // derived register class
  MCK_Reg97, // derived register class
  MCK_Reg98, // derived register class
  MCK_Reg99, // derived register class
  MCK_Reg100, // derived register class
  MCK_Reg101, // derived register class
  MCK_Reg102, // derived register class
  MCK_AM2OffsetImm, // user defined class 'AM2OffsetImmAsmOperand'
  MCK_AM3Offset, // user defined class 'AM3OffsetAsmOperand'
  MCK_AddrMode2, // user defined class 'AddrMode2AsmOperand'
  MCK_AddrMode3, // user defined class 'AddrMode3AsmOperand'
  MCK_AddrMode5, // user defined class 'AddrMode5AsmOperand'
  MCK_AlignedMemory, // user defined class 'AddrMode6AsmOperand'
  MCK_AdrLabel, // user defined class 'AdrLabelAsmOperand'
  MCK_Bitfield, // user defined class 'BitfieldAsmOperand'
  MCK_CCOut, // user defined class 'CCOutOperand'
  MCK_CondCode, // user defined class 'CondCodeOperand'
  MCK_CoprocNum, // user defined class 'CoprocNumAsmOperand'
  MCK_CoprocOption, // user defined class 'CoprocOptionAsmOperand'
  MCK_CoprocReg, // user defined class 'CoprocRegAsmOperand'
  MCK_DPRRegList, // user defined class 'DPRRegListAsmOperand'
  MCK_FPImm, // user defined class 'FPImmOperand'
  MCK_Imm0_15, // user defined class 'Imm0_15AsmOperand'
  MCK_Imm0_1, // user defined class 'Imm0_1AsmOperand'
  MCK_Imm0_255, // user defined class 'Imm0_255AsmOperand'
  MCK_Imm0_31, // user defined class 'Imm0_31AsmOperand'
  MCK_Imm0_32, // user defined class 'Imm0_32AsmOperand'
  MCK_Imm0_3, // user defined class 'Imm0_3AsmOperand'
  MCK_Imm0_63, // user defined class 'Imm0_63AsmOperand'
  MCK_Imm0_65535, // user defined class 'Imm0_65535AsmOperand'
  MCK_Imm0_65535Expr, // user defined class 'Imm0_65535ExprAsmOperand'
  MCK_Imm0_7, // user defined class 'Imm0_7AsmOperand'
  MCK_Imm16, // user defined class 'Imm16AsmOperand'
  MCK_Imm1_15, // user defined class 'Imm1_15AsmOperand'
  MCK_Imm1_16, // user defined class 'Imm1_16AsmOperand'
  MCK_Imm1_31, // user defined class 'Imm1_31AsmOperand'
  MCK_Imm1_32, // user defined class 'Imm1_32AsmOperand'
  MCK_Imm1_7, // user defined class 'Imm1_7AsmOperand'
  MCK_Imm24bit, // user defined class 'Imm24bitAsmOperand'
  MCK_Imm32, // user defined class 'Imm32AsmOperand'
  MCK_Imm8, // user defined class 'Imm8AsmOperand'
  MCK_Imm, // user defined class 'ImmAsmOperand'
  MCK_MSRMask, // user defined class 'MSRMaskOperand'
  MCK_MemBarrierOpt, // user defined class 'MemBarrierOptOperand'
  MCK_MemImm0_1020s4Offset, // user defined class 'MemImm0_1020s4OffsetAsmOperand'
  MCK_MemImm12Offset, // user defined class 'MemImm12OffsetAsmOperand'
  MCK_MemImm8Offset, // user defined class 'MemImm8OffsetAsmOperand'
  MCK_MemImm8s4Offset, // user defined class 'MemImm8s4OffsetAsmOperand'
  MCK_MemNegImm8Offset, // user defined class 'MemNegImm8OffsetAsmOperand'
  MCK_MemNoOffset, // user defined class 'MemNoOffsetAsmOperand'
  MCK_MemPosImm8Offset, // user defined class 'MemPosImm8OffsetAsmOperand'
  MCK_MemRegOffset, // user defined class 'MemRegOffsetAsmOperand'
  MCK_PKHASRImm, // user defined class 'PKHASRAsmOperand'
  MCK_PKHLSLImm, // user defined class 'PKHLSLAsmOperand'
  MCK_PostIdxImm8, // user defined class 'PostIdxImm8AsmOperand'
  MCK_PostIdxImm8s4, // user defined class 'PostIdxImm8s4AsmOperand'
  MCK_PostIdxReg, // user defined class 'PostIdxRegAsmOperand'
  MCK_PostIdxRegShifted, // user defined class 'PostIdxRegShiftedAsmOperand'
  MCK_ProcIFlags, // user defined class 'ProcIFlagsOperand'
  MCK_RegList, // user defined class 'RegListAsmOperand'
  MCK_RotImm, // user defined class 'RotImmAsmOperand'
  MCK_ARMSOImm, // user defined class 'SOImmAsmOperand'
  MCK_SPRRegList, // user defined class 'SPRRegListAsmOperand'
  MCK_SetEndImm, // user defined class 'SetEndAsmOperand'
  MCK_RegShiftedImm, // user defined class 'ShiftedImmAsmOperand'
  MCK_RegShiftedReg, // user defined class 'ShiftedRegAsmOperand'
  MCK_ShifterImm, // user defined class 'ShifterImmAsmOperand'
  MCK_ImmThumbSR, // user defined class 'ThumbSRImmAsmOperand'
  MCK_VecListDPairAllLanes, // user defined class 'VecListDPairAllLanesAsmOperand'
  MCK_VecListDPair, // user defined class 'VecListDPairAsmOperand'
  MCK_VecListDPairSpacedAllLanes, // user defined class 'VecListDPairSpacedAllLanesAsmOperand'
  MCK_VecListDPairSpaced, // user defined class 'VecListDPairSpacedAsmOperand'
  MCK_VecListFourDAllLanes, // user defined class 'VecListFourDAllLanesAsmOperand'
  MCK_VecListFourD, // user defined class 'VecListFourDAsmOperand'
  MCK_VecListFourDByteIndexed, // user defined class 'VecListFourDByteIndexAsmOperand'
  MCK_VecListFourDHWordIndexed, // user defined class 'VecListFourDHWordIndexAsmOperand'
  MCK_VecListFourDWordIndexed, // user defined class 'VecListFourDWordIndexAsmOperand'
  MCK_VecListFourQAllLanes, // user defined class 'VecListFourQAllLanesAsmOperand'
  MCK_VecListFourQ, // user defined class 'VecListFourQAsmOperand'
  MCK_VecListFourQHWordIndexed, // user defined class 'VecListFourQHWordIndexAsmOperand'
  MCK_VecListFourQWordIndexed, // user defined class 'VecListFourQWordIndexAsmOperand'
  MCK_VecListOneDAllLanes, // user defined class 'VecListOneDAllLanesAsmOperand'
  MCK_VecListOneD, // user defined class 'VecListOneDAsmOperand'
  MCK_VecListOneDByteIndexed, // user defined class 'VecListOneDByteIndexAsmOperand'
  MCK_VecListOneDHWordIndexed, // user defined class 'VecListOneDHWordIndexAsmOperand'
  MCK_VecListOneDWordIndexed, // user defined class 'VecListOneDWordIndexAsmOperand'
  MCK_VecListThreeDAllLanes, // user defined class 'VecListThreeDAllLanesAsmOperand'
  MCK_VecListThreeD, // user defined class 'VecListThreeDAsmOperand'
  MCK_VecListThreeDByteIndexed, // user defined class 'VecListThreeDByteIndexAsmOperand'
  MCK_VecListThreeDHWordIndexed, // user defined class 'VecListThreeDHWordIndexAsmOperand'
  MCK_VecListThreeDWordIndexed, // user defined class 'VecListThreeDWordIndexAsmOperand'
  MCK_VecListThreeQAllLanes, // user defined class 'VecListThreeQAllLanesAsmOperand'
  MCK_VecListThreeQ, // user defined class 'VecListThreeQAsmOperand'
  MCK_VecListThreeQHWordIndexed, // user defined class 'VecListThreeQHWordIndexAsmOperand'
  MCK_VecListThreeQWordIndexed, // user defined class 'VecListThreeQWordIndexAsmOperand'
  MCK_VecListTwoDByteIndexed, // user defined class 'VecListTwoDByteIndexAsmOperand'
  MCK_VecListTwoDHWordIndexed, // user defined class 'VecListTwoDHWordIndexAsmOperand'
  MCK_VecListTwoDWordIndexed, // user defined class 'VecListTwoDWordIndexAsmOperand'
  MCK_VecListTwoQHWordIndexed, // user defined class 'VecListTwoQHWordIndexAsmOperand'
  MCK_VecListTwoQWordIndexed, // user defined class 'VecListTwoQWordIndexAsmOperand'
  MCK_VectorIndex16, // user defined class 'VectorIndex16Operand'
  MCK_VectorIndex32, // user defined class 'VectorIndex32Operand'
  MCK_VectorIndex8, // user defined class 'VectorIndex8Operand'
  MCK_MemTBB, // user defined class 'addrmode_tbb_asmoperand'
  MCK_MemTBH, // user defined class 'addrmode_tbh_asmoperand'
  MCK_FBits16, // user defined class 'fbits16_asm_operand'
  MCK_FBits32, // user defined class 'fbits32_asm_operand'
  MCK_Imm0_4095, // user defined class 'imm0_4095_asmoperand'
  MCK_Imm0_4095Neg, // user defined class 'imm0_4095_neg_asmoperand'
  MCK_ITMask, // user defined class 'it_mask_asmoperand'
  MCK_ITCondCode, // user defined class 'it_pred_asmoperand'
  MCK_NEONi16splat, // user defined class 'nImmSplatI16AsmOperand'
  MCK_NEONi32splat, // user defined class 'nImmSplatI32AsmOperand'
  MCK_NEONi64splat, // user defined class 'nImmSplatI64AsmOperand'
  MCK_NEONi8splat, // user defined class 'nImmSplatI8AsmOperand'
  MCK_NEONi32vmov, // user defined class 'nImmVMOVI32AsmOperand'
  MCK_NEONi32vmovNeg, // user defined class 'nImmVMOVI32NegAsmOperand'
  MCK_ShrImm16, // user defined class 'shr_imm16_asm_operand'
  MCK_ShrImm32, // user defined class 'shr_imm32_asm_operand'
  MCK_ShrImm64, // user defined class 'shr_imm64_asm_operand'
  MCK_ShrImm8, // user defined class 'shr_imm8_asm_operand'
  MCK_ARMSOImmNeg, // user defined class 'so_imm_neg_asmoperand'
  MCK_ARMSOImmNot, // user defined class 'so_imm_not_asmoperand'
  MCK_T2SOImm, // user defined class 't2_so_imm_asmoperand'
  MCK_T2SOImmNeg, // user defined class 't2_so_imm_neg_asmoperand'
  MCK_T2SOImmNot, // user defined class 't2_so_imm_not_asmoperand'
  MCK_MemUImm12Offset, // user defined class 't2addrmode_imm12_asmoperand'
  MCK_T2MemRegOffset, // user defined class 't2addrmode_so_reg_asmoperand'
  MCK_Imm8s4, // user defined class 't2am_imm8s4_offset_asmoperand'
  MCK_MemPCRelImm12, // user defined class 't2ldr_pcrel_imm12_asmoperand'
  MCK_MemThumbRIs1, // user defined class 't_addrmode_is1_asm_operand'
  MCK_MemThumbRIs2, // user defined class 't_addrmode_is2_asm_operand'
  MCK_MemThumbRIs4, // user defined class 't_addrmode_is4_asm_operand'
  MCK_MemThumbRR, // user defined class 't_addrmode_rr_asm_operand'
  MCK_MemThumbSPI, // user defined class 't_addrmode_sp_asm_operand'
  MCK_Imm0_1020s4, // user defined class 't_imm0_1020s4_asmoperand'
  MCK_Imm0_508s4, // user defined class 't_imm0_508s4_asmoperand'
  MCK_Imm0_508s4Neg, // user defined class 't_imm0_508s4_neg_asmoperand'
  NumMatchClassKinds
};

}

static MatchClassKind matchTokenString(StringRef Name) {
  switch (Name.size()) {
  default: break;
  case 1:	 // 6 strings to match.
    switch (Name[0]) {
    default: break;
    case '!':	 // 1 string to match.
      return MCK__EXCLAIM_;	 // "!"
    case '[':	 // 1 string to match.
      return MCK__91_;	 // "["
    case ']':	 // 1 string to match.
      return MCK__93_;	 // "]"
    case '^':	 // 1 string to match.
      return MCK__94_;	 // "^"
    case '{':	 // 1 string to match.
      return MCK__123_;	 // "{"
    case '}':	 // 1 string to match.
      return MCK__125_;	 // "}"
    }
    break;
  case 2:	 // 5 strings to match.
    switch (Name[0]) {
    default: break;
    case '#':	 // 1 string to match.
      if (Name[1] != '0')
        break;
      return MCK__35_0;	 // "#0"
    case '.':	 // 4 strings to match.
      switch (Name[1]) {
      default: break;
      case '8':	 // 1 string to match.
        return MCK__DOT_8;	 // ".8"
      case 'd':	 // 1 string to match.
        return MCK__DOT_d;	 // ".d"
      case 'f':	 // 1 string to match.
        return MCK__DOT_f;	 // ".f"
      case 'w':	 // 1 string to match.
        return MCK__DOT_w;	 // ".w"
      }
      break;
    }
    break;
  case 3:	 // 7 strings to match.
    if (Name[0] != '.')
      break;
    switch (Name[1]) {
    default: break;
    case '1':	 // 1 string to match.
      if (Name[2] != '6')
        break;
      return MCK__DOT_16;	 // ".16"
    case '3':	 // 1 string to match.
      if (Name[2] != '2')
        break;
      return MCK__DOT_32;	 // ".32"
    case '6':	 // 1 string to match.
      if (Name[2] != '4')
        break;
      return MCK__DOT_64;	 // ".64"
    case 'i':	 // 1 string to match.
      if (Name[2] != '8')
        break;
      return MCK__DOT_i8;	 // ".i8"
    case 'p':	 // 1 string to match.
      if (Name[2] != '8')
        break;
      return MCK__DOT_p8;	 // ".p8"
    case 's':	 // 1 string to match.
      if (Name[2] != '8')
        break;
      return MCK__DOT_s8;	 // ".s8"
    case 'u':	 // 1 string to match.
      if (Name[2] != '8')
        break;
      return MCK__DOT_u8;	 // ".u8"
    }
    break;
  case 4:	 // 13 strings to match.
    if (Name[0] != '.')
      break;
    switch (Name[1]) {
    default: break;
    case 'f':	 // 3 strings to match.
      switch (Name[2]) {
      default: break;
      case '1':	 // 1 string to match.
        if (Name[3] != '6')
          break;
        return MCK__DOT_f16;	 // ".f16"
      case '3':	 // 1 string to match.
        if (Name[3] != '2')
          break;
        return MCK__DOT_f32;	 // ".f32"
      case '6':	 // 1 string to match.
        if (Name[3] != '4')
          break;
        return MCK__DOT_f64;	 // ".f64"
      }
      break;
    case 'i':	 // 3 strings to match.
      switch (Name[2]) {
      default: break;
      case '1':	 // 1 string to match.
        if (Name[3] != '6')
          break;
        return MCK__DOT_i16;	 // ".i16"
      case '3':	 // 1 string to match.
        if (Name[3] != '2')
          break;
        return MCK__DOT_i32;	 // ".i32"
      case '6':	 // 1 string to match.
        if (Name[3] != '4')
          break;
        return MCK__DOT_i64;	 // ".i64"
      }
      break;
    case 'p':	 // 1 string to match.
      if (memcmp(Name.data()+2, "16", 2))
        break;
      return MCK__DOT_p16;	 // ".p16"
    case 's':	 // 3 strings to match.
      switch (Name[2]) {
      default: break;
      case '1':	 // 1 string to match.
        if (Name[3] != '6')
          break;
        return MCK__DOT_s16;	 // ".s16"
      case '3':	 // 1 string to match.
        if (Name[3] != '2')
          break;
        return MCK__DOT_s32;	 // ".s32"
      case '6':	 // 1 string to match.
        if (Name[3] != '4')
          break;
        return MCK__DOT_s64;	 // ".s64"
      }
      break;
    case 'u':	 // 3 strings to match.
      switch (Name[2]) {
      default: break;
      case '1':	 // 1 string to match.
        if (Name[3] != '6')
          break;
        return MCK__DOT_u16;	 // ".u16"
      case '3':	 // 1 string to match.
        if (Name[3] != '2')
          break;
        return MCK__DOT_u32;	 // ".u32"
      case '6':	 // 1 string to match.
        if (Name[3] != '4')
          break;
        return MCK__DOT_u64;	 // ".u64"
      }
      break;
    }
    break;
  case 9:	 // 1 string to match.
    if (memcmp(Name.data()+0, "APSR_nzcv", 9))
      break;
    return MCK_APSR_95_nzcv;	 // "APSR_nzcv"
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

  case MCK__DOT_d:
    switch (B) {
    default: return false;
    case MCK__DOT_f64: return true;
    case MCK__DOT_64: return true;
    }

  case MCK__DOT_f:
    switch (B) {
    default: return false;
    case MCK__DOT_f32: return true;
    case MCK__DOT_32: return true;
    }

  case MCK__DOT_f32:
    return B == MCK__DOT_32;

  case MCK__DOT_f64:
    return B == MCK__DOT_64;

  case MCK__DOT_p16:
    return B == MCK__DOT_16;

  case MCK__DOT_p8:
    return B == MCK__DOT_8;

  case MCK__DOT_s16:
    switch (B) {
    default: return false;
    case MCK__DOT_16: return true;
    case MCK__DOT_i16: return true;
    }

  case MCK__DOT_i16:
    return B == MCK__DOT_16;

  case MCK__DOT_s32:
    switch (B) {
    default: return false;
    case MCK__DOT_32: return true;
    case MCK__DOT_i32: return true;
    }

  case MCK__DOT_s64:
    switch (B) {
    default: return false;
    case MCK__DOT_64: return true;
    case MCK__DOT_i64: return true;
    }

  case MCK__DOT_s8:
    switch (B) {
    default: return false;
    case MCK__DOT_8: return true;
    case MCK__DOT_i8: return true;
    }

  case MCK__DOT_i8:
    return B == MCK__DOT_8;

  case MCK__DOT_u32:
    switch (B) {
    default: return false;
    case MCK__DOT_32: return true;
    case MCK__DOT_i32: return true;
    }

  case MCK__DOT_i32:
    return B == MCK__DOT_32;

  case MCK__DOT_u64:
    switch (B) {
    default: return false;
    case MCK__DOT_64: return true;
    case MCK__DOT_i64: return true;
    }

  case MCK__DOT_i64:
    return B == MCK__DOT_64;

  case MCK__DOT_u16:
    switch (B) {
    default: return false;
    case MCK__DOT_16: return true;
    case MCK__DOT_i16: return true;
    }

  case MCK__DOT_u8:
    switch (B) {
    default: return false;
    case MCK__DOT_8: return true;
    case MCK__DOT_i8: return true;
    }

  case MCK_Reg0:
    switch (B) {
    default: return false;
    case MCK_tGPR: return true;
    case MCK_tcGPR: return true;
    case MCK_rGPR: return true;
    case MCK_GPRnopc: return true;
    case MCK_GPR: return true;
    }

  case MCK_tGPR:
    switch (B) {
    default: return false;
    case MCK_rGPR: return true;
    case MCK_GPRnopc: return true;
    case MCK_GPR: return true;
    }

  case MCK_Reg9:
    switch (B) {
    default: return false;
    case MCK_Reg8: return true;
    case MCK_Reg6: return true;
    case MCK_tcGPR: return true;
    case MCK_rGPR: return true;
    case MCK_GPRnopc: return true;
    case MCK_hGPR: return true;
    case MCK_GPR: return true;
    }

  case MCK_Reg8:
    switch (B) {
    default: return false;
    case MCK_Reg6: return true;
    case MCK_rGPR: return true;
    case MCK_GPRnopc: return true;
    case MCK_hGPR: return true;
    case MCK_GPR: return true;
    }

  case MCK_Reg6:
    switch (B) {
    default: return false;
    case MCK_GPRnopc: return true;
    case MCK_hGPR: return true;
    case MCK_GPR: return true;
    }

  case MCK_tcGPR:
    switch (B) {
    default: return false;
    case MCK_rGPR: return true;
    case MCK_GPRnopc: return true;
    case MCK_GPR: return true;
    }

  case MCK_rGPR:
    switch (B) {
    default: return false;
    case MCK_GPRnopc: return true;
    case MCK_GPR: return true;
    }

  case MCK_GPRsp:
    switch (B) {
    default: return false;
    case MCK_Reg6: return true;
    case MCK_GPRnopc: return true;
    case MCK_hGPR: return true;
    case MCK_GPR: return true;
    }

  case MCK_LR:
    switch (B) {
    default: return false;
    case MCK_Reg8: return true;
    case MCK_Reg6: return true;
    case MCK_rGPR: return true;
    case MCK_GPRnopc: return true;
    case MCK_hGPR: return true;
    case MCK_GPR: return true;
    }

  case MCK_GPRnopc:
    return B == MCK_GPR;

  case MCK_PC:
    switch (B) {
    default: return false;
    case MCK_hGPR: return true;
    case MCK_GPR: return true;
    }

  case MCK_hGPR:
    return B == MCK_GPR;

  case MCK_SPR_8:
    return B == MCK_SPR;

  case MCK_DPR_8:
    switch (B) {
    default: return false;
    case MCK_DPR_VFP2: return true;
    case MCK_DPR: return true;
    }

  case MCK_DPR_VFP2:
    return B == MCK_DPR;

  case MCK_QPR_8:
    switch (B) {
    default: return false;
    case MCK_Reg24: return true;
    case MCK_Reg25: return true;
    case MCK_QPR_VFP2: return true;
    case MCK_Reg22: return true;
    case MCK_Reg23: return true;
    case MCK_QPR: return true;
    case MCK_DPair: return true;
    }

  case MCK_Reg24:
    switch (B) {
    default: return false;
    case MCK_Reg25: return true;
    case MCK_Reg22: return true;
    case MCK_Reg23: return true;
    case MCK_DPair: return true;
    }

  case MCK_Reg25:
    switch (B) {
    default: return false;
    case MCK_Reg22: return true;
    case MCK_Reg23: return true;
    case MCK_DPair: return true;
    }

  case MCK_QPR_VFP2:
    switch (B) {
    default: return false;
    case MCK_Reg22: return true;
    case MCK_Reg23: return true;
    case MCK_QPR: return true;
    case MCK_DPair: return true;
    }

  case MCK_Reg22:
    switch (B) {
    default: return false;
    case MCK_Reg23: return true;
    case MCK_DPair: return true;
    }

  case MCK_Reg23:
    return B == MCK_DPair;

  case MCK_QPR:
    return B == MCK_DPair;

  case MCK_Reg34:
    switch (B) {
    default: return false;
    case MCK_Reg35: return true;
    case MCK_Reg36: return true;
    case MCK_Reg37: return true;
    case MCK_Reg46: return true;
    case MCK_Reg47: return true;
    case MCK_Reg44: return true;
    case MCK_Reg45: return true;
    case MCK_Reg42: return true;
    case MCK_Reg43: return true;
    case MCK_Reg40: return true;
    case MCK_Reg41: return true;
    case MCK_QQPR: return true;
    case MCK_DQuad: return true;
    }

  case MCK_Reg35:
    switch (B) {
    default: return false;
    case MCK_Reg36: return true;
    case MCK_Reg37: return true;
    case MCK_Reg44: return true;
    case MCK_Reg45: return true;
    case MCK_Reg42: return true;
    case MCK_Reg43: return true;
    case MCK_Reg40: return true;
    case MCK_Reg41: return true;
    case MCK_QQPR: return true;
    case MCK_DQuad: return true;
    }

  case MCK_Reg36:
    switch (B) {
    default: return false;
    case MCK_Reg37: return true;
    case MCK_Reg42: return true;
    case MCK_Reg43: return true;
    case MCK_Reg40: return true;
    case MCK_Reg41: return true;
    case MCK_QQPR: return true;
    case MCK_DQuad: return true;
    }

  case MCK_Reg37:
    switch (B) {
    default: return false;
    case MCK_Reg40: return true;
    case MCK_Reg41: return true;
    case MCK_QQPR: return true;
    case MCK_DQuad: return true;
    }

  case MCK_Reg46:
    switch (B) {
    default: return false;
    case MCK_Reg47: return true;
    case MCK_Reg44: return true;
    case MCK_Reg45: return true;
    case MCK_Reg42: return true;
    case MCK_Reg43: return true;
    case MCK_Reg40: return true;
    case MCK_Reg41: return true;
    case MCK_DQuad: return true;
    }

  case MCK_Reg47:
    switch (B) {
    default: return false;
    case MCK_Reg44: return true;
    case MCK_Reg45: return true;
    case MCK_Reg42: return true;
    case MCK_Reg43: return true;
    case MCK_Reg40: return true;
    case MCK_Reg41: return true;
    case MCK_DQuad: return true;
    }

  case MCK_Reg44:
    switch (B) {
    default: return false;
    case MCK_Reg45: return true;
    case MCK_Reg42: return true;
    case MCK_Reg43: return true;
    case MCK_Reg40: return true;
    case MCK_Reg41: return true;
    case MCK_DQuad: return true;
    }

  case MCK_Reg45:
    switch (B) {
    default: return false;
    case MCK_Reg42: return true;
    case MCK_Reg43: return true;
    case MCK_Reg40: return true;
    case MCK_Reg41: return true;
    case MCK_DQuad: return true;
    }

  case MCK_Reg42:
    switch (B) {
    default: return false;
    case MCK_Reg43: return true;
    case MCK_Reg40: return true;
    case MCK_Reg41: return true;
    case MCK_DQuad: return true;
    }

  case MCK_Reg43:
    switch (B) {
    default: return false;
    case MCK_Reg40: return true;
    case MCK_Reg41: return true;
    case MCK_DQuad: return true;
    }

  case MCK_Reg40:
    switch (B) {
    default: return false;
    case MCK_Reg41: return true;
    case MCK_DQuad: return true;
    }

  case MCK_Reg41:
    return B == MCK_DQuad;

  case MCK_QQPR:
    return B == MCK_DQuad;

  case MCK_Reg48:
    switch (B) {
    default: return false;
    case MCK_Reg49: return true;
    case MCK_Reg50: return true;
    case MCK_Reg51: return true;
    case MCK_DPairSpc: return true;
    }

  case MCK_Reg49:
    switch (B) {
    default: return false;
    case MCK_Reg50: return true;
    case MCK_Reg51: return true;
    case MCK_DPairSpc: return true;
    }

  case MCK_Reg50:
    switch (B) {
    default: return false;
    case MCK_Reg51: return true;
    case MCK_DPairSpc: return true;
    }

  case MCK_Reg51:
    return B == MCK_DPairSpc;

  case MCK_Reg53:
    switch (B) {
    default: return false;
    case MCK_Reg54: return true;
    case MCK_Reg55: return true;
    case MCK_Reg56: return true;
    case MCK_Reg57: return true;
    case MCK_Reg58: return true;
    case MCK_Reg59: return true;
    case MCK_Reg60: return true;
    case MCK_QQQQPR: return true;
    }

  case MCK_Reg54:
    switch (B) {
    default: return false;
    case MCK_Reg55: return true;
    case MCK_Reg56: return true;
    case MCK_Reg57: return true;
    case MCK_Reg58: return true;
    case MCK_Reg59: return true;
    case MCK_Reg60: return true;
    case MCK_QQQQPR: return true;
    }

  case MCK_Reg55:
    switch (B) {
    default: return false;
    case MCK_Reg56: return true;
    case MCK_Reg57: return true;
    case MCK_Reg58: return true;
    case MCK_Reg59: return true;
    case MCK_Reg60: return true;
    case MCK_QQQQPR: return true;
    }

  case MCK_Reg56:
    switch (B) {
    default: return false;
    case MCK_Reg57: return true;
    case MCK_Reg58: return true;
    case MCK_Reg59: return true;
    case MCK_Reg60: return true;
    case MCK_QQQQPR: return true;
    }

  case MCK_Reg57:
    switch (B) {
    default: return false;
    case MCK_Reg58: return true;
    case MCK_Reg59: return true;
    case MCK_Reg60: return true;
    case MCK_QQQQPR: return true;
    }

  case MCK_Reg58:
    switch (B) {
    default: return false;
    case MCK_Reg59: return true;
    case MCK_Reg60: return true;
    case MCK_QQQQPR: return true;
    }

  case MCK_Reg59:
    switch (B) {
    default: return false;
    case MCK_Reg60: return true;
    case MCK_QQQQPR: return true;
    }

  case MCK_Reg60:
    return B == MCK_QQQQPR;

  case MCK_Reg62:
    switch (B) {
    default: return false;
    case MCK_Reg66: return true;
    case MCK_Reg67: return true;
    case MCK_Reg63: return true;
    case MCK_Reg64: return true;
    case MCK_GPRPair: return true;
    }

  case MCK_Reg66:
    switch (B) {
    default: return false;
    case MCK_Reg64: return true;
    case MCK_GPRPair: return true;
    }

  case MCK_Reg67:
    return B == MCK_GPRPair;

  case MCK_Reg63:
    switch (B) {
    default: return false;
    case MCK_Reg64: return true;
    case MCK_GPRPair: return true;
    }

  case MCK_Reg68:
    switch (B) {
    default: return false;
    case MCK_Reg66: return true;
    case MCK_Reg69: return true;
    case MCK_Reg70: return true;
    case MCK_Reg64: return true;
    case MCK_GPRPair: return true;
    }

  case MCK_Reg69:
    switch (B) {
    default: return false;
    case MCK_Reg70: return true;
    case MCK_Reg64: return true;
    case MCK_GPRPair: return true;
    }

  case MCK_Reg71:
    switch (B) {
    default: return false;
    case MCK_Reg67: return true;
    case MCK_Reg70: return true;
    case MCK_GPRPair: return true;
    }

  case MCK_Reg70:
    return B == MCK_GPRPair;

  case MCK_Reg64:
    return B == MCK_GPRPair;

  case MCK_Reg79:
    switch (B) {
    default: return false;
    case MCK_Reg80: return true;
    case MCK_Reg81: return true;
    case MCK_Reg82: return true;
    case MCK_Reg83: return true;
    case MCK_Reg72: return true;
    case MCK_Reg73: return true;
    case MCK_Reg74: return true;
    case MCK_Reg75: return true;
    case MCK_Reg76: return true;
    case MCK_Reg77: return true;
    case MCK_DTriple: return true;
    }

  case MCK_Reg80:
    switch (B) {
    default: return false;
    case MCK_Reg81: return true;
    case MCK_Reg82: return true;
    case MCK_Reg83: return true;
    case MCK_Reg73: return true;
    case MCK_Reg74: return true;
    case MCK_Reg75: return true;
    case MCK_Reg76: return true;
    case MCK_Reg77: return true;
    case MCK_DTriple: return true;
    }

  case MCK_Reg81:
    switch (B) {
    default: return false;
    case MCK_Reg82: return true;
    case MCK_Reg83: return true;
    case MCK_Reg75: return true;
    case MCK_Reg76: return true;
    case MCK_Reg77: return true;
    case MCK_DTriple: return true;
    }

  case MCK_Reg82:
    switch (B) {
    default: return false;
    case MCK_Reg83: return true;
    case MCK_Reg76: return true;
    case MCK_Reg77: return true;
    case MCK_DTriple: return true;
    }

  case MCK_Reg83:
    return B == MCK_DTriple;

  case MCK_Reg84:
    switch (B) {
    default: return false;
    case MCK_Reg72: return true;
    case MCK_Reg73: return true;
    case MCK_Reg85: return true;
    case MCK_Reg74: return true;
    case MCK_Reg86: return true;
    case MCK_Reg75: return true;
    case MCK_Reg76: return true;
    case MCK_Reg87: return true;
    case MCK_Reg77: return true;
    case MCK_Reg88: return true;
    case MCK_DTriple: return true;
    }

  case MCK_Reg72:
    switch (B) {
    default: return false;
    case MCK_Reg73: return true;
    case MCK_Reg74: return true;
    case MCK_Reg75: return true;
    case MCK_Reg76: return true;
    case MCK_Reg77: return true;
    case MCK_DTriple: return true;
    }

  case MCK_Reg73:
    switch (B) {
    default: return false;
    case MCK_Reg74: return true;
    case MCK_Reg75: return true;
    case MCK_Reg76: return true;
    case MCK_Reg77: return true;
    case MCK_DTriple: return true;
    }

  case MCK_Reg85:
    switch (B) {
    default: return false;
    case MCK_Reg74: return true;
    case MCK_Reg86: return true;
    case MCK_Reg75: return true;
    case MCK_Reg76: return true;
    case MCK_Reg87: return true;
    case MCK_Reg77: return true;
    case MCK_Reg88: return true;
    case MCK_DTriple: return true;
    }

  case MCK_Reg74:
    switch (B) {
    default: return false;
    case MCK_Reg75: return true;
    case MCK_Reg76: return true;
    case MCK_Reg77: return true;
    case MCK_DTriple: return true;
    }

  case MCK_Reg86:
    switch (B) {
    default: return false;
    case MCK_Reg75: return true;
    case MCK_Reg76: return true;
    case MCK_Reg87: return true;
    case MCK_Reg77: return true;
    case MCK_Reg88: return true;
    case MCK_DTriple: return true;
    }

  case MCK_Reg75:
    switch (B) {
    default: return false;
    case MCK_Reg76: return true;
    case MCK_Reg77: return true;
    case MCK_DTriple: return true;
    }

  case MCK_Reg76:
    switch (B) {
    default: return false;
    case MCK_Reg77: return true;
    case MCK_DTriple: return true;
    }

  case MCK_Reg87:
    switch (B) {
    default: return false;
    case MCK_Reg77: return true;
    case MCK_Reg88: return true;
    case MCK_DTriple: return true;
    }

  case MCK_Reg77:
    return B == MCK_DTriple;

  case MCK_Reg88:
    return B == MCK_DTriple;

  case MCK_Reg89:
    switch (B) {
    default: return false;
    case MCK_Reg90: return true;
    case MCK_Reg91: return true;
    case MCK_Reg92: return true;
    case MCK_Reg93: return true;
    case MCK_Reg94: return true;
    case MCK_DTripleSpc: return true;
    }

  case MCK_Reg90:
    switch (B) {
    default: return false;
    case MCK_Reg91: return true;
    case MCK_Reg92: return true;
    case MCK_Reg93: return true;
    case MCK_Reg94: return true;
    case MCK_DTripleSpc: return true;
    }

  case MCK_Reg91:
    switch (B) {
    default: return false;
    case MCK_Reg92: return true;
    case MCK_Reg93: return true;
    case MCK_Reg94: return true;
    case MCK_DTripleSpc: return true;
    }

  case MCK_Reg92:
    switch (B) {
    default: return false;
    case MCK_Reg93: return true;
    case MCK_Reg94: return true;
    case MCK_DTripleSpc: return true;
    }

  case MCK_Reg93:
    switch (B) {
    default: return false;
    case MCK_Reg94: return true;
    case MCK_DTripleSpc: return true;
    }

  case MCK_Reg94:
    return B == MCK_DTripleSpc;

  case MCK_Reg96:
    switch (B) {
    default: return false;
    case MCK_Reg46: return true;
    case MCK_Reg47: return true;
    case MCK_Reg44: return true;
    case MCK_Reg45: return true;
    case MCK_Reg42: return true;
    case MCK_Reg43: return true;
    case MCK_Reg40: return true;
    case MCK_Reg41: return true;
    case MCK_DQuad: return true;
    case MCK_Reg97: return true;
    case MCK_Reg98: return true;
    case MCK_Reg99: return true;
    case MCK_Reg100: return true;
    case MCK_Reg101: return true;
    case MCK_Reg102: return true;
    }

  case MCK_Reg97:
    switch (B) {
    default: return false;
    case MCK_Reg47: return true;
    case MCK_Reg44: return true;
    case MCK_Reg45: return true;
    case MCK_Reg42: return true;
    case MCK_Reg43: return true;
    case MCK_Reg40: return true;
    case MCK_Reg41: return true;
    case MCK_DQuad: return true;
    case MCK_Reg98: return true;
    case MCK_Reg99: return true;
    case MCK_Reg100: return true;
    case MCK_Reg101: return true;
    case MCK_Reg102: return true;
    }

  case MCK_Reg98:
    switch (B) {
    default: return false;
    case MCK_Reg45: return true;
    case MCK_Reg42: return true;
    case MCK_Reg43: return true;
    case MCK_Reg40: return true;
    case MCK_Reg41: return true;
    case MCK_DQuad: return true;
    case MCK_Reg99: return true;
    case MCK_Reg100: return true;
    case MCK_Reg101: return true;
    case MCK_Reg102: return true;
    }

  case MCK_Reg99:
    switch (B) {
    default: return false;
    case MCK_Reg42: return true;
    case MCK_Reg43: return true;
    case MCK_Reg40: return true;
    case MCK_Reg41: return true;
    case MCK_DQuad: return true;
    case MCK_Reg100: return true;
    case MCK_Reg101: return true;
    case MCK_Reg102: return true;
    }

  case MCK_Reg100:
    switch (B) {
    default: return false;
    case MCK_Reg43: return true;
    case MCK_Reg40: return true;
    case MCK_Reg41: return true;
    case MCK_DQuad: return true;
    case MCK_Reg101: return true;
    case MCK_Reg102: return true;
    }

  case MCK_Reg101:
    switch (B) {
    default: return false;
    case MCK_Reg41: return true;
    case MCK_DQuad: return true;
    case MCK_Reg102: return true;
    }

  case MCK_Reg102:
    return B == MCK_DQuad;
  }
}

static unsigned validateOperandClass(MCParsedAsmOperand *GOp, MatchClassKind Kind) {
  ARMOperand &Operand = *(ARMOperand*)GOp;
  if (Kind == InvalidMatchClass)
    return MCTargetAsmParser::Match_InvalidOperand;

  if (Operand.isToken())
    return isSubclass(matchTokenString(Operand.getToken()), Kind) ?
             MCTargetAsmParser::Match_Success :
             MCTargetAsmParser::Match_InvalidOperand;

  // 'AM2OffsetImm' class
  if (Kind == MCK_AM2OffsetImm) {
    if (Operand.isAM2OffsetImm())
      return MCTargetAsmParser::Match_Success;
  }

  // 'AM3Offset' class
  if (Kind == MCK_AM3Offset) {
    if (Operand.isAM3Offset())
      return MCTargetAsmParser::Match_Success;
  }

  // 'AddrMode2' class
  if (Kind == MCK_AddrMode2) {
    if (Operand.isAddrMode2())
      return MCTargetAsmParser::Match_Success;
  }

  // 'AddrMode3' class
  if (Kind == MCK_AddrMode3) {
    if (Operand.isAddrMode3())
      return MCTargetAsmParser::Match_Success;
  }

  // 'AddrMode5' class
  if (Kind == MCK_AddrMode5) {
    if (Operand.isAddrMode5())
      return MCTargetAsmParser::Match_Success;
  }

  // 'AlignedMemory' class
  if (Kind == MCK_AlignedMemory) {
    if (Operand.isAlignedMemory())
      return MCTargetAsmParser::Match_Success;
  }

  // 'AdrLabel' class
  if (Kind == MCK_AdrLabel) {
    if (Operand.isAdrLabel())
      return MCTargetAsmParser::Match_Success;
  }

  // 'Bitfield' class
  if (Kind == MCK_Bitfield) {
    if (Operand.isBitfield())
      return MCTargetAsmParser::Match_Success;
  }

  // 'CCOut' class
  if (Kind == MCK_CCOut) {
    if (Operand.isCCOut())
      return MCTargetAsmParser::Match_Success;
  }

  // 'CondCode' class
  if (Kind == MCK_CondCode) {
    if (Operand.isCondCode())
      return MCTargetAsmParser::Match_Success;
  }

  // 'CoprocNum' class
  if (Kind == MCK_CoprocNum) {
    if (Operand.isCoprocNum())
      return MCTargetAsmParser::Match_Success;
  }

  // 'CoprocOption' class
  if (Kind == MCK_CoprocOption) {
    if (Operand.isCoprocOption())
      return MCTargetAsmParser::Match_Success;
  }

  // 'CoprocReg' class
  if (Kind == MCK_CoprocReg) {
    if (Operand.isCoprocReg())
      return MCTargetAsmParser::Match_Success;
  }

  // 'DPRRegList' class
  if (Kind == MCK_DPRRegList) {
    if (Operand.isDPRRegList())
      return MCTargetAsmParser::Match_Success;
  }

  // 'FPImm' class
  if (Kind == MCK_FPImm) {
    if (Operand.isFPImm())
      return MCTargetAsmParser::Match_Success;
  }

  // 'Imm0_15' class
  if (Kind == MCK_Imm0_15) {
    if (Operand.isImm0_15())
      return MCTargetAsmParser::Match_Success;
    return ARMAsmParser::Match_ImmRange0_15;
  }

  // 'Imm0_1' class
  if (Kind == MCK_Imm0_1) {
    if (Operand.isImm0_1())
      return MCTargetAsmParser::Match_Success;
  }

  // 'Imm0_255' class
  if (Kind == MCK_Imm0_255) {
    if (Operand.isImm0_255())
      return MCTargetAsmParser::Match_Success;
  }

  // 'Imm0_31' class
  if (Kind == MCK_Imm0_31) {
    if (Operand.isImm0_31())
      return MCTargetAsmParser::Match_Success;
  }

  // 'Imm0_32' class
  if (Kind == MCK_Imm0_32) {
    if (Operand.isImm0_32())
      return MCTargetAsmParser::Match_Success;
  }

  // 'Imm0_3' class
  if (Kind == MCK_Imm0_3) {
    if (Operand.isImm0_3())
      return MCTargetAsmParser::Match_Success;
  }

  // 'Imm0_63' class
  if (Kind == MCK_Imm0_63) {
    if (Operand.isImm0_63())
      return MCTargetAsmParser::Match_Success;
  }

  // 'Imm0_65535' class
  if (Kind == MCK_Imm0_65535) {
    if (Operand.isImm0_65535())
      return MCTargetAsmParser::Match_Success;
  }

  // 'Imm0_65535Expr' class
  if (Kind == MCK_Imm0_65535Expr) {
    if (Operand.isImm0_65535Expr())
      return MCTargetAsmParser::Match_Success;
  }

  // 'Imm0_7' class
  if (Kind == MCK_Imm0_7) {
    if (Operand.isImm0_7())
      return MCTargetAsmParser::Match_Success;
  }

  // 'Imm16' class
  if (Kind == MCK_Imm16) {
    if (Operand.isImm16())
      return MCTargetAsmParser::Match_Success;
  }

  // 'Imm1_15' class
  if (Kind == MCK_Imm1_15) {
    if (Operand.isImm1_15())
      return MCTargetAsmParser::Match_Success;
  }

  // 'Imm1_16' class
  if (Kind == MCK_Imm1_16) {
    if (Operand.isImm1_16())
      return MCTargetAsmParser::Match_Success;
  }

  // 'Imm1_31' class
  if (Kind == MCK_Imm1_31) {
    if (Operand.isImm1_31())
      return MCTargetAsmParser::Match_Success;
  }

  // 'Imm1_32' class
  if (Kind == MCK_Imm1_32) {
    if (Operand.isImm1_32())
      return MCTargetAsmParser::Match_Success;
  }

  // 'Imm1_7' class
  if (Kind == MCK_Imm1_7) {
    if (Operand.isImm1_7())
      return MCTargetAsmParser::Match_Success;
  }

  // 'Imm24bit' class
  if (Kind == MCK_Imm24bit) {
    if (Operand.isImm24bit())
      return MCTargetAsmParser::Match_Success;
  }

  // 'Imm32' class
  if (Kind == MCK_Imm32) {
    if (Operand.isImm32())
      return MCTargetAsmParser::Match_Success;
  }

  // 'Imm8' class
  if (Kind == MCK_Imm8) {
    if (Operand.isImm8())
      return MCTargetAsmParser::Match_Success;
  }

  // 'Imm' class
  if (Kind == MCK_Imm) {
    if (Operand.isImm())
      return MCTargetAsmParser::Match_Success;
  }

  // 'MSRMask' class
  if (Kind == MCK_MSRMask) {
    if (Operand.isMSRMask())
      return MCTargetAsmParser::Match_Success;
  }

  // 'MemBarrierOpt' class
  if (Kind == MCK_MemBarrierOpt) {
    if (Operand.isMemBarrierOpt())
      return MCTargetAsmParser::Match_Success;
  }

  // 'MemImm0_1020s4Offset' class
  if (Kind == MCK_MemImm0_1020s4Offset) {
    if (Operand.isMemImm0_1020s4Offset())
      return MCTargetAsmParser::Match_Success;
  }

  // 'MemImm12Offset' class
  if (Kind == MCK_MemImm12Offset) {
    if (Operand.isMemImm12Offset())
      return MCTargetAsmParser::Match_Success;
  }

  // 'MemImm8Offset' class
  if (Kind == MCK_MemImm8Offset) {
    if (Operand.isMemImm8Offset())
      return MCTargetAsmParser::Match_Success;
  }

  // 'MemImm8s4Offset' class
  if (Kind == MCK_MemImm8s4Offset) {
    if (Operand.isMemImm8s4Offset())
      return MCTargetAsmParser::Match_Success;
  }

  // 'MemNegImm8Offset' class
  if (Kind == MCK_MemNegImm8Offset) {
    if (Operand.isMemNegImm8Offset())
      return MCTargetAsmParser::Match_Success;
  }

  // 'MemNoOffset' class
  if (Kind == MCK_MemNoOffset) {
    if (Operand.isMemNoOffset())
      return MCTargetAsmParser::Match_Success;
  }

  // 'MemPosImm8Offset' class
  if (Kind == MCK_MemPosImm8Offset) {
    if (Operand.isMemPosImm8Offset())
      return MCTargetAsmParser::Match_Success;
  }

  // 'MemRegOffset' class
  if (Kind == MCK_MemRegOffset) {
    if (Operand.isMemRegOffset())
      return MCTargetAsmParser::Match_Success;
  }

  // 'PKHASRImm' class
  if (Kind == MCK_PKHASRImm) {
    if (Operand.isPKHASRImm())
      return MCTargetAsmParser::Match_Success;
  }

  // 'PKHLSLImm' class
  if (Kind == MCK_PKHLSLImm) {
    if (Operand.isPKHLSLImm())
      return MCTargetAsmParser::Match_Success;
  }

  // 'PostIdxImm8' class
  if (Kind == MCK_PostIdxImm8) {
    if (Operand.isPostIdxImm8())
      return MCTargetAsmParser::Match_Success;
  }

  // 'PostIdxImm8s4' class
  if (Kind == MCK_PostIdxImm8s4) {
    if (Operand.isPostIdxImm8s4())
      return MCTargetAsmParser::Match_Success;
  }

  // 'PostIdxReg' class
  if (Kind == MCK_PostIdxReg) {
    if (Operand.isPostIdxReg())
      return MCTargetAsmParser::Match_Success;
  }

  // 'PostIdxRegShifted' class
  if (Kind == MCK_PostIdxRegShifted) {
    if (Operand.isPostIdxRegShifted())
      return MCTargetAsmParser::Match_Success;
  }

  // 'ProcIFlags' class
  if (Kind == MCK_ProcIFlags) {
    if (Operand.isProcIFlags())
      return MCTargetAsmParser::Match_Success;
  }

  // 'RegList' class
  if (Kind == MCK_RegList) {
    if (Operand.isRegList())
      return MCTargetAsmParser::Match_Success;
  }

  // 'RotImm' class
  if (Kind == MCK_RotImm) {
    if (Operand.isRotImm())
      return MCTargetAsmParser::Match_Success;
  }

  // 'ARMSOImm' class
  if (Kind == MCK_ARMSOImm) {
    if (Operand.isARMSOImm())
      return MCTargetAsmParser::Match_Success;
  }

  // 'SPRRegList' class
  if (Kind == MCK_SPRRegList) {
    if (Operand.isSPRRegList())
      return MCTargetAsmParser::Match_Success;
  }

  // 'SetEndImm' class
  if (Kind == MCK_SetEndImm) {
    if (Operand.isSetEndImm())
      return MCTargetAsmParser::Match_Success;
  }

  // 'RegShiftedImm' class
  if (Kind == MCK_RegShiftedImm) {
    if (Operand.isRegShiftedImm())
      return MCTargetAsmParser::Match_Success;
  }

  // 'RegShiftedReg' class
  if (Kind == MCK_RegShiftedReg) {
    if (Operand.isRegShiftedReg())
      return MCTargetAsmParser::Match_Success;
  }

  // 'ShifterImm' class
  if (Kind == MCK_ShifterImm) {
    if (Operand.isShifterImm())
      return MCTargetAsmParser::Match_Success;
  }

  // 'ImmThumbSR' class
  if (Kind == MCK_ImmThumbSR) {
    if (Operand.isImmThumbSR())
      return MCTargetAsmParser::Match_Success;
  }

  // 'VecListDPairAllLanes' class
  if (Kind == MCK_VecListDPairAllLanes) {
    if (Operand.isVecListDPairAllLanes())
      return MCTargetAsmParser::Match_Success;
  }

  // 'VecListDPair' class
  if (Kind == MCK_VecListDPair) {
    if (Operand.isVecListDPair())
      return MCTargetAsmParser::Match_Success;
  }

  // 'VecListDPairSpacedAllLanes' class
  if (Kind == MCK_VecListDPairSpacedAllLanes) {
    if (Operand.isVecListDPairSpacedAllLanes())
      return MCTargetAsmParser::Match_Success;
  }

  // 'VecListDPairSpaced' class
  if (Kind == MCK_VecListDPairSpaced) {
    if (Operand.isVecListDPairSpaced())
      return MCTargetAsmParser::Match_Success;
  }

  // 'VecListFourDAllLanes' class
  if (Kind == MCK_VecListFourDAllLanes) {
    if (Operand.isVecListFourDAllLanes())
      return MCTargetAsmParser::Match_Success;
  }

  // 'VecListFourD' class
  if (Kind == MCK_VecListFourD) {
    if (Operand.isVecListFourD())
      return MCTargetAsmParser::Match_Success;
  }

  // 'VecListFourDByteIndexed' class
  if (Kind == MCK_VecListFourDByteIndexed) {
    if (Operand.isVecListFourDByteIndexed())
      return MCTargetAsmParser::Match_Success;
  }

  // 'VecListFourDHWordIndexed' class
  if (Kind == MCK_VecListFourDHWordIndexed) {
    if (Operand.isVecListFourDHWordIndexed())
      return MCTargetAsmParser::Match_Success;
  }

  // 'VecListFourDWordIndexed' class
  if (Kind == MCK_VecListFourDWordIndexed) {
    if (Operand.isVecListFourDWordIndexed())
      return MCTargetAsmParser::Match_Success;
  }

  // 'VecListFourQAllLanes' class
  if (Kind == MCK_VecListFourQAllLanes) {
    if (Operand.isVecListFourQAllLanes())
      return MCTargetAsmParser::Match_Success;
  }

  // 'VecListFourQ' class
  if (Kind == MCK_VecListFourQ) {
    if (Operand.isVecListFourQ())
      return MCTargetAsmParser::Match_Success;
  }

  // 'VecListFourQHWordIndexed' class
  if (Kind == MCK_VecListFourQHWordIndexed) {
    if (Operand.isVecListFourQHWordIndexed())
      return MCTargetAsmParser::Match_Success;
  }

  // 'VecListFourQWordIndexed' class
  if (Kind == MCK_VecListFourQWordIndexed) {
    if (Operand.isVecListFourQWordIndexed())
      return MCTargetAsmParser::Match_Success;
  }

  // 'VecListOneDAllLanes' class
  if (Kind == MCK_VecListOneDAllLanes) {
    if (Operand.isVecListOneDAllLanes())
      return MCTargetAsmParser::Match_Success;
  }

  // 'VecListOneD' class
  if (Kind == MCK_VecListOneD) {
    if (Operand.isVecListOneD())
      return MCTargetAsmParser::Match_Success;
  }

  // 'VecListOneDByteIndexed' class
  if (Kind == MCK_VecListOneDByteIndexed) {
    if (Operand.isVecListOneDByteIndexed())
      return MCTargetAsmParser::Match_Success;
  }

  // 'VecListOneDHWordIndexed' class
  if (Kind == MCK_VecListOneDHWordIndexed) {
    if (Operand.isVecListOneDHWordIndexed())
      return MCTargetAsmParser::Match_Success;
  }

  // 'VecListOneDWordIndexed' class
  if (Kind == MCK_VecListOneDWordIndexed) {
    if (Operand.isVecListOneDWordIndexed())
      return MCTargetAsmParser::Match_Success;
  }

  // 'VecListThreeDAllLanes' class
  if (Kind == MCK_VecListThreeDAllLanes) {
    if (Operand.isVecListThreeDAllLanes())
      return MCTargetAsmParser::Match_Success;
  }

  // 'VecListThreeD' class
  if (Kind == MCK_VecListThreeD) {
    if (Operand.isVecListThreeD())
      return MCTargetAsmParser::Match_Success;
  }

  // 'VecListThreeDByteIndexed' class
  if (Kind == MCK_VecListThreeDByteIndexed) {
    if (Operand.isVecListThreeDByteIndexed())
      return MCTargetAsmParser::Match_Success;
  }

  // 'VecListThreeDHWordIndexed' class
  if (Kind == MCK_VecListThreeDHWordIndexed) {
    if (Operand.isVecListThreeDHWordIndexed())
      return MCTargetAsmParser::Match_Success;
  }

  // 'VecListThreeDWordIndexed' class
  if (Kind == MCK_VecListThreeDWordIndexed) {
    if (Operand.isVecListThreeDWordIndexed())
      return MCTargetAsmParser::Match_Success;
  }

  // 'VecListThreeQAllLanes' class
  if (Kind == MCK_VecListThreeQAllLanes) {
    if (Operand.isVecListThreeQAllLanes())
      return MCTargetAsmParser::Match_Success;
  }

  // 'VecListThreeQ' class
  if (Kind == MCK_VecListThreeQ) {
    if (Operand.isVecListThreeQ())
      return MCTargetAsmParser::Match_Success;
  }

  // 'VecListThreeQHWordIndexed' class
  if (Kind == MCK_VecListThreeQHWordIndexed) {
    if (Operand.isVecListThreeQHWordIndexed())
      return MCTargetAsmParser::Match_Success;
  }

  // 'VecListThreeQWordIndexed' class
  if (Kind == MCK_VecListThreeQWordIndexed) {
    if (Operand.isVecListThreeQWordIndexed())
      return MCTargetAsmParser::Match_Success;
  }

  // 'VecListTwoDByteIndexed' class
  if (Kind == MCK_VecListTwoDByteIndexed) {
    if (Operand.isVecListTwoDByteIndexed())
      return MCTargetAsmParser::Match_Success;
  }

  // 'VecListTwoDHWordIndexed' class
  if (Kind == MCK_VecListTwoDHWordIndexed) {
    if (Operand.isVecListTwoDHWordIndexed())
      return MCTargetAsmParser::Match_Success;
  }

  // 'VecListTwoDWordIndexed' class
  if (Kind == MCK_VecListTwoDWordIndexed) {
    if (Operand.isVecListTwoDWordIndexed())
      return MCTargetAsmParser::Match_Success;
  }

  // 'VecListTwoQHWordIndexed' class
  if (Kind == MCK_VecListTwoQHWordIndexed) {
    if (Operand.isVecListTwoQHWordIndexed())
      return MCTargetAsmParser::Match_Success;
  }

  // 'VecListTwoQWordIndexed' class
  if (Kind == MCK_VecListTwoQWordIndexed) {
    if (Operand.isVecListTwoQWordIndexed())
      return MCTargetAsmParser::Match_Success;
  }

  // 'VectorIndex16' class
  if (Kind == MCK_VectorIndex16) {
    if (Operand.isVectorIndex16())
      return MCTargetAsmParser::Match_Success;
  }

  // 'VectorIndex32' class
  if (Kind == MCK_VectorIndex32) {
    if (Operand.isVectorIndex32())
      return MCTargetAsmParser::Match_Success;
  }

  // 'VectorIndex8' class
  if (Kind == MCK_VectorIndex8) {
    if (Operand.isVectorIndex8())
      return MCTargetAsmParser::Match_Success;
  }

  // 'MemTBB' class
  if (Kind == MCK_MemTBB) {
    if (Operand.isMemTBB())
      return MCTargetAsmParser::Match_Success;
  }

  // 'MemTBH' class
  if (Kind == MCK_MemTBH) {
    if (Operand.isMemTBH())
      return MCTargetAsmParser::Match_Success;
  }

  // 'FBits16' class
  if (Kind == MCK_FBits16) {
    if (Operand.isFBits16())
      return MCTargetAsmParser::Match_Success;
  }

  // 'FBits32' class
  if (Kind == MCK_FBits32) {
    if (Operand.isFBits32())
      return MCTargetAsmParser::Match_Success;
  }

  // 'Imm0_4095' class
  if (Kind == MCK_Imm0_4095) {
    if (Operand.isImm0_4095())
      return MCTargetAsmParser::Match_Success;
  }

  // 'Imm0_4095Neg' class
  if (Kind == MCK_Imm0_4095Neg) {
    if (Operand.isImm0_4095Neg())
      return MCTargetAsmParser::Match_Success;
  }

  // 'ITMask' class
  if (Kind == MCK_ITMask) {
    if (Operand.isITMask())
      return MCTargetAsmParser::Match_Success;
  }

  // 'ITCondCode' class
  if (Kind == MCK_ITCondCode) {
    if (Operand.isITCondCode())
      return MCTargetAsmParser::Match_Success;
  }

  // 'NEONi16splat' class
  if (Kind == MCK_NEONi16splat) {
    if (Operand.isNEONi16splat())
      return MCTargetAsmParser::Match_Success;
  }

  // 'NEONi32splat' class
  if (Kind == MCK_NEONi32splat) {
    if (Operand.isNEONi32splat())
      return MCTargetAsmParser::Match_Success;
  }

  // 'NEONi64splat' class
  if (Kind == MCK_NEONi64splat) {
    if (Operand.isNEONi64splat())
      return MCTargetAsmParser::Match_Success;
  }

  // 'NEONi8splat' class
  if (Kind == MCK_NEONi8splat) {
    if (Operand.isNEONi8splat())
      return MCTargetAsmParser::Match_Success;
  }

  // 'NEONi32vmov' class
  if (Kind == MCK_NEONi32vmov) {
    if (Operand.isNEONi32vmov())
      return MCTargetAsmParser::Match_Success;
  }

  // 'NEONi32vmovNeg' class
  if (Kind == MCK_NEONi32vmovNeg) {
    if (Operand.isNEONi32vmovNeg())
      return MCTargetAsmParser::Match_Success;
  }

  // 'ShrImm16' class
  if (Kind == MCK_ShrImm16) {
    if (Operand.isShrImm16())
      return MCTargetAsmParser::Match_Success;
  }

  // 'ShrImm32' class
  if (Kind == MCK_ShrImm32) {
    if (Operand.isShrImm32())
      return MCTargetAsmParser::Match_Success;
  }

  // 'ShrImm64' class
  if (Kind == MCK_ShrImm64) {
    if (Operand.isShrImm64())
      return MCTargetAsmParser::Match_Success;
  }

  // 'ShrImm8' class
  if (Kind == MCK_ShrImm8) {
    if (Operand.isShrImm8())
      return MCTargetAsmParser::Match_Success;
  }

  // 'ARMSOImmNeg' class
  if (Kind == MCK_ARMSOImmNeg) {
    if (Operand.isARMSOImmNeg())
      return MCTargetAsmParser::Match_Success;
  }

  // 'ARMSOImmNot' class
  if (Kind == MCK_ARMSOImmNot) {
    if (Operand.isARMSOImmNot())
      return MCTargetAsmParser::Match_Success;
  }

  // 'T2SOImm' class
  if (Kind == MCK_T2SOImm) {
    if (Operand.isT2SOImm())
      return MCTargetAsmParser::Match_Success;
  }

  // 'T2SOImmNeg' class
  if (Kind == MCK_T2SOImmNeg) {
    if (Operand.isT2SOImmNeg())
      return MCTargetAsmParser::Match_Success;
  }

  // 'T2SOImmNot' class
  if (Kind == MCK_T2SOImmNot) {
    if (Operand.isT2SOImmNot())
      return MCTargetAsmParser::Match_Success;
  }

  // 'MemUImm12Offset' class
  if (Kind == MCK_MemUImm12Offset) {
    if (Operand.isMemUImm12Offset())
      return MCTargetAsmParser::Match_Success;
  }

  // 'T2MemRegOffset' class
  if (Kind == MCK_T2MemRegOffset) {
    if (Operand.isT2MemRegOffset())
      return MCTargetAsmParser::Match_Success;
  }

  // 'Imm8s4' class
  if (Kind == MCK_Imm8s4) {
    if (Operand.isImm8s4())
      return MCTargetAsmParser::Match_Success;
  }

  // 'MemPCRelImm12' class
  if (Kind == MCK_MemPCRelImm12) {
    if (Operand.isMemPCRelImm12())
      return MCTargetAsmParser::Match_Success;
  }

  // 'MemThumbRIs1' class
  if (Kind == MCK_MemThumbRIs1) {
    if (Operand.isMemThumbRIs1())
      return MCTargetAsmParser::Match_Success;
  }

  // 'MemThumbRIs2' class
  if (Kind == MCK_MemThumbRIs2) {
    if (Operand.isMemThumbRIs2())
      return MCTargetAsmParser::Match_Success;
  }

  // 'MemThumbRIs4' class
  if (Kind == MCK_MemThumbRIs4) {
    if (Operand.isMemThumbRIs4())
      return MCTargetAsmParser::Match_Success;
  }

  // 'MemThumbRR' class
  if (Kind == MCK_MemThumbRR) {
    if (Operand.isMemThumbRR())
      return MCTargetAsmParser::Match_Success;
  }

  // 'MemThumbSPI' class
  if (Kind == MCK_MemThumbSPI) {
    if (Operand.isMemThumbSPI())
      return MCTargetAsmParser::Match_Success;
  }

  // 'Imm0_1020s4' class
  if (Kind == MCK_Imm0_1020s4) {
    if (Operand.isImm0_1020s4())
      return MCTargetAsmParser::Match_Success;
  }

  // 'Imm0_508s4' class
  if (Kind == MCK_Imm0_508s4) {
    if (Operand.isImm0_508s4())
      return MCTargetAsmParser::Match_Success;
  }

  // 'Imm0_508s4Neg' class
  if (Kind == MCK_Imm0_508s4Neg) {
    if (Operand.isImm0_508s4Neg())
      return MCTargetAsmParser::Match_Success;
  }

  if (Operand.isReg()) {
    MatchClassKind OpKind;
    switch (Operand.getReg()) {
    default: OpKind = InvalidMatchClass; break;
    case ARM::R0: OpKind = MCK_Reg0; break;
    case ARM::R1: OpKind = MCK_Reg0; break;
    case ARM::R2: OpKind = MCK_Reg0; break;
    case ARM::R3: OpKind = MCK_Reg0; break;
    case ARM::R4: OpKind = MCK_tGPR; break;
    case ARM::R5: OpKind = MCK_tGPR; break;
    case ARM::R6: OpKind = MCK_tGPR; break;
    case ARM::R7: OpKind = MCK_tGPR; break;
    case ARM::R8: OpKind = MCK_Reg8; break;
    case ARM::R9: OpKind = MCK_Reg9; break;
    case ARM::R10: OpKind = MCK_Reg8; break;
    case ARM::R11: OpKind = MCK_Reg8; break;
    case ARM::R12: OpKind = MCK_Reg9; break;
    case ARM::SP: OpKind = MCK_GPRsp; break;
    case ARM::LR: OpKind = MCK_LR; break;
    case ARM::PC: OpKind = MCK_PC; break;
    case ARM::S0: OpKind = MCK_SPR_8; break;
    case ARM::S1: OpKind = MCK_SPR_8; break;
    case ARM::S2: OpKind = MCK_SPR_8; break;
    case ARM::S3: OpKind = MCK_SPR_8; break;
    case ARM::S4: OpKind = MCK_SPR_8; break;
    case ARM::S5: OpKind = MCK_SPR_8; break;
    case ARM::S6: OpKind = MCK_SPR_8; break;
    case ARM::S7: OpKind = MCK_SPR_8; break;
    case ARM::S8: OpKind = MCK_SPR_8; break;
    case ARM::S9: OpKind = MCK_SPR_8; break;
    case ARM::S10: OpKind = MCK_SPR_8; break;
    case ARM::S11: OpKind = MCK_SPR_8; break;
    case ARM::S12: OpKind = MCK_SPR_8; break;
    case ARM::S13: OpKind = MCK_SPR_8; break;
    case ARM::S14: OpKind = MCK_SPR_8; break;
    case ARM::S15: OpKind = MCK_SPR_8; break;
    case ARM::S16: OpKind = MCK_SPR; break;
    case ARM::S17: OpKind = MCK_SPR; break;
    case ARM::S18: OpKind = MCK_SPR; break;
    case ARM::S19: OpKind = MCK_SPR; break;
    case ARM::S20: OpKind = MCK_SPR; break;
    case ARM::S21: OpKind = MCK_SPR; break;
    case ARM::S22: OpKind = MCK_SPR; break;
    case ARM::S23: OpKind = MCK_SPR; break;
    case ARM::S24: OpKind = MCK_SPR; break;
    case ARM::S25: OpKind = MCK_SPR; break;
    case ARM::S26: OpKind = MCK_SPR; break;
    case ARM::S27: OpKind = MCK_SPR; break;
    case ARM::S28: OpKind = MCK_SPR; break;
    case ARM::S29: OpKind = MCK_SPR; break;
    case ARM::S30: OpKind = MCK_SPR; break;
    case ARM::S31: OpKind = MCK_SPR; break;
    case ARM::D0: OpKind = MCK_DPR_8; break;
    case ARM::D1: OpKind = MCK_DPR_8; break;
    case ARM::D2: OpKind = MCK_DPR_8; break;
    case ARM::D3: OpKind = MCK_DPR_8; break;
    case ARM::D4: OpKind = MCK_DPR_8; break;
    case ARM::D5: OpKind = MCK_DPR_8; break;
    case ARM::D6: OpKind = MCK_DPR_8; break;
    case ARM::D7: OpKind = MCK_DPR_8; break;
    case ARM::D8: OpKind = MCK_DPR_VFP2; break;
    case ARM::D9: OpKind = MCK_DPR_VFP2; break;
    case ARM::D10: OpKind = MCK_DPR_VFP2; break;
    case ARM::D11: OpKind = MCK_DPR_VFP2; break;
    case ARM::D12: OpKind = MCK_DPR_VFP2; break;
    case ARM::D13: OpKind = MCK_DPR_VFP2; break;
    case ARM::D14: OpKind = MCK_DPR_VFP2; break;
    case ARM::D15: OpKind = MCK_DPR_VFP2; break;
    case ARM::D16: OpKind = MCK_DPR; break;
    case ARM::D17: OpKind = MCK_DPR; break;
    case ARM::D18: OpKind = MCK_DPR; break;
    case ARM::D19: OpKind = MCK_DPR; break;
    case ARM::D20: OpKind = MCK_DPR; break;
    case ARM::D21: OpKind = MCK_DPR; break;
    case ARM::D22: OpKind = MCK_DPR; break;
    case ARM::D23: OpKind = MCK_DPR; break;
    case ARM::D24: OpKind = MCK_DPR; break;
    case ARM::D25: OpKind = MCK_DPR; break;
    case ARM::D26: OpKind = MCK_DPR; break;
    case ARM::D27: OpKind = MCK_DPR; break;
    case ARM::D28: OpKind = MCK_DPR; break;
    case ARM::D29: OpKind = MCK_DPR; break;
    case ARM::D30: OpKind = MCK_DPR; break;
    case ARM::D31: OpKind = MCK_DPR; break;
    case ARM::Q0: OpKind = MCK_QPR_8; break;
    case ARM::Q1: OpKind = MCK_QPR_8; break;
    case ARM::Q2: OpKind = MCK_QPR_8; break;
    case ARM::Q3: OpKind = MCK_QPR_8; break;
    case ARM::Q4: OpKind = MCK_QPR_VFP2; break;
    case ARM::Q5: OpKind = MCK_QPR_VFP2; break;
    case ARM::Q6: OpKind = MCK_QPR_VFP2; break;
    case ARM::Q7: OpKind = MCK_QPR_VFP2; break;
    case ARM::Q8: OpKind = MCK_QPR; break;
    case ARM::Q9: OpKind = MCK_QPR; break;
    case ARM::Q10: OpKind = MCK_QPR; break;
    case ARM::Q11: OpKind = MCK_QPR; break;
    case ARM::Q12: OpKind = MCK_QPR; break;
    case ARM::Q13: OpKind = MCK_QPR; break;
    case ARM::Q14: OpKind = MCK_QPR; break;
    case ARM::Q15: OpKind = MCK_QPR; break;
    case ARM::CPSR: OpKind = MCK_CCR; break;
    case ARM::APSR: OpKind = MCK_APSR; break;
    case ARM::SPSR: OpKind = MCK_SPSR; break;
    case ARM::FPSCR: OpKind = MCK_FPSCR; break;
    case ARM::FPSID: OpKind = MCK_FPSID; break;
    case ARM::MVFR1: OpKind = MCK_MVFR1; break;
    case ARM::MVFR0: OpKind = MCK_MVFR0; break;
    case ARM::FPEXC: OpKind = MCK_FPEXC; break;
    case ARM::D0_D2: OpKind = MCK_Reg48; break;
    case ARM::D1_D3: OpKind = MCK_Reg48; break;
    case ARM::D2_D4: OpKind = MCK_Reg48; break;
    case ARM::D3_D5: OpKind = MCK_Reg48; break;
    case ARM::D4_D6: OpKind = MCK_Reg48; break;
    case ARM::D5_D7: OpKind = MCK_Reg48; break;
    case ARM::D6_D8: OpKind = MCK_Reg49; break;
    case ARM::D7_D9: OpKind = MCK_Reg49; break;
    case ARM::D8_D10: OpKind = MCK_Reg50; break;
    case ARM::D9_D11: OpKind = MCK_Reg50; break;
    case ARM::D10_D12: OpKind = MCK_Reg50; break;
    case ARM::D11_D13: OpKind = MCK_Reg50; break;
    case ARM::D12_D14: OpKind = MCK_Reg50; break;
    case ARM::D13_D15: OpKind = MCK_Reg50; break;
    case ARM::D14_D16: OpKind = MCK_Reg51; break;
    case ARM::D15_D17: OpKind = MCK_Reg51; break;
    case ARM::D16_D18: OpKind = MCK_DPairSpc; break;
    case ARM::D17_D19: OpKind = MCK_DPairSpc; break;
    case ARM::D18_D20: OpKind = MCK_DPairSpc; break;
    case ARM::D19_D21: OpKind = MCK_DPairSpc; break;
    case ARM::D20_D22: OpKind = MCK_DPairSpc; break;
    case ARM::D21_D23: OpKind = MCK_DPairSpc; break;
    case ARM::D22_D24: OpKind = MCK_DPairSpc; break;
    case ARM::D23_D25: OpKind = MCK_DPairSpc; break;
    case ARM::D24_D26: OpKind = MCK_DPairSpc; break;
    case ARM::D25_D27: OpKind = MCK_DPairSpc; break;
    case ARM::D26_D28: OpKind = MCK_DPairSpc; break;
    case ARM::D27_D29: OpKind = MCK_DPairSpc; break;
    case ARM::D28_D30: OpKind = MCK_DPairSpc; break;
    case ARM::D29_D31: OpKind = MCK_DPairSpc; break;
    case ARM::Q0_Q1: OpKind = MCK_Reg34; break;
    case ARM::Q1_Q2: OpKind = MCK_Reg34; break;
    case ARM::Q2_Q3: OpKind = MCK_Reg34; break;
    case ARM::Q3_Q4: OpKind = MCK_Reg35; break;
    case ARM::Q4_Q5: OpKind = MCK_Reg36; break;
    case ARM::Q5_Q6: OpKind = MCK_Reg36; break;
    case ARM::Q6_Q7: OpKind = MCK_Reg36; break;
    case ARM::Q7_Q8: OpKind = MCK_Reg37; break;
    case ARM::Q8_Q9: OpKind = MCK_QQPR; break;
    case ARM::Q9_Q10: OpKind = MCK_QQPR; break;
    case ARM::Q10_Q11: OpKind = MCK_QQPR; break;
    case ARM::Q11_Q12: OpKind = MCK_QQPR; break;
    case ARM::Q12_Q13: OpKind = MCK_QQPR; break;
    case ARM::Q13_Q14: OpKind = MCK_QQPR; break;
    case ARM::Q14_Q15: OpKind = MCK_QQPR; break;
    case ARM::Q0_Q1_Q2_Q3: OpKind = MCK_Reg53; break;
    case ARM::Q1_Q2_Q3_Q4: OpKind = MCK_Reg54; break;
    case ARM::Q2_Q3_Q4_Q5: OpKind = MCK_Reg55; break;
    case ARM::Q3_Q4_Q5_Q6: OpKind = MCK_Reg56; break;
    case ARM::Q4_Q5_Q6_Q7: OpKind = MCK_Reg57; break;
    case ARM::Q5_Q6_Q7_Q8: OpKind = MCK_Reg58; break;
    case ARM::Q6_Q7_Q8_Q9: OpKind = MCK_Reg59; break;
    case ARM::Q7_Q8_Q9_Q10: OpKind = MCK_Reg60; break;
    case ARM::Q8_Q9_Q10_Q11: OpKind = MCK_QQQQPR; break;
    case ARM::Q9_Q10_Q11_Q12: OpKind = MCK_QQQQPR; break;
    case ARM::Q10_Q11_Q12_Q13: OpKind = MCK_QQQQPR; break;
    case ARM::Q11_Q12_Q13_Q14: OpKind = MCK_QQQQPR; break;
    case ARM::Q12_Q13_Q14_Q15: OpKind = MCK_QQQQPR; break;
    case ARM::R0_R1: OpKind = MCK_Reg62; break;
    case ARM::R2_R3: OpKind = MCK_Reg62; break;
    case ARM::R4_R5: OpKind = MCK_Reg63; break;
    case ARM::R6_R7: OpKind = MCK_Reg63; break;
    case ARM::R8_R9: OpKind = MCK_Reg68; break;
    case ARM::R10_R11: OpKind = MCK_Reg69; break;
    case ARM::R12_SP: OpKind = MCK_Reg71; break;
    case ARM::D0_D1_D2: OpKind = MCK_Reg79; break;
    case ARM::D1_D2_D3: OpKind = MCK_Reg84; break;
    case ARM::D2_D3_D4: OpKind = MCK_Reg79; break;
    case ARM::D3_D4_D5: OpKind = MCK_Reg84; break;
    case ARM::D4_D5_D6: OpKind = MCK_Reg79; break;
    case ARM::D5_D6_D7: OpKind = MCK_Reg84; break;
    case ARM::D6_D7_D8: OpKind = MCK_Reg80; break;
    case ARM::D7_D8_D9: OpKind = MCK_Reg85; break;
    case ARM::D8_D9_D10: OpKind = MCK_Reg81; break;
    case ARM::D9_D10_D11: OpKind = MCK_Reg86; break;
    case ARM::D10_D11_D12: OpKind = MCK_Reg81; break;
    case ARM::D11_D12_D13: OpKind = MCK_Reg86; break;
    case ARM::D12_D13_D14: OpKind = MCK_Reg81; break;
    case ARM::D13_D14_D15: OpKind = MCK_Reg86; break;
    case ARM::D14_D15_D16: OpKind = MCK_Reg82; break;
    case ARM::D15_D16_D17: OpKind = MCK_Reg87; break;
    case ARM::D16_D17_D18: OpKind = MCK_Reg83; break;
    case ARM::D17_D18_D19: OpKind = MCK_Reg88; break;
    case ARM::D18_D19_D20: OpKind = MCK_Reg83; break;
    case ARM::D19_D20_D21: OpKind = MCK_Reg88; break;
    case ARM::D20_D21_D22: OpKind = MCK_Reg83; break;
    case ARM::D21_D22_D23: OpKind = MCK_Reg88; break;
    case ARM::D22_D23_D24: OpKind = MCK_Reg83; break;
    case ARM::D23_D24_D25: OpKind = MCK_Reg88; break;
    case ARM::D24_D25_D26: OpKind = MCK_Reg83; break;
    case ARM::D25_D26_D27: OpKind = MCK_Reg88; break;
    case ARM::D26_D27_D28: OpKind = MCK_Reg83; break;
    case ARM::D27_D28_D29: OpKind = MCK_Reg88; break;
    case ARM::D28_D29_D30: OpKind = MCK_Reg83; break;
    case ARM::D29_D30_D31: OpKind = MCK_Reg88; break;
    case ARM::D0_D2_D4: OpKind = MCK_Reg89; break;
    case ARM::D1_D3_D5: OpKind = MCK_Reg89; break;
    case ARM::D2_D4_D6: OpKind = MCK_Reg89; break;
    case ARM::D3_D5_D7: OpKind = MCK_Reg89; break;
    case ARM::D4_D6_D8: OpKind = MCK_Reg90; break;
    case ARM::D5_D7_D9: OpKind = MCK_Reg90; break;
    case ARM::D6_D8_D10: OpKind = MCK_Reg91; break;
    case ARM::D7_D9_D11: OpKind = MCK_Reg91; break;
    case ARM::D8_D10_D12: OpKind = MCK_Reg92; break;
    case ARM::D9_D11_D13: OpKind = MCK_Reg92; break;
    case ARM::D10_D12_D14: OpKind = MCK_Reg92; break;
    case ARM::D11_D13_D15: OpKind = MCK_Reg92; break;
    case ARM::D12_D14_D16: OpKind = MCK_Reg93; break;
    case ARM::D13_D15_D17: OpKind = MCK_Reg93; break;
    case ARM::D14_D16_D18: OpKind = MCK_Reg94; break;
    case ARM::D15_D17_D19: OpKind = MCK_Reg94; break;
    case ARM::D16_D18_D20: OpKind = MCK_DTripleSpc; break;
    case ARM::D17_D19_D21: OpKind = MCK_DTripleSpc; break;
    case ARM::D18_D20_D22: OpKind = MCK_DTripleSpc; break;
    case ARM::D19_D21_D23: OpKind = MCK_DTripleSpc; break;
    case ARM::D20_D22_D24: OpKind = MCK_DTripleSpc; break;
    case ARM::D21_D23_D25: OpKind = MCK_DTripleSpc; break;
    case ARM::D22_D24_D26: OpKind = MCK_DTripleSpc; break;
    case ARM::D23_D25_D27: OpKind = MCK_DTripleSpc; break;
    case ARM::D24_D26_D28: OpKind = MCK_DTripleSpc; break;
    case ARM::D25_D27_D29: OpKind = MCK_DTripleSpc; break;
    case ARM::D26_D28_D30: OpKind = MCK_DTripleSpc; break;
    case ARM::D27_D29_D31: OpKind = MCK_DTripleSpc; break;
    case ARM::D1_D2: OpKind = MCK_Reg24; break;
    case ARM::D3_D4: OpKind = MCK_Reg24; break;
    case ARM::D5_D6: OpKind = MCK_Reg24; break;
    case ARM::D7_D8: OpKind = MCK_Reg25; break;
    case ARM::D9_D10: OpKind = MCK_Reg22; break;
    case ARM::D11_D12: OpKind = MCK_Reg22; break;
    case ARM::D13_D14: OpKind = MCK_Reg22; break;
    case ARM::D15_D16: OpKind = MCK_Reg23; break;
    case ARM::D17_D18: OpKind = MCK_DPair; break;
    case ARM::D19_D20: OpKind = MCK_DPair; break;
    case ARM::D21_D22: OpKind = MCK_DPair; break;
    case ARM::D23_D24: OpKind = MCK_DPair; break;
    case ARM::D25_D26: OpKind = MCK_DPair; break;
    case ARM::D27_D28: OpKind = MCK_DPair; break;
    case ARM::D29_D30: OpKind = MCK_DPair; break;
    case ARM::D1_D2_D3_D4: OpKind = MCK_Reg96; break;
    case ARM::D3_D4_D5_D6: OpKind = MCK_Reg96; break;
    case ARM::D5_D6_D7_D8: OpKind = MCK_Reg97; break;
    case ARM::D7_D8_D9_D10: OpKind = MCK_Reg98; break;
    case ARM::D9_D10_D11_D12: OpKind = MCK_Reg99; break;
    case ARM::D11_D12_D13_D14: OpKind = MCK_Reg99; break;
    case ARM::D13_D14_D15_D16: OpKind = MCK_Reg100; break;
    case ARM::D15_D16_D17_D18: OpKind = MCK_Reg101; break;
    case ARM::D17_D18_D19_D20: OpKind = MCK_Reg102; break;
    case ARM::D19_D20_D21_D22: OpKind = MCK_Reg102; break;
    case ARM::D21_D22_D23_D24: OpKind = MCK_Reg102; break;
    case ARM::D23_D24_D25_D26: OpKind = MCK_Reg102; break;
    case ARM::D25_D26_D27_D28: OpKind = MCK_Reg102; break;
    case ARM::D27_D28_D29_D30: OpKind = MCK_Reg102; break;
    }
    return isSubclass(OpKind, Kind) ? MCTargetAsmParser::Match_Success :
                                      MCTargetAsmParser::Match_InvalidOperand;
  }

  return MCTargetAsmParser::Match_InvalidOperand;
}

unsigned ARMAsmParser::
ComputeAvailableFeatures(uint64_t FB) const {
  unsigned Features = 0;
  if (((FB & ARM::HasV4TOps) != 0))
    Features |= Feature_HasV4T;
  if (((FB & ARM::HasV5TEOps) != 0))
    Features |= Feature_HasV5TE;
  if (((FB & ARM::HasV6Ops) != 0))
    Features |= Feature_HasV6;
  if (((FB & ARM::HasV6T2Ops) != 0))
    Features |= Feature_HasV6T2;
  if (((FB & ARM::HasV7Ops) != 0))
    Features |= Feature_HasV7;
  if (((FB & ARM::FeatureVFP2) != 0))
    Features |= Feature_HasVFP2;
  if (((FB & ARM::FeatureVFP3) != 0))
    Features |= Feature_HasVFP3;
  if (((FB & ARM::FeatureVFP4) != 0))
    Features |= Feature_HasVFP4;
  if (((FB & ARM::FeatureNEON) != 0))
    Features |= Feature_HasNEON;
  if (((FB & ARM::FeatureFP16) != 0))
    Features |= Feature_HasFP16;
  if (((FB & ARM::FeatureHWDiv) != 0))
    Features |= Feature_HasDivide;
  if (((FB & ARM::FeatureHWDivARM) != 0))
    Features |= Feature_HasDivideInARM;
  if (((FB & ARM::FeatureT2XtPk) != 0))
    Features |= Feature_HasT2ExtractPack;
  if (((FB & ARM::FeatureDSPThumb2) != 0))
    Features |= Feature_HasThumb2DSP;
  if (((FB & ARM::FeatureDB) != 0))
    Features |= Feature_HasDB;
  if (((FB & ARM::FeatureMP) != 0))
    Features |= Feature_HasMP;
  if (((FB & ARM::ModeThumb) != 0))
    Features |= Feature_IsThumb;
  if (((FB & ARM::ModeThumb) != 0) && ((FB & ARM::FeatureThumb2) != 0))
    Features |= Feature_IsThumb2;
  if (((FB & ARM::FeatureMClass) != 0))
    Features |= Feature_IsMClass;
  if (((FB & ARM::FeatureMClass) == 0))
    Features |= Feature_IsARClass;
  if (((FB & ARM::ModeThumb) == 0))
    Features |= Feature_IsARM;
  return Features;
}

static const char *const MnemonicTable =
    "\003adc\003add\004addw\003adr\003and\003asr\001b\003bfc\003bfi\003bic\004"
    "bkpt\002bl\003blx\002bx\003bxj\004cbnz\003cbz\003cdp\004cdp2\005clrex\003"
    "clz\003cmn\003cmp\003cps\003dbg\003dmb\003dsb\003eor\005faddd\005fadds\006"
    "fcmpzd\006fcmpzs\005fmdhr\005fmdlr\006fmstat\005fsubd\005fsubs\004hint\003"
    "isb\002it\003ldc\004ldc2\005ldc2l\004ldcl\003ldm\005ldmda\005ldmdb\005l"
    "dmib\003ldr\004ldrb\005ldrbt\004ldrd\005ldrex\006ldrexb\006ldrexd\006ld"
    "rexh\004ldrh\005ldrht\005ldrsb\006ldrsbt\005ldrsh\006ldrsht\004ldrt\003"
    "lsl\003lsr\003mcr\004mcr2\004mcrr\005mcrr2\003mla\003mls\003mov\004movs"
    "\004movt\004movw\003mrc\004mrc2\004mrrc\005mrrc2\003mrs\003msr\003mul\003"
    "mvn\003neg\003nop\003orn\003orr\005pkhbt\005pkhtb\003pld\004pldw\003pli"
    "\003pop\004push\004qadd\006qadd16\005qadd8\004qasx\005qdadd\005qdsub\004"
    "qsax\004qsub\006qsub16\005qsub8\004rbit\003rev\005rev16\005revsh\005rfe"
    "da\005rfedb\005rfeia\005rfeib\003ror\003rrx\003rsb\003rsc\006sadd16\005"
    "sadd8\004sasx\003sbc\004sbfx\004sdiv\003sel\006setend\003sev\007shadd16"
    "\006shadd8\005shasx\005shsax\007shsub16\006shsub8\003smc\006smlabb\006s"
    "mlabt\005smlad\006smladx\005smlal\007smlalbb\007smlalbt\006smlald\007sm"
    "laldx\007smlaltb\007smlaltt\006smlatb\006smlatt\006smlawb\006smlawt\005"
    "smlsd\006smlsdx\006smlsld\007smlsldx\005smmla\006smmlar\005smmls\006smm"
    "lsr\005smmul\006smmulr\005smuad\006smuadx\006smulbb\006smulbt\005smull\006"
    "smultb\006smultt\006smulwb\006smulwt\005smusd\006smusdx\005srsda\005srs"
    "db\005srsia\005srsib\004ssat\006ssat16\004ssax\006ssub16\005ssub8\003st"
    "c\004stc2\005stc2l\004stcl\003stm\005stmda\005stmdb\005stmib\003str\004"
    "strb\005strbt\004strd\005strex\006strexb\006strexd\006strexh\004strh\005"
    "strht\004strt\003sub\004subw\003svc\003swp\004swpb\005sxtab\007sxtab16\005"
    "sxtah\004sxtb\006sxtb16\004sxth\003tbb\003tbh\003teq\004trap\003tst\006"
    "uadd16\005uadd8\004uasx\004ubfx\004udiv\007uhadd16\006uhadd8\005uhasx\005"
    "uhsax\007uhsub16\006uhsub8\005umaal\005umlal\005umull\007uqadd16\006uqa"
    "dd8\005uqasx\005uqsax\007uqsub16\006uqsub8\005usad8\006usada8\004usat\006"
    "usat16\004usax\006usub16\005usub8\005uxtab\007uxtab16\005uxtah\004uxtb\006"
    "uxtb16\004uxth\004vaba\005vabal\004vabd\005vabdl\004vabs\005vacge\005va"
    "cgt\004vadd\006vaddhn\005vaddl\005vaddw\004vand\004vbic\004vbif\004vbit"
    "\004vbsl\004vceq\004vcge\004vcgt\004vcle\004vcls\004vclt\004vclz\004vcm"
    "p\005vcmpe\004vcnt\004vcvt\005vcvtb\005vcvtr\005vcvtt\004vdiv\004vdup\004"
    "veor\004vext\004vfma\004vfms\005vfnma\005vfnms\005vhadd\005vhsub\004vld"
    "1\004vld2\004vld3\004vld4\006vldmdb\006vldmia\004vldr\004vmax\004vmin\004"
    "vmla\005vmlal\004vmls\005vmlsl\004vmov\005vmovl\005vmovn\004vmrs\004vms"
    "r\004vmul\005vmull\004vmvn\004vneg\005vnmla\005vnmls\005vnmul\004vorn\004"
    "vorr\006vpadal\005vpadd\006vpaddl\005vpmax\005vpmin\004vpop\005vpush\005"
    "vqabs\005vqadd\007vqdmlal\007vqdmlsl\007vqdmulh\007vqdmull\006vqmovn\007"
    "vqmovun\005vqneg\010vqrdmulh\006vqrshl\007vqrshrn\010vqrshrun\005vqshl\006"
    "vqshlu\006vqshrn\007vqshrun\005vqsub\007vraddhn\006vrecpe\006vrecps\006"
    "vrev16\006vrev32\006vrev64\006vrhadd\005vrshl\005vrshr\006vrshrn\007vrs"
    "qrte\007vrsqrts\005vrsra\007vrsubhn\004vshl\005vshll\004vshr\005vshrn\004"
    "vsli\005vsqrt\004vsra\004vsri\004vst1\004vst2\004vst3\004vst4\006vstmdb"
    "\006vstmia\004vstr\004vsub\006vsubhn\005vsubl\005vsubw\004vswp\004vtbl\004"
    "vtbx\004vtrn\004vtst\004vuzp\004vzip\003wfe\003wfi\005yield";

namespace {
  struct MatchEntry {
    uint16_t Mnemonic;
    uint16_t Opcode;
    uint16_t ConvertFn;
    uint32_t RequiredFeatures;
    uint16_t Classes[18];
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

static const MatchEntry MatchTable[3164] = {
  { 0 /* adc */, ARM::tADC, Convert__Reg1_2__CCOut1_0__Tie0__Reg1_3__CondCode2_1, Feature_IsThumb, { MCK_CCOut, MCK_CondCode, MCK_tGPR, MCK_tGPR }, 0},
  { 0 /* adc */, ARM::ADCrsr, Convert__Reg1_2__Reg1_2__RegShiftedReg3_3__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPRnopc, MCK_RegShiftedReg }, 0},
  { 0 /* adc */, ARM::ADCrr, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_GPR }, 0},
  { 0 /* adc */, ARM::ADCri, Convert__Reg1_2__Reg1_2__ARMSOImm1_3__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_ARMSOImm }, 0},
  { 0 /* adc */, ARM::ADCrsi, Convert__Reg1_2__Reg1_2__RegShiftedImm2_3__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_RegShiftedImm }, 0},
  { 0 /* adc */, ARM::t2ADCrr, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 0 /* adc */, ARM::t2ADCrs, Convert__Reg1_2__Reg1_3__RegShiftedImm2_4__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_RegShiftedImm }, 0},
  { 0 /* adc */, ARM::t2ADCri, Convert__Reg1_2__Reg1_3__T2SOImm1_4__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_T2SOImm }, 0},
  { 0 /* adc */, ARM::ADCrsr, Convert__Reg1_2__Reg1_3__RegShiftedReg3_4__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_RegShiftedReg }, 0},
  { 0 /* adc */, ARM::ADCrr, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_GPR, MCK_GPR }, 0},
  { 0 /* adc */, ARM::ADCri, Convert__Reg1_2__Reg1_3__ARMSOImm1_4__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_GPR, MCK_ARMSOImm }, 0},
  { 0 /* adc */, ARM::ADCrsi, Convert__Reg1_2__Reg1_3__RegShiftedImm2_4__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_GPR, MCK_RegShiftedImm }, 0},
  { 0 /* adc */, ARM::t2ADCrr, Convert__Reg1_3__Reg1_4__Reg1_5__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK__DOT_w, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 0 /* adc */, ARM::t2ADCrs, Convert__Reg1_3__Reg1_4__RegShiftedImm2_5__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK__DOT_w, MCK_rGPR, MCK_rGPR, MCK_RegShiftedImm }, 0},
  { 4 /* add */, ARM::tADDspr, Convert__Reg1_1__Tie0__Reg1_2__CondCode2_0, Feature_IsThumb, { MCK_CondCode, MCK_GPRsp, MCK_GPR }, 0},
  { 4 /* add */, ARM::tADDspi, Convert__Reg1_1__Tie0__Imm0_508s41_2__CondCode2_0, Feature_IsThumb, { MCK_CondCode, MCK_GPRsp, MCK_Imm0_508s4 }, 0},
  { 4 /* add */, ARM::tSUBspi, Convert__regSP__Tie0__Imm0_508s4Neg1_2__CondCode2_0, Feature_IsThumb, { MCK_CondCode, MCK_GPRsp, MCK_Imm0_508s4Neg }, 0},
  { 4 /* add */, ARM::t2ADDri12, Convert__Reg1_1__Reg1_1__Imm0_40951_2__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_GPRnopc, MCK_Imm0_4095 }, 0},
  { 4 /* add */, ARM::t2SUBri12, Convert__Reg1_1__Reg1_1__Imm0_4095Neg1_2__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_GPRnopc, MCK_Imm0_4095Neg }, 0},
  { 4 /* add */, ARM::tADDhirr, Convert__Reg1_1__Tie0__Reg1_2__CondCode2_0, Feature_IsThumb, { MCK_CondCode, MCK_GPR, MCK_GPR }, 0},
  { 4 /* add */, ARM::tADDi8, Convert__Reg1_2__CCOut1_0__Tie0__Imm0_2551_3__CondCode2_1, Feature_IsThumb, { MCK_CCOut, MCK_CondCode, MCK_tGPR, MCK_Imm0_255 }, 0},
  { 4 /* add */, ARM::t2ADDrr, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_GPRnopc, MCK_rGPR }, 0},
  { 4 /* add */, ARM::t2ADDrs, Convert__Reg1_2__Reg1_2__RegShiftedImm2_3__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_GPRnopc, MCK_RegShiftedImm }, 0},
  { 4 /* add */, ARM::t2ADDri, Convert__Reg1_2__Reg1_2__T2SOImm1_3__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_GPRnopc, MCK_T2SOImm }, 0},
  { 4 /* add */, ARM::t2SUBri, Convert__Reg1_2__Reg1_2__T2SOImmNeg1_3__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_GPRnopc, MCK_T2SOImmNeg }, 0},
  { 4 /* add */, ARM::t2SUBri, Convert__Reg1_2__Reg1_2__T2SOImmNeg1_3__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_GPRnopc, MCK_T2SOImmNeg }, 0},
  { 4 /* add */, ARM::ADDrr, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_GPR }, 0},
  { 4 /* add */, ARM::ADDri, Convert__Reg1_2__Reg1_2__ARMSOImm1_3__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_ARMSOImm }, 0},
  { 4 /* add */, ARM::ADDrsi, Convert__Reg1_2__Reg1_2__RegShiftedImm2_3__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_RegShiftedImm }, 0},
  { 4 /* add */, ARM::ADDrsr, Convert__Reg1_2__Reg1_2__RegShiftedReg3_3__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_RegShiftedReg }, 0},
  { 4 /* add */, ARM::SUBri, Convert__Reg1_2__Reg1_2__ARMSOImmNeg1_3__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_ARMSOImmNeg }, 0},
  { 4 /* add */, ARM::tADDrSPi, Convert__Reg1_1__Reg1_2__Imm0_1020s41_3__CondCode2_0, Feature_IsThumb, { MCK_CondCode, MCK_tGPR, MCK_GPRsp, MCK_Imm0_1020s4 }, 0},
  { 4 /* add */, ARM::t2ADR, Convert__Reg1_1__Imm0_40951_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_PC, MCK_Imm0_4095 }, 0},
  { 4 /* add */, ARM::tADDspi, Convert__regSP__Tie0__Imm0_508s41_3__CondCode2_0, Feature_IsThumb, { MCK_CondCode, MCK_GPRsp, MCK_GPRsp, MCK_Imm0_508s4 }, 0},
  { 4 /* add */, ARM::tSUBspi, Convert__regSP__Tie0__Imm0_508s4Neg1_3__CondCode2_0, Feature_IsThumb, { MCK_CondCode, MCK_GPRsp, MCK_GPRsp, MCK_Imm0_508s4Neg }, 0},
  { 4 /* add */, ARM::t2ADDri12, Convert__Reg1_1__Reg1_2__Imm0_40951_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_GPRnopc, MCK_GPR, MCK_Imm0_4095 }, 0},
  { 4 /* add */, ARM::t2SUBri12, Convert__Reg1_1__Reg1_2__Imm0_4095Neg1_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_GPRnopc, MCK_GPR, MCK_Imm0_4095Neg }, 0},
  { 4 /* add */, ARM::tADDrSP, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsThumb, { MCK_CondCode, MCK_GPR, MCK_GPRsp, MCK_GPR }, 0},
  { 4 /* add */, ARM::t2SUBri, Convert__Reg1_3__Reg1_3__T2SOImmNeg1_4__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK__DOT_w, MCK_GPRnopc, MCK_T2SOImmNeg }, 0},
  { 4 /* add */, ARM::tADDrr, Convert__Reg1_2__CCOut1_0__Reg1_3__Reg1_4__CondCode2_1, Feature_IsThumb, { MCK_CCOut, MCK_CondCode, MCK_tGPR, MCK_tGPR, MCK_tGPR }, 0},
  { 4 /* add */, ARM::tADDi3, Convert__Reg1_2__CCOut1_0__Reg1_3__Imm0_71_4__CondCode2_1, Feature_IsThumb, { MCK_CCOut, MCK_CondCode, MCK_tGPR, MCK_tGPR, MCK_Imm0_7 }, 0},
  { 4 /* add */, ARM::t2ADDrr, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_rGPR }, 0},
  { 4 /* add */, ARM::t2ADDrs, Convert__Reg1_2__Reg1_3__RegShiftedImm2_4__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_RegShiftedImm }, 0},
  { 4 /* add */, ARM::t2ADDri, Convert__Reg1_2__Reg1_3__T2SOImm1_4__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_T2SOImm }, 0},
  { 4 /* add */, ARM::t2SUBri, Convert__Reg1_2__Reg1_3__T2SOImmNeg1_4__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_T2SOImmNeg }, 0},
  { 4 /* add */, ARM::t2SUBri, Convert__Reg1_2__Reg1_3__T2SOImmNeg1_4__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_T2SOImmNeg }, 0},
  { 4 /* add */, ARM::ADDrr, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_GPR, MCK_GPR }, 0},
  { 4 /* add */, ARM::ADDri, Convert__Reg1_2__Reg1_3__ARMSOImm1_4__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_GPR, MCK_ARMSOImm }, 0},
  { 4 /* add */, ARM::ADDrsi, Convert__Reg1_2__Reg1_3__RegShiftedImm2_4__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_GPR, MCK_RegShiftedImm }, 0},
  { 4 /* add */, ARM::ADDrsr, Convert__Reg1_2__Reg1_3__RegShiftedReg3_4__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_GPR, MCK_RegShiftedReg }, 0},
  { 4 /* add */, ARM::SUBri, Convert__Reg1_2__Reg1_3__ARMSOImmNeg1_4__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_GPR, MCK_ARMSOImmNeg }, 0},
  { 4 /* add */, ARM::t2ADDrr, Convert__Reg1_3__Reg1_4__Reg1_5__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK__DOT_w, MCK_GPRnopc, MCK_GPRnopc, MCK_rGPR }, 0},
  { 4 /* add */, ARM::t2ADDrs, Convert__Reg1_3__Reg1_4__RegShiftedImm2_5__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK__DOT_w, MCK_GPRnopc, MCK_GPRnopc, MCK_RegShiftedImm }, 0},
  { 4 /* add */, ARM::t2ADDri, Convert__Reg1_3__Reg1_4__T2SOImm1_5__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK__DOT_w, MCK_GPRnopc, MCK_GPRnopc, MCK_T2SOImm }, 0},
  { 4 /* add */, ARM::t2SUBri, Convert__Reg1_3__Reg1_4__T2SOImmNeg1_5__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK__DOT_w, MCK_GPRnopc, MCK_GPRnopc, MCK_T2SOImmNeg }, 0},
  { 8 /* addw */, ARM::t2SUBri12, Convert__Reg1_1__Reg1_1__Imm0_4095Neg1_2__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_GPRnopc, MCK_Imm0_4095Neg }, 0},
  { 8 /* addw */, ARM::t2ADDri12, Convert__Reg1_1__Reg1_2__Imm0_40951_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_GPRnopc, MCK_GPR, MCK_Imm0_4095 }, 0},
  { 8 /* addw */, ARM::t2SUBri12, Convert__Reg1_1__Reg1_2__Imm0_4095Neg1_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_GPRnopc, MCK_GPR, MCK_Imm0_4095Neg }, 0},
  { 13 /* adr */, ARM::tADR, Convert__Reg1_1__Imm1_2__CondCode2_0, Feature_IsThumb, { MCK_CondCode, MCK_tGPR, MCK_Imm }, 0},
  { 13 /* adr */, ARM::t2ADR, Convert__Reg1_1__Imm1_2__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_Imm }, 0},
  { 13 /* adr */, ARM::ADR, Convert__Reg1_1__AdrLabel1_2__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_AdrLabel }, 0},
  { 13 /* adr */, ARM::t2ADR, Convert__Reg1_2__Imm1_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK__DOT_w, MCK_rGPR, MCK_Imm }, 0},
  { 17 /* and */, ARM::tAND, Convert__Reg1_2__CCOut1_0__Tie0__Reg1_3__CondCode2_1, Feature_IsThumb, { MCK_CCOut, MCK_CondCode, MCK_tGPR, MCK_tGPR }, 0},
  { 17 /* and */, ARM::t2ANDrr, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_rGPR, MCK_rGPR }, 0},
  { 17 /* and */, ARM::t2ANDrs, Convert__Reg1_2__Reg1_2__RegShiftedImm2_3__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_rGPR, MCK_RegShiftedImm }, 0},
  { 17 /* and */, ARM::BICri, Convert__Reg1_2__Reg1_2__ARMSOImmNot1_3__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_rGPR, MCK_ARMSOImmNot }, 0},
  { 17 /* and */, ARM::t2BICri, Convert__Reg1_2__Reg1_2__ARMSOImmNot1_3__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_rGPR, MCK_ARMSOImmNot }, 0},
  { 17 /* and */, ARM::t2ANDri, Convert__Reg1_2__Reg1_2__T2SOImm1_3__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_rGPR, MCK_T2SOImm }, 0},
  { 17 /* and */, ARM::ANDrr, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_GPR }, 0},
  { 17 /* and */, ARM::ANDri, Convert__Reg1_2__Reg1_2__ARMSOImm1_3__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_ARMSOImm }, 0},
  { 17 /* and */, ARM::ANDrsi, Convert__Reg1_2__Reg1_2__RegShiftedImm2_3__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_RegShiftedImm }, 0},
  { 17 /* and */, ARM::ANDrsr, Convert__Reg1_2__Reg1_2__RegShiftedReg3_3__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_RegShiftedReg }, 0},
  { 17 /* and */, ARM::t2ANDrr, Convert__Reg1_3__Reg1_3__Reg1_4__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK__DOT_w, MCK_rGPR, MCK_rGPR }, 0},
  { 17 /* and */, ARM::t2ANDrs, Convert__Reg1_3__Reg1_3__RegShiftedImm2_4__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK__DOT_w, MCK_rGPR, MCK_RegShiftedImm }, 0},
  { 17 /* and */, ARM::t2ANDri, Convert__Reg1_3__Reg1_3__T2SOImm1_4__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK__DOT_w, MCK_rGPR, MCK_T2SOImm }, 0},
  { 17 /* and */, ARM::t2ANDrr, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 17 /* and */, ARM::t2ANDrs, Convert__Reg1_2__Reg1_3__RegShiftedImm2_4__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_RegShiftedImm }, 0},
  { 17 /* and */, ARM::BICri, Convert__Reg1_2__Reg1_3__ARMSOImmNot1_4__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_ARMSOImmNot }, 0},
  { 17 /* and */, ARM::t2BICri, Convert__Reg1_2__Reg1_3__ARMSOImmNot1_4__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_ARMSOImmNot }, 0},
  { 17 /* and */, ARM::t2ANDri, Convert__Reg1_2__Reg1_3__T2SOImm1_4__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_T2SOImm }, 0},
  { 17 /* and */, ARM::ANDrr, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_GPR, MCK_GPR }, 0},
  { 17 /* and */, ARM::ANDri, Convert__Reg1_2__Reg1_3__ARMSOImm1_4__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_GPR, MCK_ARMSOImm }, 0},
  { 17 /* and */, ARM::ANDrsi, Convert__Reg1_2__Reg1_3__RegShiftedImm2_4__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_GPR, MCK_RegShiftedImm }, 0},
  { 17 /* and */, ARM::ANDrsr, Convert__Reg1_2__Reg1_3__RegShiftedReg3_4__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_GPR, MCK_RegShiftedReg }, 0},
  { 17 /* and */, ARM::t2ANDrr, Convert__Reg1_3__Reg1_4__Reg1_5__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK__DOT_w, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 17 /* and */, ARM::t2ANDrs, Convert__Reg1_3__Reg1_4__RegShiftedImm2_5__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK__DOT_w, MCK_rGPR, MCK_rGPR, MCK_RegShiftedImm }, 0},
  { 17 /* and */, ARM::t2ANDri, Convert__Reg1_3__Reg1_4__T2SOImm1_5__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK__DOT_w, MCK_rGPR, MCK_rGPR, MCK_T2SOImm }, 0},
  { 21 /* asr */, ARM::tASRrr, Convert__Reg1_2__CCOut1_0__Tie0__Reg1_3__CondCode2_1, Feature_IsThumb, { MCK_CCOut, MCK_CondCode, MCK_tGPR, MCK_tGPR }, 0},
  { 21 /* asr */, ARM::tASRri, Convert__Reg1_2__CCOut1_0__Reg1_2__ImmThumbSR1_3__CondCode2_1, Feature_IsThumb, { MCK_CCOut, MCK_CondCode, MCK_tGPR, MCK_ImmThumbSR }, 0},
  { 21 /* asr */, ARM::t2ASRrr, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_rGPR, MCK_rGPR }, 0},
  { 21 /* asr */, ARM::t2ASRri, Convert__Reg1_2__Reg1_2__ImmThumbSR1_3__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_rGPR, MCK_ImmThumbSR }, 0},
  { 21 /* asr */, ARM::ASRr, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc }, 0},
  { 21 /* asr */, ARM::ASRi, Convert__Reg1_2__Reg1_2__Imm0_321_3__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_Imm0_32 }, 0},
  { 21 /* asr */, ARM::t2ASRrr, Convert__Reg1_3__Reg1_3__Reg1_4__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK__DOT_w, MCK_rGPR, MCK_rGPR }, 0},
  { 21 /* asr */, ARM::t2ASRri, Convert__Reg1_3__Reg1_3__ImmThumbSR1_4__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK__DOT_w, MCK_rGPR, MCK_ImmThumbSR }, 0},
  { 21 /* asr */, ARM::tASRri, Convert__Reg1_2__CCOut1_0__Reg1_3__ImmThumbSR1_4__CondCode2_1, Feature_IsThumb, { MCK_CCOut, MCK_CondCode, MCK_tGPR, MCK_tGPR, MCK_ImmThumbSR }, 0},
  { 21 /* asr */, ARM::t2ASRrr, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 21 /* asr */, ARM::t2ASRri, Convert__Reg1_2__Reg1_3__ImmThumbSR1_4__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_ImmThumbSR }, 0},
  { 21 /* asr */, ARM::ASRr, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_GPRnopc }, 0},
  { 21 /* asr */, ARM::ASRi, Convert__Reg1_2__Reg1_3__Imm0_321_4__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_GPR, MCK_Imm0_32 }, 0},
  { 21 /* asr */, ARM::t2ASRrr, Convert__Reg1_3__Reg1_4__Reg1_5__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK__DOT_w, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 21 /* asr */, ARM::t2ASRri, Convert__Reg1_3__Reg1_4__ImmThumbSR1_5__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK__DOT_w, MCK_rGPR, MCK_rGPR, MCK_ImmThumbSR }, 0},
  { 25 /* b */, ARM::Bcc, Convert__Imm1_1__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_Imm }, 0},
  { 25 /* b */, ARM::tB, Convert__Imm1_1__CondCode2_0, Feature_IsThumb, { MCK_CondCode, MCK_Imm }, 0},
  { 25 /* b */, ARM::tBcc, Convert__Imm1_1__CondCode2_0, Feature_IsThumb, { MCK_CondCode, MCK_Imm }, 0},
  { 25 /* b */, ARM::t2B, Convert__Imm1_2__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK__DOT_w, MCK_Imm }, 0},
  { 25 /* b */, ARM::t2Bcc, Convert__Imm1_2__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK__DOT_w, MCK_Imm }, 0},
  { 27 /* bfc */, ARM::t2BFC, Convert__Reg1_1__Tie0__Bitfield1_2__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_Bitfield }, 0},
  { 27 /* bfc */, ARM::BFC, Convert__Reg1_1__Tie0__Bitfield1_2__CondCode2_0, Feature_IsARM|Feature_HasV6T2, { MCK_CondCode, MCK_GPR, MCK_Bitfield }, 0},
  { 31 /* bfi */, ARM::t2BFI, Convert__Reg1_1__Tie0__Reg1_2__Bitfield1_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_Bitfield }, 0},
  { 31 /* bfi */, ARM::BFI, Convert__Reg1_1__Tie0__Reg1_2__Bitfield1_3__CondCode2_0, Feature_IsARM|Feature_HasV6T2, { MCK_CondCode, MCK_GPRnopc, MCK_GPR, MCK_Bitfield }, 0},
  { 35 /* bic */, ARM::tBIC, Convert__Reg1_2__CCOut1_0__Tie0__Reg1_3__CondCode2_1, Feature_IsThumb, { MCK_CCOut, MCK_CondCode, MCK_tGPR, MCK_tGPR }, 0},
  { 35 /* bic */, ARM::t2BICrr, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_rGPR, MCK_rGPR }, 0},
  { 35 /* bic */, ARM::t2BICrs, Convert__Reg1_2__Reg1_2__RegShiftedImm2_3__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_rGPR, MCK_RegShiftedImm }, 0},
  { 35 /* bic */, ARM::ANDri, Convert__Reg1_2__Reg1_2__ARMSOImmNot1_3__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_rGPR, MCK_ARMSOImmNot }, 0},
  { 35 /* bic */, ARM::t2ANDri, Convert__Reg1_2__Reg1_2__ARMSOImmNot1_3__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_rGPR, MCK_ARMSOImmNot }, 0},
  { 35 /* bic */, ARM::t2BICri, Convert__Reg1_2__Reg1_2__T2SOImm1_3__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_rGPR, MCK_T2SOImm }, 0},
  { 35 /* bic */, ARM::BICrr, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_GPR }, 0},
  { 35 /* bic */, ARM::BICri, Convert__Reg1_2__Reg1_2__ARMSOImm1_3__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_ARMSOImm }, 0},
  { 35 /* bic */, ARM::BICrsi, Convert__Reg1_2__Reg1_2__RegShiftedImm2_3__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_RegShiftedImm }, 0},
  { 35 /* bic */, ARM::BICrsr, Convert__Reg1_2__Reg1_2__RegShiftedReg3_3__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_RegShiftedReg }, 0},
  { 35 /* bic */, ARM::t2BICrr, Convert__Reg1_3__Reg1_3__Reg1_4__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK__DOT_w, MCK_rGPR, MCK_rGPR }, 0},
  { 35 /* bic */, ARM::t2BICrs, Convert__Reg1_3__Reg1_3__RegShiftedImm2_4__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK__DOT_w, MCK_rGPR, MCK_RegShiftedImm }, 0},
  { 35 /* bic */, ARM::t2BICri, Convert__Reg1_3__Reg1_3__T2SOImm1_4__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK__DOT_w, MCK_rGPR, MCK_T2SOImm }, 0},
  { 35 /* bic */, ARM::t2BICrr, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 35 /* bic */, ARM::t2BICrs, Convert__Reg1_2__Reg1_3__RegShiftedImm2_4__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_RegShiftedImm }, 0},
  { 35 /* bic */, ARM::ANDri, Convert__Reg1_2__Reg1_3__ARMSOImmNot1_4__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_ARMSOImmNot }, 0},
  { 35 /* bic */, ARM::t2ANDri, Convert__Reg1_2__Reg1_3__ARMSOImmNot1_4__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_ARMSOImmNot }, 0},
  { 35 /* bic */, ARM::t2BICri, Convert__Reg1_2__Reg1_3__T2SOImm1_4__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_T2SOImm }, 0},
  { 35 /* bic */, ARM::BICrr, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_GPR, MCK_GPR }, 0},
  { 35 /* bic */, ARM::BICri, Convert__Reg1_2__Reg1_3__ARMSOImm1_4__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_GPR, MCK_ARMSOImm }, 0},
  { 35 /* bic */, ARM::BICrsi, Convert__Reg1_2__Reg1_3__RegShiftedImm2_4__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_GPR, MCK_RegShiftedImm }, 0},
  { 35 /* bic */, ARM::BICrsr, Convert__Reg1_2__Reg1_3__RegShiftedReg3_4__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_GPR, MCK_RegShiftedReg }, 0},
  { 35 /* bic */, ARM::t2BICrr, Convert__Reg1_3__Reg1_4__Reg1_5__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK__DOT_w, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 35 /* bic */, ARM::t2BICrs, Convert__Reg1_3__Reg1_4__RegShiftedImm2_5__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK__DOT_w, MCK_rGPR, MCK_rGPR, MCK_RegShiftedImm }, 0},
  { 35 /* bic */, ARM::t2BICri, Convert__Reg1_3__Reg1_4__T2SOImm1_5__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK__DOT_w, MCK_rGPR, MCK_rGPR, MCK_T2SOImm }, 0},
  { 39 /* bkpt */, ARM::tBKPT, Convert__Imm0_2551_0, Feature_IsThumb, { MCK_Imm0_255 }, 0},
  { 39 /* bkpt */, ARM::BKPT, Convert__Imm0_655351_1__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_Imm0_65535 }, 0},
  { 44 /* bl */, ARM::BL, Convert__Imm1_0, Feature_IsARM, { MCK_Imm }, 0},
  { 44 /* bl */, ARM::BL_pred, Convert__Imm1_1__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_Imm }, 0},
  { 44 /* bl */, ARM::tBL, Convert__CondCode2_0__Imm1_1, Feature_IsThumb, { MCK_CondCode, MCK_Imm }, 0},
  { 47 /* blx */, ARM::BLX, Convert__Reg1_0, Feature_IsARM, { MCK_GPR }, 0},
  { 47 /* blx */, ARM::BLXi, Convert__Imm1_0, Feature_IsARM, { MCK_Imm }, 0},
  { 47 /* blx */, ARM::BLX_pred, Convert__Reg1_1__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPR }, 0},
  { 47 /* blx */, ARM::tBLXr, Convert__CondCode2_0__Reg1_1, Feature_IsThumb, { MCK_CondCode, MCK_GPR }, 0},
  { 47 /* blx */, ARM::tBLXi, Convert__CondCode2_0__Imm1_1, Feature_IsThumb, { MCK_CondCode, MCK_Imm }, 0},
  { 51 /* bx */, ARM::BX, Convert__Reg1_0, Feature_IsARM|Feature_HasV4T, { MCK_GPR }, 0},
  { 51 /* bx */, ARM::BX_RET, Convert__CondCode2_0, Feature_IsARM|Feature_HasV4T, { MCK_CondCode, MCK_LR }, 0},
  { 51 /* bx */, ARM::BX_pred, Convert__Reg1_1__CondCode2_0, Feature_IsARM|Feature_HasV4T, { MCK_CondCode, MCK_GPR }, 0},
  { 51 /* bx */, ARM::tBX, Convert__Reg1_1__CondCode2_0, Feature_IsThumb, { MCK_CondCode, MCK_GPR }, 0},
  { 54 /* bxj */, ARM::t2BXJ, Convert__Reg1_1__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR }, 0},
  { 54 /* bxj */, ARM::BXJ, Convert__Reg1_1__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPR }, 0},
  { 58 /* cbnz */, ARM::tCBNZ, Convert__Reg1_0__Imm1_1, Feature_IsThumb2, { MCK_tGPR, MCK_Imm }, 0},
  { 63 /* cbz */, ARM::tCBZ, Convert__Reg1_0__Imm1_1, Feature_IsThumb2, { MCK_tGPR, MCK_Imm }, 0},
  { 67 /* cdp */, ARM::tCDP, Convert__CoprocNum1_0__Imm0_151_1__CoprocReg1_2__CoprocReg1_3__CoprocReg1_4__Imm0_71_5, Feature_IsThumb2, { MCK_CoprocNum, MCK_Imm0_15, MCK_CoprocReg, MCK_CoprocReg, MCK_CoprocReg, MCK_Imm0_7 }, 0},
  { 67 /* cdp */, ARM::CDP, Convert__CoprocNum1_1__Imm0_151_2__CoprocReg1_3__CoprocReg1_4__CoprocReg1_5__Imm0_71_6__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_CoprocNum, MCK_Imm0_15, MCK_CoprocReg, MCK_CoprocReg, MCK_CoprocReg, MCK_Imm0_7 }, 0},
  { 71 /* cdp2 */, ARM::CDP2, Convert__CoprocNum1_0__Imm0_151_1__CoprocReg1_2__CoprocReg1_3__CoprocReg1_4__Imm0_71_5, Feature_IsARM, { MCK_CoprocNum, MCK_Imm0_15, MCK_CoprocReg, MCK_CoprocReg, MCK_CoprocReg, MCK_Imm0_7 }, 0},
  { 71 /* cdp2 */, ARM::t2CDP2, Convert__CoprocNum1_0__Imm0_151_1__CoprocReg1_2__CoprocReg1_3__CoprocReg1_4__Imm0_71_5, Feature_IsThumb2, { MCK_CoprocNum, MCK_Imm0_15, MCK_CoprocReg, MCK_CoprocReg, MCK_CoprocReg, MCK_Imm0_7 }, 0},
  { 76 /* clrex */, ARM::CLREX, Convert_NoOperands, Feature_IsARM|Feature_HasV7, {  }, 0},
  { 76 /* clrex */, ARM::t2CLREX, Convert__CondCode2_0, Feature_IsThumb2|Feature_HasV7, { MCK_CondCode }, 0},
  { 82 /* clz */, ARM::t2CLZ, Convert__Reg1_1__Reg1_2__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_rGPR }, 0},
  { 82 /* clz */, ARM::CLZ, Convert__Reg1_1__Reg1_2__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_GPR }, 0},
  { 86 /* cmn */, ARM::tCMNz, Convert__Reg1_1__Reg1_2__CondCode2_0, Feature_IsThumb, { MCK_CondCode, MCK_tGPR, MCK_tGPR }, 0},
  { 86 /* cmn */, ARM::CMPri, Convert__Reg1_1__ARMSOImmNeg1_2__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_rGPR, MCK_ARMSOImmNeg }, 0},
  { 86 /* cmn */, ARM::t2CMPri, Convert__Reg1_1__T2SOImmNeg1_2__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_T2SOImmNeg }, 0},
  { 86 /* cmn */, ARM::t2CMNzrr, Convert__Reg1_1__Reg1_2__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_GPRnopc, MCK_rGPR }, 0},
  { 86 /* cmn */, ARM::t2CMNzrs, Convert__Reg1_1__RegShiftedImm2_2__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_GPRnopc, MCK_RegShiftedImm }, 0},
  { 86 /* cmn */, ARM::CMNzrsr, Convert__Reg1_1__RegShiftedReg3_2__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPRnopc, MCK_RegShiftedReg }, 0},
  { 86 /* cmn */, ARM::t2CMNri, Convert__Reg1_1__T2SOImm1_2__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_GPRnopc, MCK_T2SOImm }, 0},
  { 86 /* cmn */, ARM::CMNzrr, Convert__Reg1_1__Reg1_2__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_GPR }, 0},
  { 86 /* cmn */, ARM::CMNri, Convert__Reg1_1__ARMSOImm1_2__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_ARMSOImm }, 0},
  { 86 /* cmn */, ARM::CMNzrsi, Convert__Reg1_1__RegShiftedImm2_2__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_RegShiftedImm }, 0},
  { 86 /* cmn */, ARM::t2CMNzrr, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK__DOT_w, MCK_GPRnopc, MCK_rGPR }, 0},
  { 86 /* cmn */, ARM::t2CMNzrs, Convert__Reg1_2__RegShiftedImm2_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK__DOT_w, MCK_GPRnopc, MCK_RegShiftedImm }, 0},
  { 86 /* cmn */, ARM::t2CMNri, Convert__Reg1_2__T2SOImm1_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK__DOT_w, MCK_GPRnopc, MCK_T2SOImm }, 0},
  { 90 /* cmp */, ARM::tCMPr, Convert__Reg1_1__Reg1_2__CondCode2_0, Feature_IsThumb, { MCK_CondCode, MCK_tGPR, MCK_tGPR }, 0},
  { 90 /* cmp */, ARM::tCMPi8, Convert__Reg1_1__Imm0_2551_2__CondCode2_0, Feature_IsThumb, { MCK_CondCode, MCK_tGPR, MCK_Imm0_255 }, 0},
  { 90 /* cmp */, ARM::CMNri, Convert__Reg1_1__ARMSOImmNeg1_2__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_rGPR, MCK_ARMSOImmNeg }, 0},
  { 90 /* cmp */, ARM::t2CMNri, Convert__Reg1_1__T2SOImmNeg1_2__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_T2SOImmNeg }, 0},
  { 90 /* cmp */, ARM::t2CMPrs, Convert__Reg1_1__RegShiftedImm2_2__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_GPRnopc, MCK_RegShiftedImm }, 0},
  { 90 /* cmp */, ARM::CMPrsr, Convert__Reg1_1__RegShiftedReg3_2__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPRnopc, MCK_RegShiftedReg }, 0},
  { 90 /* cmp */, ARM::t2CMPri, Convert__Reg1_1__T2SOImm1_2__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_GPRnopc, MCK_T2SOImm }, 0},
  { 90 /* cmp */, ARM::CMPrr, Convert__Reg1_1__Reg1_2__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_GPR }, 0},
  { 90 /* cmp */, ARM::tCMPhir, Convert__Reg1_1__Reg1_2__CondCode2_0, Feature_IsThumb, { MCK_CondCode, MCK_GPR, MCK_GPR }, 0},
  { 90 /* cmp */, ARM::CMPri, Convert__Reg1_1__ARMSOImm1_2__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_ARMSOImm }, 0},
  { 90 /* cmp */, ARM::CMPrsi, Convert__Reg1_1__RegShiftedImm2_2__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_RegShiftedImm }, 0},
  { 90 /* cmp */, ARM::t2CMPrr, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK__DOT_w, MCK_GPRnopc, MCK_rGPR }, 0},
  { 90 /* cmp */, ARM::t2CMPrs, Convert__Reg1_2__RegShiftedImm2_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK__DOT_w, MCK_GPRnopc, MCK_RegShiftedImm }, 0},
  { 90 /* cmp */, ARM::t2CMPri, Convert__Reg1_2__T2SOImm1_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK__DOT_w, MCK_GPRnopc, MCK_T2SOImm }, 0},
  { 94 /* cps */, ARM::CPS1p, Convert__Imm0_311_0, Feature_IsARM, { MCK_Imm0_31 }, 0},
  { 94 /* cps */, ARM::t2CPS1p, Convert__Imm0_311_0, Feature_IsThumb2, { MCK_Imm0_31 }, 0},
  { 94 /* cps */, ARM::tCPS, Convert__Imm1_0__imm_0, Feature_IsThumb, { MCK_Imm }, 0},
  { 94 /* cps */, ARM::tCPS, Convert__Imm1_0__imm_0, Feature_IsThumb, { MCK_Imm }, 0},
  { 94 /* cps */, ARM::CPS2p, Convert__Imm1_0__ProcIFlags1_1, Feature_IsARM, { MCK_Imm, MCK_ProcIFlags }, 0},
  { 94 /* cps */, ARM::tCPS, Convert__Imm1_0__ProcIFlags1_1, Feature_IsThumb, { MCK_Imm, MCK_ProcIFlags }, 0},
  { 94 /* cps */, ARM::t2CPS2p, Convert__Imm1_0__ProcIFlags1_2, Feature_IsThumb2, { MCK_Imm, MCK__DOT_w, MCK_ProcIFlags }, 0},
  { 94 /* cps */, ARM::CPS3p, Convert__Imm1_0__ProcIFlags1_1__Imm0_311_2, Feature_IsARM, { MCK_Imm, MCK_ProcIFlags, MCK_Imm0_31 }, 0},
  { 94 /* cps */, ARM::t2CPS3p, Convert__Imm1_0__ProcIFlags1_2__Imm1_3, Feature_IsThumb2, { MCK_Imm, MCK__DOT_w, MCK_ProcIFlags, MCK_Imm }, 0},
  { 98 /* dbg */, ARM::DBG, Convert__Imm0_151_1__CondCode2_0, Feature_IsARM|Feature_HasV7, { MCK_CondCode, MCK_Imm0_15 }, 0},
  { 98 /* dbg */, ARM::t2DBG, Convert__Imm0_151_1__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_Imm0_15 }, 0},
  { 102 /* dmb */, ARM::DMB, Convert__imm_15, Feature_IsARM|Feature_HasDB, {  }, 0},
  { 102 /* dmb */, ARM::t2DMB, Convert__imm_15, Feature_IsThumb|Feature_HasDB, {  }, 0},
  { 102 /* dmb */, ARM::DMB, Convert__MemBarrierOpt1_0, Feature_IsARM|Feature_HasDB, { MCK_MemBarrierOpt }, 0},
  { 102 /* dmb */, ARM::t2DMB, Convert__MemBarrierOpt1_0, Feature_IsThumb|Feature_HasDB, { MCK_MemBarrierOpt }, 0},
  { 106 /* dsb */, ARM::DSB, Convert__imm_15, Feature_IsARM|Feature_HasDB, {  }, 0},
  { 106 /* dsb */, ARM::t2DSB, Convert__imm_15, Feature_IsThumb|Feature_HasDB, {  }, 0},
  { 106 /* dsb */, ARM::DSB, Convert__MemBarrierOpt1_0, Feature_IsARM|Feature_HasDB, { MCK_MemBarrierOpt }, 0},
  { 106 /* dsb */, ARM::t2DSB, Convert__MemBarrierOpt1_0, Feature_IsThumb|Feature_HasDB, { MCK_MemBarrierOpt }, 0},
  { 110 /* eor */, ARM::tEOR, Convert__Reg1_2__CCOut1_0__Tie0__Reg1_3__CondCode2_1, Feature_IsThumb, { MCK_CCOut, MCK_CondCode, MCK_tGPR, MCK_tGPR }, 0},
  { 110 /* eor */, ARM::t2EORrr, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_rGPR, MCK_rGPR }, 0},
  { 110 /* eor */, ARM::t2EORrs, Convert__Reg1_2__Reg1_2__RegShiftedImm2_3__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_rGPR, MCK_RegShiftedImm }, 0},
  { 110 /* eor */, ARM::t2EORri, Convert__Reg1_2__Reg1_2__T2SOImm1_3__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_rGPR, MCK_T2SOImm }, 0},
  { 110 /* eor */, ARM::EORrr, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_GPR }, 0},
  { 110 /* eor */, ARM::EORri, Convert__Reg1_2__Reg1_2__ARMSOImm1_3__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_ARMSOImm }, 0},
  { 110 /* eor */, ARM::EORrsi, Convert__Reg1_2__Reg1_2__RegShiftedImm2_3__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_RegShiftedImm }, 0},
  { 110 /* eor */, ARM::EORrsr, Convert__Reg1_2__Reg1_2__RegShiftedReg3_3__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_RegShiftedReg }, 0},
  { 110 /* eor */, ARM::t2EORrr, Convert__Reg1_3__Reg1_3__Reg1_4__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK__DOT_w, MCK_rGPR, MCK_rGPR }, 0},
  { 110 /* eor */, ARM::t2EORrs, Convert__Reg1_3__Reg1_3__RegShiftedImm2_4__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK__DOT_w, MCK_rGPR, MCK_RegShiftedImm }, 0},
  { 110 /* eor */, ARM::t2EORri, Convert__Reg1_3__Reg1_3__T2SOImm1_4__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK__DOT_w, MCK_rGPR, MCK_T2SOImm }, 0},
  { 110 /* eor */, ARM::t2EORrr, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 110 /* eor */, ARM::t2EORrs, Convert__Reg1_2__Reg1_3__RegShiftedImm2_4__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_RegShiftedImm }, 0},
  { 110 /* eor */, ARM::t2EORri, Convert__Reg1_2__Reg1_3__T2SOImm1_4__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_T2SOImm }, 0},
  { 110 /* eor */, ARM::EORrr, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_GPR, MCK_GPR }, 0},
  { 110 /* eor */, ARM::EORri, Convert__Reg1_2__Reg1_3__ARMSOImm1_4__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_GPR, MCK_ARMSOImm }, 0},
  { 110 /* eor */, ARM::EORrsi, Convert__Reg1_2__Reg1_3__RegShiftedImm2_4__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_GPR, MCK_RegShiftedImm }, 0},
  { 110 /* eor */, ARM::EORrsr, Convert__Reg1_2__Reg1_3__RegShiftedReg3_4__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_GPR, MCK_RegShiftedReg }, 0},
  { 110 /* eor */, ARM::t2EORrr, Convert__Reg1_3__Reg1_4__Reg1_5__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK__DOT_w, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 110 /* eor */, ARM::t2EORrs, Convert__Reg1_3__Reg1_4__RegShiftedImm2_5__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK__DOT_w, MCK_rGPR, MCK_rGPR, MCK_RegShiftedImm }, 0},
  { 110 /* eor */, ARM::t2EORri, Convert__Reg1_3__Reg1_4__T2SOImm1_5__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK__DOT_w, MCK_rGPR, MCK_rGPR, MCK_T2SOImm }, 0},
  { 114 /* faddd */, ARM::VADDD, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 120 /* fadds */, ARM::VADDS, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK_SPR, MCK_SPR, MCK_SPR }, 0},
  { 126 /* fcmpzd */, ARM::VCMPZD, Convert__Reg1_1__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK_DPR }, 0},
  { 133 /* fcmpzs */, ARM::VCMPZS, Convert__Reg1_1__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK_SPR }, 0},
  { 140 /* fmdhr */, ARM::VSETLNi32, Convert__Reg1_1__Tie0__Reg1_2__imm_1__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK_DPR, MCK_GPR }, 0},
  { 146 /* fmdlr */, ARM::VSETLNi32, Convert__Reg1_1__Tie0__Reg1_2__imm_0__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK_DPR, MCK_GPR }, 0},
  { 152 /* fmstat */, ARM::FMSTAT, Convert__CondCode2_0, Feature_HasVFP2, { MCK_CondCode }, 0},
  { 159 /* fsubd */, ARM::VSUBD, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 165 /* fsubs */, ARM::VSUBS, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK_SPR, MCK_SPR, MCK_SPR }, 0},
  { 171 /* hint */, ARM::HINT, Convert__Imm0_2551_1__CondCode2_0, Feature_IsARM|Feature_HasV6, { MCK_CondCode, MCK_Imm0_255 }, 0},
  { 171 /* hint */, ARM::t2HINT, Convert__Imm0_2551_1__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_Imm0_255 }, 0},
  { 171 /* hint */, ARM::t2HINT, Convert__Imm0_2551_2__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK__DOT_w, MCK_Imm0_255 }, 0},
  { 176 /* isb */, ARM::ISB, Convert__imm_15, Feature_IsARM|Feature_HasDB, {  }, 0},
  { 176 /* isb */, ARM::t2ISB, Convert__imm_15, Feature_IsThumb|Feature_HasDB, {  }, 0},
  { 176 /* isb */, ARM::ISB, Convert__MemBarrierOpt1_0, Feature_IsARM|Feature_HasDB, { MCK_MemBarrierOpt }, 0},
  { 176 /* isb */, ARM::t2ISB, Convert__MemBarrierOpt1_0, Feature_IsThumb|Feature_HasDB, { MCK_MemBarrierOpt }, 0},
  { 180 /* it */, ARM::ITasm, Convert__ITCondCode1_1__ITMask1_0, Feature_IsARM, { MCK_ITMask, MCK_ITCondCode }, 0},
  { 180 /* it */, ARM::t2IT, Convert__ITCondCode1_1__ITMask1_0, Feature_IsThumb2, { MCK_ITMask, MCK_ITCondCode }, 0},
  { 183 /* ldc */, ARM::LDC_OFFSET, Convert__CoprocNum1_1__CoprocReg1_2__AddrMode52_3__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_CoprocNum, MCK_CoprocReg, MCK_AddrMode5 }, 0},
  { 183 /* ldc */, ARM::t2LDC_OFFSET, Convert__CoprocNum1_1__CoprocReg1_2__AddrMode52_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_CoprocNum, MCK_CoprocReg, MCK_AddrMode5 }, 0},
  { 183 /* ldc */, ARM::LDC_PRE, Convert__CoprocNum1_1__CoprocReg1_2__AddrMode52_3__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_CoprocNum, MCK_CoprocReg, MCK_AddrMode5, MCK__EXCLAIM_ }, 0},
  { 183 /* ldc */, ARM::t2LDC_PRE, Convert__CoprocNum1_1__CoprocReg1_2__AddrMode52_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_CoprocNum, MCK_CoprocReg, MCK_AddrMode5, MCK__EXCLAIM_ }, 0},
  { 183 /* ldc */, ARM::LDC_OPTION, Convert__CoprocNum1_1__CoprocReg1_2__MemNoOffset1_3__CoprocOption1_4__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_CoprocNum, MCK_CoprocReg, MCK_MemNoOffset, MCK_CoprocOption }, 0},
  { 183 /* ldc */, ARM::t2LDC_OPTION, Convert__CoprocNum1_1__CoprocReg1_2__MemNoOffset1_3__CoprocOption1_4__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_CoprocNum, MCK_CoprocReg, MCK_MemNoOffset, MCK_CoprocOption }, 0},
  { 183 /* ldc */, ARM::LDC_POST, Convert__CoprocNum1_1__CoprocReg1_2__MemNoOffset1_3__PostIdxImm8s41_4__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_CoprocNum, MCK_CoprocReg, MCK_MemNoOffset, MCK_PostIdxImm8s4 }, 0},
  { 183 /* ldc */, ARM::t2LDC_POST, Convert__CoprocNum1_1__CoprocReg1_2__MemNoOffset1_3__PostIdxImm8s41_4__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_CoprocNum, MCK_CoprocReg, MCK_MemNoOffset, MCK_PostIdxImm8s4 }, 0},
  { 187 /* ldc2 */, ARM::LDC2_OFFSET, Convert__CoprocNum1_0__CoprocReg1_1__AddrMode52_2, Feature_IsARM, { MCK_CoprocNum, MCK_CoprocReg, MCK_AddrMode5 }, 0},
  { 187 /* ldc2 */, ARM::t2LDC2_OFFSET, Convert__CoprocNum1_1__CoprocReg1_2__AddrMode52_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_CoprocNum, MCK_CoprocReg, MCK_AddrMode5 }, 0},
  { 187 /* ldc2 */, ARM::LDC2_PRE, Convert__CoprocNum1_0__CoprocReg1_1__AddrMode52_2, Feature_IsARM, { MCK_CoprocNum, MCK_CoprocReg, MCK_AddrMode5, MCK__EXCLAIM_ }, 0},
  { 187 /* ldc2 */, ARM::LDC2_OPTION, Convert__CoprocNum1_0__CoprocReg1_1__MemNoOffset1_2__CoprocOption1_3, Feature_IsARM, { MCK_CoprocNum, MCK_CoprocReg, MCK_MemNoOffset, MCK_CoprocOption }, 0},
  { 187 /* ldc2 */, ARM::LDC2_POST, Convert__CoprocNum1_0__CoprocReg1_1__MemNoOffset1_2__PostIdxImm8s41_3, Feature_IsARM, { MCK_CoprocNum, MCK_CoprocReg, MCK_MemNoOffset, MCK_PostIdxImm8s4 }, 0},
  { 187 /* ldc2 */, ARM::t2LDC2_PRE, Convert__CoprocNum1_1__CoprocReg1_2__AddrMode52_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_CoprocNum, MCK_CoprocReg, MCK_AddrMode5, MCK__EXCLAIM_ }, 0},
  { 187 /* ldc2 */, ARM::t2LDC2_OPTION, Convert__CoprocNum1_1__CoprocReg1_2__MemNoOffset1_3__CoprocOption1_4__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_CoprocNum, MCK_CoprocReg, MCK_MemNoOffset, MCK_CoprocOption }, 0},
  { 187 /* ldc2 */, ARM::t2LDC2_POST, Convert__CoprocNum1_1__CoprocReg1_2__MemNoOffset1_3__PostIdxImm8s41_4__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_CoprocNum, MCK_CoprocReg, MCK_MemNoOffset, MCK_PostIdxImm8s4 }, 0},
  { 192 /* ldc2l */, ARM::LDC2L_OFFSET, Convert__CoprocNum1_0__CoprocReg1_1__AddrMode52_2, Feature_IsARM, { MCK_CoprocNum, MCK_CoprocReg, MCK_AddrMode5 }, 0},
  { 192 /* ldc2l */, ARM::t2LDC2L_OFFSET, Convert__CoprocNum1_1__CoprocReg1_2__AddrMode52_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_CoprocNum, MCK_CoprocReg, MCK_AddrMode5 }, 0},
  { 192 /* ldc2l */, ARM::LDC2L_PRE, Convert__CoprocNum1_0__CoprocReg1_1__AddrMode52_2, Feature_IsARM, { MCK_CoprocNum, MCK_CoprocReg, MCK_AddrMode5, MCK__EXCLAIM_ }, 0},
  { 192 /* ldc2l */, ARM::LDC2L_OPTION, Convert__CoprocNum1_0__CoprocReg1_1__MemNoOffset1_2__CoprocOption1_3, Feature_IsARM, { MCK_CoprocNum, MCK_CoprocReg, MCK_MemNoOffset, MCK_CoprocOption }, 0},
  { 192 /* ldc2l */, ARM::LDC2L_POST, Convert__CoprocNum1_0__CoprocReg1_1__MemNoOffset1_2__PostIdxImm8s41_3, Feature_IsARM, { MCK_CoprocNum, MCK_CoprocReg, MCK_MemNoOffset, MCK_PostIdxImm8s4 }, 0},
  { 192 /* ldc2l */, ARM::t2LDC2L_PRE, Convert__CoprocNum1_1__CoprocReg1_2__AddrMode52_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_CoprocNum, MCK_CoprocReg, MCK_AddrMode5, MCK__EXCLAIM_ }, 0},
  { 192 /* ldc2l */, ARM::t2LDC2L_OPTION, Convert__CoprocNum1_1__CoprocReg1_2__MemNoOffset1_3__CoprocOption1_4__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_CoprocNum, MCK_CoprocReg, MCK_MemNoOffset, MCK_CoprocOption }, 0},
  { 192 /* ldc2l */, ARM::t2LDC2L_POST, Convert__CoprocNum1_1__CoprocReg1_2__MemNoOffset1_3__PostIdxImm8s41_4__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_CoprocNum, MCK_CoprocReg, MCK_MemNoOffset, MCK_PostIdxImm8s4 }, 0},
  { 198 /* ldcl */, ARM::LDCL_OFFSET, Convert__CoprocNum1_1__CoprocReg1_2__AddrMode52_3__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_CoprocNum, MCK_CoprocReg, MCK_AddrMode5 }, 0},
  { 198 /* ldcl */, ARM::t2LDCL_OFFSET, Convert__CoprocNum1_1__CoprocReg1_2__AddrMode52_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_CoprocNum, MCK_CoprocReg, MCK_AddrMode5 }, 0},
  { 198 /* ldcl */, ARM::LDCL_PRE, Convert__CoprocNum1_1__CoprocReg1_2__AddrMode52_3__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_CoprocNum, MCK_CoprocReg, MCK_AddrMode5, MCK__EXCLAIM_ }, 0},
  { 198 /* ldcl */, ARM::t2LDCL_PRE, Convert__CoprocNum1_1__CoprocReg1_2__AddrMode52_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_CoprocNum, MCK_CoprocReg, MCK_AddrMode5, MCK__EXCLAIM_ }, 0},
  { 198 /* ldcl */, ARM::LDCL_OPTION, Convert__CoprocNum1_1__CoprocReg1_2__MemNoOffset1_3__CoprocOption1_4__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_CoprocNum, MCK_CoprocReg, MCK_MemNoOffset, MCK_CoprocOption }, 0},
  { 198 /* ldcl */, ARM::t2LDCL_OPTION, Convert__CoprocNum1_1__CoprocReg1_2__MemNoOffset1_3__CoprocOption1_4__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_CoprocNum, MCK_CoprocReg, MCK_MemNoOffset, MCK_CoprocOption }, 0},
  { 198 /* ldcl */, ARM::LDCL_POST, Convert__CoprocNum1_1__CoprocReg1_2__MemNoOffset1_3__PostIdxImm8s41_4__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_CoprocNum, MCK_CoprocReg, MCK_MemNoOffset, MCK_PostIdxImm8s4 }, 0},
  { 198 /* ldcl */, ARM::t2LDCL_POST, Convert__CoprocNum1_1__CoprocReg1_2__MemNoOffset1_3__PostIdxImm8s41_4__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_CoprocNum, MCK_CoprocReg, MCK_MemNoOffset, MCK_PostIdxImm8s4 }, 0},
  { 203 /* ldm */, ARM::tLDMIA, Convert__Reg1_1__CondCode2_0__RegList1_2, Feature_IsThumb, { MCK_CondCode, MCK_tGPR, MCK_RegList }, 0},
  { 203 /* ldm */, ARM::LDMIA, Convert__Reg1_1__CondCode2_0__RegList1_2, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_RegList }, 0},
  { 203 /* ldm */, ARM::t2LDMIA, Convert__Reg1_1__CondCode2_0__RegList1_2, Feature_IsThumb2, { MCK_CondCode, MCK_GPR, MCK_RegList }, 0},
  { 203 /* ldm */, ARM::t2LDMIA, Convert__Reg1_2__CondCode2_0__RegList1_3, Feature_IsThumb2, { MCK_CondCode, MCK__DOT_w, MCK_GPR, MCK_RegList }, 0},
  { 203 /* ldm */, ARM::tLDMIA, Convert__Reg1_1__CondCode2_0__RegList1_3, Feature_IsThumb, { MCK_CondCode, MCK_tGPR, MCK__EXCLAIM_, MCK_RegList }, 0},
  { 203 /* ldm */, ARM::LDMIA_UPD, Convert__Reg1_1__Tie0__CondCode2_0__RegList1_3, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK__EXCLAIM_, MCK_RegList }, 0},
  { 203 /* ldm */, ARM::t2LDMIA_UPD, Convert__Reg1_1__Tie0__CondCode2_0__RegList1_3, Feature_IsThumb2, { MCK_CondCode, MCK_GPR, MCK__EXCLAIM_, MCK_RegList }, 0},
  { 203 /* ldm */, ARM::sysLDMIA, Convert__Reg1_1__CondCode2_0__RegList1_2, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_RegList, MCK__94_ }, 0},
  { 203 /* ldm */, ARM::t2LDMIA_UPD, Convert__Reg1_2__Tie0__CondCode2_0__RegList1_4, Feature_IsThumb2, { MCK_CondCode, MCK__DOT_w, MCK_GPR, MCK__EXCLAIM_, MCK_RegList }, 0},
  { 203 /* ldm */, ARM::sysLDMIA_UPD, Convert__Reg1_1__Tie0__CondCode2_0__RegList1_3, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK__EXCLAIM_, MCK_RegList, MCK__94_ }, 0},
  { 207 /* ldmda */, ARM::LDMDA, Convert__Reg1_1__CondCode2_0__RegList1_2, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_RegList }, 0},
  { 207 /* ldmda */, ARM::LDMDA_UPD, Convert__Reg1_1__Tie0__CondCode2_0__RegList1_3, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK__EXCLAIM_, MCK_RegList }, 0},
  { 207 /* ldmda */, ARM::sysLDMDA, Convert__Reg1_1__CondCode2_0__RegList1_2, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_RegList, MCK__94_ }, 0},
  { 207 /* ldmda */, ARM::sysLDMDA_UPD, Convert__Reg1_1__Tie0__CondCode2_0__RegList1_3, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK__EXCLAIM_, MCK_RegList, MCK__94_ }, 0},
  { 213 /* ldmdb */, ARM::LDMDB, Convert__Reg1_1__CondCode2_0__RegList1_2, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_RegList }, 0},
  { 213 /* ldmdb */, ARM::t2LDMDB, Convert__Reg1_1__CondCode2_0__RegList1_2, Feature_IsThumb2, { MCK_CondCode, MCK_GPR, MCK_RegList }, 0},
  { 213 /* ldmdb */, ARM::t2LDMDB, Convert__Reg1_2__CondCode2_0__RegList1_3, Feature_IsThumb2, { MCK_CondCode, MCK__DOT_w, MCK_GPR, MCK_RegList }, 0},
  { 213 /* ldmdb */, ARM::LDMDB_UPD, Convert__Reg1_1__Tie0__CondCode2_0__RegList1_3, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK__EXCLAIM_, MCK_RegList }, 0},
  { 213 /* ldmdb */, ARM::t2LDMDB_UPD, Convert__Reg1_1__Tie0__CondCode2_0__RegList1_3, Feature_IsThumb2, { MCK_CondCode, MCK_GPR, MCK__EXCLAIM_, MCK_RegList }, 0},
  { 213 /* ldmdb */, ARM::sysLDMDB, Convert__Reg1_1__CondCode2_0__RegList1_2, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_RegList, MCK__94_ }, 0},
  { 213 /* ldmdb */, ARM::t2LDMDB_UPD, Convert__Reg1_2__Tie0__CondCode2_0__RegList1_4, Feature_IsThumb2, { MCK_CondCode, MCK__DOT_w, MCK_GPR, MCK__EXCLAIM_, MCK_RegList }, 0},
  { 213 /* ldmdb */, ARM::sysLDMDB_UPD, Convert__Reg1_1__Tie0__CondCode2_0__RegList1_3, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK__EXCLAIM_, MCK_RegList, MCK__94_ }, 0},
  { 219 /* ldmib */, ARM::LDMIB, Convert__Reg1_1__CondCode2_0__RegList1_2, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_RegList }, 0},
  { 219 /* ldmib */, ARM::LDMIB_UPD, Convert__Reg1_1__Tie0__CondCode2_0__RegList1_3, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK__EXCLAIM_, MCK_RegList }, 0},
  { 219 /* ldmib */, ARM::sysLDMIB, Convert__Reg1_1__CondCode2_0__RegList1_2, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_RegList, MCK__94_ }, 0},
  { 219 /* ldmib */, ARM::sysLDMIB_UPD, Convert__Reg1_1__Tie0__CondCode2_0__RegList1_3, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK__EXCLAIM_, MCK_RegList, MCK__94_ }, 0},
  { 225 /* ldr */, ARM::tLDRpciASM, Convert__Reg1_1__Imm1_2__CondCode2_0, Feature_IsThumb, { MCK_CondCode, MCK_tGPR, MCK_Imm }, 0},
  { 225 /* ldr */, ARM::tLDRi, Convert__Reg1_1__MemThumbRIs42_2__CondCode2_0, Feature_IsThumb, { MCK_CondCode, MCK_tGPR, MCK_MemThumbRIs4 }, 0},
  { 225 /* ldr */, ARM::tLDRr, Convert__Reg1_1__MemThumbRR2_2__CondCode2_0, Feature_IsThumb, { MCK_CondCode, MCK_tGPR, MCK_MemThumbRR }, 0},
  { 225 /* ldr */, ARM::tLDRspi, Convert__Reg1_1__MemThumbSPI2_2__CondCode2_0, Feature_IsThumb, { MCK_CondCode, MCK_tGPR, MCK_MemThumbSPI }, 0},
  { 225 /* ldr */, ARM::t2LDRpcrel, Convert__Reg1_1__MemPCRelImm121_2__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_GPRnopc, MCK_MemPCRelImm12 }, 0},
  { 225 /* ldr */, ARM::t2LDRpci, Convert__Reg1_1__Imm1_2__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_GPR, MCK_Imm }, 0},
  { 225 /* ldr */, ARM::LDRi12, Convert__Reg1_1__MemImm12Offset2_2__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_MemImm12Offset }, 0},
  { 225 /* ldr */, ARM::t2LDRi8, Convert__Reg1_1__MemNegImm8Offset2_2__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_GPR, MCK_MemNegImm8Offset }, 0},
  { 225 /* ldr */, ARM::LDRrs, Convert__Reg1_1__MemRegOffset3_2__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_MemRegOffset }, 0},
  { 225 /* ldr */, ARM::t2LDRi12, Convert__Reg1_1__MemUImm12Offset2_2__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_GPR, MCK_MemUImm12Offset }, 0},
  { 225 /* ldr */, ARM::t2LDRs, Convert__Reg1_1__T2MemRegOffset3_2__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_GPR, MCK_T2MemRegOffset }, 0},
  { 225 /* ldr */, ARM::t2LDRpcrel, Convert__Reg1_2__MemPCRelImm121_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK__DOT_w, MCK_GPRnopc, MCK_MemPCRelImm12 }, 0},
  { 225 /* ldr */, ARM::t2LDRpci, Convert__Reg1_2__Imm1_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK__DOT_w, MCK_GPR, MCK_Imm }, 0},
  { 225 /* ldr */, ARM::t2LDRi12, Convert__Reg1_2__MemUImm12Offset2_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK__DOT_w, MCK_GPR, MCK_MemUImm12Offset }, 0},
  { 225 /* ldr */, ARM::t2LDRs, Convert__Reg1_2__T2MemRegOffset3_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK__DOT_w, MCK_GPR, MCK_T2MemRegOffset }, 0},
  { 225 /* ldr */, ARM::LDR_PRE_IMM, ConvertCustom_cvtLdWriteBackRegAddrModeImm12, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_MemImm12Offset, MCK__EXCLAIM_ }, 0},
  { 225 /* ldr */, ARM::t2LDR_PRE, ConvertCustom_cvtLdWriteBackRegT2AddrModeImm8, Feature_IsThumb2, { MCK_CondCode, MCK_GPR, MCK_MemImm8Offset, MCK__EXCLAIM_ }, 0},
  { 225 /* ldr */, ARM::LDR_POST_IMM, Convert__Reg1_1__MemNoOffset1_2__Tie1__AM2OffsetImm2_3__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_MemNoOffset, MCK_AM2OffsetImm }, 0},
  { 225 /* ldr */, ARM::t2LDR_POST, Convert__Reg1_1__MemNoOffset1_2__Tie1__Imm1_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_GPR, MCK_MemNoOffset, MCK_Imm }, 0},
  { 225 /* ldr */, ARM::LDR_POST_REG, Convert__Reg1_1__MemNoOffset1_2__Tie1__PostIdxRegShifted2_3__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_MemNoOffset, MCK_PostIdxRegShifted }, 0},
  { 225 /* ldr */, ARM::LDR_PRE_REG, ConvertCustom_cvtLdWriteBackRegAddrMode2, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_MemRegOffset, MCK__EXCLAIM_ }, 0},
  { 229 /* ldrb */, ARM::tLDRBi, Convert__Reg1_1__MemThumbRIs12_2__CondCode2_0, Feature_IsThumb, { MCK_CondCode, MCK_tGPR, MCK_MemThumbRIs1 }, 0},
  { 229 /* ldrb */, ARM::tLDRBr, Convert__Reg1_1__MemThumbRR2_2__CondCode2_0, Feature_IsThumb, { MCK_CondCode, MCK_tGPR, MCK_MemThumbRR }, 0},
  { 229 /* ldrb */, ARM::t2LDRBpci, Convert__Reg1_1__Imm1_2__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_Imm }, 0},
  { 229 /* ldrb */, ARM::t2LDRBi8, Convert__Reg1_1__MemNegImm8Offset2_2__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_MemNegImm8Offset }, 0},
  { 229 /* ldrb */, ARM::t2LDRBi12, Convert__Reg1_1__MemUImm12Offset2_2__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_MemUImm12Offset }, 0},
  { 229 /* ldrb */, ARM::t2LDRBs, Convert__Reg1_1__T2MemRegOffset3_2__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_T2MemRegOffset }, 0},
  { 229 /* ldrb */, ARM::LDRBi12, Convert__Reg1_1__MemImm12Offset2_2__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPRnopc, MCK_MemImm12Offset }, 0},
  { 229 /* ldrb */, ARM::LDRBrs, Convert__Reg1_1__MemRegOffset3_2__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPRnopc, MCK_MemRegOffset }, 0},
  { 229 /* ldrb */, ARM::t2LDRBpcrel, Convert__Reg1_1__MemPCRelImm121_2__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_GPRnopc, MCK_MemPCRelImm12 }, 0},
  { 229 /* ldrb */, ARM::t2LDRBpci, Convert__Reg1_2__Imm1_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK__DOT_w, MCK_rGPR, MCK_Imm }, 0},
  { 229 /* ldrb */, ARM::t2LDRBi12, Convert__Reg1_2__MemUImm12Offset2_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK__DOT_w, MCK_rGPR, MCK_MemUImm12Offset }, 0},
  { 229 /* ldrb */, ARM::t2LDRBs, Convert__Reg1_2__T2MemRegOffset3_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK__DOT_w, MCK_rGPR, MCK_T2MemRegOffset }, 0},
  { 229 /* ldrb */, ARM::t2LDRBpcrel, Convert__Reg1_2__MemPCRelImm121_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK__DOT_w, MCK_GPRnopc, MCK_MemPCRelImm12 }, 0},
  { 229 /* ldrb */, ARM::LDRB_PRE_IMM, ConvertCustom_cvtLdWriteBackRegAddrModeImm12, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_MemImm12Offset, MCK__EXCLAIM_ }, 0},
  { 229 /* ldrb */, ARM::t2LDRB_PRE, ConvertCustom_cvtLdWriteBackRegT2AddrModeImm8, Feature_IsThumb2, { MCK_CondCode, MCK_GPR, MCK_MemImm8Offset, MCK__EXCLAIM_ }, 0},
  { 229 /* ldrb */, ARM::LDRB_POST_IMM, Convert__Reg1_1__MemNoOffset1_2__Tie1__AM2OffsetImm2_3__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_MemNoOffset, MCK_AM2OffsetImm }, 0},
  { 229 /* ldrb */, ARM::t2LDRB_POST, Convert__Reg1_1__MemNoOffset1_2__Tie1__Imm1_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_GPR, MCK_MemNoOffset, MCK_Imm }, 0},
  { 229 /* ldrb */, ARM::LDRB_POST_REG, Convert__Reg1_1__MemNoOffset1_2__Tie1__PostIdxRegShifted2_3__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_MemNoOffset, MCK_PostIdxRegShifted }, 0},
  { 229 /* ldrb */, ARM::LDRB_PRE_REG, ConvertCustom_cvtLdWriteBackRegAddrMode2, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_MemRegOffset, MCK__EXCLAIM_ }, 0},
  { 234 /* ldrbt */, ARM::t2LDRBT, Convert__Reg1_1__MemPosImm8Offset2_2__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_MemPosImm8Offset }, 0},
  { 234 /* ldrbt */, ARM::LDRBT_POST_IMM, Convert__Reg1_1__MemNoOffset1_2__Tie1__AM2OffsetImm2_3__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_MemNoOffset, MCK_AM2OffsetImm }, 0},
  { 234 /* ldrbt */, ARM::LDRBT_POST_REG, Convert__Reg1_1__MemNoOffset1_2__Tie1__PostIdxRegShifted2_3__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_MemNoOffset, MCK_PostIdxRegShifted }, 0},
  { 240 /* ldrd */, ARM::t2LDRDi8, Convert__Reg1_1__Reg1_2__MemImm8s4Offset2_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_MemImm8s4Offset }, 0},
  { 240 /* ldrd */, ARM::LDRD, Convert__Reg1_1__Reg1_2__AddrMode33_3__CondCode2_0, Feature_IsARM|Feature_HasV5TE, { MCK_CondCode, MCK_GPR, MCK_GPR, MCK_AddrMode3 }, 0},
  { 240 /* ldrd */, ARM::t2LDRD_PRE, ConvertCustom_cvtT2LdrdPre, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_MemImm8s4Offset, MCK__EXCLAIM_ }, 0},
  { 240 /* ldrd */, ARM::t2LDRD_POST, Convert__Reg1_1__Reg1_2__MemNoOffset1_3__Tie2__Imm1_4__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_MemNoOffset, MCK_Imm }, 0},
  { 240 /* ldrd */, ARM::LDRD_PRE, ConvertCustom_cvtLdrdPre, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_GPR, MCK_AddrMode3, MCK__EXCLAIM_ }, 0},
  { 240 /* ldrd */, ARM::LDRD_POST, Convert__Reg1_1__Reg1_2__MemNoOffset1_3__Tie2__AM3Offset2_4__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_GPR, MCK_MemNoOffset, MCK_AM3Offset }, 0},
  { 245 /* ldrex */, ARM::t2LDREX, Convert__Reg1_1__MemImm0_1020s4Offset2_2__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_MemImm0_1020s4Offset }, 0},
  { 245 /* ldrex */, ARM::LDREX, Convert__Reg1_1__MemNoOffset1_2__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_MemNoOffset }, 0},
  { 251 /* ldrexb */, ARM::t2LDREXB, Convert__Reg1_1__MemNoOffset1_2__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_MemNoOffset }, 0},
  { 251 /* ldrexb */, ARM::LDREXB, Convert__Reg1_1__MemNoOffset1_2__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_MemNoOffset }, 0},
  { 258 /* ldrexd */, ARM::t2LDREXD, Convert__Reg1_1__Reg1_2__MemNoOffset1_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_MemNoOffset }, 0},
  { 258 /* ldrexd */, ARM::LDREXD, Convert__Reg1_1__Reg1_2__MemNoOffset1_3__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_GPR, MCK_MemNoOffset }, 0},
  { 265 /* ldrexh */, ARM::t2LDREXH, Convert__Reg1_1__MemNoOffset1_2__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_MemNoOffset }, 0},
  { 265 /* ldrexh */, ARM::LDREXH, Convert__Reg1_1__MemNoOffset1_2__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_MemNoOffset }, 0},
  { 272 /* ldrh */, ARM::tLDRHi, Convert__Reg1_1__MemThumbRIs22_2__CondCode2_0, Feature_IsThumb, { MCK_CondCode, MCK_tGPR, MCK_MemThumbRIs2 }, 0},
  { 272 /* ldrh */, ARM::tLDRHr, Convert__Reg1_1__MemThumbRR2_2__CondCode2_0, Feature_IsThumb, { MCK_CondCode, MCK_tGPR, MCK_MemThumbRR }, 0},
  { 272 /* ldrh */, ARM::t2LDRHpci, Convert__Reg1_1__Imm1_2__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_Imm }, 0},
  { 272 /* ldrh */, ARM::t2LDRHi8, Convert__Reg1_1__MemNegImm8Offset2_2__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_MemNegImm8Offset }, 0},
  { 272 /* ldrh */, ARM::t2LDRHi12, Convert__Reg1_1__MemUImm12Offset2_2__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_MemUImm12Offset }, 0},
  { 272 /* ldrh */, ARM::t2LDRHs, Convert__Reg1_1__T2MemRegOffset3_2__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_T2MemRegOffset }, 0},
  { 272 /* ldrh */, ARM::t2LDRHpcrel, Convert__Reg1_1__MemPCRelImm121_2__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_GPRnopc, MCK_MemPCRelImm12 }, 0},
  { 272 /* ldrh */, ARM::LDRH, Convert__Reg1_1__AddrMode33_2__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_AddrMode3 }, 0},
  { 272 /* ldrh */, ARM::t2LDRHpci, Convert__Reg1_2__Imm1_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK__DOT_w, MCK_rGPR, MCK_Imm }, 0},
  { 272 /* ldrh */, ARM::t2LDRHi12, Convert__Reg1_2__MemUImm12Offset2_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK__DOT_w, MCK_rGPR, MCK_MemUImm12Offset }, 0},
  { 272 /* ldrh */, ARM::t2LDRHs, Convert__Reg1_2__T2MemRegOffset3_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK__DOT_w, MCK_rGPR, MCK_T2MemRegOffset }, 0},
  { 272 /* ldrh */, ARM::t2LDRHpcrel, Convert__Reg1_2__MemPCRelImm121_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK__DOT_w, MCK_GPRnopc, MCK_MemPCRelImm12 }, 0},
  { 272 /* ldrh */, ARM::LDRH_PRE, ConvertCustom_cvtLdWriteBackRegAddrMode3, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_AddrMode3, MCK__EXCLAIM_ }, 0},
  { 272 /* ldrh */, ARM::t2LDRH_PRE, ConvertCustom_cvtLdWriteBackRegT2AddrModeImm8, Feature_IsThumb2, { MCK_CondCode, MCK_GPR, MCK_MemImm8Offset, MCK__EXCLAIM_ }, 0},
  { 272 /* ldrh */, ARM::LDRH_POST, Convert__Reg1_1__MemNoOffset1_2__Tie1__AM3Offset2_3__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_MemNoOffset, MCK_AM3Offset }, 0},
  { 272 /* ldrh */, ARM::t2LDRH_POST, Convert__Reg1_1__MemNoOffset1_2__Tie1__Imm1_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_GPR, MCK_MemNoOffset, MCK_Imm }, 0},
  { 277 /* ldrht */, ARM::t2LDRHT, Convert__Reg1_1__MemPosImm8Offset2_2__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_MemPosImm8Offset }, 0},
  { 277 /* ldrht */, ARM::LDRHTr, ConvertCustom_cvtLdExtTWriteBackReg, Feature_IsARM, { MCK_CondCode, MCK_GPRnopc, MCK_MemNoOffset, MCK_PostIdxReg }, 0},
  { 277 /* ldrht */, ARM::LDRHTi, ConvertCustom_cvtLdExtTWriteBackImm, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_MemNoOffset, MCK_PostIdxImm8 }, 0},
  { 283 /* ldrsb */, ARM::tLDRSB, Convert__Reg1_1__MemThumbRR2_2__CondCode2_0, Feature_IsThumb, { MCK_CondCode, MCK_tGPR, MCK_MemThumbRR }, 0},
  { 283 /* ldrsb */, ARM::t2LDRSBpci, Convert__Reg1_1__Imm1_2__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_Imm }, 0},
  { 283 /* ldrsb */, ARM::t2LDRSBi8, Convert__Reg1_1__MemNegImm8Offset2_2__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_MemNegImm8Offset }, 0},
  { 283 /* ldrsb */, ARM::t2LDRSBi12, Convert__Reg1_1__MemUImm12Offset2_2__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_MemUImm12Offset }, 0},
  { 283 /* ldrsb */, ARM::t2LDRSBs, Convert__Reg1_1__T2MemRegOffset3_2__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_T2MemRegOffset }, 0},
  { 283 /* ldrsb */, ARM::t2LDRSBpcrel, Convert__Reg1_1__MemPCRelImm121_2__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_GPRnopc, MCK_MemPCRelImm12 }, 0},
  { 283 /* ldrsb */, ARM::LDRSB, Convert__Reg1_1__AddrMode33_2__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_AddrMode3 }, 0},
  { 283 /* ldrsb */, ARM::t2LDRSBpci, Convert__Reg1_2__Imm1_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK__DOT_w, MCK_rGPR, MCK_Imm }, 0},
  { 283 /* ldrsb */, ARM::t2LDRSBi12, Convert__Reg1_2__MemUImm12Offset2_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK__DOT_w, MCK_rGPR, MCK_MemUImm12Offset }, 0},
  { 283 /* ldrsb */, ARM::t2LDRSBs, Convert__Reg1_2__T2MemRegOffset3_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK__DOT_w, MCK_rGPR, MCK_T2MemRegOffset }, 0},
  { 283 /* ldrsb */, ARM::t2LDRSBpcrel, Convert__Reg1_2__MemPCRelImm121_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK__DOT_w, MCK_GPRnopc, MCK_MemPCRelImm12 }, 0},
  { 283 /* ldrsb */, ARM::LDRSB_PRE, ConvertCustom_cvtLdWriteBackRegAddrMode3, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_AddrMode3, MCK__EXCLAIM_ }, 0},
  { 283 /* ldrsb */, ARM::t2LDRSB_PRE, ConvertCustom_cvtLdWriteBackRegT2AddrModeImm8, Feature_IsThumb2, { MCK_CondCode, MCK_GPR, MCK_MemImm8Offset, MCK__EXCLAIM_ }, 0},
  { 283 /* ldrsb */, ARM::LDRSB_POST, Convert__Reg1_1__MemNoOffset1_2__Tie1__AM3Offset2_3__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_MemNoOffset, MCK_AM3Offset }, 0},
  { 283 /* ldrsb */, ARM::t2LDRSB_POST, Convert__Reg1_1__MemNoOffset1_2__Tie1__Imm1_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_GPR, MCK_MemNoOffset, MCK_Imm }, 0},
  { 289 /* ldrsbt */, ARM::t2LDRSBT, Convert__Reg1_1__MemPosImm8Offset2_2__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_MemPosImm8Offset }, 0},
  { 289 /* ldrsbt */, ARM::LDRSBTr, ConvertCustom_cvtLdExtTWriteBackReg, Feature_IsARM, { MCK_CondCode, MCK_GPRnopc, MCK_MemNoOffset, MCK_PostIdxReg }, 0},
  { 289 /* ldrsbt */, ARM::LDRSBTi, ConvertCustom_cvtLdExtTWriteBackImm, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_MemNoOffset, MCK_PostIdxImm8 }, 0},
  { 296 /* ldrsh */, ARM::tLDRSH, Convert__Reg1_1__MemThumbRR2_2__CondCode2_0, Feature_IsThumb, { MCK_CondCode, MCK_tGPR, MCK_MemThumbRR }, 0},
  { 296 /* ldrsh */, ARM::t2LDRSHpci, Convert__Reg1_1__Imm1_2__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_Imm }, 0},
  { 296 /* ldrsh */, ARM::t2LDRSHi8, Convert__Reg1_1__MemNegImm8Offset2_2__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_MemNegImm8Offset }, 0},
  { 296 /* ldrsh */, ARM::t2LDRSHi12, Convert__Reg1_1__MemUImm12Offset2_2__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_MemUImm12Offset }, 0},
  { 296 /* ldrsh */, ARM::t2LDRSHs, Convert__Reg1_1__T2MemRegOffset3_2__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_T2MemRegOffset }, 0},
  { 296 /* ldrsh */, ARM::t2LDRSHpcrel, Convert__Reg1_1__MemPCRelImm121_2__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_GPRnopc, MCK_MemPCRelImm12 }, 0},
  { 296 /* ldrsh */, ARM::LDRSH, Convert__Reg1_1__AddrMode33_2__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_AddrMode3 }, 0},
  { 296 /* ldrsh */, ARM::t2LDRSHpci, Convert__Reg1_2__Imm1_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK__DOT_w, MCK_rGPR, MCK_Imm }, 0},
  { 296 /* ldrsh */, ARM::t2LDRSHi12, Convert__Reg1_2__MemUImm12Offset2_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK__DOT_w, MCK_rGPR, MCK_MemUImm12Offset }, 0},
  { 296 /* ldrsh */, ARM::t2LDRSHs, Convert__Reg1_2__T2MemRegOffset3_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK__DOT_w, MCK_rGPR, MCK_T2MemRegOffset }, 0},
  { 296 /* ldrsh */, ARM::t2LDRSHpcrel, Convert__Reg1_2__MemPCRelImm121_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK__DOT_w, MCK_GPRnopc, MCK_MemPCRelImm12 }, 0},
  { 296 /* ldrsh */, ARM::LDRSH_PRE, ConvertCustom_cvtLdWriteBackRegAddrMode3, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_AddrMode3, MCK__EXCLAIM_ }, 0},
  { 296 /* ldrsh */, ARM::t2LDRSH_PRE, ConvertCustom_cvtLdWriteBackRegT2AddrModeImm8, Feature_IsThumb2, { MCK_CondCode, MCK_GPR, MCK_MemImm8Offset, MCK__EXCLAIM_ }, 0},
  { 296 /* ldrsh */, ARM::LDRSH_POST, Convert__Reg1_1__MemNoOffset1_2__Tie1__AM3Offset2_3__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_MemNoOffset, MCK_AM3Offset }, 0},
  { 296 /* ldrsh */, ARM::t2LDRSH_POST, Convert__Reg1_1__MemNoOffset1_2__Tie1__Imm1_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_GPR, MCK_MemNoOffset, MCK_Imm }, 0},
  { 302 /* ldrsht */, ARM::t2LDRSHT, Convert__Reg1_1__MemPosImm8Offset2_2__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_MemPosImm8Offset }, 0},
  { 302 /* ldrsht */, ARM::LDRSHTr, ConvertCustom_cvtLdExtTWriteBackReg, Feature_IsARM, { MCK_CondCode, MCK_GPRnopc, MCK_MemNoOffset, MCK_PostIdxReg }, 0},
  { 302 /* ldrsht */, ARM::LDRSHTi, ConvertCustom_cvtLdExtTWriteBackImm, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_MemNoOffset, MCK_PostIdxImm8 }, 0},
  { 309 /* ldrt */, ARM::t2LDRT, Convert__Reg1_1__MemPosImm8Offset2_2__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_MemPosImm8Offset }, 0},
  { 309 /* ldrt */, ARM::LDRT_POST_IMM, Convert__Reg1_1__MemNoOffset1_2__Tie1__AM2OffsetImm2_3__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_MemNoOffset, MCK_AM2OffsetImm }, 0},
  { 309 /* ldrt */, ARM::LDRT_POST_REG, Convert__Reg1_1__MemNoOffset1_2__Tie1__PostIdxRegShifted2_3__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_MemNoOffset, MCK_PostIdxRegShifted }, 0},
  { 314 /* lsl */, ARM::tLSLrr, Convert__Reg1_2__CCOut1_0__Tie0__Reg1_3__CondCode2_1, Feature_IsThumb, { MCK_CCOut, MCK_CondCode, MCK_tGPR, MCK_tGPR }, 0},
  { 314 /* lsl */, ARM::tLSLri, Convert__Reg1_2__CCOut1_0__Reg1_2__Imm0_311_3__CondCode2_1, Feature_IsThumb, { MCK_CCOut, MCK_CondCode, MCK_tGPR, MCK_Imm0_31 }, 0},
  { 314 /* lsl */, ARM::t2LSLrr, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_rGPR, MCK_rGPR }, 0},
  { 314 /* lsl */, ARM::t2LSLri, Convert__Reg1_2__Reg1_2__Imm0_311_3__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_rGPR, MCK_Imm0_31 }, 0},
  { 314 /* lsl */, ARM::LSLr, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc }, 0},
  { 314 /* lsl */, ARM::LSLi, Convert__Reg1_2__Reg1_2__Imm0_311_3__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_Imm0_31 }, 0},
  { 314 /* lsl */, ARM::t2LSLrr, Convert__Reg1_3__Reg1_3__Reg1_4__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK__DOT_w, MCK_rGPR, MCK_rGPR }, 0},
  { 314 /* lsl */, ARM::t2LSLri, Convert__Reg1_3__Reg1_3__Imm0_311_4__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK__DOT_w, MCK_rGPR, MCK_Imm0_31 }, 0},
  { 314 /* lsl */, ARM::tLSLri, Convert__Reg1_2__CCOut1_0__Reg1_3__Imm0_311_4__CondCode2_1, Feature_IsThumb, { MCK_CCOut, MCK_CondCode, MCK_tGPR, MCK_tGPR, MCK_Imm0_31 }, 0},
  { 314 /* lsl */, ARM::t2LSLrr, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 314 /* lsl */, ARM::t2LSLri, Convert__Reg1_2__Reg1_3__Imm0_311_4__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_Imm0_31 }, 0},
  { 314 /* lsl */, ARM::LSLr, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_GPRnopc }, 0},
  { 314 /* lsl */, ARM::LSLi, Convert__Reg1_2__Reg1_3__Imm0_311_4__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_GPR, MCK_Imm0_31 }, 0},
  { 314 /* lsl */, ARM::t2LSLrr, Convert__Reg1_3__Reg1_4__Reg1_5__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK__DOT_w, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 314 /* lsl */, ARM::t2LSLri, Convert__Reg1_3__Reg1_4__Imm0_311_5__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK__DOT_w, MCK_rGPR, MCK_rGPR, MCK_Imm0_31 }, 0},
  { 318 /* lsr */, ARM::tLSRrr, Convert__Reg1_2__CCOut1_0__Tie0__Reg1_3__CondCode2_1, Feature_IsThumb, { MCK_CCOut, MCK_CondCode, MCK_tGPR, MCK_tGPR }, 0},
  { 318 /* lsr */, ARM::tLSRri, Convert__Reg1_2__CCOut1_0__Reg1_2__ImmThumbSR1_3__CondCode2_1, Feature_IsThumb, { MCK_CCOut, MCK_CondCode, MCK_tGPR, MCK_ImmThumbSR }, 0},
  { 318 /* lsr */, ARM::t2LSRrr, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_rGPR, MCK_rGPR }, 0},
  { 318 /* lsr */, ARM::t2LSRri, Convert__Reg1_2__Reg1_2__ImmThumbSR1_3__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_rGPR, MCK_ImmThumbSR }, 0},
  { 318 /* lsr */, ARM::LSRr, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc }, 0},
  { 318 /* lsr */, ARM::LSRi, Convert__Reg1_2__Reg1_2__Imm0_321_3__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_Imm0_32 }, 0},
  { 318 /* lsr */, ARM::t2LSRrr, Convert__Reg1_3__Reg1_3__Reg1_4__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK__DOT_w, MCK_rGPR, MCK_rGPR }, 0},
  { 318 /* lsr */, ARM::t2LSRri, Convert__Reg1_3__Reg1_3__ImmThumbSR1_4__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK__DOT_w, MCK_rGPR, MCK_ImmThumbSR }, 0},
  { 318 /* lsr */, ARM::tLSRri, Convert__Reg1_2__CCOut1_0__Reg1_3__ImmThumbSR1_4__CondCode2_1, Feature_IsThumb, { MCK_CCOut, MCK_CondCode, MCK_tGPR, MCK_tGPR, MCK_ImmThumbSR }, 0},
  { 318 /* lsr */, ARM::t2LSRrr, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 318 /* lsr */, ARM::t2LSRri, Convert__Reg1_2__Reg1_3__ImmThumbSR1_4__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_ImmThumbSR }, 0},
  { 318 /* lsr */, ARM::LSRr, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_GPRnopc }, 0},
  { 318 /* lsr */, ARM::LSRi, Convert__Reg1_2__Reg1_3__Imm0_321_4__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_GPR, MCK_Imm0_32 }, 0},
  { 318 /* lsr */, ARM::t2LSRrr, Convert__Reg1_3__Reg1_4__Reg1_5__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK__DOT_w, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 318 /* lsr */, ARM::t2LSRri, Convert__Reg1_3__Reg1_4__ImmThumbSR1_5__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK__DOT_w, MCK_rGPR, MCK_rGPR, MCK_ImmThumbSR }, 0},
  { 322 /* mcr */, ARM::t2MCR, Convert__CoprocNum1_0__Imm0_71_1__Reg1_2__CoprocReg1_3__CoprocReg1_4__imm_0, Feature_IsThumb2, { MCK_CoprocNum, MCK_Imm0_7, MCK_GPR, MCK_CoprocReg, MCK_CoprocReg }, 0},
  { 322 /* mcr */, ARM::MCR, Convert__CoprocNum1_1__Imm0_71_2__Reg1_3__CoprocReg1_4__CoprocReg1_5__imm_0__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_CoprocNum, MCK_Imm0_7, MCK_GPR, MCK_CoprocReg, MCK_CoprocReg }, 0},
  { 322 /* mcr */, ARM::t2MCR, Convert__CoprocNum1_0__Imm0_71_1__Reg1_2__CoprocReg1_3__CoprocReg1_4__Imm0_71_5, Feature_IsThumb2, { MCK_CoprocNum, MCK_Imm0_7, MCK_GPR, MCK_CoprocReg, MCK_CoprocReg, MCK_Imm0_7 }, 0},
  { 322 /* mcr */, ARM::MCR, Convert__CoprocNum1_1__Imm0_71_2__Reg1_3__CoprocReg1_4__CoprocReg1_5__Imm0_71_6__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_CoprocNum, MCK_Imm0_7, MCK_GPR, MCK_CoprocReg, MCK_CoprocReg, MCK_Imm0_7 }, 0},
  { 326 /* mcr2 */, ARM::MCR2, Convert__CoprocNum1_0__Imm0_71_1__Reg1_2__CoprocReg1_3__CoprocReg1_4__imm_0, Feature_IsARM, { MCK_CoprocNum, MCK_Imm0_7, MCK_GPR, MCK_CoprocReg, MCK_CoprocReg }, 0},
  { 326 /* mcr2 */, ARM::t2MCR2, Convert__CoprocNum1_0__Imm0_71_1__Reg1_2__CoprocReg1_3__CoprocReg1_4__imm_0, Feature_IsThumb2, { MCK_CoprocNum, MCK_Imm0_7, MCK_GPR, MCK_CoprocReg, MCK_CoprocReg }, 0},
  { 326 /* mcr2 */, ARM::MCR2, Convert__CoprocNum1_0__Imm0_71_1__Reg1_2__CoprocReg1_3__CoprocReg1_4__Imm0_71_5, Feature_IsARM, { MCK_CoprocNum, MCK_Imm0_7, MCK_GPR, MCK_CoprocReg, MCK_CoprocReg, MCK_Imm0_7 }, 0},
  { 326 /* mcr2 */, ARM::t2MCR2, Convert__CoprocNum1_0__Imm0_71_1__Reg1_2__CoprocReg1_3__CoprocReg1_4__Imm0_71_5, Feature_IsThumb2, { MCK_CoprocNum, MCK_Imm0_7, MCK_GPR, MCK_CoprocReg, MCK_CoprocReg, MCK_Imm0_7 }, 0},
  { 331 /* mcrr */, ARM::t2MCRR, Convert__CoprocNum1_0__Imm0_151_1__Reg1_2__Reg1_3__CoprocReg1_4, Feature_IsThumb2, { MCK_CoprocNum, MCK_Imm0_15, MCK_GPR, MCK_GPR, MCK_CoprocReg }, 0},
  { 331 /* mcrr */, ARM::MCRR, Convert__CoprocNum1_1__Imm0_151_2__Reg1_3__Reg1_4__CoprocReg1_5__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_CoprocNum, MCK_Imm0_15, MCK_GPRnopc, MCK_GPRnopc, MCK_CoprocReg }, 0},
  { 336 /* mcrr2 */, ARM::MCRR2, Convert__CoprocNum1_0__Imm0_151_1__Reg1_2__Reg1_3__CoprocReg1_4, Feature_IsARM, { MCK_CoprocNum, MCK_Imm0_15, MCK_GPRnopc, MCK_GPRnopc, MCK_CoprocReg }, 0},
  { 336 /* mcrr2 */, ARM::t2MCRR2, Convert__CoprocNum1_0__Imm0_151_1__Reg1_2__Reg1_3__CoprocReg1_4, Feature_IsThumb2, { MCK_CoprocNum, MCK_Imm0_15, MCK_GPR, MCK_GPR, MCK_CoprocReg }, 0},
  { 342 /* mla */, ARM::t2MLA, Convert__Reg1_1__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 342 /* mla */, ARM::MLA, Convert__Reg1_2__Reg1_3__Reg1_4__Reg1_5__CondCode2_1__CCOut1_0, Feature_IsARM|Feature_HasV6, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_GPR, MCK_GPR, MCK_GPR }, 0},
  { 346 /* mls */, ARM::t2MLS, Convert__Reg1_1__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 346 /* mls */, ARM::MLS, Convert__Reg1_1__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_IsARM|Feature_HasV6T2, { MCK_CondCode, MCK_GPR, MCK_GPR, MCK_GPR, MCK_GPR }, 0},
  { 350 /* mov */, ARM::t2MOVsi, Convert__Reg1_1__RegShiftedImm2_2__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_RegShiftedImm }, 0},
  { 350 /* mov */, ARM::t2MOVsr, Convert__Reg1_1__RegShiftedReg3_2__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_RegShiftedReg }, 0},
  { 350 /* mov */, ARM::t2MOVi, Convert__Reg1_1__T2SOImm1_2__CondCode2_0__reg0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_T2SOImm }, 0},
  { 350 /* mov */, ARM::t2MVNi, Convert__Reg1_1__T2SOImmNot1_2__CondCode2_0__reg0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_T2SOImmNot }, 0},
  { 350 /* mov */, ARM::MOVPCLR, Convert__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_PC, MCK_LR }, 0},
  { 350 /* mov */, ARM::tMOVr, Convert__Reg1_1__Reg1_2__CondCode2_0, Feature_IsThumb, { MCK_CondCode, MCK_GPR, MCK_GPR }, 0},
  { 350 /* mov */, ARM::MOVi16, Convert__Reg1_1__Imm0_65535Expr1_2__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_Imm0_65535Expr }, 0},
  { 350 /* mov */, ARM::tMOVi8, Convert__Reg1_2__CCOut1_0__Imm0_2551_3__CondCode2_1, Feature_IsThumb, { MCK_CCOut, MCK_CondCode, MCK_tGPR, MCK_Imm0_255 }, 0},
  { 350 /* mov */, ARM::MOVr_TC, Convert__Reg1_2__Reg1_3__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_tcGPR, MCK_tcGPR }, 0},
  { 350 /* mov */, ARM::MVNi, Convert__Reg1_2__ARMSOImmNot1_3__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_rGPR, MCK_ARMSOImmNot }, 0},
  { 350 /* mov */, ARM::MOVsr, Convert__Reg1_2__RegShiftedReg3_3__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPRnopc, MCK_RegShiftedReg }, 0},
  { 350 /* mov */, ARM::MOVr, Convert__Reg1_2__Reg1_3__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_GPR }, 0},
  { 350 /* mov */, ARM::MOVi, Convert__Reg1_2__ARMSOImm1_3__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_ARMSOImm }, 0},
  { 350 /* mov */, ARM::MOVsi, Convert__Reg1_2__RegShiftedImm2_3__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_RegShiftedImm }, 0},
  { 350 /* mov */, ARM::t2MOVi, Convert__Reg1_2__T2SOImm1_3__CondCode2_0__reg0, Feature_IsThumb2, { MCK_CondCode, MCK__DOT_w, MCK_rGPR, MCK_T2SOImm }, 0},
  { 350 /* mov */, ARM::t2MOVr, Convert__Reg1_2__Reg1_3__CondCode2_0__reg0, Feature_IsThumb2, { MCK_CondCode, MCK__DOT_w, MCK_GPRnopc, MCK_GPR }, 0},
  { 350 /* mov */, ARM::t2MOVi, Convert__Reg1_3__T2SOImm1_4__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK__DOT_w, MCK_rGPR, MCK_T2SOImm }, 0},
  { 350 /* mov */, ARM::t2MOVr, Convert__Reg1_3__Reg1_4__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK__DOT_w, MCK_GPRnopc, MCK_GPR }, 0},
  { 354 /* movs */, ARM::tMOVSr, Convert__Reg1_0__Reg1_1, Feature_IsThumb, { MCK_tGPR, MCK_tGPR }, 0},
  { 354 /* movs */, ARM::tMOVi8, Convert__Reg1_0__regCPSR__Imm0_2551_1__imm_14__imm_0, Feature_IsThumb, { MCK_tGPR, MCK_Imm0_255 }, 0},
  { 354 /* movs */, ARM::t2MOVSsi, Convert__Reg1_1__RegShiftedImm2_2__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_RegShiftedImm }, 0},
  { 354 /* movs */, ARM::t2MOVSsr, Convert__Reg1_1__RegShiftedReg3_2__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_RegShiftedReg }, 0},
  { 354 /* movs */, ARM::t2MOVi, Convert__Reg1_1__T2SOImm1_2__CondCode2_0__regCPSR, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_T2SOImm }, 0},
  { 354 /* movs */, ARM::t2MOVr, Convert__Reg1_1__Reg1_2__CondCode2_0__regCPSR, Feature_IsThumb2, { MCK_CondCode, MCK_GPRnopc, MCK_GPR }, 0},
  { 354 /* movs */, ARM::t2MOVi, Convert__Reg1_2__T2SOImm1_3__CondCode2_0__regCPSR, Feature_IsThumb2, { MCK_CondCode, MCK__DOT_w, MCK_rGPR, MCK_T2SOImm }, 0},
  { 354 /* movs */, ARM::t2MOVr, Convert__Reg1_2__Reg1_3__CondCode2_0__regCPSR, Feature_IsThumb2, { MCK_CondCode, MCK__DOT_w, MCK_GPRnopc, MCK_GPR }, 0},
  { 359 /* movt */, ARM::t2MOVTi16, Convert__Reg1_1__Tie0__Imm0_65535Expr1_2__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_Imm0_65535Expr }, 0},
  { 359 /* movt */, ARM::MOVTi16, Convert__Reg1_1__Tie0__Imm0_65535Expr1_2__CondCode2_0, Feature_IsARM|Feature_HasV6T2, { MCK_CondCode, MCK_GPRnopc, MCK_Imm0_65535Expr }, 0},
  { 364 /* movw */, ARM::t2MOVi16, Convert__Reg1_1__Imm0_65535Expr1_2__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_Imm0_65535Expr }, 0},
  { 364 /* movw */, ARM::MOVi16, Convert__Reg1_1__Imm0_65535Expr1_2__CondCode2_0, Feature_IsARM|Feature_HasV6T2, { MCK_CondCode, MCK_GPR, MCK_Imm0_65535Expr }, 0},
  { 369 /* mrc */, ARM::t2MRC, Convert__Reg1_2__CoprocNum1_0__Imm0_71_1__CoprocReg1_3__CoprocReg1_4__imm_0, Feature_IsThumb2, { MCK_CoprocNum, MCK_Imm0_7, MCK_GPR, MCK_CoprocReg, MCK_CoprocReg }, 0},
  { 369 /* mrc */, ARM::MRC, Convert__Reg1_3__CoprocNum1_1__Imm0_71_2__CoprocReg1_4__CoprocReg1_5__imm_0__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_CoprocNum, MCK_Imm0_7, MCK_GPR, MCK_CoprocReg, MCK_CoprocReg }, 0},
  { 369 /* mrc */, ARM::t2MRC, Convert__Reg1_2__CoprocNum1_0__Imm0_71_1__CoprocReg1_3__CoprocReg1_4__Imm0_71_5, Feature_IsThumb2, { MCK_CoprocNum, MCK_Imm0_7, MCK_GPR, MCK_CoprocReg, MCK_CoprocReg, MCK_Imm0_7 }, 0},
  { 369 /* mrc */, ARM::MRC, Convert__Reg1_3__CoprocNum1_1__Imm0_71_2__CoprocReg1_4__CoprocReg1_5__Imm0_71_6__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_CoprocNum, MCK_Imm0_7, MCK_GPR, MCK_CoprocReg, MCK_CoprocReg, MCK_Imm0_7 }, 0},
  { 373 /* mrc2 */, ARM::MRC2, Convert__Reg1_2__CoprocNum1_0__Imm0_71_1__CoprocReg1_3__CoprocReg1_4__imm_0, Feature_IsARM, { MCK_CoprocNum, MCK_Imm0_7, MCK_GPR, MCK_CoprocReg, MCK_CoprocReg }, 0},
  { 373 /* mrc2 */, ARM::t2MRC2, Convert__Reg1_2__CoprocNum1_0__Imm0_71_1__CoprocReg1_3__CoprocReg1_4__imm_0, Feature_IsThumb2, { MCK_CoprocNum, MCK_Imm0_7, MCK_GPR, MCK_CoprocReg, MCK_CoprocReg }, 0},
  { 373 /* mrc2 */, ARM::MRC2, Convert__Reg1_2__CoprocNum1_0__Imm0_71_1__CoprocReg1_3__CoprocReg1_4__Imm0_71_5, Feature_IsARM, { MCK_CoprocNum, MCK_Imm0_7, MCK_GPR, MCK_CoprocReg, MCK_CoprocReg, MCK_Imm0_7 }, 0},
  { 373 /* mrc2 */, ARM::t2MRC2, Convert__Reg1_2__CoprocNum1_0__Imm0_71_1__CoprocReg1_3__CoprocReg1_4__Imm0_71_5, Feature_IsThumb2, { MCK_CoprocNum, MCK_Imm0_7, MCK_GPR, MCK_CoprocReg, MCK_CoprocReg, MCK_Imm0_7 }, 0},
  { 378 /* mrrc */, ARM::t2MRRC, Convert__CoprocNum1_0__Imm0_151_1__Reg1_2__Reg1_3__CoprocReg1_4, Feature_IsThumb2, { MCK_CoprocNum, MCK_Imm0_15, MCK_GPR, MCK_GPR, MCK_CoprocReg }, 0},
  { 378 /* mrrc */, ARM::MRRC, Convert__CoprocNum1_1__Imm0_151_2__Reg1_3__Reg1_4__CoprocReg1_5__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_CoprocNum, MCK_Imm0_15, MCK_GPRnopc, MCK_GPRnopc, MCK_CoprocReg }, 0},
  { 383 /* mrrc2 */, ARM::MRRC2, Convert__CoprocNum1_0__Imm0_151_1__Reg1_2__Reg1_3__CoprocReg1_4, Feature_IsARM, { MCK_CoprocNum, MCK_Imm0_15, MCK_GPRnopc, MCK_GPRnopc, MCK_CoprocReg }, 0},
  { 383 /* mrrc2 */, ARM::t2MRRC2, Convert__CoprocNum1_0__Imm0_151_1__Reg1_2__Reg1_3__CoprocReg1_4, Feature_IsThumb2, { MCK_CoprocNum, MCK_Imm0_15, MCK_GPR, MCK_GPR, MCK_CoprocReg }, 0},
  { 389 /* mrs */, ARM::t2MRS_M, Convert__Reg1_1__MSRMask1_2__CondCode2_0, Feature_IsThumb|Feature_IsMClass, { MCK_CondCode, MCK_rGPR, MCK_MSRMask }, 0},
  { 389 /* mrs */, ARM::MRS, Convert__Reg1_1__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPRnopc, MCK_CCR }, 0},
  { 389 /* mrs */, ARM::MRS, Convert__Reg1_1__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPRnopc, MCK_APSR }, 0},
  { 389 /* mrs */, ARM::MRSsys, Convert__Reg1_1__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPRnopc, MCK_SPSR }, 0},
  { 389 /* mrs */, ARM::t2MRS_AR, Convert__Reg1_1__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_GPR, MCK_CCR }, 0},
  { 389 /* mrs */, ARM::t2MRS_AR, Convert__Reg1_1__CondCode2_0, Feature_IsThumb2|Feature_IsARClass, { MCK_CondCode, MCK_GPR, MCK_APSR }, 0},
  { 389 /* mrs */, ARM::t2MRSsys_AR, Convert__Reg1_1__CondCode2_0, Feature_IsThumb2|Feature_IsARClass, { MCK_CondCode, MCK_GPR, MCK_SPSR }, 0},
  { 393 /* msr */, ARM::t2MSR_AR, Convert__MSRMask1_1__Reg1_2__CondCode2_0, Feature_IsThumb2|Feature_IsARClass, { MCK_CondCode, MCK_MSRMask, MCK_rGPR }, 0},
  { 393 /* msr */, ARM::t2MSR_M, Convert__MSRMask1_1__Reg1_2__CondCode2_0, Feature_IsThumb|Feature_IsMClass, { MCK_CondCode, MCK_MSRMask, MCK_rGPR }, 0},
  { 393 /* msr */, ARM::MSR, Convert__MSRMask1_1__Reg1_2__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_MSRMask, MCK_GPR }, 0},
  { 393 /* msr */, ARM::MSRi, Convert__MSRMask1_1__ARMSOImm1_2__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_MSRMask, MCK_ARMSOImm }, 0},
  { 397 /* mul */, ARM::t2MUL, Convert__Reg1_1__Reg1_2__Reg1_1__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_rGPR }, 0},
  { 397 /* mul */, ARM::tMUL, ConvertCustom_cvtThumbMultiply, Feature_IsThumb, { MCK_CCOut, MCK_CondCode, MCK_tGPR, MCK_tGPR }, 0},
  { 397 /* mul */, ARM::MUL, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_1__CCOut1_0, Feature_IsARM|Feature_HasV6, { MCK_CCOut, MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc }, 0},
  { 397 /* mul */, ARM::t2MUL, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 397 /* mul */, ARM::tMUL, ConvertCustom_cvtThumbMultiply, Feature_IsThumb, { MCK_CCOut, MCK_CondCode, MCK_tGPR, MCK_tGPR, MCK_tGPR }, 0},
  { 397 /* mul */, ARM::MUL, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_1__CCOut1_0, Feature_IsARM|Feature_HasV6, { MCK_CCOut, MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_GPRnopc }, 0},
  { 401 /* mvn */, ARM::t2MOVi, Convert__Reg1_1__T2SOImmNot1_2__CondCode2_0__reg0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_T2SOImmNot }, 0},
  { 401 /* mvn */, ARM::tMVN, Convert__Reg1_2__CCOut1_0__Reg1_3__CondCode2_1, Feature_IsThumb, { MCK_CCOut, MCK_CondCode, MCK_tGPR, MCK_tGPR }, 0},
  { 401 /* mvn */, ARM::t2MVNr, Convert__Reg1_2__Reg1_3__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_rGPR, MCK_rGPR }, 0},
  { 401 /* mvn */, ARM::t2MVNs, Convert__Reg1_2__RegShiftedImm2_3__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_rGPR, MCK_RegShiftedImm }, 0},
  { 401 /* mvn */, ARM::MOVi, Convert__Reg1_2__ARMSOImmNot1_3__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_rGPR, MCK_ARMSOImmNot }, 0},
  { 401 /* mvn */, ARM::t2MVNi, Convert__Reg1_2__T2SOImm1_3__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_rGPR, MCK_T2SOImm }, 0},
  { 401 /* mvn */, ARM::MVNr, Convert__Reg1_2__Reg1_3__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_GPR }, 0},
  { 401 /* mvn */, ARM::MVNi, Convert__Reg1_2__ARMSOImm1_3__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_ARMSOImm }, 0},
  { 401 /* mvn */, ARM::MVNsi, Convert__Reg1_2__RegShiftedImm2_3__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_RegShiftedImm }, 0},
  { 401 /* mvn */, ARM::MVNsr, Convert__Reg1_2__RegShiftedReg3_3__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_RegShiftedReg }, 0},
  { 401 /* mvn */, ARM::t2MVNr, Convert__Reg1_3__Reg1_4__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK__DOT_w, MCK_rGPR, MCK_rGPR }, 0},
  { 401 /* mvn */, ARM::t2MVNs, Convert__Reg1_3__RegShiftedImm2_4__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK__DOT_w, MCK_rGPR, MCK_RegShiftedImm }, 0},
  { 401 /* mvn */, ARM::t2MVNi, Convert__Reg1_3__T2SOImm1_4__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK__DOT_w, MCK_rGPR, MCK_T2SOImm }, 0},
  { 405 /* neg */, ARM::tRSB, Convert__Reg1_2__CCOut1_0__Reg1_3__CondCode2_1, Feature_IsThumb, { MCK_CCOut, MCK_CondCode, MCK_tGPR, MCK_tGPR }, 0},
  { 405 /* neg */, ARM::t2RSBri, Convert__Reg1_2__Reg1_3__imm_0__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_rGPR, MCK_rGPR }, 0},
  { 405 /* neg */, ARM::RSBri, Convert__Reg1_2__Reg1_3__imm_0__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_GPR }, 0},
  { 409 /* nop */, ARM::tMOVr, Convert__regR8__regR8__imm_14__imm_0, Feature_IsThumb, {  }, 0},
  { 409 /* nop */, ARM::HINT, Convert__imm_0__CondCode2_0, Feature_IsARM|Feature_HasV6T2, { MCK_CondCode }, 0},
  { 409 /* nop */, ARM::tNOP, Convert__CondCode2_0, Feature_IsThumb2, { MCK_CondCode }, 0},
  { 409 /* nop */, ARM::MOVr, Convert__regR0__regR0__CondCode2_0__reg0, Feature_IsARM, { MCK_CondCode }, 0},
  { 409 /* nop */, ARM::t2HINT, Convert__imm_0__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK__DOT_w }, 0},
  { 413 /* orn */, ARM::t2ORNrr, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_rGPR, MCK_rGPR }, 0},
  { 413 /* orn */, ARM::t2ORNrs, Convert__Reg1_2__Reg1_2__RegShiftedImm2_3__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_rGPR, MCK_RegShiftedImm }, 0},
  { 413 /* orn */, ARM::t2ORNri, Convert__Reg1_2__Reg1_2__T2SOImm1_3__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_rGPR, MCK_T2SOImm }, 0},
  { 413 /* orn */, ARM::t2ORNrr, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 413 /* orn */, ARM::t2ORNrs, Convert__Reg1_2__Reg1_3__RegShiftedImm2_4__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_RegShiftedImm }, 0},
  { 413 /* orn */, ARM::t2ORNri, Convert__Reg1_2__Reg1_3__T2SOImm1_4__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_T2SOImm }, 0},
  { 417 /* orr */, ARM::tORR, Convert__Reg1_2__CCOut1_0__Tie0__Reg1_3__CondCode2_1, Feature_IsThumb, { MCK_CCOut, MCK_CondCode, MCK_tGPR, MCK_tGPR }, 0},
  { 417 /* orr */, ARM::t2ORRrr, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_rGPR, MCK_rGPR }, 0},
  { 417 /* orr */, ARM::t2ORRrs, Convert__Reg1_2__Reg1_2__RegShiftedImm2_3__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_rGPR, MCK_RegShiftedImm }, 0},
  { 417 /* orr */, ARM::t2ORRri, Convert__Reg1_2__Reg1_2__T2SOImm1_3__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_rGPR, MCK_T2SOImm }, 0},
  { 417 /* orr */, ARM::ORRrr, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_GPR }, 0},
  { 417 /* orr */, ARM::ORRri, Convert__Reg1_2__Reg1_2__ARMSOImm1_3__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_ARMSOImm }, 0},
  { 417 /* orr */, ARM::ORRrsi, Convert__Reg1_2__Reg1_2__RegShiftedImm2_3__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_RegShiftedImm }, 0},
  { 417 /* orr */, ARM::ORRrsr, Convert__Reg1_2__Reg1_2__RegShiftedReg3_3__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_RegShiftedReg }, 0},
  { 417 /* orr */, ARM::t2ORRrr, Convert__Reg1_3__Reg1_3__Reg1_4__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK__DOT_w, MCK_rGPR, MCK_rGPR }, 0},
  { 417 /* orr */, ARM::t2ORRrs, Convert__Reg1_3__Reg1_3__RegShiftedImm2_4__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK__DOT_w, MCK_rGPR, MCK_RegShiftedImm }, 0},
  { 417 /* orr */, ARM::t2ORRri, Convert__Reg1_3__Reg1_3__T2SOImm1_4__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK__DOT_w, MCK_rGPR, MCK_T2SOImm }, 0},
  { 417 /* orr */, ARM::t2ORRrr, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 417 /* orr */, ARM::t2ORRrs, Convert__Reg1_2__Reg1_3__RegShiftedImm2_4__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_RegShiftedImm }, 0},
  { 417 /* orr */, ARM::t2ORRri, Convert__Reg1_2__Reg1_3__T2SOImm1_4__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_T2SOImm }, 0},
  { 417 /* orr */, ARM::ORRrr, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_GPR, MCK_GPR }, 0},
  { 417 /* orr */, ARM::ORRri, Convert__Reg1_2__Reg1_3__ARMSOImm1_4__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_GPR, MCK_ARMSOImm }, 0},
  { 417 /* orr */, ARM::ORRrsi, Convert__Reg1_2__Reg1_3__RegShiftedImm2_4__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_GPR, MCK_RegShiftedImm }, 0},
  { 417 /* orr */, ARM::ORRrsr, Convert__Reg1_2__Reg1_3__RegShiftedReg3_4__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_GPR, MCK_RegShiftedReg }, 0},
  { 417 /* orr */, ARM::t2ORRrr, Convert__Reg1_3__Reg1_4__Reg1_5__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK__DOT_w, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 417 /* orr */, ARM::t2ORRrs, Convert__Reg1_3__Reg1_4__RegShiftedImm2_5__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK__DOT_w, MCK_rGPR, MCK_rGPR, MCK_RegShiftedImm }, 0},
  { 417 /* orr */, ARM::t2ORRri, Convert__Reg1_3__Reg1_4__T2SOImm1_5__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK__DOT_w, MCK_rGPR, MCK_rGPR, MCK_T2SOImm }, 0},
  { 421 /* pkhbt */, ARM::t2PKHBT, Convert__Reg1_1__Reg1_2__Reg1_3__imm_0__CondCode2_0, Feature_HasT2ExtractPack|Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 421 /* pkhbt */, ARM::PKHBT, Convert__Reg1_1__Reg1_2__Reg1_3__imm_0__CondCode2_0, Feature_IsARM|Feature_HasV6, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_GPRnopc }, 0},
  { 421 /* pkhbt */, ARM::t2PKHBT, Convert__Reg1_1__Reg1_2__Reg1_3__PKHLSLImm1_4__CondCode2_0, Feature_HasT2ExtractPack|Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR, MCK_PKHLSLImm }, 0},
  { 421 /* pkhbt */, ARM::PKHBT, Convert__Reg1_1__Reg1_2__Reg1_3__PKHLSLImm1_4__CondCode2_0, Feature_IsARM|Feature_HasV6, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_GPRnopc, MCK_PKHLSLImm }, 0},
  { 427 /* pkhtb */, ARM::t2PKHBT, Convert__Reg1_1__Reg1_2__Reg1_3__imm_0__CondCode2_0, Feature_HasT2ExtractPack|Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 427 /* pkhtb */, ARM::PKHBT, Convert__Reg1_1__Reg1_2__Reg1_3__imm_0__CondCode2_0, Feature_IsARM|Feature_HasV6, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_GPRnopc }, 0},
  { 427 /* pkhtb */, ARM::t2PKHTB, Convert__Reg1_1__Reg1_2__Reg1_3__PKHASRImm1_4__CondCode2_0, Feature_HasT2ExtractPack|Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR, MCK_PKHASRImm }, 0},
  { 427 /* pkhtb */, ARM::PKHTB, Convert__Reg1_1__Reg1_2__Reg1_3__PKHASRImm1_4__CondCode2_0, Feature_IsARM|Feature_HasV6, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_GPRnopc, MCK_PKHASRImm }, 0},
  { 433 /* pld */, ARM::PLDi12, Convert__MemImm12Offset2_0, Feature_IsARM, { MCK_MemImm12Offset }, 0},
  { 433 /* pld */, ARM::PLDrs, Convert__MemRegOffset3_0, Feature_IsARM, { MCK_MemRegOffset }, 0},
  { 433 /* pld */, ARM::t2PLDi8, Convert__MemNegImm8Offset2_1__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_MemNegImm8Offset }, 0},
  { 433 /* pld */, ARM::t2PLDi12, Convert__MemUImm12Offset2_1__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_MemUImm12Offset }, 0},
  { 433 /* pld */, ARM::t2PLDs, Convert__T2MemRegOffset3_1__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_T2MemRegOffset }, 0},
  { 437 /* pldw */, ARM::PLDWi12, Convert__MemImm12Offset2_0, Feature_IsARM|Feature_HasV7|Feature_HasMP, { MCK_MemImm12Offset }, 0},
  { 437 /* pldw */, ARM::PLDWrs, Convert__MemRegOffset3_0, Feature_IsARM|Feature_HasV7|Feature_HasMP, { MCK_MemRegOffset }, 0},
  { 437 /* pldw */, ARM::t2PLDWi8, Convert__MemNegImm8Offset2_1__CondCode2_0, Feature_IsThumb2|Feature_HasV7|Feature_HasMP, { MCK_CondCode, MCK_MemNegImm8Offset }, 0},
  { 437 /* pldw */, ARM::t2PLDWi12, Convert__MemUImm12Offset2_1__CondCode2_0, Feature_IsThumb2|Feature_HasV7|Feature_HasMP, { MCK_CondCode, MCK_MemUImm12Offset }, 0},
  { 437 /* pldw */, ARM::t2PLDWs, Convert__T2MemRegOffset3_1__CondCode2_0, Feature_IsThumb2|Feature_HasV7|Feature_HasMP, { MCK_CondCode, MCK_T2MemRegOffset }, 0},
  { 442 /* pli */, ARM::PLIi12, Convert__MemImm12Offset2_0, Feature_IsARM|Feature_HasV7, { MCK_MemImm12Offset }, 0},
  { 442 /* pli */, ARM::PLIrs, Convert__MemRegOffset3_0, Feature_IsARM|Feature_HasV7, { MCK_MemRegOffset }, 0},
  { 442 /* pli */, ARM::t2PLIi8, Convert__MemNegImm8Offset2_1__CondCode2_0, Feature_IsThumb2|Feature_HasV7, { MCK_CondCode, MCK_MemNegImm8Offset }, 0},
  { 442 /* pli */, ARM::t2PLIi12, Convert__MemUImm12Offset2_1__CondCode2_0, Feature_IsThumb2|Feature_HasV7, { MCK_CondCode, MCK_MemUImm12Offset }, 0},
  { 442 /* pli */, ARM::t2PLIs, Convert__T2MemRegOffset3_1__CondCode2_0, Feature_IsThumb2|Feature_HasV7, { MCK_CondCode, MCK_T2MemRegOffset }, 0},
  { 446 /* pop */, ARM::tPOP, Convert__CondCode2_0__RegList1_1, Feature_IsThumb, { MCK_CondCode, MCK_RegList }, 0},
  { 446 /* pop */, ARM::LDMIA_UPD, Convert__regSP__Tie0__CondCode2_0__RegList1_1, Feature_IsARM, { MCK_CondCode, MCK_RegList }, 0},
  { 446 /* pop */, ARM::t2LDMIA_UPD, Convert__regSP__Tie0__CondCode2_0__RegList1_1, Feature_IsThumb2, { MCK_CondCode, MCK_RegList }, 0},
  { 446 /* pop */, ARM::t2LDMIA_UPD, Convert__regSP__Tie0__CondCode2_0__RegList1_2, Feature_IsThumb2, { MCK_CondCode, MCK__DOT_w, MCK_RegList }, 0},
  { 450 /* push */, ARM::tPUSH, Convert__CondCode2_0__RegList1_1, Feature_IsThumb, { MCK_CondCode, MCK_RegList }, 0},
  { 450 /* push */, ARM::STMDB_UPD, Convert__regSP__Tie0__CondCode2_0__RegList1_1, Feature_IsARM, { MCK_CondCode, MCK_RegList }, 0},
  { 450 /* push */, ARM::t2STMDB_UPD, Convert__regSP__Tie0__CondCode2_0__RegList1_1, Feature_IsThumb2, { MCK_CondCode, MCK_RegList }, 0},
  { 450 /* push */, ARM::t2STMDB_UPD, Convert__regSP__Tie0__CondCode2_0__RegList1_2, Feature_IsThumb2, { MCK_CondCode, MCK__DOT_w, MCK_RegList }, 0},
  { 455 /* qadd */, ARM::t2QADD, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsThumb2|Feature_HasThumb2DSP, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 455 /* qadd */, ARM::QADD, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_GPRnopc }, 0},
  { 460 /* qadd16 */, ARM::t2QADD16, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsThumb2|Feature_HasThumb2DSP, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 460 /* qadd16 */, ARM::QADD16, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_GPRnopc }, 0},
  { 467 /* qadd8 */, ARM::t2QADD8, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsThumb2|Feature_HasThumb2DSP, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 467 /* qadd8 */, ARM::QADD8, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_GPRnopc }, 0},
  { 473 /* qasx */, ARM::t2QASX, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsThumb2|Feature_HasThumb2DSP, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 473 /* qasx */, ARM::QASX, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_GPRnopc }, 0},
  { 478 /* qdadd */, ARM::t2QDADD, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsThumb2|Feature_HasThumb2DSP, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 478 /* qdadd */, ARM::QDADD, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_GPRnopc }, 0},
  { 484 /* qdsub */, ARM::t2QDSUB, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsThumb2|Feature_HasThumb2DSP, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 484 /* qdsub */, ARM::QDSUB, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_GPRnopc }, 0},
  { 490 /* qsax */, ARM::t2QSAX, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsThumb2|Feature_HasThumb2DSP, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 490 /* qsax */, ARM::QSAX, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_GPRnopc }, 0},
  { 495 /* qsub */, ARM::t2QSUB, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsThumb2|Feature_HasThumb2DSP, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 495 /* qsub */, ARM::QSUB, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_GPRnopc }, 0},
  { 500 /* qsub16 */, ARM::t2QSUB16, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsThumb2|Feature_HasThumb2DSP, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 500 /* qsub16 */, ARM::QSUB16, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_GPRnopc }, 0},
  { 507 /* qsub8 */, ARM::t2QSUB8, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsThumb2|Feature_HasThumb2DSP, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 507 /* qsub8 */, ARM::QSUB8, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_GPRnopc }, 0},
  { 513 /* rbit */, ARM::t2RBIT, Convert__Reg1_1__Reg1_2__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_rGPR }, 0},
  { 513 /* rbit */, ARM::RBIT, Convert__Reg1_1__Reg1_2__CondCode2_0, Feature_IsARM|Feature_HasV6T2, { MCK_CondCode, MCK_GPR, MCK_GPR }, 0},
  { 518 /* rev */, ARM::tREV, Convert__Reg1_1__Reg1_2__CondCode2_0, Feature_IsThumb|Feature_HasV6, { MCK_CondCode, MCK_tGPR, MCK_tGPR }, 0},
  { 518 /* rev */, ARM::t2REV, Convert__Reg1_1__Reg1_2__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_rGPR }, 0},
  { 518 /* rev */, ARM::REV, Convert__Reg1_1__Reg1_2__CondCode2_0, Feature_IsARM|Feature_HasV6, { MCK_CondCode, MCK_GPR, MCK_GPR }, 0},
  { 518 /* rev */, ARM::t2REV, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK__DOT_w, MCK_rGPR, MCK_rGPR }, 0},
  { 522 /* rev16 */, ARM::tREV16, Convert__Reg1_1__Reg1_2__CondCode2_0, Feature_IsThumb|Feature_HasV6, { MCK_CondCode, MCK_tGPR, MCK_tGPR }, 0},
  { 522 /* rev16 */, ARM::t2REV16, Convert__Reg1_1__Reg1_2__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_rGPR }, 0},
  { 522 /* rev16 */, ARM::REV16, Convert__Reg1_1__Reg1_2__CondCode2_0, Feature_IsARM|Feature_HasV6, { MCK_CondCode, MCK_GPR, MCK_GPR }, 0},
  { 522 /* rev16 */, ARM::t2REV16, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK__DOT_w, MCK_rGPR, MCK_rGPR }, 0},
  { 528 /* revsh */, ARM::tREVSH, Convert__Reg1_1__Reg1_2__CondCode2_0, Feature_IsThumb|Feature_HasV6, { MCK_CondCode, MCK_tGPR, MCK_tGPR }, 0},
  { 528 /* revsh */, ARM::t2REVSH, Convert__Reg1_1__Reg1_2__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_rGPR }, 0},
  { 528 /* revsh */, ARM::REVSH, Convert__Reg1_1__Reg1_2__CondCode2_0, Feature_IsARM|Feature_HasV6, { MCK_CondCode, MCK_GPR, MCK_GPR }, 0},
  { 528 /* revsh */, ARM::t2REVSH, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK__DOT_w, MCK_rGPR, MCK_rGPR }, 0},
  { 534 /* rfeda */, ARM::RFEDA, Convert__Reg1_0, Feature_IsARM, { MCK_GPR }, 0},
  { 534 /* rfeda */, ARM::RFEDA_UPD, Convert__Reg1_0, Feature_IsARM, { MCK_GPR, MCK__EXCLAIM_ }, 0},
  { 540 /* rfedb */, ARM::RFEDB, Convert__Reg1_0, Feature_IsARM, { MCK_GPR }, 0},
  { 540 /* rfedb */, ARM::RFEDB_UPD, Convert__Reg1_0, Feature_IsARM, { MCK_GPR, MCK__EXCLAIM_ }, 0},
  { 540 /* rfedb */, ARM::t2RFEDB, Convert__Reg1_1__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_GPR }, 0},
  { 540 /* rfedb */, ARM::t2RFEDBW, Convert__Reg1_1__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_GPR, MCK__EXCLAIM_ }, 0},
  { 546 /* rfeia */, ARM::RFEIA, Convert__Reg1_0, Feature_IsARM, { MCK_GPR }, 0},
  { 546 /* rfeia */, ARM::RFEIA_UPD, Convert__Reg1_0, Feature_IsARM, { MCK_GPR, MCK__EXCLAIM_ }, 0},
  { 546 /* rfeia */, ARM::t2RFEIA, Convert__Reg1_1__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_GPR }, 0},
  { 546 /* rfeia */, ARM::t2RFEIAW, Convert__Reg1_1__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_GPR, MCK__EXCLAIM_ }, 0},
  { 552 /* rfeib */, ARM::RFEIB, Convert__Reg1_0, Feature_IsARM, { MCK_GPR }, 0},
  { 552 /* rfeib */, ARM::RFEIB_UPD, Convert__Reg1_0, Feature_IsARM, { MCK_GPR, MCK__EXCLAIM_ }, 0},
  { 558 /* ror */, ARM::tROR, Convert__Reg1_2__CCOut1_0__Tie0__Reg1_3__CondCode2_1, Feature_IsThumb, { MCK_CCOut, MCK_CondCode, MCK_tGPR, MCK_tGPR }, 0},
  { 558 /* ror */, ARM::t2RORrr, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_rGPR, MCK_rGPR }, 0},
  { 558 /* ror */, ARM::t2RORri, Convert__Reg1_2__Reg1_2__Imm0_311_3__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_rGPR, MCK_Imm0_31 }, 0},
  { 558 /* ror */, ARM::RORr, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc }, 0},
  { 558 /* ror */, ARM::RORi, Convert__Reg1_2__Reg1_2__Imm0_311_3__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_Imm0_31 }, 0},
  { 558 /* ror */, ARM::t2RORrr, Convert__Reg1_3__Reg1_3__Reg1_4__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK__DOT_w, MCK_rGPR, MCK_rGPR }, 0},
  { 558 /* ror */, ARM::t2RORri, Convert__Reg1_3__Reg1_3__Imm0_311_4__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK__DOT_w, MCK_rGPR, MCK_Imm0_31 }, 0},
  { 558 /* ror */, ARM::t2RORrr, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 558 /* ror */, ARM::t2RORri, Convert__Reg1_2__Reg1_3__Imm0_311_4__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_Imm0_31 }, 0},
  { 558 /* ror */, ARM::RORr, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_GPRnopc }, 0},
  { 558 /* ror */, ARM::RORi, Convert__Reg1_2__Reg1_3__Imm0_311_4__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_GPR, MCK_Imm0_31 }, 0},
  { 558 /* ror */, ARM::t2RORrr, Convert__Reg1_3__Reg1_4__Reg1_5__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK__DOT_w, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 558 /* ror */, ARM::t2RORri, Convert__Reg1_3__Reg1_4__Imm0_311_5__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK__DOT_w, MCK_rGPR, MCK_rGPR, MCK_Imm0_31 }, 0},
  { 562 /* rrx */, ARM::t2RRX, Convert__Reg1_2__Reg1_3__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_rGPR, MCK_rGPR }, 0},
  { 562 /* rrx */, ARM::RRXi, Convert__Reg1_2__Reg1_3__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc }, 0},
  { 566 /* rsb */, ARM::t2RSBrr, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_rGPR, MCK_rGPR }, 0},
  { 566 /* rsb */, ARM::t2RSBrs, Convert__Reg1_2__Reg1_2__RegShiftedImm2_3__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_rGPR, MCK_RegShiftedImm }, 0},
  { 566 /* rsb */, ARM::t2RSBri, Convert__Reg1_2__Reg1_2__T2SOImm1_3__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_rGPR, MCK_T2SOImm }, 0},
  { 566 /* rsb */, ARM::RSBrr, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_GPR }, 0},
  { 566 /* rsb */, ARM::RSBri, Convert__Reg1_2__Reg1_2__ARMSOImm1_3__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_ARMSOImm }, 0},
  { 566 /* rsb */, ARM::RSBrsi, Convert__Reg1_2__Reg1_2__RegShiftedImm2_3__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_RegShiftedImm }, 0},
  { 566 /* rsb */, ARM::RSBrsr, Convert__Reg1_2__Reg1_2__RegShiftedReg3_3__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_RegShiftedReg }, 0},
  { 566 /* rsb */, ARM::tRSB, Convert__Reg1_2__CCOut1_0__Reg1_3__CondCode2_1, Feature_IsThumb, { MCK_CCOut, MCK_CondCode, MCK_tGPR, MCK_tGPR, MCK__35_0 }, 0},
  { 566 /* rsb */, ARM::t2RSBrr, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 566 /* rsb */, ARM::t2RSBrs, Convert__Reg1_2__Reg1_3__RegShiftedImm2_4__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_RegShiftedImm }, 0},
  { 566 /* rsb */, ARM::t2RSBri, Convert__Reg1_2__Reg1_3__T2SOImm1_4__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_T2SOImm }, 0},
  { 566 /* rsb */, ARM::RSBrr, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_GPR, MCK_GPR }, 0},
  { 566 /* rsb */, ARM::RSBri, Convert__Reg1_2__Reg1_3__ARMSOImm1_4__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_GPR, MCK_ARMSOImm }, 0},
  { 566 /* rsb */, ARM::RSBrsi, Convert__Reg1_2__Reg1_3__RegShiftedImm2_4__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_GPR, MCK_RegShiftedImm }, 0},
  { 566 /* rsb */, ARM::RSBrsr, Convert__Reg1_2__Reg1_3__RegShiftedReg3_4__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_GPR, MCK_RegShiftedReg }, 0},
  { 566 /* rsb */, ARM::t2RSBri, Convert__Reg1_3__Reg1_4__T2SOImm1_5__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK__DOT_w, MCK_rGPR, MCK_rGPR, MCK_T2SOImm }, 0},
  { 570 /* rsc */, ARM::RSCrr, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_GPR }, 0},
  { 570 /* rsc */, ARM::RSCri, Convert__Reg1_2__Reg1_2__ARMSOImm1_3__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_ARMSOImm }, 0},
  { 570 /* rsc */, ARM::RSCrsi, Convert__Reg1_2__Reg1_2__RegShiftedImm2_3__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_RegShiftedImm }, 0},
  { 570 /* rsc */, ARM::RSCrsr, Convert__Reg1_2__Reg1_2__RegShiftedReg3_3__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_RegShiftedReg }, 0},
  { 570 /* rsc */, ARM::RSCrr, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_GPR, MCK_GPR }, 0},
  { 570 /* rsc */, ARM::RSCri, Convert__Reg1_2__Reg1_3__ARMSOImm1_4__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_GPR, MCK_ARMSOImm }, 0},
  { 570 /* rsc */, ARM::RSCrsi, Convert__Reg1_2__Reg1_3__RegShiftedImm2_4__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_GPR, MCK_RegShiftedImm }, 0},
  { 570 /* rsc */, ARM::RSCrsr, Convert__Reg1_2__Reg1_3__RegShiftedReg3_4__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_GPR, MCK_RegShiftedReg }, 0},
  { 574 /* sadd16 */, ARM::t2SADD16, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsThumb2|Feature_HasThumb2DSP, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 574 /* sadd16 */, ARM::SADD16, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_GPRnopc }, 0},
  { 581 /* sadd8 */, ARM::t2SADD8, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsThumb2|Feature_HasThumb2DSP, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 581 /* sadd8 */, ARM::SADD8, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_GPRnopc }, 0},
  { 587 /* sasx */, ARM::t2SASX, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsThumb2|Feature_HasThumb2DSP, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 587 /* sasx */, ARM::SASX, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_GPRnopc }, 0},
  { 592 /* sbc */, ARM::tSBC, Convert__Reg1_2__CCOut1_0__Tie0__Reg1_3__CondCode2_1, Feature_IsThumb, { MCK_CCOut, MCK_CondCode, MCK_tGPR, MCK_tGPR }, 0},
  { 592 /* sbc */, ARM::SBCrsr, Convert__Reg1_2__Reg1_2__RegShiftedReg3_3__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPRnopc, MCK_RegShiftedReg }, 0},
  { 592 /* sbc */, ARM::SBCrr, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_GPR }, 0},
  { 592 /* sbc */, ARM::SBCri, Convert__Reg1_2__Reg1_2__ARMSOImm1_3__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_ARMSOImm }, 0},
  { 592 /* sbc */, ARM::SBCrsi, Convert__Reg1_2__Reg1_2__RegShiftedImm2_3__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_RegShiftedImm }, 0},
  { 592 /* sbc */, ARM::t2SBCrr, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 592 /* sbc */, ARM::t2SBCrs, Convert__Reg1_2__Reg1_3__RegShiftedImm2_4__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_RegShiftedImm }, 0},
  { 592 /* sbc */, ARM::t2SBCri, Convert__Reg1_2__Reg1_3__T2SOImm1_4__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_T2SOImm }, 0},
  { 592 /* sbc */, ARM::SBCrsr, Convert__Reg1_2__Reg1_3__RegShiftedReg3_4__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_RegShiftedReg }, 0},
  { 592 /* sbc */, ARM::SBCrr, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_GPR, MCK_GPR }, 0},
  { 592 /* sbc */, ARM::SBCri, Convert__Reg1_2__Reg1_3__ARMSOImm1_4__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_GPR, MCK_ARMSOImm }, 0},
  { 592 /* sbc */, ARM::SBCrsi, Convert__Reg1_2__Reg1_3__RegShiftedImm2_4__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_GPR, MCK_RegShiftedImm }, 0},
  { 592 /* sbc */, ARM::t2SBCrr, Convert__Reg1_3__Reg1_4__Reg1_5__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK__DOT_w, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 592 /* sbc */, ARM::t2SBCrs, Convert__Reg1_3__Reg1_4__RegShiftedImm2_5__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK__DOT_w, MCK_rGPR, MCK_rGPR, MCK_RegShiftedImm }, 0},
  { 596 /* sbfx */, ARM::t2SBFX, Convert__Reg1_1__Reg1_2__Imm0_311_3__Imm1_321_4__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_Imm0_31, MCK_Imm1_32 }, 0},
  { 596 /* sbfx */, ARM::SBFX, Convert__Reg1_1__Reg1_2__Imm0_311_3__Imm1_321_4__CondCode2_0, Feature_IsARM|Feature_HasV6T2, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_Imm0_31, MCK_Imm1_32 }, 0},
  { 601 /* sdiv */, ARM::t2SDIV, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_HasDivide|Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 601 /* sdiv */, ARM::SDIV, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsARM|Feature_HasDivideInARM, { MCK_CondCode, MCK_GPR, MCK_GPR, MCK_GPR }, 0},
  { 606 /* sel */, ARM::SEL, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsARM|Feature_HasV6, { MCK_CondCode, MCK_GPR, MCK_GPR, MCK_GPR }, 0},
  { 606 /* sel */, ARM::t2SEL, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsThumb2|Feature_HasThumb2DSP, { MCK_CondCode, MCK_GPR, MCK_GPR, MCK_GPR }, 0},
  { 610 /* setend */, ARM::SETEND, Convert__SetEndImm1_0, Feature_IsARM, { MCK_SetEndImm }, 0},
  { 610 /* setend */, ARM::tSETEND, Convert__SetEndImm1_0, Feature_IsThumb, { MCK_SetEndImm }, 0},
  { 617 /* sev */, ARM::HINT, Convert__imm_4__CondCode2_0, Feature_IsARM|Feature_HasV6T2, { MCK_CondCode }, 0},
  { 617 /* sev */, ARM::tSEV, Convert__CondCode2_0, Feature_IsThumb2, { MCK_CondCode }, 0},
  { 617 /* sev */, ARM::t2HINT, Convert__imm_4__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK__DOT_w }, 0},
  { 621 /* shadd16 */, ARM::t2SHADD16, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsThumb2|Feature_HasThumb2DSP, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 621 /* shadd16 */, ARM::SHADD16, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_GPRnopc }, 0},
  { 629 /* shadd8 */, ARM::t2SHADD8, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsThumb2|Feature_HasThumb2DSP, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 629 /* shadd8 */, ARM::SHADD8, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_GPRnopc }, 0},
  { 636 /* shasx */, ARM::t2SHASX, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsThumb2|Feature_HasThumb2DSP, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 636 /* shasx */, ARM::SHASX, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_GPRnopc }, 0},
  { 642 /* shsax */, ARM::t2SHSAX, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsThumb2|Feature_HasThumb2DSP, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 642 /* shsax */, ARM::SHSAX, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_GPRnopc }, 0},
  { 648 /* shsub16 */, ARM::t2SHSUB16, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsThumb2|Feature_HasThumb2DSP, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 648 /* shsub16 */, ARM::SHSUB16, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_GPRnopc }, 0},
  { 656 /* shsub8 */, ARM::t2SHSUB8, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsThumb2|Feature_HasThumb2DSP, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 656 /* shsub8 */, ARM::SHSUB8, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_GPRnopc }, 0},
  { 663 /* smc */, ARM::SMC, Convert__Imm0_151_1__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_Imm0_15 }, 0},
  { 663 /* smc */, ARM::t2SMC, Convert__Imm0_151_1__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_Imm0_15 }, 0},
  { 667 /* smlabb */, ARM::t2SMLABB, Convert__Reg1_1__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_IsThumb2|Feature_HasThumb2DSP, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 667 /* smlabb */, ARM::SMLABB, Convert__Reg1_1__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_IsARM|Feature_HasV5TE, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_GPRnopc, MCK_GPR }, 0},
  { 674 /* smlabt */, ARM::t2SMLABT, Convert__Reg1_1__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_IsThumb2|Feature_HasThumb2DSP, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 674 /* smlabt */, ARM::SMLABT, Convert__Reg1_1__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_IsARM|Feature_HasV5TE, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_GPRnopc, MCK_GPR }, 0},
  { 681 /* smlad */, ARM::t2SMLAD, Convert__Reg1_1__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_IsThumb2|Feature_HasThumb2DSP, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 681 /* smlad */, ARM::SMLAD, Convert__Reg1_1__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_IsARM|Feature_HasV6, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_GPRnopc, MCK_GPR }, 0},
  { 687 /* smladx */, ARM::t2SMLADX, Convert__Reg1_1__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_IsThumb2|Feature_HasThumb2DSP, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 687 /* smladx */, ARM::SMLADX, Convert__Reg1_1__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_IsARM|Feature_HasV6, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_GPRnopc, MCK_GPR }, 0},
  { 694 /* smlal */, ARM::t2SMLAL, Convert__Reg1_1__Reg1_2__Reg1_3__Reg1_4__Tie0__Tie1__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 694 /* smlal */, ARM::SMLAL, Convert__Reg1_2__Reg1_3__Reg1_4__Reg1_5__Tie0__Tie1__CondCode2_1__CCOut1_0, Feature_IsARM|Feature_HasV6, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_GPR, MCK_GPR, MCK_GPR }, 0},
  { 700 /* smlalbb */, ARM::t2SMLALBB, Convert__Reg1_1__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_IsThumb2|Feature_HasThumb2DSP, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 700 /* smlalbb */, ARM::SMLALBB, Convert__Reg1_1__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_IsARM|Feature_HasV5TE, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_GPRnopc, MCK_GPRnopc }, 0},
  { 708 /* smlalbt */, ARM::t2SMLALBT, Convert__Reg1_1__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_IsThumb2|Feature_HasThumb2DSP, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 708 /* smlalbt */, ARM::SMLALBT, Convert__Reg1_1__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_IsARM|Feature_HasV5TE, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_GPRnopc, MCK_GPRnopc }, 0},
  { 716 /* smlald */, ARM::t2SMLALD, Convert__Reg1_1__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_IsThumb2|Feature_HasThumb2DSP, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 716 /* smlald */, ARM::SMLALD, Convert__Reg1_1__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_IsARM|Feature_HasV6, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_GPRnopc, MCK_GPRnopc }, 0},
  { 723 /* smlaldx */, ARM::t2SMLALDX, Convert__Reg1_1__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_IsThumb2|Feature_HasThumb2DSP, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 723 /* smlaldx */, ARM::SMLALDX, Convert__Reg1_1__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_IsARM|Feature_HasV6, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_GPRnopc, MCK_GPRnopc }, 0},
  { 731 /* smlaltb */, ARM::t2SMLALTB, Convert__Reg1_1__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_IsThumb2|Feature_HasThumb2DSP, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 731 /* smlaltb */, ARM::SMLALTB, Convert__Reg1_1__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_IsARM|Feature_HasV5TE, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_GPRnopc, MCK_GPRnopc }, 0},
  { 739 /* smlaltt */, ARM::t2SMLALTT, Convert__Reg1_1__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_IsThumb2|Feature_HasThumb2DSP, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 739 /* smlaltt */, ARM::SMLALTT, Convert__Reg1_1__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_IsARM|Feature_HasV5TE, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_GPRnopc, MCK_GPRnopc }, 0},
  { 747 /* smlatb */, ARM::t2SMLATB, Convert__Reg1_1__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_IsThumb2|Feature_HasThumb2DSP, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 747 /* smlatb */, ARM::SMLATB, Convert__Reg1_1__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_IsARM|Feature_HasV5TE, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_GPRnopc, MCK_GPR }, 0},
  { 754 /* smlatt */, ARM::t2SMLATT, Convert__Reg1_1__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_IsThumb2|Feature_HasThumb2DSP, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 754 /* smlatt */, ARM::SMLATT, Convert__Reg1_1__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_IsARM|Feature_HasV5TE, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_GPRnopc, MCK_GPR }, 0},
  { 761 /* smlawb */, ARM::t2SMLAWB, Convert__Reg1_1__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_IsThumb2|Feature_HasThumb2DSP, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 761 /* smlawb */, ARM::SMLAWB, Convert__Reg1_1__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_IsARM|Feature_HasV5TE, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_GPRnopc, MCK_GPR }, 0},
  { 768 /* smlawt */, ARM::t2SMLAWT, Convert__Reg1_1__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_IsThumb2|Feature_HasThumb2DSP, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 768 /* smlawt */, ARM::SMLAWT, Convert__Reg1_1__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_IsARM|Feature_HasV5TE, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_GPRnopc, MCK_GPR }, 0},
  { 775 /* smlsd */, ARM::t2SMLSD, Convert__Reg1_1__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_IsThumb2|Feature_HasThumb2DSP, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 775 /* smlsd */, ARM::SMLSD, Convert__Reg1_1__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_IsARM|Feature_HasV6, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_GPRnopc, MCK_GPR }, 0},
  { 781 /* smlsdx */, ARM::t2SMLSDX, Convert__Reg1_1__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_IsThumb2|Feature_HasThumb2DSP, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 781 /* smlsdx */, ARM::SMLSDX, Convert__Reg1_1__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_IsARM|Feature_HasV6, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_GPRnopc, MCK_GPR }, 0},
  { 788 /* smlsld */, ARM::t2SMLSLD, Convert__Reg1_1__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_IsThumb2|Feature_HasThumb2DSP, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 788 /* smlsld */, ARM::SMLSLD, Convert__Reg1_1__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_IsARM|Feature_HasV6, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_GPRnopc, MCK_GPRnopc }, 0},
  { 795 /* smlsldx */, ARM::t2SMLSLDX, Convert__Reg1_1__Reg1_2__Reg1_4__Reg1_3__CondCode2_0, Feature_IsThumb2|Feature_HasThumb2DSP, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 795 /* smlsldx */, ARM::SMLSLDX, Convert__Reg1_1__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_IsARM|Feature_HasV6, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_GPRnopc, MCK_GPRnopc }, 0},
  { 803 /* smmla */, ARM::t2SMMLA, Convert__Reg1_1__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_IsThumb2|Feature_HasThumb2DSP, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 803 /* smmla */, ARM::SMMLA, Convert__Reg1_1__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_IsARM|Feature_HasV6, { MCK_CondCode, MCK_GPR, MCK_GPR, MCK_GPR, MCK_GPR }, 0},
  { 809 /* smmlar */, ARM::t2SMMLAR, Convert__Reg1_1__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_IsThumb2|Feature_HasThumb2DSP, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 809 /* smmlar */, ARM::SMMLAR, Convert__Reg1_1__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_IsARM|Feature_HasV6, { MCK_CondCode, MCK_GPR, MCK_GPR, MCK_GPR, MCK_GPR }, 0},
  { 816 /* smmls */, ARM::t2SMMLS, Convert__Reg1_1__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_IsThumb2|Feature_HasThumb2DSP, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 816 /* smmls */, ARM::SMMLS, Convert__Reg1_1__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_IsARM|Feature_HasV6, { MCK_CondCode, MCK_GPR, MCK_GPR, MCK_GPR, MCK_GPR }, 0},
  { 822 /* smmlsr */, ARM::t2SMMLSR, Convert__Reg1_1__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_IsThumb2|Feature_HasThumb2DSP, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 822 /* smmlsr */, ARM::SMMLSR, Convert__Reg1_1__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_IsARM|Feature_HasV6, { MCK_CondCode, MCK_GPR, MCK_GPR, MCK_GPR, MCK_GPR }, 0},
  { 829 /* smmul */, ARM::t2SMMUL, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsThumb2|Feature_HasThumb2DSP, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 829 /* smmul */, ARM::SMMUL, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsARM|Feature_HasV6, { MCK_CondCode, MCK_GPR, MCK_GPR, MCK_GPR }, 0},
  { 835 /* smmulr */, ARM::t2SMMULR, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsThumb2|Feature_HasThumb2DSP, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 835 /* smmulr */, ARM::SMMULR, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsARM|Feature_HasV6, { MCK_CondCode, MCK_GPR, MCK_GPR, MCK_GPR }, 0},
  { 842 /* smuad */, ARM::t2SMUAD, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsThumb2|Feature_HasThumb2DSP, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 842 /* smuad */, ARM::SMUAD, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsARM|Feature_HasV6, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_GPRnopc }, 0},
  { 848 /* smuadx */, ARM::t2SMUADX, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsThumb2|Feature_HasThumb2DSP, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 848 /* smuadx */, ARM::SMUADX, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsARM|Feature_HasV6, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_GPRnopc }, 0},
  { 855 /* smulbb */, ARM::t2SMULBB, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsThumb2|Feature_HasThumb2DSP, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 855 /* smulbb */, ARM::SMULBB, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsARM|Feature_HasV5TE, { MCK_CondCode, MCK_GPR, MCK_GPR, MCK_GPR }, 0},
  { 862 /* smulbt */, ARM::t2SMULBT, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsThumb2|Feature_HasThumb2DSP, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 862 /* smulbt */, ARM::SMULBT, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsARM|Feature_HasV5TE, { MCK_CondCode, MCK_GPR, MCK_GPR, MCK_GPR }, 0},
  { 869 /* smull */, ARM::t2SMULL, Convert__Reg1_1__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 869 /* smull */, ARM::SMULL, Convert__Reg1_2__Reg1_3__Reg1_4__Reg1_5__CondCode2_1__CCOut1_0, Feature_IsARM|Feature_HasV6, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_GPR, MCK_GPR, MCK_GPR }, 0},
  { 869 /* smull */, ARM::SMULL, Convert__Reg1_2__Reg1_3__Reg1_4__Reg1_5__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_GPR, MCK_GPR, MCK_GPR }, 0},
  { 875 /* smultb */, ARM::t2SMULTB, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsThumb2|Feature_HasThumb2DSP, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 875 /* smultb */, ARM::SMULTB, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsARM|Feature_HasV5TE, { MCK_CondCode, MCK_GPR, MCK_GPR, MCK_GPR }, 0},
  { 882 /* smultt */, ARM::t2SMULTT, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsThumb2|Feature_HasThumb2DSP, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 882 /* smultt */, ARM::SMULTT, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsARM|Feature_HasV5TE, { MCK_CondCode, MCK_GPR, MCK_GPR, MCK_GPR }, 0},
  { 889 /* smulwb */, ARM::t2SMULWB, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsThumb2|Feature_HasThumb2DSP, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 889 /* smulwb */, ARM::SMULWB, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsARM|Feature_HasV5TE, { MCK_CondCode, MCK_GPR, MCK_GPR, MCK_GPR }, 0},
  { 896 /* smulwt */, ARM::t2SMULWT, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsThumb2|Feature_HasThumb2DSP, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 896 /* smulwt */, ARM::SMULWT, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsARM|Feature_HasV5TE, { MCK_CondCode, MCK_GPR, MCK_GPR, MCK_GPR }, 0},
  { 903 /* smusd */, ARM::t2SMUSD, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsThumb2|Feature_HasThumb2DSP, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 903 /* smusd */, ARM::SMUSD, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsARM|Feature_HasV6, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_GPRnopc }, 0},
  { 909 /* smusdx */, ARM::t2SMUSDX, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsThumb2|Feature_HasThumb2DSP, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 909 /* smusdx */, ARM::SMUSDX, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsARM|Feature_HasV6, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_GPRnopc }, 0},
  { 916 /* srsda */, ARM::SRSDA, Convert__Imm0_311_1, Feature_IsARM, { MCK_GPRsp, MCK_Imm0_31 }, 0},
  { 916 /* srsda */, ARM::SRSDA_UPD, Convert__Imm0_311_2, Feature_IsARM, { MCK_GPRsp, MCK__EXCLAIM_, MCK_Imm0_31 }, 0},
  { 922 /* srsdb */, ARM::SRSDB, Convert__Imm0_311_1, Feature_IsARM, { MCK_GPRsp, MCK_Imm0_31 }, 0},
  { 922 /* srsdb */, ARM::SRSDB_UPD, Convert__Imm0_311_2, Feature_IsARM, { MCK_GPRsp, MCK__EXCLAIM_, MCK_Imm0_31 }, 0},
  { 922 /* srsdb */, ARM::t2SRSDB, Convert__Imm0_311_2__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_GPRsp, MCK_Imm0_31 }, 0},
  { 922 /* srsdb */, ARM::t2SRSDB_UPD, Convert__Imm0_311_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_GPRsp, MCK__EXCLAIM_, MCK_Imm0_31 }, 0},
  { 928 /* srsia */, ARM::SRSIA, Convert__Imm0_311_1, Feature_IsARM, { MCK_GPRsp, MCK_Imm0_31 }, 0},
  { 928 /* srsia */, ARM::SRSIA_UPD, Convert__Imm0_311_2, Feature_IsARM, { MCK_GPRsp, MCK__EXCLAIM_, MCK_Imm0_31 }, 0},
  { 928 /* srsia */, ARM::t2SRSIA, Convert__Imm0_311_2__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_GPRsp, MCK_Imm0_31 }, 0},
  { 928 /* srsia */, ARM::t2SRSIA_UPD, Convert__Imm0_311_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_GPRsp, MCK__EXCLAIM_, MCK_Imm0_31 }, 0},
  { 934 /* srsib */, ARM::SRSIB, Convert__Imm0_311_1, Feature_IsARM, { MCK_GPRsp, MCK_Imm0_31 }, 0},
  { 934 /* srsib */, ARM::SRSIB_UPD, Convert__Imm0_311_2, Feature_IsARM, { MCK_GPRsp, MCK__EXCLAIM_, MCK_Imm0_31 }, 0},
  { 940 /* ssat */, ARM::t2SSAT, Convert__Reg1_1__Imm1_321_2__Reg1_3__imm_0__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_Imm1_32, MCK_rGPR }, 0},
  { 940 /* ssat */, ARM::SSAT, Convert__Reg1_1__Imm1_321_2__Reg1_3__imm_0__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPRnopc, MCK_Imm1_32, MCK_GPRnopc }, 0},
  { 940 /* ssat */, ARM::t2SSAT, Convert__Reg1_1__Imm1_321_2__Reg1_3__ShifterImm1_4__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_Imm1_32, MCK_rGPR, MCK_ShifterImm }, 0},
  { 940 /* ssat */, ARM::SSAT, Convert__Reg1_1__Imm1_321_2__Reg1_3__ShifterImm1_4__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPRnopc, MCK_Imm1_32, MCK_GPRnopc, MCK_ShifterImm }, 0},
  { 945 /* ssat16 */, ARM::t2SSAT16, Convert__Reg1_1__Imm1_161_2__Reg1_3__CondCode2_0, Feature_IsThumb2|Feature_HasThumb2DSP, { MCK_CondCode, MCK_rGPR, MCK_Imm1_16, MCK_rGPR }, 0},
  { 945 /* ssat16 */, ARM::SSAT16, Convert__Reg1_1__Imm1_161_2__Reg1_3__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPRnopc, MCK_Imm1_16, MCK_GPRnopc }, 0},
  { 952 /* ssax */, ARM::t2SSAX, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsThumb2|Feature_HasThumb2DSP, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 952 /* ssax */, ARM::SSAX, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_GPRnopc }, 0},
  { 957 /* ssub16 */, ARM::t2SSUB16, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsThumb2|Feature_HasThumb2DSP, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 957 /* ssub16 */, ARM::SSUB16, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_GPRnopc }, 0},
  { 964 /* ssub8 */, ARM::t2SSUB8, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsThumb2|Feature_HasThumb2DSP, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 964 /* ssub8 */, ARM::SSUB8, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_GPRnopc }, 0},
  { 970 /* stc */, ARM::STC_OFFSET, Convert__CoprocNum1_1__CoprocReg1_2__AddrMode52_3__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_CoprocNum, MCK_CoprocReg, MCK_AddrMode5 }, 0},
  { 970 /* stc */, ARM::t2STC_OFFSET, Convert__CoprocNum1_1__CoprocReg1_2__AddrMode52_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_CoprocNum, MCK_CoprocReg, MCK_AddrMode5 }, 0},
  { 970 /* stc */, ARM::STC_PRE, Convert__CoprocNum1_1__CoprocReg1_2__AddrMode52_3__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_CoprocNum, MCK_CoprocReg, MCK_AddrMode5, MCK__EXCLAIM_ }, 0},
  { 970 /* stc */, ARM::t2STC_PRE, Convert__CoprocNum1_1__CoprocReg1_2__AddrMode52_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_CoprocNum, MCK_CoprocReg, MCK_AddrMode5, MCK__EXCLAIM_ }, 0},
  { 970 /* stc */, ARM::STC_OPTION, Convert__CoprocNum1_1__CoprocReg1_2__MemNoOffset1_3__CoprocOption1_4__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_CoprocNum, MCK_CoprocReg, MCK_MemNoOffset, MCK_CoprocOption }, 0},
  { 970 /* stc */, ARM::t2STC_OPTION, Convert__CoprocNum1_1__CoprocReg1_2__MemNoOffset1_3__CoprocOption1_4__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_CoprocNum, MCK_CoprocReg, MCK_MemNoOffset, MCK_CoprocOption }, 0},
  { 970 /* stc */, ARM::STC_POST, Convert__CoprocNum1_1__CoprocReg1_2__MemNoOffset1_3__PostIdxImm8s41_4__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_CoprocNum, MCK_CoprocReg, MCK_MemNoOffset, MCK_PostIdxImm8s4 }, 0},
  { 970 /* stc */, ARM::t2STC_POST, Convert__CoprocNum1_1__CoprocReg1_2__MemNoOffset1_3__PostIdxImm8s41_4__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_CoprocNum, MCK_CoprocReg, MCK_MemNoOffset, MCK_PostIdxImm8s4 }, 0},
  { 974 /* stc2 */, ARM::STC2_OFFSET, Convert__CoprocNum1_0__CoprocReg1_1__AddrMode52_2, Feature_IsARM, { MCK_CoprocNum, MCK_CoprocReg, MCK_AddrMode5 }, 0},
  { 974 /* stc2 */, ARM::t2STC2_OFFSET, Convert__CoprocNum1_1__CoprocReg1_2__AddrMode52_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_CoprocNum, MCK_CoprocReg, MCK_AddrMode5 }, 0},
  { 974 /* stc2 */, ARM::STC2_PRE, Convert__CoprocNum1_0__CoprocReg1_1__AddrMode52_2, Feature_IsARM, { MCK_CoprocNum, MCK_CoprocReg, MCK_AddrMode5, MCK__EXCLAIM_ }, 0},
  { 974 /* stc2 */, ARM::STC2_OPTION, Convert__CoprocNum1_0__CoprocReg1_1__MemNoOffset1_2__CoprocOption1_3, Feature_IsARM, { MCK_CoprocNum, MCK_CoprocReg, MCK_MemNoOffset, MCK_CoprocOption }, 0},
  { 974 /* stc2 */, ARM::STC2_POST, Convert__CoprocNum1_0__CoprocReg1_1__MemNoOffset1_2__PostIdxImm8s41_3, Feature_IsARM, { MCK_CoprocNum, MCK_CoprocReg, MCK_MemNoOffset, MCK_PostIdxImm8s4 }, 0},
  { 974 /* stc2 */, ARM::t2STC2_PRE, Convert__CoprocNum1_1__CoprocReg1_2__AddrMode52_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_CoprocNum, MCK_CoprocReg, MCK_AddrMode5, MCK__EXCLAIM_ }, 0},
  { 974 /* stc2 */, ARM::t2STC2_OPTION, Convert__CoprocNum1_1__CoprocReg1_2__MemNoOffset1_3__CoprocOption1_4__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_CoprocNum, MCK_CoprocReg, MCK_MemNoOffset, MCK_CoprocOption }, 0},
  { 974 /* stc2 */, ARM::t2STC2_POST, Convert__CoprocNum1_1__CoprocReg1_2__MemNoOffset1_3__PostIdxImm8s41_4__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_CoprocNum, MCK_CoprocReg, MCK_MemNoOffset, MCK_PostIdxImm8s4 }, 0},
  { 979 /* stc2l */, ARM::STC2L_OFFSET, Convert__CoprocNum1_0__CoprocReg1_1__AddrMode52_2, Feature_IsARM, { MCK_CoprocNum, MCK_CoprocReg, MCK_AddrMode5 }, 0},
  { 979 /* stc2l */, ARM::t2STC2L_OFFSET, Convert__CoprocNum1_1__CoprocReg1_2__AddrMode52_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_CoprocNum, MCK_CoprocReg, MCK_AddrMode5 }, 0},
  { 979 /* stc2l */, ARM::STC2L_PRE, Convert__CoprocNum1_0__CoprocReg1_1__AddrMode52_2, Feature_IsARM, { MCK_CoprocNum, MCK_CoprocReg, MCK_AddrMode5, MCK__EXCLAIM_ }, 0},
  { 979 /* stc2l */, ARM::STC2L_OPTION, Convert__CoprocNum1_0__CoprocReg1_1__MemNoOffset1_2__CoprocOption1_3, Feature_IsARM, { MCK_CoprocNum, MCK_CoprocReg, MCK_MemNoOffset, MCK_CoprocOption }, 0},
  { 979 /* stc2l */, ARM::STC2L_POST, Convert__CoprocNum1_0__CoprocReg1_1__MemNoOffset1_2__PostIdxImm8s41_3, Feature_IsARM, { MCK_CoprocNum, MCK_CoprocReg, MCK_MemNoOffset, MCK_PostIdxImm8s4 }, 0},
  { 979 /* stc2l */, ARM::t2STC2L_PRE, Convert__CoprocNum1_1__CoprocReg1_2__AddrMode52_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_CoprocNum, MCK_CoprocReg, MCK_AddrMode5, MCK__EXCLAIM_ }, 0},
  { 979 /* stc2l */, ARM::t2STC2L_OPTION, Convert__CoprocNum1_1__CoprocReg1_2__MemNoOffset1_3__CoprocOption1_4__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_CoprocNum, MCK_CoprocReg, MCK_MemNoOffset, MCK_CoprocOption }, 0},
  { 979 /* stc2l */, ARM::t2STC2L_POST, Convert__CoprocNum1_1__CoprocReg1_2__MemNoOffset1_3__PostIdxImm8s41_4__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_CoprocNum, MCK_CoprocReg, MCK_MemNoOffset, MCK_PostIdxImm8s4 }, 0},
  { 985 /* stcl */, ARM::STCL_OFFSET, Convert__CoprocNum1_1__CoprocReg1_2__AddrMode52_3__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_CoprocNum, MCK_CoprocReg, MCK_AddrMode5 }, 0},
  { 985 /* stcl */, ARM::t2STCL_OFFSET, Convert__CoprocNum1_1__CoprocReg1_2__AddrMode52_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_CoprocNum, MCK_CoprocReg, MCK_AddrMode5 }, 0},
  { 985 /* stcl */, ARM::STCL_PRE, Convert__CoprocNum1_1__CoprocReg1_2__AddrMode52_3__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_CoprocNum, MCK_CoprocReg, MCK_AddrMode5, MCK__EXCLAIM_ }, 0},
  { 985 /* stcl */, ARM::t2STCL_PRE, Convert__CoprocNum1_1__CoprocReg1_2__AddrMode52_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_CoprocNum, MCK_CoprocReg, MCK_AddrMode5, MCK__EXCLAIM_ }, 0},
  { 985 /* stcl */, ARM::STCL_OPTION, Convert__CoprocNum1_1__CoprocReg1_2__MemNoOffset1_3__CoprocOption1_4__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_CoprocNum, MCK_CoprocReg, MCK_MemNoOffset, MCK_CoprocOption }, 0},
  { 985 /* stcl */, ARM::t2STCL_OPTION, Convert__CoprocNum1_1__CoprocReg1_2__MemNoOffset1_3__CoprocOption1_4__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_CoprocNum, MCK_CoprocReg, MCK_MemNoOffset, MCK_CoprocOption }, 0},
  { 985 /* stcl */, ARM::STCL_POST, Convert__CoprocNum1_1__CoprocReg1_2__MemNoOffset1_3__PostIdxImm8s41_4__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_CoprocNum, MCK_CoprocReg, MCK_MemNoOffset, MCK_PostIdxImm8s4 }, 0},
  { 985 /* stcl */, ARM::t2STCL_POST, Convert__CoprocNum1_1__CoprocReg1_2__MemNoOffset1_3__PostIdxImm8s41_4__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_CoprocNum, MCK_CoprocReg, MCK_MemNoOffset, MCK_PostIdxImm8s4 }, 0},
  { 990 /* stm */, ARM::STMIA, Convert__Reg1_1__CondCode2_0__RegList1_2, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_RegList }, 0},
  { 990 /* stm */, ARM::t2STMIA, Convert__Reg1_1__CondCode2_0__RegList1_2, Feature_IsThumb2, { MCK_CondCode, MCK_GPR, MCK_RegList }, 0},
  { 990 /* stm */, ARM::t2STMIA, Convert__Reg1_1__CondCode2_0__RegList1_2, Feature_IsThumb2, { MCK_CondCode, MCK_GPR, MCK_RegList }, 0},
  { 990 /* stm */, ARM::t2STMIA, Convert__Reg1_2__CondCode2_0__RegList1_3, Feature_IsThumb2, { MCK_CondCode, MCK__DOT_w, MCK_GPR, MCK_RegList }, 0},
  { 990 /* stm */, ARM::tSTMIA_UPD, Convert__Reg1_1__Tie0__CondCode2_0__RegList1_3, Feature_IsThumb, { MCK_CondCode, MCK_tGPR, MCK__EXCLAIM_, MCK_RegList }, 0},
  { 990 /* stm */, ARM::STMIA_UPD, Convert__Reg1_1__Tie0__CondCode2_0__RegList1_3, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK__EXCLAIM_, MCK_RegList }, 0},
  { 990 /* stm */, ARM::t2STMIA_UPD, Convert__Reg1_1__Tie0__CondCode2_0__RegList1_3, Feature_IsThumb2, { MCK_CondCode, MCK_GPR, MCK__EXCLAIM_, MCK_RegList }, 0},
  { 990 /* stm */, ARM::sysSTMIA, Convert__Reg1_1__CondCode2_0__RegList1_2, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_RegList, MCK__94_ }, 0},
  { 990 /* stm */, ARM::t2STMIA_UPD, Convert__Reg1_2__Tie0__CondCode2_0__RegList1_4, Feature_IsThumb2, { MCK_CondCode, MCK__DOT_w, MCK_GPR, MCK__EXCLAIM_, MCK_RegList }, 0},
  { 990 /* stm */, ARM::sysSTMIA_UPD, Convert__Reg1_1__Tie0__CondCode2_0__RegList1_3, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK__EXCLAIM_, MCK_RegList, MCK__94_ }, 0},
  { 994 /* stmda */, ARM::STMDA, Convert__Reg1_1__CondCode2_0__RegList1_2, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_RegList }, 0},
  { 994 /* stmda */, ARM::STMDA_UPD, Convert__Reg1_1__Tie0__CondCode2_0__RegList1_3, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK__EXCLAIM_, MCK_RegList }, 0},
  { 994 /* stmda */, ARM::sysSTMDA, Convert__Reg1_1__CondCode2_0__RegList1_2, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_RegList, MCK__94_ }, 0},
  { 994 /* stmda */, ARM::sysSTMDA_UPD, Convert__Reg1_1__Tie0__CondCode2_0__RegList1_3, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK__EXCLAIM_, MCK_RegList, MCK__94_ }, 0},
  { 1000 /* stmdb */, ARM::STMDB, Convert__Reg1_1__CondCode2_0__RegList1_2, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_RegList }, 0},
  { 1000 /* stmdb */, ARM::t2STMDB, Convert__Reg1_1__CondCode2_0__RegList1_2, Feature_IsThumb2, { MCK_CondCode, MCK_GPR, MCK_RegList }, 0},
  { 1000 /* stmdb */, ARM::t2STMDB, Convert__Reg1_2__CondCode2_0__RegList1_3, Feature_IsThumb2, { MCK_CondCode, MCK__DOT_w, MCK_GPR, MCK_RegList }, 0},
  { 1000 /* stmdb */, ARM::STMDB_UPD, Convert__Reg1_1__Tie0__CondCode2_0__RegList1_3, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK__EXCLAIM_, MCK_RegList }, 0},
  { 1000 /* stmdb */, ARM::t2STMDB_UPD, Convert__Reg1_1__Tie0__CondCode2_0__RegList1_3, Feature_IsThumb2, { MCK_CondCode, MCK_GPR, MCK__EXCLAIM_, MCK_RegList }, 0},
  { 1000 /* stmdb */, ARM::sysSTMDB, Convert__Reg1_1__CondCode2_0__RegList1_2, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_RegList, MCK__94_ }, 0},
  { 1000 /* stmdb */, ARM::t2STMDB_UPD, Convert__Reg1_2__Tie0__CondCode2_0__RegList1_4, Feature_IsThumb2, { MCK_CondCode, MCK__DOT_w, MCK_GPR, MCK__EXCLAIM_, MCK_RegList }, 0},
  { 1000 /* stmdb */, ARM::sysSTMDB_UPD, Convert__Reg1_1__Tie0__CondCode2_0__RegList1_3, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK__EXCLAIM_, MCK_RegList, MCK__94_ }, 0},
  { 1006 /* stmib */, ARM::STMIB, Convert__Reg1_1__CondCode2_0__RegList1_2, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_RegList }, 0},
  { 1006 /* stmib */, ARM::STMIB_UPD, Convert__Reg1_1__Tie0__CondCode2_0__RegList1_3, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK__EXCLAIM_, MCK_RegList }, 0},
  { 1006 /* stmib */, ARM::sysSTMIB, Convert__Reg1_1__CondCode2_0__RegList1_2, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_RegList, MCK__94_ }, 0},
  { 1006 /* stmib */, ARM::sysSTMIB_UPD, Convert__Reg1_1__Tie0__CondCode2_0__RegList1_3, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK__EXCLAIM_, MCK_RegList, MCK__94_ }, 0},
  { 1012 /* str */, ARM::tSTRi, Convert__Reg1_1__MemThumbRIs42_2__CondCode2_0, Feature_IsThumb, { MCK_CondCode, MCK_tGPR, MCK_MemThumbRIs4 }, 0},
  { 1012 /* str */, ARM::tSTRr, Convert__Reg1_1__MemThumbRR2_2__CondCode2_0, Feature_IsThumb, { MCK_CondCode, MCK_tGPR, MCK_MemThumbRR }, 0},
  { 1012 /* str */, ARM::tSTRspi, Convert__Reg1_1__MemThumbSPI2_2__CondCode2_0, Feature_IsThumb, { MCK_CondCode, MCK_tGPR, MCK_MemThumbSPI }, 0},
  { 1012 /* str */, ARM::STRi12, Convert__Reg1_1__MemImm12Offset2_2__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_MemImm12Offset }, 0},
  { 1012 /* str */, ARM::t2STRi8, Convert__Reg1_1__MemNegImm8Offset2_2__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_GPR, MCK_MemNegImm8Offset }, 0},
  { 1012 /* str */, ARM::STRrs, Convert__Reg1_1__MemRegOffset3_2__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_MemRegOffset }, 0},
  { 1012 /* str */, ARM::t2STRi12, Convert__Reg1_1__MemUImm12Offset2_2__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_GPR, MCK_MemUImm12Offset }, 0},
  { 1012 /* str */, ARM::t2STRs, Convert__Reg1_1__T2MemRegOffset3_2__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_GPR, MCK_T2MemRegOffset }, 0},
  { 1012 /* str */, ARM::t2STRi12, Convert__Reg1_2__MemUImm12Offset2_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK__DOT_w, MCK_GPR, MCK_MemUImm12Offset }, 0},
  { 1012 /* str */, ARM::t2STRs, Convert__Reg1_2__T2MemRegOffset3_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK__DOT_w, MCK_GPR, MCK_T2MemRegOffset }, 0},
  { 1012 /* str */, ARM::t2STR_PRE, ConvertCustom_cvtStWriteBackRegT2AddrModeImm8, Feature_IsThumb2, { MCK_CondCode, MCK_GPRnopc, MCK_MemImm8Offset, MCK__EXCLAIM_ }, 0},
  { 1012 /* str */, ARM::t2STR_POST, Convert__MemNoOffset1_2__Reg1_1__Tie0__Imm1_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_GPRnopc, MCK_MemNoOffset, MCK_Imm }, 0},
  { 1012 /* str */, ARM::STR_PRE_IMM, ConvertCustom_cvtStWriteBackRegAddrModeImm12, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_MemImm12Offset, MCK__EXCLAIM_ }, 0},
  { 1012 /* str */, ARM::STR_POST_IMM, Convert__MemNoOffset1_2__Reg1_1__Tie0__AM2OffsetImm2_3__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_MemNoOffset, MCK_AM2OffsetImm }, 0},
  { 1012 /* str */, ARM::STR_POST_REG, Convert__MemNoOffset1_2__Reg1_1__Tie0__PostIdxRegShifted2_3__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_MemNoOffset, MCK_PostIdxRegShifted }, 0},
  { 1012 /* str */, ARM::STR_PRE_REG, ConvertCustom_cvtStWriteBackRegAddrMode2, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_MemRegOffset, MCK__EXCLAIM_ }, 0},
  { 1016 /* strb */, ARM::tSTRBi, Convert__Reg1_1__MemThumbRIs12_2__CondCode2_0, Feature_IsThumb, { MCK_CondCode, MCK_tGPR, MCK_MemThumbRIs1 }, 0},
  { 1016 /* strb */, ARM::tSTRBr, Convert__Reg1_1__MemThumbRR2_2__CondCode2_0, Feature_IsThumb, { MCK_CondCode, MCK_tGPR, MCK_MemThumbRR }, 0},
  { 1016 /* strb */, ARM::t2STRBi8, Convert__Reg1_1__MemNegImm8Offset2_2__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_MemNegImm8Offset }, 0},
  { 1016 /* strb */, ARM::t2STRBi12, Convert__Reg1_1__MemUImm12Offset2_2__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_MemUImm12Offset }, 0},
  { 1016 /* strb */, ARM::t2STRBs, Convert__Reg1_1__T2MemRegOffset3_2__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_T2MemRegOffset }, 0},
  { 1016 /* strb */, ARM::STRBi12, Convert__Reg1_1__MemImm12Offset2_2__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPRnopc, MCK_MemImm12Offset }, 0},
  { 1016 /* strb */, ARM::STRBrs, Convert__Reg1_1__MemRegOffset3_2__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPRnopc, MCK_MemRegOffset }, 0},
  { 1016 /* strb */, ARM::t2STRBi12, Convert__Reg1_2__MemUImm12Offset2_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK__DOT_w, MCK_rGPR, MCK_MemUImm12Offset }, 0},
  { 1016 /* strb */, ARM::t2STRBs, Convert__Reg1_2__T2MemRegOffset3_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK__DOT_w, MCK_rGPR, MCK_T2MemRegOffset }, 0},
  { 1016 /* strb */, ARM::t2STRB_PRE, ConvertCustom_cvtStWriteBackRegT2AddrModeImm8, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_MemImm8Offset, MCK__EXCLAIM_ }, 0},
  { 1016 /* strb */, ARM::t2STRB_POST, Convert__MemNoOffset1_2__Reg1_1__Tie0__Imm1_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_MemNoOffset, MCK_Imm }, 0},
  { 1016 /* strb */, ARM::STRB_PRE_IMM, ConvertCustom_cvtStWriteBackRegAddrModeImm12, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_MemImm12Offset, MCK__EXCLAIM_ }, 0},
  { 1016 /* strb */, ARM::STRB_POST_IMM, Convert__MemNoOffset1_2__Reg1_1__Tie0__AM2OffsetImm2_3__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_MemNoOffset, MCK_AM2OffsetImm }, 0},
  { 1016 /* strb */, ARM::STRB_POST_REG, Convert__MemNoOffset1_2__Reg1_1__Tie0__PostIdxRegShifted2_3__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_MemNoOffset, MCK_PostIdxRegShifted }, 0},
  { 1016 /* strb */, ARM::STRB_PRE_REG, ConvertCustom_cvtStWriteBackRegAddrMode2, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_MemRegOffset, MCK__EXCLAIM_ }, 0},
  { 1021 /* strbt */, ARM::t2STRBT, Convert__Reg1_1__MemImm8Offset2_2__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_MemImm8Offset }, 0},
  { 1021 /* strbt */, ARM::STRBT_POST_IMM, Convert__MemNoOffset1_2__Reg1_1__Tie0__AM2OffsetImm2_3__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_MemNoOffset, MCK_AM2OffsetImm }, 0},
  { 1021 /* strbt */, ARM::STRBT_POST_REG, Convert__MemNoOffset1_2__Reg1_1__Tie0__PostIdxRegShifted2_3__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_MemNoOffset, MCK_PostIdxRegShifted }, 0},
  { 1027 /* strd */, ARM::STRD, Convert__Reg1_1__Reg1_2__AddrMode33_3__CondCode2_0, Feature_IsARM|Feature_HasV5TE, { MCK_CondCode, MCK_GPR, MCK_GPR, MCK_AddrMode3 }, 0},
  { 1027 /* strd */, ARM::t2STRDi8, Convert__Reg1_1__Reg1_2__MemImm8s4Offset2_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_GPR, MCK_GPR, MCK_MemImm8s4Offset }, 0},
  { 1027 /* strd */, ARM::t2STRD_PRE, ConvertCustom_cvtT2StrdPre, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_MemImm8s4Offset, MCK__EXCLAIM_ }, 0},
  { 1027 /* strd */, ARM::t2STRD_POST, Convert__MemNoOffset1_3__Reg1_1__Reg1_2__Tie0__Imm1_4__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_MemNoOffset, MCK_Imm }, 0},
  { 1027 /* strd */, ARM::STRD_PRE, ConvertCustom_cvtStrdPre, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_GPR, MCK_AddrMode3, MCK__EXCLAIM_ }, 0},
  { 1027 /* strd */, ARM::STRD_POST, Convert__MemNoOffset1_3__Reg1_1__Reg1_2__Tie0__AM3Offset2_4__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_GPR, MCK_MemNoOffset, MCK_AM3Offset }, 0},
  { 1032 /* strex */, ARM::t2STREX, Convert__Reg1_1__Reg1_2__MemImm0_1020s4Offset2_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_MemImm0_1020s4Offset }, 0},
  { 1032 /* strex */, ARM::STREX, Convert__Reg1_1__Reg1_2__MemNoOffset1_3__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_GPR, MCK_MemNoOffset }, 0},
  { 1038 /* strexb */, ARM::t2STREXB, Convert__Reg1_1__Reg1_2__MemNoOffset1_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_MemNoOffset }, 0},
  { 1038 /* strexb */, ARM::STREXB, Convert__Reg1_1__Reg1_2__MemNoOffset1_3__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_GPR, MCK_MemNoOffset }, 0},
  { 1045 /* strexd */, ARM::t2STREXD, Convert__Reg1_1__Reg1_2__Reg1_3__MemNoOffset1_4__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR, MCK_MemNoOffset }, 0},
  { 1045 /* strexd */, ARM::STREXD, Convert__Reg1_1__Reg1_2__Reg1_3__MemNoOffset1_4__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_GPR, MCK_GPR, MCK_MemNoOffset }, 0},
  { 1052 /* strexh */, ARM::t2STREXH, Convert__Reg1_1__Reg1_2__MemNoOffset1_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_MemNoOffset }, 0},
  { 1052 /* strexh */, ARM::STREXH, Convert__Reg1_1__Reg1_2__MemNoOffset1_3__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_GPR, MCK_MemNoOffset }, 0},
  { 1059 /* strh */, ARM::tSTRHi, Convert__Reg1_1__MemThumbRIs22_2__CondCode2_0, Feature_IsThumb, { MCK_CondCode, MCK_tGPR, MCK_MemThumbRIs2 }, 0},
  { 1059 /* strh */, ARM::tSTRHr, Convert__Reg1_1__MemThumbRR2_2__CondCode2_0, Feature_IsThumb, { MCK_CondCode, MCK_tGPR, MCK_MemThumbRR }, 0},
  { 1059 /* strh */, ARM::t2STRHi8, Convert__Reg1_1__MemNegImm8Offset2_2__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_MemNegImm8Offset }, 0},
  { 1059 /* strh */, ARM::t2STRHi12, Convert__Reg1_1__MemUImm12Offset2_2__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_MemUImm12Offset }, 0},
  { 1059 /* strh */, ARM::t2STRHs, Convert__Reg1_1__T2MemRegOffset3_2__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_T2MemRegOffset }, 0},
  { 1059 /* strh */, ARM::STRH, Convert__Reg1_1__AddrMode33_2__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_AddrMode3 }, 0},
  { 1059 /* strh */, ARM::t2STRHi12, Convert__Reg1_2__MemUImm12Offset2_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK__DOT_w, MCK_rGPR, MCK_MemUImm12Offset }, 0},
  { 1059 /* strh */, ARM::t2STRHs, Convert__Reg1_2__T2MemRegOffset3_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK__DOT_w, MCK_rGPR, MCK_T2MemRegOffset }, 0},
  { 1059 /* strh */, ARM::t2STRH_PRE, ConvertCustom_cvtStWriteBackRegT2AddrModeImm8, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_MemImm8Offset, MCK__EXCLAIM_ }, 0},
  { 1059 /* strh */, ARM::t2STRH_POST, Convert__MemNoOffset1_2__Reg1_1__Tie0__Imm1_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_MemNoOffset, MCK_Imm }, 0},
  { 1059 /* strh */, ARM::STRH_PRE, ConvertCustom_cvtStWriteBackRegAddrMode3, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_AddrMode3, MCK__EXCLAIM_ }, 0},
  { 1059 /* strh */, ARM::STRH_POST, Convert__MemNoOffset1_2__Reg1_1__Tie0__AM3Offset2_3__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_MemNoOffset, MCK_AM3Offset }, 0},
  { 1064 /* strht */, ARM::t2STRHT, Convert__Reg1_1__MemImm8Offset2_2__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_MemImm8Offset }, 0},
  { 1064 /* strht */, ARM::STRHTi, ConvertCustom_cvtStExtTWriteBackImm, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_MemNoOffset, MCK_PostIdxImm8 }, 0},
  { 1064 /* strht */, ARM::STRHTr, ConvertCustom_cvtStExtTWriteBackReg, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_MemNoOffset, MCK_PostIdxReg }, 0},
  { 1070 /* strt */, ARM::t2STRT, Convert__Reg1_1__MemImm8Offset2_2__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_MemImm8Offset }, 0},
  { 1070 /* strt */, ARM::STRT_POST_IMM, Convert__MemNoOffset1_2__Reg1_1__Tie0__AM2OffsetImm2_3__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_MemNoOffset, MCK_AM2OffsetImm }, 0},
  { 1070 /* strt */, ARM::STRT_POST_REG, Convert__MemNoOffset1_2__Reg1_1__Tie0__PostIdxRegShifted2_3__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_MemNoOffset, MCK_PostIdxRegShifted }, 0},
  { 1075 /* sub */, ARM::tSUBspi, Convert__Reg1_1__Tie0__Imm0_508s41_2__CondCode2_0, Feature_IsThumb, { MCK_CondCode, MCK_GPRsp, MCK_Imm0_508s4 }, 0},
  { 1075 /* sub */, ARM::t2SUBri12, Convert__Reg1_1__Reg1_1__Imm0_40951_2__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_GPRnopc, MCK_Imm0_4095 }, 0},
  { 1075 /* sub */, ARM::tSUBi8, Convert__Reg1_2__CCOut1_0__Tie0__Imm0_2551_3__CondCode2_1, Feature_IsThumb, { MCK_CCOut, MCK_CondCode, MCK_tGPR, MCK_Imm0_255 }, 0},
  { 1075 /* sub */, ARM::t2SUBrr, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_GPRnopc, MCK_rGPR }, 0},
  { 1075 /* sub */, ARM::t2SUBrs, Convert__Reg1_2__Reg1_2__RegShiftedImm2_3__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_GPRnopc, MCK_RegShiftedImm }, 0},
  { 1075 /* sub */, ARM::t2SUBri, Convert__Reg1_2__Reg1_2__T2SOImm1_3__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_GPRnopc, MCK_T2SOImm }, 0},
  { 1075 /* sub */, ARM::SUBrr, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_GPR }, 0},
  { 1075 /* sub */, ARM::SUBri, Convert__Reg1_2__Reg1_2__ARMSOImm1_3__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_ARMSOImm }, 0},
  { 1075 /* sub */, ARM::SUBrsi, Convert__Reg1_2__Reg1_2__RegShiftedImm2_3__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_RegShiftedImm }, 0},
  { 1075 /* sub */, ARM::SUBrsr, Convert__Reg1_2__Reg1_2__RegShiftedReg3_3__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_RegShiftedReg }, 0},
  { 1075 /* sub */, ARM::tSUBspi, Convert__regSP__Tie0__Imm0_508s41_3__CondCode2_0, Feature_IsThumb, { MCK_CondCode, MCK_GPRsp, MCK_GPRsp, MCK_Imm0_508s4 }, 0},
  { 1075 /* sub */, ARM::t2SUBri12, Convert__Reg1_1__Reg1_2__Imm0_40951_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_GPRnopc, MCK_GPR, MCK_Imm0_4095 }, 0},
  { 1075 /* sub */, ARM::t2SUBrr, Convert__Reg1_3__Reg1_3__Reg1_4__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK__DOT_w, MCK_GPRnopc, MCK_rGPR }, 0},
  { 1075 /* sub */, ARM::tSUBrr, Convert__Reg1_2__CCOut1_0__Reg1_3__Reg1_4__CondCode2_1, Feature_IsThumb, { MCK_CCOut, MCK_CondCode, MCK_tGPR, MCK_tGPR, MCK_tGPR }, 0},
  { 1075 /* sub */, ARM::tSUBi3, Convert__Reg1_2__CCOut1_0__Reg1_3__Imm0_71_4__CondCode2_1, Feature_IsThumb, { MCK_CCOut, MCK_CondCode, MCK_tGPR, MCK_tGPR, MCK_Imm0_7 }, 0},
  { 1075 /* sub */, ARM::t2SUBrr, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_rGPR }, 0},
  { 1075 /* sub */, ARM::t2SUBrs, Convert__Reg1_2__Reg1_3__RegShiftedImm2_4__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_RegShiftedImm }, 0},
  { 1075 /* sub */, ARM::t2SUBri, Convert__Reg1_2__Reg1_3__T2SOImm1_4__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_T2SOImm }, 0},
  { 1075 /* sub */, ARM::SUBrr, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_GPR, MCK_GPR }, 0},
  { 1075 /* sub */, ARM::SUBri, Convert__Reg1_2__Reg1_3__ARMSOImm1_4__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_GPR, MCK_ARMSOImm }, 0},
  { 1075 /* sub */, ARM::SUBrsi, Convert__Reg1_2__Reg1_3__RegShiftedImm2_4__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_GPR, MCK_RegShiftedImm }, 0},
  { 1075 /* sub */, ARM::SUBrsr, Convert__Reg1_2__Reg1_3__RegShiftedReg3_4__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_GPR, MCK_RegShiftedReg }, 0},
  { 1075 /* sub */, ARM::t2SUBrr, Convert__Reg1_3__Reg1_4__Reg1_5__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK__DOT_w, MCK_GPRnopc, MCK_GPRnopc, MCK_rGPR }, 0},
  { 1075 /* sub */, ARM::t2SUBrs, Convert__Reg1_3__Reg1_4__RegShiftedImm2_5__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK__DOT_w, MCK_GPRnopc, MCK_GPRnopc, MCK_RegShiftedImm }, 0},
  { 1075 /* sub */, ARM::t2SUBri, Convert__Reg1_3__Reg1_4__T2SOImm1_5__CondCode2_1__CCOut1_0, Feature_IsThumb2, { MCK_CCOut, MCK_CondCode, MCK__DOT_w, MCK_GPRnopc, MCK_GPRnopc, MCK_T2SOImm }, 0},
  { 1079 /* subw */, ARM::t2SUBri12, Convert__Reg1_1__Reg1_2__Imm0_40951_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_GPRnopc, MCK_GPR, MCK_Imm0_4095 }, 0},
  { 1084 /* svc */, ARM::tSVC, Convert__Imm0_2551_1__CondCode2_0, Feature_IsThumb, { MCK_CondCode, MCK_Imm0_255 }, 0},
  { 1084 /* svc */, ARM::SVC, Convert__Imm24bit1_1__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_Imm24bit }, 0},
  { 1088 /* swp */, ARM::SWP, Convert__Reg1_1__Reg1_2__MemNoOffset1_3__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_MemNoOffset }, 0},
  { 1092 /* swpb */, ARM::SWPB, Convert__Reg1_1__Reg1_2__MemNoOffset1_3__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_MemNoOffset }, 0},
  { 1097 /* sxtab */, ARM::t2SXTAB, Convert__Reg1_1__Reg1_2__Reg1_3__imm_0__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 1097 /* sxtab */, ARM::SXTAB, Convert__Reg1_1__Reg1_2__Reg1_3__imm_0__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPRnopc, MCK_GPR, MCK_GPRnopc }, 0},
  { 1097 /* sxtab */, ARM::t2SXTAB, Convert__Reg1_1__Reg1_2__Reg1_3__RotImm1_4__CondCode2_0, Feature_HasT2ExtractPack|Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR, MCK_RotImm }, 0},
  { 1097 /* sxtab */, ARM::SXTAB, Convert__Reg1_1__Reg1_2__Reg1_3__RotImm1_4__CondCode2_0, Feature_IsARM|Feature_HasV6, { MCK_CondCode, MCK_GPRnopc, MCK_GPR, MCK_GPRnopc, MCK_RotImm }, 0},
  { 1103 /* sxtab16 */, ARM::t2SXTAB16, Convert__Reg1_1__Reg1_2__Reg1_3__imm_0__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 1103 /* sxtab16 */, ARM::SXTAB16, Convert__Reg1_1__Reg1_2__Reg1_3__imm_0__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPRnopc, MCK_GPR, MCK_GPRnopc }, 0},
  { 1103 /* sxtab16 */, ARM::t2SXTAB16, Convert__Reg1_1__Reg1_2__Reg1_3__RotImm1_4__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR, MCK_RotImm }, 0},
  { 1103 /* sxtab16 */, ARM::SXTAB16, Convert__Reg1_1__Reg1_2__Reg1_3__RotImm1_4__CondCode2_0, Feature_IsARM|Feature_HasV6, { MCK_CondCode, MCK_GPRnopc, MCK_GPR, MCK_GPRnopc, MCK_RotImm }, 0},
  { 1111 /* sxtah */, ARM::t2SXTAH, Convert__Reg1_1__Reg1_2__Reg1_3__imm_0__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 1111 /* sxtah */, ARM::SXTAH, Convert__Reg1_1__Reg1_2__Reg1_3__imm_0__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPRnopc, MCK_GPR, MCK_GPRnopc }, 0},
  { 1111 /* sxtah */, ARM::t2SXTAH, Convert__Reg1_1__Reg1_2__Reg1_3__RotImm1_4__CondCode2_0, Feature_HasT2ExtractPack|Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR, MCK_RotImm }, 0},
  { 1111 /* sxtah */, ARM::SXTAH, Convert__Reg1_1__Reg1_2__Reg1_3__RotImm1_4__CondCode2_0, Feature_IsARM|Feature_HasV6, { MCK_CondCode, MCK_GPRnopc, MCK_GPR, MCK_GPRnopc, MCK_RotImm }, 0},
  { 1117 /* sxtb */, ARM::tSXTB, Convert__Reg1_1__Reg1_2__CondCode2_0, Feature_IsThumb|Feature_HasV6, { MCK_CondCode, MCK_tGPR, MCK_tGPR }, 0},
  { 1117 /* sxtb */, ARM::t2SXTB, Convert__Reg1_1__Reg1_2__imm_0__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_rGPR }, 0},
  { 1117 /* sxtb */, ARM::SXTB, Convert__Reg1_1__Reg1_2__imm_0__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc }, 0},
  { 1117 /* sxtb */, ARM::t2SXTB, Convert__Reg1_2__Reg1_3__imm_0__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK__DOT_w, MCK_rGPR, MCK_rGPR }, 0},
  { 1117 /* sxtb */, ARM::t2SXTB, Convert__Reg1_1__Reg1_2__RotImm1_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_RotImm }, 0},
  { 1117 /* sxtb */, ARM::SXTB, Convert__Reg1_1__Reg1_2__RotImm1_3__CondCode2_0, Feature_IsARM|Feature_HasV6, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_RotImm }, 0},
  { 1117 /* sxtb */, ARM::t2SXTB, Convert__Reg1_2__Reg1_3__RotImm1_4__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK__DOT_w, MCK_rGPR, MCK_rGPR, MCK_RotImm }, 0},
  { 1122 /* sxtb16 */, ARM::t2SXTB16, Convert__Reg1_1__Reg1_2__imm_0__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_rGPR }, 0},
  { 1122 /* sxtb16 */, ARM::SXTB16, Convert__Reg1_1__Reg1_2__imm_0__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc }, 0},
  { 1122 /* sxtb16 */, ARM::t2SXTB16, Convert__Reg1_1__Reg1_2__RotImm1_3__CondCode2_0, Feature_IsThumb2|Feature_HasT2ExtractPack, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_RotImm }, 0},
  { 1122 /* sxtb16 */, ARM::t2SXTB16, Convert__Reg1_1__Reg1_2__RotImm1_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_RotImm }, 0},
  { 1122 /* sxtb16 */, ARM::SXTB16, Convert__Reg1_1__Reg1_2__RotImm1_3__CondCode2_0, Feature_IsARM|Feature_HasV6, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_RotImm }, 0},
  { 1129 /* sxth */, ARM::tSXTH, Convert__Reg1_1__Reg1_2__CondCode2_0, Feature_IsThumb|Feature_HasV6, { MCK_CondCode, MCK_tGPR, MCK_tGPR }, 0},
  { 1129 /* sxth */, ARM::t2SXTH, Convert__Reg1_1__Reg1_2__imm_0__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_rGPR }, 0},
  { 1129 /* sxth */, ARM::SXTH, Convert__Reg1_1__Reg1_2__imm_0__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc }, 0},
  { 1129 /* sxth */, ARM::t2SXTH, Convert__Reg1_2__Reg1_3__imm_0__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK__DOT_w, MCK_rGPR, MCK_rGPR }, 0},
  { 1129 /* sxth */, ARM::t2SXTH, Convert__Reg1_1__Reg1_2__RotImm1_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_RotImm }, 0},
  { 1129 /* sxth */, ARM::SXTH, Convert__Reg1_1__Reg1_2__RotImm1_3__CondCode2_0, Feature_IsARM|Feature_HasV6, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_RotImm }, 0},
  { 1129 /* sxth */, ARM::t2SXTH, Convert__Reg1_2__Reg1_3__RotImm1_4__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK__DOT_w, MCK_rGPR, MCK_rGPR, MCK_RotImm }, 0},
  { 1134 /* tbb */, ARM::t2TBB, Convert__MemTBB2_1__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_MemTBB }, 0},
  { 1138 /* tbh */, ARM::t2TBH, Convert__MemTBH2_1__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_MemTBH }, 0},
  { 1142 /* teq */, ARM::t2TEQrr, Convert__Reg1_1__Reg1_2__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_GPRnopc, MCK_rGPR }, 0},
  { 1142 /* teq */, ARM::t2TEQrs, Convert__Reg1_1__RegShiftedImm2_2__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_GPRnopc, MCK_RegShiftedImm }, 0},
  { 1142 /* teq */, ARM::TEQrsr, Convert__Reg1_1__RegShiftedReg3_2__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPRnopc, MCK_RegShiftedReg }, 0},
  { 1142 /* teq */, ARM::t2TEQri, Convert__Reg1_1__T2SOImm1_2__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_GPRnopc, MCK_T2SOImm }, 0},
  { 1142 /* teq */, ARM::TEQrr, Convert__Reg1_1__Reg1_2__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_GPR }, 0},
  { 1142 /* teq */, ARM::TEQri, Convert__Reg1_1__ARMSOImm1_2__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_ARMSOImm }, 0},
  { 1142 /* teq */, ARM::TEQrsi, Convert__Reg1_1__RegShiftedImm2_2__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_RegShiftedImm }, 0},
  { 1142 /* teq */, ARM::t2TEQrr, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK__DOT_w, MCK_GPRnopc, MCK_rGPR }, 0},
  { 1142 /* teq */, ARM::t2TEQrs, Convert__Reg1_2__RegShiftedImm2_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK__DOT_w, MCK_GPRnopc, MCK_RegShiftedImm }, 0},
  { 1142 /* teq */, ARM::t2TEQri, Convert__Reg1_2__T2SOImm1_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK__DOT_w, MCK_GPRnopc, MCK_T2SOImm }, 0},
  { 1146 /* trap */, ARM::TRAP, Convert_NoOperands, Feature_IsARM, {  }, 0},
  { 1146 /* trap */, ARM::tTRAP, Convert_NoOperands, Feature_IsThumb, {  }, 0},
  { 1151 /* tst */, ARM::tTST, Convert__Reg1_1__Reg1_2__CondCode2_0, Feature_IsThumb, { MCK_CondCode, MCK_tGPR, MCK_tGPR }, 0},
  { 1151 /* tst */, ARM::t2TSTrr, Convert__Reg1_1__Reg1_2__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_GPRnopc, MCK_rGPR }, 0},
  { 1151 /* tst */, ARM::t2TSTrs, Convert__Reg1_1__RegShiftedImm2_2__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_GPRnopc, MCK_RegShiftedImm }, 0},
  { 1151 /* tst */, ARM::TSTrsr, Convert__Reg1_1__RegShiftedReg3_2__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPRnopc, MCK_RegShiftedReg }, 0},
  { 1151 /* tst */, ARM::t2TSTri, Convert__Reg1_1__T2SOImm1_2__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_GPRnopc, MCK_T2SOImm }, 0},
  { 1151 /* tst */, ARM::TSTrr, Convert__Reg1_1__Reg1_2__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_GPR }, 0},
  { 1151 /* tst */, ARM::TSTri, Convert__Reg1_1__ARMSOImm1_2__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_ARMSOImm }, 0},
  { 1151 /* tst */, ARM::TSTrsi, Convert__Reg1_1__RegShiftedImm2_2__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPR, MCK_RegShiftedImm }, 0},
  { 1151 /* tst */, ARM::t2TSTrr, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK__DOT_w, MCK_GPRnopc, MCK_rGPR }, 0},
  { 1151 /* tst */, ARM::t2TSTrs, Convert__Reg1_2__RegShiftedImm2_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK__DOT_w, MCK_GPRnopc, MCK_RegShiftedImm }, 0},
  { 1151 /* tst */, ARM::t2TSTri, Convert__Reg1_2__T2SOImm1_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK__DOT_w, MCK_GPRnopc, MCK_T2SOImm }, 0},
  { 1155 /* uadd16 */, ARM::t2UADD16, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsThumb2|Feature_HasThumb2DSP, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 1155 /* uadd16 */, ARM::UADD16, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_GPRnopc }, 0},
  { 1162 /* uadd8 */, ARM::t2UADD8, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsThumb2|Feature_HasThumb2DSP, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 1162 /* uadd8 */, ARM::UADD8, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_GPRnopc }, 0},
  { 1168 /* uasx */, ARM::t2UASX, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsThumb2|Feature_HasThumb2DSP, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 1168 /* uasx */, ARM::UASX, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_GPRnopc }, 0},
  { 1173 /* ubfx */, ARM::t2UBFX, Convert__Reg1_1__Reg1_2__Imm0_311_3__Imm1_321_4__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_Imm0_31, MCK_Imm1_32 }, 0},
  { 1173 /* ubfx */, ARM::UBFX, Convert__Reg1_1__Reg1_2__Imm0_311_3__Imm1_321_4__CondCode2_0, Feature_IsARM|Feature_HasV6T2, { MCK_CondCode, MCK_GPR, MCK_GPR, MCK_Imm0_31, MCK_Imm1_32 }, 0},
  { 1178 /* udiv */, ARM::t2UDIV, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_HasDivide|Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 1178 /* udiv */, ARM::UDIV, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsARM|Feature_HasDivideInARM, { MCK_CondCode, MCK_GPR, MCK_GPR, MCK_GPR }, 0},
  { 1183 /* uhadd16 */, ARM::t2UHADD16, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsThumb2|Feature_HasThumb2DSP, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 1183 /* uhadd16 */, ARM::UHADD16, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_GPRnopc }, 0},
  { 1191 /* uhadd8 */, ARM::t2UHADD8, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsThumb2|Feature_HasThumb2DSP, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 1191 /* uhadd8 */, ARM::UHADD8, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_GPRnopc }, 0},
  { 1198 /* uhasx */, ARM::t2UHASX, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsThumb2|Feature_HasThumb2DSP, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 1198 /* uhasx */, ARM::UHASX, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_GPRnopc }, 0},
  { 1204 /* uhsax */, ARM::t2UHSAX, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsThumb2|Feature_HasThumb2DSP, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 1204 /* uhsax */, ARM::UHSAX, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_GPRnopc }, 0},
  { 1210 /* uhsub16 */, ARM::t2UHSUB16, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsThumb2|Feature_HasThumb2DSP, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 1210 /* uhsub16 */, ARM::UHSUB16, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_GPRnopc }, 0},
  { 1218 /* uhsub8 */, ARM::t2UHSUB8, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsThumb2|Feature_HasThumb2DSP, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 1218 /* uhsub8 */, ARM::UHSUB8, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_GPRnopc }, 0},
  { 1225 /* umaal */, ARM::t2UMAAL, Convert__Reg1_1__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_IsThumb2|Feature_HasThumb2DSP, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 1225 /* umaal */, ARM::UMAAL, Convert__Reg1_1__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_IsARM|Feature_HasV6, { MCK_CondCode, MCK_GPR, MCK_GPR, MCK_GPR, MCK_GPR }, 0},
  { 1231 /* umlal */, ARM::t2UMLAL, Convert__Reg1_1__Reg1_2__Reg1_3__Reg1_4__Tie0__Tie1__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 1231 /* umlal */, ARM::UMLAL, Convert__Reg1_2__Reg1_3__Reg1_4__Reg1_5__Tie0__Tie1__CondCode2_1__CCOut1_0, Feature_IsARM|Feature_HasV6, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_GPR, MCK_GPR, MCK_GPR }, 0},
  { 1237 /* umull */, ARM::t2UMULL, Convert__Reg1_1__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 1237 /* umull */, ARM::UMULL, Convert__Reg1_2__Reg1_3__Reg1_4__Reg1_5__CondCode2_1__CCOut1_0, Feature_IsARM|Feature_HasV6, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_GPR, MCK_GPR, MCK_GPR }, 0},
  { 1237 /* umull */, ARM::UMULL, Convert__Reg1_2__Reg1_3__Reg1_4__Reg1_5__CondCode2_1__CCOut1_0, Feature_IsARM, { MCK_CCOut, MCK_CondCode, MCK_GPR, MCK_GPR, MCK_GPR, MCK_GPR }, 0},
  { 1243 /* uqadd16 */, ARM::t2UQADD16, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsThumb2|Feature_HasThumb2DSP, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 1243 /* uqadd16 */, ARM::UQADD16, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_GPRnopc }, 0},
  { 1251 /* uqadd8 */, ARM::t2UQADD8, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsThumb2|Feature_HasThumb2DSP, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 1251 /* uqadd8 */, ARM::UQADD8, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_GPRnopc }, 0},
  { 1258 /* uqasx */, ARM::t2UQASX, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsThumb2|Feature_HasThumb2DSP, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 1258 /* uqasx */, ARM::UQASX, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_GPRnopc }, 0},
  { 1264 /* uqsax */, ARM::t2UQSAX, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsThumb2|Feature_HasThumb2DSP, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 1264 /* uqsax */, ARM::UQSAX, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_GPRnopc }, 0},
  { 1270 /* uqsub16 */, ARM::t2UQSUB16, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsThumb2|Feature_HasThumb2DSP, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 1270 /* uqsub16 */, ARM::UQSUB16, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_GPRnopc }, 0},
  { 1278 /* uqsub8 */, ARM::t2UQSUB8, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsThumb2|Feature_HasThumb2DSP, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 1278 /* uqsub8 */, ARM::UQSUB8, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_GPRnopc }, 0},
  { 1285 /* usad8 */, ARM::t2USAD8, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsThumb2|Feature_HasThumb2DSP, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 1285 /* usad8 */, ARM::USAD8, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsARM|Feature_HasV6, { MCK_CondCode, MCK_GPR, MCK_GPR, MCK_GPR }, 0},
  { 1291 /* usada8 */, ARM::t2USADA8, Convert__Reg1_1__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_IsThumb2|Feature_HasThumb2DSP, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 1291 /* usada8 */, ARM::USADA8, Convert__Reg1_1__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_IsARM|Feature_HasV6, { MCK_CondCode, MCK_GPR, MCK_GPR, MCK_GPR, MCK_GPR }, 0},
  { 1298 /* usat */, ARM::t2USAT, Convert__Reg1_1__Imm0_311_2__Reg1_3__imm_0__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_Imm0_31, MCK_rGPR }, 0},
  { 1298 /* usat */, ARM::USAT, Convert__Reg1_1__Imm0_311_2__Reg1_3__imm_0__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPRnopc, MCK_Imm0_31, MCK_GPRnopc }, 0},
  { 1298 /* usat */, ARM::t2USAT, Convert__Reg1_1__Imm0_311_2__Reg1_3__ShifterImm1_4__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_Imm0_31, MCK_rGPR, MCK_ShifterImm }, 0},
  { 1298 /* usat */, ARM::USAT, Convert__Reg1_1__Imm0_311_2__Reg1_3__ShifterImm1_4__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPRnopc, MCK_Imm0_31, MCK_GPRnopc, MCK_ShifterImm }, 0},
  { 1303 /* usat16 */, ARM::t2USAT16, Convert__Reg1_1__Imm0_151_2__Reg1_3__CondCode2_0, Feature_IsThumb2|Feature_HasThumb2DSP, { MCK_CondCode, MCK_rGPR, MCK_Imm0_15, MCK_rGPR }, 0},
  { 1303 /* usat16 */, ARM::USAT16, Convert__Reg1_1__Imm0_151_2__Reg1_3__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPRnopc, MCK_Imm0_15, MCK_GPRnopc }, 0},
  { 1310 /* usax */, ARM::t2USAX, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsThumb2|Feature_HasThumb2DSP, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 1310 /* usax */, ARM::USAX, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_GPRnopc }, 0},
  { 1315 /* usub16 */, ARM::t2USUB16, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsThumb2|Feature_HasThumb2DSP, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 1315 /* usub16 */, ARM::USUB16, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_GPRnopc }, 0},
  { 1322 /* usub8 */, ARM::t2USUB8, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsThumb2|Feature_HasThumb2DSP, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 1322 /* usub8 */, ARM::USUB8, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_GPRnopc }, 0},
  { 1328 /* uxtab */, ARM::t2UXTAB, Convert__Reg1_1__Reg1_2__Reg1_3__imm_0__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 1328 /* uxtab */, ARM::UXTAB, Convert__Reg1_1__Reg1_2__Reg1_3__imm_0__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPRnopc, MCK_GPR, MCK_GPRnopc }, 0},
  { 1328 /* uxtab */, ARM::t2UXTAB, Convert__Reg1_1__Reg1_2__Reg1_3__RotImm1_4__CondCode2_0, Feature_HasT2ExtractPack|Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR, MCK_RotImm }, 0},
  { 1328 /* uxtab */, ARM::UXTAB, Convert__Reg1_1__Reg1_2__Reg1_3__RotImm1_4__CondCode2_0, Feature_IsARM|Feature_HasV6, { MCK_CondCode, MCK_GPRnopc, MCK_GPR, MCK_GPRnopc, MCK_RotImm }, 0},
  { 1334 /* uxtab16 */, ARM::t2UXTAB16, Convert__Reg1_1__Reg1_2__Reg1_3__imm_0__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 1334 /* uxtab16 */, ARM::UXTAB16, Convert__Reg1_1__Reg1_2__Reg1_3__imm_0__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPRnopc, MCK_GPR, MCK_GPRnopc }, 0},
  { 1334 /* uxtab16 */, ARM::t2UXTAB16, Convert__Reg1_1__Reg1_2__Reg1_3__RotImm1_4__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR, MCK_RotImm }, 0},
  { 1334 /* uxtab16 */, ARM::UXTAB16, Convert__Reg1_1__Reg1_2__Reg1_3__RotImm1_4__CondCode2_0, Feature_IsARM|Feature_HasV6, { MCK_CondCode, MCK_GPRnopc, MCK_GPR, MCK_GPRnopc, MCK_RotImm }, 0},
  { 1342 /* uxtah */, ARM::t2UXTAH, Convert__Reg1_1__Reg1_2__Reg1_3__imm_0__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR }, 0},
  { 1342 /* uxtah */, ARM::UXTAH, Convert__Reg1_1__Reg1_2__Reg1_3__imm_0__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPRnopc, MCK_GPR, MCK_GPRnopc }, 0},
  { 1342 /* uxtah */, ARM::t2UXTAH, Convert__Reg1_1__Reg1_2__Reg1_3__RotImm1_4__CondCode2_0, Feature_HasT2ExtractPack|Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_rGPR, MCK_RotImm }, 0},
  { 1342 /* uxtah */, ARM::UXTAH, Convert__Reg1_1__Reg1_2__Reg1_3__RotImm1_4__CondCode2_0, Feature_IsARM|Feature_HasV6, { MCK_CondCode, MCK_GPRnopc, MCK_GPR, MCK_GPRnopc, MCK_RotImm }, 0},
  { 1348 /* uxtb */, ARM::tUXTB, Convert__Reg1_1__Reg1_2__CondCode2_0, Feature_IsThumb|Feature_HasV6, { MCK_CondCode, MCK_tGPR, MCK_tGPR }, 0},
  { 1348 /* uxtb */, ARM::t2UXTB, Convert__Reg1_1__Reg1_2__imm_0__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_rGPR }, 0},
  { 1348 /* uxtb */, ARM::UXTB, Convert__Reg1_1__Reg1_2__imm_0__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc }, 0},
  { 1348 /* uxtb */, ARM::t2UXTB, Convert__Reg1_2__Reg1_3__imm_0__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK__DOT_w, MCK_rGPR, MCK_rGPR }, 0},
  { 1348 /* uxtb */, ARM::t2UXTB, Convert__Reg1_1__Reg1_2__RotImm1_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_RotImm }, 0},
  { 1348 /* uxtb */, ARM::UXTB, Convert__Reg1_1__Reg1_2__RotImm1_3__CondCode2_0, Feature_IsARM|Feature_HasV6, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_RotImm }, 0},
  { 1348 /* uxtb */, ARM::t2UXTB, Convert__Reg1_2__Reg1_3__RotImm1_4__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK__DOT_w, MCK_rGPR, MCK_rGPR, MCK_RotImm }, 0},
  { 1353 /* uxtb16 */, ARM::t2UXTB16, Convert__Reg1_1__Reg1_2__imm_0__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_rGPR }, 0},
  { 1353 /* uxtb16 */, ARM::UXTB16, Convert__Reg1_1__Reg1_2__imm_0__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc }, 0},
  { 1353 /* uxtb16 */, ARM::t2UXTB16, Convert__Reg1_1__Reg1_2__RotImm1_3__CondCode2_0, Feature_HasT2ExtractPack|Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_RotImm }, 0},
  { 1353 /* uxtb16 */, ARM::t2UXTB16, Convert__Reg1_1__Reg1_2__RotImm1_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_RotImm }, 0},
  { 1353 /* uxtb16 */, ARM::UXTB16, Convert__Reg1_1__Reg1_2__RotImm1_3__CondCode2_0, Feature_IsARM|Feature_HasV6, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_RotImm }, 0},
  { 1360 /* uxth */, ARM::tUXTH, Convert__Reg1_1__Reg1_2__CondCode2_0, Feature_IsThumb|Feature_HasV6, { MCK_CondCode, MCK_tGPR, MCK_tGPR }, 0},
  { 1360 /* uxth */, ARM::t2UXTH, Convert__Reg1_1__Reg1_2__imm_0__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_rGPR }, 0},
  { 1360 /* uxth */, ARM::UXTH, Convert__Reg1_1__Reg1_2__imm_0__CondCode2_0, Feature_IsARM, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc }, 0},
  { 1360 /* uxth */, ARM::t2UXTH, Convert__Reg1_2__Reg1_3__imm_0__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK__DOT_w, MCK_rGPR, MCK_rGPR }, 0},
  { 1360 /* uxth */, ARM::t2UXTH, Convert__Reg1_1__Reg1_2__RotImm1_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK_rGPR, MCK_rGPR, MCK_RotImm }, 0},
  { 1360 /* uxth */, ARM::UXTH, Convert__Reg1_1__Reg1_2__RotImm1_3__CondCode2_0, Feature_IsARM|Feature_HasV6, { MCK_CondCode, MCK_GPRnopc, MCK_GPRnopc, MCK_RotImm }, 0},
  { 1360 /* uxth */, ARM::t2UXTH, Convert__Reg1_2__Reg1_3__RotImm1_4__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK__DOT_w, MCK_rGPR, MCK_rGPR, MCK_RotImm }, 0},
  { 1365 /* vaba */, ARM::VABAsv4i16, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1365 /* vaba */, ARM::VABAsv8i16, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1365 /* vaba */, ARM::VABAsv2i32, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1365 /* vaba */, ARM::VABAsv4i32, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1365 /* vaba */, ARM::VABAsv8i8, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1365 /* vaba */, ARM::VABAsv16i8, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1365 /* vaba */, ARM::VABAuv4i16, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1365 /* vaba */, ARM::VABAuv8i16, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1365 /* vaba */, ARM::VABAuv2i32, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1365 /* vaba */, ARM::VABAuv4i32, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1365 /* vaba */, ARM::VABAuv8i8, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1365 /* vaba */, ARM::VABAuv16i8, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1370 /* vabal */, ARM::VABALsv4i32, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_QPR, MCK_DPR, MCK_DPR }, 0},
  { 1370 /* vabal */, ARM::VABALsv2i64, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_QPR, MCK_DPR, MCK_DPR }, 0},
  { 1370 /* vabal */, ARM::VABALsv8i16, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_QPR, MCK_DPR, MCK_DPR }, 0},
  { 1370 /* vabal */, ARM::VABALuv4i32, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_QPR, MCK_DPR, MCK_DPR }, 0},
  { 1370 /* vabal */, ARM::VABALuv2i64, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_QPR, MCK_DPR, MCK_DPR }, 0},
  { 1370 /* vabal */, ARM::VABALuv8i16, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_QPR, MCK_DPR, MCK_DPR }, 0},
  { 1376 /* vabd */, ARM::VABDfd, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_DPR, MCK_DPR }, 0},
  { 1376 /* vabd */, ARM::VABDfq, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_QPR, MCK_QPR }, 0},
  { 1376 /* vabd */, ARM::VABDsv4i16, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_DPR, MCK_DPR }, 0},
  { 1376 /* vabd */, ARM::VABDsv8i16, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_QPR, MCK_QPR }, 0},
  { 1376 /* vabd */, ARM::VABDsv2i32, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_DPR, MCK_DPR }, 0},
  { 1376 /* vabd */, ARM::VABDsv4i32, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_QPR, MCK_QPR }, 0},
  { 1376 /* vabd */, ARM::VABDsv8i8, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_DPR, MCK_DPR }, 0},
  { 1376 /* vabd */, ARM::VABDsv16i8, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_QPR, MCK_QPR }, 0},
  { 1376 /* vabd */, ARM::VABDuv4i16, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_DPR, MCK_DPR }, 0},
  { 1376 /* vabd */, ARM::VABDuv8i16, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_QPR, MCK_QPR }, 0},
  { 1376 /* vabd */, ARM::VABDuv2i32, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_DPR, MCK_DPR }, 0},
  { 1376 /* vabd */, ARM::VABDuv4i32, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_QPR, MCK_QPR }, 0},
  { 1376 /* vabd */, ARM::VABDuv8i8, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_DPR, MCK_DPR }, 0},
  { 1376 /* vabd */, ARM::VABDuv16i8, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_QPR, MCK_QPR }, 0},
  { 1376 /* vabd */, ARM::VABDfd, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1376 /* vabd */, ARM::VABDfq, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1376 /* vabd */, ARM::VABDsv4i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1376 /* vabd */, ARM::VABDsv8i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1376 /* vabd */, ARM::VABDsv2i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1376 /* vabd */, ARM::VABDsv4i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1376 /* vabd */, ARM::VABDsv8i8, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1376 /* vabd */, ARM::VABDsv16i8, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1376 /* vabd */, ARM::VABDuv4i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1376 /* vabd */, ARM::VABDuv8i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1376 /* vabd */, ARM::VABDuv2i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1376 /* vabd */, ARM::VABDuv4i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1376 /* vabd */, ARM::VABDuv8i8, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1376 /* vabd */, ARM::VABDuv16i8, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1381 /* vabdl */, ARM::VABDLsv4i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_QPR, MCK_DPR, MCK_DPR }, 0},
  { 1381 /* vabdl */, ARM::VABDLsv2i64, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_QPR, MCK_DPR, MCK_DPR }, 0},
  { 1381 /* vabdl */, ARM::VABDLsv8i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_QPR, MCK_DPR, MCK_DPR }, 0},
  { 1381 /* vabdl */, ARM::VABDLuv4i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_QPR, MCK_DPR, MCK_DPR }, 0},
  { 1381 /* vabdl */, ARM::VABDLuv2i64, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_QPR, MCK_DPR, MCK_DPR }, 0},
  { 1381 /* vabdl */, ARM::VABDLuv8i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_QPR, MCK_DPR, MCK_DPR }, 0},
  { 1387 /* vabs */, ARM::VABSS, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_f32, MCK_SPR, MCK_SPR }, 0},
  { 1387 /* vabs */, ARM::VABSfd, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_DPR, MCK_DPR }, 0},
  { 1387 /* vabs */, ARM::VABSfq, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_QPR, MCK_QPR }, 0},
  { 1387 /* vabs */, ARM::VABSD, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_f64, MCK_DPR, MCK_DPR }, 0},
  { 1387 /* vabs */, ARM::VABSv4i16, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_DPR, MCK_DPR }, 0},
  { 1387 /* vabs */, ARM::VABSv8i16, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_QPR, MCK_QPR }, 0},
  { 1387 /* vabs */, ARM::VABSv2i32, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_DPR, MCK_DPR }, 0},
  { 1387 /* vabs */, ARM::VABSv4i32, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_QPR, MCK_QPR }, 0},
  { 1387 /* vabs */, ARM::VABSv8i8, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_DPR, MCK_DPR }, 0},
  { 1387 /* vabs */, ARM::VABSv16i8, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_QPR, MCK_QPR }, 0},
  { 1392 /* vacge */, ARM::VACGEd, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_DPR, MCK_DPR }, 0},
  { 1392 /* vacge */, ARM::VACGEq, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_QPR, MCK_QPR }, 0},
  { 1392 /* vacge */, ARM::VACGEd, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1392 /* vacge */, ARM::VACGEq, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1398 /* vacgt */, ARM::VACGTd, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_DPR, MCK_DPR }, 0},
  { 1398 /* vacgt */, ARM::VACGTq, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_QPR, MCK_QPR }, 0},
  { 1398 /* vacgt */, ARM::VACGTd, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1398 /* vacgt */, ARM::VACGTq, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1404 /* vadd */, ARM::VADDS, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_f32, MCK_SPR, MCK_SPR }, 0},
  { 1404 /* vadd */, ARM::VADDfd, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_DPR, MCK_DPR }, 0},
  { 1404 /* vadd */, ARM::VADDfq, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_QPR, MCK_QPR }, 0},
  { 1404 /* vadd */, ARM::VADDD, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_f64, MCK_DPR, MCK_DPR }, 0},
  { 1404 /* vadd */, ARM::VADDv4i16, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i16, MCK_DPR, MCK_DPR }, 0},
  { 1404 /* vadd */, ARM::VADDv8i16, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i16, MCK_QPR, MCK_QPR }, 0},
  { 1404 /* vadd */, ARM::VADDv2i32, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i32, MCK_DPR, MCK_DPR }, 0},
  { 1404 /* vadd */, ARM::VADDv4i32, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i32, MCK_QPR, MCK_QPR }, 0},
  { 1404 /* vadd */, ARM::VADDv1i64, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i64, MCK_DPR, MCK_DPR }, 0},
  { 1404 /* vadd */, ARM::VADDv2i64, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i64, MCK_QPR, MCK_QPR }, 0},
  { 1404 /* vadd */, ARM::VADDv8i8, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i8, MCK_DPR, MCK_DPR }, 0},
  { 1404 /* vadd */, ARM::VADDv16i8, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i8, MCK_QPR, MCK_QPR }, 0},
  { 1404 /* vadd */, ARM::VADDS, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_f32, MCK_SPR, MCK_SPR, MCK_SPR }, 0},
  { 1404 /* vadd */, ARM::VADDfd, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1404 /* vadd */, ARM::VADDfq, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1404 /* vadd */, ARM::VADDD, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_f64, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1404 /* vadd */, ARM::VADDv4i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i16, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1404 /* vadd */, ARM::VADDv8i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i16, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1404 /* vadd */, ARM::VADDv2i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i32, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1404 /* vadd */, ARM::VADDv4i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i32, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1404 /* vadd */, ARM::VADDv1i64, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i64, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1404 /* vadd */, ARM::VADDv2i64, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i64, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1404 /* vadd */, ARM::VADDv8i8, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i8, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1404 /* vadd */, ARM::VADDv16i8, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i8, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1409 /* vaddhn */, ARM::VADDHNv8i8, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i16, MCK_DPR, MCK_QPR, MCK_QPR }, 0},
  { 1409 /* vaddhn */, ARM::VADDHNv4i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i32, MCK_DPR, MCK_QPR, MCK_QPR }, 0},
  { 1409 /* vaddhn */, ARM::VADDHNv2i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i64, MCK_DPR, MCK_QPR, MCK_QPR }, 0},
  { 1416 /* vaddl */, ARM::VADDLsv4i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_QPR, MCK_DPR, MCK_DPR }, 0},
  { 1416 /* vaddl */, ARM::VADDLsv2i64, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_QPR, MCK_DPR, MCK_DPR }, 0},
  { 1416 /* vaddl */, ARM::VADDLsv8i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_QPR, MCK_DPR, MCK_DPR }, 0},
  { 1416 /* vaddl */, ARM::VADDLuv4i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_QPR, MCK_DPR, MCK_DPR }, 0},
  { 1416 /* vaddl */, ARM::VADDLuv2i64, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_QPR, MCK_DPR, MCK_DPR }, 0},
  { 1416 /* vaddl */, ARM::VADDLuv8i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_QPR, MCK_DPR, MCK_DPR }, 0},
  { 1422 /* vaddw */, ARM::VADDWsv4i32, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_QPR, MCK_DPR }, 0},
  { 1422 /* vaddw */, ARM::VADDWsv2i64, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_QPR, MCK_DPR }, 0},
  { 1422 /* vaddw */, ARM::VADDWsv8i16, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_QPR, MCK_DPR }, 0},
  { 1422 /* vaddw */, ARM::VADDWuv4i32, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_QPR, MCK_DPR }, 0},
  { 1422 /* vaddw */, ARM::VADDWuv2i64, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_QPR, MCK_DPR }, 0},
  { 1422 /* vaddw */, ARM::VADDWuv8i16, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_QPR, MCK_DPR }, 0},
  { 1422 /* vaddw */, ARM::VADDWsv4i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_QPR, MCK_QPR, MCK_DPR }, 0},
  { 1422 /* vaddw */, ARM::VADDWsv2i64, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_QPR, MCK_QPR, MCK_DPR }, 0},
  { 1422 /* vaddw */, ARM::VADDWsv8i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_QPR, MCK_QPR, MCK_DPR }, 0},
  { 1422 /* vaddw */, ARM::VADDWuv4i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_QPR, MCK_QPR, MCK_DPR }, 0},
  { 1422 /* vaddw */, ARM::VADDWuv2i64, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_QPR, MCK_QPR, MCK_DPR }, 0},
  { 1422 /* vaddw */, ARM::VADDWuv8i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_QPR, MCK_QPR, MCK_DPR }, 0},
  { 1428 /* vand */, ARM::VANDd, Convert__Reg1_1__Reg1_1__Reg1_2__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK_DPR, MCK_DPR }, 0},
  { 1428 /* vand */, ARM::VANDq, Convert__Reg1_1__Reg1_1__Reg1_2__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK_QPR, MCK_QPR }, 0},
  { 1428 /* vand */, ARM::VANDd, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_DPR, MCK_DPR }, 0},
  { 1428 /* vand */, ARM::VANDq, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_QPR, MCK_QPR }, 0},
  { 1428 /* vand */, ARM::VANDd, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_DPR, MCK_DPR }, 0},
  { 1428 /* vand */, ARM::VANDq, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_QPR, MCK_QPR }, 0},
  { 1428 /* vand */, ARM::VANDd, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_64, MCK_DPR, MCK_DPR }, 0},
  { 1428 /* vand */, ARM::VANDq, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_64, MCK_QPR, MCK_QPR }, 0},
  { 1428 /* vand */, ARM::VANDd, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_DPR, MCK_DPR }, 0},
  { 1428 /* vand */, ARM::VANDq, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_QPR, MCK_QPR }, 0},
  { 1428 /* vand */, ARM::VANDd, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1428 /* vand */, ARM::VANDq, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1428 /* vand */, ARM::VANDd, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1428 /* vand */, ARM::VANDq, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1428 /* vand */, ARM::VANDd, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1428 /* vand */, ARM::VANDq, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1428 /* vand */, ARM::VANDd, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_64, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1428 /* vand */, ARM::VANDq, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_64, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1428 /* vand */, ARM::VANDd, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1428 /* vand */, ARM::VANDq, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1433 /* vbic */, ARM::VBICd, Convert__Reg1_1__Reg1_1__Reg1_2__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK_DPR, MCK_DPR }, 0},
  { 1433 /* vbic */, ARM::VBICq, Convert__Reg1_1__Reg1_1__Reg1_2__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK_QPR, MCK_QPR }, 0},
  { 1433 /* vbic */, ARM::VBICiv4i16, Convert__Reg1_2__NEONi16splat1_3__Tie0__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i16, MCK_DPR, MCK_NEONi16splat }, 0},
  { 1433 /* vbic */, ARM::VBICiv8i16, Convert__Reg1_2__NEONi16splat1_3__Tie0__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i16, MCK_QPR, MCK_NEONi16splat }, 0},
  { 1433 /* vbic */, ARM::VBICiv2i32, Convert__Reg1_2__NEONi32splat1_3__Tie0__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i32, MCK_DPR, MCK_NEONi32splat }, 0},
  { 1433 /* vbic */, ARM::VBICiv4i32, Convert__Reg1_2__NEONi32splat1_3__Tie0__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i32, MCK_QPR, MCK_NEONi32splat }, 0},
  { 1433 /* vbic */, ARM::VBICd, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1433 /* vbic */, ARM::VBICq, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1433 /* vbic */, ARM::VBICd, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1433 /* vbic */, ARM::VBICq, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1433 /* vbic */, ARM::VBICd, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1433 /* vbic */, ARM::VBICq, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1433 /* vbic */, ARM::VBICd, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_64, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1433 /* vbic */, ARM::VBICq, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_64, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1433 /* vbic */, ARM::VBICd, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1433 /* vbic */, ARM::VBICq, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1438 /* vbif */, ARM::VBIFd, Convert__Reg1_1__Tie0__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1438 /* vbif */, ARM::VBIFq, Convert__Reg1_1__Tie0__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1438 /* vbif */, ARM::VBIFd, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1438 /* vbif */, ARM::VBIFq, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1438 /* vbif */, ARM::VBIFd, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1438 /* vbif */, ARM::VBIFq, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1438 /* vbif */, ARM::VBIFd, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_64, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1438 /* vbif */, ARM::VBIFq, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_64, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1438 /* vbif */, ARM::VBIFd, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1438 /* vbif */, ARM::VBIFq, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1443 /* vbit */, ARM::VBITd, Convert__Reg1_1__Tie0__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1443 /* vbit */, ARM::VBITq, Convert__Reg1_1__Tie0__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1443 /* vbit */, ARM::VBITd, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1443 /* vbit */, ARM::VBITq, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1443 /* vbit */, ARM::VBITd, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1443 /* vbit */, ARM::VBITq, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1443 /* vbit */, ARM::VBITd, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_64, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1443 /* vbit */, ARM::VBITq, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_64, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1443 /* vbit */, ARM::VBITd, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1443 /* vbit */, ARM::VBITq, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1448 /* vbsl */, ARM::VBSLd, Convert__Reg1_1__Tie0__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1448 /* vbsl */, ARM::VBSLq, Convert__Reg1_1__Tie0__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1448 /* vbsl */, ARM::VBSLd, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1448 /* vbsl */, ARM::VBSLq, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1448 /* vbsl */, ARM::VBSLd, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1448 /* vbsl */, ARM::VBSLq, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1448 /* vbsl */, ARM::VBSLd, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_64, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1448 /* vbsl */, ARM::VBSLq, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_64, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1448 /* vbsl */, ARM::VBSLd, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1448 /* vbsl */, ARM::VBSLq, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1453 /* vceq */, ARM::VCEQfd, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_DPR, MCK_DPR }, 0},
  { 1453 /* vceq */, ARM::VCEQfq, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_QPR, MCK_QPR }, 0},
  { 1453 /* vceq */, ARM::VCEQv4i16, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i16, MCK_DPR, MCK_DPR }, 0},
  { 1453 /* vceq */, ARM::VCEQv8i16, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i16, MCK_QPR, MCK_QPR }, 0},
  { 1453 /* vceq */, ARM::VCEQv2i32, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i32, MCK_DPR, MCK_DPR }, 0},
  { 1453 /* vceq */, ARM::VCEQv4i32, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i32, MCK_QPR, MCK_QPR }, 0},
  { 1453 /* vceq */, ARM::VCEQv8i8, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i8, MCK_DPR, MCK_DPR }, 0},
  { 1453 /* vceq */, ARM::VCEQv16i8, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i8, MCK_QPR, MCK_QPR }, 0},
  { 1453 /* vceq */, ARM::VCEQzv2f32, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_DPR, MCK_DPR, MCK__35_0 }, 0},
  { 1453 /* vceq */, ARM::VCEQfd, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1453 /* vceq */, ARM::VCEQzv4f32, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_QPR, MCK_QPR, MCK__35_0 }, 0},
  { 1453 /* vceq */, ARM::VCEQfq, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1453 /* vceq */, ARM::VCEQzv4i16, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i16, MCK_DPR, MCK_DPR, MCK__35_0 }, 0},
  { 1453 /* vceq */, ARM::VCEQv4i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i16, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1453 /* vceq */, ARM::VCEQzv8i16, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i16, MCK_QPR, MCK_QPR, MCK__35_0 }, 0},
  { 1453 /* vceq */, ARM::VCEQv8i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i16, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1453 /* vceq */, ARM::VCEQzv2i32, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i32, MCK_DPR, MCK_DPR, MCK__35_0 }, 0},
  { 1453 /* vceq */, ARM::VCEQv2i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i32, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1453 /* vceq */, ARM::VCEQzv4i32, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i32, MCK_QPR, MCK_QPR, MCK__35_0 }, 0},
  { 1453 /* vceq */, ARM::VCEQv4i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i32, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1453 /* vceq */, ARM::VCEQzv8i8, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i8, MCK_DPR, MCK_DPR, MCK__35_0 }, 0},
  { 1453 /* vceq */, ARM::VCEQv8i8, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i8, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1453 /* vceq */, ARM::VCEQzv16i8, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i8, MCK_QPR, MCK_QPR, MCK__35_0 }, 0},
  { 1453 /* vceq */, ARM::VCEQv16i8, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i8, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1458 /* vcge */, ARM::VCGEfd, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_DPR, MCK_DPR }, 0},
  { 1458 /* vcge */, ARM::VCGEfq, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_QPR, MCK_QPR }, 0},
  { 1458 /* vcge */, ARM::VCGEsv4i16, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_DPR, MCK_DPR }, 0},
  { 1458 /* vcge */, ARM::VCGEsv8i16, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_QPR, MCK_QPR }, 0},
  { 1458 /* vcge */, ARM::VCGEsv2i32, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_DPR, MCK_DPR }, 0},
  { 1458 /* vcge */, ARM::VCGEsv4i32, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_QPR, MCK_QPR }, 0},
  { 1458 /* vcge */, ARM::VCGEsv8i8, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_DPR, MCK_DPR }, 0},
  { 1458 /* vcge */, ARM::VCGEsv16i8, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_QPR, MCK_QPR }, 0},
  { 1458 /* vcge */, ARM::VCGEuv4i16, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_DPR, MCK_DPR }, 0},
  { 1458 /* vcge */, ARM::VCGEuv8i16, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_QPR, MCK_QPR }, 0},
  { 1458 /* vcge */, ARM::VCGEuv2i32, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_DPR, MCK_DPR }, 0},
  { 1458 /* vcge */, ARM::VCGEuv4i32, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_QPR, MCK_QPR }, 0},
  { 1458 /* vcge */, ARM::VCGEuv8i8, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_DPR, MCK_DPR }, 0},
  { 1458 /* vcge */, ARM::VCGEuv16i8, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_QPR, MCK_QPR }, 0},
  { 1458 /* vcge */, ARM::VCGEzv2f32, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_DPR, MCK_DPR, MCK__35_0 }, 0},
  { 1458 /* vcge */, ARM::VCGEfd, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1458 /* vcge */, ARM::VCGEzv4f32, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_QPR, MCK_QPR, MCK__35_0 }, 0},
  { 1458 /* vcge */, ARM::VCGEfq, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1458 /* vcge */, ARM::VCGEzv4i16, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_DPR, MCK_DPR, MCK__35_0 }, 0},
  { 1458 /* vcge */, ARM::VCGEsv4i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1458 /* vcge */, ARM::VCGEzv8i16, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_QPR, MCK_QPR, MCK__35_0 }, 0},
  { 1458 /* vcge */, ARM::VCGEsv8i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1458 /* vcge */, ARM::VCGEzv2i32, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_DPR, MCK_DPR, MCK__35_0 }, 0},
  { 1458 /* vcge */, ARM::VCGEsv2i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1458 /* vcge */, ARM::VCGEzv4i32, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_QPR, MCK_QPR, MCK__35_0 }, 0},
  { 1458 /* vcge */, ARM::VCGEsv4i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1458 /* vcge */, ARM::VCGEzv8i8, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_DPR, MCK_DPR, MCK__35_0 }, 0},
  { 1458 /* vcge */, ARM::VCGEsv8i8, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1458 /* vcge */, ARM::VCGEzv16i8, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_QPR, MCK_QPR, MCK__35_0 }, 0},
  { 1458 /* vcge */, ARM::VCGEsv16i8, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1458 /* vcge */, ARM::VCGEuv4i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1458 /* vcge */, ARM::VCGEuv8i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1458 /* vcge */, ARM::VCGEuv2i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1458 /* vcge */, ARM::VCGEuv4i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1458 /* vcge */, ARM::VCGEuv8i8, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1458 /* vcge */, ARM::VCGEuv16i8, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1463 /* vcgt */, ARM::VCGTfd, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_DPR, MCK_DPR }, 0},
  { 1463 /* vcgt */, ARM::VCGTfq, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_QPR, MCK_QPR }, 0},
  { 1463 /* vcgt */, ARM::VCGTsv4i16, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_DPR, MCK_DPR }, 0},
  { 1463 /* vcgt */, ARM::VCGTsv8i16, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_QPR, MCK_QPR }, 0},
  { 1463 /* vcgt */, ARM::VCGTsv2i32, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_DPR, MCK_DPR }, 0},
  { 1463 /* vcgt */, ARM::VCGTsv4i32, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_QPR, MCK_QPR }, 0},
  { 1463 /* vcgt */, ARM::VCGTsv8i8, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_DPR, MCK_DPR }, 0},
  { 1463 /* vcgt */, ARM::VCGTsv16i8, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_QPR, MCK_QPR }, 0},
  { 1463 /* vcgt */, ARM::VCGTuv4i16, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_DPR, MCK_DPR }, 0},
  { 1463 /* vcgt */, ARM::VCGTuv8i16, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_QPR, MCK_QPR }, 0},
  { 1463 /* vcgt */, ARM::VCGTuv2i32, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_DPR, MCK_DPR }, 0},
  { 1463 /* vcgt */, ARM::VCGTuv4i32, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_QPR, MCK_QPR }, 0},
  { 1463 /* vcgt */, ARM::VCGTuv8i8, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_DPR, MCK_DPR }, 0},
  { 1463 /* vcgt */, ARM::VCGTuv16i8, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_QPR, MCK_QPR }, 0},
  { 1463 /* vcgt */, ARM::VCGTzv2f32, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_DPR, MCK_DPR, MCK__35_0 }, 0},
  { 1463 /* vcgt */, ARM::VCGTfd, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1463 /* vcgt */, ARM::VCGTzv4f32, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_QPR, MCK_QPR, MCK__35_0 }, 0},
  { 1463 /* vcgt */, ARM::VCGTfq, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1463 /* vcgt */, ARM::VCGTzv4i16, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_DPR, MCK_DPR, MCK__35_0 }, 0},
  { 1463 /* vcgt */, ARM::VCGTsv4i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1463 /* vcgt */, ARM::VCGTzv8i16, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_QPR, MCK_QPR, MCK__35_0 }, 0},
  { 1463 /* vcgt */, ARM::VCGTsv8i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1463 /* vcgt */, ARM::VCGTzv2i32, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_DPR, MCK_DPR, MCK__35_0 }, 0},
  { 1463 /* vcgt */, ARM::VCGTsv2i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1463 /* vcgt */, ARM::VCGTzv4i32, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_QPR, MCK_QPR, MCK__35_0 }, 0},
  { 1463 /* vcgt */, ARM::VCGTsv4i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1463 /* vcgt */, ARM::VCGTzv8i8, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_DPR, MCK_DPR, MCK__35_0 }, 0},
  { 1463 /* vcgt */, ARM::VCGTsv8i8, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1463 /* vcgt */, ARM::VCGTzv16i8, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_QPR, MCK_QPR, MCK__35_0 }, 0},
  { 1463 /* vcgt */, ARM::VCGTsv16i8, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1463 /* vcgt */, ARM::VCGTuv4i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1463 /* vcgt */, ARM::VCGTuv8i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1463 /* vcgt */, ARM::VCGTuv2i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1463 /* vcgt */, ARM::VCGTuv4i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1463 /* vcgt */, ARM::VCGTuv8i8, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1463 /* vcgt */, ARM::VCGTuv16i8, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1468 /* vcle */, ARM::VCLEzv2f32, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_DPR, MCK_DPR, MCK__35_0 }, 0},
  { 1468 /* vcle */, ARM::VCGEfd, Convert__Reg1_2__Reg1_4__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1468 /* vcle */, ARM::VCLEzv4f32, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_QPR, MCK_QPR, MCK__35_0 }, 0},
  { 1468 /* vcle */, ARM::VCGEfq, Convert__Reg1_2__Reg1_4__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1468 /* vcle */, ARM::VCLEzv4i16, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_DPR, MCK_DPR, MCK__35_0 }, 0},
  { 1468 /* vcle */, ARM::VCGEsv4i16, Convert__Reg1_2__Reg1_4__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1468 /* vcle */, ARM::VCLEzv8i16, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_QPR, MCK_QPR, MCK__35_0 }, 0},
  { 1468 /* vcle */, ARM::VCGEsv8i16, Convert__Reg1_2__Reg1_4__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1468 /* vcle */, ARM::VCLEzv2i32, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_DPR, MCK_DPR, MCK__35_0 }, 0},
  { 1468 /* vcle */, ARM::VCGEsv2i32, Convert__Reg1_2__Reg1_4__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1468 /* vcle */, ARM::VCLEzv4i32, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_QPR, MCK_QPR, MCK__35_0 }, 0},
  { 1468 /* vcle */, ARM::VCGEsv4i32, Convert__Reg1_2__Reg1_4__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1468 /* vcle */, ARM::VCLEzv8i8, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_DPR, MCK_DPR, MCK__35_0 }, 0},
  { 1468 /* vcle */, ARM::VCGEsv8i8, Convert__Reg1_2__Reg1_4__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1468 /* vcle */, ARM::VCLEzv16i8, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_QPR, MCK_QPR, MCK__35_0 }, 0},
  { 1468 /* vcle */, ARM::VCGEsv16i8, Convert__Reg1_2__Reg1_4__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1468 /* vcle */, ARM::VCGEuv4i16, Convert__Reg1_2__Reg1_4__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1468 /* vcle */, ARM::VCGEuv8i16, Convert__Reg1_2__Reg1_4__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1468 /* vcle */, ARM::VCGEuv2i32, Convert__Reg1_2__Reg1_4__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1468 /* vcle */, ARM::VCGEuv4i32, Convert__Reg1_2__Reg1_4__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1468 /* vcle */, ARM::VCGEuv8i8, Convert__Reg1_2__Reg1_4__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1468 /* vcle */, ARM::VCGEuv16i8, Convert__Reg1_2__Reg1_4__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1473 /* vcls */, ARM::VCLSv4i16, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_DPR, MCK_DPR }, 0},
  { 1473 /* vcls */, ARM::VCLSv8i16, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_QPR, MCK_QPR }, 0},
  { 1473 /* vcls */, ARM::VCLSv2i32, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_DPR, MCK_DPR }, 0},
  { 1473 /* vcls */, ARM::VCLSv4i32, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_QPR, MCK_QPR }, 0},
  { 1473 /* vcls */, ARM::VCLSv8i8, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_DPR, MCK_DPR }, 0},
  { 1473 /* vcls */, ARM::VCLSv16i8, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_QPR, MCK_QPR }, 0},
  { 1478 /* vclt */, ARM::VCLTzv2f32, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_DPR, MCK_DPR, MCK__35_0 }, 0},
  { 1478 /* vclt */, ARM::VCGTfd, Convert__Reg1_2__Reg1_4__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1478 /* vclt */, ARM::VCLTzv4f32, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_QPR, MCK_QPR, MCK__35_0 }, 0},
  { 1478 /* vclt */, ARM::VCGTfq, Convert__Reg1_2__Reg1_4__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1478 /* vclt */, ARM::VCLTzv4i16, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_DPR, MCK_DPR, MCK__35_0 }, 0},
  { 1478 /* vclt */, ARM::VCGTsv4i16, Convert__Reg1_2__Reg1_4__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1478 /* vclt */, ARM::VCLTzv8i16, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_QPR, MCK_QPR, MCK__35_0 }, 0},
  { 1478 /* vclt */, ARM::VCGTsv8i16, Convert__Reg1_2__Reg1_4__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1478 /* vclt */, ARM::VCLTzv2i32, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_DPR, MCK_DPR, MCK__35_0 }, 0},
  { 1478 /* vclt */, ARM::VCGTsv2i32, Convert__Reg1_2__Reg1_4__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1478 /* vclt */, ARM::VCLTzv4i32, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_QPR, MCK_QPR, MCK__35_0 }, 0},
  { 1478 /* vclt */, ARM::VCGTsv4i32, Convert__Reg1_2__Reg1_4__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1478 /* vclt */, ARM::VCLTzv8i8, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_DPR, MCK_DPR, MCK__35_0 }, 0},
  { 1478 /* vclt */, ARM::VCGTsv8i8, Convert__Reg1_2__Reg1_4__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1478 /* vclt */, ARM::VCLTzv16i8, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_QPR, MCK_QPR, MCK__35_0 }, 0},
  { 1478 /* vclt */, ARM::VCGTsv16i8, Convert__Reg1_2__Reg1_4__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1478 /* vclt */, ARM::VCGTuv4i16, Convert__Reg1_2__Reg1_4__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1478 /* vclt */, ARM::VCGTuv8i16, Convert__Reg1_2__Reg1_4__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1478 /* vclt */, ARM::VCGTuv2i32, Convert__Reg1_2__Reg1_4__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1478 /* vclt */, ARM::VCGTuv4i32, Convert__Reg1_2__Reg1_4__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1478 /* vclt */, ARM::VCGTuv8i8, Convert__Reg1_2__Reg1_4__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1478 /* vclt */, ARM::VCGTuv16i8, Convert__Reg1_2__Reg1_4__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1483 /* vclz */, ARM::VCLZv4i16, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i16, MCK_DPR, MCK_DPR }, 0},
  { 1483 /* vclz */, ARM::VCLZv8i16, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i16, MCK_QPR, MCK_QPR }, 0},
  { 1483 /* vclz */, ARM::VCLZv2i32, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i32, MCK_DPR, MCK_DPR }, 0},
  { 1483 /* vclz */, ARM::VCLZv4i32, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i32, MCK_QPR, MCK_QPR }, 0},
  { 1483 /* vclz */, ARM::VCLZv8i8, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i8, MCK_DPR, MCK_DPR }, 0},
  { 1483 /* vclz */, ARM::VCLZv16i8, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i8, MCK_QPR, MCK_QPR }, 0},
  { 1488 /* vcmp */, ARM::VCMPZS, Convert__Reg1_2__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_f32, MCK_SPR, MCK__35_0 }, 0},
  { 1488 /* vcmp */, ARM::VCMPS, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_f32, MCK_SPR, MCK_SPR }, 0},
  { 1488 /* vcmp */, ARM::VCMPZD, Convert__Reg1_2__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_f64, MCK_DPR, MCK__35_0 }, 0},
  { 1488 /* vcmp */, ARM::VCMPD, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_f64, MCK_DPR, MCK_DPR }, 0},
  { 1493 /* vcmpe */, ARM::VCMPEZS, Convert__Reg1_2__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_f32, MCK_SPR, MCK__35_0 }, 0},
  { 1493 /* vcmpe */, ARM::VCMPES, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_f32, MCK_SPR, MCK_SPR }, 0},
  { 1493 /* vcmpe */, ARM::VCMPEZD, Convert__Reg1_2__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_f64, MCK_DPR, MCK__35_0 }, 0},
  { 1493 /* vcmpe */, ARM::VCMPED, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_f64, MCK_DPR, MCK_DPR }, 0},
  { 1499 /* vcnt */, ARM::VCNTd, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_DPR, MCK_DPR }, 0},
  { 1499 /* vcnt */, ARM::VCNTq, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_QPR, MCK_QPR }, 0},
  { 1504 /* vcvt */, ARM::VCVTf2h, Convert__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON|Feature_HasFP16, { MCK_CondCode, MCK__DOT_f16, MCK__DOT_f32, MCK_DPR, MCK_QPR }, 0},
  { 1504 /* vcvt */, ARM::VCVTh2f, Convert__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON|Feature_HasFP16, { MCK_CondCode, MCK__DOT_f32, MCK__DOT_f16, MCK_QPR, MCK_DPR }, 0},
  { 1504 /* vcvt */, ARM::VCVTSD, Convert__Reg1_3__Reg1_4__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_f32, MCK__DOT_f64, MCK_SPR, MCK_DPR }, 0},
  { 1504 /* vcvt */, ARM::VSITOS, Convert__Reg1_3__Reg1_4__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_f32, MCK__DOT_s32, MCK_SPR, MCK_SPR }, 0},
  { 1504 /* vcvt */, ARM::VCVTs2fd, Convert__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK__DOT_s32, MCK_DPR, MCK_DPR }, 0},
  { 1504 /* vcvt */, ARM::VCVTs2fq, Convert__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK__DOT_s32, MCK_QPR, MCK_QPR }, 0},
  { 1504 /* vcvt */, ARM::VUITOS, Convert__Reg1_3__Reg1_4__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_f32, MCK__DOT_u32, MCK_SPR, MCK_SPR }, 0},
  { 1504 /* vcvt */, ARM::VCVTu2fd, Convert__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK__DOT_u32, MCK_DPR, MCK_DPR }, 0},
  { 1504 /* vcvt */, ARM::VCVTu2fq, Convert__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK__DOT_u32, MCK_QPR, MCK_QPR }, 0},
  { 1504 /* vcvt */, ARM::VCVTDS, Convert__Reg1_3__Reg1_4__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_f64, MCK__DOT_f32, MCK_DPR, MCK_SPR }, 0},
  { 1504 /* vcvt */, ARM::VSITOD, Convert__Reg1_3__Reg1_4__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_f64, MCK__DOT_s32, MCK_DPR, MCK_SPR }, 0},
  { 1504 /* vcvt */, ARM::VUITOD, Convert__Reg1_3__Reg1_4__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_f64, MCK__DOT_u32, MCK_DPR, MCK_SPR }, 0},
  { 1504 /* vcvt */, ARM::VTOSIZS, Convert__Reg1_3__Reg1_4__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_s32, MCK__DOT_f32, MCK_SPR, MCK_SPR }, 0},
  { 1504 /* vcvt */, ARM::VCVTf2sd, Convert__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK__DOT_f32, MCK_DPR, MCK_DPR }, 0},
  { 1504 /* vcvt */, ARM::VCVTf2sq, Convert__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK__DOT_f32, MCK_QPR, MCK_QPR }, 0},
  { 1504 /* vcvt */, ARM::VTOSIZD, Convert__Reg1_3__Reg1_4__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_s32, MCK__DOT_f64, MCK_SPR, MCK_DPR }, 0},
  { 1504 /* vcvt */, ARM::VTOUIZS, Convert__Reg1_3__Reg1_4__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_u32, MCK__DOT_f32, MCK_SPR, MCK_SPR }, 0},
  { 1504 /* vcvt */, ARM::VCVTf2ud, Convert__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK__DOT_f32, MCK_DPR, MCK_DPR }, 0},
  { 1504 /* vcvt */, ARM::VCVTf2uq, Convert__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK__DOT_f32, MCK_QPR, MCK_QPR }, 0},
  { 1504 /* vcvt */, ARM::VTOUIZD, Convert__Reg1_3__Reg1_4__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_u32, MCK__DOT_f64, MCK_SPR, MCK_DPR }, 0},
  { 1504 /* vcvt */, ARM::VSHTOS, Convert__Reg1_3__Tie0__FBits161_5__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_f32, MCK__DOT_s16, MCK_SPR, MCK_SPR, MCK_FBits16 }, 0},
  { 1504 /* vcvt */, ARM::VSLTOS, Convert__Reg1_3__Tie0__FBits321_5__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_f32, MCK__DOT_s32, MCK_SPR, MCK_SPR, MCK_FBits32 }, 0},
  { 1504 /* vcvt */, ARM::VCVTxs2fd, Convert__Reg1_3__Reg1_4__Imm1_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK__DOT_s32, MCK_DPR, MCK_DPR, MCK_Imm }, 0},
  { 1504 /* vcvt */, ARM::VCVTxs2fq, Convert__Reg1_3__Reg1_4__Imm1_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK__DOT_s32, MCK_QPR, MCK_QPR, MCK_Imm }, 0},
  { 1504 /* vcvt */, ARM::VUHTOS, Convert__Reg1_3__Tie0__FBits161_5__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_f32, MCK__DOT_u16, MCK_SPR, MCK_SPR, MCK_FBits16 }, 0},
  { 1504 /* vcvt */, ARM::VULTOS, Convert__Reg1_3__Tie0__FBits321_5__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_f32, MCK__DOT_u32, MCK_SPR, MCK_SPR, MCK_FBits32 }, 0},
  { 1504 /* vcvt */, ARM::VCVTxu2fd, Convert__Reg1_3__Reg1_4__Imm1_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK__DOT_u32, MCK_DPR, MCK_DPR, MCK_Imm }, 0},
  { 1504 /* vcvt */, ARM::VCVTxu2fq, Convert__Reg1_3__Reg1_4__Imm1_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK__DOT_u32, MCK_QPR, MCK_QPR, MCK_Imm }, 0},
  { 1504 /* vcvt */, ARM::VSHTOD, Convert__Reg1_3__Tie0__FBits161_5__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_f64, MCK__DOT_s16, MCK_DPR, MCK_DPR, MCK_FBits16 }, 0},
  { 1504 /* vcvt */, ARM::VSLTOD, Convert__Reg1_3__Tie0__FBits321_5__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_f64, MCK__DOT_s32, MCK_DPR, MCK_DPR, MCK_FBits32 }, 0},
  { 1504 /* vcvt */, ARM::VUHTOD, Convert__Reg1_3__Tie0__FBits161_5__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_f64, MCK__DOT_u16, MCK_DPR, MCK_DPR, MCK_FBits16 }, 0},
  { 1504 /* vcvt */, ARM::VULTOD, Convert__Reg1_3__Tie0__FBits321_5__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_f64, MCK__DOT_u32, MCK_DPR, MCK_DPR, MCK_FBits32 }, 0},
  { 1504 /* vcvt */, ARM::VTOSHS, Convert__Reg1_3__Tie0__FBits161_5__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_s16, MCK__DOT_f32, MCK_SPR, MCK_SPR, MCK_FBits16 }, 0},
  { 1504 /* vcvt */, ARM::VTOSHD, Convert__Reg1_3__Tie0__FBits161_5__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_s16, MCK__DOT_f64, MCK_DPR, MCK_DPR, MCK_FBits16 }, 0},
  { 1504 /* vcvt */, ARM::VTOSLS, Convert__Reg1_3__Tie0__FBits321_5__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_s32, MCK__DOT_f32, MCK_SPR, MCK_SPR, MCK_FBits32 }, 0},
  { 1504 /* vcvt */, ARM::VCVTf2xsd, Convert__Reg1_3__Reg1_4__Imm1_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK__DOT_f32, MCK_DPR, MCK_DPR, MCK_Imm }, 0},
  { 1504 /* vcvt */, ARM::VCVTf2xsq, Convert__Reg1_3__Reg1_4__Imm1_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK__DOT_f32, MCK_QPR, MCK_QPR, MCK_Imm }, 0},
  { 1504 /* vcvt */, ARM::VTOSLD, Convert__Reg1_3__Tie0__FBits321_5__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_s32, MCK__DOT_f64, MCK_DPR, MCK_DPR, MCK_FBits32 }, 0},
  { 1504 /* vcvt */, ARM::VTOUHS, Convert__Reg1_3__Tie0__FBits161_5__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_u16, MCK__DOT_f32, MCK_SPR, MCK_SPR, MCK_FBits16 }, 0},
  { 1504 /* vcvt */, ARM::VTOUHD, Convert__Reg1_3__Tie0__FBits161_5__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_u16, MCK__DOT_f64, MCK_DPR, MCK_DPR, MCK_FBits16 }, 0},
  { 1504 /* vcvt */, ARM::VTOULS, Convert__Reg1_3__Tie0__FBits321_5__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_u32, MCK__DOT_f32, MCK_SPR, MCK_SPR, MCK_FBits32 }, 0},
  { 1504 /* vcvt */, ARM::VCVTf2xud, Convert__Reg1_3__Reg1_4__Imm1_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK__DOT_f32, MCK_DPR, MCK_DPR, MCK_Imm }, 0},
  { 1504 /* vcvt */, ARM::VCVTf2xuq, Convert__Reg1_3__Reg1_4__Imm1_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK__DOT_f32, MCK_QPR, MCK_QPR, MCK_Imm }, 0},
  { 1504 /* vcvt */, ARM::VTOULD, Convert__Reg1_3__Tie0__FBits321_5__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_u32, MCK__DOT_f64, MCK_DPR, MCK_DPR, MCK_FBits32 }, 0},
  { 1509 /* vcvtb */, ARM::VCVTBSH, Convert__Reg1_3__Reg1_4__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_f16, MCK__DOT_f32, MCK_SPR, MCK_SPR }, 0},
  { 1509 /* vcvtb */, ARM::VCVTBHS, Convert__Reg1_3__Reg1_4__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_f32, MCK__DOT_f16, MCK_SPR, MCK_SPR }, 0},
  { 1515 /* vcvtr */, ARM::VTOSIRS, Convert__Reg1_3__Reg1_4__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_s32, MCK__DOT_f32, MCK_SPR, MCK_SPR }, 0},
  { 1515 /* vcvtr */, ARM::VTOSIRD, Convert__Reg1_3__Reg1_4__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_s32, MCK__DOT_f64, MCK_SPR, MCK_DPR }, 0},
  { 1515 /* vcvtr */, ARM::VTOUIRS, Convert__Reg1_3__Reg1_4__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_u32, MCK__DOT_f32, MCK_SPR, MCK_SPR }, 0},
  { 1515 /* vcvtr */, ARM::VTOUIRD, Convert__Reg1_3__Reg1_4__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_u32, MCK__DOT_f64, MCK_SPR, MCK_DPR }, 0},
  { 1521 /* vcvtt */, ARM::VCVTTSH, Convert__Reg1_3__Reg1_4__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_f16, MCK__DOT_f32, MCK_SPR, MCK_SPR }, 0},
  { 1521 /* vcvtt */, ARM::VCVTTHS, Convert__Reg1_3__Reg1_4__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_f32, MCK__DOT_f16, MCK_SPR, MCK_SPR }, 0},
  { 1527 /* vdiv */, ARM::VDIVS, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_f32, MCK_SPR, MCK_SPR }, 0},
  { 1527 /* vdiv */, ARM::VDIVD, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_f64, MCK_DPR, MCK_DPR }, 0},
  { 1527 /* vdiv */, ARM::VDIVS, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_f32, MCK_SPR, MCK_SPR, MCK_SPR }, 0},
  { 1527 /* vdiv */, ARM::VDIVD, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_f64, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1532 /* vdup */, ARM::VDUP16d, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_DPR, MCK_GPR }, 0},
  { 1532 /* vdup */, ARM::VDUP16q, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_QPR, MCK_GPR }, 0},
  { 1532 /* vdup */, ARM::VDUP32d, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_DPR, MCK_GPR }, 0},
  { 1532 /* vdup */, ARM::VDUP32q, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_QPR, MCK_GPR }, 0},
  { 1532 /* vdup */, ARM::VDUP8d, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_DPR, MCK_GPR }, 0},
  { 1532 /* vdup */, ARM::VDUP8q, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_QPR, MCK_GPR }, 0},
  { 1532 /* vdup */, ARM::VDUPLN16d, Convert__Reg1_2__Reg1_3__VectorIndex161_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_DPR, MCK_DPR, MCK_VectorIndex16 }, 0},
  { 1532 /* vdup */, ARM::VDUPLN16q, Convert__Reg1_2__Reg1_3__VectorIndex161_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_QPR, MCK_DPR, MCK_VectorIndex16 }, 0},
  { 1532 /* vdup */, ARM::VDUPLN32d, Convert__Reg1_2__Reg1_3__VectorIndex321_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_DPR, MCK_DPR, MCK_VectorIndex32 }, 0},
  { 1532 /* vdup */, ARM::VDUPLN32q, Convert__Reg1_2__Reg1_3__VectorIndex321_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_QPR, MCK_DPR, MCK_VectorIndex32 }, 0},
  { 1532 /* vdup */, ARM::VDUPLN8d, Convert__Reg1_2__Reg1_3__VectorIndex81_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_DPR, MCK_DPR, MCK_VectorIndex8 }, 0},
  { 1532 /* vdup */, ARM::VDUPLN8q, Convert__Reg1_2__Reg1_3__VectorIndex81_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_QPR, MCK_DPR, MCK_VectorIndex8 }, 0},
  { 1537 /* veor */, ARM::VEORd, Convert__Reg1_1__Reg1_1__Reg1_2__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK_DPR, MCK_DPR }, 0},
  { 1537 /* veor */, ARM::VEORq, Convert__Reg1_1__Reg1_1__Reg1_2__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK_QPR, MCK_QPR }, 0},
  { 1537 /* veor */, ARM::VEORd, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_DPR, MCK_DPR }, 0},
  { 1537 /* veor */, ARM::VEORq, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_QPR, MCK_QPR }, 0},
  { 1537 /* veor */, ARM::VEORd, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_DPR, MCK_DPR }, 0},
  { 1537 /* veor */, ARM::VEORq, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_QPR, MCK_QPR }, 0},
  { 1537 /* veor */, ARM::VEORd, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_64, MCK_DPR, MCK_DPR }, 0},
  { 1537 /* veor */, ARM::VEORq, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_64, MCK_QPR, MCK_QPR }, 0},
  { 1537 /* veor */, ARM::VEORd, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_DPR, MCK_DPR }, 0},
  { 1537 /* veor */, ARM::VEORq, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_QPR, MCK_QPR }, 0},
  { 1537 /* veor */, ARM::VEORd, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1537 /* veor */, ARM::VEORq, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1537 /* veor */, ARM::VEORd, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1537 /* veor */, ARM::VEORq, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1537 /* veor */, ARM::VEORd, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1537 /* veor */, ARM::VEORq, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1537 /* veor */, ARM::VEORd, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_64, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1537 /* veor */, ARM::VEORq, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_64, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1537 /* veor */, ARM::VEORd, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1537 /* veor */, ARM::VEORq, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1542 /* vext */, ARM::VEXTd16, Convert__Reg1_2__Reg1_2__Reg1_3__Imm0_31_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_DPR, MCK_DPR, MCK_Imm0_3 }, 0},
  { 1542 /* vext */, ARM::VEXTq16, Convert__Reg1_2__Reg1_2__Reg1_3__Imm0_151_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_QPR, MCK_QPR, MCK_Imm0_15 }, 0},
  { 1542 /* vext */, ARM::VEXTd32, Convert__Reg1_2__Reg1_2__Reg1_3__Imm0_11_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_DPR, MCK_DPR, MCK_Imm0_1 }, 0},
  { 1542 /* vext */, ARM::VEXTq32, Convert__Reg1_2__Reg1_2__Reg1_3__Imm0_151_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_QPR, MCK_QPR, MCK_Imm0_15 }, 0},
  { 1542 /* vext */, ARM::VEXTq64, Convert__Reg1_2__Reg1_2__Reg1_3__Imm0_151_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_64, MCK_QPR, MCK_QPR, MCK_Imm0_15 }, 0},
  { 1542 /* vext */, ARM::VEXTd8, Convert__Reg1_2__Reg1_2__Reg1_3__Imm0_71_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_DPR, MCK_DPR, MCK_Imm0_7 }, 0},
  { 1542 /* vext */, ARM::VEXTq8, Convert__Reg1_2__Reg1_2__Reg1_3__Imm0_151_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_QPR, MCK_QPR, MCK_Imm0_15 }, 0},
  { 1542 /* vext */, ARM::VEXTd16, Convert__Reg1_2__Reg1_3__Reg1_4__Imm0_31_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_DPR, MCK_DPR, MCK_DPR, MCK_Imm0_3 }, 0},
  { 1542 /* vext */, ARM::VEXTq16, Convert__Reg1_2__Reg1_3__Reg1_4__Imm0_151_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_QPR, MCK_QPR, MCK_QPR, MCK_Imm0_15 }, 0},
  { 1542 /* vext */, ARM::VEXTd32, Convert__Reg1_2__Reg1_3__Reg1_4__Imm0_11_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_DPR, MCK_DPR, MCK_DPR, MCK_Imm0_1 }, 0},
  { 1542 /* vext */, ARM::VEXTq32, Convert__Reg1_2__Reg1_3__Reg1_4__Imm0_151_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_QPR, MCK_QPR, MCK_QPR, MCK_Imm0_15 }, 0},
  { 1542 /* vext */, ARM::VEXTq64, Convert__Reg1_2__Reg1_3__Reg1_4__Imm0_151_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_64, MCK_QPR, MCK_QPR, MCK_QPR, MCK_Imm0_15 }, 0},
  { 1542 /* vext */, ARM::VEXTd8, Convert__Reg1_2__Reg1_3__Reg1_4__Imm0_71_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_DPR, MCK_DPR, MCK_DPR, MCK_Imm0_7 }, 0},
  { 1542 /* vext */, ARM::VEXTq8, Convert__Reg1_2__Reg1_3__Reg1_4__Imm0_151_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_QPR, MCK_QPR, MCK_QPR, MCK_Imm0_15 }, 0},
  { 1547 /* vfma */, ARM::VFMAS, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasVFP4, { MCK_CondCode, MCK__DOT_f32, MCK_SPR, MCK_SPR, MCK_SPR }, 0},
  { 1547 /* vfma */, ARM::VFMAfd, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasVFP4, { MCK_CondCode, MCK__DOT_f32, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1547 /* vfma */, ARM::VFMAfq, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasVFP4, { MCK_CondCode, MCK__DOT_f32, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1547 /* vfma */, ARM::VFMAD, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasVFP4, { MCK_CondCode, MCK__DOT_f64, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1552 /* vfms */, ARM::VFMSS, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasVFP4, { MCK_CondCode, MCK__DOT_f32, MCK_SPR, MCK_SPR, MCK_SPR }, 0},
  { 1552 /* vfms */, ARM::VFMSfd, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasVFP4, { MCK_CondCode, MCK__DOT_f32, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1552 /* vfms */, ARM::VFMSfq, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasVFP4, { MCK_CondCode, MCK__DOT_f32, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1552 /* vfms */, ARM::VFMSD, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasVFP4, { MCK_CondCode, MCK__DOT_f64, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1557 /* vfnma */, ARM::VFNMAS, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasVFP4, { MCK_CondCode, MCK__DOT_f32, MCK_SPR, MCK_SPR, MCK_SPR }, 0},
  { 1557 /* vfnma */, ARM::VFNMAD, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasVFP4, { MCK_CondCode, MCK__DOT_f64, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1563 /* vfnms */, ARM::VFNMSS, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasVFP4, { MCK_CondCode, MCK__DOT_f32, MCK_SPR, MCK_SPR, MCK_SPR }, 0},
  { 1563 /* vfnms */, ARM::VFNMSD, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasVFP4, { MCK_CondCode, MCK__DOT_f64, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1569 /* vhadd */, ARM::VHADDsv4i16, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_DPR, MCK_DPR }, 0},
  { 1569 /* vhadd */, ARM::VHADDsv8i16, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_QPR, MCK_QPR }, 0},
  { 1569 /* vhadd */, ARM::VHADDsv2i32, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_DPR, MCK_DPR }, 0},
  { 1569 /* vhadd */, ARM::VHADDsv4i32, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_QPR, MCK_QPR }, 0},
  { 1569 /* vhadd */, ARM::VHADDsv8i8, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_DPR, MCK_DPR }, 0},
  { 1569 /* vhadd */, ARM::VHADDsv16i8, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_QPR, MCK_QPR }, 0},
  { 1569 /* vhadd */, ARM::VHADDuv4i16, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_DPR, MCK_DPR }, 0},
  { 1569 /* vhadd */, ARM::VHADDuv8i16, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_QPR, MCK_QPR }, 0},
  { 1569 /* vhadd */, ARM::VHADDuv2i32, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_DPR, MCK_DPR }, 0},
  { 1569 /* vhadd */, ARM::VHADDuv4i32, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_QPR, MCK_QPR }, 0},
  { 1569 /* vhadd */, ARM::VHADDuv8i8, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_DPR, MCK_DPR }, 0},
  { 1569 /* vhadd */, ARM::VHADDuv16i8, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_QPR, MCK_QPR }, 0},
  { 1569 /* vhadd */, ARM::VHADDsv4i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1569 /* vhadd */, ARM::VHADDsv8i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1569 /* vhadd */, ARM::VHADDsv2i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1569 /* vhadd */, ARM::VHADDsv4i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1569 /* vhadd */, ARM::VHADDsv8i8, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1569 /* vhadd */, ARM::VHADDsv16i8, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1569 /* vhadd */, ARM::VHADDuv4i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1569 /* vhadd */, ARM::VHADDuv8i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1569 /* vhadd */, ARM::VHADDuv2i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1569 /* vhadd */, ARM::VHADDuv4i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1569 /* vhadd */, ARM::VHADDuv8i8, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1569 /* vhadd */, ARM::VHADDuv16i8, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1575 /* vhsub */, ARM::VHSUBsv4i16, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_DPR, MCK_DPR }, 0},
  { 1575 /* vhsub */, ARM::VHSUBsv8i16, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_QPR, MCK_QPR }, 0},
  { 1575 /* vhsub */, ARM::VHSUBsv2i32, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_DPR, MCK_DPR }, 0},
  { 1575 /* vhsub */, ARM::VHSUBsv4i32, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_QPR, MCK_QPR }, 0},
  { 1575 /* vhsub */, ARM::VHSUBsv8i8, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_DPR, MCK_DPR }, 0},
  { 1575 /* vhsub */, ARM::VHSUBsv16i8, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_QPR, MCK_QPR }, 0},
  { 1575 /* vhsub */, ARM::VHSUBuv4i16, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_DPR, MCK_DPR }, 0},
  { 1575 /* vhsub */, ARM::VHSUBuv8i16, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_QPR, MCK_QPR }, 0},
  { 1575 /* vhsub */, ARM::VHSUBuv2i32, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_DPR, MCK_DPR }, 0},
  { 1575 /* vhsub */, ARM::VHSUBuv4i32, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_QPR, MCK_QPR }, 0},
  { 1575 /* vhsub */, ARM::VHSUBuv8i8, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_DPR, MCK_DPR }, 0},
  { 1575 /* vhsub */, ARM::VHSUBuv16i8, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_QPR, MCK_QPR }, 0},
  { 1575 /* vhsub */, ARM::VHSUBsv4i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1575 /* vhsub */, ARM::VHSUBsv8i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1575 /* vhsub */, ARM::VHSUBsv2i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1575 /* vhsub */, ARM::VHSUBsv4i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1575 /* vhsub */, ARM::VHSUBsv8i8, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1575 /* vhsub */, ARM::VHSUBsv16i8, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1575 /* vhsub */, ARM::VHSUBuv4i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1575 /* vhsub */, ARM::VHSUBuv8i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1575 /* vhsub */, ARM::VHSUBuv2i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1575 /* vhsub */, ARM::VHSUBuv4i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1575 /* vhsub */, ARM::VHSUBuv8i8, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1575 /* vhsub */, ARM::VHSUBuv16i8, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1581 /* vld1 */, ARM::VLD1DUPq16, Convert__VecListDPairAllLanes1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListDPairAllLanes, MCK_AlignedMemory }, 0},
  { 1581 /* vld1 */, ARM::VLD1q16, Convert__VecListDPair1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListDPair, MCK_AlignedMemory }, 0},
  { 1581 /* vld1 */, ARM::VLD1d16Q, Convert__VecListFourD1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListFourD, MCK_AlignedMemory }, 0},
  { 1581 /* vld1 */, ARM::VLD1DUPd16, Convert__VecListOneDAllLanes1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListOneDAllLanes, MCK_AlignedMemory }, 0},
  { 1581 /* vld1 */, ARM::VLD1d16, Convert__VecListOneD1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListOneD, MCK_AlignedMemory }, 0},
  { 1581 /* vld1 */, ARM::VLD1LNdAsm_16, Convert__VecListOneDHWordIndexed2_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListOneDHWordIndexed, MCK_AlignedMemory }, 0},
  { 1581 /* vld1 */, ARM::VLD1d16T, Convert__VecListThreeD1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListThreeD, MCK_AlignedMemory }, 0},
  { 1581 /* vld1 */, ARM::VLD1DUPq32, Convert__VecListDPairAllLanes1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListDPairAllLanes, MCK_AlignedMemory }, 0},
  { 1581 /* vld1 */, ARM::VLD1q32, Convert__VecListDPair1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListDPair, MCK_AlignedMemory }, 0},
  { 1581 /* vld1 */, ARM::VLD1d32Q, Convert__VecListFourD1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListFourD, MCK_AlignedMemory }, 0},
  { 1581 /* vld1 */, ARM::VLD1DUPd32, Convert__VecListOneDAllLanes1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListOneDAllLanes, MCK_AlignedMemory }, 0},
  { 1581 /* vld1 */, ARM::VLD1d32, Convert__VecListOneD1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListOneD, MCK_AlignedMemory }, 0},
  { 1581 /* vld1 */, ARM::VLD1LNdAsm_32, Convert__VecListOneDWordIndexed2_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListOneDWordIndexed, MCK_AlignedMemory }, 0},
  { 1581 /* vld1 */, ARM::VLD1d32T, Convert__VecListThreeD1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListThreeD, MCK_AlignedMemory }, 0},
  { 1581 /* vld1 */, ARM::VLD1q64, Convert__VecListDPair1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_64, MCK_VecListDPair, MCK_AlignedMemory }, 0},
  { 1581 /* vld1 */, ARM::VLD1d64Q, Convert__VecListFourD1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_64, MCK_VecListFourD, MCK_AlignedMemory }, 0},
  { 1581 /* vld1 */, ARM::VLD1d64, Convert__VecListOneD1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_64, MCK_VecListOneD, MCK_AlignedMemory }, 0},
  { 1581 /* vld1 */, ARM::VLD1d64T, Convert__VecListThreeD1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_64, MCK_VecListThreeD, MCK_AlignedMemory }, 0},
  { 1581 /* vld1 */, ARM::VLD1DUPq8, Convert__VecListDPairAllLanes1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListDPairAllLanes, MCK_AlignedMemory }, 0},
  { 1581 /* vld1 */, ARM::VLD1q8, Convert__VecListDPair1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListDPair, MCK_AlignedMemory }, 0},
  { 1581 /* vld1 */, ARM::VLD1d8Q, Convert__VecListFourD1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListFourD, MCK_AlignedMemory }, 0},
  { 1581 /* vld1 */, ARM::VLD1DUPd8, Convert__VecListOneDAllLanes1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListOneDAllLanes, MCK_AlignedMemory }, 0},
  { 1581 /* vld1 */, ARM::VLD1d8, Convert__VecListOneD1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListOneD, MCK_AlignedMemory }, 0},
  { 1581 /* vld1 */, ARM::VLD1LNdAsm_8, Convert__VecListOneDByteIndexed2_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListOneDByteIndexed, MCK_AlignedMemory }, 0},
  { 1581 /* vld1 */, ARM::VLD1d8T, Convert__VecListThreeD1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListThreeD, MCK_AlignedMemory }, 0},
  { 1581 /* vld1 */, ARM::VLD1DUPq16wb_fixed, ConvertCustom_cvtVLDwbFixed, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListDPairAllLanes, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 1581 /* vld1 */, ARM::VLD1DUPq16wb_register, ConvertCustom_cvtVLDwbRegister, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListDPairAllLanes, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 1581 /* vld1 */, ARM::VLD1q16wb_fixed, ConvertCustom_cvtVLDwbFixed, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListDPair, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 1581 /* vld1 */, ARM::VLD1q16wb_register, ConvertCustom_cvtVLDwbRegister, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListDPair, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 1581 /* vld1 */, ARM::VLD1d16Qwb_fixed, ConvertCustom_cvtVLDwbFixed, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListFourD, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 1581 /* vld1 */, ARM::VLD1d16Qwb_register, ConvertCustom_cvtVLDwbRegister, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListFourD, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 1581 /* vld1 */, ARM::VLD1DUPd16wb_fixed, ConvertCustom_cvtVLDwbFixed, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListOneDAllLanes, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 1581 /* vld1 */, ARM::VLD1DUPd16wb_register, ConvertCustom_cvtVLDwbRegister, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListOneDAllLanes, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 1581 /* vld1 */, ARM::VLD1d16wb_fixed, ConvertCustom_cvtVLDwbFixed, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListOneD, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 1581 /* vld1 */, ARM::VLD1d16wb_register, ConvertCustom_cvtVLDwbRegister, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListOneD, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 1581 /* vld1 */, ARM::VLD1LNdWB_fixed_Asm_16, Convert__VecListOneDHWordIndexed2_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListOneDHWordIndexed, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 1581 /* vld1 */, ARM::VLD1LNdWB_register_Asm_16, Convert__VecListOneDHWordIndexed2_2__AlignedMemory2_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListOneDHWordIndexed, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 1581 /* vld1 */, ARM::VLD1d16Twb_fixed, ConvertCustom_cvtVLDwbFixed, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListThreeD, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 1581 /* vld1 */, ARM::VLD1d16Twb_register, ConvertCustom_cvtVLDwbRegister, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListThreeD, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 1581 /* vld1 */, ARM::VLD1DUPq32wb_fixed, ConvertCustom_cvtVLDwbFixed, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListDPairAllLanes, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 1581 /* vld1 */, ARM::VLD1DUPq32wb_register, ConvertCustom_cvtVLDwbRegister, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListDPairAllLanes, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 1581 /* vld1 */, ARM::VLD1q32wb_fixed, ConvertCustom_cvtVLDwbFixed, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListDPair, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 1581 /* vld1 */, ARM::VLD1q32wb_register, ConvertCustom_cvtVLDwbRegister, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListDPair, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 1581 /* vld1 */, ARM::VLD1d32Qwb_fixed, ConvertCustom_cvtVLDwbFixed, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListFourD, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 1581 /* vld1 */, ARM::VLD1d32Qwb_register, ConvertCustom_cvtVLDwbRegister, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListFourD, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 1581 /* vld1 */, ARM::VLD1DUPd32wb_fixed, ConvertCustom_cvtVLDwbFixed, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListOneDAllLanes, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 1581 /* vld1 */, ARM::VLD1DUPd32wb_register, ConvertCustom_cvtVLDwbRegister, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListOneDAllLanes, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 1581 /* vld1 */, ARM::VLD1d32wb_fixed, ConvertCustom_cvtVLDwbFixed, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListOneD, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 1581 /* vld1 */, ARM::VLD1d32wb_register, ConvertCustom_cvtVLDwbRegister, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListOneD, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 1581 /* vld1 */, ARM::VLD1LNdWB_fixed_Asm_32, Convert__VecListOneDWordIndexed2_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListOneDWordIndexed, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 1581 /* vld1 */, ARM::VLD1LNdWB_register_Asm_32, Convert__VecListOneDWordIndexed2_2__AlignedMemory2_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListOneDWordIndexed, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 1581 /* vld1 */, ARM::VLD1d32Twb_fixed, ConvertCustom_cvtVLDwbFixed, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListThreeD, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 1581 /* vld1 */, ARM::VLD1d32Twb_register, ConvertCustom_cvtVLDwbRegister, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListThreeD, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 1581 /* vld1 */, ARM::VLD1q64wb_fixed, ConvertCustom_cvtVLDwbFixed, Feature_HasNEON, { MCK_CondCode, MCK__DOT_64, MCK_VecListDPair, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 1581 /* vld1 */, ARM::VLD1q64wb_register, ConvertCustom_cvtVLDwbRegister, Feature_HasNEON, { MCK_CondCode, MCK__DOT_64, MCK_VecListDPair, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 1581 /* vld1 */, ARM::VLD1d64Qwb_fixed, ConvertCustom_cvtVLDwbFixed, Feature_HasNEON, { MCK_CondCode, MCK__DOT_64, MCK_VecListFourD, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 1581 /* vld1 */, ARM::VLD1d64Qwb_register, ConvertCustom_cvtVLDwbRegister, Feature_HasNEON, { MCK_CondCode, MCK__DOT_64, MCK_VecListFourD, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 1581 /* vld1 */, ARM::VLD1d64wb_fixed, ConvertCustom_cvtVLDwbFixed, Feature_HasNEON, { MCK_CondCode, MCK__DOT_64, MCK_VecListOneD, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 1581 /* vld1 */, ARM::VLD1d64wb_register, ConvertCustom_cvtVLDwbRegister, Feature_HasNEON, { MCK_CondCode, MCK__DOT_64, MCK_VecListOneD, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 1581 /* vld1 */, ARM::VLD1d64Twb_fixed, ConvertCustom_cvtVLDwbFixed, Feature_HasNEON, { MCK_CondCode, MCK__DOT_64, MCK_VecListThreeD, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 1581 /* vld1 */, ARM::VLD1d64Twb_register, ConvertCustom_cvtVLDwbRegister, Feature_HasNEON, { MCK_CondCode, MCK__DOT_64, MCK_VecListThreeD, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 1581 /* vld1 */, ARM::VLD1DUPq8wb_fixed, ConvertCustom_cvtVLDwbFixed, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListDPairAllLanes, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 1581 /* vld1 */, ARM::VLD1DUPq8wb_register, ConvertCustom_cvtVLDwbRegister, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListDPairAllLanes, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 1581 /* vld1 */, ARM::VLD1q8wb_fixed, ConvertCustom_cvtVLDwbFixed, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListDPair, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 1581 /* vld1 */, ARM::VLD1q8wb_register, ConvertCustom_cvtVLDwbRegister, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListDPair, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 1581 /* vld1 */, ARM::VLD1d8Qwb_fixed, ConvertCustom_cvtVLDwbFixed, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListFourD, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 1581 /* vld1 */, ARM::VLD1d8Qwb_register, ConvertCustom_cvtVLDwbRegister, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListFourD, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 1581 /* vld1 */, ARM::VLD1DUPd8wb_fixed, ConvertCustom_cvtVLDwbFixed, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListOneDAllLanes, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 1581 /* vld1 */, ARM::VLD1DUPd8wb_register, ConvertCustom_cvtVLDwbRegister, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListOneDAllLanes, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 1581 /* vld1 */, ARM::VLD1d8wb_fixed, ConvertCustom_cvtVLDwbFixed, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListOneD, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 1581 /* vld1 */, ARM::VLD1d8wb_register, ConvertCustom_cvtVLDwbRegister, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListOneD, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 1581 /* vld1 */, ARM::VLD1LNdWB_fixed_Asm_8, Convert__VecListOneDByteIndexed2_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListOneDByteIndexed, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 1581 /* vld1 */, ARM::VLD1LNdWB_register_Asm_8, Convert__VecListOneDByteIndexed2_2__AlignedMemory2_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListOneDByteIndexed, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 1581 /* vld1 */, ARM::VLD1d8Twb_fixed, ConvertCustom_cvtVLDwbFixed, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListThreeD, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 1581 /* vld1 */, ARM::VLD1d8Twb_register, ConvertCustom_cvtVLDwbRegister, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListThreeD, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 1581 /* vld1 */, ARM::VLD1LNd16, Convert__Reg1_3__AlignedMemory2_8__Tie0__Imm1_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK__123_, MCK_DPR, MCK__91_, MCK_Imm, MCK__93_, MCK__125_, MCK_AlignedMemory }, 0},
  { 1581 /* vld1 */, ARM::VLD1LNd8, Convert__Reg1_3__AlignedMemory2_8__Tie0__Imm1_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK__123_, MCK_DPR, MCK__91_, MCK_Imm, MCK__93_, MCK__125_, MCK_AlignedMemory }, 0},
  { 1581 /* vld1 */, ARM::VLD1LNd16_UPD, Convert__Reg1_3__AlignedMemory1_8__Tie1__Imm1_9__Tie0__Imm1_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK__123_, MCK_DPR, MCK__91_, MCK_Imm, MCK__93_, MCK__125_, MCK_AlignedMemory, MCK_Imm }, 0},
  { 1581 /* vld1 */, ARM::VLD1LNd32, Convert__Reg1_3__Reg1_8__Imm1_9__Tie0__Imm1_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK__123_, MCK_DPR, MCK__91_, MCK_Imm, MCK__93_, MCK__125_, MCK_GPR, MCK_Imm }, 0},
  { 1581 /* vld1 */, ARM::VLD1LNd32_UPD, Convert__Reg1_3__AlignedMemory1_8__Tie1__Imm1_9__Tie0__Imm1_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK__123_, MCK_DPR, MCK__91_, MCK_Imm, MCK__93_, MCK__125_, MCK_AlignedMemory, MCK_Imm }, 0},
  { 1581 /* vld1 */, ARM::VLD1LNd8_UPD, Convert__Reg1_3__AlignedMemory1_8__Tie1__Imm1_9__Tie0__Imm1_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK__123_, MCK_DPR, MCK__91_, MCK_Imm, MCK__93_, MCK__125_, MCK_AlignedMemory, MCK_Imm }, 0},
  { 1586 /* vld2 */, ARM::VLD2DUPd16, Convert__VecListDPairAllLanes1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListDPairAllLanes, MCK_AlignedMemory }, 0},
  { 1586 /* vld2 */, ARM::VLD2d16, Convert__VecListDPair1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListDPair, MCK_AlignedMemory }, 0},
  { 1586 /* vld2 */, ARM::VLD2DUPd16x2, Convert__VecListDPairSpacedAllLanes1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListDPairSpacedAllLanes, MCK_AlignedMemory }, 0},
  { 1586 /* vld2 */, ARM::VLD2b16, Convert__VecListDPairSpaced1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListDPairSpaced, MCK_AlignedMemory }, 0},
  { 1586 /* vld2 */, ARM::VLD2q16, Convert__VecListFourD1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListFourD, MCK_AlignedMemory }, 0},
  { 1586 /* vld2 */, ARM::VLD2LNdAsm_16, Convert__VecListTwoDHWordIndexed2_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListTwoDHWordIndexed, MCK_AlignedMemory }, 0},
  { 1586 /* vld2 */, ARM::VLD2LNqAsm_16, Convert__VecListTwoQHWordIndexed2_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListTwoQHWordIndexed, MCK_AlignedMemory }, 0},
  { 1586 /* vld2 */, ARM::VLD2DUPd32, Convert__VecListDPairAllLanes1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListDPairAllLanes, MCK_AlignedMemory }, 0},
  { 1586 /* vld2 */, ARM::VLD2d32, Convert__VecListDPair1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListDPair, MCK_AlignedMemory }, 0},
  { 1586 /* vld2 */, ARM::VLD2DUPd32x2, Convert__VecListDPairSpacedAllLanes1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListDPairSpacedAllLanes, MCK_AlignedMemory }, 0},
  { 1586 /* vld2 */, ARM::VLD2b32, Convert__VecListDPairSpaced1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListDPairSpaced, MCK_AlignedMemory }, 0},
  { 1586 /* vld2 */, ARM::VLD2q32, Convert__VecListFourD1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListFourD, MCK_AlignedMemory }, 0},
  { 1586 /* vld2 */, ARM::VLD2LNdAsm_32, Convert__VecListTwoDWordIndexed2_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListTwoDWordIndexed, MCK_AlignedMemory }, 0},
  { 1586 /* vld2 */, ARM::VLD2LNqAsm_32, Convert__VecListTwoQWordIndexed2_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListTwoQWordIndexed, MCK_AlignedMemory }, 0},
  { 1586 /* vld2 */, ARM::VLD2DUPd8, Convert__VecListDPairAllLanes1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListDPairAllLanes, MCK_AlignedMemory }, 0},
  { 1586 /* vld2 */, ARM::VLD2d8, Convert__VecListDPair1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListDPair, MCK_AlignedMemory }, 0},
  { 1586 /* vld2 */, ARM::VLD2DUPd8x2, Convert__VecListDPairSpacedAllLanes1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListDPairSpacedAllLanes, MCK_AlignedMemory }, 0},
  { 1586 /* vld2 */, ARM::VLD2b8, Convert__VecListDPairSpaced1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListDPairSpaced, MCK_AlignedMemory }, 0},
  { 1586 /* vld2 */, ARM::VLD2q8, Convert__VecListFourD1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListFourD, MCK_AlignedMemory }, 0},
  { 1586 /* vld2 */, ARM::VLD2LNdAsm_8, Convert__VecListTwoDByteIndexed2_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListTwoDByteIndexed, MCK_AlignedMemory }, 0},
  { 1586 /* vld2 */, ARM::VLD2DUPd16wb_fixed, ConvertCustom_cvtVLDwbFixed, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListDPairAllLanes, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 1586 /* vld2 */, ARM::VLD2DUPd16wb_register, ConvertCustom_cvtVLDwbRegister, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListDPairAllLanes, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 1586 /* vld2 */, ARM::VLD2d16wb_fixed, ConvertCustom_cvtVLDwbFixed, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListDPair, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 1586 /* vld2 */, ARM::VLD2d16wb_register, ConvertCustom_cvtVLDwbRegister, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListDPair, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 1586 /* vld2 */, ARM::VLD2DUPd16x2wb_fixed, ConvertCustom_cvtVLDwbFixed, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListDPairSpacedAllLanes, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 1586 /* vld2 */, ARM::VLD2DUPd16x2wb_register, ConvertCustom_cvtVLDwbRegister, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListDPairSpacedAllLanes, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 1586 /* vld2 */, ARM::VLD2b16wb_fixed, ConvertCustom_cvtVLDwbFixed, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListDPairSpaced, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 1586 /* vld2 */, ARM::VLD2b16wb_register, ConvertCustom_cvtVLDwbRegister, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListDPairSpaced, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 1586 /* vld2 */, ARM::VLD2q16wb_fixed, ConvertCustom_cvtVLDwbFixed, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListFourD, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 1586 /* vld2 */, ARM::VLD2q16wb_register, ConvertCustom_cvtVLDwbRegister, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListFourD, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 1586 /* vld2 */, ARM::VLD2LNdWB_fixed_Asm_16, Convert__VecListTwoDHWordIndexed2_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListTwoDHWordIndexed, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 1586 /* vld2 */, ARM::VLD2LNdWB_register_Asm_16, Convert__VecListTwoDHWordIndexed2_2__AlignedMemory2_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListTwoDHWordIndexed, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 1586 /* vld2 */, ARM::VLD2LNqWB_fixed_Asm_16, Convert__VecListTwoQHWordIndexed2_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListTwoQHWordIndexed, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 1586 /* vld2 */, ARM::VLD2LNqWB_register_Asm_16, Convert__VecListTwoQHWordIndexed2_2__AlignedMemory2_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListTwoQHWordIndexed, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 1586 /* vld2 */, ARM::VLD2DUPd32wb_fixed, ConvertCustom_cvtVLDwbFixed, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListDPairAllLanes, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 1586 /* vld2 */, ARM::VLD2DUPd32wb_register, ConvertCustom_cvtVLDwbRegister, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListDPairAllLanes, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 1586 /* vld2 */, ARM::VLD2d32wb_fixed, ConvertCustom_cvtVLDwbFixed, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListDPair, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 1586 /* vld2 */, ARM::VLD2d32wb_register, ConvertCustom_cvtVLDwbRegister, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListDPair, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 1586 /* vld2 */, ARM::VLD2DUPd32x2wb_fixed, ConvertCustom_cvtVLDwbFixed, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListDPairSpacedAllLanes, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 1586 /* vld2 */, ARM::VLD2DUPd32x2wb_register, ConvertCustom_cvtVLDwbRegister, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListDPairSpacedAllLanes, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 1586 /* vld2 */, ARM::VLD2b32wb_fixed, ConvertCustom_cvtVLDwbFixed, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListDPairSpaced, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 1586 /* vld2 */, ARM::VLD2b32wb_register, ConvertCustom_cvtVLDwbRegister, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListDPairSpaced, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 1586 /* vld2 */, ARM::VLD2q32wb_fixed, ConvertCustom_cvtVLDwbFixed, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListFourD, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 1586 /* vld2 */, ARM::VLD2q32wb_register, ConvertCustom_cvtVLDwbRegister, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListFourD, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 1586 /* vld2 */, ARM::VLD2LNdWB_fixed_Asm_32, Convert__VecListTwoDWordIndexed2_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListTwoDWordIndexed, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 1586 /* vld2 */, ARM::VLD2LNdWB_register_Asm_32, Convert__VecListTwoDWordIndexed2_2__AlignedMemory2_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListTwoDWordIndexed, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 1586 /* vld2 */, ARM::VLD2LNqWB_fixed_Asm_32, Convert__VecListTwoQWordIndexed2_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListTwoQWordIndexed, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 1586 /* vld2 */, ARM::VLD2LNqWB_register_Asm_32, Convert__VecListTwoQWordIndexed2_2__AlignedMemory2_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListTwoQWordIndexed, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 1586 /* vld2 */, ARM::VLD2DUPd8wb_fixed, ConvertCustom_cvtVLDwbFixed, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListDPairAllLanes, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 1586 /* vld2 */, ARM::VLD2DUPd8wb_register, ConvertCustom_cvtVLDwbRegister, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListDPairAllLanes, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 1586 /* vld2 */, ARM::VLD2d8wb_fixed, ConvertCustom_cvtVLDwbFixed, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListDPair, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 1586 /* vld2 */, ARM::VLD2d8wb_register, ConvertCustom_cvtVLDwbRegister, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListDPair, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 1586 /* vld2 */, ARM::VLD2DUPd8x2wb_fixed, ConvertCustom_cvtVLDwbFixed, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListDPairSpacedAllLanes, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 1586 /* vld2 */, ARM::VLD2DUPd8x2wb_register, ConvertCustom_cvtVLDwbRegister, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListDPairSpacedAllLanes, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 1586 /* vld2 */, ARM::VLD2b8wb_fixed, ConvertCustom_cvtVLDwbFixed, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListDPairSpaced, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 1586 /* vld2 */, ARM::VLD2b8wb_register, ConvertCustom_cvtVLDwbRegister, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListDPairSpaced, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 1586 /* vld2 */, ARM::VLD2q8wb_fixed, ConvertCustom_cvtVLDwbFixed, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListFourD, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 1586 /* vld2 */, ARM::VLD2q8wb_register, ConvertCustom_cvtVLDwbRegister, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListFourD, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 1586 /* vld2 */, ARM::VLD2LNdWB_fixed_Asm_8, Convert__VecListTwoDByteIndexed2_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListTwoDByteIndexed, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 1586 /* vld2 */, ARM::VLD2LNdWB_register_Asm_8, Convert__VecListTwoDByteIndexed2_2__AlignedMemory2_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListTwoDByteIndexed, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 1591 /* vld3 */, ARM::VLD3DUPdAsm_16, Convert__VecListThreeDAllLanes1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListThreeDAllLanes, MCK_AlignedMemory }, 0},
  { 1591 /* vld3 */, ARM::VLD3dAsm_16, Convert__VecListThreeD1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListThreeD, MCK_AlignedMemory }, 0},
  { 1591 /* vld3 */, ARM::VLD3LNdAsm_16, Convert__VecListThreeDHWordIndexed2_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListThreeDHWordIndexed, MCK_AlignedMemory }, 0},
  { 1591 /* vld3 */, ARM::VLD3DUPqAsm_16, Convert__VecListThreeQAllLanes1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListThreeQAllLanes, MCK_AlignedMemory }, 0},
  { 1591 /* vld3 */, ARM::VLD3qAsm_16, Convert__VecListThreeQ1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListThreeQ, MCK_AlignedMemory }, 0},
  { 1591 /* vld3 */, ARM::VLD3LNqAsm_16, Convert__VecListThreeQHWordIndexed2_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListThreeQHWordIndexed, MCK_AlignedMemory }, 0},
  { 1591 /* vld3 */, ARM::VLD3DUPdAsm_32, Convert__VecListThreeDAllLanes1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListThreeDAllLanes, MCK_AlignedMemory }, 0},
  { 1591 /* vld3 */, ARM::VLD3dAsm_32, Convert__VecListThreeD1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListThreeD, MCK_AlignedMemory }, 0},
  { 1591 /* vld3 */, ARM::VLD3LNdAsm_32, Convert__VecListThreeDWordIndexed2_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListThreeDWordIndexed, MCK_AlignedMemory }, 0},
  { 1591 /* vld3 */, ARM::VLD3DUPqAsm_32, Convert__VecListThreeQAllLanes1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListThreeQAllLanes, MCK_AlignedMemory }, 0},
  { 1591 /* vld3 */, ARM::VLD3qAsm_32, Convert__VecListThreeQ1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListThreeQ, MCK_AlignedMemory }, 0},
  { 1591 /* vld3 */, ARM::VLD3LNqAsm_32, Convert__VecListThreeQWordIndexed2_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListThreeQWordIndexed, MCK_AlignedMemory }, 0},
  { 1591 /* vld3 */, ARM::VLD3DUPdAsm_8, Convert__VecListThreeDAllLanes1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListThreeDAllLanes, MCK_AlignedMemory }, 0},
  { 1591 /* vld3 */, ARM::VLD3dAsm_8, Convert__VecListThreeD1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListThreeD, MCK_AlignedMemory }, 0},
  { 1591 /* vld3 */, ARM::VLD3LNdAsm_8, Convert__VecListThreeDByteIndexed2_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListThreeDByteIndexed, MCK_AlignedMemory }, 0},
  { 1591 /* vld3 */, ARM::VLD3DUPqAsm_8, Convert__VecListThreeQAllLanes1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListThreeQAllLanes, MCK_AlignedMemory }, 0},
  { 1591 /* vld3 */, ARM::VLD3qAsm_8, Convert__VecListThreeQ1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListThreeQ, MCK_AlignedMemory }, 0},
  { 1591 /* vld3 */, ARM::VLD3DUPdWB_fixed_Asm_16, Convert__VecListThreeDAllLanes1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListThreeDAllLanes, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 1591 /* vld3 */, ARM::VLD3DUPdWB_register_Asm_16, Convert__VecListThreeDAllLanes1_2__AlignedMemory2_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListThreeDAllLanes, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 1591 /* vld3 */, ARM::VLD3dWB_fixed_Asm_16, Convert__VecListThreeD1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListThreeD, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 1591 /* vld3 */, ARM::VLD3dWB_register_Asm_16, Convert__VecListThreeD1_2__AlignedMemory2_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListThreeD, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 1591 /* vld3 */, ARM::VLD3LNdWB_fixed_Asm_16, Convert__VecListThreeDHWordIndexed2_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListThreeDHWordIndexed, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 1591 /* vld3 */, ARM::VLD3LNdWB_register_Asm_16, Convert__VecListThreeDHWordIndexed2_2__AlignedMemory2_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListThreeDHWordIndexed, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 1591 /* vld3 */, ARM::VLD3DUPqWB_fixed_Asm_16, Convert__VecListThreeQAllLanes1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListThreeQAllLanes, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 1591 /* vld3 */, ARM::VLD3DUPqWB_register_Asm_16, Convert__VecListThreeQAllLanes1_2__AlignedMemory2_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListThreeQAllLanes, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 1591 /* vld3 */, ARM::VLD3qWB_fixed_Asm_16, Convert__VecListThreeQ1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListThreeQ, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 1591 /* vld3 */, ARM::VLD3qWB_register_Asm_16, Convert__VecListThreeQ1_2__AlignedMemory2_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListThreeQ, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 1591 /* vld3 */, ARM::VLD3LNqWB_fixed_Asm_16, Convert__VecListThreeQHWordIndexed2_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListThreeQHWordIndexed, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 1591 /* vld3 */, ARM::VLD3LNqWB_register_Asm_16, Convert__VecListThreeQHWordIndexed2_2__AlignedMemory2_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListThreeQHWordIndexed, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 1591 /* vld3 */, ARM::VLD3DUPdWB_fixed_Asm_32, Convert__VecListThreeDAllLanes1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListThreeDAllLanes, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 1591 /* vld3 */, ARM::VLD3DUPdWB_register_Asm_32, Convert__VecListThreeDAllLanes1_2__AlignedMemory2_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListThreeDAllLanes, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 1591 /* vld3 */, ARM::VLD3dWB_fixed_Asm_32, Convert__VecListThreeD1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListThreeD, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 1591 /* vld3 */, ARM::VLD3dWB_register_Asm_32, Convert__VecListThreeD1_2__AlignedMemory2_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListThreeD, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 1591 /* vld3 */, ARM::VLD3LNdWB_fixed_Asm_32, Convert__VecListThreeDWordIndexed2_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListThreeDWordIndexed, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 1591 /* vld3 */, ARM::VLD3LNdWB_register_Asm_32, Convert__VecListThreeDWordIndexed2_2__AlignedMemory2_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListThreeDWordIndexed, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 1591 /* vld3 */, ARM::VLD3DUPqWB_fixed_Asm_32, Convert__VecListThreeQAllLanes1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListThreeQAllLanes, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 1591 /* vld3 */, ARM::VLD3DUPqWB_register_Asm_32, Convert__VecListThreeQAllLanes1_2__AlignedMemory2_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListThreeQAllLanes, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 1591 /* vld3 */, ARM::VLD3qWB_fixed_Asm_32, Convert__VecListThreeQ1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListThreeQ, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 1591 /* vld3 */, ARM::VLD3qWB_register_Asm_32, Convert__VecListThreeQ1_2__AlignedMemory2_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListThreeQ, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 1591 /* vld3 */, ARM::VLD3LNqWB_fixed_Asm_32, Convert__VecListThreeQWordIndexed2_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListThreeQWordIndexed, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 1591 /* vld3 */, ARM::VLD3LNqWB_register_Asm_32, Convert__VecListThreeQWordIndexed2_2__AlignedMemory2_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListThreeQWordIndexed, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 1591 /* vld3 */, ARM::VLD3DUPdWB_fixed_Asm_8, Convert__VecListThreeDAllLanes1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListThreeDAllLanes, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 1591 /* vld3 */, ARM::VLD3DUPdWB_register_Asm_8, Convert__VecListThreeDAllLanes1_2__AlignedMemory2_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListThreeDAllLanes, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 1591 /* vld3 */, ARM::VLD3dWB_fixed_Asm_8, Convert__VecListThreeD1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListThreeD, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 1591 /* vld3 */, ARM::VLD3dWB_register_Asm_8, Convert__VecListThreeD1_2__AlignedMemory2_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListThreeD, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 1591 /* vld3 */, ARM::VLD3LNdWB_fixed_Asm_8, Convert__VecListThreeDByteIndexed2_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListThreeDByteIndexed, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 1591 /* vld3 */, ARM::VLD3LNdWB_register_Asm_8, Convert__VecListThreeDByteIndexed2_2__AlignedMemory2_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListThreeDByteIndexed, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 1591 /* vld3 */, ARM::VLD3DUPqWB_fixed_Asm_8, Convert__VecListThreeQAllLanes1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListThreeQAllLanes, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 1591 /* vld3 */, ARM::VLD3DUPqWB_register_Asm_8, Convert__VecListThreeQAllLanes1_2__AlignedMemory2_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListThreeQAllLanes, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 1591 /* vld3 */, ARM::VLD3qWB_fixed_Asm_8, Convert__VecListThreeQ1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListThreeQ, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 1591 /* vld3 */, ARM::VLD3qWB_register_Asm_8, Convert__VecListThreeQ1_2__AlignedMemory2_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListThreeQ, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 1591 /* vld3 */, ARM::VLD3d16, Convert__Reg1_3__Reg1_4__Reg1_5__AlignedMemory2_7__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK__123_, MCK_DPR, MCK_DPR, MCK_DPR, MCK__125_, MCK_AlignedMemory }, 0},
  { 1591 /* vld3 */, ARM::VLD3q16, Convert__Reg1_3__Reg1_4__Reg1_5__AlignedMemory2_7__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK__123_, MCK_DPR, MCK_DPR, MCK_DPR, MCK__125_, MCK_AlignedMemory }, 0},
  { 1591 /* vld3 */, ARM::VLD3d32, Convert__Reg1_3__Reg1_4__Reg1_5__AlignedMemory2_7__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK__123_, MCK_DPR, MCK_DPR, MCK_DPR, MCK__125_, MCK_AlignedMemory }, 0},
  { 1591 /* vld3 */, ARM::VLD3q32, Convert__Reg1_3__Reg1_4__Reg1_5__AlignedMemory2_7__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK__123_, MCK_DPR, MCK_DPR, MCK_DPR, MCK__125_, MCK_AlignedMemory }, 0},
  { 1591 /* vld3 */, ARM::VLD3d8, Convert__Reg1_3__Reg1_4__Reg1_5__AlignedMemory2_7__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK__123_, MCK_DPR, MCK_DPR, MCK_DPR, MCK__125_, MCK_AlignedMemory }, 0},
  { 1591 /* vld3 */, ARM::VLD3q8, Convert__Reg1_3__Reg1_4__Reg1_5__AlignedMemory2_7__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK__123_, MCK_DPR, MCK_DPR, MCK_DPR, MCK__125_, MCK_AlignedMemory }, 0},
  { 1591 /* vld3 */, ARM::VLD3d16_UPD, Convert__Reg1_3__Reg1_4__Reg1_5__AlignedMemory1_7__Tie3__Imm1_8__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK__123_, MCK_DPR, MCK_DPR, MCK_DPR, MCK__125_, MCK_AlignedMemory, MCK_Imm }, 0},
  { 1591 /* vld3 */, ARM::VLD3q16_UPD, Convert__Reg1_3__Reg1_4__Reg1_5__AlignedMemory1_7__Tie3__Imm1_8__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK__123_, MCK_DPR, MCK_DPR, MCK_DPR, MCK__125_, MCK_AlignedMemory, MCK_Imm }, 0},
  { 1591 /* vld3 */, ARM::VLD3d32_UPD, Convert__Reg1_3__Reg1_4__Reg1_5__AlignedMemory1_7__Tie3__Imm1_8__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK__123_, MCK_DPR, MCK_DPR, MCK_DPR, MCK__125_, MCK_AlignedMemory, MCK_Imm }, 0},
  { 1591 /* vld3 */, ARM::VLD3q32_UPD, Convert__Reg1_3__Reg1_4__Reg1_5__AlignedMemory1_7__Tie3__Imm1_8__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK__123_, MCK_DPR, MCK_DPR, MCK_DPR, MCK__125_, MCK_AlignedMemory, MCK_Imm }, 0},
  { 1591 /* vld3 */, ARM::VLD3d8_UPD, Convert__Reg1_3__Reg1_4__Reg1_5__AlignedMemory1_7__Tie3__Imm1_8__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK__123_, MCK_DPR, MCK_DPR, MCK_DPR, MCK__125_, MCK_AlignedMemory, MCK_Imm }, 0},
  { 1591 /* vld3 */, ARM::VLD3q8_UPD, Convert__Reg1_3__Reg1_4__Reg1_5__AlignedMemory1_7__Tie3__Imm1_8__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK__123_, MCK_DPR, MCK_DPR, MCK_DPR, MCK__125_, MCK_AlignedMemory, MCK_Imm }, 0},
  { 1591 /* vld3 */, ARM::VLD3DUPd16, Convert__Reg1_3__Reg1_6__Reg1_9__AlignedMemory2_13__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK__123_, MCK_DPR, MCK__91_, MCK__93_, MCK_DPR, MCK__91_, MCK__93_, MCK_DPR, MCK__91_, MCK__93_, MCK__125_, MCK_AlignedMemory }, 0},
  { 1591 /* vld3 */, ARM::VLD3DUPq16, Convert__Reg1_3__Reg1_6__Reg1_9__AlignedMemory2_13__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK__123_, MCK_DPR, MCK__91_, MCK__93_, MCK_DPR, MCK__91_, MCK__93_, MCK_DPR, MCK__91_, MCK__93_, MCK__125_, MCK_AlignedMemory }, 0},
  { 1591 /* vld3 */, ARM::VLD3DUPd32, Convert__Reg1_3__Reg1_6__Reg1_9__AlignedMemory2_13__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK__123_, MCK_DPR, MCK__91_, MCK__93_, MCK_DPR, MCK__91_, MCK__93_, MCK_DPR, MCK__91_, MCK__93_, MCK__125_, MCK_AlignedMemory }, 0},
  { 1591 /* vld3 */, ARM::VLD3DUPq32, Convert__Reg1_3__Reg1_6__Reg1_9__AlignedMemory2_13__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK__123_, MCK_DPR, MCK__91_, MCK__93_, MCK_DPR, MCK__91_, MCK__93_, MCK_DPR, MCK__91_, MCK__93_, MCK__125_, MCK_AlignedMemory }, 0},
  { 1591 /* vld3 */, ARM::VLD3DUPd8, Convert__Reg1_3__Reg1_6__Reg1_9__AlignedMemory2_13__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK__123_, MCK_DPR, MCK__91_, MCK__93_, MCK_DPR, MCK__91_, MCK__93_, MCK_DPR, MCK__91_, MCK__93_, MCK__125_, MCK_AlignedMemory }, 0},
  { 1591 /* vld3 */, ARM::VLD3DUPq8, Convert__Reg1_3__Reg1_6__Reg1_9__AlignedMemory2_13__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK__123_, MCK_DPR, MCK__91_, MCK__93_, MCK_DPR, MCK__91_, MCK__93_, MCK_DPR, MCK__91_, MCK__93_, MCK__125_, MCK_AlignedMemory }, 0},
  { 1591 /* vld3 */, ARM::VLD3DUPd16_UPD, Convert__Reg1_3__Reg1_6__Reg1_9__AlignedMemory1_13__Tie3__Imm1_14__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK__123_, MCK_DPR, MCK__91_, MCK__93_, MCK_DPR, MCK__91_, MCK__93_, MCK_DPR, MCK__91_, MCK__93_, MCK__125_, MCK_AlignedMemory, MCK_Imm }, 0},
  { 1591 /* vld3 */, ARM::VLD3DUPq16_UPD, Convert__Reg1_3__Reg1_6__Reg1_9__AlignedMemory1_13__Tie3__Imm1_14__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK__123_, MCK_DPR, MCK__91_, MCK__93_, MCK_DPR, MCK__91_, MCK__93_, MCK_DPR, MCK__91_, MCK__93_, MCK__125_, MCK_AlignedMemory, MCK_Imm }, 0},
  { 1591 /* vld3 */, ARM::VLD3DUPd32_UPD, Convert__Reg1_3__Reg1_6__Reg1_9__AlignedMemory1_13__Tie3__Imm1_14__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK__123_, MCK_DPR, MCK__91_, MCK__93_, MCK_DPR, MCK__91_, MCK__93_, MCK_DPR, MCK__91_, MCK__93_, MCK__125_, MCK_AlignedMemory, MCK_Imm }, 0},
  { 1591 /* vld3 */, ARM::VLD3DUPq32_UPD, Convert__Reg1_3__Reg1_6__Reg1_9__AlignedMemory1_13__Tie3__Imm1_14__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK__123_, MCK_DPR, MCK__91_, MCK__93_, MCK_DPR, MCK__91_, MCK__93_, MCK_DPR, MCK__91_, MCK__93_, MCK__125_, MCK_AlignedMemory, MCK_Imm }, 0},
  { 1591 /* vld3 */, ARM::VLD3DUPd8_UPD, Convert__Reg1_3__Reg1_6__Reg1_9__AlignedMemory1_13__Tie3__Imm1_14__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK__123_, MCK_DPR, MCK__91_, MCK__93_, MCK_DPR, MCK__91_, MCK__93_, MCK_DPR, MCK__91_, MCK__93_, MCK__125_, MCK_AlignedMemory, MCK_Imm }, 0},
  { 1591 /* vld3 */, ARM::VLD3DUPq8_UPD, Convert__Reg1_3__Reg1_6__Reg1_9__AlignedMemory1_13__Tie3__Imm1_14__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK__123_, MCK_DPR, MCK__91_, MCK__93_, MCK_DPR, MCK__91_, MCK__93_, MCK_DPR, MCK__91_, MCK__93_, MCK__125_, MCK_AlignedMemory, MCK_Imm }, 0},
  { 1596 /* vld4 */, ARM::VLD4DUPdAsm_16, Convert__VecListFourDAllLanes1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListFourDAllLanes, MCK_AlignedMemory }, 0},
  { 1596 /* vld4 */, ARM::VLD4dAsm_16, Convert__VecListFourD1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListFourD, MCK_AlignedMemory }, 0},
  { 1596 /* vld4 */, ARM::VLD4LNdAsm_16, Convert__VecListFourDHWordIndexed2_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListFourDHWordIndexed, MCK_AlignedMemory }, 0},
  { 1596 /* vld4 */, ARM::VLD4DUPqAsm_16, Convert__VecListFourQAllLanes1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListFourQAllLanes, MCK_AlignedMemory }, 0},
  { 1596 /* vld4 */, ARM::VLD4qAsm_16, Convert__VecListFourQ1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListFourQ, MCK_AlignedMemory }, 0},
  { 1596 /* vld4 */, ARM::VLD4LNqAsm_16, Convert__VecListFourQHWordIndexed2_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListFourQHWordIndexed, MCK_AlignedMemory }, 0},
  { 1596 /* vld4 */, ARM::VLD4DUPdAsm_32, Convert__VecListFourDAllLanes1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListFourDAllLanes, MCK_AlignedMemory }, 0},
  { 1596 /* vld4 */, ARM::VLD4dAsm_32, Convert__VecListFourD1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListFourD, MCK_AlignedMemory }, 0},
  { 1596 /* vld4 */, ARM::VLD4LNdAsm_32, Convert__VecListFourDWordIndexed2_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListFourDWordIndexed, MCK_AlignedMemory }, 0},
  { 1596 /* vld4 */, ARM::VLD4DUPqAsm_32, Convert__VecListFourQAllLanes1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListFourQAllLanes, MCK_AlignedMemory }, 0},
  { 1596 /* vld4 */, ARM::VLD4qAsm_32, Convert__VecListFourQ1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListFourQ, MCK_AlignedMemory }, 0},
  { 1596 /* vld4 */, ARM::VLD4LNqAsm_32, Convert__VecListFourQWordIndexed2_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListFourQWordIndexed, MCK_AlignedMemory }, 0},
  { 1596 /* vld4 */, ARM::VLD4DUPdAsm_8, Convert__VecListFourDAllLanes1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListFourDAllLanes, MCK_AlignedMemory }, 0},
  { 1596 /* vld4 */, ARM::VLD4dAsm_8, Convert__VecListFourD1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListFourD, MCK_AlignedMemory }, 0},
  { 1596 /* vld4 */, ARM::VLD4LNdAsm_8, Convert__VecListFourDByteIndexed2_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListFourDByteIndexed, MCK_AlignedMemory }, 0},
  { 1596 /* vld4 */, ARM::VLD4DUPqAsm_8, Convert__VecListFourQAllLanes1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListFourQAllLanes, MCK_AlignedMemory }, 0},
  { 1596 /* vld4 */, ARM::VLD4qAsm_8, Convert__VecListFourQ1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListFourQ, MCK_AlignedMemory }, 0},
  { 1596 /* vld4 */, ARM::VLD4DUPdWB_fixed_Asm_16, Convert__VecListFourDAllLanes1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListFourDAllLanes, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 1596 /* vld4 */, ARM::VLD4DUPdWB_register_Asm_16, Convert__VecListFourDAllLanes1_2__AlignedMemory2_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListFourDAllLanes, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 1596 /* vld4 */, ARM::VLD4dWB_fixed_Asm_16, Convert__VecListFourD1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListFourD, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 1596 /* vld4 */, ARM::VLD4dWB_register_Asm_16, Convert__VecListFourD1_2__AlignedMemory2_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListFourD, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 1596 /* vld4 */, ARM::VLD4LNdWB_fixed_Asm_16, Convert__VecListFourDHWordIndexed2_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListFourDHWordIndexed, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 1596 /* vld4 */, ARM::VLD4LNdWB_register_Asm_16, Convert__VecListFourDHWordIndexed2_2__AlignedMemory2_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListFourDHWordIndexed, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 1596 /* vld4 */, ARM::VLD4DUPqWB_fixed_Asm_16, Convert__VecListFourQAllLanes1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListFourQAllLanes, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 1596 /* vld4 */, ARM::VLD4DUPqWB_register_Asm_16, Convert__VecListFourQAllLanes1_2__AlignedMemory2_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListFourQAllLanes, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 1596 /* vld4 */, ARM::VLD4qWB_fixed_Asm_16, Convert__VecListFourQ1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListFourQ, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 1596 /* vld4 */, ARM::VLD4qWB_register_Asm_16, Convert__VecListFourQ1_2__AlignedMemory2_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListFourQ, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 1596 /* vld4 */, ARM::VLD4LNqWB_fixed_Asm_16, Convert__VecListFourQHWordIndexed2_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListFourQHWordIndexed, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 1596 /* vld4 */, ARM::VLD4LNqWB_register_Asm_16, Convert__VecListFourQHWordIndexed2_2__AlignedMemory2_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListFourQHWordIndexed, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 1596 /* vld4 */, ARM::VLD4DUPdWB_fixed_Asm_32, Convert__VecListFourDAllLanes1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListFourDAllLanes, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 1596 /* vld4 */, ARM::VLD4DUPdWB_register_Asm_32, Convert__VecListFourDAllLanes1_2__AlignedMemory2_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListFourDAllLanes, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 1596 /* vld4 */, ARM::VLD4dWB_fixed_Asm_32, Convert__VecListFourD1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListFourD, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 1596 /* vld4 */, ARM::VLD4dWB_register_Asm_32, Convert__VecListFourD1_2__AlignedMemory2_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListFourD, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 1596 /* vld4 */, ARM::VLD4LNdWB_fixed_Asm_32, Convert__VecListFourDWordIndexed2_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListFourDWordIndexed, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 1596 /* vld4 */, ARM::VLD4LNdWB_register_Asm_32, Convert__VecListFourDWordIndexed2_2__AlignedMemory2_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListFourDWordIndexed, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 1596 /* vld4 */, ARM::VLD4DUPqWB_fixed_Asm_32, Convert__VecListFourQAllLanes1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListFourQAllLanes, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 1596 /* vld4 */, ARM::VLD4DUPqWB_register_Asm_32, Convert__VecListFourQAllLanes1_2__AlignedMemory2_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListFourQAllLanes, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 1596 /* vld4 */, ARM::VLD4qWB_fixed_Asm_32, Convert__VecListFourQ1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListFourQ, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 1596 /* vld4 */, ARM::VLD4qWB_register_Asm_32, Convert__VecListFourQ1_2__AlignedMemory2_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListFourQ, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 1596 /* vld4 */, ARM::VLD4LNqWB_fixed_Asm_32, Convert__VecListFourQWordIndexed2_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListFourQWordIndexed, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 1596 /* vld4 */, ARM::VLD4LNqWB_register_Asm_32, Convert__VecListFourQWordIndexed2_2__AlignedMemory2_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListFourQWordIndexed, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 1596 /* vld4 */, ARM::VLD4DUPdWB_fixed_Asm_8, Convert__VecListFourDAllLanes1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListFourDAllLanes, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 1596 /* vld4 */, ARM::VLD4DUPdWB_register_Asm_8, Convert__VecListFourDAllLanes1_2__AlignedMemory2_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListFourDAllLanes, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 1596 /* vld4 */, ARM::VLD4dWB_fixed_Asm_8, Convert__VecListFourD1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListFourD, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 1596 /* vld4 */, ARM::VLD4dWB_register_Asm_8, Convert__VecListFourD1_2__AlignedMemory2_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListFourD, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 1596 /* vld4 */, ARM::VLD4LNdWB_fixed_Asm_8, Convert__VecListFourDByteIndexed2_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListFourDByteIndexed, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 1596 /* vld4 */, ARM::VLD4LNdWB_register_Asm_8, Convert__VecListFourDByteIndexed2_2__AlignedMemory2_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListFourDByteIndexed, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 1596 /* vld4 */, ARM::VLD4DUPqWB_fixed_Asm_8, Convert__VecListFourQAllLanes1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListFourQAllLanes, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 1596 /* vld4 */, ARM::VLD4DUPqWB_register_Asm_8, Convert__VecListFourQAllLanes1_2__AlignedMemory2_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListFourQAllLanes, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 1596 /* vld4 */, ARM::VLD4qWB_fixed_Asm_8, Convert__VecListFourQ1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListFourQ, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 1596 /* vld4 */, ARM::VLD4qWB_register_Asm_8, Convert__VecListFourQ1_2__AlignedMemory2_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListFourQ, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 1596 /* vld4 */, ARM::VLD4d16, Convert__Reg1_3__Reg1_4__Reg1_5__Reg1_6__AlignedMemory2_8__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK__123_, MCK_DPR, MCK_DPR, MCK_DPR, MCK_DPR, MCK__125_, MCK_AlignedMemory }, 0},
  { 1596 /* vld4 */, ARM::VLD4q16, Convert__Reg1_3__Reg1_4__Reg1_5__Reg1_6__AlignedMemory2_8__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK__123_, MCK_DPR, MCK_DPR, MCK_DPR, MCK_DPR, MCK__125_, MCK_AlignedMemory }, 0},
  { 1596 /* vld4 */, ARM::VLD4d32, Convert__Reg1_3__Reg1_4__Reg1_5__Reg1_6__AlignedMemory2_8__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK__123_, MCK_DPR, MCK_DPR, MCK_DPR, MCK_DPR, MCK__125_, MCK_AlignedMemory }, 0},
  { 1596 /* vld4 */, ARM::VLD4q32, Convert__Reg1_3__Reg1_4__Reg1_5__Reg1_6__AlignedMemory2_8__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK__123_, MCK_DPR, MCK_DPR, MCK_DPR, MCK_DPR, MCK__125_, MCK_AlignedMemory }, 0},
  { 1596 /* vld4 */, ARM::VLD4d8, Convert__Reg1_3__Reg1_4__Reg1_5__Reg1_6__AlignedMemory2_8__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK__123_, MCK_DPR, MCK_DPR, MCK_DPR, MCK_DPR, MCK__125_, MCK_AlignedMemory }, 0},
  { 1596 /* vld4 */, ARM::VLD4q8, Convert__Reg1_3__Reg1_4__Reg1_5__Reg1_6__AlignedMemory2_8__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK__123_, MCK_DPR, MCK_DPR, MCK_DPR, MCK_DPR, MCK__125_, MCK_AlignedMemory }, 0},
  { 1596 /* vld4 */, ARM::VLD4d16_UPD, Convert__Reg1_3__Reg1_4__Reg1_5__Reg1_6__AlignedMemory1_8__Tie4__Imm1_9__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK__123_, MCK_DPR, MCK_DPR, MCK_DPR, MCK_DPR, MCK__125_, MCK_AlignedMemory, MCK_Imm }, 0},
  { 1596 /* vld4 */, ARM::VLD4q16_UPD, Convert__Reg1_3__Reg1_4__Reg1_5__Reg1_6__AlignedMemory1_8__Tie4__Imm1_9__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK__123_, MCK_DPR, MCK_DPR, MCK_DPR, MCK_DPR, MCK__125_, MCK_AlignedMemory, MCK_Imm }, 0},
  { 1596 /* vld4 */, ARM::VLD4d32_UPD, Convert__Reg1_3__Reg1_4__Reg1_5__Reg1_6__AlignedMemory1_8__Tie4__Imm1_9__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK__123_, MCK_DPR, MCK_DPR, MCK_DPR, MCK_DPR, MCK__125_, MCK_AlignedMemory, MCK_Imm }, 0},
  { 1596 /* vld4 */, ARM::VLD4q32_UPD, Convert__Reg1_3__Reg1_4__Reg1_5__Reg1_6__AlignedMemory1_8__Tie4__Imm1_9__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK__123_, MCK_DPR, MCK_DPR, MCK_DPR, MCK_DPR, MCK__125_, MCK_AlignedMemory, MCK_Imm }, 0},
  { 1596 /* vld4 */, ARM::VLD4d8_UPD, Convert__Reg1_3__Reg1_4__Reg1_5__Reg1_6__AlignedMemory1_8__Tie4__Imm1_9__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK__123_, MCK_DPR, MCK_DPR, MCK_DPR, MCK_DPR, MCK__125_, MCK_AlignedMemory, MCK_Imm }, 0},
  { 1596 /* vld4 */, ARM::VLD4q8_UPD, Convert__Reg1_3__Reg1_4__Reg1_5__Reg1_6__AlignedMemory1_8__Tie4__Imm1_9__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK__123_, MCK_DPR, MCK_DPR, MCK_DPR, MCK_DPR, MCK__125_, MCK_AlignedMemory, MCK_Imm }, 0},
  { 1596 /* vld4 */, ARM::VLD4DUPd16, Convert__Reg1_3__Reg1_6__Reg1_9__Reg1_12__AlignedMemory2_16__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK__123_, MCK_DPR, MCK__91_, MCK__93_, MCK_DPR, MCK__91_, MCK__93_, MCK_DPR, MCK__91_, MCK__93_, MCK_DPR, MCK__91_, MCK__93_, MCK__125_, MCK_AlignedMemory }, 0},
  { 1596 /* vld4 */, ARM::VLD4DUPq16, Convert__Reg1_3__Reg1_6__Reg1_9__Reg1_12__AlignedMemory2_16__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK__123_, MCK_DPR, MCK__91_, MCK__93_, MCK_DPR, MCK__91_, MCK__93_, MCK_DPR, MCK__91_, MCK__93_, MCK_DPR, MCK__91_, MCK__93_, MCK__125_, MCK_AlignedMemory }, 0},
  { 1596 /* vld4 */, ARM::VLD4DUPd32, Convert__Reg1_3__Reg1_6__Reg1_9__Reg1_12__AlignedMemory2_16__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK__123_, MCK_DPR, MCK__91_, MCK__93_, MCK_DPR, MCK__91_, MCK__93_, MCK_DPR, MCK__91_, MCK__93_, MCK_DPR, MCK__91_, MCK__93_, MCK__125_, MCK_AlignedMemory }, 0},
  { 1596 /* vld4 */, ARM::VLD4DUPq32, Convert__Reg1_3__Reg1_6__Reg1_9__Reg1_12__AlignedMemory2_16__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK__123_, MCK_DPR, MCK__91_, MCK__93_, MCK_DPR, MCK__91_, MCK__93_, MCK_DPR, MCK__91_, MCK__93_, MCK_DPR, MCK__91_, MCK__93_, MCK__125_, MCK_AlignedMemory }, 0},
  { 1596 /* vld4 */, ARM::VLD4DUPd8, Convert__Reg1_3__Reg1_6__Reg1_9__Reg1_12__AlignedMemory2_16__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK__123_, MCK_DPR, MCK__91_, MCK__93_, MCK_DPR, MCK__91_, MCK__93_, MCK_DPR, MCK__91_, MCK__93_, MCK_DPR, MCK__91_, MCK__93_, MCK__125_, MCK_AlignedMemory }, 0},
  { 1596 /* vld4 */, ARM::VLD4DUPq8, Convert__Reg1_3__Reg1_6__Reg1_9__Reg1_12__AlignedMemory2_16__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK__123_, MCK_DPR, MCK__91_, MCK__93_, MCK_DPR, MCK__91_, MCK__93_, MCK_DPR, MCK__91_, MCK__93_, MCK_DPR, MCK__91_, MCK__93_, MCK__125_, MCK_AlignedMemory }, 0},
  { 1596 /* vld4 */, ARM::VLD4DUPd16_UPD, Convert__Reg1_3__Reg1_6__Reg1_9__Reg1_12__AlignedMemory1_16__Tie4__Imm1_17__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK__123_, MCK_DPR, MCK__91_, MCK__93_, MCK_DPR, MCK__91_, MCK__93_, MCK_DPR, MCK__91_, MCK__93_, MCK_DPR, MCK__91_, MCK__93_, MCK__125_, MCK_AlignedMemory, MCK_Imm }, 0},
  { 1596 /* vld4 */, ARM::VLD4DUPq16_UPD, Convert__Reg1_3__Reg1_6__Reg1_9__Reg1_12__AlignedMemory1_16__Tie4__Imm1_17__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK__123_, MCK_DPR, MCK__91_, MCK__93_, MCK_DPR, MCK__91_, MCK__93_, MCK_DPR, MCK__91_, MCK__93_, MCK_DPR, MCK__91_, MCK__93_, MCK__125_, MCK_AlignedMemory, MCK_Imm }, 0},
  { 1596 /* vld4 */, ARM::VLD4DUPd32_UPD, Convert__Reg1_3__Reg1_6__Reg1_9__Reg1_12__AlignedMemory1_16__Tie4__Imm1_17__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK__123_, MCK_DPR, MCK__91_, MCK__93_, MCK_DPR, MCK__91_, MCK__93_, MCK_DPR, MCK__91_, MCK__93_, MCK_DPR, MCK__91_, MCK__93_, MCK__125_, MCK_AlignedMemory, MCK_Imm }, 0},
  { 1596 /* vld4 */, ARM::VLD4DUPq32_UPD, Convert__Reg1_3__Reg1_6__Reg1_9__Reg1_12__AlignedMemory1_16__Tie4__Imm1_17__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK__123_, MCK_DPR, MCK__91_, MCK__93_, MCK_DPR, MCK__91_, MCK__93_, MCK_DPR, MCK__91_, MCK__93_, MCK_DPR, MCK__91_, MCK__93_, MCK__125_, MCK_AlignedMemory, MCK_Imm }, 0},
  { 1596 /* vld4 */, ARM::VLD4DUPd8_UPD, Convert__Reg1_3__Reg1_6__Reg1_9__Reg1_12__AlignedMemory1_16__Tie4__Imm1_17__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK__123_, MCK_DPR, MCK__91_, MCK__93_, MCK_DPR, MCK__91_, MCK__93_, MCK_DPR, MCK__91_, MCK__93_, MCK_DPR, MCK__91_, MCK__93_, MCK__125_, MCK_AlignedMemory, MCK_Imm }, 0},
  { 1596 /* vld4 */, ARM::VLD4DUPq8_UPD, Convert__Reg1_3__Reg1_6__Reg1_9__Reg1_12__AlignedMemory1_16__Tie4__Imm1_17__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK__123_, MCK_DPR, MCK__91_, MCK__93_, MCK_DPR, MCK__91_, MCK__93_, MCK_DPR, MCK__91_, MCK__93_, MCK_DPR, MCK__91_, MCK__93_, MCK__125_, MCK_AlignedMemory, MCK_Imm }, 0},
  { 1601 /* vldmdb */, ARM::VLDMDDB_UPD, Convert__Reg1_1__Tie0__CondCode2_0__DPRRegList1_3, Feature_HasVFP2, { MCK_CondCode, MCK_GPR, MCK__EXCLAIM_, MCK_DPRRegList }, 0},
  { 1601 /* vldmdb */, ARM::VLDMSDB_UPD, Convert__Reg1_1__Tie0__CondCode2_0__SPRRegList1_3, Feature_HasVFP2, { MCK_CondCode, MCK_GPR, MCK__EXCLAIM_, MCK_SPRRegList }, 0},
  { 1608 /* vldmia */, ARM::VLDMDIA, Convert__Reg1_1__CondCode2_0__DPRRegList1_2, Feature_HasVFP2, { MCK_CondCode, MCK_GPR, MCK_DPRRegList }, 0},
  { 1608 /* vldmia */, ARM::VLDMSIA, Convert__Reg1_1__CondCode2_0__SPRRegList1_2, Feature_HasVFP2, { MCK_CondCode, MCK_GPR, MCK_SPRRegList }, 0},
  { 1608 /* vldmia */, ARM::VLDMDIA_UPD, Convert__Reg1_1__Tie0__CondCode2_0__DPRRegList1_3, Feature_HasVFP2, { MCK_CondCode, MCK_GPR, MCK__EXCLAIM_, MCK_DPRRegList }, 0},
  { 1608 /* vldmia */, ARM::VLDMSIA_UPD, Convert__Reg1_1__Tie0__CondCode2_0__SPRRegList1_3, Feature_HasVFP2, { MCK_CondCode, MCK_GPR, MCK__EXCLAIM_, MCK_SPRRegList }, 0},
  { 1615 /* vldr */, ARM::VLDRS, Convert__Reg1_1__AddrMode52_2__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK_SPR, MCK_AddrMode5 }, 0},
  { 1615 /* vldr */, ARM::VLDRD, Convert__Reg1_1__AddrMode52_2__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK_DPR, MCK_AddrMode5 }, 0},
  { 1615 /* vldr */, ARM::VLDRS, Convert__Reg1_2__AddrMode52_3__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_32, MCK_SPR, MCK_AddrMode5 }, 0},
  { 1615 /* vldr */, ARM::VLDRD, Convert__Reg1_2__AddrMode52_3__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_64, MCK_DPR, MCK_AddrMode5 }, 0},
  { 1620 /* vmax */, ARM::VMAXfd, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_DPR, MCK_DPR }, 0},
  { 1620 /* vmax */, ARM::VMAXfq, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_QPR, MCK_QPR }, 0},
  { 1620 /* vmax */, ARM::VMAXsv4i16, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_DPR, MCK_DPR }, 0},
  { 1620 /* vmax */, ARM::VMAXsv8i16, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_QPR, MCK_QPR }, 0},
  { 1620 /* vmax */, ARM::VMAXsv2i32, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_DPR, MCK_DPR }, 0},
  { 1620 /* vmax */, ARM::VMAXsv4i32, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_QPR, MCK_QPR }, 0},
  { 1620 /* vmax */, ARM::VMAXsv8i8, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_DPR, MCK_DPR }, 0},
  { 1620 /* vmax */, ARM::VMAXsv16i8, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_QPR, MCK_QPR }, 0},
  { 1620 /* vmax */, ARM::VMAXuv4i16, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_DPR, MCK_DPR }, 0},
  { 1620 /* vmax */, ARM::VMAXuv8i16, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_QPR, MCK_QPR }, 0},
  { 1620 /* vmax */, ARM::VMAXuv2i32, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_DPR, MCK_DPR }, 0},
  { 1620 /* vmax */, ARM::VMAXuv4i32, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_QPR, MCK_QPR }, 0},
  { 1620 /* vmax */, ARM::VMAXuv8i8, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_DPR, MCK_DPR }, 0},
  { 1620 /* vmax */, ARM::VMAXuv16i8, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_QPR, MCK_QPR }, 0},
  { 1620 /* vmax */, ARM::VMAXfd, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1620 /* vmax */, ARM::VMAXfq, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1620 /* vmax */, ARM::VMAXsv4i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1620 /* vmax */, ARM::VMAXsv8i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1620 /* vmax */, ARM::VMAXsv2i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1620 /* vmax */, ARM::VMAXsv4i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1620 /* vmax */, ARM::VMAXsv8i8, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1620 /* vmax */, ARM::VMAXsv16i8, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1620 /* vmax */, ARM::VMAXuv4i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1620 /* vmax */, ARM::VMAXuv8i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1620 /* vmax */, ARM::VMAXuv2i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1620 /* vmax */, ARM::VMAXuv4i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1620 /* vmax */, ARM::VMAXuv8i8, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1620 /* vmax */, ARM::VMAXuv16i8, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1625 /* vmin */, ARM::VMINfd, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_DPR, MCK_DPR }, 0},
  { 1625 /* vmin */, ARM::VMINfq, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_QPR, MCK_QPR }, 0},
  { 1625 /* vmin */, ARM::VMINsv4i16, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_DPR, MCK_DPR }, 0},
  { 1625 /* vmin */, ARM::VMINsv8i16, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_QPR, MCK_QPR }, 0},
  { 1625 /* vmin */, ARM::VMINsv2i32, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_DPR, MCK_DPR }, 0},
  { 1625 /* vmin */, ARM::VMINsv4i32, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_QPR, MCK_QPR }, 0},
  { 1625 /* vmin */, ARM::VMINsv8i8, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_DPR, MCK_DPR }, 0},
  { 1625 /* vmin */, ARM::VMINsv16i8, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_QPR, MCK_QPR }, 0},
  { 1625 /* vmin */, ARM::VMINuv4i16, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_DPR, MCK_DPR }, 0},
  { 1625 /* vmin */, ARM::VMINuv8i16, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_QPR, MCK_QPR }, 0},
  { 1625 /* vmin */, ARM::VMINuv2i32, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_DPR, MCK_DPR }, 0},
  { 1625 /* vmin */, ARM::VMINuv4i32, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_QPR, MCK_QPR }, 0},
  { 1625 /* vmin */, ARM::VMINuv8i8, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_DPR, MCK_DPR }, 0},
  { 1625 /* vmin */, ARM::VMINuv16i8, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_QPR, MCK_QPR }, 0},
  { 1625 /* vmin */, ARM::VMINfd, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1625 /* vmin */, ARM::VMINfq, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1625 /* vmin */, ARM::VMINsv4i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1625 /* vmin */, ARM::VMINsv8i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1625 /* vmin */, ARM::VMINsv2i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1625 /* vmin */, ARM::VMINsv4i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1625 /* vmin */, ARM::VMINsv8i8, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1625 /* vmin */, ARM::VMINsv16i8, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1625 /* vmin */, ARM::VMINuv4i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1625 /* vmin */, ARM::VMINuv8i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1625 /* vmin */, ARM::VMINuv2i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1625 /* vmin */, ARM::VMINuv4i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1625 /* vmin */, ARM::VMINuv8i8, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1625 /* vmin */, ARM::VMINuv16i8, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1630 /* vmla */, ARM::VMLAS, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_f32, MCK_SPR, MCK_SPR, MCK_SPR }, 0},
  { 1630 /* vmla */, ARM::VMLAfd, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1630 /* vmla */, ARM::VMLAfq, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1630 /* vmla */, ARM::VMLAD, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_f64, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1630 /* vmla */, ARM::VMLAv4i16, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i16, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1630 /* vmla */, ARM::VMLAv8i16, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i16, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1630 /* vmla */, ARM::VMLAv2i32, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i32, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1630 /* vmla */, ARM::VMLAv4i32, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i32, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1630 /* vmla */, ARM::VMLAv8i8, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i8, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1630 /* vmla */, ARM::VMLAv16i8, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i8, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1630 /* vmla */, ARM::VMLAslfd, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__VectorIndex321_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_DPR, MCK_DPR, MCK_DPR_VFP2, MCK_VectorIndex32 }, 0},
  { 1630 /* vmla */, ARM::VMLAslfq, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__VectorIndex321_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_QPR, MCK_QPR, MCK_DPR_VFP2, MCK_VectorIndex32 }, 0},
  { 1630 /* vmla */, ARM::VMLAslv4i16, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__VectorIndex161_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i16, MCK_DPR, MCK_DPR, MCK_DPR_8, MCK_VectorIndex16 }, 0},
  { 1630 /* vmla */, ARM::VMLAslv8i16, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__VectorIndex161_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i16, MCK_QPR, MCK_QPR, MCK_DPR_8, MCK_VectorIndex16 }, 0},
  { 1630 /* vmla */, ARM::VMLAslv2i32, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__VectorIndex321_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i32, MCK_DPR, MCK_DPR, MCK_DPR_VFP2, MCK_VectorIndex32 }, 0},
  { 1630 /* vmla */, ARM::VMLAslv4i32, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__VectorIndex321_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i32, MCK_QPR, MCK_QPR, MCK_DPR_VFP2, MCK_VectorIndex32 }, 0},
  { 1635 /* vmlal */, ARM::VMLALsv4i32, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_QPR, MCK_DPR, MCK_DPR }, 0},
  { 1635 /* vmlal */, ARM::VMLALsv2i64, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_QPR, MCK_DPR, MCK_DPR }, 0},
  { 1635 /* vmlal */, ARM::VMLALsv8i16, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_QPR, MCK_DPR, MCK_DPR }, 0},
  { 1635 /* vmlal */, ARM::VMLALuv4i32, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_QPR, MCK_DPR, MCK_DPR }, 0},
  { 1635 /* vmlal */, ARM::VMLALuv2i64, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_QPR, MCK_DPR, MCK_DPR }, 0},
  { 1635 /* vmlal */, ARM::VMLALuv8i16, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_QPR, MCK_DPR, MCK_DPR }, 0},
  { 1635 /* vmlal */, ARM::VMLALslsv4i16, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__VectorIndex161_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_QPR, MCK_DPR, MCK_DPR_8, MCK_VectorIndex16 }, 0},
  { 1635 /* vmlal */, ARM::VMLALslsv2i32, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__VectorIndex321_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_QPR, MCK_DPR, MCK_DPR_VFP2, MCK_VectorIndex32 }, 0},
  { 1635 /* vmlal */, ARM::VMLALsluv4i16, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__VectorIndex161_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_QPR, MCK_DPR, MCK_DPR_8, MCK_VectorIndex16 }, 0},
  { 1635 /* vmlal */, ARM::VMLALsluv2i32, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__VectorIndex321_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_QPR, MCK_DPR, MCK_DPR_VFP2, MCK_VectorIndex32 }, 0},
  { 1641 /* vmls */, ARM::VMLSS, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_f32, MCK_SPR, MCK_SPR, MCK_SPR }, 0},
  { 1641 /* vmls */, ARM::VMLSfd, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1641 /* vmls */, ARM::VMLSfq, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1641 /* vmls */, ARM::VMLSD, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_f64, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1641 /* vmls */, ARM::VMLSv4i16, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i16, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1641 /* vmls */, ARM::VMLSv8i16, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i16, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1641 /* vmls */, ARM::VMLSv2i32, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i32, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1641 /* vmls */, ARM::VMLSv4i32, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i32, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1641 /* vmls */, ARM::VMLSv8i8, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i8, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1641 /* vmls */, ARM::VMLSv16i8, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i8, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1641 /* vmls */, ARM::VMLSslfd, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__VectorIndex321_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_DPR, MCK_DPR, MCK_DPR_VFP2, MCK_VectorIndex32 }, 0},
  { 1641 /* vmls */, ARM::VMLSslfq, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__VectorIndex321_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_QPR, MCK_QPR, MCK_DPR_VFP2, MCK_VectorIndex32 }, 0},
  { 1641 /* vmls */, ARM::VMLSslv4i16, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__VectorIndex161_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i16, MCK_DPR, MCK_DPR, MCK_DPR_8, MCK_VectorIndex16 }, 0},
  { 1641 /* vmls */, ARM::VMLSslv8i16, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__VectorIndex161_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i16, MCK_QPR, MCK_QPR, MCK_DPR_8, MCK_VectorIndex16 }, 0},
  { 1641 /* vmls */, ARM::VMLSslv2i32, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__VectorIndex321_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i32, MCK_DPR, MCK_DPR, MCK_DPR_VFP2, MCK_VectorIndex32 }, 0},
  { 1641 /* vmls */, ARM::VMLSslv4i32, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__VectorIndex321_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i32, MCK_QPR, MCK_QPR, MCK_DPR_VFP2, MCK_VectorIndex32 }, 0},
  { 1646 /* vmlsl */, ARM::VMLSLsv4i32, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_QPR, MCK_DPR, MCK_DPR }, 0},
  { 1646 /* vmlsl */, ARM::VMLSLsv2i64, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_QPR, MCK_DPR, MCK_DPR }, 0},
  { 1646 /* vmlsl */, ARM::VMLSLsv8i16, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_QPR, MCK_DPR, MCK_DPR }, 0},
  { 1646 /* vmlsl */, ARM::VMLSLuv4i32, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_QPR, MCK_DPR, MCK_DPR }, 0},
  { 1646 /* vmlsl */, ARM::VMLSLuv2i64, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_QPR, MCK_DPR, MCK_DPR }, 0},
  { 1646 /* vmlsl */, ARM::VMLSLuv8i16, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_QPR, MCK_DPR, MCK_DPR }, 0},
  { 1646 /* vmlsl */, ARM::VMLSLslsv4i16, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__VectorIndex161_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_QPR, MCK_DPR, MCK_DPR_8, MCK_VectorIndex16 }, 0},
  { 1646 /* vmlsl */, ARM::VMLSLslsv2i32, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__VectorIndex321_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_QPR, MCK_DPR, MCK_DPR_VFP2, MCK_VectorIndex32 }, 0},
  { 1646 /* vmlsl */, ARM::VMLSLsluv4i16, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__VectorIndex161_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_QPR, MCK_DPR, MCK_DPR_8, MCK_VectorIndex16 }, 0},
  { 1646 /* vmlsl */, ARM::VMLSLsluv2i32, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__VectorIndex321_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_QPR, MCK_DPR, MCK_DPR_VFP2, MCK_VectorIndex32 }, 0},
  { 1652 /* vmov */, ARM::VMOVRS, Convert__Reg1_1__Reg1_2__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK_GPR, MCK_SPR }, 0},
  { 1652 /* vmov */, ARM::VMOVSR, Convert__Reg1_1__Reg1_2__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK_SPR, MCK_GPR }, 0},
  { 1652 /* vmov */, ARM::VMOVS, Convert__Reg1_1__Reg1_2__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK_SPR, MCK_SPR }, 0},
  { 1652 /* vmov */, ARM::VORRd, Convert__Reg1_1__Reg1_2__Reg1_2__CondCode2_0, 0, { MCK_CondCode, MCK_DPR, MCK_DPR }, 0},
  { 1652 /* vmov */, ARM::VORRq, Convert__Reg1_1__Reg1_2__Reg1_2__CondCode2_0, 0, { MCK_CondCode, MCK_QPR, MCK_QPR }, 0},
  { 1652 /* vmov */, ARM::VMOVRS, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_16, MCK_GPR, MCK_SPR }, 0},
  { 1652 /* vmov */, ARM::VMOVSR, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_16, MCK_SPR, MCK_GPR }, 0},
  { 1652 /* vmov */, ARM::VORRd, Convert__Reg1_2__Reg1_3__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_DPR, MCK_DPR }, 0},
  { 1652 /* vmov */, ARM::VORRq, Convert__Reg1_2__Reg1_3__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_QPR, MCK_QPR }, 0},
  { 1652 /* vmov */, ARM::VMOVS, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_f32, MCK_SPR, MCK_SPR }, 0},
  { 1652 /* vmov */, ARM::FCONSTS, Convert__Reg1_2__FPImm1_3__CondCode2_0, Feature_HasVFP3, { MCK_CondCode, MCK__DOT_f32, MCK_SPR, MCK_FPImm }, 0},
  { 1652 /* vmov */, ARM::VMOVv2f32, Convert__Reg1_2__FPImm1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_DPR, MCK_FPImm }, 0},
  { 1652 /* vmov */, ARM::VMOVv2i32, Convert__Reg1_2__NEONi32vmov1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_DPR, MCK_NEONi32vmov }, 0},
  { 1652 /* vmov */, ARM::VMOVv4f32, Convert__Reg1_2__FPImm1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_QPR, MCK_FPImm }, 0},
  { 1652 /* vmov */, ARM::VMOVv4i32, Convert__Reg1_2__NEONi32vmov1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_QPR, MCK_NEONi32vmov }, 0},
  { 1652 /* vmov */, ARM::VMOVD, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_f64, MCK_DPR, MCK_DPR }, 0},
  { 1652 /* vmov */, ARM::FCONSTD, Convert__Reg1_2__FPImm1_3__CondCode2_0, Feature_HasVFP3, { MCK_CondCode, MCK__DOT_f64, MCK_DPR, MCK_FPImm }, 0},
  { 1652 /* vmov */, ARM::VMOVv4i16, Convert__Reg1_2__NEONi16splat1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i16, MCK_DPR, MCK_NEONi16splat }, 0},
  { 1652 /* vmov */, ARM::VMOVv8i16, Convert__Reg1_2__NEONi16splat1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i16, MCK_QPR, MCK_NEONi16splat }, 0},
  { 1652 /* vmov */, ARM::VMOVv2i32, Convert__Reg1_2__NEONi32vmov1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i32, MCK_DPR, MCK_NEONi32vmov }, 0},
  { 1652 /* vmov */, ARM::VMVNv2i32, Convert__Reg1_2__NEONi32vmovNeg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i32, MCK_DPR, MCK_NEONi32vmovNeg }, 0},
  { 1652 /* vmov */, ARM::VMOVv4i32, Convert__Reg1_2__NEONi32vmov1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i32, MCK_QPR, MCK_NEONi32vmov }, 0},
  { 1652 /* vmov */, ARM::VMVNv4i32, Convert__Reg1_2__NEONi32vmovNeg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i32, MCK_QPR, MCK_NEONi32vmovNeg }, 0},
  { 1652 /* vmov */, ARM::VMOVRS, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_32, MCK_GPR, MCK_SPR }, 0},
  { 1652 /* vmov */, ARM::VMOVSR, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_32, MCK_SPR, MCK_GPR }, 0},
  { 1652 /* vmov */, ARM::VORRd, Convert__Reg1_2__Reg1_3__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_DPR, MCK_DPR }, 0},
  { 1652 /* vmov */, ARM::VORRq, Convert__Reg1_2__Reg1_3__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_QPR, MCK_QPR }, 0},
  { 1652 /* vmov */, ARM::VMOVv1i64, Convert__Reg1_2__NEONi64splat1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i64, MCK_DPR, MCK_NEONi64splat }, 0},
  { 1652 /* vmov */, ARM::VMOVv2i64, Convert__Reg1_2__NEONi64splat1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i64, MCK_QPR, MCK_NEONi64splat }, 0},
  { 1652 /* vmov */, ARM::VORRd, Convert__Reg1_2__Reg1_3__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_64, MCK_DPR, MCK_DPR }, 0},
  { 1652 /* vmov */, ARM::VORRq, Convert__Reg1_2__Reg1_3__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_64, MCK_QPR, MCK_QPR }, 0},
  { 1652 /* vmov */, ARM::VMOVv8i8, Convert__Reg1_2__NEONi8splat1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i8, MCK_DPR, MCK_NEONi8splat }, 0},
  { 1652 /* vmov */, ARM::VMOVv16i8, Convert__Reg1_2__NEONi8splat1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i8, MCK_QPR, MCK_NEONi8splat }, 0},
  { 1652 /* vmov */, ARM::VMOVRS, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_8, MCK_GPR, MCK_SPR }, 0},
  { 1652 /* vmov */, ARM::VMOVSR, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_8, MCK_SPR, MCK_GPR }, 0},
  { 1652 /* vmov */, ARM::VORRd, Convert__Reg1_2__Reg1_3__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_DPR, MCK_DPR }, 0},
  { 1652 /* vmov */, ARM::VORRq, Convert__Reg1_2__Reg1_3__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_QPR, MCK_QPR }, 0},
  { 1652 /* vmov */, ARM::VMOVRRD, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK_GPR, MCK_GPR, MCK_DPR }, 0},
  { 1652 /* vmov */, ARM::VMOVDRR, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK_DPR, MCK_GPR, MCK_GPR }, 0},
  { 1652 /* vmov */, ARM::VSETLNi16, Convert__Reg1_2__Tie0__Reg1_4__VectorIndex161_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_DPR, MCK_VectorIndex16, MCK_GPR }, 0},
  { 1652 /* vmov */, ARM::VGETLNi32, Convert__Reg1_2__Reg1_3__VectorIndex321_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_GPR, MCK_DPR, MCK_VectorIndex32 }, 0},
  { 1652 /* vmov */, ARM::VSETLNi32, Convert__Reg1_2__Tie0__Reg1_4__VectorIndex321_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_DPR, MCK_VectorIndex32, MCK_GPR }, 0},
  { 1652 /* vmov */, ARM::VSETLNi8, Convert__Reg1_2__Tie0__Reg1_4__VectorIndex81_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_DPR, MCK_VectorIndex8, MCK_GPR }, 0},
  { 1652 /* vmov */, ARM::VMOVRRD, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_f64, MCK_GPR, MCK_GPR, MCK_DPR }, 0},
  { 1652 /* vmov */, ARM::VMOVDRR, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_f64, MCK_DPR, MCK_GPR, MCK_GPR }, 0},
  { 1652 /* vmov */, ARM::VGETLNs16, Convert__Reg1_2__Reg1_3__VectorIndex161_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_GPR, MCK_DPR, MCK_VectorIndex16 }, 0},
  { 1652 /* vmov */, ARM::VGETLNs8, Convert__Reg1_2__Reg1_3__VectorIndex81_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_GPR, MCK_DPR, MCK_VectorIndex8 }, 0},
  { 1652 /* vmov */, ARM::VGETLNu16, Convert__Reg1_2__Reg1_3__VectorIndex161_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_GPR, MCK_DPR, MCK_VectorIndex16 }, 0},
  { 1652 /* vmov */, ARM::VGETLNu8, Convert__Reg1_2__Reg1_3__VectorIndex81_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_GPR, MCK_DPR, MCK_VectorIndex8 }, 0},
  { 1652 /* vmov */, ARM::VMOVRRS, Convert__Reg1_1__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK_GPR, MCK_GPR, MCK_SPR, MCK_SPR }, 0},
  { 1652 /* vmov */, ARM::VMOVSRR, Convert__Reg1_1__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK_SPR, MCK_SPR, MCK_GPR, MCK_GPR }, 0},
  { 1657 /* vmovl */, ARM::VMOVLsv4i32, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_QPR, MCK_DPR }, 0},
  { 1657 /* vmovl */, ARM::VMOVLsv2i64, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_QPR, MCK_DPR }, 0},
  { 1657 /* vmovl */, ARM::VMOVLsv8i16, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_QPR, MCK_DPR }, 0},
  { 1657 /* vmovl */, ARM::VMOVLuv4i32, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_QPR, MCK_DPR }, 0},
  { 1657 /* vmovl */, ARM::VMOVLuv2i64, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_QPR, MCK_DPR }, 0},
  { 1657 /* vmovl */, ARM::VMOVLuv8i16, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_QPR, MCK_DPR }, 0},
  { 1663 /* vmovn */, ARM::VMOVNv8i8, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i16, MCK_DPR, MCK_QPR }, 0},
  { 1663 /* vmovn */, ARM::VMOVNv4i16, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i32, MCK_DPR, MCK_QPR }, 0},
  { 1663 /* vmovn */, ARM::VMOVNv2i32, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i64, MCK_DPR, MCK_QPR }, 0},
  { 1669 /* vmrs */, ARM::FMSTAT, Convert__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK_APSR_95_nzcv, MCK_FPSCR }, 0},
  { 1669 /* vmrs */, ARM::VMRS, Convert__Reg1_1__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK_GPR, MCK_FPSCR }, 0},
  { 1669 /* vmrs */, ARM::VMRS_FPSID, Convert__Reg1_1__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK_GPR, MCK_FPSID }, 0},
  { 1669 /* vmrs */, ARM::VMRS_MVFR1, Convert__Reg1_1__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK_GPR, MCK_MVFR1 }, 0},
  { 1669 /* vmrs */, ARM::VMRS_MVFR0, Convert__Reg1_1__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK_GPR, MCK_MVFR0 }, 0},
  { 1669 /* vmrs */, ARM::VMRS_FPEXC, Convert__Reg1_1__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK_GPR, MCK_FPEXC }, 0},
  { 1674 /* vmsr */, ARM::VMSR, Convert__Reg1_2__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK_FPSCR, MCK_GPR }, 0},
  { 1674 /* vmsr */, ARM::VMSR_FPSID, Convert__Reg1_2__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK_FPSID, MCK_GPR }, 0},
  { 1674 /* vmsr */, ARM::VMSR_FPEXC, Convert__Reg1_2__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK_FPEXC, MCK_GPR }, 0},
  { 1679 /* vmul */, ARM::VMULS, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_f32, MCK_SPR, MCK_SPR }, 0},
  { 1679 /* vmul */, ARM::VMULfd, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_DPR, MCK_DPR }, 0},
  { 1679 /* vmul */, ARM::VMULfq, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_QPR, MCK_QPR }, 0},
  { 1679 /* vmul */, ARM::VMULD, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_f64, MCK_DPR, MCK_DPR }, 0},
  { 1679 /* vmul */, ARM::VMULv4i16, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i16, MCK_DPR, MCK_DPR }, 0},
  { 1679 /* vmul */, ARM::VMULv8i16, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i16, MCK_QPR, MCK_QPR }, 0},
  { 1679 /* vmul */, ARM::VMULv2i32, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i32, MCK_DPR, MCK_DPR }, 0},
  { 1679 /* vmul */, ARM::VMULv4i32, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i32, MCK_QPR, MCK_QPR }, 0},
  { 1679 /* vmul */, ARM::VMULv8i8, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i8, MCK_DPR, MCK_DPR }, 0},
  { 1679 /* vmul */, ARM::VMULv16i8, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i8, MCK_QPR, MCK_QPR }, 0},
  { 1679 /* vmul */, ARM::VMULpd, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_p8, MCK_DPR, MCK_DPR }, 0},
  { 1679 /* vmul */, ARM::VMULpq, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_p8, MCK_QPR, MCK_QPR }, 0},
  { 1679 /* vmul */, ARM::VMULS, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_f32, MCK_SPR, MCK_SPR, MCK_SPR }, 0},
  { 1679 /* vmul */, ARM::VMULslfd, Convert__Reg1_2__Reg1_2__Reg1_3__VectorIndex321_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_DPR, MCK_DPR_VFP2, MCK_VectorIndex32 }, 0},
  { 1679 /* vmul */, ARM::VMULfd, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1679 /* vmul */, ARM::VMULslfq, Convert__Reg1_2__Reg1_2__Reg1_3__VectorIndex321_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_QPR, MCK_DPR_VFP2, MCK_VectorIndex32 }, 0},
  { 1679 /* vmul */, ARM::VMULfq, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1679 /* vmul */, ARM::VMULD, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_f64, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1679 /* vmul */, ARM::VMULslv4i16, Convert__Reg1_2__Reg1_2__Reg1_3__VectorIndex161_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i16, MCK_DPR, MCK_DPR_8, MCK_VectorIndex16 }, 0},
  { 1679 /* vmul */, ARM::VMULv4i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i16, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1679 /* vmul */, ARM::VMULslv8i16, Convert__Reg1_2__Reg1_2__Reg1_3__VectorIndex161_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i16, MCK_QPR, MCK_DPR_8, MCK_VectorIndex16 }, 0},
  { 1679 /* vmul */, ARM::VMULv8i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i16, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1679 /* vmul */, ARM::VMULslv2i32, Convert__Reg1_2__Reg1_2__Reg1_3__VectorIndex321_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i32, MCK_DPR, MCK_DPR_VFP2, MCK_VectorIndex32 }, 0},
  { 1679 /* vmul */, ARM::VMULv2i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i32, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1679 /* vmul */, ARM::VMULslv4i32, Convert__Reg1_2__Reg1_2__Reg1_3__VectorIndex321_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i32, MCK_QPR, MCK_DPR_VFP2, MCK_VectorIndex32 }, 0},
  { 1679 /* vmul */, ARM::VMULv4i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i32, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1679 /* vmul */, ARM::VMULv8i8, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i8, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1679 /* vmul */, ARM::VMULv16i8, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i8, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1679 /* vmul */, ARM::VMULpd, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_p8, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1679 /* vmul */, ARM::VMULpq, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_p8, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1679 /* vmul */, ARM::VMULslfd, Convert__Reg1_2__Reg1_3__Reg1_4__VectorIndex321_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_DPR, MCK_DPR, MCK_DPR_VFP2, MCK_VectorIndex32 }, 0},
  { 1679 /* vmul */, ARM::VMULslfq, Convert__Reg1_2__Reg1_3__Reg1_4__VectorIndex321_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_QPR, MCK_QPR, MCK_DPR_VFP2, MCK_VectorIndex32 }, 0},
  { 1679 /* vmul */, ARM::VMULslv4i16, Convert__Reg1_2__Reg1_3__Reg1_4__VectorIndex161_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i16, MCK_DPR, MCK_DPR, MCK_DPR_8, MCK_VectorIndex16 }, 0},
  { 1679 /* vmul */, ARM::VMULslv8i16, Convert__Reg1_2__Reg1_3__Reg1_4__VectorIndex161_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i16, MCK_QPR, MCK_QPR, MCK_DPR_8, MCK_VectorIndex16 }, 0},
  { 1679 /* vmul */, ARM::VMULslv2i32, Convert__Reg1_2__Reg1_3__Reg1_4__VectorIndex321_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i32, MCK_DPR, MCK_DPR, MCK_DPR_VFP2, MCK_VectorIndex32 }, 0},
  { 1679 /* vmul */, ARM::VMULslv4i32, Convert__Reg1_2__Reg1_3__Reg1_4__VectorIndex321_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i32, MCK_QPR, MCK_QPR, MCK_DPR_VFP2, MCK_VectorIndex32 }, 0},
  { 1684 /* vmull */, ARM::VMULLp, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_p8, MCK_QPR, MCK_DPR, MCK_DPR }, 0},
  { 1684 /* vmull */, ARM::VMULLsv4i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_QPR, MCK_DPR, MCK_DPR }, 0},
  { 1684 /* vmull */, ARM::VMULLsv2i64, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_QPR, MCK_DPR, MCK_DPR }, 0},
  { 1684 /* vmull */, ARM::VMULLsv8i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_QPR, MCK_DPR, MCK_DPR }, 0},
  { 1684 /* vmull */, ARM::VMULLuv4i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_QPR, MCK_DPR, MCK_DPR }, 0},
  { 1684 /* vmull */, ARM::VMULLuv2i64, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_QPR, MCK_DPR, MCK_DPR }, 0},
  { 1684 /* vmull */, ARM::VMULLuv8i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_QPR, MCK_DPR, MCK_DPR }, 0},
  { 1684 /* vmull */, ARM::VMULLslsv4i16, Convert__Reg1_2__Reg1_3__Reg1_4__VectorIndex161_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_QPR, MCK_DPR, MCK_DPR_8, MCK_VectorIndex16 }, 0},
  { 1684 /* vmull */, ARM::VMULLslsv2i32, Convert__Reg1_2__Reg1_3__Reg1_4__VectorIndex321_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_QPR, MCK_DPR, MCK_DPR_VFP2, MCK_VectorIndex32 }, 0},
  { 1684 /* vmull */, ARM::VMULLsluv4i16, Convert__Reg1_2__Reg1_3__Reg1_4__VectorIndex161_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_QPR, MCK_DPR, MCK_DPR_8, MCK_VectorIndex16 }, 0},
  { 1684 /* vmull */, ARM::VMULLsluv2i32, Convert__Reg1_2__Reg1_3__Reg1_4__VectorIndex321_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_QPR, MCK_DPR, MCK_DPR_VFP2, MCK_VectorIndex32 }, 0},
  { 1690 /* vmvn */, ARM::VMVNd, Convert__Reg1_1__Reg1_2__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK_DPR, MCK_DPR }, 0},
  { 1690 /* vmvn */, ARM::VMVNq, Convert__Reg1_1__Reg1_2__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK_QPR, MCK_QPR }, 0},
  { 1690 /* vmvn */, ARM::VMVNv4i16, Convert__Reg1_2__NEONi16splat1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i16, MCK_DPR, MCK_NEONi16splat }, 0},
  { 1690 /* vmvn */, ARM::VMVNv8i16, Convert__Reg1_2__NEONi16splat1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i16, MCK_QPR, MCK_NEONi16splat }, 0},
  { 1690 /* vmvn */, ARM::VMVNv2i32, Convert__Reg1_2__NEONi32vmov1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i32, MCK_DPR, MCK_NEONi32vmov }, 0},
  { 1690 /* vmvn */, ARM::VMOVv2i32, Convert__Reg1_2__NEONi32vmovNeg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i32, MCK_DPR, MCK_NEONi32vmovNeg }, 0},
  { 1690 /* vmvn */, ARM::VMVNv4i32, Convert__Reg1_2__NEONi32vmov1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i32, MCK_QPR, MCK_NEONi32vmov }, 0},
  { 1690 /* vmvn */, ARM::VMOVv4i32, Convert__Reg1_2__NEONi32vmovNeg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i32, MCK_QPR, MCK_NEONi32vmovNeg }, 0},
  { 1695 /* vneg */, ARM::VNEGS, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_f32, MCK_SPR, MCK_SPR }, 0},
  { 1695 /* vneg */, ARM::VNEGfd, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_DPR, MCK_DPR }, 0},
  { 1695 /* vneg */, ARM::VNEGf32q, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_QPR, MCK_QPR }, 0},
  { 1695 /* vneg */, ARM::VNEGD, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_f64, MCK_DPR, MCK_DPR }, 0},
  { 1695 /* vneg */, ARM::VNEGs16d, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_DPR, MCK_DPR }, 0},
  { 1695 /* vneg */, ARM::VNEGs16q, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_QPR, MCK_QPR }, 0},
  { 1695 /* vneg */, ARM::VNEGs32d, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_DPR, MCK_DPR }, 0},
  { 1695 /* vneg */, ARM::VNEGs32q, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_QPR, MCK_QPR }, 0},
  { 1695 /* vneg */, ARM::VNEGs8d, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_DPR, MCK_DPR }, 0},
  { 1695 /* vneg */, ARM::VNEGs8q, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_QPR, MCK_QPR }, 0},
  { 1700 /* vnmla */, ARM::VNMLAS, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_f32, MCK_SPR, MCK_SPR, MCK_SPR }, 0},
  { 1700 /* vnmla */, ARM::VNMLAD, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_f64, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1706 /* vnmls */, ARM::VNMLSS, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_f32, MCK_SPR, MCK_SPR, MCK_SPR }, 0},
  { 1706 /* vnmls */, ARM::VNMLSD, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_f64, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1712 /* vnmul */, ARM::VNMULS, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_f32, MCK_SPR, MCK_SPR, MCK_SPR }, 0},
  { 1712 /* vnmul */, ARM::VNMULD, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_f64, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1718 /* vorn */, ARM::VORNd, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1718 /* vorn */, ARM::VORNq, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1723 /* vorr */, ARM::VORRd, Convert__Reg1_1__Reg1_1__Reg1_2__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK_DPR, MCK_DPR }, 0},
  { 1723 /* vorr */, ARM::VORRq, Convert__Reg1_1__Reg1_1__Reg1_2__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK_QPR, MCK_QPR }, 0},
  { 1723 /* vorr */, ARM::VORRiv4i16, Convert__Reg1_2__NEONi16splat1_3__Tie0__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i16, MCK_DPR, MCK_NEONi16splat }, 0},
  { 1723 /* vorr */, ARM::VORRiv8i16, Convert__Reg1_2__NEONi16splat1_3__Tie0__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i16, MCK_QPR, MCK_NEONi16splat }, 0},
  { 1723 /* vorr */, ARM::VORRd, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_DPR, MCK_DPR }, 0},
  { 1723 /* vorr */, ARM::VORRq, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_QPR, MCK_QPR }, 0},
  { 1723 /* vorr */, ARM::VORRiv2i32, Convert__Reg1_2__NEONi32splat1_3__Tie0__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i32, MCK_DPR, MCK_NEONi32splat }, 0},
  { 1723 /* vorr */, ARM::VORRiv4i32, Convert__Reg1_2__NEONi32splat1_3__Tie0__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i32, MCK_QPR, MCK_NEONi32splat }, 0},
  { 1723 /* vorr */, ARM::VORRd, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_DPR, MCK_DPR }, 0},
  { 1723 /* vorr */, ARM::VORRq, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_QPR, MCK_QPR }, 0},
  { 1723 /* vorr */, ARM::VORRd, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_64, MCK_DPR, MCK_DPR }, 0},
  { 1723 /* vorr */, ARM::VORRq, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_64, MCK_QPR, MCK_QPR }, 0},
  { 1723 /* vorr */, ARM::VORRd, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_DPR, MCK_DPR }, 0},
  { 1723 /* vorr */, ARM::VORRq, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_QPR, MCK_QPR }, 0},
  { 1723 /* vorr */, ARM::VORRd, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1723 /* vorr */, ARM::VORRq, Convert__Reg1_1__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1723 /* vorr */, ARM::VORRd, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1723 /* vorr */, ARM::VORRq, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1723 /* vorr */, ARM::VORRd, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1723 /* vorr */, ARM::VORRq, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1723 /* vorr */, ARM::VORRd, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_64, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1723 /* vorr */, ARM::VORRq, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_64, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1723 /* vorr */, ARM::VORRd, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1723 /* vorr */, ARM::VORRq, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1728 /* vpadal */, ARM::VPADALsv4i16, Convert__Reg1_2__Tie0__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_DPR, MCK_DPR }, 0},
  { 1728 /* vpadal */, ARM::VPADALsv8i16, Convert__Reg1_2__Tie0__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_QPR, MCK_QPR }, 0},
  { 1728 /* vpadal */, ARM::VPADALsv2i32, Convert__Reg1_2__Tie0__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_DPR, MCK_DPR }, 0},
  { 1728 /* vpadal */, ARM::VPADALsv4i32, Convert__Reg1_2__Tie0__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_QPR, MCK_QPR }, 0},
  { 1728 /* vpadal */, ARM::VPADALsv8i8, Convert__Reg1_2__Tie0__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_DPR, MCK_DPR }, 0},
  { 1728 /* vpadal */, ARM::VPADALsv16i8, Convert__Reg1_2__Tie0__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_QPR, MCK_QPR }, 0},
  { 1728 /* vpadal */, ARM::VPADALuv4i16, Convert__Reg1_2__Tie0__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_DPR, MCK_DPR }, 0},
  { 1728 /* vpadal */, ARM::VPADALuv8i16, Convert__Reg1_2__Tie0__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_QPR, MCK_QPR }, 0},
  { 1728 /* vpadal */, ARM::VPADALuv2i32, Convert__Reg1_2__Tie0__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_DPR, MCK_DPR }, 0},
  { 1728 /* vpadal */, ARM::VPADALuv4i32, Convert__Reg1_2__Tie0__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_QPR, MCK_QPR }, 0},
  { 1728 /* vpadal */, ARM::VPADALuv8i8, Convert__Reg1_2__Tie0__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_DPR, MCK_DPR }, 0},
  { 1728 /* vpadal */, ARM::VPADALuv16i8, Convert__Reg1_2__Tie0__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_QPR, MCK_QPR }, 0},
  { 1735 /* vpadd */, ARM::VPADDf, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_DPR, MCK_DPR }, 0},
  { 1735 /* vpadd */, ARM::VPADDi16, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i16, MCK_DPR, MCK_DPR }, 0},
  { 1735 /* vpadd */, ARM::VPADDi32, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i32, MCK_DPR, MCK_DPR }, 0},
  { 1735 /* vpadd */, ARM::VPADDi8, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i8, MCK_DPR, MCK_DPR }, 0},
  { 1735 /* vpadd */, ARM::VPADDf, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1735 /* vpadd */, ARM::VPADDi16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i16, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1735 /* vpadd */, ARM::VPADDi32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i32, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1735 /* vpadd */, ARM::VPADDi8, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i8, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1741 /* vpaddl */, ARM::VPADDLsv4i16, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_DPR, MCK_DPR }, 0},
  { 1741 /* vpaddl */, ARM::VPADDLsv8i16, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_QPR, MCK_QPR }, 0},
  { 1741 /* vpaddl */, ARM::VPADDLsv2i32, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_DPR, MCK_DPR }, 0},
  { 1741 /* vpaddl */, ARM::VPADDLsv4i32, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_QPR, MCK_QPR }, 0},
  { 1741 /* vpaddl */, ARM::VPADDLsv8i8, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_DPR, MCK_DPR }, 0},
  { 1741 /* vpaddl */, ARM::VPADDLsv16i8, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_QPR, MCK_QPR }, 0},
  { 1741 /* vpaddl */, ARM::VPADDLuv4i16, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_DPR, MCK_DPR }, 0},
  { 1741 /* vpaddl */, ARM::VPADDLuv8i16, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_QPR, MCK_QPR }, 0},
  { 1741 /* vpaddl */, ARM::VPADDLuv2i32, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_DPR, MCK_DPR }, 0},
  { 1741 /* vpaddl */, ARM::VPADDLuv4i32, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_QPR, MCK_QPR }, 0},
  { 1741 /* vpaddl */, ARM::VPADDLuv8i8, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_DPR, MCK_DPR }, 0},
  { 1741 /* vpaddl */, ARM::VPADDLuv16i8, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_QPR, MCK_QPR }, 0},
  { 1748 /* vpmax */, ARM::VPMAXf, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_DPR, MCK_DPR }, 0},
  { 1748 /* vpmax */, ARM::VPMAXs16, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_DPR, MCK_DPR }, 0},
  { 1748 /* vpmax */, ARM::VPMAXs32, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_DPR, MCK_DPR }, 0},
  { 1748 /* vpmax */, ARM::VPMAXs8, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_DPR, MCK_DPR }, 0},
  { 1748 /* vpmax */, ARM::VPMAXu16, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_DPR, MCK_DPR }, 0},
  { 1748 /* vpmax */, ARM::VPMAXu32, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_DPR, MCK_DPR }, 0},
  { 1748 /* vpmax */, ARM::VPMAXu8, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_DPR, MCK_DPR }, 0},
  { 1748 /* vpmax */, ARM::VPMAXf, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1748 /* vpmax */, ARM::VPMAXs16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1748 /* vpmax */, ARM::VPMAXs32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1748 /* vpmax */, ARM::VPMAXs8, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1748 /* vpmax */, ARM::VPMAXu16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1748 /* vpmax */, ARM::VPMAXu32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1748 /* vpmax */, ARM::VPMAXu8, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1754 /* vpmin */, ARM::VPMINf, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_DPR, MCK_DPR }, 0},
  { 1754 /* vpmin */, ARM::VPMINs16, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_DPR, MCK_DPR }, 0},
  { 1754 /* vpmin */, ARM::VPMINs32, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_DPR, MCK_DPR }, 0},
  { 1754 /* vpmin */, ARM::VPMINs8, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_DPR, MCK_DPR }, 0},
  { 1754 /* vpmin */, ARM::VPMINu16, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_DPR, MCK_DPR }, 0},
  { 1754 /* vpmin */, ARM::VPMINu32, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_DPR, MCK_DPR }, 0},
  { 1754 /* vpmin */, ARM::VPMINu8, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_DPR, MCK_DPR }, 0},
  { 1754 /* vpmin */, ARM::VPMINf, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1754 /* vpmin */, ARM::VPMINs16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1754 /* vpmin */, ARM::VPMINs32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1754 /* vpmin */, ARM::VPMINs8, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1754 /* vpmin */, ARM::VPMINu16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1754 /* vpmin */, ARM::VPMINu32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1754 /* vpmin */, ARM::VPMINu8, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1760 /* vpop */, ARM::VLDMDIA_UPD, Convert__regSP__Tie0__CondCode2_0__DPRRegList1_1, Feature_HasVFP2, { MCK_CondCode, MCK_DPRRegList }, 0},
  { 1760 /* vpop */, ARM::VLDMSIA_UPD, Convert__regSP__Tie0__CondCode2_0__SPRRegList1_1, Feature_HasVFP2, { MCK_CondCode, MCK_SPRRegList }, 0},
  { 1760 /* vpop */, ARM::VLDMDIA_UPD, Convert__regSP__Tie0__CondCode2_0__DPRRegList1_2, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_16, MCK_DPRRegList }, 0},
  { 1760 /* vpop */, ARM::VLDMSIA_UPD, Convert__regSP__Tie0__CondCode2_0__SPRRegList1_2, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_16, MCK_SPRRegList }, 0},
  { 1760 /* vpop */, ARM::VLDMDIA_UPD, Convert__regSP__Tie0__CondCode2_0__DPRRegList1_2, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_32, MCK_DPRRegList }, 0},
  { 1760 /* vpop */, ARM::VLDMSIA_UPD, Convert__regSP__Tie0__CondCode2_0__SPRRegList1_2, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_32, MCK_SPRRegList }, 0},
  { 1760 /* vpop */, ARM::VLDMDIA_UPD, Convert__regSP__Tie0__CondCode2_0__DPRRegList1_2, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_64, MCK_DPRRegList }, 0},
  { 1760 /* vpop */, ARM::VLDMSIA_UPD, Convert__regSP__Tie0__CondCode2_0__SPRRegList1_2, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_64, MCK_SPRRegList }, 0},
  { 1760 /* vpop */, ARM::VLDMDIA_UPD, Convert__regSP__Tie0__CondCode2_0__DPRRegList1_2, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_8, MCK_DPRRegList }, 0},
  { 1760 /* vpop */, ARM::VLDMSIA_UPD, Convert__regSP__Tie0__CondCode2_0__SPRRegList1_2, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_8, MCK_SPRRegList }, 0},
  { 1765 /* vpush */, ARM::VSTMDDB_UPD, Convert__regSP__Tie0__CondCode2_0__DPRRegList1_1, Feature_HasVFP2, { MCK_CondCode, MCK_DPRRegList }, 0},
  { 1765 /* vpush */, ARM::VSTMSDB_UPD, Convert__regSP__Tie0__CondCode2_0__SPRRegList1_1, Feature_HasVFP2, { MCK_CondCode, MCK_SPRRegList }, 0},
  { 1765 /* vpush */, ARM::VSTMDDB_UPD, Convert__regSP__Tie0__CondCode2_0__DPRRegList1_2, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_16, MCK_DPRRegList }, 0},
  { 1765 /* vpush */, ARM::VSTMSDB_UPD, Convert__regSP__Tie0__CondCode2_0__SPRRegList1_2, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_16, MCK_SPRRegList }, 0},
  { 1765 /* vpush */, ARM::VSTMDDB_UPD, Convert__regSP__Tie0__CondCode2_0__DPRRegList1_2, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_32, MCK_DPRRegList }, 0},
  { 1765 /* vpush */, ARM::VSTMSDB_UPD, Convert__regSP__Tie0__CondCode2_0__SPRRegList1_2, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_32, MCK_SPRRegList }, 0},
  { 1765 /* vpush */, ARM::VSTMDDB_UPD, Convert__regSP__Tie0__CondCode2_0__DPRRegList1_2, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_64, MCK_DPRRegList }, 0},
  { 1765 /* vpush */, ARM::VSTMSDB_UPD, Convert__regSP__Tie0__CondCode2_0__SPRRegList1_2, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_64, MCK_SPRRegList }, 0},
  { 1765 /* vpush */, ARM::VSTMDDB_UPD, Convert__regSP__Tie0__CondCode2_0__DPRRegList1_2, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_8, MCK_DPRRegList }, 0},
  { 1765 /* vpush */, ARM::VSTMSDB_UPD, Convert__regSP__Tie0__CondCode2_0__SPRRegList1_2, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_8, MCK_SPRRegList }, 0},
  { 1771 /* vqabs */, ARM::VQABSv4i16, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_DPR, MCK_DPR }, 0},
  { 1771 /* vqabs */, ARM::VQABSv8i16, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_QPR, MCK_QPR }, 0},
  { 1771 /* vqabs */, ARM::VQABSv2i32, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_DPR, MCK_DPR }, 0},
  { 1771 /* vqabs */, ARM::VQABSv4i32, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_QPR, MCK_QPR }, 0},
  { 1771 /* vqabs */, ARM::VQABSv8i8, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_DPR, MCK_DPR }, 0},
  { 1771 /* vqabs */, ARM::VQABSv16i8, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_QPR, MCK_QPR }, 0},
  { 1777 /* vqadd */, ARM::VQADDsv4i16, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_DPR, MCK_DPR }, 0},
  { 1777 /* vqadd */, ARM::VQADDsv8i16, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_QPR, MCK_QPR }, 0},
  { 1777 /* vqadd */, ARM::VQADDsv2i32, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_DPR, MCK_DPR }, 0},
  { 1777 /* vqadd */, ARM::VQADDsv4i32, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_QPR, MCK_QPR }, 0},
  { 1777 /* vqadd */, ARM::VQADDsv1i64, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s64, MCK_DPR, MCK_DPR }, 0},
  { 1777 /* vqadd */, ARM::VQADDsv2i64, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s64, MCK_QPR, MCK_QPR }, 0},
  { 1777 /* vqadd */, ARM::VQADDsv8i8, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_DPR, MCK_DPR }, 0},
  { 1777 /* vqadd */, ARM::VQADDsv16i8, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_QPR, MCK_QPR }, 0},
  { 1777 /* vqadd */, ARM::VQADDuv4i16, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_DPR, MCK_DPR }, 0},
  { 1777 /* vqadd */, ARM::VQADDuv8i16, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_QPR, MCK_QPR }, 0},
  { 1777 /* vqadd */, ARM::VQADDuv2i32, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_DPR, MCK_DPR }, 0},
  { 1777 /* vqadd */, ARM::VQADDuv4i32, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_QPR, MCK_QPR }, 0},
  { 1777 /* vqadd */, ARM::VQADDuv1i64, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u64, MCK_DPR, MCK_DPR }, 0},
  { 1777 /* vqadd */, ARM::VQADDuv2i64, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u64, MCK_QPR, MCK_QPR }, 0},
  { 1777 /* vqadd */, ARM::VQADDuv8i8, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_DPR, MCK_DPR }, 0},
  { 1777 /* vqadd */, ARM::VQADDuv16i8, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_QPR, MCK_QPR }, 0},
  { 1777 /* vqadd */, ARM::VQADDsv4i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1777 /* vqadd */, ARM::VQADDsv8i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1777 /* vqadd */, ARM::VQADDsv2i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1777 /* vqadd */, ARM::VQADDsv4i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1777 /* vqadd */, ARM::VQADDsv1i64, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s64, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1777 /* vqadd */, ARM::VQADDsv2i64, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s64, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1777 /* vqadd */, ARM::VQADDsv8i8, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1777 /* vqadd */, ARM::VQADDsv16i8, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1777 /* vqadd */, ARM::VQADDuv4i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1777 /* vqadd */, ARM::VQADDuv8i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1777 /* vqadd */, ARM::VQADDuv2i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1777 /* vqadd */, ARM::VQADDuv4i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1777 /* vqadd */, ARM::VQADDuv1i64, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u64, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1777 /* vqadd */, ARM::VQADDuv2i64, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u64, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1777 /* vqadd */, ARM::VQADDuv8i8, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1777 /* vqadd */, ARM::VQADDuv16i8, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1783 /* vqdmlal */, ARM::VQDMLALv4i32, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_QPR, MCK_DPR, MCK_DPR }, 0},
  { 1783 /* vqdmlal */, ARM::VQDMLALv2i64, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_QPR, MCK_DPR, MCK_DPR }, 0},
  { 1783 /* vqdmlal */, ARM::VQDMLALslv4i16, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__VectorIndex161_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_QPR, MCK_DPR, MCK_DPR_8, MCK_VectorIndex16 }, 0},
  { 1783 /* vqdmlal */, ARM::VQDMLALslv2i32, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__VectorIndex321_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_QPR, MCK_DPR, MCK_DPR_VFP2, MCK_VectorIndex32 }, 0},
  { 1791 /* vqdmlsl */, ARM::VQDMLSLv4i32, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_QPR, MCK_DPR, MCK_DPR }, 0},
  { 1791 /* vqdmlsl */, ARM::VQDMLSLv2i64, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_QPR, MCK_DPR, MCK_DPR }, 0},
  { 1791 /* vqdmlsl */, ARM::VQDMLSLslv4i16, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__VectorIndex161_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_QPR, MCK_DPR, MCK_DPR_8, MCK_VectorIndex16 }, 0},
  { 1791 /* vqdmlsl */, ARM::VQDMLSLslv2i32, Convert__Reg1_2__Tie0__Reg1_3__Reg1_4__VectorIndex321_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_QPR, MCK_DPR, MCK_DPR_VFP2, MCK_VectorIndex32 }, 0},
  { 1799 /* vqdmulh */, ARM::VQDMULHv4i16, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_DPR, MCK_DPR }, 0},
  { 1799 /* vqdmulh */, ARM::VQDMULHv8i16, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_QPR, MCK_QPR }, 0},
  { 1799 /* vqdmulh */, ARM::VQDMULHv2i32, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_DPR, MCK_DPR }, 0},
  { 1799 /* vqdmulh */, ARM::VQDMULHv4i32, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_QPR, MCK_QPR }, 0},
  { 1799 /* vqdmulh */, ARM::VQDMULHv4i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1799 /* vqdmulh */, ARM::VQDMULHv8i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1799 /* vqdmulh */, ARM::VQDMULHv2i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1799 /* vqdmulh */, ARM::VQDMULHv4i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1799 /* vqdmulh */, ARM::VQDMULHslv4i16, Convert__Reg1_2__Reg1_3__Reg1_4__VectorIndex161_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_DPR, MCK_DPR, MCK_DPR_8, MCK_VectorIndex16 }, 0},
  { 1799 /* vqdmulh */, ARM::VQDMULHslv8i16, Convert__Reg1_2__Reg1_3__Reg1_4__VectorIndex161_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_QPR, MCK_QPR, MCK_DPR_8, MCK_VectorIndex16 }, 0},
  { 1799 /* vqdmulh */, ARM::VQDMULHslv2i32, Convert__Reg1_2__Reg1_3__Reg1_4__VectorIndex321_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_DPR, MCK_DPR, MCK_DPR_VFP2, MCK_VectorIndex32 }, 0},
  { 1799 /* vqdmulh */, ARM::VQDMULHslv4i32, Convert__Reg1_2__Reg1_3__Reg1_4__VectorIndex321_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_QPR, MCK_QPR, MCK_DPR_VFP2, MCK_VectorIndex32 }, 0},
  { 1807 /* vqdmull */, ARM::VQDMULLv4i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_QPR, MCK_DPR, MCK_DPR }, 0},
  { 1807 /* vqdmull */, ARM::VQDMULLv2i64, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_QPR, MCK_DPR, MCK_DPR }, 0},
  { 1807 /* vqdmull */, ARM::VQDMULLslv4i16, Convert__Reg1_2__Reg1_3__Reg1_4__VectorIndex161_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_QPR, MCK_DPR, MCK_DPR_8, MCK_VectorIndex16 }, 0},
  { 1807 /* vqdmull */, ARM::VQDMULLslv2i32, Convert__Reg1_2__Reg1_3__Reg1_4__VectorIndex321_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_QPR, MCK_DPR, MCK_DPR_VFP2, MCK_VectorIndex32 }, 0},
  { 1815 /* vqmovn */, ARM::VQMOVNsv8i8, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_DPR, MCK_QPR }, 0},
  { 1815 /* vqmovn */, ARM::VQMOVNsv4i16, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_DPR, MCK_QPR }, 0},
  { 1815 /* vqmovn */, ARM::VQMOVNsv2i32, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s64, MCK_DPR, MCK_QPR }, 0},
  { 1815 /* vqmovn */, ARM::VQMOVNuv8i8, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_DPR, MCK_QPR }, 0},
  { 1815 /* vqmovn */, ARM::VQMOVNuv4i16, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_DPR, MCK_QPR }, 0},
  { 1815 /* vqmovn */, ARM::VQMOVNuv2i32, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u64, MCK_DPR, MCK_QPR }, 0},
  { 1822 /* vqmovun */, ARM::VQMOVNsuv8i8, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_DPR, MCK_QPR }, 0},
  { 1822 /* vqmovun */, ARM::VQMOVNsuv4i16, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_DPR, MCK_QPR }, 0},
  { 1822 /* vqmovun */, ARM::VQMOVNsuv2i32, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s64, MCK_DPR, MCK_QPR }, 0},
  { 1830 /* vqneg */, ARM::VQNEGv4i16, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_DPR, MCK_DPR }, 0},
  { 1830 /* vqneg */, ARM::VQNEGv8i16, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_QPR, MCK_QPR }, 0},
  { 1830 /* vqneg */, ARM::VQNEGv2i32, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_DPR, MCK_DPR }, 0},
  { 1830 /* vqneg */, ARM::VQNEGv4i32, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_QPR, MCK_QPR }, 0},
  { 1830 /* vqneg */, ARM::VQNEGv8i8, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_DPR, MCK_DPR }, 0},
  { 1830 /* vqneg */, ARM::VQNEGv16i8, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_QPR, MCK_QPR }, 0},
  { 1836 /* vqrdmulh */, ARM::VQRDMULHv4i16, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_DPR, MCK_DPR }, 0},
  { 1836 /* vqrdmulh */, ARM::VQRDMULHv8i16, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_QPR, MCK_QPR }, 0},
  { 1836 /* vqrdmulh */, ARM::VQRDMULHv2i32, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_DPR, MCK_DPR }, 0},
  { 1836 /* vqrdmulh */, ARM::VQRDMULHv4i32, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_QPR, MCK_QPR }, 0},
  { 1836 /* vqrdmulh */, ARM::VQRDMULHv4i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1836 /* vqrdmulh */, ARM::VQRDMULHv8i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1836 /* vqrdmulh */, ARM::VQRDMULHv2i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1836 /* vqrdmulh */, ARM::VQRDMULHv4i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1836 /* vqrdmulh */, ARM::VQRDMULHslv4i16, Convert__Reg1_2__Reg1_3__Reg1_4__VectorIndex161_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_DPR, MCK_DPR, MCK_DPR_8, MCK_VectorIndex16 }, 0},
  { 1836 /* vqrdmulh */, ARM::VQRDMULHslv8i16, Convert__Reg1_2__Reg1_3__Reg1_4__VectorIndex161_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_QPR, MCK_QPR, MCK_DPR_8, MCK_VectorIndex16 }, 0},
  { 1836 /* vqrdmulh */, ARM::VQRDMULHslv2i32, Convert__Reg1_2__Reg1_3__Reg1_4__VectorIndex321_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_DPR, MCK_DPR, MCK_DPR_VFP2, MCK_VectorIndex32 }, 0},
  { 1836 /* vqrdmulh */, ARM::VQRDMULHslv4i32, Convert__Reg1_2__Reg1_3__Reg1_4__VectorIndex321_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_QPR, MCK_QPR, MCK_DPR_VFP2, MCK_VectorIndex32 }, 0},
  { 1845 /* vqrshl */, ARM::VQRSHLsv4i16, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_DPR, MCK_DPR }, 0},
  { 1845 /* vqrshl */, ARM::VQRSHLsv8i16, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_QPR, MCK_QPR }, 0},
  { 1845 /* vqrshl */, ARM::VQRSHLsv2i32, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_DPR, MCK_DPR }, 0},
  { 1845 /* vqrshl */, ARM::VQRSHLsv4i32, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_QPR, MCK_QPR }, 0},
  { 1845 /* vqrshl */, ARM::VQRSHLsv1i64, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s64, MCK_DPR, MCK_DPR }, 0},
  { 1845 /* vqrshl */, ARM::VQRSHLsv2i64, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s64, MCK_QPR, MCK_QPR }, 0},
  { 1845 /* vqrshl */, ARM::VQRSHLsv8i8, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_DPR, MCK_DPR }, 0},
  { 1845 /* vqrshl */, ARM::VQRSHLsv16i8, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_QPR, MCK_QPR }, 0},
  { 1845 /* vqrshl */, ARM::VQRSHLuv4i16, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_DPR, MCK_DPR }, 0},
  { 1845 /* vqrshl */, ARM::VQRSHLuv8i16, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_QPR, MCK_QPR }, 0},
  { 1845 /* vqrshl */, ARM::VQRSHLuv2i32, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_DPR, MCK_DPR }, 0},
  { 1845 /* vqrshl */, ARM::VQRSHLuv4i32, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_QPR, MCK_QPR }, 0},
  { 1845 /* vqrshl */, ARM::VQRSHLuv1i64, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u64, MCK_DPR, MCK_DPR }, 0},
  { 1845 /* vqrshl */, ARM::VQRSHLuv2i64, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u64, MCK_QPR, MCK_QPR }, 0},
  { 1845 /* vqrshl */, ARM::VQRSHLuv8i8, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_DPR, MCK_DPR }, 0},
  { 1845 /* vqrshl */, ARM::VQRSHLuv16i8, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_QPR, MCK_QPR }, 0},
  { 1845 /* vqrshl */, ARM::VQRSHLsv4i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1845 /* vqrshl */, ARM::VQRSHLsv8i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1845 /* vqrshl */, ARM::VQRSHLsv2i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1845 /* vqrshl */, ARM::VQRSHLsv4i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1845 /* vqrshl */, ARM::VQRSHLsv1i64, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s64, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1845 /* vqrshl */, ARM::VQRSHLsv2i64, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s64, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1845 /* vqrshl */, ARM::VQRSHLsv8i8, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1845 /* vqrshl */, ARM::VQRSHLsv16i8, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1845 /* vqrshl */, ARM::VQRSHLuv4i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1845 /* vqrshl */, ARM::VQRSHLuv8i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1845 /* vqrshl */, ARM::VQRSHLuv2i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1845 /* vqrshl */, ARM::VQRSHLuv4i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1845 /* vqrshl */, ARM::VQRSHLuv1i64, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u64, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1845 /* vqrshl */, ARM::VQRSHLuv2i64, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u64, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1845 /* vqrshl */, ARM::VQRSHLuv8i8, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1845 /* vqrshl */, ARM::VQRSHLuv16i8, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1852 /* vqrshrn */, ARM::VQRSHRNsv8i8, Convert__Reg1_2__Reg1_3__ShrImm81_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_DPR, MCK_QPR, MCK_ShrImm8 }, 0},
  { 1852 /* vqrshrn */, ARM::VQRSHRNsv4i16, Convert__Reg1_2__Reg1_3__ShrImm161_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_DPR, MCK_QPR, MCK_ShrImm16 }, 0},
  { 1852 /* vqrshrn */, ARM::VQRSHRNsv2i32, Convert__Reg1_2__Reg1_3__ShrImm321_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s64, MCK_DPR, MCK_QPR, MCK_ShrImm32 }, 0},
  { 1852 /* vqrshrn */, ARM::VQRSHRNuv8i8, Convert__Reg1_2__Reg1_3__ShrImm81_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_DPR, MCK_QPR, MCK_ShrImm8 }, 0},
  { 1852 /* vqrshrn */, ARM::VQRSHRNuv4i16, Convert__Reg1_2__Reg1_3__ShrImm161_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_DPR, MCK_QPR, MCK_ShrImm16 }, 0},
  { 1852 /* vqrshrn */, ARM::VQRSHRNuv2i32, Convert__Reg1_2__Reg1_3__ShrImm321_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u64, MCK_DPR, MCK_QPR, MCK_ShrImm32 }, 0},
  { 1860 /* vqrshrun */, ARM::VQRSHRUNv8i8, Convert__Reg1_2__Reg1_3__ShrImm81_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_DPR, MCK_QPR, MCK_ShrImm8 }, 0},
  { 1860 /* vqrshrun */, ARM::VQRSHRUNv4i16, Convert__Reg1_2__Reg1_3__ShrImm161_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_DPR, MCK_QPR, MCK_ShrImm16 }, 0},
  { 1860 /* vqrshrun */, ARM::VQRSHRUNv2i32, Convert__Reg1_2__Reg1_3__ShrImm321_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s64, MCK_DPR, MCK_QPR, MCK_ShrImm32 }, 0},
  { 1869 /* vqshl */, ARM::VQSHLsv4i16, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_DPR, MCK_DPR }, 0},
  { 1869 /* vqshl */, ARM::VQSHLsiv4i16, Convert__Reg1_2__Reg1_2__Imm1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_DPR, MCK_Imm }, 0},
  { 1869 /* vqshl */, ARM::VQSHLsv8i16, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_QPR, MCK_QPR }, 0},
  { 1869 /* vqshl */, ARM::VQSHLsiv8i16, Convert__Reg1_2__Reg1_2__Imm1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_QPR, MCK_Imm }, 0},
  { 1869 /* vqshl */, ARM::VQSHLsv2i32, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_DPR, MCK_DPR }, 0},
  { 1869 /* vqshl */, ARM::VQSHLsiv2i32, Convert__Reg1_2__Reg1_2__Imm1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_DPR, MCK_Imm }, 0},
  { 1869 /* vqshl */, ARM::VQSHLsv4i32, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_QPR, MCK_QPR }, 0},
  { 1869 /* vqshl */, ARM::VQSHLsiv4i32, Convert__Reg1_2__Reg1_2__Imm1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_QPR, MCK_Imm }, 0},
  { 1869 /* vqshl */, ARM::VQSHLsv1i64, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s64, MCK_DPR, MCK_DPR }, 0},
  { 1869 /* vqshl */, ARM::VQSHLsiv1i64, Convert__Reg1_2__Reg1_2__Imm1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s64, MCK_DPR, MCK_Imm }, 0},
  { 1869 /* vqshl */, ARM::VQSHLsv2i64, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s64, MCK_QPR, MCK_QPR }, 0},
  { 1869 /* vqshl */, ARM::VQSHLsiv2i64, Convert__Reg1_2__Reg1_2__Imm1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s64, MCK_QPR, MCK_Imm }, 0},
  { 1869 /* vqshl */, ARM::VQSHLsv8i8, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_DPR, MCK_DPR }, 0},
  { 1869 /* vqshl */, ARM::VQSHLsiv8i8, Convert__Reg1_2__Reg1_2__Imm1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_DPR, MCK_Imm }, 0},
  { 1869 /* vqshl */, ARM::VQSHLsv16i8, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_QPR, MCK_QPR }, 0},
  { 1869 /* vqshl */, ARM::VQSHLsiv16i8, Convert__Reg1_2__Reg1_2__Imm1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_QPR, MCK_Imm }, 0},
  { 1869 /* vqshl */, ARM::VQSHLuv4i16, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_DPR, MCK_DPR }, 0},
  { 1869 /* vqshl */, ARM::VQSHLuiv4i16, Convert__Reg1_2__Reg1_2__Imm1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_DPR, MCK_Imm }, 0},
  { 1869 /* vqshl */, ARM::VQSHLuv8i16, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_QPR, MCK_QPR }, 0},
  { 1869 /* vqshl */, ARM::VQSHLuiv8i16, Convert__Reg1_2__Reg1_2__Imm1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_QPR, MCK_Imm }, 0},
  { 1869 /* vqshl */, ARM::VQSHLuv2i32, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_DPR, MCK_DPR }, 0},
  { 1869 /* vqshl */, ARM::VQSHLuiv2i32, Convert__Reg1_2__Reg1_2__Imm1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_DPR, MCK_Imm }, 0},
  { 1869 /* vqshl */, ARM::VQSHLuv4i32, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_QPR, MCK_QPR }, 0},
  { 1869 /* vqshl */, ARM::VQSHLuiv4i32, Convert__Reg1_2__Reg1_2__Imm1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_QPR, MCK_Imm }, 0},
  { 1869 /* vqshl */, ARM::VQSHLuv1i64, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u64, MCK_DPR, MCK_DPR }, 0},
  { 1869 /* vqshl */, ARM::VQSHLuiv1i64, Convert__Reg1_2__Reg1_2__Imm1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u64, MCK_DPR, MCK_Imm }, 0},
  { 1869 /* vqshl */, ARM::VQSHLuv2i64, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u64, MCK_QPR, MCK_QPR }, 0},
  { 1869 /* vqshl */, ARM::VQSHLuiv2i64, Convert__Reg1_2__Reg1_2__Imm1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u64, MCK_QPR, MCK_Imm }, 0},
  { 1869 /* vqshl */, ARM::VQSHLuv8i8, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_DPR, MCK_DPR }, 0},
  { 1869 /* vqshl */, ARM::VQSHLuiv8i8, Convert__Reg1_2__Reg1_2__Imm1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_DPR, MCK_Imm }, 0},
  { 1869 /* vqshl */, ARM::VQSHLuv16i8, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_QPR, MCK_QPR }, 0},
  { 1869 /* vqshl */, ARM::VQSHLuiv16i8, Convert__Reg1_2__Reg1_2__Imm1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_QPR, MCK_Imm }, 0},
  { 1869 /* vqshl */, ARM::VQSHLsv4i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1869 /* vqshl */, ARM::VQSHLsiv4i16, Convert__Reg1_2__Reg1_3__Imm1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_DPR, MCK_DPR, MCK_Imm }, 0},
  { 1869 /* vqshl */, ARM::VQSHLsv8i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1869 /* vqshl */, ARM::VQSHLsiv8i16, Convert__Reg1_2__Reg1_3__Imm1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_QPR, MCK_QPR, MCK_Imm }, 0},
  { 1869 /* vqshl */, ARM::VQSHLsv2i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1869 /* vqshl */, ARM::VQSHLsiv2i32, Convert__Reg1_2__Reg1_3__Imm1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_DPR, MCK_DPR, MCK_Imm }, 0},
  { 1869 /* vqshl */, ARM::VQSHLsv4i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1869 /* vqshl */, ARM::VQSHLsiv4i32, Convert__Reg1_2__Reg1_3__Imm1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_QPR, MCK_QPR, MCK_Imm }, 0},
  { 1869 /* vqshl */, ARM::VQSHLsv1i64, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s64, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1869 /* vqshl */, ARM::VQSHLsiv1i64, Convert__Reg1_2__Reg1_3__Imm1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s64, MCK_DPR, MCK_DPR, MCK_Imm }, 0},
  { 1869 /* vqshl */, ARM::VQSHLsv2i64, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s64, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1869 /* vqshl */, ARM::VQSHLsiv2i64, Convert__Reg1_2__Reg1_3__Imm1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s64, MCK_QPR, MCK_QPR, MCK_Imm }, 0},
  { 1869 /* vqshl */, ARM::VQSHLsv8i8, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1869 /* vqshl */, ARM::VQSHLsiv8i8, Convert__Reg1_2__Reg1_3__Imm1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_DPR, MCK_DPR, MCK_Imm }, 0},
  { 1869 /* vqshl */, ARM::VQSHLsv16i8, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1869 /* vqshl */, ARM::VQSHLsiv16i8, Convert__Reg1_2__Reg1_3__Imm1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_QPR, MCK_QPR, MCK_Imm }, 0},
  { 1869 /* vqshl */, ARM::VQSHLuv4i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1869 /* vqshl */, ARM::VQSHLuiv4i16, Convert__Reg1_2__Reg1_3__Imm1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_DPR, MCK_DPR, MCK_Imm }, 0},
  { 1869 /* vqshl */, ARM::VQSHLuv8i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1869 /* vqshl */, ARM::VQSHLuiv8i16, Convert__Reg1_2__Reg1_3__Imm1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_QPR, MCK_QPR, MCK_Imm }, 0},
  { 1869 /* vqshl */, ARM::VQSHLuv2i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1869 /* vqshl */, ARM::VQSHLuiv2i32, Convert__Reg1_2__Reg1_3__Imm1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_DPR, MCK_DPR, MCK_Imm }, 0},
  { 1869 /* vqshl */, ARM::VQSHLuv4i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1869 /* vqshl */, ARM::VQSHLuiv4i32, Convert__Reg1_2__Reg1_3__Imm1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_QPR, MCK_QPR, MCK_Imm }, 0},
  { 1869 /* vqshl */, ARM::VQSHLuv1i64, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u64, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1869 /* vqshl */, ARM::VQSHLuiv1i64, Convert__Reg1_2__Reg1_3__Imm1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u64, MCK_DPR, MCK_DPR, MCK_Imm }, 0},
  { 1869 /* vqshl */, ARM::VQSHLuv2i64, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u64, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1869 /* vqshl */, ARM::VQSHLuiv2i64, Convert__Reg1_2__Reg1_3__Imm1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u64, MCK_QPR, MCK_QPR, MCK_Imm }, 0},
  { 1869 /* vqshl */, ARM::VQSHLuv8i8, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1869 /* vqshl */, ARM::VQSHLuiv8i8, Convert__Reg1_2__Reg1_3__Imm1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_DPR, MCK_DPR, MCK_Imm }, 0},
  { 1869 /* vqshl */, ARM::VQSHLuv16i8, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1869 /* vqshl */, ARM::VQSHLuiv16i8, Convert__Reg1_2__Reg1_3__Imm1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_QPR, MCK_QPR, MCK_Imm }, 0},
  { 1875 /* vqshlu */, ARM::VQSHLsuv4i16, Convert__Reg1_2__Reg1_2__Imm1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_DPR, MCK_Imm }, 0},
  { 1875 /* vqshlu */, ARM::VQSHLsuv8i16, Convert__Reg1_2__Reg1_2__Imm1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_QPR, MCK_Imm }, 0},
  { 1875 /* vqshlu */, ARM::VQSHLsuv2i32, Convert__Reg1_2__Reg1_2__Imm1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_DPR, MCK_Imm }, 0},
  { 1875 /* vqshlu */, ARM::VQSHLsuv4i32, Convert__Reg1_2__Reg1_2__Imm1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_QPR, MCK_Imm }, 0},
  { 1875 /* vqshlu */, ARM::VQSHLsuv1i64, Convert__Reg1_2__Reg1_2__Imm1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s64, MCK_DPR, MCK_Imm }, 0},
  { 1875 /* vqshlu */, ARM::VQSHLsuv2i64, Convert__Reg1_2__Reg1_2__Imm1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s64, MCK_QPR, MCK_Imm }, 0},
  { 1875 /* vqshlu */, ARM::VQSHLsuv8i8, Convert__Reg1_2__Reg1_2__Imm1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_DPR, MCK_Imm }, 0},
  { 1875 /* vqshlu */, ARM::VQSHLsuv16i8, Convert__Reg1_2__Reg1_2__Imm1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_QPR, MCK_Imm }, 0},
  { 1875 /* vqshlu */, ARM::VQSHLsuv4i16, Convert__Reg1_2__Reg1_3__Imm1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_DPR, MCK_DPR, MCK_Imm }, 0},
  { 1875 /* vqshlu */, ARM::VQSHLsuv8i16, Convert__Reg1_2__Reg1_3__Imm1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_QPR, MCK_QPR, MCK_Imm }, 0},
  { 1875 /* vqshlu */, ARM::VQSHLsuv2i32, Convert__Reg1_2__Reg1_3__Imm1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_DPR, MCK_DPR, MCK_Imm }, 0},
  { 1875 /* vqshlu */, ARM::VQSHLsuv4i32, Convert__Reg1_2__Reg1_3__Imm1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_QPR, MCK_QPR, MCK_Imm }, 0},
  { 1875 /* vqshlu */, ARM::VQSHLsuv1i64, Convert__Reg1_2__Reg1_3__Imm1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s64, MCK_DPR, MCK_DPR, MCK_Imm }, 0},
  { 1875 /* vqshlu */, ARM::VQSHLsuv2i64, Convert__Reg1_2__Reg1_3__Imm1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s64, MCK_QPR, MCK_QPR, MCK_Imm }, 0},
  { 1875 /* vqshlu */, ARM::VQSHLsuv8i8, Convert__Reg1_2__Reg1_3__Imm1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_DPR, MCK_DPR, MCK_Imm }, 0},
  { 1875 /* vqshlu */, ARM::VQSHLsuv16i8, Convert__Reg1_2__Reg1_3__Imm1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_QPR, MCK_QPR, MCK_Imm }, 0},
  { 1882 /* vqshrn */, ARM::VQSHRNsv8i8, Convert__Reg1_2__Reg1_3__ShrImm81_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_DPR, MCK_QPR, MCK_ShrImm8 }, 0},
  { 1882 /* vqshrn */, ARM::VQSHRNsv4i16, Convert__Reg1_2__Reg1_3__ShrImm161_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_DPR, MCK_QPR, MCK_ShrImm16 }, 0},
  { 1882 /* vqshrn */, ARM::VQSHRNsv2i32, Convert__Reg1_2__Reg1_3__ShrImm321_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s64, MCK_DPR, MCK_QPR, MCK_ShrImm32 }, 0},
  { 1882 /* vqshrn */, ARM::VQSHRNuv8i8, Convert__Reg1_2__Reg1_3__ShrImm81_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_DPR, MCK_QPR, MCK_ShrImm8 }, 0},
  { 1882 /* vqshrn */, ARM::VQSHRNuv4i16, Convert__Reg1_2__Reg1_3__ShrImm161_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_DPR, MCK_QPR, MCK_ShrImm16 }, 0},
  { 1882 /* vqshrn */, ARM::VQSHRNuv2i32, Convert__Reg1_2__Reg1_3__ShrImm321_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u64, MCK_DPR, MCK_QPR, MCK_ShrImm32 }, 0},
  { 1889 /* vqshrun */, ARM::VQSHRUNv8i8, Convert__Reg1_2__Reg1_3__ShrImm81_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_DPR, MCK_QPR, MCK_ShrImm8 }, 0},
  { 1889 /* vqshrun */, ARM::VQSHRUNv4i16, Convert__Reg1_2__Reg1_3__ShrImm161_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_DPR, MCK_QPR, MCK_ShrImm16 }, 0},
  { 1889 /* vqshrun */, ARM::VQSHRUNv2i32, Convert__Reg1_2__Reg1_3__ShrImm321_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s64, MCK_DPR, MCK_QPR, MCK_ShrImm32 }, 0},
  { 1897 /* vqsub */, ARM::VQSUBsv4i16, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_DPR, MCK_DPR }, 0},
  { 1897 /* vqsub */, ARM::VQSUBsv8i16, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_QPR, MCK_QPR }, 0},
  { 1897 /* vqsub */, ARM::VQSUBsv2i32, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_DPR, MCK_DPR }, 0},
  { 1897 /* vqsub */, ARM::VQSUBsv4i32, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_QPR, MCK_QPR }, 0},
  { 1897 /* vqsub */, ARM::VQSUBsv1i64, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s64, MCK_DPR, MCK_DPR }, 0},
  { 1897 /* vqsub */, ARM::VQSUBsv2i64, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s64, MCK_QPR, MCK_QPR }, 0},
  { 1897 /* vqsub */, ARM::VQSUBsv8i8, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_DPR, MCK_DPR }, 0},
  { 1897 /* vqsub */, ARM::VQSUBsv16i8, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_QPR, MCK_QPR }, 0},
  { 1897 /* vqsub */, ARM::VQSUBuv4i16, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_DPR, MCK_DPR }, 0},
  { 1897 /* vqsub */, ARM::VQSUBuv8i16, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_QPR, MCK_QPR }, 0},
  { 1897 /* vqsub */, ARM::VQSUBuv2i32, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_DPR, MCK_DPR }, 0},
  { 1897 /* vqsub */, ARM::VQSUBuv4i32, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_QPR, MCK_QPR }, 0},
  { 1897 /* vqsub */, ARM::VQSUBuv1i64, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u64, MCK_DPR, MCK_DPR }, 0},
  { 1897 /* vqsub */, ARM::VQSUBuv2i64, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u64, MCK_QPR, MCK_QPR }, 0},
  { 1897 /* vqsub */, ARM::VQSUBuv8i8, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_DPR, MCK_DPR }, 0},
  { 1897 /* vqsub */, ARM::VQSUBuv16i8, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_QPR, MCK_QPR }, 0},
  { 1897 /* vqsub */, ARM::VQSUBsv4i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1897 /* vqsub */, ARM::VQSUBsv8i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1897 /* vqsub */, ARM::VQSUBsv2i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1897 /* vqsub */, ARM::VQSUBsv4i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1897 /* vqsub */, ARM::VQSUBsv1i64, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s64, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1897 /* vqsub */, ARM::VQSUBsv2i64, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s64, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1897 /* vqsub */, ARM::VQSUBsv8i8, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1897 /* vqsub */, ARM::VQSUBsv16i8, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1897 /* vqsub */, ARM::VQSUBuv4i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1897 /* vqsub */, ARM::VQSUBuv8i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1897 /* vqsub */, ARM::VQSUBuv2i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1897 /* vqsub */, ARM::VQSUBuv4i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1897 /* vqsub */, ARM::VQSUBuv1i64, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u64, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1897 /* vqsub */, ARM::VQSUBuv2i64, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u64, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1897 /* vqsub */, ARM::VQSUBuv8i8, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1897 /* vqsub */, ARM::VQSUBuv16i8, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1903 /* vraddhn */, ARM::VRADDHNv8i8, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i16, MCK_DPR, MCK_QPR, MCK_QPR }, 0},
  { 1903 /* vraddhn */, ARM::VRADDHNv4i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i32, MCK_DPR, MCK_QPR, MCK_QPR }, 0},
  { 1903 /* vraddhn */, ARM::VRADDHNv2i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i64, MCK_DPR, MCK_QPR, MCK_QPR }, 0},
  { 1911 /* vrecpe */, ARM::VRECPEfd, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_DPR, MCK_DPR }, 0},
  { 1911 /* vrecpe */, ARM::VRECPEfq, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_QPR, MCK_QPR }, 0},
  { 1911 /* vrecpe */, ARM::VRECPEd, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_DPR, MCK_DPR }, 0},
  { 1911 /* vrecpe */, ARM::VRECPEq, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_QPR, MCK_QPR }, 0},
  { 1918 /* vrecps */, ARM::VRECPSfd, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_DPR, MCK_DPR }, 0},
  { 1918 /* vrecps */, ARM::VRECPSfq, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_QPR, MCK_QPR }, 0},
  { 1918 /* vrecps */, ARM::VRECPSfd, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1918 /* vrecps */, ARM::VRECPSfq, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1925 /* vrev16 */, ARM::VREV16d8, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_DPR, MCK_DPR }, 0},
  { 1925 /* vrev16 */, ARM::VREV16q8, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_QPR, MCK_QPR }, 0},
  { 1932 /* vrev32 */, ARM::VREV32d16, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_DPR, MCK_DPR }, 0},
  { 1932 /* vrev32 */, ARM::VREV32q16, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_QPR, MCK_QPR }, 0},
  { 1932 /* vrev32 */, ARM::VREV32d8, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_DPR, MCK_DPR }, 0},
  { 1932 /* vrev32 */, ARM::VREV32q8, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_QPR, MCK_QPR }, 0},
  { 1939 /* vrev64 */, ARM::VREV64d16, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_DPR, MCK_DPR }, 0},
  { 1939 /* vrev64 */, ARM::VREV64q16, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_QPR, MCK_QPR }, 0},
  { 1939 /* vrev64 */, ARM::VREV64d32, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_DPR, MCK_DPR }, 0},
  { 1939 /* vrev64 */, ARM::VREV64q32, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_QPR, MCK_QPR }, 0},
  { 1939 /* vrev64 */, ARM::VREV64d8, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_DPR, MCK_DPR }, 0},
  { 1939 /* vrev64 */, ARM::VREV64q8, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_QPR, MCK_QPR }, 0},
  { 1946 /* vrhadd */, ARM::VRHADDsv4i16, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_DPR, MCK_DPR }, 0},
  { 1946 /* vrhadd */, ARM::VRHADDsv8i16, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_QPR, MCK_QPR }, 0},
  { 1946 /* vrhadd */, ARM::VRHADDsv2i32, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_DPR, MCK_DPR }, 0},
  { 1946 /* vrhadd */, ARM::VRHADDsv4i32, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_QPR, MCK_QPR }, 0},
  { 1946 /* vrhadd */, ARM::VRHADDsv8i8, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_DPR, MCK_DPR }, 0},
  { 1946 /* vrhadd */, ARM::VRHADDsv16i8, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_QPR, MCK_QPR }, 0},
  { 1946 /* vrhadd */, ARM::VRHADDuv4i16, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_DPR, MCK_DPR }, 0},
  { 1946 /* vrhadd */, ARM::VRHADDuv8i16, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_QPR, MCK_QPR }, 0},
  { 1946 /* vrhadd */, ARM::VRHADDuv2i32, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_DPR, MCK_DPR }, 0},
  { 1946 /* vrhadd */, ARM::VRHADDuv4i32, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_QPR, MCK_QPR }, 0},
  { 1946 /* vrhadd */, ARM::VRHADDuv8i8, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_DPR, MCK_DPR }, 0},
  { 1946 /* vrhadd */, ARM::VRHADDuv16i8, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_QPR, MCK_QPR }, 0},
  { 1946 /* vrhadd */, ARM::VRHADDsv4i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1946 /* vrhadd */, ARM::VRHADDsv8i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1946 /* vrhadd */, ARM::VRHADDsv2i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1946 /* vrhadd */, ARM::VRHADDsv4i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1946 /* vrhadd */, ARM::VRHADDsv8i8, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1946 /* vrhadd */, ARM::VRHADDsv16i8, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1946 /* vrhadd */, ARM::VRHADDuv4i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1946 /* vrhadd */, ARM::VRHADDuv8i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1946 /* vrhadd */, ARM::VRHADDuv2i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1946 /* vrhadd */, ARM::VRHADDuv4i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1946 /* vrhadd */, ARM::VRHADDuv8i8, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1946 /* vrhadd */, ARM::VRHADDuv16i8, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1953 /* vrshl */, ARM::VRSHLsv4i16, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_DPR, MCK_DPR }, 0},
  { 1953 /* vrshl */, ARM::VRSHLsv8i16, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_QPR, MCK_QPR }, 0},
  { 1953 /* vrshl */, ARM::VRSHLsv2i32, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_DPR, MCK_DPR }, 0},
  { 1953 /* vrshl */, ARM::VRSHLsv4i32, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_QPR, MCK_QPR }, 0},
  { 1953 /* vrshl */, ARM::VRSHLsv1i64, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s64, MCK_DPR, MCK_DPR }, 0},
  { 1953 /* vrshl */, ARM::VRSHLsv2i64, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s64, MCK_QPR, MCK_QPR }, 0},
  { 1953 /* vrshl */, ARM::VRSHLsv8i8, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_DPR, MCK_DPR }, 0},
  { 1953 /* vrshl */, ARM::VRSHLsv16i8, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_QPR, MCK_QPR }, 0},
  { 1953 /* vrshl */, ARM::VRSHLuv4i16, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_DPR, MCK_DPR }, 0},
  { 1953 /* vrshl */, ARM::VRSHLuv8i16, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_QPR, MCK_QPR }, 0},
  { 1953 /* vrshl */, ARM::VRSHLuv2i32, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_DPR, MCK_DPR }, 0},
  { 1953 /* vrshl */, ARM::VRSHLuv4i32, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_QPR, MCK_QPR }, 0},
  { 1953 /* vrshl */, ARM::VRSHLuv1i64, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u64, MCK_DPR, MCK_DPR }, 0},
  { 1953 /* vrshl */, ARM::VRSHLuv2i64, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u64, MCK_QPR, MCK_QPR }, 0},
  { 1953 /* vrshl */, ARM::VRSHLuv8i8, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_DPR, MCK_DPR }, 0},
  { 1953 /* vrshl */, ARM::VRSHLuv16i8, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_QPR, MCK_QPR }, 0},
  { 1953 /* vrshl */, ARM::VRSHLsv4i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1953 /* vrshl */, ARM::VRSHLsv8i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1953 /* vrshl */, ARM::VRSHLsv2i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1953 /* vrshl */, ARM::VRSHLsv4i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1953 /* vrshl */, ARM::VRSHLsv1i64, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s64, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1953 /* vrshl */, ARM::VRSHLsv2i64, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s64, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1953 /* vrshl */, ARM::VRSHLsv8i8, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1953 /* vrshl */, ARM::VRSHLsv16i8, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1953 /* vrshl */, ARM::VRSHLuv4i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1953 /* vrshl */, ARM::VRSHLuv8i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1953 /* vrshl */, ARM::VRSHLuv2i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1953 /* vrshl */, ARM::VRSHLuv4i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1953 /* vrshl */, ARM::VRSHLuv1i64, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u64, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1953 /* vrshl */, ARM::VRSHLuv2i64, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u64, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1953 /* vrshl */, ARM::VRSHLuv8i8, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1953 /* vrshl */, ARM::VRSHLuv16i8, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1959 /* vrshr */, ARM::VRSHRsv4i16, Convert__Reg1_2__Reg1_2__ShrImm161_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_DPR, MCK_ShrImm16 }, 0},
  { 1959 /* vrshr */, ARM::VRSHRsv8i16, Convert__Reg1_2__Reg1_2__ShrImm161_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_QPR, MCK_ShrImm16 }, 0},
  { 1959 /* vrshr */, ARM::VRSHRsv2i32, Convert__Reg1_2__Reg1_2__ShrImm321_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_DPR, MCK_ShrImm32 }, 0},
  { 1959 /* vrshr */, ARM::VRSHRsv4i32, Convert__Reg1_2__Reg1_2__ShrImm321_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_QPR, MCK_ShrImm32 }, 0},
  { 1959 /* vrshr */, ARM::VRSHRsv1i64, Convert__Reg1_2__Reg1_2__ShrImm641_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s64, MCK_DPR, MCK_ShrImm64 }, 0},
  { 1959 /* vrshr */, ARM::VRSHRsv2i64, Convert__Reg1_2__Reg1_2__ShrImm641_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s64, MCK_QPR, MCK_ShrImm64 }, 0},
  { 1959 /* vrshr */, ARM::VRSHRsv8i8, Convert__Reg1_2__Reg1_2__ShrImm81_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_DPR, MCK_ShrImm8 }, 0},
  { 1959 /* vrshr */, ARM::VRSHRsv16i8, Convert__Reg1_2__Reg1_2__ShrImm81_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_QPR, MCK_ShrImm8 }, 0},
  { 1959 /* vrshr */, ARM::VRSHRuv4i16, Convert__Reg1_2__Reg1_2__ShrImm161_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_DPR, MCK_ShrImm16 }, 0},
  { 1959 /* vrshr */, ARM::VRSHRuv8i16, Convert__Reg1_2__Reg1_2__ShrImm161_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_QPR, MCK_ShrImm16 }, 0},
  { 1959 /* vrshr */, ARM::VRSHRuv2i32, Convert__Reg1_2__Reg1_2__ShrImm321_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_DPR, MCK_ShrImm32 }, 0},
  { 1959 /* vrshr */, ARM::VRSHRuv4i32, Convert__Reg1_2__Reg1_2__ShrImm321_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_QPR, MCK_ShrImm32 }, 0},
  { 1959 /* vrshr */, ARM::VRSHRuv1i64, Convert__Reg1_2__Reg1_2__ShrImm641_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u64, MCK_DPR, MCK_ShrImm64 }, 0},
  { 1959 /* vrshr */, ARM::VRSHRuv2i64, Convert__Reg1_2__Reg1_2__ShrImm641_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u64, MCK_QPR, MCK_ShrImm64 }, 0},
  { 1959 /* vrshr */, ARM::VRSHRuv8i8, Convert__Reg1_2__Reg1_2__ShrImm81_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_DPR, MCK_ShrImm8 }, 0},
  { 1959 /* vrshr */, ARM::VRSHRuv16i8, Convert__Reg1_2__Reg1_2__ShrImm81_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_QPR, MCK_ShrImm8 }, 0},
  { 1959 /* vrshr */, ARM::VRSHRsv4i16, Convert__Reg1_2__Reg1_3__ShrImm161_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_DPR, MCK_DPR, MCK_ShrImm16 }, 0},
  { 1959 /* vrshr */, ARM::VRSHRsv8i16, Convert__Reg1_2__Reg1_3__ShrImm161_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_QPR, MCK_QPR, MCK_ShrImm16 }, 0},
  { 1959 /* vrshr */, ARM::VRSHRsv2i32, Convert__Reg1_2__Reg1_3__ShrImm321_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_DPR, MCK_DPR, MCK_ShrImm32 }, 0},
  { 1959 /* vrshr */, ARM::VRSHRsv4i32, Convert__Reg1_2__Reg1_3__ShrImm321_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_QPR, MCK_QPR, MCK_ShrImm32 }, 0},
  { 1959 /* vrshr */, ARM::VRSHRsv1i64, Convert__Reg1_2__Reg1_3__ShrImm641_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s64, MCK_DPR, MCK_DPR, MCK_ShrImm64 }, 0},
  { 1959 /* vrshr */, ARM::VRSHRsv2i64, Convert__Reg1_2__Reg1_3__ShrImm641_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s64, MCK_QPR, MCK_QPR, MCK_ShrImm64 }, 0},
  { 1959 /* vrshr */, ARM::VRSHRsv8i8, Convert__Reg1_2__Reg1_3__ShrImm81_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_DPR, MCK_DPR, MCK_ShrImm8 }, 0},
  { 1959 /* vrshr */, ARM::VRSHRsv16i8, Convert__Reg1_2__Reg1_3__ShrImm81_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_QPR, MCK_QPR, MCK_ShrImm8 }, 0},
  { 1959 /* vrshr */, ARM::VRSHRuv4i16, Convert__Reg1_2__Reg1_3__ShrImm161_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_DPR, MCK_DPR, MCK_ShrImm16 }, 0},
  { 1959 /* vrshr */, ARM::VRSHRuv8i16, Convert__Reg1_2__Reg1_3__ShrImm161_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_QPR, MCK_QPR, MCK_ShrImm16 }, 0},
  { 1959 /* vrshr */, ARM::VRSHRuv2i32, Convert__Reg1_2__Reg1_3__ShrImm321_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_DPR, MCK_DPR, MCK_ShrImm32 }, 0},
  { 1959 /* vrshr */, ARM::VRSHRuv4i32, Convert__Reg1_2__Reg1_3__ShrImm321_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_QPR, MCK_QPR, MCK_ShrImm32 }, 0},
  { 1959 /* vrshr */, ARM::VRSHRuv1i64, Convert__Reg1_2__Reg1_3__ShrImm641_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u64, MCK_DPR, MCK_DPR, MCK_ShrImm64 }, 0},
  { 1959 /* vrshr */, ARM::VRSHRuv2i64, Convert__Reg1_2__Reg1_3__ShrImm641_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u64, MCK_QPR, MCK_QPR, MCK_ShrImm64 }, 0},
  { 1959 /* vrshr */, ARM::VRSHRuv8i8, Convert__Reg1_2__Reg1_3__ShrImm81_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_DPR, MCK_DPR, MCK_ShrImm8 }, 0},
  { 1959 /* vrshr */, ARM::VRSHRuv16i8, Convert__Reg1_2__Reg1_3__ShrImm81_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_QPR, MCK_QPR, MCK_ShrImm8 }, 0},
  { 1965 /* vrshrn */, ARM::VRSHRNv8i8, Convert__Reg1_2__Reg1_3__ShrImm81_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i16, MCK_DPR, MCK_QPR, MCK_ShrImm8 }, 0},
  { 1965 /* vrshrn */, ARM::VRSHRNv4i16, Convert__Reg1_2__Reg1_3__ShrImm161_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i32, MCK_DPR, MCK_QPR, MCK_ShrImm16 }, 0},
  { 1965 /* vrshrn */, ARM::VRSHRNv2i32, Convert__Reg1_2__Reg1_3__ShrImm321_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i64, MCK_DPR, MCK_QPR, MCK_ShrImm32 }, 0},
  { 1972 /* vrsqrte */, ARM::VRSQRTEfd, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_DPR, MCK_DPR }, 0},
  { 1972 /* vrsqrte */, ARM::VRSQRTEfq, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_QPR, MCK_QPR }, 0},
  { 1972 /* vrsqrte */, ARM::VRSQRTEd, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_DPR, MCK_DPR }, 0},
  { 1972 /* vrsqrte */, ARM::VRSQRTEq, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_QPR, MCK_QPR }, 0},
  { 1980 /* vrsqrts */, ARM::VRSQRTSfd, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_DPR, MCK_DPR }, 0},
  { 1980 /* vrsqrts */, ARM::VRSQRTSfq, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_QPR, MCK_QPR }, 0},
  { 1980 /* vrsqrts */, ARM::VRSQRTSfd, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 1980 /* vrsqrts */, ARM::VRSQRTSfq, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 1988 /* vrsra */, ARM::VRSRAsv4i16, Convert__Reg1_2__Tie0__Reg1_2__ShrImm161_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_DPR, MCK_ShrImm16 }, 0},
  { 1988 /* vrsra */, ARM::VRSRAsv8i16, Convert__Reg1_2__Tie0__Reg1_2__ShrImm161_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_QPR, MCK_ShrImm16 }, 0},
  { 1988 /* vrsra */, ARM::VRSRAsv2i32, Convert__Reg1_2__Tie0__Reg1_2__ShrImm321_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_DPR, MCK_ShrImm32 }, 0},
  { 1988 /* vrsra */, ARM::VRSRAsv4i32, Convert__Reg1_2__Tie0__Reg1_2__ShrImm321_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_QPR, MCK_ShrImm32 }, 0},
  { 1988 /* vrsra */, ARM::VRSRAsv1i64, Convert__Reg1_2__Tie0__Reg1_2__ShrImm641_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s64, MCK_DPR, MCK_ShrImm64 }, 0},
  { 1988 /* vrsra */, ARM::VRSRAsv2i64, Convert__Reg1_2__Tie0__Reg1_2__ShrImm641_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s64, MCK_QPR, MCK_ShrImm64 }, 0},
  { 1988 /* vrsra */, ARM::VRSRAsv8i8, Convert__Reg1_2__Tie0__Reg1_2__ShrImm81_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_DPR, MCK_ShrImm8 }, 0},
  { 1988 /* vrsra */, ARM::VRSRAsv16i8, Convert__Reg1_2__Tie0__Reg1_2__ShrImm81_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_QPR, MCK_ShrImm8 }, 0},
  { 1988 /* vrsra */, ARM::VRSRAuv4i16, Convert__Reg1_2__Tie0__Reg1_2__ShrImm161_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_DPR, MCK_ShrImm16 }, 0},
  { 1988 /* vrsra */, ARM::VRSRAuv8i16, Convert__Reg1_2__Tie0__Reg1_2__ShrImm161_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_QPR, MCK_ShrImm16 }, 0},
  { 1988 /* vrsra */, ARM::VRSRAuv2i32, Convert__Reg1_2__Tie0__Reg1_2__ShrImm321_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_DPR, MCK_ShrImm32 }, 0},
  { 1988 /* vrsra */, ARM::VRSRAuv4i32, Convert__Reg1_2__Tie0__Reg1_2__ShrImm321_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_QPR, MCK_ShrImm32 }, 0},
  { 1988 /* vrsra */, ARM::VRSRAuv1i64, Convert__Reg1_2__Tie0__Reg1_2__ShrImm641_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u64, MCK_DPR, MCK_ShrImm64 }, 0},
  { 1988 /* vrsra */, ARM::VRSRAuv2i64, Convert__Reg1_2__Tie0__Reg1_2__ShrImm641_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u64, MCK_QPR, MCK_ShrImm64 }, 0},
  { 1988 /* vrsra */, ARM::VRSRAuv8i8, Convert__Reg1_2__Tie0__Reg1_2__ShrImm81_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_DPR, MCK_ShrImm8 }, 0},
  { 1988 /* vrsra */, ARM::VRSRAuv16i8, Convert__Reg1_2__Tie0__Reg1_2__ShrImm81_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_QPR, MCK_ShrImm8 }, 0},
  { 1988 /* vrsra */, ARM::VRSRAsv4i16, Convert__Reg1_2__Tie0__Reg1_3__ShrImm161_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_DPR, MCK_DPR, MCK_ShrImm16 }, 0},
  { 1988 /* vrsra */, ARM::VRSRAsv8i16, Convert__Reg1_2__Tie0__Reg1_3__ShrImm161_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_QPR, MCK_QPR, MCK_ShrImm16 }, 0},
  { 1988 /* vrsra */, ARM::VRSRAsv2i32, Convert__Reg1_2__Tie0__Reg1_3__ShrImm321_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_DPR, MCK_DPR, MCK_ShrImm32 }, 0},
  { 1988 /* vrsra */, ARM::VRSRAsv4i32, Convert__Reg1_2__Tie0__Reg1_3__ShrImm321_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_QPR, MCK_QPR, MCK_ShrImm32 }, 0},
  { 1988 /* vrsra */, ARM::VRSRAsv1i64, Convert__Reg1_2__Tie0__Reg1_3__ShrImm641_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s64, MCK_DPR, MCK_DPR, MCK_ShrImm64 }, 0},
  { 1988 /* vrsra */, ARM::VRSRAsv2i64, Convert__Reg1_2__Tie0__Reg1_3__ShrImm641_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s64, MCK_QPR, MCK_QPR, MCK_ShrImm64 }, 0},
  { 1988 /* vrsra */, ARM::VRSRAsv8i8, Convert__Reg1_2__Tie0__Reg1_3__ShrImm81_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_DPR, MCK_DPR, MCK_ShrImm8 }, 0},
  { 1988 /* vrsra */, ARM::VRSRAsv16i8, Convert__Reg1_2__Tie0__Reg1_3__ShrImm81_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_QPR, MCK_QPR, MCK_ShrImm8 }, 0},
  { 1988 /* vrsra */, ARM::VRSRAuv4i16, Convert__Reg1_2__Tie0__Reg1_3__ShrImm161_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_DPR, MCK_DPR, MCK_ShrImm16 }, 0},
  { 1988 /* vrsra */, ARM::VRSRAuv8i16, Convert__Reg1_2__Tie0__Reg1_3__ShrImm161_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_QPR, MCK_QPR, MCK_ShrImm16 }, 0},
  { 1988 /* vrsra */, ARM::VRSRAuv2i32, Convert__Reg1_2__Tie0__Reg1_3__ShrImm321_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_DPR, MCK_DPR, MCK_ShrImm32 }, 0},
  { 1988 /* vrsra */, ARM::VRSRAuv4i32, Convert__Reg1_2__Tie0__Reg1_3__ShrImm321_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_QPR, MCK_QPR, MCK_ShrImm32 }, 0},
  { 1988 /* vrsra */, ARM::VRSRAuv1i64, Convert__Reg1_2__Tie0__Reg1_3__ShrImm641_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u64, MCK_DPR, MCK_DPR, MCK_ShrImm64 }, 0},
  { 1988 /* vrsra */, ARM::VRSRAuv2i64, Convert__Reg1_2__Tie0__Reg1_3__ShrImm641_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u64, MCK_QPR, MCK_QPR, MCK_ShrImm64 }, 0},
  { 1988 /* vrsra */, ARM::VRSRAuv8i8, Convert__Reg1_2__Tie0__Reg1_3__ShrImm81_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_DPR, MCK_DPR, MCK_ShrImm8 }, 0},
  { 1988 /* vrsra */, ARM::VRSRAuv16i8, Convert__Reg1_2__Tie0__Reg1_3__ShrImm81_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_QPR, MCK_QPR, MCK_ShrImm8 }, 0},
  { 1994 /* vrsubhn */, ARM::VRSUBHNv8i8, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i16, MCK_DPR, MCK_QPR, MCK_QPR }, 0},
  { 1994 /* vrsubhn */, ARM::VRSUBHNv4i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i32, MCK_DPR, MCK_QPR, MCK_QPR }, 0},
  { 1994 /* vrsubhn */, ARM::VRSUBHNv2i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i64, MCK_DPR, MCK_QPR, MCK_QPR }, 0},
  { 2002 /* vshl */, ARM::VSHLsv4i16, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_DPR, MCK_DPR }, 0},
  { 2002 /* vshl */, ARM::VSHLsv8i16, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_QPR, MCK_QPR }, 0},
  { 2002 /* vshl */, ARM::VSHLiv4i16, Convert__Reg1_2__Reg1_2__Imm1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i16, MCK_DPR, MCK_Imm }, 0},
  { 2002 /* vshl */, ARM::VSHLiv8i16, Convert__Reg1_2__Reg1_2__Imm1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i16, MCK_QPR, MCK_Imm }, 0},
  { 2002 /* vshl */, ARM::VSHLsv4i32, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_QPR, MCK_QPR }, 0},
  { 2002 /* vshl */, ARM::VSHLiv2i32, Convert__Reg1_2__Reg1_2__Imm1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i32, MCK_DPR, MCK_Imm }, 0},
  { 2002 /* vshl */, ARM::VSHLiv4i32, Convert__Reg1_2__Reg1_2__Imm1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i32, MCK_QPR, MCK_Imm }, 0},
  { 2002 /* vshl */, ARM::VSHLiv1i64, Convert__Reg1_2__Reg1_2__Imm1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i64, MCK_DPR, MCK_Imm }, 0},
  { 2002 /* vshl */, ARM::VSHLiv2i64, Convert__Reg1_2__Reg1_2__Imm1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i64, MCK_QPR, MCK_Imm }, 0},
  { 2002 /* vshl */, ARM::VSHLsv8i8, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_DPR, MCK_DPR }, 0},
  { 2002 /* vshl */, ARM::VSHLsv16i8, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_QPR, MCK_QPR }, 0},
  { 2002 /* vshl */, ARM::VSHLiv8i8, Convert__Reg1_2__Reg1_2__Imm1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i8, MCK_DPR, MCK_Imm }, 0},
  { 2002 /* vshl */, ARM::VSHLiv16i8, Convert__Reg1_2__Reg1_2__Imm1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i8, MCK_QPR, MCK_Imm }, 0},
  { 2002 /* vshl */, ARM::VSHLsv2i32, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_DPR, MCK_DPR }, 0},
  { 2002 /* vshl */, ARM::VSHLsv1i64, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s64, MCK_DPR, MCK_DPR }, 0},
  { 2002 /* vshl */, ARM::VSHLsv2i64, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s64, MCK_QPR, MCK_QPR }, 0},
  { 2002 /* vshl */, ARM::VSHLuv4i16, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_DPR, MCK_DPR }, 0},
  { 2002 /* vshl */, ARM::VSHLuv8i16, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_QPR, MCK_QPR }, 0},
  { 2002 /* vshl */, ARM::VSHLuv2i32, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_DPR, MCK_DPR }, 0},
  { 2002 /* vshl */, ARM::VSHLuv4i32, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_QPR, MCK_QPR }, 0},
  { 2002 /* vshl */, ARM::VSHLuv1i64, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u64, MCK_DPR, MCK_DPR }, 0},
  { 2002 /* vshl */, ARM::VSHLuv2i64, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u64, MCK_QPR, MCK_QPR }, 0},
  { 2002 /* vshl */, ARM::VSHLuv8i8, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_DPR, MCK_DPR }, 0},
  { 2002 /* vshl */, ARM::VSHLuv16i8, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_QPR, MCK_QPR }, 0},
  { 2002 /* vshl */, ARM::VSHLiv1i64, Convert__Reg1_2__Reg1_3__Imm1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i64, MCK_DPR, MCK_DPR, MCK_Imm }, 0},
  { 2002 /* vshl */, ARM::VSHLiv16i8, Convert__Reg1_2__Reg1_3__Imm1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i8, MCK_QPR, MCK_QPR, MCK_Imm }, 0},
  { 2002 /* vshl */, ARM::VSHLsv4i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 2002 /* vshl */, ARM::VSHLsv8i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 2002 /* vshl */, ARM::VSHLuv4i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 2002 /* vshl */, ARM::VSHLuv8i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 2002 /* vshl */, ARM::VSHLiv4i16, Convert__Reg1_2__Reg1_3__Imm1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i16, MCK_DPR, MCK_DPR, MCK_Imm }, 0},
  { 2002 /* vshl */, ARM::VSHLiv8i16, Convert__Reg1_2__Reg1_3__Imm1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i16, MCK_QPR, MCK_QPR, MCK_Imm }, 0},
  { 2002 /* vshl */, ARM::VSHLsv2i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 2002 /* vshl */, ARM::VSHLsv4i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 2002 /* vshl */, ARM::VSHLuv2i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 2002 /* vshl */, ARM::VSHLuv4i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 2002 /* vshl */, ARM::VSHLiv2i32, Convert__Reg1_2__Reg1_3__Imm1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i32, MCK_DPR, MCK_DPR, MCK_Imm }, 0},
  { 2002 /* vshl */, ARM::VSHLiv4i32, Convert__Reg1_2__Reg1_3__Imm1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i32, MCK_QPR, MCK_QPR, MCK_Imm }, 0},
  { 2002 /* vshl */, ARM::VSHLsv1i64, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s64, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 2002 /* vshl */, ARM::VSHLsv2i64, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s64, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 2002 /* vshl */, ARM::VSHLuv1i64, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u64, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 2002 /* vshl */, ARM::VSHLuv2i64, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u64, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 2002 /* vshl */, ARM::VSHLiv2i64, Convert__Reg1_2__Reg1_3__Imm1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i64, MCK_QPR, MCK_QPR, MCK_Imm }, 0},
  { 2002 /* vshl */, ARM::VSHLsv8i8, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 2002 /* vshl */, ARM::VSHLsv16i8, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 2002 /* vshl */, ARM::VSHLuv8i8, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 2002 /* vshl */, ARM::VSHLuv16i8, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 2002 /* vshl */, ARM::VSHLiv8i8, Convert__Reg1_2__Reg1_3__Imm1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i8, MCK_DPR, MCK_DPR, MCK_Imm }, 0},
  { 2007 /* vshll */, ARM::VSHLLsv4i32, Convert__Reg1_2__Reg1_3__Imm1_151_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_QPR, MCK_DPR, MCK_Imm1_15 }, 0},
  { 2007 /* vshll */, ARM::VSHLLi16, Convert__Reg1_2__Reg1_3__Imm161_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i16, MCK_QPR, MCK_DPR, MCK_Imm16 }, 0},
  { 2007 /* vshll */, ARM::VSHLLi32, Convert__Reg1_2__Reg1_3__Imm321_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i32, MCK_QPR, MCK_DPR, MCK_Imm32 }, 0},
  { 2007 /* vshll */, ARM::VSHLLsv8i16, Convert__Reg1_2__Reg1_3__Imm1_71_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_QPR, MCK_DPR, MCK_Imm1_7 }, 0},
  { 2007 /* vshll */, ARM::VSHLLi8, Convert__Reg1_2__Reg1_3__Imm81_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i8, MCK_QPR, MCK_DPR, MCK_Imm8 }, 0},
  { 2007 /* vshll */, ARM::VSHLLsv2i64, Convert__Reg1_2__Reg1_3__Imm1_311_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_QPR, MCK_DPR, MCK_Imm1_31 }, 0},
  { 2007 /* vshll */, ARM::VSHLLuv4i32, Convert__Reg1_2__Reg1_3__Imm1_151_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_QPR, MCK_DPR, MCK_Imm1_15 }, 0},
  { 2007 /* vshll */, ARM::VSHLLuv2i64, Convert__Reg1_2__Reg1_3__Imm1_311_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_QPR, MCK_DPR, MCK_Imm1_31 }, 0},
  { 2007 /* vshll */, ARM::VSHLLuv8i16, Convert__Reg1_2__Reg1_3__Imm1_71_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_QPR, MCK_DPR, MCK_Imm1_7 }, 0},
  { 2013 /* vshr */, ARM::VSHRsv4i16, Convert__Reg1_2__Reg1_2__ShrImm161_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_DPR, MCK_ShrImm16 }, 0},
  { 2013 /* vshr */, ARM::VSHRsv8i16, Convert__Reg1_2__Reg1_2__ShrImm161_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_QPR, MCK_ShrImm16 }, 0},
  { 2013 /* vshr */, ARM::VSHRsv2i32, Convert__Reg1_2__Reg1_2__ShrImm321_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_DPR, MCK_ShrImm32 }, 0},
  { 2013 /* vshr */, ARM::VSHRsv4i32, Convert__Reg1_2__Reg1_2__ShrImm321_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_QPR, MCK_ShrImm32 }, 0},
  { 2013 /* vshr */, ARM::VSHRsv1i64, Convert__Reg1_2__Reg1_2__ShrImm641_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s64, MCK_DPR, MCK_ShrImm64 }, 0},
  { 2013 /* vshr */, ARM::VSHRsv2i64, Convert__Reg1_2__Reg1_2__ShrImm641_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s64, MCK_QPR, MCK_ShrImm64 }, 0},
  { 2013 /* vshr */, ARM::VSHRsv8i8, Convert__Reg1_2__Reg1_2__ShrImm81_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_DPR, MCK_ShrImm8 }, 0},
  { 2013 /* vshr */, ARM::VSHRsv16i8, Convert__Reg1_2__Reg1_2__ShrImm81_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_QPR, MCK_ShrImm8 }, 0},
  { 2013 /* vshr */, ARM::VSHRuv4i16, Convert__Reg1_2__Reg1_2__ShrImm161_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_DPR, MCK_ShrImm16 }, 0},
  { 2013 /* vshr */, ARM::VSHRuv8i16, Convert__Reg1_2__Reg1_2__ShrImm161_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_QPR, MCK_ShrImm16 }, 0},
  { 2013 /* vshr */, ARM::VSHRuv2i32, Convert__Reg1_2__Reg1_2__ShrImm321_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_DPR, MCK_ShrImm32 }, 0},
  { 2013 /* vshr */, ARM::VSHRuv4i32, Convert__Reg1_2__Reg1_2__ShrImm321_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_QPR, MCK_ShrImm32 }, 0},
  { 2013 /* vshr */, ARM::VSHRuv1i64, Convert__Reg1_2__Reg1_2__ShrImm641_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u64, MCK_DPR, MCK_ShrImm64 }, 0},
  { 2013 /* vshr */, ARM::VSHRuv2i64, Convert__Reg1_2__Reg1_2__ShrImm641_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u64, MCK_QPR, MCK_ShrImm64 }, 0},
  { 2013 /* vshr */, ARM::VSHRuv8i8, Convert__Reg1_2__Reg1_2__ShrImm81_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_DPR, MCK_ShrImm8 }, 0},
  { 2013 /* vshr */, ARM::VSHRuv16i8, Convert__Reg1_2__Reg1_2__ShrImm81_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_QPR, MCK_ShrImm8 }, 0},
  { 2013 /* vshr */, ARM::VSHRsv4i16, Convert__Reg1_2__Reg1_3__ShrImm161_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_DPR, MCK_DPR, MCK_ShrImm16 }, 0},
  { 2013 /* vshr */, ARM::VSHRsv8i16, Convert__Reg1_2__Reg1_3__ShrImm161_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_QPR, MCK_QPR, MCK_ShrImm16 }, 0},
  { 2013 /* vshr */, ARM::VSHRsv2i32, Convert__Reg1_2__Reg1_3__ShrImm321_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_DPR, MCK_DPR, MCK_ShrImm32 }, 0},
  { 2013 /* vshr */, ARM::VSHRsv4i32, Convert__Reg1_2__Reg1_3__ShrImm321_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_QPR, MCK_QPR, MCK_ShrImm32 }, 0},
  { 2013 /* vshr */, ARM::VSHRsv1i64, Convert__Reg1_2__Reg1_3__ShrImm641_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s64, MCK_DPR, MCK_DPR, MCK_ShrImm64 }, 0},
  { 2013 /* vshr */, ARM::VSHRsv2i64, Convert__Reg1_2__Reg1_3__ShrImm641_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s64, MCK_QPR, MCK_QPR, MCK_ShrImm64 }, 0},
  { 2013 /* vshr */, ARM::VSHRsv8i8, Convert__Reg1_2__Reg1_3__ShrImm81_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_DPR, MCK_DPR, MCK_ShrImm8 }, 0},
  { 2013 /* vshr */, ARM::VSHRsv16i8, Convert__Reg1_2__Reg1_3__ShrImm81_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_QPR, MCK_QPR, MCK_ShrImm8 }, 0},
  { 2013 /* vshr */, ARM::VSHRuv4i16, Convert__Reg1_2__Reg1_3__ShrImm161_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_DPR, MCK_DPR, MCK_ShrImm16 }, 0},
  { 2013 /* vshr */, ARM::VSHRuv8i16, Convert__Reg1_2__Reg1_3__ShrImm161_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_QPR, MCK_QPR, MCK_ShrImm16 }, 0},
  { 2013 /* vshr */, ARM::VSHRuv2i32, Convert__Reg1_2__Reg1_3__ShrImm321_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_DPR, MCK_DPR, MCK_ShrImm32 }, 0},
  { 2013 /* vshr */, ARM::VSHRuv4i32, Convert__Reg1_2__Reg1_3__ShrImm321_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_QPR, MCK_QPR, MCK_ShrImm32 }, 0},
  { 2013 /* vshr */, ARM::VSHRuv1i64, Convert__Reg1_2__Reg1_3__ShrImm641_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u64, MCK_DPR, MCK_DPR, MCK_ShrImm64 }, 0},
  { 2013 /* vshr */, ARM::VSHRuv2i64, Convert__Reg1_2__Reg1_3__ShrImm641_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u64, MCK_QPR, MCK_QPR, MCK_ShrImm64 }, 0},
  { 2013 /* vshr */, ARM::VSHRuv8i8, Convert__Reg1_2__Reg1_3__ShrImm81_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_DPR, MCK_DPR, MCK_ShrImm8 }, 0},
  { 2013 /* vshr */, ARM::VSHRuv16i8, Convert__Reg1_2__Reg1_3__ShrImm81_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_QPR, MCK_QPR, MCK_ShrImm8 }, 0},
  { 2018 /* vshrn */, ARM::VSHRNv8i8, Convert__Reg1_2__Reg1_3__ShrImm81_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i16, MCK_DPR, MCK_QPR, MCK_ShrImm8 }, 0},
  { 2018 /* vshrn */, ARM::VSHRNv4i16, Convert__Reg1_2__Reg1_3__ShrImm161_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i32, MCK_DPR, MCK_QPR, MCK_ShrImm16 }, 0},
  { 2018 /* vshrn */, ARM::VSHRNv2i32, Convert__Reg1_2__Reg1_3__ShrImm321_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i64, MCK_DPR, MCK_QPR, MCK_ShrImm32 }, 0},
  { 2024 /* vsli */, ARM::VSLIv4i16, Convert__Reg1_2__Tie0__Reg1_2__Imm1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_DPR, MCK_Imm }, 0},
  { 2024 /* vsli */, ARM::VSLIv8i16, Convert__Reg1_2__Tie0__Reg1_2__Imm1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_QPR, MCK_Imm }, 0},
  { 2024 /* vsli */, ARM::VSLIv2i32, Convert__Reg1_2__Tie0__Reg1_2__Imm1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_DPR, MCK_Imm }, 0},
  { 2024 /* vsli */, ARM::VSLIv4i32, Convert__Reg1_2__Tie0__Reg1_2__Imm1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_QPR, MCK_Imm }, 0},
  { 2024 /* vsli */, ARM::VSLIv1i64, Convert__Reg1_2__Tie0__Reg1_2__Imm1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_64, MCK_DPR, MCK_Imm }, 0},
  { 2024 /* vsli */, ARM::VSLIv2i64, Convert__Reg1_2__Tie0__Reg1_2__Imm1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_64, MCK_QPR, MCK_Imm }, 0},
  { 2024 /* vsli */, ARM::VSLIv8i8, Convert__Reg1_2__Tie0__Reg1_2__Imm1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_DPR, MCK_Imm }, 0},
  { 2024 /* vsli */, ARM::VSLIv16i8, Convert__Reg1_2__Tie0__Reg1_2__Imm1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_QPR, MCK_Imm }, 0},
  { 2024 /* vsli */, ARM::VSLIv4i16, Convert__Reg1_2__Tie0__Reg1_3__Imm1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_DPR, MCK_DPR, MCK_Imm }, 0},
  { 2024 /* vsli */, ARM::VSLIv8i16, Convert__Reg1_2__Tie0__Reg1_3__Imm1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_QPR, MCK_QPR, MCK_Imm }, 0},
  { 2024 /* vsli */, ARM::VSLIv2i32, Convert__Reg1_2__Tie0__Reg1_3__Imm1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_DPR, MCK_DPR, MCK_Imm }, 0},
  { 2024 /* vsli */, ARM::VSLIv4i32, Convert__Reg1_2__Tie0__Reg1_3__Imm1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_QPR, MCK_QPR, MCK_Imm }, 0},
  { 2024 /* vsli */, ARM::VSLIv1i64, Convert__Reg1_2__Tie0__Reg1_3__Imm1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_64, MCK_DPR, MCK_DPR, MCK_Imm }, 0},
  { 2024 /* vsli */, ARM::VSLIv2i64, Convert__Reg1_2__Tie0__Reg1_3__Imm1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_64, MCK_QPR, MCK_QPR, MCK_Imm }, 0},
  { 2024 /* vsli */, ARM::VSLIv8i8, Convert__Reg1_2__Tie0__Reg1_3__Imm1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_DPR, MCK_DPR, MCK_Imm }, 0},
  { 2024 /* vsli */, ARM::VSLIv16i8, Convert__Reg1_2__Tie0__Reg1_3__Imm1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_QPR, MCK_QPR, MCK_Imm }, 0},
  { 2029 /* vsqrt */, ARM::VSQRTS, Convert__Reg1_1__Reg1_2__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK_SPR, MCK_SPR }, 0},
  { 2029 /* vsqrt */, ARM::VSQRTD, Convert__Reg1_1__Reg1_2__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK_DPR, MCK_DPR }, 0},
  { 2029 /* vsqrt */, ARM::VSQRTS, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_f32, MCK_SPR, MCK_SPR }, 0},
  { 2029 /* vsqrt */, ARM::VSQRTD, Convert__Reg1_2__Reg1_3__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_f64, MCK_DPR, MCK_DPR }, 0},
  { 2035 /* vsra */, ARM::VSRAsv4i16, Convert__Reg1_2__Tie0__Reg1_2__ShrImm161_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_DPR, MCK_ShrImm16 }, 0},
  { 2035 /* vsra */, ARM::VSRAsv8i16, Convert__Reg1_2__Tie0__Reg1_2__ShrImm161_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_QPR, MCK_ShrImm16 }, 0},
  { 2035 /* vsra */, ARM::VSRAsv2i32, Convert__Reg1_2__Tie0__Reg1_2__ShrImm321_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_DPR, MCK_ShrImm32 }, 0},
  { 2035 /* vsra */, ARM::VSRAsv4i32, Convert__Reg1_2__Tie0__Reg1_2__ShrImm321_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_QPR, MCK_ShrImm32 }, 0},
  { 2035 /* vsra */, ARM::VSRAsv1i64, Convert__Reg1_2__Tie0__Reg1_2__ShrImm641_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s64, MCK_DPR, MCK_ShrImm64 }, 0},
  { 2035 /* vsra */, ARM::VSRAsv2i64, Convert__Reg1_2__Tie0__Reg1_2__ShrImm641_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s64, MCK_QPR, MCK_ShrImm64 }, 0},
  { 2035 /* vsra */, ARM::VSRAsv8i8, Convert__Reg1_2__Tie0__Reg1_2__ShrImm81_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_DPR, MCK_ShrImm8 }, 0},
  { 2035 /* vsra */, ARM::VSRAsv16i8, Convert__Reg1_2__Tie0__Reg1_2__ShrImm81_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_QPR, MCK_ShrImm8 }, 0},
  { 2035 /* vsra */, ARM::VSRAuv4i16, Convert__Reg1_2__Tie0__Reg1_2__ShrImm161_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_DPR, MCK_ShrImm16 }, 0},
  { 2035 /* vsra */, ARM::VSRAuv8i16, Convert__Reg1_2__Tie0__Reg1_2__ShrImm161_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_QPR, MCK_ShrImm16 }, 0},
  { 2035 /* vsra */, ARM::VSRAuv2i32, Convert__Reg1_2__Tie0__Reg1_2__ShrImm321_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_DPR, MCK_ShrImm32 }, 0},
  { 2035 /* vsra */, ARM::VSRAuv4i32, Convert__Reg1_2__Tie0__Reg1_2__ShrImm321_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_QPR, MCK_ShrImm32 }, 0},
  { 2035 /* vsra */, ARM::VSRAuv1i64, Convert__Reg1_2__Tie0__Reg1_2__ShrImm641_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u64, MCK_DPR, MCK_ShrImm64 }, 0},
  { 2035 /* vsra */, ARM::VSRAuv2i64, Convert__Reg1_2__Tie0__Reg1_2__ShrImm641_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u64, MCK_QPR, MCK_ShrImm64 }, 0},
  { 2035 /* vsra */, ARM::VSRAuv8i8, Convert__Reg1_2__Tie0__Reg1_2__ShrImm81_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_DPR, MCK_ShrImm8 }, 0},
  { 2035 /* vsra */, ARM::VSRAuv16i8, Convert__Reg1_2__Tie0__Reg1_2__ShrImm81_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_QPR, MCK_ShrImm8 }, 0},
  { 2035 /* vsra */, ARM::VSRAsv4i16, Convert__Reg1_2__Tie0__Reg1_3__ShrImm161_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_DPR, MCK_DPR, MCK_ShrImm16 }, 0},
  { 2035 /* vsra */, ARM::VSRAsv8i16, Convert__Reg1_2__Tie0__Reg1_3__ShrImm161_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_QPR, MCK_QPR, MCK_ShrImm16 }, 0},
  { 2035 /* vsra */, ARM::VSRAsv2i32, Convert__Reg1_2__Tie0__Reg1_3__ShrImm321_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_DPR, MCK_DPR, MCK_ShrImm32 }, 0},
  { 2035 /* vsra */, ARM::VSRAsv4i32, Convert__Reg1_2__Tie0__Reg1_3__ShrImm321_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_QPR, MCK_QPR, MCK_ShrImm32 }, 0},
  { 2035 /* vsra */, ARM::VSRAsv1i64, Convert__Reg1_2__Tie0__Reg1_3__ShrImm641_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s64, MCK_DPR, MCK_DPR, MCK_ShrImm64 }, 0},
  { 2035 /* vsra */, ARM::VSRAsv2i64, Convert__Reg1_2__Tie0__Reg1_3__ShrImm641_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s64, MCK_QPR, MCK_QPR, MCK_ShrImm64 }, 0},
  { 2035 /* vsra */, ARM::VSRAsv8i8, Convert__Reg1_2__Tie0__Reg1_3__ShrImm81_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_DPR, MCK_DPR, MCK_ShrImm8 }, 0},
  { 2035 /* vsra */, ARM::VSRAsv16i8, Convert__Reg1_2__Tie0__Reg1_3__ShrImm81_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_QPR, MCK_QPR, MCK_ShrImm8 }, 0},
  { 2035 /* vsra */, ARM::VSRAuv4i16, Convert__Reg1_2__Tie0__Reg1_3__ShrImm161_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_DPR, MCK_DPR, MCK_ShrImm16 }, 0},
  { 2035 /* vsra */, ARM::VSRAuv8i16, Convert__Reg1_2__Tie0__Reg1_3__ShrImm161_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_QPR, MCK_QPR, MCK_ShrImm16 }, 0},
  { 2035 /* vsra */, ARM::VSRAuv2i32, Convert__Reg1_2__Tie0__Reg1_3__ShrImm321_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_DPR, MCK_DPR, MCK_ShrImm32 }, 0},
  { 2035 /* vsra */, ARM::VSRAuv4i32, Convert__Reg1_2__Tie0__Reg1_3__ShrImm321_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_QPR, MCK_QPR, MCK_ShrImm32 }, 0},
  { 2035 /* vsra */, ARM::VSRAuv1i64, Convert__Reg1_2__Tie0__Reg1_3__ShrImm641_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u64, MCK_DPR, MCK_DPR, MCK_ShrImm64 }, 0},
  { 2035 /* vsra */, ARM::VSRAuv2i64, Convert__Reg1_2__Tie0__Reg1_3__ShrImm641_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u64, MCK_QPR, MCK_QPR, MCK_ShrImm64 }, 0},
  { 2035 /* vsra */, ARM::VSRAuv8i8, Convert__Reg1_2__Tie0__Reg1_3__ShrImm81_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_DPR, MCK_DPR, MCK_ShrImm8 }, 0},
  { 2035 /* vsra */, ARM::VSRAuv16i8, Convert__Reg1_2__Tie0__Reg1_3__ShrImm81_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_QPR, MCK_QPR, MCK_ShrImm8 }, 0},
  { 2040 /* vsri */, ARM::VSRIv4i16, Convert__Reg1_2__Tie0__Reg1_2__ShrImm161_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_DPR, MCK_ShrImm16 }, 0},
  { 2040 /* vsri */, ARM::VSRIv8i16, Convert__Reg1_2__Tie0__Reg1_2__ShrImm161_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_QPR, MCK_ShrImm16 }, 0},
  { 2040 /* vsri */, ARM::VSRIv2i32, Convert__Reg1_2__Tie0__Reg1_2__ShrImm321_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_DPR, MCK_ShrImm32 }, 0},
  { 2040 /* vsri */, ARM::VSRIv4i32, Convert__Reg1_2__Tie0__Reg1_2__ShrImm321_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_QPR, MCK_ShrImm32 }, 0},
  { 2040 /* vsri */, ARM::VSRIv1i64, Convert__Reg1_2__Tie0__Reg1_2__ShrImm641_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_64, MCK_DPR, MCK_ShrImm64 }, 0},
  { 2040 /* vsri */, ARM::VSRIv2i64, Convert__Reg1_2__Tie0__Reg1_2__ShrImm641_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_64, MCK_QPR, MCK_ShrImm64 }, 0},
  { 2040 /* vsri */, ARM::VSRIv8i8, Convert__Reg1_2__Tie0__Reg1_2__ShrImm81_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_DPR, MCK_ShrImm8 }, 0},
  { 2040 /* vsri */, ARM::VSRIv16i8, Convert__Reg1_2__Tie0__Reg1_2__ShrImm81_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_QPR, MCK_ShrImm8 }, 0},
  { 2040 /* vsri */, ARM::VSRIv4i16, Convert__Reg1_2__Tie0__Reg1_3__ShrImm161_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_DPR, MCK_DPR, MCK_ShrImm16 }, 0},
  { 2040 /* vsri */, ARM::VSRIv8i16, Convert__Reg1_2__Tie0__Reg1_3__ShrImm161_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_QPR, MCK_QPR, MCK_ShrImm16 }, 0},
  { 2040 /* vsri */, ARM::VSRIv2i32, Convert__Reg1_2__Tie0__Reg1_3__ShrImm321_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_DPR, MCK_DPR, MCK_ShrImm32 }, 0},
  { 2040 /* vsri */, ARM::VSRIv4i32, Convert__Reg1_2__Tie0__Reg1_3__ShrImm321_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_QPR, MCK_QPR, MCK_ShrImm32 }, 0},
  { 2040 /* vsri */, ARM::VSRIv1i64, Convert__Reg1_2__Tie0__Reg1_3__ShrImm641_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_64, MCK_DPR, MCK_DPR, MCK_ShrImm64 }, 0},
  { 2040 /* vsri */, ARM::VSRIv2i64, Convert__Reg1_2__Tie0__Reg1_3__ShrImm641_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_64, MCK_QPR, MCK_QPR, MCK_ShrImm64 }, 0},
  { 2040 /* vsri */, ARM::VSRIv8i8, Convert__Reg1_2__Tie0__Reg1_3__ShrImm81_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_DPR, MCK_DPR, MCK_ShrImm8 }, 0},
  { 2040 /* vsri */, ARM::VSRIv16i8, Convert__Reg1_2__Tie0__Reg1_3__ShrImm81_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_QPR, MCK_QPR, MCK_ShrImm8 }, 0},
  { 2045 /* vst1 */, ARM::VST1q16, Convert__AlignedMemory2_3__VecListDPair1_2__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListDPair, MCK_AlignedMemory }, 0},
  { 2045 /* vst1 */, ARM::VST1d16Q, Convert__AlignedMemory2_3__VecListFourD1_2__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListFourD, MCK_AlignedMemory }, 0},
  { 2045 /* vst1 */, ARM::VST1d16, Convert__AlignedMemory2_3__VecListOneD1_2__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListOneD, MCK_AlignedMemory }, 0},
  { 2045 /* vst1 */, ARM::VST1LNdAsm_16, Convert__VecListOneDHWordIndexed2_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListOneDHWordIndexed, MCK_AlignedMemory }, 0},
  { 2045 /* vst1 */, ARM::VST1d16T, Convert__AlignedMemory2_3__VecListThreeD1_2__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListThreeD, MCK_AlignedMemory }, 0},
  { 2045 /* vst1 */, ARM::VST1q32, Convert__AlignedMemory2_3__VecListDPair1_2__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListDPair, MCK_AlignedMemory }, 0},
  { 2045 /* vst1 */, ARM::VST1d32Q, Convert__AlignedMemory2_3__VecListFourD1_2__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListFourD, MCK_AlignedMemory }, 0},
  { 2045 /* vst1 */, ARM::VST1d32, Convert__AlignedMemory2_3__VecListOneD1_2__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListOneD, MCK_AlignedMemory }, 0},
  { 2045 /* vst1 */, ARM::VST1LNdAsm_32, Convert__VecListOneDWordIndexed2_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListOneDWordIndexed, MCK_AlignedMemory }, 0},
  { 2045 /* vst1 */, ARM::VST1d32T, Convert__AlignedMemory2_3__VecListThreeD1_2__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListThreeD, MCK_AlignedMemory }, 0},
  { 2045 /* vst1 */, ARM::VST1q64, Convert__AlignedMemory2_3__VecListDPair1_2__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_64, MCK_VecListDPair, MCK_AlignedMemory }, 0},
  { 2045 /* vst1 */, ARM::VST1d64Q, Convert__AlignedMemory2_3__VecListFourD1_2__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_64, MCK_VecListFourD, MCK_AlignedMemory }, 0},
  { 2045 /* vst1 */, ARM::VST1d64, Convert__AlignedMemory2_3__VecListOneD1_2__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_64, MCK_VecListOneD, MCK_AlignedMemory }, 0},
  { 2045 /* vst1 */, ARM::VST1d64T, Convert__AlignedMemory2_3__VecListThreeD1_2__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_64, MCK_VecListThreeD, MCK_AlignedMemory }, 0},
  { 2045 /* vst1 */, ARM::VST1q8, Convert__AlignedMemory2_3__VecListDPair1_2__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListDPair, MCK_AlignedMemory }, 0},
  { 2045 /* vst1 */, ARM::VST1d8Q, Convert__AlignedMemory2_3__VecListFourD1_2__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListFourD, MCK_AlignedMemory }, 0},
  { 2045 /* vst1 */, ARM::VST1d8, Convert__AlignedMemory2_3__VecListOneD1_2__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListOneD, MCK_AlignedMemory }, 0},
  { 2045 /* vst1 */, ARM::VST1LNdAsm_8, Convert__VecListOneDByteIndexed2_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListOneDByteIndexed, MCK_AlignedMemory }, 0},
  { 2045 /* vst1 */, ARM::VST1d8T, Convert__AlignedMemory2_3__VecListThreeD1_2__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListThreeD, MCK_AlignedMemory }, 0},
  { 2045 /* vst1 */, ARM::VST1q16wb_fixed, ConvertCustom_cvtVSTwbFixed, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListDPair, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 2045 /* vst1 */, ARM::VST1q16wb_register, ConvertCustom_cvtVSTwbRegister, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListDPair, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 2045 /* vst1 */, ARM::VST1d16Qwb_fixed, ConvertCustom_cvtVSTwbFixed, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListFourD, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 2045 /* vst1 */, ARM::VST1d16Qwb_register, ConvertCustom_cvtVSTwbRegister, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListFourD, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 2045 /* vst1 */, ARM::VST1d16wb_fixed, ConvertCustom_cvtVSTwbFixed, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListOneD, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 2045 /* vst1 */, ARM::VST1d16wb_register, ConvertCustom_cvtVSTwbRegister, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListOneD, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 2045 /* vst1 */, ARM::VST1LNdWB_fixed_Asm_16, Convert__VecListOneDHWordIndexed2_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListOneDHWordIndexed, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 2045 /* vst1 */, ARM::VST1LNdWB_register_Asm_16, Convert__VecListOneDHWordIndexed2_2__AlignedMemory2_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListOneDHWordIndexed, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 2045 /* vst1 */, ARM::VST1d16Twb_fixed, ConvertCustom_cvtVSTwbFixed, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListThreeD, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 2045 /* vst1 */, ARM::VST1d16Twb_register, ConvertCustom_cvtVSTwbRegister, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListThreeD, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 2045 /* vst1 */, ARM::VST1q32wb_fixed, ConvertCustom_cvtVSTwbFixed, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListDPair, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 2045 /* vst1 */, ARM::VST1q32wb_register, ConvertCustom_cvtVSTwbRegister, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListDPair, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 2045 /* vst1 */, ARM::VST1d32Qwb_fixed, ConvertCustom_cvtVSTwbFixed, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListFourD, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 2045 /* vst1 */, ARM::VST1d32Qwb_register, ConvertCustom_cvtVSTwbRegister, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListFourD, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 2045 /* vst1 */, ARM::VST1d32wb_fixed, ConvertCustom_cvtVSTwbFixed, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListOneD, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 2045 /* vst1 */, ARM::VST1d32wb_register, ConvertCustom_cvtVSTwbRegister, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListOneD, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 2045 /* vst1 */, ARM::VST1LNdWB_fixed_Asm_32, Convert__VecListOneDWordIndexed2_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListOneDWordIndexed, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 2045 /* vst1 */, ARM::VST1LNdWB_register_Asm_32, Convert__VecListOneDWordIndexed2_2__AlignedMemory2_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListOneDWordIndexed, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 2045 /* vst1 */, ARM::VST1d32Twb_fixed, ConvertCustom_cvtVSTwbFixed, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListThreeD, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 2045 /* vst1 */, ARM::VST1d32Twb_register, ConvertCustom_cvtVSTwbRegister, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListThreeD, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 2045 /* vst1 */, ARM::VST1q64wb_fixed, ConvertCustom_cvtVSTwbFixed, Feature_HasNEON, { MCK_CondCode, MCK__DOT_64, MCK_VecListDPair, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 2045 /* vst1 */, ARM::VST1q64wb_register, ConvertCustom_cvtVSTwbRegister, Feature_HasNEON, { MCK_CondCode, MCK__DOT_64, MCK_VecListDPair, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 2045 /* vst1 */, ARM::VST1d64Qwb_fixed, ConvertCustom_cvtVSTwbFixed, Feature_HasNEON, { MCK_CondCode, MCK__DOT_64, MCK_VecListFourD, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 2045 /* vst1 */, ARM::VST1d64Qwb_register, ConvertCustom_cvtVSTwbRegister, Feature_HasNEON, { MCK_CondCode, MCK__DOT_64, MCK_VecListFourD, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 2045 /* vst1 */, ARM::VST1d64wb_fixed, ConvertCustom_cvtVSTwbFixed, Feature_HasNEON, { MCK_CondCode, MCK__DOT_64, MCK_VecListOneD, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 2045 /* vst1 */, ARM::VST1d64wb_register, ConvertCustom_cvtVSTwbRegister, Feature_HasNEON, { MCK_CondCode, MCK__DOT_64, MCK_VecListOneD, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 2045 /* vst1 */, ARM::VST1d64Twb_fixed, ConvertCustom_cvtVSTwbFixed, Feature_HasNEON, { MCK_CondCode, MCK__DOT_64, MCK_VecListThreeD, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 2045 /* vst1 */, ARM::VST1d64Twb_register, ConvertCustom_cvtVSTwbRegister, Feature_HasNEON, { MCK_CondCode, MCK__DOT_64, MCK_VecListThreeD, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 2045 /* vst1 */, ARM::VST1q8wb_fixed, ConvertCustom_cvtVSTwbFixed, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListDPair, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 2045 /* vst1 */, ARM::VST1q8wb_register, ConvertCustom_cvtVSTwbRegister, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListDPair, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 2045 /* vst1 */, ARM::VST1d8Qwb_fixed, ConvertCustom_cvtVSTwbFixed, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListFourD, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 2045 /* vst1 */, ARM::VST1d8Qwb_register, ConvertCustom_cvtVSTwbRegister, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListFourD, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 2045 /* vst1 */, ARM::VST1d8wb_fixed, ConvertCustom_cvtVSTwbFixed, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListOneD, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 2045 /* vst1 */, ARM::VST1d8wb_register, ConvertCustom_cvtVSTwbRegister, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListOneD, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 2045 /* vst1 */, ARM::VST1LNdWB_fixed_Asm_8, Convert__VecListOneDByteIndexed2_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListOneDByteIndexed, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 2045 /* vst1 */, ARM::VST1LNdWB_register_Asm_8, Convert__VecListOneDByteIndexed2_2__AlignedMemory2_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListOneDByteIndexed, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 2045 /* vst1 */, ARM::VST1d8Twb_fixed, ConvertCustom_cvtVSTwbFixed, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListThreeD, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 2045 /* vst1 */, ARM::VST1d8Twb_register, ConvertCustom_cvtVSTwbRegister, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListThreeD, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 2045 /* vst1 */, ARM::VST1LNd16, Convert__AlignedMemory2_8__Reg1_3__Imm1_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK__123_, MCK_DPR, MCK__91_, MCK_Imm, MCK__93_, MCK__125_, MCK_AlignedMemory }, 0},
  { 2045 /* vst1 */, ARM::VST1LNd8, Convert__AlignedMemory2_8__Reg1_3__Imm1_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK__123_, MCK_DPR, MCK__91_, MCK_Imm, MCK__93_, MCK__125_, MCK_AlignedMemory }, 0},
  { 2045 /* vst1 */, ARM::VST1LNd16_UPD, Convert__AlignedMemory1_8__Tie0__Imm1_9__Reg1_3__Imm1_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK__123_, MCK_DPR, MCK__91_, MCK_Imm, MCK__93_, MCK__125_, MCK_AlignedMemory, MCK_Imm }, 0},
  { 2045 /* vst1 */, ARM::VST1LNd32, Convert__Reg1_8__Imm1_9__Reg1_3__Imm1_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK__123_, MCK_DPR, MCK__91_, MCK_Imm, MCK__93_, MCK__125_, MCK_GPR, MCK_Imm }, 0},
  { 2045 /* vst1 */, ARM::VST1LNd8_UPD, Convert__AlignedMemory1_8__Tie0__Imm1_9__Reg1_3__Imm1_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK__123_, MCK_DPR, MCK__91_, MCK_Imm, MCK__93_, MCK__125_, MCK_AlignedMemory, MCK_Imm }, 0},
  { 2045 /* vst1 */, ARM::VST1LNd32_UPD, Convert__Reg1_8__Tie0__Imm1_10__Reg1_3__Imm1_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK__123_, MCK_DPR, MCK__91_, MCK_Imm, MCK__93_, MCK__125_, MCK_GPR, MCK_Imm, MCK_Imm }, 0},
  { 2050 /* vst2 */, ARM::VST2d16, Convert__AlignedMemory2_3__VecListDPair1_2__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListDPair, MCK_AlignedMemory }, 0},
  { 2050 /* vst2 */, ARM::VST2b16, Convert__AlignedMemory2_3__VecListDPairSpaced1_2__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListDPairSpaced, MCK_AlignedMemory }, 0},
  { 2050 /* vst2 */, ARM::VST2q16, Convert__AlignedMemory2_3__VecListFourD1_2__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListFourD, MCK_AlignedMemory }, 0},
  { 2050 /* vst2 */, ARM::VST2LNdAsm_16, Convert__VecListTwoDHWordIndexed2_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListTwoDHWordIndexed, MCK_AlignedMemory }, 0},
  { 2050 /* vst2 */, ARM::VST2LNqAsm_16, Convert__VecListTwoQHWordIndexed2_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListTwoQHWordIndexed, MCK_AlignedMemory }, 0},
  { 2050 /* vst2 */, ARM::VST2d32, Convert__AlignedMemory2_3__VecListDPair1_2__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListDPair, MCK_AlignedMemory }, 0},
  { 2050 /* vst2 */, ARM::VST2b32, Convert__AlignedMemory2_3__VecListDPairSpaced1_2__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListDPairSpaced, MCK_AlignedMemory }, 0},
  { 2050 /* vst2 */, ARM::VST2q32, Convert__AlignedMemory2_3__VecListFourD1_2__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListFourD, MCK_AlignedMemory }, 0},
  { 2050 /* vst2 */, ARM::VST2LNdAsm_32, Convert__VecListTwoDWordIndexed2_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListTwoDWordIndexed, MCK_AlignedMemory }, 0},
  { 2050 /* vst2 */, ARM::VST2LNqAsm_32, Convert__VecListTwoQWordIndexed2_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListTwoQWordIndexed, MCK_AlignedMemory }, 0},
  { 2050 /* vst2 */, ARM::VST2d8, Convert__AlignedMemory2_3__VecListDPair1_2__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListDPair, MCK_AlignedMemory }, 0},
  { 2050 /* vst2 */, ARM::VST2b8, Convert__AlignedMemory2_3__VecListDPairSpaced1_2__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListDPairSpaced, MCK_AlignedMemory }, 0},
  { 2050 /* vst2 */, ARM::VST2q8, Convert__AlignedMemory2_3__VecListFourD1_2__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListFourD, MCK_AlignedMemory }, 0},
  { 2050 /* vst2 */, ARM::VST2LNdAsm_8, Convert__VecListTwoDByteIndexed2_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListTwoDByteIndexed, MCK_AlignedMemory }, 0},
  { 2050 /* vst2 */, ARM::VST2d16wb_fixed, ConvertCustom_cvtVSTwbFixed, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListDPair, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 2050 /* vst2 */, ARM::VST2d16wb_register, ConvertCustom_cvtVSTwbRegister, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListDPair, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 2050 /* vst2 */, ARM::VST2b16wb_fixed, ConvertCustom_cvtVSTwbFixed, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListDPairSpaced, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 2050 /* vst2 */, ARM::VST2b16wb_register, ConvertCustom_cvtVSTwbRegister, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListDPairSpaced, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 2050 /* vst2 */, ARM::VST2q16wb_fixed, ConvertCustom_cvtVSTwbFixed, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListFourD, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 2050 /* vst2 */, ARM::VST2q16wb_register, ConvertCustom_cvtVSTwbRegister, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListFourD, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 2050 /* vst2 */, ARM::VST2LNdWB_fixed_Asm_16, Convert__VecListTwoDHWordIndexed2_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListTwoDHWordIndexed, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 2050 /* vst2 */, ARM::VST2LNdWB_register_Asm_16, Convert__VecListTwoDHWordIndexed2_2__AlignedMemory2_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListTwoDHWordIndexed, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 2050 /* vst2 */, ARM::VST2LNqWB_fixed_Asm_16, Convert__VecListTwoQHWordIndexed2_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListTwoQHWordIndexed, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 2050 /* vst2 */, ARM::VST2LNqWB_register_Asm_16, Convert__VecListTwoQHWordIndexed2_2__AlignedMemory2_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListTwoQHWordIndexed, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 2050 /* vst2 */, ARM::VST2d32wb_fixed, ConvertCustom_cvtVSTwbFixed, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListDPair, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 2050 /* vst2 */, ARM::VST2d32wb_register, ConvertCustom_cvtVSTwbRegister, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListDPair, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 2050 /* vst2 */, ARM::VST2b32wb_fixed, ConvertCustom_cvtVSTwbFixed, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListDPairSpaced, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 2050 /* vst2 */, ARM::VST2b32wb_register, ConvertCustom_cvtVSTwbRegister, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListDPairSpaced, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 2050 /* vst2 */, ARM::VST2q32wb_fixed, ConvertCustom_cvtVSTwbFixed, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListFourD, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 2050 /* vst2 */, ARM::VST2q32wb_register, ConvertCustom_cvtVSTwbRegister, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListFourD, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 2050 /* vst2 */, ARM::VST2LNdWB_fixed_Asm_32, Convert__VecListTwoDWordIndexed2_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListTwoDWordIndexed, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 2050 /* vst2 */, ARM::VST2LNdWB_register_Asm_32, Convert__VecListTwoDWordIndexed2_2__AlignedMemory2_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListTwoDWordIndexed, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 2050 /* vst2 */, ARM::VST2LNqWB_fixed_Asm_32, Convert__VecListTwoQWordIndexed2_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListTwoQWordIndexed, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 2050 /* vst2 */, ARM::VST2LNqWB_register_Asm_32, Convert__VecListTwoQWordIndexed2_2__AlignedMemory2_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListTwoQWordIndexed, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 2050 /* vst2 */, ARM::VST2d8wb_fixed, ConvertCustom_cvtVSTwbFixed, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListDPair, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 2050 /* vst2 */, ARM::VST2d8wb_register, ConvertCustom_cvtVSTwbRegister, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListDPair, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 2050 /* vst2 */, ARM::VST2b8wb_fixed, ConvertCustom_cvtVSTwbFixed, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListDPairSpaced, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 2050 /* vst2 */, ARM::VST2b8wb_register, ConvertCustom_cvtVSTwbRegister, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListDPairSpaced, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 2050 /* vst2 */, ARM::VST2q8wb_fixed, ConvertCustom_cvtVSTwbFixed, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListFourD, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 2050 /* vst2 */, ARM::VST2q8wb_register, ConvertCustom_cvtVSTwbRegister, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListFourD, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 2050 /* vst2 */, ARM::VST2LNdWB_fixed_Asm_8, Convert__VecListTwoDByteIndexed2_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListTwoDByteIndexed, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 2050 /* vst2 */, ARM::VST2LNdWB_register_Asm_8, Convert__VecListTwoDByteIndexed2_2__AlignedMemory2_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListTwoDByteIndexed, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 2055 /* vst3 */, ARM::VST3dAsm_16, Convert__VecListThreeD1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListThreeD, MCK_AlignedMemory }, 0},
  { 2055 /* vst3 */, ARM::VST3LNdAsm_16, Convert__VecListThreeDHWordIndexed2_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListThreeDHWordIndexed, MCK_AlignedMemory }, 0},
  { 2055 /* vst3 */, ARM::VST3qAsm_16, Convert__VecListThreeQ1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListThreeQ, MCK_AlignedMemory }, 0},
  { 2055 /* vst3 */, ARM::VST3LNqAsm_16, Convert__VecListThreeQHWordIndexed2_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListThreeQHWordIndexed, MCK_AlignedMemory }, 0},
  { 2055 /* vst3 */, ARM::VST3dAsm_32, Convert__VecListThreeD1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListThreeD, MCK_AlignedMemory }, 0},
  { 2055 /* vst3 */, ARM::VST3LNdAsm_32, Convert__VecListThreeDWordIndexed2_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListThreeDWordIndexed, MCK_AlignedMemory }, 0},
  { 2055 /* vst3 */, ARM::VST3qAsm_32, Convert__VecListThreeQ1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListThreeQ, MCK_AlignedMemory }, 0},
  { 2055 /* vst3 */, ARM::VST3LNqAsm_32, Convert__VecListThreeQWordIndexed2_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListThreeQWordIndexed, MCK_AlignedMemory }, 0},
  { 2055 /* vst3 */, ARM::VST3dAsm_8, Convert__VecListThreeD1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListThreeD, MCK_AlignedMemory }, 0},
  { 2055 /* vst3 */, ARM::VST3LNdAsm_8, Convert__VecListThreeDByteIndexed2_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListThreeDByteIndexed, MCK_AlignedMemory }, 0},
  { 2055 /* vst3 */, ARM::VST3qAsm_8, Convert__VecListThreeQ1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListThreeQ, MCK_AlignedMemory }, 0},
  { 2055 /* vst3 */, ARM::VST3dWB_fixed_Asm_16, Convert__VecListThreeD1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListThreeD, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 2055 /* vst3 */, ARM::VST3dWB_register_Asm_16, Convert__VecListThreeD1_2__AlignedMemory2_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListThreeD, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 2055 /* vst3 */, ARM::VST3LNdWB_fixed_Asm_16, Convert__VecListThreeDHWordIndexed2_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListThreeDHWordIndexed, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 2055 /* vst3 */, ARM::VST3LNdWB_register_Asm_16, Convert__VecListThreeDHWordIndexed2_2__AlignedMemory2_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListThreeDHWordIndexed, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 2055 /* vst3 */, ARM::VST3qWB_fixed_Asm_16, Convert__VecListThreeQ1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListThreeQ, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 2055 /* vst3 */, ARM::VST3qWB_register_Asm_16, Convert__VecListThreeQ1_2__AlignedMemory2_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListThreeQ, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 2055 /* vst3 */, ARM::VST3LNqWB_fixed_Asm_16, Convert__VecListThreeQHWordIndexed2_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListThreeQHWordIndexed, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 2055 /* vst3 */, ARM::VST3LNqWB_register_Asm_16, Convert__VecListThreeQHWordIndexed2_2__AlignedMemory2_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListThreeQHWordIndexed, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 2055 /* vst3 */, ARM::VST3dWB_fixed_Asm_32, Convert__VecListThreeD1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListThreeD, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 2055 /* vst3 */, ARM::VST3dWB_register_Asm_32, Convert__VecListThreeD1_2__AlignedMemory2_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListThreeD, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 2055 /* vst3 */, ARM::VST3LNdWB_fixed_Asm_32, Convert__VecListThreeDWordIndexed2_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListThreeDWordIndexed, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 2055 /* vst3 */, ARM::VST3LNdWB_register_Asm_32, Convert__VecListThreeDWordIndexed2_2__AlignedMemory2_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListThreeDWordIndexed, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 2055 /* vst3 */, ARM::VST3qWB_fixed_Asm_32, Convert__VecListThreeQ1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListThreeQ, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 2055 /* vst3 */, ARM::VST3qWB_register_Asm_32, Convert__VecListThreeQ1_2__AlignedMemory2_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListThreeQ, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 2055 /* vst3 */, ARM::VST3LNqWB_fixed_Asm_32, Convert__VecListThreeQWordIndexed2_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListThreeQWordIndexed, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 2055 /* vst3 */, ARM::VST3LNqWB_register_Asm_32, Convert__VecListThreeQWordIndexed2_2__AlignedMemory2_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListThreeQWordIndexed, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 2055 /* vst3 */, ARM::VST3dWB_fixed_Asm_8, Convert__VecListThreeD1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListThreeD, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 2055 /* vst3 */, ARM::VST3dWB_register_Asm_8, Convert__VecListThreeD1_2__AlignedMemory2_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListThreeD, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 2055 /* vst3 */, ARM::VST3LNdWB_fixed_Asm_8, Convert__VecListThreeDByteIndexed2_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListThreeDByteIndexed, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 2055 /* vst3 */, ARM::VST3LNdWB_register_Asm_8, Convert__VecListThreeDByteIndexed2_2__AlignedMemory2_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListThreeDByteIndexed, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 2055 /* vst3 */, ARM::VST3qWB_fixed_Asm_8, Convert__VecListThreeQ1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListThreeQ, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 2055 /* vst3 */, ARM::VST3qWB_register_Asm_8, Convert__VecListThreeQ1_2__AlignedMemory2_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListThreeQ, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 2055 /* vst3 */, ARM::VST3d16, Convert__AlignedMemory2_7__Reg1_3__Reg1_4__Reg1_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK__123_, MCK_DPR, MCK_DPR, MCK_DPR, MCK__125_, MCK_AlignedMemory }, 0},
  { 2055 /* vst3 */, ARM::VST3q16, Convert__AlignedMemory2_7__Reg1_3__Reg1_4__Reg1_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK__123_, MCK_DPR, MCK_DPR, MCK_DPR, MCK__125_, MCK_AlignedMemory }, 0},
  { 2055 /* vst3 */, ARM::VST3d32, Convert__AlignedMemory2_7__Reg1_3__Reg1_4__Reg1_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK__123_, MCK_DPR, MCK_DPR, MCK_DPR, MCK__125_, MCK_AlignedMemory }, 0},
  { 2055 /* vst3 */, ARM::VST3q32, Convert__AlignedMemory2_7__Reg1_3__Reg1_4__Reg1_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK__123_, MCK_DPR, MCK_DPR, MCK_DPR, MCK__125_, MCK_AlignedMemory }, 0},
  { 2055 /* vst3 */, ARM::VST3d8, Convert__AlignedMemory2_7__Reg1_3__Reg1_4__Reg1_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK__123_, MCK_DPR, MCK_DPR, MCK_DPR, MCK__125_, MCK_AlignedMemory }, 0},
  { 2055 /* vst3 */, ARM::VST3q8, Convert__AlignedMemory2_7__Reg1_3__Reg1_4__Reg1_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK__123_, MCK_DPR, MCK_DPR, MCK_DPR, MCK__125_, MCK_AlignedMemory }, 0},
  { 2055 /* vst3 */, ARM::VST3d16_UPD, Convert__AlignedMemory1_7__Tie0__Imm1_8__Reg1_3__Reg1_4__Reg1_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK__123_, MCK_DPR, MCK_DPR, MCK_DPR, MCK__125_, MCK_AlignedMemory, MCK_Imm }, 0},
  { 2055 /* vst3 */, ARM::VST3q16_UPD, Convert__AlignedMemory1_7__Tie0__Imm1_8__Reg1_3__Reg1_4__Reg1_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK__123_, MCK_DPR, MCK_DPR, MCK_DPR, MCK__125_, MCK_AlignedMemory, MCK_Imm }, 0},
  { 2055 /* vst3 */, ARM::VST3d32_UPD, Convert__AlignedMemory1_7__Tie0__Imm1_8__Reg1_3__Reg1_4__Reg1_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK__123_, MCK_DPR, MCK_DPR, MCK_DPR, MCK__125_, MCK_AlignedMemory, MCK_Imm }, 0},
  { 2055 /* vst3 */, ARM::VST3q32_UPD, Convert__AlignedMemory1_7__Tie0__Imm1_8__Reg1_3__Reg1_4__Reg1_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK__123_, MCK_DPR, MCK_DPR, MCK_DPR, MCK__125_, MCK_AlignedMemory, MCK_Imm }, 0},
  { 2055 /* vst3 */, ARM::VST3d8_UPD, Convert__AlignedMemory1_7__Tie0__Imm1_8__Reg1_3__Reg1_4__Reg1_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK__123_, MCK_DPR, MCK_DPR, MCK_DPR, MCK__125_, MCK_AlignedMemory, MCK_Imm }, 0},
  { 2055 /* vst3 */, ARM::VST3q8_UPD, Convert__AlignedMemory1_7__Tie0__Imm1_8__Reg1_3__Reg1_4__Reg1_5__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK__123_, MCK_DPR, MCK_DPR, MCK_DPR, MCK__125_, MCK_AlignedMemory, MCK_Imm }, 0},
  { 2060 /* vst4 */, ARM::VST4dAsm_16, Convert__VecListFourD1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListFourD, MCK_AlignedMemory }, 0},
  { 2060 /* vst4 */, ARM::VST4LNdAsm_16, Convert__VecListFourDHWordIndexed2_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListFourDHWordIndexed, MCK_AlignedMemory }, 0},
  { 2060 /* vst4 */, ARM::VST4qAsm_16, Convert__VecListFourQ1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListFourQ, MCK_AlignedMemory }, 0},
  { 2060 /* vst4 */, ARM::VST4LNqAsm_16, Convert__VecListFourQHWordIndexed2_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListFourQHWordIndexed, MCK_AlignedMemory }, 0},
  { 2060 /* vst4 */, ARM::VST4dAsm_32, Convert__VecListFourD1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListFourD, MCK_AlignedMemory }, 0},
  { 2060 /* vst4 */, ARM::VST4LNdAsm_32, Convert__VecListFourDWordIndexed2_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListFourDWordIndexed, MCK_AlignedMemory }, 0},
  { 2060 /* vst4 */, ARM::VST4qAsm_32, Convert__VecListFourQ1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListFourQ, MCK_AlignedMemory }, 0},
  { 2060 /* vst4 */, ARM::VST4LNqAsm_32, Convert__VecListFourQWordIndexed2_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListFourQWordIndexed, MCK_AlignedMemory }, 0},
  { 2060 /* vst4 */, ARM::VST4dAsm_8, Convert__VecListFourD1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListFourD, MCK_AlignedMemory }, 0},
  { 2060 /* vst4 */, ARM::VST4LNdAsm_8, Convert__VecListFourDByteIndexed2_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListFourDByteIndexed, MCK_AlignedMemory }, 0},
  { 2060 /* vst4 */, ARM::VST4qAsm_8, Convert__VecListFourQ1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListFourQ, MCK_AlignedMemory }, 0},
  { 2060 /* vst4 */, ARM::VST4dWB_fixed_Asm_16, Convert__VecListFourD1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListFourD, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 2060 /* vst4 */, ARM::VST4dWB_register_Asm_16, Convert__VecListFourD1_2__AlignedMemory2_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListFourD, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 2060 /* vst4 */, ARM::VST4LNdWB_fixed_Asm_16, Convert__VecListFourDHWordIndexed2_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListFourDHWordIndexed, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 2060 /* vst4 */, ARM::VST4LNdWB_register_Asm_16, Convert__VecListFourDHWordIndexed2_2__AlignedMemory2_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListFourDHWordIndexed, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 2060 /* vst4 */, ARM::VST4qWB_fixed_Asm_16, Convert__VecListFourQ1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListFourQ, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 2060 /* vst4 */, ARM::VST4qWB_register_Asm_16, Convert__VecListFourQ1_2__AlignedMemory2_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListFourQ, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 2060 /* vst4 */, ARM::VST4LNqWB_fixed_Asm_16, Convert__VecListFourQHWordIndexed2_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListFourQHWordIndexed, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 2060 /* vst4 */, ARM::VST4LNqWB_register_Asm_16, Convert__VecListFourQHWordIndexed2_2__AlignedMemory2_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_VecListFourQHWordIndexed, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 2060 /* vst4 */, ARM::VST4dWB_fixed_Asm_32, Convert__VecListFourD1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListFourD, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 2060 /* vst4 */, ARM::VST4dWB_register_Asm_32, Convert__VecListFourD1_2__AlignedMemory2_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListFourD, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 2060 /* vst4 */, ARM::VST4LNdWB_fixed_Asm_32, Convert__VecListFourDWordIndexed2_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListFourDWordIndexed, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 2060 /* vst4 */, ARM::VST4LNdWB_register_Asm_32, Convert__VecListFourDWordIndexed2_2__AlignedMemory2_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListFourDWordIndexed, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 2060 /* vst4 */, ARM::VST4qWB_fixed_Asm_32, Convert__VecListFourQ1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListFourQ, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 2060 /* vst4 */, ARM::VST4qWB_register_Asm_32, Convert__VecListFourQ1_2__AlignedMemory2_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListFourQ, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 2060 /* vst4 */, ARM::VST4LNqWB_fixed_Asm_32, Convert__VecListFourQWordIndexed2_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListFourQWordIndexed, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 2060 /* vst4 */, ARM::VST4LNqWB_register_Asm_32, Convert__VecListFourQWordIndexed2_2__AlignedMemory2_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_VecListFourQWordIndexed, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 2060 /* vst4 */, ARM::VST4dWB_fixed_Asm_8, Convert__VecListFourD1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListFourD, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 2060 /* vst4 */, ARM::VST4dWB_register_Asm_8, Convert__VecListFourD1_2__AlignedMemory2_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListFourD, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 2060 /* vst4 */, ARM::VST4LNdWB_fixed_Asm_8, Convert__VecListFourDByteIndexed2_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListFourDByteIndexed, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 2060 /* vst4 */, ARM::VST4LNdWB_register_Asm_8, Convert__VecListFourDByteIndexed2_2__AlignedMemory2_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListFourDByteIndexed, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 2060 /* vst4 */, ARM::VST4qWB_fixed_Asm_8, Convert__VecListFourQ1_2__AlignedMemory2_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListFourQ, MCK_AlignedMemory, MCK__EXCLAIM_ }, 0},
  { 2060 /* vst4 */, ARM::VST4qWB_register_Asm_8, Convert__VecListFourQ1_2__AlignedMemory2_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_VecListFourQ, MCK_AlignedMemory, MCK_rGPR }, 0},
  { 2060 /* vst4 */, ARM::VST4d16, Convert__AlignedMemory2_8__Reg1_3__Reg1_4__Reg1_5__Reg1_6__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK__123_, MCK_DPR, MCK_DPR, MCK_DPR, MCK_DPR, MCK__125_, MCK_AlignedMemory }, 0},
  { 2060 /* vst4 */, ARM::VST4q16, Convert__AlignedMemory2_8__Reg1_3__Reg1_4__Reg1_5__Reg1_6__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK__123_, MCK_DPR, MCK_DPR, MCK_DPR, MCK_DPR, MCK__125_, MCK_AlignedMemory }, 0},
  { 2060 /* vst4 */, ARM::VST4d32, Convert__AlignedMemory2_8__Reg1_3__Reg1_4__Reg1_5__Reg1_6__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK__123_, MCK_DPR, MCK_DPR, MCK_DPR, MCK_DPR, MCK__125_, MCK_AlignedMemory }, 0},
  { 2060 /* vst4 */, ARM::VST4q32, Convert__AlignedMemory2_8__Reg1_3__Reg1_4__Reg1_5__Reg1_6__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK__123_, MCK_DPR, MCK_DPR, MCK_DPR, MCK_DPR, MCK__125_, MCK_AlignedMemory }, 0},
  { 2060 /* vst4 */, ARM::VST4d8, Convert__AlignedMemory2_8__Reg1_3__Reg1_4__Reg1_5__Reg1_6__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK__123_, MCK_DPR, MCK_DPR, MCK_DPR, MCK_DPR, MCK__125_, MCK_AlignedMemory }, 0},
  { 2060 /* vst4 */, ARM::VST4q8, Convert__AlignedMemory2_8__Reg1_3__Reg1_4__Reg1_5__Reg1_6__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK__123_, MCK_DPR, MCK_DPR, MCK_DPR, MCK_DPR, MCK__125_, MCK_AlignedMemory }, 0},
  { 2060 /* vst4 */, ARM::VST4d16_UPD, Convert__AlignedMemory1_8__Tie0__Imm1_9__Reg1_3__Reg1_4__Reg1_5__Reg1_6__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK__123_, MCK_DPR, MCK_DPR, MCK_DPR, MCK_DPR, MCK__125_, MCK_AlignedMemory, MCK_Imm }, 0},
  { 2060 /* vst4 */, ARM::VST4q16_UPD, Convert__AlignedMemory1_8__Tie0__Imm1_9__Reg1_3__Reg1_4__Reg1_5__Reg1_6__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK__123_, MCK_DPR, MCK_DPR, MCK_DPR, MCK_DPR, MCK__125_, MCK_AlignedMemory, MCK_Imm }, 0},
  { 2060 /* vst4 */, ARM::VST4d32_UPD, Convert__AlignedMemory1_8__Tie0__Imm1_9__Reg1_3__Reg1_4__Reg1_5__Reg1_6__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK__123_, MCK_DPR, MCK_DPR, MCK_DPR, MCK_DPR, MCK__125_, MCK_AlignedMemory, MCK_Imm }, 0},
  { 2060 /* vst4 */, ARM::VST4q32_UPD, Convert__AlignedMemory1_8__Tie0__Imm1_9__Reg1_3__Reg1_4__Reg1_5__Reg1_6__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK__123_, MCK_DPR, MCK_DPR, MCK_DPR, MCK_DPR, MCK__125_, MCK_AlignedMemory, MCK_Imm }, 0},
  { 2060 /* vst4 */, ARM::VST4d8_UPD, Convert__AlignedMemory1_8__Tie0__Imm1_9__Reg1_3__Reg1_4__Reg1_5__Reg1_6__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK__123_, MCK_DPR, MCK_DPR, MCK_DPR, MCK_DPR, MCK__125_, MCK_AlignedMemory, MCK_Imm }, 0},
  { 2060 /* vst4 */, ARM::VST4q8_UPD, Convert__AlignedMemory1_8__Tie0__Imm1_9__Reg1_3__Reg1_4__Reg1_5__Reg1_6__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK__123_, MCK_DPR, MCK_DPR, MCK_DPR, MCK_DPR, MCK__125_, MCK_AlignedMemory, MCK_Imm }, 0},
  { 2065 /* vstmdb */, ARM::VSTMDDB_UPD, Convert__Reg1_1__Tie0__CondCode2_0__DPRRegList1_3, Feature_HasVFP2, { MCK_CondCode, MCK_GPR, MCK__EXCLAIM_, MCK_DPRRegList }, 0},
  { 2065 /* vstmdb */, ARM::VSTMSDB_UPD, Convert__Reg1_1__Tie0__CondCode2_0__SPRRegList1_3, Feature_HasVFP2, { MCK_CondCode, MCK_GPR, MCK__EXCLAIM_, MCK_SPRRegList }, 0},
  { 2072 /* vstmia */, ARM::VSTMDIA, Convert__Reg1_1__CondCode2_0__DPRRegList1_2, Feature_HasVFP2, { MCK_CondCode, MCK_GPR, MCK_DPRRegList }, 0},
  { 2072 /* vstmia */, ARM::VSTMSIA, Convert__Reg1_1__CondCode2_0__SPRRegList1_2, Feature_HasVFP2, { MCK_CondCode, MCK_GPR, MCK_SPRRegList }, 0},
  { 2072 /* vstmia */, ARM::VSTMDIA_UPD, Convert__Reg1_1__Tie0__CondCode2_0__DPRRegList1_3, Feature_HasVFP2, { MCK_CondCode, MCK_GPR, MCK__EXCLAIM_, MCK_DPRRegList }, 0},
  { 2072 /* vstmia */, ARM::VSTMSIA_UPD, Convert__Reg1_1__Tie0__CondCode2_0__SPRRegList1_3, Feature_HasVFP2, { MCK_CondCode, MCK_GPR, MCK__EXCLAIM_, MCK_SPRRegList }, 0},
  { 2079 /* vstr */, ARM::VSTRS, Convert__Reg1_1__AddrMode52_2__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK_SPR, MCK_AddrMode5 }, 0},
  { 2079 /* vstr */, ARM::VSTRD, Convert__Reg1_1__AddrMode52_2__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK_DPR, MCK_AddrMode5 }, 0},
  { 2079 /* vstr */, ARM::VSTRS, Convert__Reg1_2__AddrMode52_3__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_32, MCK_SPR, MCK_AddrMode5 }, 0},
  { 2079 /* vstr */, ARM::VSTRD, Convert__Reg1_2__AddrMode52_3__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_64, MCK_DPR, MCK_AddrMode5 }, 0},
  { 2084 /* vsub */, ARM::VSUBS, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_f32, MCK_SPR, MCK_SPR }, 0},
  { 2084 /* vsub */, ARM::VSUBfd, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_DPR, MCK_DPR }, 0},
  { 2084 /* vsub */, ARM::VSUBfq, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_QPR, MCK_QPR }, 0},
  { 2084 /* vsub */, ARM::VSUBD, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_f64, MCK_DPR, MCK_DPR }, 0},
  { 2084 /* vsub */, ARM::VSUBv4i16, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i16, MCK_DPR, MCK_DPR }, 0},
  { 2084 /* vsub */, ARM::VSUBv8i16, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i16, MCK_QPR, MCK_QPR }, 0},
  { 2084 /* vsub */, ARM::VSUBv2i32, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i32, MCK_DPR, MCK_DPR }, 0},
  { 2084 /* vsub */, ARM::VSUBv4i32, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i32, MCK_QPR, MCK_QPR }, 0},
  { 2084 /* vsub */, ARM::VSUBv1i64, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i64, MCK_DPR, MCK_DPR }, 0},
  { 2084 /* vsub */, ARM::VSUBv2i64, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i64, MCK_QPR, MCK_QPR }, 0},
  { 2084 /* vsub */, ARM::VSUBv8i8, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i8, MCK_DPR, MCK_DPR }, 0},
  { 2084 /* vsub */, ARM::VSUBv16i8, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i8, MCK_QPR, MCK_QPR }, 0},
  { 2084 /* vsub */, ARM::VSUBS, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_f32, MCK_SPR, MCK_SPR, MCK_SPR }, 0},
  { 2084 /* vsub */, ARM::VSUBfd, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 2084 /* vsub */, ARM::VSUBfq, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_f32, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 2084 /* vsub */, ARM::VSUBD, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasVFP2, { MCK_CondCode, MCK__DOT_f64, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 2084 /* vsub */, ARM::VSUBv4i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i16, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 2084 /* vsub */, ARM::VSUBv8i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i16, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 2084 /* vsub */, ARM::VSUBv2i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i32, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 2084 /* vsub */, ARM::VSUBv4i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i32, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 2084 /* vsub */, ARM::VSUBv1i64, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i64, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 2084 /* vsub */, ARM::VSUBv2i64, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i64, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 2084 /* vsub */, ARM::VSUBv8i8, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i8, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 2084 /* vsub */, ARM::VSUBv16i8, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i8, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 2089 /* vsubhn */, ARM::VSUBHNv8i8, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i16, MCK_DPR, MCK_QPR, MCK_QPR }, 0},
  { 2089 /* vsubhn */, ARM::VSUBHNv4i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i32, MCK_DPR, MCK_QPR, MCK_QPR }, 0},
  { 2089 /* vsubhn */, ARM::VSUBHNv2i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_i64, MCK_DPR, MCK_QPR, MCK_QPR }, 0},
  { 2096 /* vsubl */, ARM::VSUBLsv4i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_QPR, MCK_DPR, MCK_DPR }, 0},
  { 2096 /* vsubl */, ARM::VSUBLsv2i64, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_QPR, MCK_DPR, MCK_DPR }, 0},
  { 2096 /* vsubl */, ARM::VSUBLsv8i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_QPR, MCK_DPR, MCK_DPR }, 0},
  { 2096 /* vsubl */, ARM::VSUBLuv4i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_QPR, MCK_DPR, MCK_DPR }, 0},
  { 2096 /* vsubl */, ARM::VSUBLuv2i64, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_QPR, MCK_DPR, MCK_DPR }, 0},
  { 2096 /* vsubl */, ARM::VSUBLuv8i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_QPR, MCK_DPR, MCK_DPR }, 0},
  { 2102 /* vsubw */, ARM::VSUBWsv4i32, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_QPR, MCK_DPR }, 0},
  { 2102 /* vsubw */, ARM::VSUBWsv2i64, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_QPR, MCK_DPR }, 0},
  { 2102 /* vsubw */, ARM::VSUBWsv8i16, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_QPR, MCK_DPR }, 0},
  { 2102 /* vsubw */, ARM::VSUBWuv4i32, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_QPR, MCK_DPR }, 0},
  { 2102 /* vsubw */, ARM::VSUBWuv2i64, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_QPR, MCK_DPR }, 0},
  { 2102 /* vsubw */, ARM::VSUBWuv8i16, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_QPR, MCK_DPR }, 0},
  { 2102 /* vsubw */, ARM::VSUBWsv4i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s16, MCK_QPR, MCK_QPR, MCK_DPR }, 0},
  { 2102 /* vsubw */, ARM::VSUBWsv2i64, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s32, MCK_QPR, MCK_QPR, MCK_DPR }, 0},
  { 2102 /* vsubw */, ARM::VSUBWsv8i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_s8, MCK_QPR, MCK_QPR, MCK_DPR }, 0},
  { 2102 /* vsubw */, ARM::VSUBWuv4i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u16, MCK_QPR, MCK_QPR, MCK_DPR }, 0},
  { 2102 /* vsubw */, ARM::VSUBWuv2i64, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u32, MCK_QPR, MCK_QPR, MCK_DPR }, 0},
  { 2102 /* vsubw */, ARM::VSUBWuv8i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_u8, MCK_QPR, MCK_QPR, MCK_DPR }, 0},
  { 2108 /* vswp */, ARM::VSWPd, Convert__Reg1_1__Reg1_2__Tie0__Tie1__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK_DPR, MCK_DPR }, 0},
  { 2108 /* vswp */, ARM::VSWPq, Convert__Reg1_1__Reg1_2__Tie0__Tie1__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK_QPR, MCK_QPR }, 0},
  { 2108 /* vswp */, ARM::VSWPd, Convert__Reg1_2__Reg1_3__Tie0__Tie1__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_DPR, MCK_DPR }, 0},
  { 2108 /* vswp */, ARM::VSWPq, Convert__Reg1_2__Reg1_3__Tie0__Tie1__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_QPR, MCK_QPR }, 0},
  { 2108 /* vswp */, ARM::VSWPd, Convert__Reg1_2__Reg1_3__Tie0__Tie1__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_DPR, MCK_DPR }, 0},
  { 2108 /* vswp */, ARM::VSWPq, Convert__Reg1_2__Reg1_3__Tie0__Tie1__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_QPR, MCK_QPR }, 0},
  { 2108 /* vswp */, ARM::VSWPd, Convert__Reg1_2__Reg1_3__Tie0__Tie1__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_64, MCK_DPR, MCK_DPR }, 0},
  { 2108 /* vswp */, ARM::VSWPq, Convert__Reg1_2__Reg1_3__Tie0__Tie1__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_64, MCK_QPR, MCK_QPR }, 0},
  { 2108 /* vswp */, ARM::VSWPd, Convert__Reg1_2__Reg1_3__Tie0__Tie1__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_DPR, MCK_DPR }, 0},
  { 2108 /* vswp */, ARM::VSWPq, Convert__Reg1_2__Reg1_3__Tie0__Tie1__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_QPR, MCK_QPR }, 0},
  { 2113 /* vtbl */, ARM::VTBL2, Convert__Reg1_2__VecListDPair1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_DPR, MCK_VecListDPair, MCK_DPR }, 0},
  { 2113 /* vtbl */, ARM::VTBL4, Convert__Reg1_2__VecListFourD1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_DPR, MCK_VecListFourD, MCK_DPR }, 0},
  { 2113 /* vtbl */, ARM::VTBL1, Convert__Reg1_2__VecListOneD1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_DPR, MCK_VecListOneD, MCK_DPR }, 0},
  { 2113 /* vtbl */, ARM::VTBL3, Convert__Reg1_2__VecListThreeD1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_DPR, MCK_VecListThreeD, MCK_DPR }, 0},
  { 2118 /* vtbx */, ARM::VTBX2, Convert__Reg1_2__Tie0__VecListDPair1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_DPR, MCK_VecListDPair, MCK_DPR }, 0},
  { 2118 /* vtbx */, ARM::VTBX4, Convert__Reg1_2__Tie0__VecListFourD1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_DPR, MCK_VecListFourD, MCK_DPR }, 0},
  { 2118 /* vtbx */, ARM::VTBX1, Convert__Reg1_2__Tie0__VecListOneD1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_DPR, MCK_VecListOneD, MCK_DPR }, 0},
  { 2118 /* vtbx */, ARM::VTBX3, Convert__Reg1_2__Tie0__VecListThreeD1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_DPR, MCK_VecListThreeD, MCK_DPR }, 0},
  { 2123 /* vtrn */, ARM::VTRNd16, Convert__Reg1_2__Reg1_3__Tie0__Tie1__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_DPR, MCK_DPR }, 0},
  { 2123 /* vtrn */, ARM::VTRNq16, Convert__Reg1_2__Reg1_3__Tie0__Tie1__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_QPR, MCK_QPR }, 0},
  { 2123 /* vtrn */, ARM::VTRNd32, Convert__Reg1_2__Reg1_3__Tie0__Tie1__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_DPR, MCK_DPR }, 0},
  { 2123 /* vtrn */, ARM::VTRNq32, Convert__Reg1_2__Reg1_3__Tie0__Tie1__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_QPR, MCK_QPR }, 0},
  { 2123 /* vtrn */, ARM::VTRNd8, Convert__Reg1_2__Reg1_3__Tie0__Tie1__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_DPR, MCK_DPR }, 0},
  { 2123 /* vtrn */, ARM::VTRNq8, Convert__Reg1_2__Reg1_3__Tie0__Tie1__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_QPR, MCK_QPR }, 0},
  { 2128 /* vtst */, ARM::VTSTv4i16, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_DPR, MCK_DPR }, 0},
  { 2128 /* vtst */, ARM::VTSTv8i16, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_QPR, MCK_QPR }, 0},
  { 2128 /* vtst */, ARM::VTSTv2i32, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_DPR, MCK_DPR }, 0},
  { 2128 /* vtst */, ARM::VTSTv4i32, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_QPR, MCK_QPR }, 0},
  { 2128 /* vtst */, ARM::VTSTv8i8, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_DPR, MCK_DPR }, 0},
  { 2128 /* vtst */, ARM::VTSTv16i8, Convert__Reg1_2__Reg1_2__Reg1_3__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_QPR, MCK_QPR }, 0},
  { 2128 /* vtst */, ARM::VTSTv4i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 2128 /* vtst */, ARM::VTSTv8i16, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 2128 /* vtst */, ARM::VTSTv2i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 2128 /* vtst */, ARM::VTSTv4i32, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 2128 /* vtst */, ARM::VTSTv8i8, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_DPR, MCK_DPR, MCK_DPR }, 0},
  { 2128 /* vtst */, ARM::VTSTv16i8, Convert__Reg1_2__Reg1_3__Reg1_4__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_QPR, MCK_QPR, MCK_QPR }, 0},
  { 2133 /* vuzp */, ARM::VUZPd16, Convert__Reg1_2__Reg1_3__Tie0__Tie1__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_DPR, MCK_DPR }, 0},
  { 2133 /* vuzp */, ARM::VUZPq16, Convert__Reg1_2__Reg1_3__Tie0__Tie1__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_QPR, MCK_QPR }, 0},
  { 2133 /* vuzp */, ARM::VTRNd32, Convert__Reg1_2__Reg1_3__Tie0__Tie1__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_DPR, MCK_DPR }, 0},
  { 2133 /* vuzp */, ARM::VUZPq32, Convert__Reg1_2__Reg1_3__Tie0__Tie1__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_QPR, MCK_QPR }, 0},
  { 2133 /* vuzp */, ARM::VUZPd8, Convert__Reg1_2__Reg1_3__Tie0__Tie1__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_DPR, MCK_DPR }, 0},
  { 2133 /* vuzp */, ARM::VUZPq8, Convert__Reg1_2__Reg1_3__Tie0__Tie1__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_QPR, MCK_QPR }, 0},
  { 2138 /* vzip */, ARM::VZIPd16, Convert__Reg1_2__Reg1_3__Tie0__Tie1__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_DPR, MCK_DPR }, 0},
  { 2138 /* vzip */, ARM::VZIPq16, Convert__Reg1_2__Reg1_3__Tie0__Tie1__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_16, MCK_QPR, MCK_QPR }, 0},
  { 2138 /* vzip */, ARM::VTRNd32, Convert__Reg1_2__Reg1_3__Tie0__Tie1__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_DPR, MCK_DPR }, 0},
  { 2138 /* vzip */, ARM::VZIPq32, Convert__Reg1_2__Reg1_3__Tie0__Tie1__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_32, MCK_QPR, MCK_QPR }, 0},
  { 2138 /* vzip */, ARM::VZIPd8, Convert__Reg1_2__Reg1_3__Tie0__Tie1__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_DPR, MCK_DPR }, 0},
  { 2138 /* vzip */, ARM::VZIPq8, Convert__Reg1_2__Reg1_3__Tie0__Tie1__CondCode2_0, Feature_HasNEON, { MCK_CondCode, MCK__DOT_8, MCK_QPR, MCK_QPR }, 0},
  { 2143 /* wfe */, ARM::HINT, Convert__imm_2__CondCode2_0, Feature_IsARM|Feature_HasV6T2, { MCK_CondCode }, 0},
  { 2143 /* wfe */, ARM::tWFE, Convert__CondCode2_0, Feature_IsThumb2, { MCK_CondCode }, 0},
  { 2143 /* wfe */, ARM::t2HINT, Convert__imm_2__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK__DOT_w }, 0},
  { 2147 /* wfi */, ARM::HINT, Convert__imm_3__CondCode2_0, Feature_IsARM|Feature_HasV6T2, { MCK_CondCode }, 0},
  { 2147 /* wfi */, ARM::tWFI, Convert__CondCode2_0, Feature_IsThumb2, { MCK_CondCode }, 0},
  { 2147 /* wfi */, ARM::t2HINT, Convert__imm_3__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK__DOT_w }, 0},
  { 2151 /* yield */, ARM::HINT, Convert__imm_1__CondCode2_0, Feature_IsARM|Feature_HasV6T2, { MCK_CondCode }, 0},
  { 2151 /* yield */, ARM::tYIELD, Convert__CondCode2_0, Feature_IsThumb2, { MCK_CondCode }, 0},
  { 2151 /* yield */, ARM::t2HINT, Convert__imm_1__CondCode2_0, Feature_IsThumb2, { MCK_CondCode, MCK__DOT_w }, 0},
};

bool ARMAsmParser::
mnemonicIsValid(StringRef Mnemonic) {
  // Search the table.
  std::pair<const MatchEntry*, const MatchEntry*> MnemonicRange =
    std::equal_range(MatchTable, MatchTable+3164, Mnemonic, LessOpcode());
  return MnemonicRange.first != MnemonicRange.second;
}

unsigned ARMAsmParser::
MatchInstructionImpl(const SmallVectorImpl<MCParsedAsmOperand*> &Operands,
                     MCInst &Inst,
unsigned &ErrorInfo, bool matchingInlineAsm, unsigned VariantID) {
  // Eliminate obvious mismatches.
  if (Operands.size() > 19) {
    ErrorInfo = 19;
    return Match_InvalidOperand;
  }

  // Get the current feature set.
  unsigned AvailableFeatures = getAvailableFeatures();

  // Get the instruction mnemonic, which is the first token.
  StringRef Mnemonic = ((ARMOperand*)Operands[0])->getToken();

  // Process all MnemonicAliases to remap the mnemonic.
  // FIXME : Add an entry in AsmParserVariant to check this.
  if (!VariantID)
    applyMnemonicAliases(Mnemonic, AvailableFeatures);

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
    std::equal_range(MatchTable, MatchTable+3164, Mnemonic, LessOpcode());

  // Return a more specific error code if no mnemonics match.
  if (MnemonicRange.first == MnemonicRange.second)
    return Match_MnemonicFail;

  for (const MatchEntry *it = MnemonicRange.first, *ie = MnemonicRange.second;
       it != ie; ++it) {
    // equal_range guarantees that instruction mnemonic matches.
    assert(Mnemonic == it->getMnemonic());
    if (VariantID != it->AsmVariantID) continue;
    bool OperandsValid = true;
    for (unsigned i = 0; i != 18; ++i) {
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

namespace {
  struct OperandMatchEntry {
    uint32_t RequiredFeatures;
    uint16_t Mnemonic;
    uint16_t Class;
    uint8_t OperandMask;

    StringRef getMnemonic() const {
      return StringRef(MnemonicTable + Mnemonic + 1,
                       MnemonicTable[Mnemonic]);
    }
  };

  // Predicate for searching for an opcode.
  struct LessOpcodeOperand {
    bool operator()(const OperandMatchEntry &LHS, StringRef RHS) {
      return LHS.getMnemonic()  < RHS;
    }
    bool operator()(StringRef LHS, const OperandMatchEntry &RHS) {
      return LHS < RHS.getMnemonic();
    }
    bool operator()(const OperandMatchEntry &LHS, const OperandMatchEntry &RHS) {
      return LHS.getMnemonic() < RHS.getMnemonic();
    }
  };
} // end anonymous namespace.

static const OperandMatchEntry OperandMatchTable[694] = {
  /* Operand List Mask, Mnemonic, Operand Class, Features */
  { Feature_IsThumb2, 27 /* bfc */, MCK_Bitfield, 4 /* 2 */ },
  { Feature_IsARM|Feature_HasV6T2, 27 /* bfc */, MCK_Bitfield, 4 /* 2 */ },
  { Feature_IsThumb2, 31 /* bfi */, MCK_Bitfield, 8 /* 3 */ },
  { Feature_IsARM|Feature_HasV6T2, 31 /* bfi */, MCK_Bitfield, 8 /* 3 */ },
  { Feature_IsThumb2, 67 /* cdp */, MCK_CoprocNum, 1 /* 0 */ },
  { Feature_IsThumb2, 67 /* cdp */, MCK_CoprocReg, 28 /* 2, 3, 4 */ },
  { Feature_IsARM, 67 /* cdp */, MCK_CoprocNum, 2 /* 1 */ },
  { Feature_IsARM, 67 /* cdp */, MCK_CoprocReg, 56 /* 3, 4, 5 */ },
  { Feature_IsARM, 71 /* cdp2 */, MCK_CoprocNum, 1 /* 0 */ },
  { Feature_IsARM, 71 /* cdp2 */, MCK_CoprocReg, 28 /* 2, 3, 4 */ },
  { Feature_IsThumb2, 71 /* cdp2 */, MCK_CoprocNum, 1 /* 0 */ },
  { Feature_IsThumb2, 71 /* cdp2 */, MCK_CoprocReg, 28 /* 2, 3, 4 */ },
  { Feature_IsARM, 94 /* cps */, MCK_ProcIFlags, 2 /* 1 */ },
  { Feature_IsThumb, 94 /* cps */, MCK_ProcIFlags, 2 /* 1 */ },
  { Feature_IsThumb2, 94 /* cps */, MCK_ProcIFlags, 4 /* 2 */ },
  { Feature_IsARM, 94 /* cps */, MCK_ProcIFlags, 2 /* 1 */ },
  { Feature_IsThumb2, 94 /* cps */, MCK_ProcIFlags, 4 /* 2 */ },
  { Feature_IsARM|Feature_HasDB, 102 /* dmb */, MCK_MemBarrierOpt, 1 /* 0 */ },
  { Feature_IsThumb|Feature_HasDB, 102 /* dmb */, MCK_MemBarrierOpt, 1 /* 0 */ },
  { Feature_IsARM|Feature_HasDB, 106 /* dsb */, MCK_MemBarrierOpt, 1 /* 0 */ },
  { Feature_IsThumb|Feature_HasDB, 106 /* dsb */, MCK_MemBarrierOpt, 1 /* 0 */ },
  { Feature_IsARM|Feature_HasDB, 176 /* isb */, MCK_MemBarrierOpt, 1 /* 0 */ },
  { Feature_IsThumb|Feature_HasDB, 176 /* isb */, MCK_MemBarrierOpt, 1 /* 0 */ },
  { Feature_IsARM, 180 /* it */, MCK_ITCondCode, 2 /* 1 */ },
  { Feature_IsThumb2, 180 /* it */, MCK_ITCondCode, 2 /* 1 */ },
  { Feature_IsARM, 183 /* ldc */, MCK_CoprocNum, 2 /* 1 */ },
  { Feature_IsARM, 183 /* ldc */, MCK_CoprocReg, 4 /* 2 */ },
  { Feature_IsThumb2, 183 /* ldc */, MCK_CoprocNum, 2 /* 1 */ },
  { Feature_IsThumb2, 183 /* ldc */, MCK_CoprocReg, 4 /* 2 */ },
  { Feature_IsARM, 183 /* ldc */, MCK_CoprocNum, 2 /* 1 */ },
  { Feature_IsARM, 183 /* ldc */, MCK_CoprocReg, 4 /* 2 */ },
  { Feature_IsThumb2, 183 /* ldc */, MCK_CoprocNum, 2 /* 1 */ },
  { Feature_IsThumb2, 183 /* ldc */, MCK_CoprocReg, 4 /* 2 */ },
  { Feature_IsARM, 183 /* ldc */, MCK_CoprocNum, 2 /* 1 */ },
  { Feature_IsARM, 183 /* ldc */, MCK_CoprocOption, 16 /* 4 */ },
  { Feature_IsARM, 183 /* ldc */, MCK_CoprocReg, 4 /* 2 */ },
  { Feature_IsThumb2, 183 /* ldc */, MCK_CoprocNum, 2 /* 1 */ },
  { Feature_IsThumb2, 183 /* ldc */, MCK_CoprocOption, 16 /* 4 */ },
  { Feature_IsThumb2, 183 /* ldc */, MCK_CoprocReg, 4 /* 2 */ },
  { Feature_IsARM, 183 /* ldc */, MCK_CoprocNum, 2 /* 1 */ },
  { Feature_IsARM, 183 /* ldc */, MCK_CoprocReg, 4 /* 2 */ },
  { Feature_IsThumb2, 183 /* ldc */, MCK_CoprocNum, 2 /* 1 */ },
  { Feature_IsThumb2, 183 /* ldc */, MCK_CoprocReg, 4 /* 2 */ },
  { Feature_IsARM, 187 /* ldc2 */, MCK_CoprocNum, 1 /* 0 */ },
  { Feature_IsARM, 187 /* ldc2 */, MCK_CoprocReg, 2 /* 1 */ },
  { Feature_IsThumb2, 187 /* ldc2 */, MCK_CoprocNum, 2 /* 1 */ },
  { Feature_IsThumb2, 187 /* ldc2 */, MCK_CoprocReg, 4 /* 2 */ },
  { Feature_IsARM, 187 /* ldc2 */, MCK_CoprocNum, 1 /* 0 */ },
  { Feature_IsARM, 187 /* ldc2 */, MCK_CoprocReg, 2 /* 1 */ },
  { Feature_IsARM, 187 /* ldc2 */, MCK_CoprocNum, 1 /* 0 */ },
  { Feature_IsARM, 187 /* ldc2 */, MCK_CoprocOption, 8 /* 3 */ },
  { Feature_IsARM, 187 /* ldc2 */, MCK_CoprocReg, 2 /* 1 */ },
  { Feature_IsARM, 187 /* ldc2 */, MCK_CoprocNum, 1 /* 0 */ },
  { Feature_IsARM, 187 /* ldc2 */, MCK_CoprocReg, 2 /* 1 */ },
  { Feature_IsThumb2, 187 /* ldc2 */, MCK_CoprocNum, 2 /* 1 */ },
  { Feature_IsThumb2, 187 /* ldc2 */, MCK_CoprocReg, 4 /* 2 */ },
  { Feature_IsThumb2, 187 /* ldc2 */, MCK_CoprocNum, 2 /* 1 */ },
  { Feature_IsThumb2, 187 /* ldc2 */, MCK_CoprocOption, 16 /* 4 */ },
  { Feature_IsThumb2, 187 /* ldc2 */, MCK_CoprocReg, 4 /* 2 */ },
  { Feature_IsThumb2, 187 /* ldc2 */, MCK_CoprocNum, 2 /* 1 */ },
  { Feature_IsThumb2, 187 /* ldc2 */, MCK_CoprocReg, 4 /* 2 */ },
  { Feature_IsARM, 192 /* ldc2l */, MCK_CoprocNum, 1 /* 0 */ },
  { Feature_IsARM, 192 /* ldc2l */, MCK_CoprocReg, 2 /* 1 */ },
  { Feature_IsThumb2, 192 /* ldc2l */, MCK_CoprocNum, 2 /* 1 */ },
  { Feature_IsThumb2, 192 /* ldc2l */, MCK_CoprocReg, 4 /* 2 */ },
  { Feature_IsARM, 192 /* ldc2l */, MCK_CoprocNum, 1 /* 0 */ },
  { Feature_IsARM, 192 /* ldc2l */, MCK_CoprocReg, 2 /* 1 */ },
  { Feature_IsARM, 192 /* ldc2l */, MCK_CoprocNum, 1 /* 0 */ },
  { Feature_IsARM, 192 /* ldc2l */, MCK_CoprocOption, 8 /* 3 */ },
  { Feature_IsARM, 192 /* ldc2l */, MCK_CoprocReg, 2 /* 1 */ },
  { Feature_IsARM, 192 /* ldc2l */, MCK_CoprocNum, 1 /* 0 */ },
  { Feature_IsARM, 192 /* ldc2l */, MCK_CoprocReg, 2 /* 1 */ },
  { Feature_IsThumb2, 192 /* ldc2l */, MCK_CoprocNum, 2 /* 1 */ },
  { Feature_IsThumb2, 192 /* ldc2l */, MCK_CoprocReg, 4 /* 2 */ },
  { Feature_IsThumb2, 192 /* ldc2l */, MCK_CoprocNum, 2 /* 1 */ },
  { Feature_IsThumb2, 192 /* ldc2l */, MCK_CoprocOption, 16 /* 4 */ },
  { Feature_IsThumb2, 192 /* ldc2l */, MCK_CoprocReg, 4 /* 2 */ },
  { Feature_IsThumb2, 192 /* ldc2l */, MCK_CoprocNum, 2 /* 1 */ },
  { Feature_IsThumb2, 192 /* ldc2l */, MCK_CoprocReg, 4 /* 2 */ },
  { Feature_IsARM, 198 /* ldcl */, MCK_CoprocNum, 2 /* 1 */ },
  { Feature_IsARM, 198 /* ldcl */, MCK_CoprocReg, 4 /* 2 */ },
  { Feature_IsThumb2, 198 /* ldcl */, MCK_CoprocNum, 2 /* 1 */ },
  { Feature_IsThumb2, 198 /* ldcl */, MCK_CoprocReg, 4 /* 2 */ },
  { Feature_IsARM, 198 /* ldcl */, MCK_CoprocNum, 2 /* 1 */ },
  { Feature_IsARM, 198 /* ldcl */, MCK_CoprocReg, 4 /* 2 */ },
  { Feature_IsThumb2, 198 /* ldcl */, MCK_CoprocNum, 2 /* 1 */ },
  { Feature_IsThumb2, 198 /* ldcl */, MCK_CoprocReg, 4 /* 2 */ },
  { Feature_IsARM, 198 /* ldcl */, MCK_CoprocNum, 2 /* 1 */ },
  { Feature_IsARM, 198 /* ldcl */, MCK_CoprocOption, 16 /* 4 */ },
  { Feature_IsARM, 198 /* ldcl */, MCK_CoprocReg, 4 /* 2 */ },
  { Feature_IsThumb2, 198 /* ldcl */, MCK_CoprocNum, 2 /* 1 */ },
  { Feature_IsThumb2, 198 /* ldcl */, MCK_CoprocOption, 16 /* 4 */ },
  { Feature_IsThumb2, 198 /* ldcl */, MCK_CoprocReg, 4 /* 2 */ },
  { Feature_IsARM, 198 /* ldcl */, MCK_CoprocNum, 2 /* 1 */ },
  { Feature_IsARM, 198 /* ldcl */, MCK_CoprocReg, 4 /* 2 */ },
  { Feature_IsThumb2, 198 /* ldcl */, MCK_CoprocNum, 2 /* 1 */ },
  { Feature_IsThumb2, 198 /* ldcl */, MCK_CoprocReg, 4 /* 2 */ },
  { Feature_IsARM, 225 /* ldr */, MCK_PostIdxRegShifted, 8 /* 3 */ },
  { Feature_IsARM, 229 /* ldrb */, MCK_PostIdxRegShifted, 8 /* 3 */ },
  { Feature_IsARM, 234 /* ldrbt */, MCK_PostIdxRegShifted, 8 /* 3 */ },
  { Feature_IsARM, 240 /* ldrd */, MCK_AM3Offset, 16 /* 4 */ },
  { Feature_IsARM, 272 /* ldrh */, MCK_AM3Offset, 8 /* 3 */ },
  { Feature_IsARM, 277 /* ldrht */, MCK_PostIdxReg, 8 /* 3 */ },
  { Feature_IsARM, 283 /* ldrsb */, MCK_AM3Offset, 8 /* 3 */ },
  { Feature_IsARM, 289 /* ldrsbt */, MCK_PostIdxReg, 8 /* 3 */ },
  { Feature_IsARM, 296 /* ldrsh */, MCK_AM3Offset, 8 /* 3 */ },
  { Feature_IsARM, 302 /* ldrsht */, MCK_PostIdxReg, 8 /* 3 */ },
  { Feature_IsARM, 309 /* ldrt */, MCK_PostIdxRegShifted, 8 /* 3 */ },
  { Feature_IsThumb2, 322 /* mcr */, MCK_CoprocNum, 1 /* 0 */ },
  { Feature_IsThumb2, 322 /* mcr */, MCK_CoprocReg, 24 /* 3, 4 */ },
  { Feature_IsARM, 322 /* mcr */, MCK_CoprocNum, 2 /* 1 */ },
  { Feature_IsARM, 322 /* mcr */, MCK_CoprocReg, 48 /* 4, 5 */ },
  { Feature_IsThumb2, 322 /* mcr */, MCK_CoprocNum, 1 /* 0 */ },
  { Feature_IsThumb2, 322 /* mcr */, MCK_CoprocReg, 24 /* 3, 4 */ },
  { Feature_IsARM, 322 /* mcr */, MCK_CoprocNum, 2 /* 1 */ },
  { Feature_IsARM, 322 /* mcr */, MCK_CoprocReg, 48 /* 4, 5 */ },
  { Feature_IsARM, 326 /* mcr2 */, MCK_CoprocNum, 1 /* 0 */ },
  { Feature_IsARM, 326 /* mcr2 */, MCK_CoprocReg, 24 /* 3, 4 */ },
  { Feature_IsThumb2, 326 /* mcr2 */, MCK_CoprocNum, 1 /* 0 */ },
  { Feature_IsThumb2, 326 /* mcr2 */, MCK_CoprocReg, 24 /* 3, 4 */ },
  { Feature_IsARM, 326 /* mcr2 */, MCK_CoprocNum, 1 /* 0 */ },
  { Feature_IsARM, 326 /* mcr2 */, MCK_CoprocReg, 24 /* 3, 4 */ },
  { Feature_IsThumb2, 326 /* mcr2 */, MCK_CoprocNum, 1 /* 0 */ },
  { Feature_IsThumb2, 326 /* mcr2 */, MCK_CoprocReg, 24 /* 3, 4 */ },
  { Feature_IsThumb2, 331 /* mcrr */, MCK_CoprocNum, 1 /* 0 */ },
  { Feature_IsThumb2, 331 /* mcrr */, MCK_CoprocReg, 16 /* 4 */ },
  { Feature_IsARM, 331 /* mcrr */, MCK_CoprocNum, 2 /* 1 */ },
  { Feature_IsARM, 331 /* mcrr */, MCK_CoprocReg, 32 /* 5 */ },
  { Feature_IsARM, 336 /* mcrr2 */, MCK_CoprocNum, 1 /* 0 */ },
  { Feature_IsARM, 336 /* mcrr2 */, MCK_CoprocReg, 16 /* 4 */ },
  { Feature_IsThumb2, 336 /* mcrr2 */, MCK_CoprocNum, 1 /* 0 */ },
  { Feature_IsThumb2, 336 /* mcrr2 */, MCK_CoprocReg, 16 /* 4 */ },
  { Feature_IsThumb2, 369 /* mrc */, MCK_CoprocNum, 1 /* 0 */ },
  { Feature_IsThumb2, 369 /* mrc */, MCK_CoprocReg, 24 /* 3, 4 */ },
  { Feature_IsARM, 369 /* mrc */, MCK_CoprocNum, 2 /* 1 */ },
  { Feature_IsARM, 369 /* mrc */, MCK_CoprocReg, 48 /* 4, 5 */ },
  { Feature_IsThumb2, 369 /* mrc */, MCK_CoprocNum, 1 /* 0 */ },
  { Feature_IsThumb2, 369 /* mrc */, MCK_CoprocReg, 24 /* 3, 4 */ },
  { Feature_IsARM, 369 /* mrc */, MCK_CoprocNum, 2 /* 1 */ },
  { Feature_IsARM, 369 /* mrc */, MCK_CoprocReg, 48 /* 4, 5 */ },
  { Feature_IsARM, 373 /* mrc2 */, MCK_CoprocNum, 1 /* 0 */ },
  { Feature_IsARM, 373 /* mrc2 */, MCK_CoprocReg, 24 /* 3, 4 */ },
  { Feature_IsThumb2, 373 /* mrc2 */, MCK_CoprocNum, 1 /* 0 */ },
  { Feature_IsThumb2, 373 /* mrc2 */, MCK_CoprocReg, 24 /* 3, 4 */ },
  { Feature_IsARM, 373 /* mrc2 */, MCK_CoprocNum, 1 /* 0 */ },
  { Feature_IsARM, 373 /* mrc2 */, MCK_CoprocReg, 24 /* 3, 4 */ },
  { Feature_IsThumb2, 373 /* mrc2 */, MCK_CoprocNum, 1 /* 0 */ },
  { Feature_IsThumb2, 373 /* mrc2 */, MCK_CoprocReg, 24 /* 3, 4 */ },
  { Feature_IsThumb2, 378 /* mrrc */, MCK_CoprocNum, 1 /* 0 */ },
  { Feature_IsThumb2, 378 /* mrrc */, MCK_CoprocReg, 16 /* 4 */ },
  { Feature_IsARM, 378 /* mrrc */, MCK_CoprocNum, 2 /* 1 */ },
  { Feature_IsARM, 378 /* mrrc */, MCK_CoprocReg, 32 /* 5 */ },
  { Feature_IsARM, 383 /* mrrc2 */, MCK_CoprocNum, 1 /* 0 */ },
  { Feature_IsARM, 383 /* mrrc2 */, MCK_CoprocReg, 16 /* 4 */ },
  { Feature_IsThumb2, 383 /* mrrc2 */, MCK_CoprocNum, 1 /* 0 */ },
  { Feature_IsThumb2, 383 /* mrrc2 */, MCK_CoprocReg, 16 /* 4 */ },
  { Feature_IsThumb|Feature_IsMClass, 389 /* mrs */, MCK_MSRMask, 4 /* 2 */ },
  { Feature_IsThumb2|Feature_IsARClass, 393 /* msr */, MCK_MSRMask, 2 /* 1 */ },
  { Feature_IsThumb|Feature_IsMClass, 393 /* msr */, MCK_MSRMask, 2 /* 1 */ },
  { Feature_IsARM, 393 /* msr */, MCK_MSRMask, 2 /* 1 */ },
  { Feature_IsARM, 393 /* msr */, MCK_MSRMask, 2 /* 1 */ },
  { Feature_HasT2ExtractPack|Feature_IsThumb2, 421 /* pkhbt */, MCK_PKHLSLImm, 16 /* 4 */ },
  { Feature_IsARM|Feature_HasV6, 421 /* pkhbt */, MCK_PKHLSLImm, 16 /* 4 */ },
  { Feature_HasT2ExtractPack|Feature_IsThumb2, 427 /* pkhtb */, MCK_PKHASRImm, 16 /* 4 */ },
  { Feature_IsARM|Feature_HasV6, 427 /* pkhtb */, MCK_PKHASRImm, 16 /* 4 */ },
  { Feature_IsARM, 610 /* setend */, MCK_SetEndImm, 1 /* 0 */ },
  { Feature_IsThumb, 610 /* setend */, MCK_SetEndImm, 1 /* 0 */ },
  { Feature_IsThumb2, 940 /* ssat */, MCK_ShifterImm, 16 /* 4 */ },
  { Feature_IsARM, 940 /* ssat */, MCK_ShifterImm, 16 /* 4 */ },
  { Feature_IsARM, 970 /* stc */, MCK_CoprocNum, 2 /* 1 */ },
  { Feature_IsARM, 970 /* stc */, MCK_CoprocReg, 4 /* 2 */ },
  { Feature_IsThumb2, 970 /* stc */, MCK_CoprocNum, 2 /* 1 */ },
  { Feature_IsThumb2, 970 /* stc */, MCK_CoprocReg, 4 /* 2 */ },
  { Feature_IsARM, 970 /* stc */, MCK_CoprocNum, 2 /* 1 */ },
  { Feature_IsARM, 970 /* stc */, MCK_CoprocReg, 4 /* 2 */ },
  { Feature_IsThumb2, 970 /* stc */, MCK_CoprocNum, 2 /* 1 */ },
  { Feature_IsThumb2, 970 /* stc */, MCK_CoprocReg, 4 /* 2 */ },
  { Feature_IsARM, 970 /* stc */, MCK_CoprocNum, 2 /* 1 */ },
  { Feature_IsARM, 970 /* stc */, MCK_CoprocOption, 16 /* 4 */ },
  { Feature_IsARM, 970 /* stc */, MCK_CoprocReg, 4 /* 2 */ },
  { Feature_IsThumb2, 970 /* stc */, MCK_CoprocNum, 2 /* 1 */ },
  { Feature_IsThumb2, 970 /* stc */, MCK_CoprocOption, 16 /* 4 */ },
  { Feature_IsThumb2, 970 /* stc */, MCK_CoprocReg, 4 /* 2 */ },
  { Feature_IsARM, 970 /* stc */, MCK_CoprocNum, 2 /* 1 */ },
  { Feature_IsARM, 970 /* stc */, MCK_CoprocReg, 4 /* 2 */ },
  { Feature_IsThumb2, 970 /* stc */, MCK_CoprocNum, 2 /* 1 */ },
  { Feature_IsThumb2, 970 /* stc */, MCK_CoprocReg, 4 /* 2 */ },
  { Feature_IsARM, 974 /* stc2 */, MCK_CoprocNum, 1 /* 0 */ },
  { Feature_IsARM, 974 /* stc2 */, MCK_CoprocReg, 2 /* 1 */ },
  { Feature_IsThumb2, 974 /* stc2 */, MCK_CoprocNum, 2 /* 1 */ },
  { Feature_IsThumb2, 974 /* stc2 */, MCK_CoprocReg, 4 /* 2 */ },
  { Feature_IsARM, 974 /* stc2 */, MCK_CoprocNum, 1 /* 0 */ },
  { Feature_IsARM, 974 /* stc2 */, MCK_CoprocReg, 2 /* 1 */ },
  { Feature_IsARM, 974 /* stc2 */, MCK_CoprocNum, 1 /* 0 */ },
  { Feature_IsARM, 974 /* stc2 */, MCK_CoprocOption, 8 /* 3 */ },
  { Feature_IsARM, 974 /* stc2 */, MCK_CoprocReg, 2 /* 1 */ },
  { Feature_IsARM, 974 /* stc2 */, MCK_CoprocNum, 1 /* 0 */ },
  { Feature_IsARM, 974 /* stc2 */, MCK_CoprocReg, 2 /* 1 */ },
  { Feature_IsThumb2, 974 /* stc2 */, MCK_CoprocNum, 2 /* 1 */ },
  { Feature_IsThumb2, 974 /* stc2 */, MCK_CoprocReg, 4 /* 2 */ },
  { Feature_IsThumb2, 974 /* stc2 */, MCK_CoprocNum, 2 /* 1 */ },
  { Feature_IsThumb2, 974 /* stc2 */, MCK_CoprocOption, 16 /* 4 */ },
  { Feature_IsThumb2, 974 /* stc2 */, MCK_CoprocReg, 4 /* 2 */ },
  { Feature_IsThumb2, 974 /* stc2 */, MCK_CoprocNum, 2 /* 1 */ },
  { Feature_IsThumb2, 974 /* stc2 */, MCK_CoprocReg, 4 /* 2 */ },
  { Feature_IsARM, 979 /* stc2l */, MCK_CoprocNum, 1 /* 0 */ },
  { Feature_IsARM, 979 /* stc2l */, MCK_CoprocReg, 2 /* 1 */ },
  { Feature_IsThumb2, 979 /* stc2l */, MCK_CoprocNum, 2 /* 1 */ },
  { Feature_IsThumb2, 979 /* stc2l */, MCK_CoprocReg, 4 /* 2 */ },
  { Feature_IsARM, 979 /* stc2l */, MCK_CoprocNum, 1 /* 0 */ },
  { Feature_IsARM, 979 /* stc2l */, MCK_CoprocReg, 2 /* 1 */ },
  { Feature_IsARM, 979 /* stc2l */, MCK_CoprocNum, 1 /* 0 */ },
  { Feature_IsARM, 979 /* stc2l */, MCK_CoprocOption, 8 /* 3 */ },
  { Feature_IsARM, 979 /* stc2l */, MCK_CoprocReg, 2 /* 1 */ },
  { Feature_IsARM, 979 /* stc2l */, MCK_CoprocNum, 1 /* 0 */ },
  { Feature_IsARM, 979 /* stc2l */, MCK_CoprocReg, 2 /* 1 */ },
  { Feature_IsThumb2, 979 /* stc2l */, MCK_CoprocNum, 2 /* 1 */ },
  { Feature_IsThumb2, 979 /* stc2l */, MCK_CoprocReg, 4 /* 2 */ },
  { Feature_IsThumb2, 979 /* stc2l */, MCK_CoprocNum, 2 /* 1 */ },
  { Feature_IsThumb2, 979 /* stc2l */, MCK_CoprocOption, 16 /* 4 */ },
  { Feature_IsThumb2, 979 /* stc2l */, MCK_CoprocReg, 4 /* 2 */ },
  { Feature_IsThumb2, 979 /* stc2l */, MCK_CoprocNum, 2 /* 1 */ },
  { Feature_IsThumb2, 979 /* stc2l */, MCK_CoprocReg, 4 /* 2 */ },
  { Feature_IsARM, 985 /* stcl */, MCK_CoprocNum, 2 /* 1 */ },
  { Feature_IsARM, 985 /* stcl */, MCK_CoprocReg, 4 /* 2 */ },
  { Feature_IsThumb2, 985 /* stcl */, MCK_CoprocNum, 2 /* 1 */ },
  { Feature_IsThumb2, 985 /* stcl */, MCK_CoprocReg, 4 /* 2 */ },
  { Feature_IsARM, 985 /* stcl */, MCK_CoprocNum, 2 /* 1 */ },
  { Feature_IsARM, 985 /* stcl */, MCK_CoprocReg, 4 /* 2 */ },
  { Feature_IsThumb2, 985 /* stcl */, MCK_CoprocNum, 2 /* 1 */ },
  { Feature_IsThumb2, 985 /* stcl */, MCK_CoprocReg, 4 /* 2 */ },
  { Feature_IsARM, 985 /* stcl */, MCK_CoprocNum, 2 /* 1 */ },
  { Feature_IsARM, 985 /* stcl */, MCK_CoprocOption, 16 /* 4 */ },
  { Feature_IsARM, 985 /* stcl */, MCK_CoprocReg, 4 /* 2 */ },
  { Feature_IsThumb2, 985 /* stcl */, MCK_CoprocNum, 2 /* 1 */ },
  { Feature_IsThumb2, 985 /* stcl */, MCK_CoprocOption, 16 /* 4 */ },
  { Feature_IsThumb2, 985 /* stcl */, MCK_CoprocReg, 4 /* 2 */ },
  { Feature_IsARM, 985 /* stcl */, MCK_CoprocNum, 2 /* 1 */ },
  { Feature_IsARM, 985 /* stcl */, MCK_CoprocReg, 4 /* 2 */ },
  { Feature_IsThumb2, 985 /* stcl */, MCK_CoprocNum, 2 /* 1 */ },
  { Feature_IsThumb2, 985 /* stcl */, MCK_CoprocReg, 4 /* 2 */ },
  { Feature_IsARM, 1012 /* str */, MCK_PostIdxRegShifted, 8 /* 3 */ },
  { Feature_IsARM, 1016 /* strb */, MCK_PostIdxRegShifted, 8 /* 3 */ },
  { Feature_IsARM, 1021 /* strbt */, MCK_PostIdxRegShifted, 8 /* 3 */ },
  { Feature_IsARM, 1027 /* strd */, MCK_AM3Offset, 16 /* 4 */ },
  { Feature_IsARM, 1059 /* strh */, MCK_AM3Offset, 8 /* 3 */ },
  { Feature_IsARM, 1064 /* strht */, MCK_PostIdxReg, 8 /* 3 */ },
  { Feature_IsARM, 1070 /* strt */, MCK_PostIdxRegShifted, 8 /* 3 */ },
  { Feature_HasT2ExtractPack|Feature_IsThumb2, 1097 /* sxtab */, MCK_RotImm, 16 /* 4 */ },
  { Feature_IsARM|Feature_HasV6, 1097 /* sxtab */, MCK_RotImm, 16 /* 4 */ },
  { Feature_IsThumb2, 1103 /* sxtab16 */, MCK_RotImm, 16 /* 4 */ },
  { Feature_IsARM|Feature_HasV6, 1103 /* sxtab16 */, MCK_RotImm, 16 /* 4 */ },
  { Feature_HasT2ExtractPack|Feature_IsThumb2, 1111 /* sxtah */, MCK_RotImm, 16 /* 4 */ },
  { Feature_IsARM|Feature_HasV6, 1111 /* sxtah */, MCK_RotImm, 16 /* 4 */ },
  { Feature_IsThumb2, 1117 /* sxtb */, MCK_RotImm, 8 /* 3 */ },
  { Feature_IsARM|Feature_HasV6, 1117 /* sxtb */, MCK_RotImm, 8 /* 3 */ },
  { Feature_IsThumb2, 1117 /* sxtb */, MCK_RotImm, 16 /* 4 */ },
  { Feature_IsThumb2|Feature_HasT2ExtractPack, 1122 /* sxtb16 */, MCK_RotImm, 8 /* 3 */ },
  { Feature_IsThumb2, 1122 /* sxtb16 */, MCK_RotImm, 8 /* 3 */ },
  { Feature_IsARM|Feature_HasV6, 1122 /* sxtb16 */, MCK_RotImm, 8 /* 3 */ },
  { Feature_IsThumb2, 1129 /* sxth */, MCK_RotImm, 8 /* 3 */ },
  { Feature_IsARM|Feature_HasV6, 1129 /* sxth */, MCK_RotImm, 8 /* 3 */ },
  { Feature_IsThumb2, 1129 /* sxth */, MCK_RotImm, 16 /* 4 */ },
  { Feature_IsThumb2, 1298 /* usat */, MCK_ShifterImm, 16 /* 4 */ },
  { Feature_IsARM, 1298 /* usat */, MCK_ShifterImm, 16 /* 4 */ },
  { Feature_HasT2ExtractPack|Feature_IsThumb2, 1328 /* uxtab */, MCK_RotImm, 16 /* 4 */ },
  { Feature_IsARM|Feature_HasV6, 1328 /* uxtab */, MCK_RotImm, 16 /* 4 */ },
  { Feature_IsThumb2, 1334 /* uxtab16 */, MCK_RotImm, 16 /* 4 */ },
  { Feature_IsARM|Feature_HasV6, 1334 /* uxtab16 */, MCK_RotImm, 16 /* 4 */ },
  { Feature_HasT2ExtractPack|Feature_IsThumb2, 1342 /* uxtah */, MCK_RotImm, 16 /* 4 */ },
  { Feature_IsARM|Feature_HasV6, 1342 /* uxtah */, MCK_RotImm, 16 /* 4 */ },
  { Feature_IsThumb2, 1348 /* uxtb */, MCK_RotImm, 8 /* 3 */ },
  { Feature_IsARM|Feature_HasV6, 1348 /* uxtb */, MCK_RotImm, 8 /* 3 */ },
  { Feature_IsThumb2, 1348 /* uxtb */, MCK_RotImm, 16 /* 4 */ },
  { Feature_HasT2ExtractPack|Feature_IsThumb2, 1353 /* uxtb16 */, MCK_RotImm, 8 /* 3 */ },
  { Feature_IsThumb2, 1353 /* uxtb16 */, MCK_RotImm, 8 /* 3 */ },
  { Feature_IsARM|Feature_HasV6, 1353 /* uxtb16 */, MCK_RotImm, 8 /* 3 */ },
  { Feature_IsThumb2, 1360 /* uxth */, MCK_RotImm, 8 /* 3 */ },
  { Feature_IsARM|Feature_HasV6, 1360 /* uxth */, MCK_RotImm, 8 /* 3 */ },
  { Feature_IsThumb2, 1360 /* uxth */, MCK_RotImm, 16 /* 4 */ },
  { Feature_HasNEON, 1581 /* vld1 */, MCK_VecListDPairAllLanes, 4 /* 2 */ },
  { Feature_HasNEON, 1581 /* vld1 */, MCK_VecListDPair, 4 /* 2 */ },
  { Feature_HasNEON, 1581 /* vld1 */, MCK_VecListFourD, 4 /* 2 */ },
  { Feature_HasNEON, 1581 /* vld1 */, MCK_VecListOneDAllLanes, 4 /* 2 */ },
  { Feature_HasNEON, 1581 /* vld1 */, MCK_VecListOneD, 4 /* 2 */ },
  { Feature_HasNEON, 1581 /* vld1 */, MCK_VecListOneDHWordIndexed, 4 /* 2 */ },
  { Feature_HasNEON, 1581 /* vld1 */, MCK_VecListThreeD, 4 /* 2 */ },
  { Feature_HasNEON, 1581 /* vld1 */, MCK_VecListDPairAllLanes, 4 /* 2 */ },
  { Feature_HasNEON, 1581 /* vld1 */, MCK_VecListDPair, 4 /* 2 */ },
  { Feature_HasNEON, 1581 /* vld1 */, MCK_VecListFourD, 4 /* 2 */ },
  { Feature_HasNEON, 1581 /* vld1 */, MCK_VecListOneDAllLanes, 4 /* 2 */ },
  { Feature_HasNEON, 1581 /* vld1 */, MCK_VecListOneD, 4 /* 2 */ },
  { Feature_HasNEON, 1581 /* vld1 */, MCK_VecListOneDWordIndexed, 4 /* 2 */ },
  { Feature_HasNEON, 1581 /* vld1 */, MCK_VecListThreeD, 4 /* 2 */ },
  { Feature_HasNEON, 1581 /* vld1 */, MCK_VecListDPair, 4 /* 2 */ },
  { Feature_HasNEON, 1581 /* vld1 */, MCK_VecListFourD, 4 /* 2 */ },
  { Feature_HasNEON, 1581 /* vld1 */, MCK_VecListOneD, 4 /* 2 */ },
  { Feature_HasNEON, 1581 /* vld1 */, MCK_VecListThreeD, 4 /* 2 */ },
  { Feature_HasNEON, 1581 /* vld1 */, MCK_VecListDPairAllLanes, 4 /* 2 */ },
  { Feature_HasNEON, 1581 /* vld1 */, MCK_VecListDPair, 4 /* 2 */ },
  { Feature_HasNEON, 1581 /* vld1 */, MCK_VecListFourD, 4 /* 2 */ },
  { Feature_HasNEON, 1581 /* vld1 */, MCK_VecListOneDAllLanes, 4 /* 2 */ },
  { Feature_HasNEON, 1581 /* vld1 */, MCK_VecListOneD, 4 /* 2 */ },
  { Feature_HasNEON, 1581 /* vld1 */, MCK_VecListOneDByteIndexed, 4 /* 2 */ },
  { Feature_HasNEON, 1581 /* vld1 */, MCK_VecListThreeD, 4 /* 2 */ },
  { Feature_HasNEON, 1581 /* vld1 */, MCK_VecListDPairAllLanes, 4 /* 2 */ },
  { Feature_HasNEON, 1581 /* vld1 */, MCK_VecListDPairAllLanes, 4 /* 2 */ },
  { Feature_HasNEON, 1581 /* vld1 */, MCK_VecListDPair, 4 /* 2 */ },
  { Feature_HasNEON, 1581 /* vld1 */, MCK_VecListDPair, 4 /* 2 */ },
  { Feature_HasNEON, 1581 /* vld1 */, MCK_VecListFourD, 4 /* 2 */ },
  { Feature_HasNEON, 1581 /* vld1 */, MCK_VecListFourD, 4 /* 2 */ },
  { Feature_HasNEON, 1581 /* vld1 */, MCK_VecListOneDAllLanes, 4 /* 2 */ },
  { Feature_HasNEON, 1581 /* vld1 */, MCK_VecListOneDAllLanes, 4 /* 2 */ },
  { Feature_HasNEON, 1581 /* vld1 */, MCK_VecListOneD, 4 /* 2 */ },
  { Feature_HasNEON, 1581 /* vld1 */, MCK_VecListOneD, 4 /* 2 */ },
  { Feature_HasNEON, 1581 /* vld1 */, MCK_VecListOneDHWordIndexed, 4 /* 2 */ },
  { Feature_HasNEON, 1581 /* vld1 */, MCK_VecListOneDHWordIndexed, 4 /* 2 */ },
  { Feature_HasNEON, 1581 /* vld1 */, MCK_VecListThreeD, 4 /* 2 */ },
  { Feature_HasNEON, 1581 /* vld1 */, MCK_VecListThreeD, 4 /* 2 */ },
  { Feature_HasNEON, 1581 /* vld1 */, MCK_VecListDPairAllLanes, 4 /* 2 */ },
  { Feature_HasNEON, 1581 /* vld1 */, MCK_VecListDPairAllLanes, 4 /* 2 */ },
  { Feature_HasNEON, 1581 /* vld1 */, MCK_VecListDPair, 4 /* 2 */ },
  { Feature_HasNEON, 1581 /* vld1 */, MCK_VecListDPair, 4 /* 2 */ },
  { Feature_HasNEON, 1581 /* vld1 */, MCK_VecListFourD, 4 /* 2 */ },
  { Feature_HasNEON, 1581 /* vld1 */, MCK_VecListFourD, 4 /* 2 */ },
  { Feature_HasNEON, 1581 /* vld1 */, MCK_VecListOneDAllLanes, 4 /* 2 */ },
  { Feature_HasNEON, 1581 /* vld1 */, MCK_VecListOneDAllLanes, 4 /* 2 */ },
  { Feature_HasNEON, 1581 /* vld1 */, MCK_VecListOneD, 4 /* 2 */ },
  { Feature_HasNEON, 1581 /* vld1 */, MCK_VecListOneD, 4 /* 2 */ },
  { Feature_HasNEON, 1581 /* vld1 */, MCK_VecListOneDWordIndexed, 4 /* 2 */ },
  { Feature_HasNEON, 1581 /* vld1 */, MCK_VecListOneDWordIndexed, 4 /* 2 */ },
  { Feature_HasNEON, 1581 /* vld1 */, MCK_VecListThreeD, 4 /* 2 */ },
  { Feature_HasNEON, 1581 /* vld1 */, MCK_VecListThreeD, 4 /* 2 */ },
  { Feature_HasNEON, 1581 /* vld1 */, MCK_VecListDPair, 4 /* 2 */ },
  { Feature_HasNEON, 1581 /* vld1 */, MCK_VecListDPair, 4 /* 2 */ },
  { Feature_HasNEON, 1581 /* vld1 */, MCK_VecListFourD, 4 /* 2 */ },
  { Feature_HasNEON, 1581 /* vld1 */, MCK_VecListFourD, 4 /* 2 */ },
  { Feature_HasNEON, 1581 /* vld1 */, MCK_VecListOneD, 4 /* 2 */ },
  { Feature_HasNEON, 1581 /* vld1 */, MCK_VecListOneD, 4 /* 2 */ },
  { Feature_HasNEON, 1581 /* vld1 */, MCK_VecListThreeD, 4 /* 2 */ },
  { Feature_HasNEON, 1581 /* vld1 */, MCK_VecListThreeD, 4 /* 2 */ },
  { Feature_HasNEON, 1581 /* vld1 */, MCK_VecListDPairAllLanes, 4 /* 2 */ },
  { Feature_HasNEON, 1581 /* vld1 */, MCK_VecListDPairAllLanes, 4 /* 2 */ },
  { Feature_HasNEON, 1581 /* vld1 */, MCK_VecListDPair, 4 /* 2 */ },
  { Feature_HasNEON, 1581 /* vld1 */, MCK_VecListDPair, 4 /* 2 */ },
  { Feature_HasNEON, 1581 /* vld1 */, MCK_VecListFourD, 4 /* 2 */ },
  { Feature_HasNEON, 1581 /* vld1 */, MCK_VecListFourD, 4 /* 2 */ },
  { Feature_HasNEON, 1581 /* vld1 */, MCK_VecListOneDAllLanes, 4 /* 2 */ },
  { Feature_HasNEON, 1581 /* vld1 */, MCK_VecListOneDAllLanes, 4 /* 2 */ },
  { Feature_HasNEON, 1581 /* vld1 */, MCK_VecListOneD, 4 /* 2 */ },
  { Feature_HasNEON, 1581 /* vld1 */, MCK_VecListOneD, 4 /* 2 */ },
  { Feature_HasNEON, 1581 /* vld1 */, MCK_VecListOneDByteIndexed, 4 /* 2 */ },
  { Feature_HasNEON, 1581 /* vld1 */, MCK_VecListOneDByteIndexed, 4 /* 2 */ },
  { Feature_HasNEON, 1581 /* vld1 */, MCK_VecListThreeD, 4 /* 2 */ },
  { Feature_HasNEON, 1581 /* vld1 */, MCK_VecListThreeD, 4 /* 2 */ },
  { Feature_HasNEON, 1586 /* vld2 */, MCK_VecListDPairAllLanes, 4 /* 2 */ },
  { Feature_HasNEON, 1586 /* vld2 */, MCK_VecListDPair, 4 /* 2 */ },
  { Feature_HasNEON, 1586 /* vld2 */, MCK_VecListDPairSpacedAllLanes, 4 /* 2 */ },
  { Feature_HasNEON, 1586 /* vld2 */, MCK_VecListDPairSpaced, 4 /* 2 */ },
  { Feature_HasNEON, 1586 /* vld2 */, MCK_VecListFourD, 4 /* 2 */ },
  { Feature_HasNEON, 1586 /* vld2 */, MCK_VecListTwoDHWordIndexed, 4 /* 2 */ },
  { Feature_HasNEON, 1586 /* vld2 */, MCK_VecListTwoQHWordIndexed, 4 /* 2 */ },
  { Feature_HasNEON, 1586 /* vld2 */, MCK_VecListDPairAllLanes, 4 /* 2 */ },
  { Feature_HasNEON, 1586 /* vld2 */, MCK_VecListDPair, 4 /* 2 */ },
  { Feature_HasNEON, 1586 /* vld2 */, MCK_VecListDPairSpacedAllLanes, 4 /* 2 */ },
  { Feature_HasNEON, 1586 /* vld2 */, MCK_VecListDPairSpaced, 4 /* 2 */ },
  { Feature_HasNEON, 1586 /* vld2 */, MCK_VecListFourD, 4 /* 2 */ },
  { Feature_HasNEON, 1586 /* vld2 */, MCK_VecListTwoDWordIndexed, 4 /* 2 */ },
  { Feature_HasNEON, 1586 /* vld2 */, MCK_VecListTwoQWordIndexed, 4 /* 2 */ },
  { Feature_HasNEON, 1586 /* vld2 */, MCK_VecListDPairAllLanes, 4 /* 2 */ },
  { Feature_HasNEON, 1586 /* vld2 */, MCK_VecListDPair, 4 /* 2 */ },
  { Feature_HasNEON, 1586 /* vld2 */, MCK_VecListDPairSpacedAllLanes, 4 /* 2 */ },
  { Feature_HasNEON, 1586 /* vld2 */, MCK_VecListDPairSpaced, 4 /* 2 */ },
  { Feature_HasNEON, 1586 /* vld2 */, MCK_VecListFourD, 4 /* 2 */ },
  { Feature_HasNEON, 1586 /* vld2 */, MCK_VecListTwoDByteIndexed, 4 /* 2 */ },
  { Feature_HasNEON, 1586 /* vld2 */, MCK_VecListDPairAllLanes, 4 /* 2 */ },
  { Feature_HasNEON, 1586 /* vld2 */, MCK_VecListDPairAllLanes, 4 /* 2 */ },
  { Feature_HasNEON, 1586 /* vld2 */, MCK_VecListDPair, 4 /* 2 */ },
  { Feature_HasNEON, 1586 /* vld2 */, MCK_VecListDPair, 4 /* 2 */ },
  { Feature_HasNEON, 1586 /* vld2 */, MCK_VecListDPairSpacedAllLanes, 4 /* 2 */ },
  { Feature_HasNEON, 1586 /* vld2 */, MCK_VecListDPairSpacedAllLanes, 4 /* 2 */ },
  { Feature_HasNEON, 1586 /* vld2 */, MCK_VecListDPairSpaced, 4 /* 2 */ },
  { Feature_HasNEON, 1586 /* vld2 */, MCK_VecListDPairSpaced, 4 /* 2 */ },
  { Feature_HasNEON, 1586 /* vld2 */, MCK_VecListFourD, 4 /* 2 */ },
  { Feature_HasNEON, 1586 /* vld2 */, MCK_VecListFourD, 4 /* 2 */ },
  { Feature_HasNEON, 1586 /* vld2 */, MCK_VecListTwoDHWordIndexed, 4 /* 2 */ },
  { Feature_HasNEON, 1586 /* vld2 */, MCK_VecListTwoDHWordIndexed, 4 /* 2 */ },
  { Feature_HasNEON, 1586 /* vld2 */, MCK_VecListTwoQHWordIndexed, 4 /* 2 */ },
  { Feature_HasNEON, 1586 /* vld2 */, MCK_VecListTwoQHWordIndexed, 4 /* 2 */ },
  { Feature_HasNEON, 1586 /* vld2 */, MCK_VecListDPairAllLanes, 4 /* 2 */ },
  { Feature_HasNEON, 1586 /* vld2 */, MCK_VecListDPairAllLanes, 4 /* 2 */ },
  { Feature_HasNEON, 1586 /* vld2 */, MCK_VecListDPair, 4 /* 2 */ },
  { Feature_HasNEON, 1586 /* vld2 */, MCK_VecListDPair, 4 /* 2 */ },
  { Feature_HasNEON, 1586 /* vld2 */, MCK_VecListDPairSpacedAllLanes, 4 /* 2 */ },
  { Feature_HasNEON, 1586 /* vld2 */, MCK_VecListDPairSpacedAllLanes, 4 /* 2 */ },
  { Feature_HasNEON, 1586 /* vld2 */, MCK_VecListDPairSpaced, 4 /* 2 */ },
  { Feature_HasNEON, 1586 /* vld2 */, MCK_VecListDPairSpaced, 4 /* 2 */ },
  { Feature_HasNEON, 1586 /* vld2 */, MCK_VecListFourD, 4 /* 2 */ },
  { Feature_HasNEON, 1586 /* vld2 */, MCK_VecListFourD, 4 /* 2 */ },
  { Feature_HasNEON, 1586 /* vld2 */, MCK_VecListTwoDWordIndexed, 4 /* 2 */ },
  { Feature_HasNEON, 1586 /* vld2 */, MCK_VecListTwoDWordIndexed, 4 /* 2 */ },
  { Feature_HasNEON, 1586 /* vld2 */, MCK_VecListTwoQWordIndexed, 4 /* 2 */ },
  { Feature_HasNEON, 1586 /* vld2 */, MCK_VecListTwoQWordIndexed, 4 /* 2 */ },
  { Feature_HasNEON, 1586 /* vld2 */, MCK_VecListDPairAllLanes, 4 /* 2 */ },
  { Feature_HasNEON, 1586 /* vld2 */, MCK_VecListDPairAllLanes, 4 /* 2 */ },
  { Feature_HasNEON, 1586 /* vld2 */, MCK_VecListDPair, 4 /* 2 */ },
  { Feature_HasNEON, 1586 /* vld2 */, MCK_VecListDPair, 4 /* 2 */ },
  { Feature_HasNEON, 1586 /* vld2 */, MCK_VecListDPairSpacedAllLanes, 4 /* 2 */ },
  { Feature_HasNEON, 1586 /* vld2 */, MCK_VecListDPairSpacedAllLanes, 4 /* 2 */ },
  { Feature_HasNEON, 1586 /* vld2 */, MCK_VecListDPairSpaced, 4 /* 2 */ },
  { Feature_HasNEON, 1586 /* vld2 */, MCK_VecListDPairSpaced, 4 /* 2 */ },
  { Feature_HasNEON, 1586 /* vld2 */, MCK_VecListFourD, 4 /* 2 */ },
  { Feature_HasNEON, 1586 /* vld2 */, MCK_VecListFourD, 4 /* 2 */ },
  { Feature_HasNEON, 1586 /* vld2 */, MCK_VecListTwoDByteIndexed, 4 /* 2 */ },
  { Feature_HasNEON, 1586 /* vld2 */, MCK_VecListTwoDByteIndexed, 4 /* 2 */ },
  { Feature_HasNEON, 1591 /* vld3 */, MCK_VecListThreeDAllLanes, 4 /* 2 */ },
  { Feature_HasNEON, 1591 /* vld3 */, MCK_VecListThreeD, 4 /* 2 */ },
  { Feature_HasNEON, 1591 /* vld3 */, MCK_VecListThreeDHWordIndexed, 4 /* 2 */ },
  { Feature_HasNEON, 1591 /* vld3 */, MCK_VecListThreeQAllLanes, 4 /* 2 */ },
  { Feature_HasNEON, 1591 /* vld3 */, MCK_VecListThreeQ, 4 /* 2 */ },
  { Feature_HasNEON, 1591 /* vld3 */, MCK_VecListThreeQHWordIndexed, 4 /* 2 */ },
  { Feature_HasNEON, 1591 /* vld3 */, MCK_VecListThreeDAllLanes, 4 /* 2 */ },
  { Feature_HasNEON, 1591 /* vld3 */, MCK_VecListThreeD, 4 /* 2 */ },
  { Feature_HasNEON, 1591 /* vld3 */, MCK_VecListThreeDWordIndexed, 4 /* 2 */ },
  { Feature_HasNEON, 1591 /* vld3 */, MCK_VecListThreeQAllLanes, 4 /* 2 */ },
  { Feature_HasNEON, 1591 /* vld3 */, MCK_VecListThreeQ, 4 /* 2 */ },
  { Feature_HasNEON, 1591 /* vld3 */, MCK_VecListThreeQWordIndexed, 4 /* 2 */ },
  { Feature_HasNEON, 1591 /* vld3 */, MCK_VecListThreeDAllLanes, 4 /* 2 */ },
  { Feature_HasNEON, 1591 /* vld3 */, MCK_VecListThreeD, 4 /* 2 */ },
  { Feature_HasNEON, 1591 /* vld3 */, MCK_VecListThreeDByteIndexed, 4 /* 2 */ },
  { Feature_HasNEON, 1591 /* vld3 */, MCK_VecListThreeQAllLanes, 4 /* 2 */ },
  { Feature_HasNEON, 1591 /* vld3 */, MCK_VecListThreeQ, 4 /* 2 */ },
  { Feature_HasNEON, 1591 /* vld3 */, MCK_VecListThreeDAllLanes, 4 /* 2 */ },
  { Feature_HasNEON, 1591 /* vld3 */, MCK_VecListThreeDAllLanes, 4 /* 2 */ },
  { Feature_HasNEON, 1591 /* vld3 */, MCK_VecListThreeD, 4 /* 2 */ },
  { Feature_HasNEON, 1591 /* vld3 */, MCK_VecListThreeD, 4 /* 2 */ },
  { Feature_HasNEON, 1591 /* vld3 */, MCK_VecListThreeDHWordIndexed, 4 /* 2 */ },
  { Feature_HasNEON, 1591 /* vld3 */, MCK_VecListThreeDHWordIndexed, 4 /* 2 */ },
  { Feature_HasNEON, 1591 /* vld3 */, MCK_VecListThreeQAllLanes, 4 /* 2 */ },
  { Feature_HasNEON, 1591 /* vld3 */, MCK_VecListThreeQAllLanes, 4 /* 2 */ },
  { Feature_HasNEON, 1591 /* vld3 */, MCK_VecListThreeQ, 4 /* 2 */ },
  { Feature_HasNEON, 1591 /* vld3 */, MCK_VecListThreeQ, 4 /* 2 */ },
  { Feature_HasNEON, 1591 /* vld3 */, MCK_VecListThreeQHWordIndexed, 4 /* 2 */ },
  { Feature_HasNEON, 1591 /* vld3 */, MCK_VecListThreeQHWordIndexed, 4 /* 2 */ },
  { Feature_HasNEON, 1591 /* vld3 */, MCK_VecListThreeDAllLanes, 4 /* 2 */ },
  { Feature_HasNEON, 1591 /* vld3 */, MCK_VecListThreeDAllLanes, 4 /* 2 */ },
  { Feature_HasNEON, 1591 /* vld3 */, MCK_VecListThreeD, 4 /* 2 */ },
  { Feature_HasNEON, 1591 /* vld3 */, MCK_VecListThreeD, 4 /* 2 */ },
  { Feature_HasNEON, 1591 /* vld3 */, MCK_VecListThreeDWordIndexed, 4 /* 2 */ },
  { Feature_HasNEON, 1591 /* vld3 */, MCK_VecListThreeDWordIndexed, 4 /* 2 */ },
  { Feature_HasNEON, 1591 /* vld3 */, MCK_VecListThreeQAllLanes, 4 /* 2 */ },
  { Feature_HasNEON, 1591 /* vld3 */, MCK_VecListThreeQAllLanes, 4 /* 2 */ },
  { Feature_HasNEON, 1591 /* vld3 */, MCK_VecListThreeQ, 4 /* 2 */ },
  { Feature_HasNEON, 1591 /* vld3 */, MCK_VecListThreeQ, 4 /* 2 */ },
  { Feature_HasNEON, 1591 /* vld3 */, MCK_VecListThreeQWordIndexed, 4 /* 2 */ },
  { Feature_HasNEON, 1591 /* vld3 */, MCK_VecListThreeQWordIndexed, 4 /* 2 */ },
  { Feature_HasNEON, 1591 /* vld3 */, MCK_VecListThreeDAllLanes, 4 /* 2 */ },
  { Feature_HasNEON, 1591 /* vld3 */, MCK_VecListThreeDAllLanes, 4 /* 2 */ },
  { Feature_HasNEON, 1591 /* vld3 */, MCK_VecListThreeD, 4 /* 2 */ },
  { Feature_HasNEON, 1591 /* vld3 */, MCK_VecListThreeD, 4 /* 2 */ },
  { Feature_HasNEON, 1591 /* vld3 */, MCK_VecListThreeDByteIndexed, 4 /* 2 */ },
  { Feature_HasNEON, 1591 /* vld3 */, MCK_VecListThreeDByteIndexed, 4 /* 2 */ },
  { Feature_HasNEON, 1591 /* vld3 */, MCK_VecListThreeQAllLanes, 4 /* 2 */ },
  { Feature_HasNEON, 1591 /* vld3 */, MCK_VecListThreeQAllLanes, 4 /* 2 */ },
  { Feature_HasNEON, 1591 /* vld3 */, MCK_VecListThreeQ, 4 /* 2 */ },
  { Feature_HasNEON, 1591 /* vld3 */, MCK_VecListThreeQ, 4 /* 2 */ },
  { Feature_HasNEON, 1596 /* vld4 */, MCK_VecListFourDAllLanes, 4 /* 2 */ },
  { Feature_HasNEON, 1596 /* vld4 */, MCK_VecListFourD, 4 /* 2 */ },
  { Feature_HasNEON, 1596 /* vld4 */, MCK_VecListFourDHWordIndexed, 4 /* 2 */ },
  { Feature_HasNEON, 1596 /* vld4 */, MCK_VecListFourQAllLanes, 4 /* 2 */ },
  { Feature_HasNEON, 1596 /* vld4 */, MCK_VecListFourQ, 4 /* 2 */ },
  { Feature_HasNEON, 1596 /* vld4 */, MCK_VecListFourQHWordIndexed, 4 /* 2 */ },
  { Feature_HasNEON, 1596 /* vld4 */, MCK_VecListFourDAllLanes, 4 /* 2 */ },
  { Feature_HasNEON, 1596 /* vld4 */, MCK_VecListFourD, 4 /* 2 */ },
  { Feature_HasNEON, 1596 /* vld4 */, MCK_VecListFourDWordIndexed, 4 /* 2 */ },
  { Feature_HasNEON, 1596 /* vld4 */, MCK_VecListFourQAllLanes, 4 /* 2 */ },
  { Feature_HasNEON, 1596 /* vld4 */, MCK_VecListFourQ, 4 /* 2 */ },
  { Feature_HasNEON, 1596 /* vld4 */, MCK_VecListFourQWordIndexed, 4 /* 2 */ },
  { Feature_HasNEON, 1596 /* vld4 */, MCK_VecListFourDAllLanes, 4 /* 2 */ },
  { Feature_HasNEON, 1596 /* vld4 */, MCK_VecListFourD, 4 /* 2 */ },
  { Feature_HasNEON, 1596 /* vld4 */, MCK_VecListFourDByteIndexed, 4 /* 2 */ },
  { Feature_HasNEON, 1596 /* vld4 */, MCK_VecListFourQAllLanes, 4 /* 2 */ },
  { Feature_HasNEON, 1596 /* vld4 */, MCK_VecListFourQ, 4 /* 2 */ },
  { Feature_HasNEON, 1596 /* vld4 */, MCK_VecListFourDAllLanes, 4 /* 2 */ },
  { Feature_HasNEON, 1596 /* vld4 */, MCK_VecListFourDAllLanes, 4 /* 2 */ },
  { Feature_HasNEON, 1596 /* vld4 */, MCK_VecListFourD, 4 /* 2 */ },
  { Feature_HasNEON, 1596 /* vld4 */, MCK_VecListFourD, 4 /* 2 */ },
  { Feature_HasNEON, 1596 /* vld4 */, MCK_VecListFourDHWordIndexed, 4 /* 2 */ },
  { Feature_HasNEON, 1596 /* vld4 */, MCK_VecListFourDHWordIndexed, 4 /* 2 */ },
  { Feature_HasNEON, 1596 /* vld4 */, MCK_VecListFourQAllLanes, 4 /* 2 */ },
  { Feature_HasNEON, 1596 /* vld4 */, MCK_VecListFourQAllLanes, 4 /* 2 */ },
  { Feature_HasNEON, 1596 /* vld4 */, MCK_VecListFourQ, 4 /* 2 */ },
  { Feature_HasNEON, 1596 /* vld4 */, MCK_VecListFourQ, 4 /* 2 */ },
  { Feature_HasNEON, 1596 /* vld4 */, MCK_VecListFourQHWordIndexed, 4 /* 2 */ },
  { Feature_HasNEON, 1596 /* vld4 */, MCK_VecListFourQHWordIndexed, 4 /* 2 */ },
  { Feature_HasNEON, 1596 /* vld4 */, MCK_VecListFourDAllLanes, 4 /* 2 */ },
  { Feature_HasNEON, 1596 /* vld4 */, MCK_VecListFourDAllLanes, 4 /* 2 */ },
  { Feature_HasNEON, 1596 /* vld4 */, MCK_VecListFourD, 4 /* 2 */ },
  { Feature_HasNEON, 1596 /* vld4 */, MCK_VecListFourD, 4 /* 2 */ },
  { Feature_HasNEON, 1596 /* vld4 */, MCK_VecListFourDWordIndexed, 4 /* 2 */ },
  { Feature_HasNEON, 1596 /* vld4 */, MCK_VecListFourDWordIndexed, 4 /* 2 */ },
  { Feature_HasNEON, 1596 /* vld4 */, MCK_VecListFourQAllLanes, 4 /* 2 */ },
  { Feature_HasNEON, 1596 /* vld4 */, MCK_VecListFourQAllLanes, 4 /* 2 */ },
  { Feature_HasNEON, 1596 /* vld4 */, MCK_VecListFourQ, 4 /* 2 */ },
  { Feature_HasNEON, 1596 /* vld4 */, MCK_VecListFourQ, 4 /* 2 */ },
  { Feature_HasNEON, 1596 /* vld4 */, MCK_VecListFourQWordIndexed, 4 /* 2 */ },
  { Feature_HasNEON, 1596 /* vld4 */, MCK_VecListFourQWordIndexed, 4 /* 2 */ },
  { Feature_HasNEON, 1596 /* vld4 */, MCK_VecListFourDAllLanes, 4 /* 2 */ },
  { Feature_HasNEON, 1596 /* vld4 */, MCK_VecListFourDAllLanes, 4 /* 2 */ },
  { Feature_HasNEON, 1596 /* vld4 */, MCK_VecListFourD, 4 /* 2 */ },
  { Feature_HasNEON, 1596 /* vld4 */, MCK_VecListFourD, 4 /* 2 */ },
  { Feature_HasNEON, 1596 /* vld4 */, MCK_VecListFourDByteIndexed, 4 /* 2 */ },
  { Feature_HasNEON, 1596 /* vld4 */, MCK_VecListFourDByteIndexed, 4 /* 2 */ },
  { Feature_HasNEON, 1596 /* vld4 */, MCK_VecListFourQAllLanes, 4 /* 2 */ },
  { Feature_HasNEON, 1596 /* vld4 */, MCK_VecListFourQAllLanes, 4 /* 2 */ },
  { Feature_HasNEON, 1596 /* vld4 */, MCK_VecListFourQ, 4 /* 2 */ },
  { Feature_HasNEON, 1596 /* vld4 */, MCK_VecListFourQ, 4 /* 2 */ },
  { Feature_HasVFP3, 1652 /* vmov */, MCK_FPImm, 8 /* 3 */ },
  { Feature_HasNEON, 1652 /* vmov */, MCK_FPImm, 8 /* 3 */ },
  { Feature_HasNEON, 1652 /* vmov */, MCK_FPImm, 8 /* 3 */ },
  { Feature_HasVFP3, 1652 /* vmov */, MCK_FPImm, 8 /* 3 */ },
  { Feature_HasNEON, 2045 /* vst1 */, MCK_VecListDPair, 4 /* 2 */ },
  { Feature_HasNEON, 2045 /* vst1 */, MCK_VecListFourD, 4 /* 2 */ },
  { Feature_HasNEON, 2045 /* vst1 */, MCK_VecListOneD, 4 /* 2 */ },
  { Feature_HasNEON, 2045 /* vst1 */, MCK_VecListOneDHWordIndexed, 4 /* 2 */ },
  { Feature_HasNEON, 2045 /* vst1 */, MCK_VecListThreeD, 4 /* 2 */ },
  { Feature_HasNEON, 2045 /* vst1 */, MCK_VecListDPair, 4 /* 2 */ },
  { Feature_HasNEON, 2045 /* vst1 */, MCK_VecListFourD, 4 /* 2 */ },
  { Feature_HasNEON, 2045 /* vst1 */, MCK_VecListOneD, 4 /* 2 */ },
  { Feature_HasNEON, 2045 /* vst1 */, MCK_VecListOneDWordIndexed, 4 /* 2 */ },
  { Feature_HasNEON, 2045 /* vst1 */, MCK_VecListThreeD, 4 /* 2 */ },
  { Feature_HasNEON, 2045 /* vst1 */, MCK_VecListDPair, 4 /* 2 */ },
  { Feature_HasNEON, 2045 /* vst1 */, MCK_VecListFourD, 4 /* 2 */ },
  { Feature_HasNEON, 2045 /* vst1 */, MCK_VecListOneD, 4 /* 2 */ },
  { Feature_HasNEON, 2045 /* vst1 */, MCK_VecListThreeD, 4 /* 2 */ },
  { Feature_HasNEON, 2045 /* vst1 */, MCK_VecListDPair, 4 /* 2 */ },
  { Feature_HasNEON, 2045 /* vst1 */, MCK_VecListFourD, 4 /* 2 */ },
  { Feature_HasNEON, 2045 /* vst1 */, MCK_VecListOneD, 4 /* 2 */ },
  { Feature_HasNEON, 2045 /* vst1 */, MCK_VecListOneDByteIndexed, 4 /* 2 */ },
  { Feature_HasNEON, 2045 /* vst1 */, MCK_VecListThreeD, 4 /* 2 */ },
  { Feature_HasNEON, 2045 /* vst1 */, MCK_VecListDPair, 4 /* 2 */ },
  { Feature_HasNEON, 2045 /* vst1 */, MCK_VecListDPair, 4 /* 2 */ },
  { Feature_HasNEON, 2045 /* vst1 */, MCK_VecListFourD, 4 /* 2 */ },
  { Feature_HasNEON, 2045 /* vst1 */, MCK_VecListFourD, 4 /* 2 */ },
  { Feature_HasNEON, 2045 /* vst1 */, MCK_VecListOneD, 4 /* 2 */ },
  { Feature_HasNEON, 2045 /* vst1 */, MCK_VecListOneD, 4 /* 2 */ },
  { Feature_HasNEON, 2045 /* vst1 */, MCK_VecListOneDHWordIndexed, 4 /* 2 */ },
  { Feature_HasNEON, 2045 /* vst1 */, MCK_VecListOneDHWordIndexed, 4 /* 2 */ },
  { Feature_HasNEON, 2045 /* vst1 */, MCK_VecListThreeD, 4 /* 2 */ },
  { Feature_HasNEON, 2045 /* vst1 */, MCK_VecListThreeD, 4 /* 2 */ },
  { Feature_HasNEON, 2045 /* vst1 */, MCK_VecListDPair, 4 /* 2 */ },
  { Feature_HasNEON, 2045 /* vst1 */, MCK_VecListDPair, 4 /* 2 */ },
  { Feature_HasNEON, 2045 /* vst1 */, MCK_VecListFourD, 4 /* 2 */ },
  { Feature_HasNEON, 2045 /* vst1 */, MCK_VecListFourD, 4 /* 2 */ },
  { Feature_HasNEON, 2045 /* vst1 */, MCK_VecListOneD, 4 /* 2 */ },
  { Feature_HasNEON, 2045 /* vst1 */, MCK_VecListOneD, 4 /* 2 */ },
  { Feature_HasNEON, 2045 /* vst1 */, MCK_VecListOneDWordIndexed, 4 /* 2 */ },
  { Feature_HasNEON, 2045 /* vst1 */, MCK_VecListOneDWordIndexed, 4 /* 2 */ },
  { Feature_HasNEON, 2045 /* vst1 */, MCK_VecListThreeD, 4 /* 2 */ },
  { Feature_HasNEON, 2045 /* vst1 */, MCK_VecListThreeD, 4 /* 2 */ },
  { Feature_HasNEON, 2045 /* vst1 */, MCK_VecListDPair, 4 /* 2 */ },
  { Feature_HasNEON, 2045 /* vst1 */, MCK_VecListDPair, 4 /* 2 */ },
  { Feature_HasNEON, 2045 /* vst1 */, MCK_VecListFourD, 4 /* 2 */ },
  { Feature_HasNEON, 2045 /* vst1 */, MCK_VecListFourD, 4 /* 2 */ },
  { Feature_HasNEON, 2045 /* vst1 */, MCK_VecListOneD, 4 /* 2 */ },
  { Feature_HasNEON, 2045 /* vst1 */, MCK_VecListOneD, 4 /* 2 */ },
  { Feature_HasNEON, 2045 /* vst1 */, MCK_VecListThreeD, 4 /* 2 */ },
  { Feature_HasNEON, 2045 /* vst1 */, MCK_VecListThreeD, 4 /* 2 */ },
  { Feature_HasNEON, 2045 /* vst1 */, MCK_VecListDPair, 4 /* 2 */ },
  { Feature_HasNEON, 2045 /* vst1 */, MCK_VecListDPair, 4 /* 2 */ },
  { Feature_HasNEON, 2045 /* vst1 */, MCK_VecListFourD, 4 /* 2 */ },
  { Feature_HasNEON, 2045 /* vst1 */, MCK_VecListFourD, 4 /* 2 */ },
  { Feature_HasNEON, 2045 /* vst1 */, MCK_VecListOneD, 4 /* 2 */ },
  { Feature_HasNEON, 2045 /* vst1 */, MCK_VecListOneD, 4 /* 2 */ },
  { Feature_HasNEON, 2045 /* vst1 */, MCK_VecListOneDByteIndexed, 4 /* 2 */ },
  { Feature_HasNEON, 2045 /* vst1 */, MCK_VecListOneDByteIndexed, 4 /* 2 */ },
  { Feature_HasNEON, 2045 /* vst1 */, MCK_VecListThreeD, 4 /* 2 */ },
  { Feature_HasNEON, 2045 /* vst1 */, MCK_VecListThreeD, 4 /* 2 */ },
  { Feature_HasNEON, 2050 /* vst2 */, MCK_VecListDPair, 4 /* 2 */ },
  { Feature_HasNEON, 2050 /* vst2 */, MCK_VecListDPairSpaced, 4 /* 2 */ },
  { Feature_HasNEON, 2050 /* vst2 */, MCK_VecListFourD, 4 /* 2 */ },
  { Feature_HasNEON, 2050 /* vst2 */, MCK_VecListTwoDHWordIndexed, 4 /* 2 */ },
  { Feature_HasNEON, 2050 /* vst2 */, MCK_VecListTwoQHWordIndexed, 4 /* 2 */ },
  { Feature_HasNEON, 2050 /* vst2 */, MCK_VecListDPair, 4 /* 2 */ },
  { Feature_HasNEON, 2050 /* vst2 */, MCK_VecListDPairSpaced, 4 /* 2 */ },
  { Feature_HasNEON, 2050 /* vst2 */, MCK_VecListFourD, 4 /* 2 */ },
  { Feature_HasNEON, 2050 /* vst2 */, MCK_VecListTwoDWordIndexed, 4 /* 2 */ },
  { Feature_HasNEON, 2050 /* vst2 */, MCK_VecListTwoQWordIndexed, 4 /* 2 */ },
  { Feature_HasNEON, 2050 /* vst2 */, MCK_VecListDPair, 4 /* 2 */ },
  { Feature_HasNEON, 2050 /* vst2 */, MCK_VecListDPairSpaced, 4 /* 2 */ },
  { Feature_HasNEON, 2050 /* vst2 */, MCK_VecListFourD, 4 /* 2 */ },
  { Feature_HasNEON, 2050 /* vst2 */, MCK_VecListTwoDByteIndexed, 4 /* 2 */ },
  { Feature_HasNEON, 2050 /* vst2 */, MCK_VecListDPair, 4 /* 2 */ },
  { Feature_HasNEON, 2050 /* vst2 */, MCK_VecListDPair, 4 /* 2 */ },
  { Feature_HasNEON, 2050 /* vst2 */, MCK_VecListDPairSpaced, 4 /* 2 */ },
  { Feature_HasNEON, 2050 /* vst2 */, MCK_VecListDPairSpaced, 4 /* 2 */ },
  { Feature_HasNEON, 2050 /* vst2 */, MCK_VecListFourD, 4 /* 2 */ },
  { Feature_HasNEON, 2050 /* vst2 */, MCK_VecListFourD, 4 /* 2 */ },
  { Feature_HasNEON, 2050 /* vst2 */, MCK_VecListTwoDHWordIndexed, 4 /* 2 */ },
  { Feature_HasNEON, 2050 /* vst2 */, MCK_VecListTwoDHWordIndexed, 4 /* 2 */ },
  { Feature_HasNEON, 2050 /* vst2 */, MCK_VecListTwoQHWordIndexed, 4 /* 2 */ },
  { Feature_HasNEON, 2050 /* vst2 */, MCK_VecListTwoQHWordIndexed, 4 /* 2 */ },
  { Feature_HasNEON, 2050 /* vst2 */, MCK_VecListDPair, 4 /* 2 */ },
  { Feature_HasNEON, 2050 /* vst2 */, MCK_VecListDPair, 4 /* 2 */ },
  { Feature_HasNEON, 2050 /* vst2 */, MCK_VecListDPairSpaced, 4 /* 2 */ },
  { Feature_HasNEON, 2050 /* vst2 */, MCK_VecListDPairSpaced, 4 /* 2 */ },
  { Feature_HasNEON, 2050 /* vst2 */, MCK_VecListFourD, 4 /* 2 */ },
  { Feature_HasNEON, 2050 /* vst2 */, MCK_VecListFourD, 4 /* 2 */ },
  { Feature_HasNEON, 2050 /* vst2 */, MCK_VecListTwoDWordIndexed, 4 /* 2 */ },
  { Feature_HasNEON, 2050 /* vst2 */, MCK_VecListTwoDWordIndexed, 4 /* 2 */ },
  { Feature_HasNEON, 2050 /* vst2 */, MCK_VecListTwoQWordIndexed, 4 /* 2 */ },
  { Feature_HasNEON, 2050 /* vst2 */, MCK_VecListTwoQWordIndexed, 4 /* 2 */ },
  { Feature_HasNEON, 2050 /* vst2 */, MCK_VecListDPair, 4 /* 2 */ },
  { Feature_HasNEON, 2050 /* vst2 */, MCK_VecListDPair, 4 /* 2 */ },
  { Feature_HasNEON, 2050 /* vst2 */, MCK_VecListDPairSpaced, 4 /* 2 */ },
  { Feature_HasNEON, 2050 /* vst2 */, MCK_VecListDPairSpaced, 4 /* 2 */ },
  { Feature_HasNEON, 2050 /* vst2 */, MCK_VecListFourD, 4 /* 2 */ },
  { Feature_HasNEON, 2050 /* vst2 */, MCK_VecListFourD, 4 /* 2 */ },
  { Feature_HasNEON, 2050 /* vst2 */, MCK_VecListTwoDByteIndexed, 4 /* 2 */ },
  { Feature_HasNEON, 2050 /* vst2 */, MCK_VecListTwoDByteIndexed, 4 /* 2 */ },
  { Feature_HasNEON, 2055 /* vst3 */, MCK_VecListThreeD, 4 /* 2 */ },
  { Feature_HasNEON, 2055 /* vst3 */, MCK_VecListThreeDHWordIndexed, 4 /* 2 */ },
  { Feature_HasNEON, 2055 /* vst3 */, MCK_VecListThreeQ, 4 /* 2 */ },
  { Feature_HasNEON, 2055 /* vst3 */, MCK_VecListThreeQHWordIndexed, 4 /* 2 */ },
  { Feature_HasNEON, 2055 /* vst3 */, MCK_VecListThreeD, 4 /* 2 */ },
  { Feature_HasNEON, 2055 /* vst3 */, MCK_VecListThreeDWordIndexed, 4 /* 2 */ },
  { Feature_HasNEON, 2055 /* vst3 */, MCK_VecListThreeQ, 4 /* 2 */ },
  { Feature_HasNEON, 2055 /* vst3 */, MCK_VecListThreeQWordIndexed, 4 /* 2 */ },
  { Feature_HasNEON, 2055 /* vst3 */, MCK_VecListThreeD, 4 /* 2 */ },
  { Feature_HasNEON, 2055 /* vst3 */, MCK_VecListThreeDByteIndexed, 4 /* 2 */ },
  { Feature_HasNEON, 2055 /* vst3 */, MCK_VecListThreeQ, 4 /* 2 */ },
  { Feature_HasNEON, 2055 /* vst3 */, MCK_VecListThreeD, 4 /* 2 */ },
  { Feature_HasNEON, 2055 /* vst3 */, MCK_VecListThreeD, 4 /* 2 */ },
  { Feature_HasNEON, 2055 /* vst3 */, MCK_VecListThreeDHWordIndexed, 4 /* 2 */ },
  { Feature_HasNEON, 2055 /* vst3 */, MCK_VecListThreeDHWordIndexed, 4 /* 2 */ },
  { Feature_HasNEON, 2055 /* vst3 */, MCK_VecListThreeQ, 4 /* 2 */ },
  { Feature_HasNEON, 2055 /* vst3 */, MCK_VecListThreeQ, 4 /* 2 */ },
  { Feature_HasNEON, 2055 /* vst3 */, MCK_VecListThreeQHWordIndexed, 4 /* 2 */ },
  { Feature_HasNEON, 2055 /* vst3 */, MCK_VecListThreeQHWordIndexed, 4 /* 2 */ },
  { Feature_HasNEON, 2055 /* vst3 */, MCK_VecListThreeD, 4 /* 2 */ },
  { Feature_HasNEON, 2055 /* vst3 */, MCK_VecListThreeD, 4 /* 2 */ },
  { Feature_HasNEON, 2055 /* vst3 */, MCK_VecListThreeDWordIndexed, 4 /* 2 */ },
  { Feature_HasNEON, 2055 /* vst3 */, MCK_VecListThreeDWordIndexed, 4 /* 2 */ },
  { Feature_HasNEON, 2055 /* vst3 */, MCK_VecListThreeQ, 4 /* 2 */ },
  { Feature_HasNEON, 2055 /* vst3 */, MCK_VecListThreeQ, 4 /* 2 */ },
  { Feature_HasNEON, 2055 /* vst3 */, MCK_VecListThreeQWordIndexed, 4 /* 2 */ },
  { Feature_HasNEON, 2055 /* vst3 */, MCK_VecListThreeQWordIndexed, 4 /* 2 */ },
  { Feature_HasNEON, 2055 /* vst3 */, MCK_VecListThreeD, 4 /* 2 */ },
  { Feature_HasNEON, 2055 /* vst3 */, MCK_VecListThreeD, 4 /* 2 */ },
  { Feature_HasNEON, 2055 /* vst3 */, MCK_VecListThreeDByteIndexed, 4 /* 2 */ },
  { Feature_HasNEON, 2055 /* vst3 */, MCK_VecListThreeDByteIndexed, 4 /* 2 */ },
  { Feature_HasNEON, 2055 /* vst3 */, MCK_VecListThreeQ, 4 /* 2 */ },
  { Feature_HasNEON, 2055 /* vst3 */, MCK_VecListThreeQ, 4 /* 2 */ },
  { Feature_HasNEON, 2060 /* vst4 */, MCK_VecListFourD, 4 /* 2 */ },
  { Feature_HasNEON, 2060 /* vst4 */, MCK_VecListFourDHWordIndexed, 4 /* 2 */ },
  { Feature_HasNEON, 2060 /* vst4 */, MCK_VecListFourQ, 4 /* 2 */ },
  { Feature_HasNEON, 2060 /* vst4 */, MCK_VecListFourQHWordIndexed, 4 /* 2 */ },
  { Feature_HasNEON, 2060 /* vst4 */, MCK_VecListFourD, 4 /* 2 */ },
  { Feature_HasNEON, 2060 /* vst4 */, MCK_VecListFourDWordIndexed, 4 /* 2 */ },
  { Feature_HasNEON, 2060 /* vst4 */, MCK_VecListFourQ, 4 /* 2 */ },
  { Feature_HasNEON, 2060 /* vst4 */, MCK_VecListFourQWordIndexed, 4 /* 2 */ },
  { Feature_HasNEON, 2060 /* vst4 */, MCK_VecListFourD, 4 /* 2 */ },
  { Feature_HasNEON, 2060 /* vst4 */, MCK_VecListFourDByteIndexed, 4 /* 2 */ },
  { Feature_HasNEON, 2060 /* vst4 */, MCK_VecListFourQ, 4 /* 2 */ },
  { Feature_HasNEON, 2060 /* vst4 */, MCK_VecListFourD, 4 /* 2 */ },
  { Feature_HasNEON, 2060 /* vst4 */, MCK_VecListFourD, 4 /* 2 */ },
  { Feature_HasNEON, 2060 /* vst4 */, MCK_VecListFourDHWordIndexed, 4 /* 2 */ },
  { Feature_HasNEON, 2060 /* vst4 */, MCK_VecListFourDHWordIndexed, 4 /* 2 */ },
  { Feature_HasNEON, 2060 /* vst4 */, MCK_VecListFourQ, 4 /* 2 */ },
  { Feature_HasNEON, 2060 /* vst4 */, MCK_VecListFourQ, 4 /* 2 */ },
  { Feature_HasNEON, 2060 /* vst4 */, MCK_VecListFourQHWordIndexed, 4 /* 2 */ },
  { Feature_HasNEON, 2060 /* vst4 */, MCK_VecListFourQHWordIndexed, 4 /* 2 */ },
  { Feature_HasNEON, 2060 /* vst4 */, MCK_VecListFourD, 4 /* 2 */ },
  { Feature_HasNEON, 2060 /* vst4 */, MCK_VecListFourD, 4 /* 2 */ },
  { Feature_HasNEON, 2060 /* vst4 */, MCK_VecListFourDWordIndexed, 4 /* 2 */ },
  { Feature_HasNEON, 2060 /* vst4 */, MCK_VecListFourDWordIndexed, 4 /* 2 */ },
  { Feature_HasNEON, 2060 /* vst4 */, MCK_VecListFourQ, 4 /* 2 */ },
  { Feature_HasNEON, 2060 /* vst4 */, MCK_VecListFourQ, 4 /* 2 */ },
  { Feature_HasNEON, 2060 /* vst4 */, MCK_VecListFourQWordIndexed, 4 /* 2 */ },
  { Feature_HasNEON, 2060 /* vst4 */, MCK_VecListFourQWordIndexed, 4 /* 2 */ },
  { Feature_HasNEON, 2060 /* vst4 */, MCK_VecListFourD, 4 /* 2 */ },
  { Feature_HasNEON, 2060 /* vst4 */, MCK_VecListFourD, 4 /* 2 */ },
  { Feature_HasNEON, 2060 /* vst4 */, MCK_VecListFourDByteIndexed, 4 /* 2 */ },
  { Feature_HasNEON, 2060 /* vst4 */, MCK_VecListFourDByteIndexed, 4 /* 2 */ },
  { Feature_HasNEON, 2060 /* vst4 */, MCK_VecListFourQ, 4 /* 2 */ },
  { Feature_HasNEON, 2060 /* vst4 */, MCK_VecListFourQ, 4 /* 2 */ },
  { Feature_HasNEON, 2113 /* vtbl */, MCK_VecListDPair, 8 /* 3 */ },
  { Feature_HasNEON, 2113 /* vtbl */, MCK_VecListFourD, 8 /* 3 */ },
  { Feature_HasNEON, 2113 /* vtbl */, MCK_VecListOneD, 8 /* 3 */ },
  { Feature_HasNEON, 2113 /* vtbl */, MCK_VecListThreeD, 8 /* 3 */ },
  { Feature_HasNEON, 2118 /* vtbx */, MCK_VecListDPair, 8 /* 3 */ },
  { Feature_HasNEON, 2118 /* vtbx */, MCK_VecListFourD, 8 /* 3 */ },
  { Feature_HasNEON, 2118 /* vtbx */, MCK_VecListOneD, 8 /* 3 */ },
  { Feature_HasNEON, 2118 /* vtbx */, MCK_VecListThreeD, 8 /* 3 */ },
};

ARMAsmParser::OperandMatchResultTy ARMAsmParser::
tryCustomParseOperand(SmallVectorImpl<MCParsedAsmOperand*> &Operands,
                      unsigned MCK) {

  switch(MCK) {
  case MCK_AM3Offset:
    return parseAM3Offset(Operands);
  case MCK_Bitfield:
    return parseBitfield(Operands);
  case MCK_CoprocNum:
    return parseCoprocNumOperand(Operands);
  case MCK_CoprocOption:
    return parseCoprocOptionOperand(Operands);
  case MCK_CoprocReg:
    return parseCoprocRegOperand(Operands);
  case MCK_FPImm:
    return parseFPImm(Operands);
  case MCK_MSRMask:
    return parseMSRMaskOperand(Operands);
  case MCK_MemBarrierOpt:
    return parseMemBarrierOptOperand(Operands);
  case MCK_PKHASRImm:
    return parsePKHASRImm(Operands);
  case MCK_PKHLSLImm:
    return parsePKHLSLImm(Operands);
  case MCK_PostIdxReg:
    return parsePostIdxReg(Operands);
  case MCK_PostIdxRegShifted:
    return parsePostIdxReg(Operands);
  case MCK_ProcIFlags:
    return parseProcIFlagsOperand(Operands);
  case MCK_RotImm:
    return parseRotImm(Operands);
  case MCK_SetEndImm:
    return parseSetEndImm(Operands);
  case MCK_ShifterImm:
    return parseShifterImm(Operands);
  case MCK_VecListDPairAllLanes:
    return parseVectorList(Operands);
  case MCK_VecListDPair:
    return parseVectorList(Operands);
  case MCK_VecListDPairSpacedAllLanes:
    return parseVectorList(Operands);
  case MCK_VecListDPairSpaced:
    return parseVectorList(Operands);
  case MCK_VecListFourDAllLanes:
    return parseVectorList(Operands);
  case MCK_VecListFourD:
    return parseVectorList(Operands);
  case MCK_VecListFourDByteIndexed:
    return parseVectorList(Operands);
  case MCK_VecListFourDHWordIndexed:
    return parseVectorList(Operands);
  case MCK_VecListFourDWordIndexed:
    return parseVectorList(Operands);
  case MCK_VecListFourQAllLanes:
    return parseVectorList(Operands);
  case MCK_VecListFourQ:
    return parseVectorList(Operands);
  case MCK_VecListFourQHWordIndexed:
    return parseVectorList(Operands);
  case MCK_VecListFourQWordIndexed:
    return parseVectorList(Operands);
  case MCK_VecListOneDAllLanes:
    return parseVectorList(Operands);
  case MCK_VecListOneD:
    return parseVectorList(Operands);
  case MCK_VecListOneDByteIndexed:
    return parseVectorList(Operands);
  case MCK_VecListOneDHWordIndexed:
    return parseVectorList(Operands);
  case MCK_VecListOneDWordIndexed:
    return parseVectorList(Operands);
  case MCK_VecListThreeDAllLanes:
    return parseVectorList(Operands);
  case MCK_VecListThreeD:
    return parseVectorList(Operands);
  case MCK_VecListThreeDByteIndexed:
    return parseVectorList(Operands);
  case MCK_VecListThreeDHWordIndexed:
    return parseVectorList(Operands);
  case MCK_VecListThreeDWordIndexed:
    return parseVectorList(Operands);
  case MCK_VecListThreeQAllLanes:
    return parseVectorList(Operands);
  case MCK_VecListThreeQ:
    return parseVectorList(Operands);
  case MCK_VecListThreeQHWordIndexed:
    return parseVectorList(Operands);
  case MCK_VecListThreeQWordIndexed:
    return parseVectorList(Operands);
  case MCK_VecListTwoDByteIndexed:
    return parseVectorList(Operands);
  case MCK_VecListTwoDHWordIndexed:
    return parseVectorList(Operands);
  case MCK_VecListTwoDWordIndexed:
    return parseVectorList(Operands);
  case MCK_VecListTwoQHWordIndexed:
    return parseVectorList(Operands);
  case MCK_VecListTwoQWordIndexed:
    return parseVectorList(Operands);
  case MCK_ITCondCode:
    return parseITCondCode(Operands);
  default:
    return MatchOperand_NoMatch;
  }
  return MatchOperand_NoMatch;
}

ARMAsmParser::OperandMatchResultTy ARMAsmParser::
MatchOperandParserImpl(SmallVectorImpl<MCParsedAsmOperand*> &Operands,
                       StringRef Mnemonic) {
  // Get the current feature set.
  unsigned AvailableFeatures = getAvailableFeatures();

  // Get the next operand index.
  unsigned NextOpNum = Operands.size()-1;
  // Search the table.
  std::pair<const OperandMatchEntry*, const OperandMatchEntry*> MnemonicRange =
    std::equal_range(OperandMatchTable, OperandMatchTable+694, Mnemonic,
                     LessOpcodeOperand());

  if (MnemonicRange.first == MnemonicRange.second)
    return MatchOperand_NoMatch;

  for (const OperandMatchEntry *it = MnemonicRange.first,
       *ie = MnemonicRange.second; it != ie; ++it) {
    // equal_range guarantees that instruction mnemonic matches.
    assert(Mnemonic == it->getMnemonic());

    // check if the available features match
    if ((AvailableFeatures & it->RequiredFeatures) != it->RequiredFeatures) {
      continue;
    }

    // check if the operand in question has a custom parser.
    if (!(it->OperandMask & (1 << NextOpNum)))
      continue;

    // call custom parse method to handle the operand
    OperandMatchResultTy Result = tryCustomParseOperand(Operands, it->Class);
    if (Result != MatchOperand_NoMatch)
      return Result;
  }

  // Okay, we had no match.
  return MatchOperand_NoMatch;
}

#endif // GET_MATCHER_IMPLEMENTATION

