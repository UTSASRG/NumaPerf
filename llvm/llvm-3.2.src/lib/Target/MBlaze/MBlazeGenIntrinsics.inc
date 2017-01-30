/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Intrinsic Function Source Fragment                                         *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

// VisualStudio defines setjmp as _setjmp
#if defined(_MSC_VER) && defined(setjmp) && \
                         !defined(setjmp_undefined_for_msvc)
#  pragma push_macro("setjmp")
#  undef setjmp
#  define setjmp_undefined_for_msvc
#endif

// Enum values for Intrinsics.h
#ifdef GET_INTRINSIC_ENUM_VALUES
    mblaze_fsl_aget,                          // llvm.mblaze.fsl.aget
    mblaze_fsl_aput,                          // llvm.mblaze.fsl.aput
    mblaze_fsl_caget,                         // llvm.mblaze.fsl.caget
    mblaze_fsl_caput,                         // llvm.mblaze.fsl.caput
    mblaze_fsl_cget,                          // llvm.mblaze.fsl.cget
    mblaze_fsl_cput,                          // llvm.mblaze.fsl.cput
    mblaze_fsl_eaget,                         // llvm.mblaze.fsl.eaget
    mblaze_fsl_ecaget,                        // llvm.mblaze.fsl.ecaget
    mblaze_fsl_ecget,                         // llvm.mblaze.fsl.ecget
    mblaze_fsl_eget,                          // llvm.mblaze.fsl.eget
    mblaze_fsl_get,                           // llvm.mblaze.fsl.get
    mblaze_fsl_naget,                         // llvm.mblaze.fsl.naget
    mblaze_fsl_naput,                         // llvm.mblaze.fsl.naput
    mblaze_fsl_ncaget,                        // llvm.mblaze.fsl.ncaget
    mblaze_fsl_ncaput,                        // llvm.mblaze.fsl.ncaput
    mblaze_fsl_ncget,                         // llvm.mblaze.fsl.ncget
    mblaze_fsl_ncput,                         // llvm.mblaze.fsl.ncput
    mblaze_fsl_neaget,                        // llvm.mblaze.fsl.neaget
    mblaze_fsl_necaget,                       // llvm.mblaze.fsl.necaget
    mblaze_fsl_necget,                        // llvm.mblaze.fsl.necget
    mblaze_fsl_neget,                         // llvm.mblaze.fsl.neget
    mblaze_fsl_nget,                          // llvm.mblaze.fsl.nget
    mblaze_fsl_nput,                          // llvm.mblaze.fsl.nput
    mblaze_fsl_put,                           // llvm.mblaze.fsl.put
    mblaze_fsl_taget,                         // llvm.mblaze.fsl.taget
    mblaze_fsl_taput,                         // llvm.mblaze.fsl.taput
    mblaze_fsl_tcaget,                        // llvm.mblaze.fsl.tcaget
    mblaze_fsl_tcaput,                        // llvm.mblaze.fsl.tcaput
    mblaze_fsl_tcget,                         // llvm.mblaze.fsl.tcget
    mblaze_fsl_tcput,                         // llvm.mblaze.fsl.tcput
    mblaze_fsl_teaget,                        // llvm.mblaze.fsl.teaget
    mblaze_fsl_tecaget,                       // llvm.mblaze.fsl.tecaget
    mblaze_fsl_tecget,                        // llvm.mblaze.fsl.tecget
    mblaze_fsl_teget,                         // llvm.mblaze.fsl.teget
    mblaze_fsl_tget,                          // llvm.mblaze.fsl.tget
    mblaze_fsl_tnaget,                        // llvm.mblaze.fsl.tnaget
    mblaze_fsl_tnaput,                        // llvm.mblaze.fsl.tnaput
    mblaze_fsl_tncaget,                       // llvm.mblaze.fsl.tncaget
    mblaze_fsl_tncaput,                       // llvm.mblaze.fsl.tncaput
    mblaze_fsl_tncget,                        // llvm.mblaze.fsl.tncget
    mblaze_fsl_tncput,                        // llvm.mblaze.fsl.tncput
    mblaze_fsl_tneaget,                       // llvm.mblaze.fsl.tneaget
    mblaze_fsl_tnecaget,                      // llvm.mblaze.fsl.tnecaget
    mblaze_fsl_tnecget,                       // llvm.mblaze.fsl.tnecget
    mblaze_fsl_tneget,                        // llvm.mblaze.fsl.tneget
    mblaze_fsl_tnget,                         // llvm.mblaze.fsl.tnget
    mblaze_fsl_tnput,                         // llvm.mblaze.fsl.tnput
    mblaze_fsl_tput                           // llvm.mblaze.fsl.tput
#endif

// Intrinsic ID to name table
#ifdef GET_INTRINSIC_NAME_TABLE
  // Note that entry #0 is the invalid intrinsic!
  "llvm.mblaze.fsl.aget",
  "llvm.mblaze.fsl.aput",
  "llvm.mblaze.fsl.caget",
  "llvm.mblaze.fsl.caput",
  "llvm.mblaze.fsl.cget",
  "llvm.mblaze.fsl.cput",
  "llvm.mblaze.fsl.eaget",
  "llvm.mblaze.fsl.ecaget",
  "llvm.mblaze.fsl.ecget",
  "llvm.mblaze.fsl.eget",
  "llvm.mblaze.fsl.get",
  "llvm.mblaze.fsl.naget",
  "llvm.mblaze.fsl.naput",
  "llvm.mblaze.fsl.ncaget",
  "llvm.mblaze.fsl.ncaput",
  "llvm.mblaze.fsl.ncget",
  "llvm.mblaze.fsl.ncput",
  "llvm.mblaze.fsl.neaget",
  "llvm.mblaze.fsl.necaget",
  "llvm.mblaze.fsl.necget",
  "llvm.mblaze.fsl.neget",
  "llvm.mblaze.fsl.nget",
  "llvm.mblaze.fsl.nput",
  "llvm.mblaze.fsl.put",
  "llvm.mblaze.fsl.taget",
  "llvm.mblaze.fsl.taput",
  "llvm.mblaze.fsl.tcaget",
  "llvm.mblaze.fsl.tcaput",
  "llvm.mblaze.fsl.tcget",
  "llvm.mblaze.fsl.tcput",
  "llvm.mblaze.fsl.teaget",
  "llvm.mblaze.fsl.tecaget",
  "llvm.mblaze.fsl.tecget",
  "llvm.mblaze.fsl.teget",
  "llvm.mblaze.fsl.tget",
  "llvm.mblaze.fsl.tnaget",
  "llvm.mblaze.fsl.tnaput",
  "llvm.mblaze.fsl.tncaget",
  "llvm.mblaze.fsl.tncaput",
  "llvm.mblaze.fsl.tncget",
  "llvm.mblaze.fsl.tncput",
  "llvm.mblaze.fsl.tneaget",
  "llvm.mblaze.fsl.tnecaget",
  "llvm.mblaze.fsl.tnecget",
  "llvm.mblaze.fsl.tneget",
  "llvm.mblaze.fsl.tnget",
  "llvm.mblaze.fsl.tnput",
  "llvm.mblaze.fsl.tput",
#endif

// Intrinsic ID to overload bitset
#ifdef GET_INTRINSIC_OVERLOAD_TABLE
static const uint8_t OTable[] = {
  0,
  0,
  0,
  0,
  0,
  0,
  0
};

return (OTable[id/8] & (1 << (id%8))) != 0;
#endif

// Function name -> enum value recognizer code.
#ifdef GET_FUNCTION_RECOGNIZER
  StringRef NameR(Name+6, Len-6);   // Skip over 'llvm.'
  switch (Name[5]) {                  // Dispatch on first letter.
  default: break;
  case 'm':
    switch (NameR.size()) {
    default: break;
    case 13:	 // 2 strings to match.
      if (memcmp(NameR.data()+0, "blaze.fsl.", 10))
        break;
      switch (NameR[10]) {
      default: break;
      case 'g':	 // 1 string to match.
        if (memcmp(NameR.data()+11, "et", 2))
          break;
        return mblazeIntrinsic::mblaze_fsl_get;	 // "blaze.fsl.get"
      case 'p':	 // 1 string to match.
        if (memcmp(NameR.data()+11, "ut", 2))
          break;
        return mblazeIntrinsic::mblaze_fsl_put;	 // "blaze.fsl.put"
      }
      break;
    case 14:	 // 9 strings to match.
      if (memcmp(NameR.data()+0, "blaze.fsl.", 10))
        break;
      switch (NameR[10]) {
      default: break;
      case 'a':	 // 2 strings to match.
        switch (NameR[11]) {
        default: break;
        case 'g':	 // 1 string to match.
          if (memcmp(NameR.data()+12, "et", 2))
            break;
          return mblazeIntrinsic::mblaze_fsl_aget;	 // "blaze.fsl.aget"
        case 'p':	 // 1 string to match.
          if (memcmp(NameR.data()+12, "ut", 2))
            break;
          return mblazeIntrinsic::mblaze_fsl_aput;	 // "blaze.fsl.aput"
        }
        break;
      case 'c':	 // 2 strings to match.
        switch (NameR[11]) {
        default: break;
        case 'g':	 // 1 string to match.
          if (memcmp(NameR.data()+12, "et", 2))
            break;
          return mblazeIntrinsic::mblaze_fsl_cget;	 // "blaze.fsl.cget"
        case 'p':	 // 1 string to match.
          if (memcmp(NameR.data()+12, "ut", 2))
            break;
          return mblazeIntrinsic::mblaze_fsl_cput;	 // "blaze.fsl.cput"
        }
        break;
      case 'e':	 // 1 string to match.
        if (memcmp(NameR.data()+11, "get", 3))
          break;
        return mblazeIntrinsic::mblaze_fsl_eget;	 // "blaze.fsl.eget"
      case 'n':	 // 2 strings to match.
        switch (NameR[11]) {
        default: break;
        case 'g':	 // 1 string to match.
          if (memcmp(NameR.data()+12, "et", 2))
            break;
          return mblazeIntrinsic::mblaze_fsl_nget;	 // "blaze.fsl.nget"
        case 'p':	 // 1 string to match.
          if (memcmp(NameR.data()+12, "ut", 2))
            break;
          return mblazeIntrinsic::mblaze_fsl_nput;	 // "blaze.fsl.nput"
        }
        break;
      case 't':	 // 2 strings to match.
        switch (NameR[11]) {
        default: break;
        case 'g':	 // 1 string to match.
          if (memcmp(NameR.data()+12, "et", 2))
            break;
          return mblazeIntrinsic::mblaze_fsl_tget;	 // "blaze.fsl.tget"
        case 'p':	 // 1 string to match.
          if (memcmp(NameR.data()+12, "ut", 2))
            break;
          return mblazeIntrinsic::mblaze_fsl_tput;	 // "blaze.fsl.tput"
        }
        break;
      }
      break;
    case 15:	 // 16 strings to match.
      if (memcmp(NameR.data()+0, "blaze.fsl.", 10))
        break;
      switch (NameR[10]) {
      default: break;
      case 'c':	 // 2 strings to match.
        if (NameR[11] != 'a')
          break;
        switch (NameR[12]) {
        default: break;
        case 'g':	 // 1 string to match.
          if (memcmp(NameR.data()+13, "et", 2))
            break;
          return mblazeIntrinsic::mblaze_fsl_caget;	 // "blaze.fsl.caget"
        case 'p':	 // 1 string to match.
          if (memcmp(NameR.data()+13, "ut", 2))
            break;
          return mblazeIntrinsic::mblaze_fsl_caput;	 // "blaze.fsl.caput"
        }
        break;
      case 'e':	 // 2 strings to match.
        switch (NameR[11]) {
        default: break;
        case 'a':	 // 1 string to match.
          if (memcmp(NameR.data()+12, "get", 3))
            break;
          return mblazeIntrinsic::mblaze_fsl_eaget;	 // "blaze.fsl.eaget"
        case 'c':	 // 1 string to match.
          if (memcmp(NameR.data()+12, "get", 3))
            break;
          return mblazeIntrinsic::mblaze_fsl_ecget;	 // "blaze.fsl.ecget"
        }
        break;
      case 'n':	 // 5 strings to match.
        switch (NameR[11]) {
        default: break;
        case 'a':	 // 2 strings to match.
          switch (NameR[12]) {
          default: break;
          case 'g':	 // 1 string to match.
            if (memcmp(NameR.data()+13, "et", 2))
              break;
            return mblazeIntrinsic::mblaze_fsl_naget;	 // "blaze.fsl.naget"
          case 'p':	 // 1 string to match.
            if (memcmp(NameR.data()+13, "ut", 2))
              break;
            return mblazeIntrinsic::mblaze_fsl_naput;	 // "blaze.fsl.naput"
          }
          break;
        case 'c':	 // 2 strings to match.
          switch (NameR[12]) {
          default: break;
          case 'g':	 // 1 string to match.
            if (memcmp(NameR.data()+13, "et", 2))
              break;
            return mblazeIntrinsic::mblaze_fsl_ncget;	 // "blaze.fsl.ncget"
          case 'p':	 // 1 string to match.
            if (memcmp(NameR.data()+13, "ut", 2))
              break;
            return mblazeIntrinsic::mblaze_fsl_ncput;	 // "blaze.fsl.ncput"
          }
          break;
        case 'e':	 // 1 string to match.
          if (memcmp(NameR.data()+12, "get", 3))
            break;
          return mblazeIntrinsic::mblaze_fsl_neget;	 // "blaze.fsl.neget"
        }
        break;
      case 't':	 // 7 strings to match.
        switch (NameR[11]) {
        default: break;
        case 'a':	 // 2 strings to match.
          switch (NameR[12]) {
          default: break;
          case 'g':	 // 1 string to match.
            if (memcmp(NameR.data()+13, "et", 2))
              break;
            return mblazeIntrinsic::mblaze_fsl_taget;	 // "blaze.fsl.taget"
          case 'p':	 // 1 string to match.
            if (memcmp(NameR.data()+13, "ut", 2))
              break;
            return mblazeIntrinsic::mblaze_fsl_taput;	 // "blaze.fsl.taput"
          }
          break;
        case 'c':	 // 2 strings to match.
          switch (NameR[12]) {
          default: break;
          case 'g':	 // 1 string to match.
            if (memcmp(NameR.data()+13, "et", 2))
              break;
            return mblazeIntrinsic::mblaze_fsl_tcget;	 // "blaze.fsl.tcget"
          case 'p':	 // 1 string to match.
            if (memcmp(NameR.data()+13, "ut", 2))
              break;
            return mblazeIntrinsic::mblaze_fsl_tcput;	 // "blaze.fsl.tcput"
          }
          break;
        case 'e':	 // 1 string to match.
          if (memcmp(NameR.data()+12, "get", 3))
            break;
          return mblazeIntrinsic::mblaze_fsl_teget;	 // "blaze.fsl.teget"
        case 'n':	 // 2 strings to match.
          switch (NameR[12]) {
          default: break;
          case 'g':	 // 1 string to match.
            if (memcmp(NameR.data()+13, "et", 2))
              break;
            return mblazeIntrinsic::mblaze_fsl_tnget;	 // "blaze.fsl.tnget"
          case 'p':	 // 1 string to match.
            if (memcmp(NameR.data()+13, "ut", 2))
              break;
            return mblazeIntrinsic::mblaze_fsl_tnput;	 // "blaze.fsl.tnput"
          }
          break;
        }
        break;
      }
      break;
    case 16:	 // 14 strings to match.
      if (memcmp(NameR.data()+0, "blaze.fsl.", 10))
        break;
      switch (NameR[10]) {
      default: break;
      case 'e':	 // 1 string to match.
        if (memcmp(NameR.data()+11, "caget", 5))
          break;
        return mblazeIntrinsic::mblaze_fsl_ecaget;	 // "blaze.fsl.ecaget"
      case 'n':	 // 4 strings to match.
        switch (NameR[11]) {
        default: break;
        case 'c':	 // 2 strings to match.
          if (NameR[12] != 'a')
            break;
          switch (NameR[13]) {
          default: break;
          case 'g':	 // 1 string to match.
            if (memcmp(NameR.data()+14, "et", 2))
              break;
            return mblazeIntrinsic::mblaze_fsl_ncaget;	 // "blaze.fsl.ncaget"
          case 'p':	 // 1 string to match.
            if (memcmp(NameR.data()+14, "ut", 2))
              break;
            return mblazeIntrinsic::mblaze_fsl_ncaput;	 // "blaze.fsl.ncaput"
          }
          break;
        case 'e':	 // 2 strings to match.
          switch (NameR[12]) {
          default: break;
          case 'a':	 // 1 string to match.
            if (memcmp(NameR.data()+13, "get", 3))
              break;
            return mblazeIntrinsic::mblaze_fsl_neaget;	 // "blaze.fsl.neaget"
          case 'c':	 // 1 string to match.
            if (memcmp(NameR.data()+13, "get", 3))
              break;
            return mblazeIntrinsic::mblaze_fsl_necget;	 // "blaze.fsl.necget"
          }
          break;
        }
        break;
      case 't':	 // 9 strings to match.
        switch (NameR[11]) {
        default: break;
        case 'c':	 // 2 strings to match.
          if (NameR[12] != 'a')
            break;
          switch (NameR[13]) {
          default: break;
          case 'g':	 // 1 string to match.
            if (memcmp(NameR.data()+14, "et", 2))
              break;
            return mblazeIntrinsic::mblaze_fsl_tcaget;	 // "blaze.fsl.tcaget"
          case 'p':	 // 1 string to match.
            if (memcmp(NameR.data()+14, "ut", 2))
              break;
            return mblazeIntrinsic::mblaze_fsl_tcaput;	 // "blaze.fsl.tcaput"
          }
          break;
        case 'e':	 // 2 strings to match.
          switch (NameR[12]) {
          default: break;
          case 'a':	 // 1 string to match.
            if (memcmp(NameR.data()+13, "get", 3))
              break;
            return mblazeIntrinsic::mblaze_fsl_teaget;	 // "blaze.fsl.teaget"
          case 'c':	 // 1 string to match.
            if (memcmp(NameR.data()+13, "get", 3))
              break;
            return mblazeIntrinsic::mblaze_fsl_tecget;	 // "blaze.fsl.tecget"
          }
          break;
        case 'n':	 // 5 strings to match.
          switch (NameR[12]) {
          default: break;
          case 'a':	 // 2 strings to match.
            switch (NameR[13]) {
            default: break;
            case 'g':	 // 1 string to match.
              if (memcmp(NameR.data()+14, "et", 2))
                break;
              return mblazeIntrinsic::mblaze_fsl_tnaget;	 // "blaze.fsl.tnaget"
            case 'p':	 // 1 string to match.
              if (memcmp(NameR.data()+14, "ut", 2))
                break;
              return mblazeIntrinsic::mblaze_fsl_tnaput;	 // "blaze.fsl.tnaput"
            }
            break;
          case 'c':	 // 2 strings to match.
            switch (NameR[13]) {
            default: break;
            case 'g':	 // 1 string to match.
              if (memcmp(NameR.data()+14, "et", 2))
                break;
              return mblazeIntrinsic::mblaze_fsl_tncget;	 // "blaze.fsl.tncget"
            case 'p':	 // 1 string to match.
              if (memcmp(NameR.data()+14, "ut", 2))
                break;
              return mblazeIntrinsic::mblaze_fsl_tncput;	 // "blaze.fsl.tncput"
            }
            break;
          case 'e':	 // 1 string to match.
            if (memcmp(NameR.data()+13, "get", 3))
              break;
            return mblazeIntrinsic::mblaze_fsl_tneget;	 // "blaze.fsl.tneget"
          }
          break;
        }
        break;
      }
      break;
    case 17:	 // 6 strings to match.
      if (memcmp(NameR.data()+0, "blaze.fsl.", 10))
        break;
      switch (NameR[10]) {
      default: break;
      case 'n':	 // 1 string to match.
        if (memcmp(NameR.data()+11, "ecaget", 6))
          break;
        return mblazeIntrinsic::mblaze_fsl_necaget;	 // "blaze.fsl.necaget"
      case 't':	 // 5 strings to match.
        switch (NameR[11]) {
        default: break;
        case 'e':	 // 1 string to match.
          if (memcmp(NameR.data()+12, "caget", 5))
            break;
          return mblazeIntrinsic::mblaze_fsl_tecaget;	 // "blaze.fsl.tecaget"
        case 'n':	 // 4 strings to match.
          switch (NameR[12]) {
          default: break;
          case 'c':	 // 2 strings to match.
            if (NameR[13] != 'a')
              break;
            switch (NameR[14]) {
            default: break;
            case 'g':	 // 1 string to match.
              if (memcmp(NameR.data()+15, "et", 2))
                break;
              return mblazeIntrinsic::mblaze_fsl_tncaget;	 // "blaze.fsl.tncaget"
            case 'p':	 // 1 string to match.
              if (memcmp(NameR.data()+15, "ut", 2))
                break;
              return mblazeIntrinsic::mblaze_fsl_tncaput;	 // "blaze.fsl.tncaput"
            }
            break;
          case 'e':	 // 2 strings to match.
            switch (NameR[13]) {
            default: break;
            case 'a':	 // 1 string to match.
              if (memcmp(NameR.data()+14, "get", 3))
                break;
              return mblazeIntrinsic::mblaze_fsl_tneaget;	 // "blaze.fsl.tneaget"
            case 'c':	 // 1 string to match.
              if (memcmp(NameR.data()+14, "get", 3))
                break;
              return mblazeIntrinsic::mblaze_fsl_tnecget;	 // "blaze.fsl.tnecget"
            }
            break;
          }
          break;
        }
        break;
      }
      break;
    case 18:	 // 1 string to match.
      if (memcmp(NameR.data()+0, "blaze.fsl.tnecaget", 18))
        break;
      return mblazeIntrinsic::mblaze_fsl_tnecaget;	 // "blaze.fsl.tnecaget"
    }
    break;  // end of 'm' case.
  }
#endif

// Global intrinsic function declaration type table.
#ifdef GET_INTRINSIC_GENERATOR_GLOBAL
static const unsigned IIT_Table[] = {
  0x44, 0x440, 0x44, 0x440, 0x44, 0x440, 0x44, 
  0x44, 0x44, 0x44, 0x44, 0x44, 0x440, 0x44, 0x440, 
  0x44, 0x440, 0x44, 0x44, 0x44, 0x44, 0x44, 0x440, 
  0x440, 0x44, 0x40, 0x44, 0x40, 0x44, 0x40, 0x44, 
  0x44, 0x44, 0x44, 0x44, 0x44, 0x40, 0x44, 0x40, 
  0x44, 0x40, 0x44, 0x44, 0x44, 0x44, 0x44, 0x40, 
  0x40, 0
};

static const unsigned char IIT_LongEncodingTable[] = {
  255
};

#endif

// Add parameter attributes that are not common to all intrinsics.
#ifdef GET_INTRINSIC_ATTRIBUTES
static AttrListPtr getAttributes(LLVMContext &C, mblazeIntrinsic::ID id) {
  static const uint8_t IntrinsicsToAttributesMap[] = {
    1, // llvm.mblaze.fsl.aget
    1, // llvm.mblaze.fsl.aput
    1, // llvm.mblaze.fsl.caget
    1, // llvm.mblaze.fsl.caput
    1, // llvm.mblaze.fsl.cget
    1, // llvm.mblaze.fsl.cput
    1, // llvm.mblaze.fsl.eaget
    1, // llvm.mblaze.fsl.ecaget
    1, // llvm.mblaze.fsl.ecget
    1, // llvm.mblaze.fsl.eget
    1, // llvm.mblaze.fsl.get
    1, // llvm.mblaze.fsl.naget
    1, // llvm.mblaze.fsl.naput
    1, // llvm.mblaze.fsl.ncaget
    1, // llvm.mblaze.fsl.ncaput
    1, // llvm.mblaze.fsl.ncget
    1, // llvm.mblaze.fsl.ncput
    1, // llvm.mblaze.fsl.neaget
    1, // llvm.mblaze.fsl.necaget
    1, // llvm.mblaze.fsl.necget
    1, // llvm.mblaze.fsl.neget
    1, // llvm.mblaze.fsl.nget
    1, // llvm.mblaze.fsl.nput
    1, // llvm.mblaze.fsl.put
    1, // llvm.mblaze.fsl.taget
    1, // llvm.mblaze.fsl.taput
    1, // llvm.mblaze.fsl.tcaget
    1, // llvm.mblaze.fsl.tcaput
    1, // llvm.mblaze.fsl.tcget
    1, // llvm.mblaze.fsl.tcput
    1, // llvm.mblaze.fsl.teaget
    1, // llvm.mblaze.fsl.tecaget
    1, // llvm.mblaze.fsl.tecget
    1, // llvm.mblaze.fsl.teget
    1, // llvm.mblaze.fsl.tget
    1, // llvm.mblaze.fsl.tnaget
    1, // llvm.mblaze.fsl.tnaput
    1, // llvm.mblaze.fsl.tncaget
    1, // llvm.mblaze.fsl.tncaput
    1, // llvm.mblaze.fsl.tncget
    1, // llvm.mblaze.fsl.tncput
    1, // llvm.mblaze.fsl.tneaget
    1, // llvm.mblaze.fsl.tnecaget
    1, // llvm.mblaze.fsl.tnecget
    1, // llvm.mblaze.fsl.tneget
    1, // llvm.mblaze.fsl.tnget
    1, // llvm.mblaze.fsl.tnput
    1, // llvm.mblaze.fsl.tput
  };

  AttributeWithIndex AWI[1];
  unsigned NumAttrs = 0;
  if (id != 0) {
    SmallVector<Attributes::AttrVal, 8> AttrVec;
    switch(IntrinsicsToAttributesMap[id - Intrinsic::num_intrinsics]) {
    default: llvm_unreachable("Invalid attribute number");
    case 1:
      AttrVec.clear();
      AttrVec.push_back(Attributes::NoUnwind);
      AWI[0] = AttributeWithIndex::get(C, AttrListPtr::FunctionIndex, AttrVec);
      NumAttrs = 1;
      break;
    }
  }
  return AttrListPtr::get(C, ArrayRef<AttributeWithIndex>(AWI, NumAttrs));
}
#endif // GET_INTRINSIC_ATTRIBUTES

// Determine intrinsic alias analysis mod/ref behavior.
#ifdef GET_INTRINSIC_MODREF_BEHAVIOR
assert(iid <= Intrinsic::mblaze_fsl_tput && "Unknown intrinsic.");

static const uint8_t IntrinsicModRefBehavior[] = {
  /* invalid */ UnknownModRefBehavior,
  /* mblazemblaze_fsl_aget */ UnknownModRefBehavior,
  /* mblazemblaze_fsl_aput */ UnknownModRefBehavior,
  /* mblazemblaze_fsl_caget */ UnknownModRefBehavior,
  /* mblazemblaze_fsl_caput */ UnknownModRefBehavior,
  /* mblazemblaze_fsl_cget */ UnknownModRefBehavior,
  /* mblazemblaze_fsl_cput */ UnknownModRefBehavior,
  /* mblazemblaze_fsl_eaget */ UnknownModRefBehavior,
  /* mblazemblaze_fsl_ecaget */ UnknownModRefBehavior,
  /* mblazemblaze_fsl_ecget */ UnknownModRefBehavior,
  /* mblazemblaze_fsl_eget */ UnknownModRefBehavior,
  /* mblazemblaze_fsl_get */ UnknownModRefBehavior,
  /* mblazemblaze_fsl_naget */ UnknownModRefBehavior,
  /* mblazemblaze_fsl_naput */ UnknownModRefBehavior,
  /* mblazemblaze_fsl_ncaget */ UnknownModRefBehavior,
  /* mblazemblaze_fsl_ncaput */ UnknownModRefBehavior,
  /* mblazemblaze_fsl_ncget */ UnknownModRefBehavior,
  /* mblazemblaze_fsl_ncput */ UnknownModRefBehavior,
  /* mblazemblaze_fsl_neaget */ UnknownModRefBehavior,
  /* mblazemblaze_fsl_necaget */ UnknownModRefBehavior,
  /* mblazemblaze_fsl_necget */ UnknownModRefBehavior,
  /* mblazemblaze_fsl_neget */ UnknownModRefBehavior,
  /* mblazemblaze_fsl_nget */ UnknownModRefBehavior,
  /* mblazemblaze_fsl_nput */ UnknownModRefBehavior,
  /* mblazemblaze_fsl_put */ UnknownModRefBehavior,
  /* mblazemblaze_fsl_taget */ UnknownModRefBehavior,
  /* mblazemblaze_fsl_taput */ UnknownModRefBehavior,
  /* mblazemblaze_fsl_tcaget */ UnknownModRefBehavior,
  /* mblazemblaze_fsl_tcaput */ UnknownModRefBehavior,
  /* mblazemblaze_fsl_tcget */ UnknownModRefBehavior,
  /* mblazemblaze_fsl_tcput */ UnknownModRefBehavior,
  /* mblazemblaze_fsl_teaget */ UnknownModRefBehavior,
  /* mblazemblaze_fsl_tecaget */ UnknownModRefBehavior,
  /* mblazemblaze_fsl_tecget */ UnknownModRefBehavior,
  /* mblazemblaze_fsl_teget */ UnknownModRefBehavior,
  /* mblazemblaze_fsl_tget */ UnknownModRefBehavior,
  /* mblazemblaze_fsl_tnaget */ UnknownModRefBehavior,
  /* mblazemblaze_fsl_tnaput */ UnknownModRefBehavior,
  /* mblazemblaze_fsl_tncaget */ UnknownModRefBehavior,
  /* mblazemblaze_fsl_tncaput */ UnknownModRefBehavior,
  /* mblazemblaze_fsl_tncget */ UnknownModRefBehavior,
  /* mblazemblaze_fsl_tncput */ UnknownModRefBehavior,
  /* mblazemblaze_fsl_tneaget */ UnknownModRefBehavior,
  /* mblazemblaze_fsl_tnecaget */ UnknownModRefBehavior,
  /* mblazemblaze_fsl_tnecget */ UnknownModRefBehavior,
  /* mblazemblaze_fsl_tneget */ UnknownModRefBehavior,
  /* mblazemblaze_fsl_tnget */ UnknownModRefBehavior,
  /* mblazemblaze_fsl_tnput */ UnknownModRefBehavior,
  /* mblazemblaze_fsl_tput */ UnknownModRefBehavior,
};

return static_cast<ModRefBehavior>(IntrinsicModRefBehavior[iid]);
#endif // GET_INTRINSIC_MODREF_BEHAVIOR

// Get the LLVM intrinsic that corresponds to a GCC builtin.
// This is used by the C front-end.  The GCC builtin name is passed
// in as BuiltinName, and a target prefix (e.g. 'ppc') is passed
// in as TargetPrefix.  The result is assigned to 'IntrinsicID'.
#ifdef GET_LLVM_INTRINSIC_FOR_GCC_BUILTIN
static mblazeIntrinsic::ID getIntrinsicForGCCBuiltin(const char *TargetPrefixStr, const char *BuiltinNameStr) {
  StringRef BuiltinName(BuiltinNameStr);
  StringRef TargetPrefix(TargetPrefixStr);

  if (TargetPrefix == "mblaze") {
  switch (BuiltinName.size()) {
  default: break;
  case 24:	 // 2 strings to match.
    if (memcmp(BuiltinName.data()+0, "__builtin_mblaze_fsl_", 21))
      break;
    switch (BuiltinName[21]) {
    default: break;
    case 'g':	 // 1 string to match.
      if (memcmp(BuiltinName.data()+22, "et", 2))
        break;
      return mblazeIntrinsic::mblaze_fsl_get;	 // "__builtin_mblaze_fsl_get"
    case 'p':	 // 1 string to match.
      if (memcmp(BuiltinName.data()+22, "ut", 2))
        break;
      return mblazeIntrinsic::mblaze_fsl_put;	 // "__builtin_mblaze_fsl_put"
    }
    break;
  case 25:	 // 9 strings to match.
    if (memcmp(BuiltinName.data()+0, "__builtin_mblaze_fsl_", 21))
      break;
    switch (BuiltinName[21]) {
    default: break;
    case 'a':	 // 2 strings to match.
      switch (BuiltinName[22]) {
      default: break;
      case 'g':	 // 1 string to match.
        if (memcmp(BuiltinName.data()+23, "et", 2))
          break;
        return mblazeIntrinsic::mblaze_fsl_aget;	 // "__builtin_mblaze_fsl_aget"
      case 'p':	 // 1 string to match.
        if (memcmp(BuiltinName.data()+23, "ut", 2))
          break;
        return mblazeIntrinsic::mblaze_fsl_aput;	 // "__builtin_mblaze_fsl_aput"
      }
      break;
    case 'c':	 // 2 strings to match.
      switch (BuiltinName[22]) {
      default: break;
      case 'g':	 // 1 string to match.
        if (memcmp(BuiltinName.data()+23, "et", 2))
          break;
        return mblazeIntrinsic::mblaze_fsl_cget;	 // "__builtin_mblaze_fsl_cget"
      case 'p':	 // 1 string to match.
        if (memcmp(BuiltinName.data()+23, "ut", 2))
          break;
        return mblazeIntrinsic::mblaze_fsl_cput;	 // "__builtin_mblaze_fsl_cput"
      }
      break;
    case 'e':	 // 1 string to match.
      if (memcmp(BuiltinName.data()+22, "get", 3))
        break;
      return mblazeIntrinsic::mblaze_fsl_eget;	 // "__builtin_mblaze_fsl_eget"
    case 'n':	 // 2 strings to match.
      switch (BuiltinName[22]) {
      default: break;
      case 'g':	 // 1 string to match.
        if (memcmp(BuiltinName.data()+23, "et", 2))
          break;
        return mblazeIntrinsic::mblaze_fsl_nget;	 // "__builtin_mblaze_fsl_nget"
      case 'p':	 // 1 string to match.
        if (memcmp(BuiltinName.data()+23, "ut", 2))
          break;
        return mblazeIntrinsic::mblaze_fsl_nput;	 // "__builtin_mblaze_fsl_nput"
      }
      break;
    case 't':	 // 2 strings to match.
      switch (BuiltinName[22]) {
      default: break;
      case 'g':	 // 1 string to match.
        if (memcmp(BuiltinName.data()+23, "et", 2))
          break;
        return mblazeIntrinsic::mblaze_fsl_tget;	 // "__builtin_mblaze_fsl_tget"
      case 'p':	 // 1 string to match.
        if (memcmp(BuiltinName.data()+23, "ut", 2))
          break;
        return mblazeIntrinsic::mblaze_fsl_tput;	 // "__builtin_mblaze_fsl_tput"
      }
      break;
    }
    break;
  case 26:	 // 16 strings to match.
    if (memcmp(BuiltinName.data()+0, "__builtin_mblaze_fsl_", 21))
      break;
    switch (BuiltinName[21]) {
    default: break;
    case 'c':	 // 2 strings to match.
      if (BuiltinName[22] != 'a')
        break;
      switch (BuiltinName[23]) {
      default: break;
      case 'g':	 // 1 string to match.
        if (memcmp(BuiltinName.data()+24, "et", 2))
          break;
        return mblazeIntrinsic::mblaze_fsl_caget;	 // "__builtin_mblaze_fsl_caget"
      case 'p':	 // 1 string to match.
        if (memcmp(BuiltinName.data()+24, "ut", 2))
          break;
        return mblazeIntrinsic::mblaze_fsl_caput;	 // "__builtin_mblaze_fsl_caput"
      }
      break;
    case 'e':	 // 2 strings to match.
      switch (BuiltinName[22]) {
      default: break;
      case 'a':	 // 1 string to match.
        if (memcmp(BuiltinName.data()+23, "get", 3))
          break;
        return mblazeIntrinsic::mblaze_fsl_eaget;	 // "__builtin_mblaze_fsl_eaget"
      case 'c':	 // 1 string to match.
        if (memcmp(BuiltinName.data()+23, "get", 3))
          break;
        return mblazeIntrinsic::mblaze_fsl_ecget;	 // "__builtin_mblaze_fsl_ecget"
      }
      break;
    case 'n':	 // 5 strings to match.
      switch (BuiltinName[22]) {
      default: break;
      case 'a':	 // 2 strings to match.
        switch (BuiltinName[23]) {
        default: break;
        case 'g':	 // 1 string to match.
          if (memcmp(BuiltinName.data()+24, "et", 2))
            break;
          return mblazeIntrinsic::mblaze_fsl_naget;	 // "__builtin_mblaze_fsl_naget"
        case 'p':	 // 1 string to match.
          if (memcmp(BuiltinName.data()+24, "ut", 2))
            break;
          return mblazeIntrinsic::mblaze_fsl_naput;	 // "__builtin_mblaze_fsl_naput"
        }
        break;
      case 'c':	 // 2 strings to match.
        switch (BuiltinName[23]) {
        default: break;
        case 'g':	 // 1 string to match.
          if (memcmp(BuiltinName.data()+24, "et", 2))
            break;
          return mblazeIntrinsic::mblaze_fsl_ncget;	 // "__builtin_mblaze_fsl_ncget"
        case 'p':	 // 1 string to match.
          if (memcmp(BuiltinName.data()+24, "ut", 2))
            break;
          return mblazeIntrinsic::mblaze_fsl_ncput;	 // "__builtin_mblaze_fsl_ncput"
        }
        break;
      case 'e':	 // 1 string to match.
        if (memcmp(BuiltinName.data()+23, "get", 3))
          break;
        return mblazeIntrinsic::mblaze_fsl_neget;	 // "__builtin_mblaze_fsl_neget"
      }
      break;
    case 't':	 // 7 strings to match.
      switch (BuiltinName[22]) {
      default: break;
      case 'a':	 // 2 strings to match.
        switch (BuiltinName[23]) {
        default: break;
        case 'g':	 // 1 string to match.
          if (memcmp(BuiltinName.data()+24, "et", 2))
            break;
          return mblazeIntrinsic::mblaze_fsl_taget;	 // "__builtin_mblaze_fsl_taget"
        case 'p':	 // 1 string to match.
          if (memcmp(BuiltinName.data()+24, "ut", 2))
            break;
          return mblazeIntrinsic::mblaze_fsl_taput;	 // "__builtin_mblaze_fsl_taput"
        }
        break;
      case 'c':	 // 2 strings to match.
        switch (BuiltinName[23]) {
        default: break;
        case 'g':	 // 1 string to match.
          if (memcmp(BuiltinName.data()+24, "et", 2))
            break;
          return mblazeIntrinsic::mblaze_fsl_tcget;	 // "__builtin_mblaze_fsl_tcget"
        case 'p':	 // 1 string to match.
          if (memcmp(BuiltinName.data()+24, "ut", 2))
            break;
          return mblazeIntrinsic::mblaze_fsl_tcput;	 // "__builtin_mblaze_fsl_tcput"
        }
        break;
      case 'e':	 // 1 string to match.
        if (memcmp(BuiltinName.data()+23, "get", 3))
          break;
        return mblazeIntrinsic::mblaze_fsl_teget;	 // "__builtin_mblaze_fsl_teget"
      case 'n':	 // 2 strings to match.
        switch (BuiltinName[23]) {
        default: break;
        case 'g':	 // 1 string to match.
          if (memcmp(BuiltinName.data()+24, "et", 2))
            break;
          return mblazeIntrinsic::mblaze_fsl_tnget;	 // "__builtin_mblaze_fsl_tnget"
        case 'p':	 // 1 string to match.
          if (memcmp(BuiltinName.data()+24, "ut", 2))
            break;
          return mblazeIntrinsic::mblaze_fsl_tnput;	 // "__builtin_mblaze_fsl_tnput"
        }
        break;
      }
      break;
    }
    break;
  case 27:	 // 14 strings to match.
    if (memcmp(BuiltinName.data()+0, "__builtin_mblaze_fsl_", 21))
      break;
    switch (BuiltinName[21]) {
    default: break;
    case 'e':	 // 1 string to match.
      if (memcmp(BuiltinName.data()+22, "caget", 5))
        break;
      return mblazeIntrinsic::mblaze_fsl_ecaget;	 // "__builtin_mblaze_fsl_ecaget"
    case 'n':	 // 4 strings to match.
      switch (BuiltinName[22]) {
      default: break;
      case 'c':	 // 2 strings to match.
        if (BuiltinName[23] != 'a')
          break;
        switch (BuiltinName[24]) {
        default: break;
        case 'g':	 // 1 string to match.
          if (memcmp(BuiltinName.data()+25, "et", 2))
            break;
          return mblazeIntrinsic::mblaze_fsl_ncaget;	 // "__builtin_mblaze_fsl_ncaget"
        case 'p':	 // 1 string to match.
          if (memcmp(BuiltinName.data()+25, "ut", 2))
            break;
          return mblazeIntrinsic::mblaze_fsl_ncaput;	 // "__builtin_mblaze_fsl_ncaput"
        }
        break;
      case 'e':	 // 2 strings to match.
        switch (BuiltinName[23]) {
        default: break;
        case 'a':	 // 1 string to match.
          if (memcmp(BuiltinName.data()+24, "get", 3))
            break;
          return mblazeIntrinsic::mblaze_fsl_neaget;	 // "__builtin_mblaze_fsl_neaget"
        case 'c':	 // 1 string to match.
          if (memcmp(BuiltinName.data()+24, "get", 3))
            break;
          return mblazeIntrinsic::mblaze_fsl_necget;	 // "__builtin_mblaze_fsl_necget"
        }
        break;
      }
      break;
    case 't':	 // 9 strings to match.
      switch (BuiltinName[22]) {
      default: break;
      case 'c':	 // 2 strings to match.
        if (BuiltinName[23] != 'a')
          break;
        switch (BuiltinName[24]) {
        default: break;
        case 'g':	 // 1 string to match.
          if (memcmp(BuiltinName.data()+25, "et", 2))
            break;
          return mblazeIntrinsic::mblaze_fsl_tcaget;	 // "__builtin_mblaze_fsl_tcaget"
        case 'p':	 // 1 string to match.
          if (memcmp(BuiltinName.data()+25, "ut", 2))
            break;
          return mblazeIntrinsic::mblaze_fsl_tcaput;	 // "__builtin_mblaze_fsl_tcaput"
        }
        break;
      case 'e':	 // 2 strings to match.
        switch (BuiltinName[23]) {
        default: break;
        case 'a':	 // 1 string to match.
          if (memcmp(BuiltinName.data()+24, "get", 3))
            break;
          return mblazeIntrinsic::mblaze_fsl_teaget;	 // "__builtin_mblaze_fsl_teaget"
        case 'c':	 // 1 string to match.
          if (memcmp(BuiltinName.data()+24, "get", 3))
            break;
          return mblazeIntrinsic::mblaze_fsl_tecget;	 // "__builtin_mblaze_fsl_tecget"
        }
        break;
      case 'n':	 // 5 strings to match.
        switch (BuiltinName[23]) {
        default: break;
        case 'a':	 // 2 strings to match.
          switch (BuiltinName[24]) {
          default: break;
          case 'g':	 // 1 string to match.
            if (memcmp(BuiltinName.data()+25, "et", 2))
              break;
            return mblazeIntrinsic::mblaze_fsl_tnaget;	 // "__builtin_mblaze_fsl_tnaget"
          case 'p':	 // 1 string to match.
            if (memcmp(BuiltinName.data()+25, "ut", 2))
              break;
            return mblazeIntrinsic::mblaze_fsl_tnaput;	 // "__builtin_mblaze_fsl_tnaput"
          }
          break;
        case 'c':	 // 2 strings to match.
          switch (BuiltinName[24]) {
          default: break;
          case 'g':	 // 1 string to match.
            if (memcmp(BuiltinName.data()+25, "et", 2))
              break;
            return mblazeIntrinsic::mblaze_fsl_tncget;	 // "__builtin_mblaze_fsl_tncget"
          case 'p':	 // 1 string to match.
            if (memcmp(BuiltinName.data()+25, "ut", 2))
              break;
            return mblazeIntrinsic::mblaze_fsl_tncput;	 // "__builtin_mblaze_fsl_tncput"
          }
          break;
        case 'e':	 // 1 string to match.
          if (memcmp(BuiltinName.data()+24, "get", 3))
            break;
          return mblazeIntrinsic::mblaze_fsl_tneget;	 // "__builtin_mblaze_fsl_tneget"
        }
        break;
      }
      break;
    }
    break;
  case 28:	 // 6 strings to match.
    if (memcmp(BuiltinName.data()+0, "__builtin_mblaze_fsl_", 21))
      break;
    switch (BuiltinName[21]) {
    default: break;
    case 'n':	 // 1 string to match.
      if (memcmp(BuiltinName.data()+22, "ecaget", 6))
        break;
      return mblazeIntrinsic::mblaze_fsl_necaget;	 // "__builtin_mblaze_fsl_necaget"
    case 't':	 // 5 strings to match.
      switch (BuiltinName[22]) {
      default: break;
      case 'e':	 // 1 string to match.
        if (memcmp(BuiltinName.data()+23, "caget", 5))
          break;
        return mblazeIntrinsic::mblaze_fsl_tecaget;	 // "__builtin_mblaze_fsl_tecaget"
      case 'n':	 // 4 strings to match.
        switch (BuiltinName[23]) {
        default: break;
        case 'c':	 // 2 strings to match.
          if (BuiltinName[24] != 'a')
            break;
          switch (BuiltinName[25]) {
          default: break;
          case 'g':	 // 1 string to match.
            if (memcmp(BuiltinName.data()+26, "et", 2))
              break;
            return mblazeIntrinsic::mblaze_fsl_tncaget;	 // "__builtin_mblaze_fsl_tncaget"
          case 'p':	 // 1 string to match.
            if (memcmp(BuiltinName.data()+26, "ut", 2))
              break;
            return mblazeIntrinsic::mblaze_fsl_tncaput;	 // "__builtin_mblaze_fsl_tncaput"
          }
          break;
        case 'e':	 // 2 strings to match.
          switch (BuiltinName[24]) {
          default: break;
          case 'a':	 // 1 string to match.
            if (memcmp(BuiltinName.data()+25, "get", 3))
              break;
            return mblazeIntrinsic::mblaze_fsl_tneaget;	 // "__builtin_mblaze_fsl_tneaget"
          case 'c':	 // 1 string to match.
            if (memcmp(BuiltinName.data()+25, "get", 3))
              break;
            return mblazeIntrinsic::mblaze_fsl_tnecget;	 // "__builtin_mblaze_fsl_tnecget"
          }
          break;
        }
        break;
      }
      break;
    }
    break;
  case 29:	 // 1 string to match.
    if (memcmp(BuiltinName.data()+0, "__builtin_mblaze_fsl_tnecaget", 29))
      break;
    return mblazeIntrinsic::mblaze_fsl_tnecaget;	 // "__builtin_mblaze_fsl_tnecaget"
  }
  }
  return (mblazeIntrinsic::ID)Intrinsic::not_intrinsic;
}
#endif

#if defined(_MSC_VER) && defined(setjmp_undefined_for_msvc)
// let's return it to _setjmp state
#  pragma pop_macro("setjmp")
#  undef setjmp_undefined_for_msvc
#endif

