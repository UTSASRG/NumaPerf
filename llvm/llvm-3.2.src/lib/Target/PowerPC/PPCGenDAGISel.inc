/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* DAG Instruction Selector for the PPC target                                *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

// *** NOTE: This file is #included into the middle of the target
// *** instruction selector class.  These functions are really methods.

// The main instruction selector code.
SDNode *SelectCode(SDNode *N) {
  // Some target values are emitted as 2 bytes, TARGET_VAL handles
  // this.
  #define TARGET_VAL(X) X & 255, unsigned(X) >> 8
  static const unsigned char MatcherTable[] = {
/*0*/     OPC_SwitchOpcode /*105 cases */, 33,  TARGET_VAL(ISD::PREFETCH),// ->37
/*4*/       OPC_RecordMemRef,
/*5*/       OPC_RecordNode,   // #0 = 'prefetch' chained node
/*6*/       OPC_RecordChild1, // #1 = $dst
/*7*/       OPC_MoveChild, 2,
/*9*/       OPC_CheckInteger, 0, 
/*11*/      OPC_CheckType, MVT::i32,
/*13*/      OPC_MoveParent,
/*14*/      OPC_MoveChild, 3,
/*16*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*19*/      OPC_MoveParent,
/*20*/      OPC_MoveChild, 4,
/*22*/      OPC_CheckInteger, 1, 
/*24*/      OPC_MoveParent,
/*25*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$dst #2 #3
/*28*/      OPC_EmitMergeInputChains1_0,
/*29*/      OPC_MorphNodeTo, TARGET_VAL(PPC::DCBT), 0|OPFL_Chain|OPFL_MemRefs,
                0/*#VTs*/, 2/*#Ops*/, 2, 3, 
            // Src: (prefetch xoaddr:iPTR:$dst, 0:i32, (imm:i32), 1:i32) - Complexity = 25
            // Dst: (DCBT xoaddr:iPTR:$dst)
          /*SwitchOpcode*/ 40,  TARGET_VAL(ISD::MEMBARRIER),// ->80
/*40*/      OPC_RecordNode,   // #0 = 'membarrier' chained node
/*41*/      OPC_MoveChild, 1,
/*43*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*46*/      OPC_CheckType, MVT::i32,
/*48*/      OPC_MoveParent,
/*49*/      OPC_MoveChild, 2,
/*51*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*54*/      OPC_MoveParent,
/*55*/      OPC_MoveChild, 3,
/*57*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*60*/      OPC_MoveParent,
/*61*/      OPC_MoveChild, 4,
/*63*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*66*/      OPC_MoveParent,
/*67*/      OPC_MoveChild, 5,
/*69*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*72*/      OPC_MoveParent,
/*73*/      OPC_EmitMergeInputChains1_0,
/*74*/      OPC_MorphNodeTo, TARGET_VAL(PPC::SYNC), 0|OPFL_Chain,
                0/*#VTs*/, 0/*#Ops*/, 
            // Src: (membarrier (imm:i32), (imm:i32), (imm:i32), (imm:i32), (imm:i32)) - Complexity = 18
            // Dst: (SYNC)
          /*SwitchOpcode*/ 73|128,4/*585*/,  TARGET_VAL(ISD::INTRINSIC_VOID),// ->669
/*84*/      OPC_RecordNode,   // #0 = 'intrinsic_void' chained node
/*85*/      OPC_MoveChild, 1,
/*87*/      OPC_Scope, 17, /*->106*/ // 21 children in Scope
/*89*/        OPC_CheckInteger, 65|128,12/*1601*/, 
/*92*/        OPC_MoveParent,
/*93*/        OPC_RecordChild2, // #1 = $dst
/*94*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$dst #2 #3
/*97*/        OPC_EmitMergeInputChains1_0,
/*98*/        OPC_MorphNodeTo, TARGET_VAL(PPC::DCBA), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 2, 3, 
              // Src: (intrinsic_void 1601:iPTR, xoaddr:iPTR:$dst) - Complexity = 17
              // Dst: (DCBA xoaddr:iPTR:$dst)
/*106*/     /*Scope*/ 17, /*->124*/
/*107*/       OPC_CheckInteger, 66|128,12/*1602*/, 
/*110*/       OPC_MoveParent,
/*111*/       OPC_RecordChild2, // #1 = $dst
/*112*/       OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$dst #2 #3
/*115*/       OPC_EmitMergeInputChains1_0,
/*116*/       OPC_MorphNodeTo, TARGET_VAL(PPC::DCBF), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 2, 3, 
              // Src: (intrinsic_void 1602:iPTR, xoaddr:iPTR:$dst) - Complexity = 17
              // Dst: (DCBF xoaddr:iPTR:$dst)
/*124*/     /*Scope*/ 17, /*->142*/
/*125*/       OPC_CheckInteger, 67|128,12/*1603*/, 
/*128*/       OPC_MoveParent,
/*129*/       OPC_RecordChild2, // #1 = $dst
/*130*/       OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$dst #2 #3
/*133*/       OPC_EmitMergeInputChains1_0,
/*134*/       OPC_MorphNodeTo, TARGET_VAL(PPC::DCBI), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 2, 3, 
              // Src: (intrinsic_void 1603:iPTR, xoaddr:iPTR:$dst) - Complexity = 17
              // Dst: (DCBI xoaddr:iPTR:$dst)
/*142*/     /*Scope*/ 17, /*->160*/
/*143*/       OPC_CheckInteger, 68|128,12/*1604*/, 
/*146*/       OPC_MoveParent,
/*147*/       OPC_RecordChild2, // #1 = $dst
/*148*/       OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$dst #2 #3
/*151*/       OPC_EmitMergeInputChains1_0,
/*152*/       OPC_MorphNodeTo, TARGET_VAL(PPC::DCBST), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 2, 3, 
              // Src: (intrinsic_void 1604:iPTR, xoaddr:iPTR:$dst) - Complexity = 17
              // Dst: (DCBST xoaddr:iPTR:$dst)
/*160*/     /*Scope*/ 17, /*->178*/
/*161*/       OPC_CheckInteger, 69|128,12/*1605*/, 
/*164*/       OPC_MoveParent,
/*165*/       OPC_RecordChild2, // #1 = $dst
/*166*/       OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$dst #2 #3
/*169*/       OPC_EmitMergeInputChains1_0,
/*170*/       OPC_MorphNodeTo, TARGET_VAL(PPC::DCBT), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 2, 3, 
              // Src: (intrinsic_void 1605:iPTR, xoaddr:iPTR:$dst) - Complexity = 17
              // Dst: (DCBT xoaddr:iPTR:$dst)
/*178*/     /*Scope*/ 17, /*->196*/
/*179*/       OPC_CheckInteger, 70|128,12/*1606*/, 
/*182*/       OPC_MoveParent,
/*183*/       OPC_RecordChild2, // #1 = $dst
/*184*/       OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$dst #2 #3
/*187*/       OPC_EmitMergeInputChains1_0,
/*188*/       OPC_MorphNodeTo, TARGET_VAL(PPC::DCBTST), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 2, 3, 
              // Src: (intrinsic_void 1606:iPTR, xoaddr:iPTR:$dst) - Complexity = 17
              // Dst: (DCBTST xoaddr:iPTR:$dst)
/*196*/     /*Scope*/ 17, /*->214*/
/*197*/       OPC_CheckInteger, 71|128,12/*1607*/, 
/*200*/       OPC_MoveParent,
/*201*/       OPC_RecordChild2, // #1 = $dst
/*202*/       OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$dst #2 #3
/*205*/       OPC_EmitMergeInputChains1_0,
/*206*/       OPC_MorphNodeTo, TARGET_VAL(PPC::DCBZ), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 2, 3, 
              // Src: (intrinsic_void 1607:iPTR, xoaddr:iPTR:$dst) - Complexity = 17
              // Dst: (DCBZ xoaddr:iPTR:$dst)
/*214*/     /*Scope*/ 17, /*->232*/
/*215*/       OPC_CheckInteger, 72|128,12/*1608*/, 
/*218*/       OPC_MoveParent,
/*219*/       OPC_RecordChild2, // #1 = $dst
/*220*/       OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$dst #2 #3
/*223*/       OPC_EmitMergeInputChains1_0,
/*224*/       OPC_MorphNodeTo, TARGET_VAL(PPC::DCBZL), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 2, 3, 
              // Src: (intrinsic_void 1608:iPTR, xoaddr:iPTR:$dst) - Complexity = 17
              // Dst: (DCBZL xoaddr:iPTR:$dst)
/*232*/     /*Scope*/ 19, /*->252*/
/*233*/       OPC_CheckInteger, 61|128,11/*1469*/, 
/*236*/       OPC_MoveParent,
/*237*/       OPC_RecordChild2, // #1 = $rS
/*238*/       OPC_RecordChild3, // #2 = $dst
/*239*/       OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrIdxOnly:$dst #3 #4
/*242*/       OPC_EmitMergeInputChains1_0,
/*243*/       OPC_MorphNodeTo, TARGET_VAL(PPC::STVEBX), 0|OPFL_Chain,
                  0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
              // Src: (intrinsic_void 1469:iPTR, VRRC:v16i8:$rS, xoaddr:iPTR:$dst) - Complexity = 17
              // Dst: (STVEBX VRRC:v16i8:$rS, xoaddr:iPTR:$dst)
/*252*/     /*Scope*/ 19, /*->272*/
/*253*/       OPC_CheckInteger, 62|128,11/*1470*/, 
/*256*/       OPC_MoveParent,
/*257*/       OPC_RecordChild2, // #1 = $rS
/*258*/       OPC_RecordChild3, // #2 = $dst
/*259*/       OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrIdxOnly:$dst #3 #4
/*262*/       OPC_EmitMergeInputChains1_0,
/*263*/       OPC_MorphNodeTo, TARGET_VAL(PPC::STVEHX), 0|OPFL_Chain,
                  0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
              // Src: (intrinsic_void 1470:iPTR, VRRC:v8i16:$rS, xoaddr:iPTR:$dst) - Complexity = 17
              // Dst: (STVEHX VRRC:v8i16:$rS, xoaddr:iPTR:$dst)
/*272*/     /*Scope*/ 19, /*->292*/
/*273*/       OPC_CheckInteger, 63|128,11/*1471*/, 
/*276*/       OPC_MoveParent,
/*277*/       OPC_RecordChild2, // #1 = $rS
/*278*/       OPC_RecordChild3, // #2 = $dst
/*279*/       OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrIdxOnly:$dst #3 #4
/*282*/       OPC_EmitMergeInputChains1_0,
/*283*/       OPC_MorphNodeTo, TARGET_VAL(PPC::STVEWX), 0|OPFL_Chain,
                  0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
              // Src: (intrinsic_void 1471:iPTR, VRRC:v4i32:$rS, xoaddr:iPTR:$dst) - Complexity = 17
              // Dst: (STVEWX VRRC:v4i32:$rS, xoaddr:iPTR:$dst)
/*292*/     /*Scope*/ 19, /*->312*/
/*293*/       OPC_CheckInteger, 64|128,11/*1472*/, 
/*296*/       OPC_MoveParent,
/*297*/       OPC_RecordChild2, // #1 = $rS
/*298*/       OPC_RecordChild3, // #2 = $dst
/*299*/       OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrIdxOnly:$dst #3 #4
/*302*/       OPC_EmitMergeInputChains1_0,
/*303*/       OPC_MorphNodeTo, TARGET_VAL(PPC::STVX), 0|OPFL_Chain,
                  0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
              // Src: (intrinsic_void 1472:iPTR, VRRC:v4i32:$rS, xoaddr:iPTR:$dst) - Complexity = 17
              // Dst: (STVX VRRC:v4i32:$rS, xoaddr:iPTR:$dst)
/*312*/     /*Scope*/ 19, /*->332*/
/*313*/       OPC_CheckInteger, 65|128,11/*1473*/, 
/*316*/       OPC_MoveParent,
/*317*/       OPC_RecordChild2, // #1 = $rS
/*318*/       OPC_RecordChild3, // #2 = $dst
/*319*/       OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrIdxOnly:$dst #3 #4
/*322*/       OPC_EmitMergeInputChains1_0,
/*323*/       OPC_MorphNodeTo, TARGET_VAL(PPC::STVXL), 0|OPFL_Chain,
                  0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
              // Src: (intrinsic_void 1473:iPTR, VRRC:v4i32:$rS, xoaddr:iPTR:$dst) - Complexity = 17
              // Dst: (STVXL VRRC:v4i32:$rS, xoaddr:iPTR:$dst)
/*332*/     /*Scope*/ 33, /*->366*/
/*333*/       OPC_CheckInteger, 46|128,11/*1454*/, 
/*336*/       OPC_MoveParent,
/*337*/       OPC_RecordChild2, // #1 = $STRM
/*338*/       OPC_MoveChild, 2,
/*340*/       OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*343*/       OPC_MoveParent,
/*344*/       OPC_EmitMergeInputChains1_0,
/*345*/       OPC_EmitInteger, MVT::i32, 0, 
/*348*/       OPC_EmitConvertToTarget, 1,
/*350*/       OPC_EmitInteger, MVT::i32, 0, 
/*353*/       OPC_EmitInteger, MVT::i32, 0, 
/*356*/       OPC_MorphNodeTo, TARGET_VAL(PPC::DSS), 0|OPFL_Chain,
                  0/*#VTs*/, 4/*#Ops*/, 2, 3, 4, 5, 
              // Src: (intrinsic_void 1454:iPTR, (imm:i32):$STRM) - Complexity = 11
              // Dst: (DSS 0:i32, (imm:i32):$STRM, 0:i32, 0:i32)
/*366*/     /*Scope*/ 61, /*->428*/
/*367*/       OPC_CheckInteger, 48|128,11/*1456*/, 
/*370*/       OPC_MoveParent,
/*371*/       OPC_RecordChild2, // #1 = $rA
/*372*/       OPC_Scope, 26, /*->400*/ // 2 children in Scope
/*374*/         OPC_CheckChild2Type, MVT::i32,
/*376*/         OPC_RecordChild3, // #2 = $rB
/*377*/         OPC_RecordChild4, // #3 = $STRM
/*378*/         OPC_MoveChild, 4,
/*380*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*383*/         OPC_MoveParent,
/*384*/         OPC_EmitMergeInputChains1_0,
/*385*/         OPC_EmitInteger, MVT::i32, 0, 
/*388*/         OPC_EmitConvertToTarget, 3,
/*390*/         OPC_MorphNodeTo, TARGET_VAL(PPC::DST), 0|OPFL_Chain,
                    0/*#VTs*/, 4/*#Ops*/, 4, 5, 1, 2, 
                // Src: (intrinsic_void 1456:iPTR, GPRC:i32:$rA, GPRC:i32:$rB, (imm:i32):$STRM) - Complexity = 11
                // Dst: (DST 0:i32, (imm:i32):$STRM, GPRC:i32:$rA, GPRC:i32:$rB)
/*400*/       /*Scope*/ 26, /*->427*/
/*401*/         OPC_CheckChild2Type, MVT::i64,
/*403*/         OPC_RecordChild3, // #2 = $rB
/*404*/         OPC_RecordChild4, // #3 = $STRM
/*405*/         OPC_MoveChild, 4,
/*407*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*410*/         OPC_MoveParent,
/*411*/         OPC_EmitMergeInputChains1_0,
/*412*/         OPC_EmitInteger, MVT::i32, 0, 
/*415*/         OPC_EmitConvertToTarget, 3,
/*417*/         OPC_MorphNodeTo, TARGET_VAL(PPC::DST64), 0|OPFL_Chain,
                    0/*#VTs*/, 4/*#Ops*/, 4, 5, 1, 2, 
                // Src: (intrinsic_void 1456:iPTR, G8RC:i64:$rA, GPRC:i32:$rB, (imm:i32):$STRM) - Complexity = 11
                // Dst: (DST64 0:i32, (imm:i32):$STRM, G8RC:i64:$rA, GPRC:i32:$rB)
/*427*/       0, /*End of Scope*/
/*428*/     /*Scope*/ 61, /*->490*/
/*429*/       OPC_CheckInteger, 51|128,11/*1459*/, 
/*432*/       OPC_MoveParent,
/*433*/       OPC_RecordChild2, // #1 = $rA
/*434*/       OPC_Scope, 26, /*->462*/ // 2 children in Scope
/*436*/         OPC_CheckChild2Type, MVT::i32,
/*438*/         OPC_RecordChild3, // #2 = $rB
/*439*/         OPC_RecordChild4, // #3 = $STRM
/*440*/         OPC_MoveChild, 4,
/*442*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*445*/         OPC_MoveParent,
/*446*/         OPC_EmitMergeInputChains1_0,
/*447*/         OPC_EmitInteger, MVT::i32, 1, 
/*450*/         OPC_EmitConvertToTarget, 3,
/*452*/         OPC_MorphNodeTo, TARGET_VAL(PPC::DSTT), 0|OPFL_Chain,
                    0/*#VTs*/, 4/*#Ops*/, 4, 5, 1, 2, 
                // Src: (intrinsic_void 1459:iPTR, GPRC:i32:$rA, GPRC:i32:$rB, (imm:i32):$STRM) - Complexity = 11
                // Dst: (DSTT 1:i32, (imm:i32):$STRM, GPRC:i32:$rA, GPRC:i32:$rB)
/*462*/       /*Scope*/ 26, /*->489*/
/*463*/         OPC_CheckChild2Type, MVT::i64,
/*465*/         OPC_RecordChild3, // #2 = $rB
/*466*/         OPC_RecordChild4, // #3 = $STRM
/*467*/         OPC_MoveChild, 4,
/*469*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*472*/         OPC_MoveParent,
/*473*/         OPC_EmitMergeInputChains1_0,
/*474*/         OPC_EmitInteger, MVT::i32, 1, 
/*477*/         OPC_EmitConvertToTarget, 3,
/*479*/         OPC_MorphNodeTo, TARGET_VAL(PPC::DSTT64), 0|OPFL_Chain,
                    0/*#VTs*/, 4/*#Ops*/, 4, 5, 1, 2, 
                // Src: (intrinsic_void 1459:iPTR, G8RC:i64:$rA, GPRC:i32:$rB, (imm:i32):$STRM) - Complexity = 11
                // Dst: (DSTT64 1:i32, (imm:i32):$STRM, G8RC:i64:$rA, GPRC:i32:$rB)
/*489*/       0, /*End of Scope*/
/*490*/     /*Scope*/ 61, /*->552*/
/*491*/       OPC_CheckInteger, 49|128,11/*1457*/, 
/*494*/       OPC_MoveParent,
/*495*/       OPC_RecordChild2, // #1 = $rA
/*496*/       OPC_Scope, 26, /*->524*/ // 2 children in Scope
/*498*/         OPC_CheckChild2Type, MVT::i32,
/*500*/         OPC_RecordChild3, // #2 = $rB
/*501*/         OPC_RecordChild4, // #3 = $STRM
/*502*/         OPC_MoveChild, 4,
/*504*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*507*/         OPC_MoveParent,
/*508*/         OPC_EmitMergeInputChains1_0,
/*509*/         OPC_EmitInteger, MVT::i32, 0, 
/*512*/         OPC_EmitConvertToTarget, 3,
/*514*/         OPC_MorphNodeTo, TARGET_VAL(PPC::DSTST), 0|OPFL_Chain,
                    0/*#VTs*/, 4/*#Ops*/, 4, 5, 1, 2, 
                // Src: (intrinsic_void 1457:iPTR, GPRC:i32:$rA, GPRC:i32:$rB, (imm:i32):$STRM) - Complexity = 11
                // Dst: (DSTST 0:i32, (imm:i32):$STRM, GPRC:i32:$rA, GPRC:i32:$rB)
/*524*/       /*Scope*/ 26, /*->551*/
/*525*/         OPC_CheckChild2Type, MVT::i64,
/*527*/         OPC_RecordChild3, // #2 = $rB
/*528*/         OPC_RecordChild4, // #3 = $STRM
/*529*/         OPC_MoveChild, 4,
/*531*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*534*/         OPC_MoveParent,
/*535*/         OPC_EmitMergeInputChains1_0,
/*536*/         OPC_EmitInteger, MVT::i32, 0, 
/*539*/         OPC_EmitConvertToTarget, 3,
/*541*/         OPC_MorphNodeTo, TARGET_VAL(PPC::DSTST64), 0|OPFL_Chain,
                    0/*#VTs*/, 4/*#Ops*/, 4, 5, 1, 2, 
                // Src: (intrinsic_void 1457:iPTR, G8RC:i64:$rA, GPRC:i32:$rB, (imm:i32):$STRM) - Complexity = 11
                // Dst: (DSTST64 0:i32, (imm:i32):$STRM, G8RC:i64:$rA, GPRC:i32:$rB)
/*551*/       0, /*End of Scope*/
/*552*/     /*Scope*/ 61, /*->614*/
/*553*/       OPC_CheckInteger, 50|128,11/*1458*/, 
/*556*/       OPC_MoveParent,
/*557*/       OPC_RecordChild2, // #1 = $rA
/*558*/       OPC_Scope, 26, /*->586*/ // 2 children in Scope
/*560*/         OPC_CheckChild2Type, MVT::i32,
/*562*/         OPC_RecordChild3, // #2 = $rB
/*563*/         OPC_RecordChild4, // #3 = $STRM
/*564*/         OPC_MoveChild, 4,
/*566*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*569*/         OPC_MoveParent,
/*570*/         OPC_EmitMergeInputChains1_0,
/*571*/         OPC_EmitInteger, MVT::i32, 1, 
/*574*/         OPC_EmitConvertToTarget, 3,
/*576*/         OPC_MorphNodeTo, TARGET_VAL(PPC::DSTSTT), 0|OPFL_Chain,
                    0/*#VTs*/, 4/*#Ops*/, 4, 5, 1, 2, 
                // Src: (intrinsic_void 1458:iPTR, GPRC:i32:$rA, GPRC:i32:$rB, (imm:i32):$STRM) - Complexity = 11
                // Dst: (DSTSTT 1:i32, (imm:i32):$STRM, GPRC:i32:$rA, GPRC:i32:$rB)
/*586*/       /*Scope*/ 26, /*->613*/
/*587*/         OPC_CheckChild2Type, MVT::i64,
/*589*/         OPC_RecordChild3, // #2 = $rB
/*590*/         OPC_RecordChild4, // #3 = $STRM
/*591*/         OPC_MoveChild, 4,
/*593*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*596*/         OPC_MoveParent,
/*597*/         OPC_EmitMergeInputChains1_0,
/*598*/         OPC_EmitInteger, MVT::i32, 1, 
/*601*/         OPC_EmitConvertToTarget, 3,
/*603*/         OPC_MorphNodeTo, TARGET_VAL(PPC::DSTSTT64), 0|OPFL_Chain,
                    0/*#VTs*/, 4/*#Ops*/, 4, 5, 1, 2, 
                // Src: (intrinsic_void 1458:iPTR, G8RC:i64:$rA, GPRC:i32:$rB, (imm:i32):$STRM) - Complexity = 11
                // Dst: (DSTSTT64 1:i32, (imm:i32):$STRM, G8RC:i64:$rA, GPRC:i32:$rB)
/*613*/       0, /*End of Scope*/
/*614*/     /*Scope*/ 11, /*->626*/
/*615*/       OPC_CheckInteger, 73|128,12/*1609*/, 
/*618*/       OPC_MoveParent,
/*619*/       OPC_EmitMergeInputChains1_0,
/*620*/       OPC_MorphNodeTo, TARGET_VAL(PPC::SYNC), 0|OPFL_Chain,
                  0/*#VTs*/, 0/*#Ops*/, 
              // Src: (intrinsic_void 1609:iPTR) - Complexity = 8
              // Dst: (SYNC)
/*626*/     /*Scope*/ 13, /*->640*/
/*627*/       OPC_CheckInteger, 60|128,11/*1468*/, 
/*630*/       OPC_MoveParent,
/*631*/       OPC_RecordChild2, // #1 = $vB
/*632*/       OPC_EmitMergeInputChains1_0,
/*633*/       OPC_MorphNodeTo, TARGET_VAL(PPC::MTVSCR), 0|OPFL_Chain,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (intrinsic_void 1468:iPTR, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (MTVSCR VRRC:v4i32:$vB)
/*640*/     /*Scope*/ 27, /*->668*/
/*641*/       OPC_CheckInteger, 47|128,11/*1455*/, 
/*644*/       OPC_MoveParent,
/*645*/       OPC_EmitMergeInputChains1_0,
/*646*/       OPC_EmitInteger, MVT::i32, 1, 
/*649*/       OPC_EmitInteger, MVT::i32, 0, 
/*652*/       OPC_EmitInteger, MVT::i32, 0, 
/*655*/       OPC_EmitInteger, MVT::i32, 0, 
/*658*/       OPC_MorphNodeTo, TARGET_VAL(PPC::DSSALL), 0|OPFL_Chain,
                  0/*#VTs*/, 4/*#Ops*/, 1, 2, 3, 4, 
              // Src: (intrinsic_void 1455:iPTR) - Complexity = 8
              // Dst: (DSSALL 1:i32, 0:i32, 0:i32, 0:i32)
/*668*/     0, /*End of Scope*/
          /*SwitchOpcode*/ 59|128,4/*571*/,  TARGET_VAL(ISD::ADD),// ->1244
/*673*/     OPC_Scope, 49|128,1/*177*/, /*->853*/ // 3 children in Scope
/*676*/       OPC_RecordChild0, // #0 = $rA
/*677*/       OPC_MoveChild, 1,
/*679*/       OPC_SwitchOpcode /*2 cases */, 24,  TARGET_VAL(PPCISD::Lo),// ->707
/*683*/         OPC_RecordChild0, // #1 = $sym
/*684*/         OPC_MoveChild, 0,
/*686*/         OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalAddress),
/*689*/         OPC_MoveParent,
/*690*/         OPC_MoveChild, 1,
/*692*/         OPC_CheckInteger, 0, 
/*694*/         OPC_MoveParent,
/*695*/         OPC_MoveParent,
/*696*/         OPC_CheckType, MVT::i32,
/*698*/         OPC_MorphNodeTo, TARGET_VAL(PPC::LA), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (add:i32 GPRC:i32:$rA, (PPClo:i32 (tglobaladdr:i32):$sym, 0:i32)) - Complexity = 14
                // Dst: (LA:i32 GPRC:i32:$rA, (tglobaladdr:i32):$sym)
              /*SwitchOpcode*/ 13|128,1/*141*/,  TARGET_VAL(PPCISD::Hi),// ->852
/*711*/         OPC_RecordChild0, // #1 = $g
/*712*/         OPC_MoveChild, 0,
/*714*/         OPC_SwitchOpcode /*4 cases */, 31,  TARGET_VAL(ISD::TargetGlobalAddress),// ->749
/*718*/           OPC_MoveParent,
/*719*/           OPC_MoveChild, 1,
/*721*/           OPC_CheckInteger, 0, 
/*723*/           OPC_MoveParent,
/*724*/           OPC_MoveParent,
/*725*/           OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->737
/*728*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i32 GPRC:i32:$in, (PPChi:i32 (tglobaladdr:i32):$g, 0:i32)) - Complexity = 14
                    // Dst: (ADDIS:i32 GPRC:i32:$in, (tglobaladdr:i32):$g)
                  /*SwitchType*/ 9,  MVT::i64,// ->748
/*739*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS8), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i64 G8RC:i64:$in, (PPChi:i64 (tglobaladdr:i64):$g, 0:i64)) - Complexity = 14
                    // Dst: (ADDIS8:i64 G8RC:i64:$in, (tglobaladdr:i64):$g)
                  0, // EndSwitchType
                /*SwitchOpcode*/ 31,  TARGET_VAL(ISD::TargetConstantPool),// ->783
/*752*/           OPC_MoveParent,
/*753*/           OPC_MoveChild, 1,
/*755*/           OPC_CheckInteger, 0, 
/*757*/           OPC_MoveParent,
/*758*/           OPC_MoveParent,
/*759*/           OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->771
/*762*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i32 GPRC:i32:$in, (PPChi:i32 (tconstpool:i32):$g, 0:i32)) - Complexity = 14
                    // Dst: (ADDIS:i32 GPRC:i32:$in, (tconstpool:i32):$g)
                  /*SwitchType*/ 9,  MVT::i64,// ->782
/*773*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS8), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i64 G8RC:i64:$in, (PPChi:i64 (tconstpool:i64):$g, 0:i64)) - Complexity = 14
                    // Dst: (ADDIS8:i64 G8RC:i64:$in, (tconstpool:i64):$g)
                  0, // EndSwitchType
                /*SwitchOpcode*/ 31,  TARGET_VAL(ISD::TargetJumpTable),// ->817
/*786*/           OPC_MoveParent,
/*787*/           OPC_MoveChild, 1,
/*789*/           OPC_CheckInteger, 0, 
/*791*/           OPC_MoveParent,
/*792*/           OPC_MoveParent,
/*793*/           OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->805
/*796*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i32 GPRC:i32:$in, (PPChi:i32 (tjumptable:i32):$g, 0:i32)) - Complexity = 14
                    // Dst: (ADDIS:i32 GPRC:i32:$in, (tjumptable:i32):$g)
                  /*SwitchType*/ 9,  MVT::i64,// ->816
/*807*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS8), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i64 G8RC:i64:$in, (PPChi:i64 (tjumptable:i64):$g, 0:i64)) - Complexity = 14
                    // Dst: (ADDIS8:i64 G8RC:i64:$in, (tjumptable:i64):$g)
                  0, // EndSwitchType
                /*SwitchOpcode*/ 31,  TARGET_VAL(ISD::TargetBlockAddress),// ->851
/*820*/           OPC_MoveParent,
/*821*/           OPC_MoveChild, 1,
/*823*/           OPC_CheckInteger, 0, 
/*825*/           OPC_MoveParent,
/*826*/           OPC_MoveParent,
/*827*/           OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->839
/*830*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i32 GPRC:i32:$in, (PPChi:i32 (tblockaddress:i32):$g, 0:i32)) - Complexity = 14
                    // Dst: (ADDIS:i32 GPRC:i32:$in, (tblockaddress:i32):$g)
                  /*SwitchType*/ 9,  MVT::i64,// ->850
/*841*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS8), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i64 G8RC:i64:$in, (PPChi:i64 (tblockaddress:i64):$g, 0:i64)) - Complexity = 14
                    // Dst: (ADDIS8:i64 G8RC:i64:$in, (tblockaddress:i64):$g)
                  0, // EndSwitchType
                0, // EndSwitchOpcode
              0, // EndSwitchOpcode
/*853*/     /*Scope*/ 53|128,1/*181*/, /*->1036*/
/*855*/       OPC_MoveChild, 0,
/*857*/       OPC_SwitchOpcode /*2 cases */, 25,  TARGET_VAL(PPCISD::Lo),// ->886
/*861*/         OPC_RecordChild0, // #0 = $sym
/*862*/         OPC_MoveChild, 0,
/*864*/         OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalAddress),
/*867*/         OPC_MoveParent,
/*868*/         OPC_MoveChild, 1,
/*870*/         OPC_CheckInteger, 0, 
/*872*/         OPC_MoveParent,
/*873*/         OPC_MoveParent,
/*874*/         OPC_RecordChild1, // #1 = $rA
/*875*/         OPC_CheckType, MVT::i32,
/*877*/         OPC_MorphNodeTo, TARGET_VAL(PPC::LA), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (add:i32 (PPClo:i32 (tglobaladdr:i32):$sym, 0:i32), GPRC:i32:$rA) - Complexity = 14
                // Dst: (LA:i32 GPRC:i32:$rA, (tglobaladdr:i32):$sym)
              /*SwitchOpcode*/ 17|128,1/*145*/,  TARGET_VAL(PPCISD::Hi),// ->1035
/*890*/         OPC_RecordChild0, // #0 = $g
/*891*/         OPC_MoveChild, 0,
/*893*/         OPC_SwitchOpcode /*4 cases */, 32,  TARGET_VAL(ISD::TargetGlobalAddress),// ->929
/*897*/           OPC_MoveParent,
/*898*/           OPC_MoveChild, 1,
/*900*/           OPC_CheckInteger, 0, 
/*902*/           OPC_MoveParent,
/*903*/           OPC_MoveParent,
/*904*/           OPC_RecordChild1, // #1 = $in
/*905*/           OPC_SwitchType /*2 cases */, 9,  MVT::i64,// ->917
/*908*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS8), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i64 (PPChi:i64 (tglobaladdr:i64):$g, 0:i64), G8RC:i64:$in) - Complexity = 14
                    // Dst: (ADDIS8:i64 G8RC:i64:$in, (tglobaladdr:i64):$g)
                  /*SwitchType*/ 9,  MVT::i32,// ->928
/*919*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i32 (PPChi:i32 (tglobaladdr:i32):$g, 0:i32), GPRC:i32:$in) - Complexity = 14
                    // Dst: (ADDIS:i32 GPRC:i32:$in, (tglobaladdr:i32):$g)
                  0, // EndSwitchType
                /*SwitchOpcode*/ 32,  TARGET_VAL(ISD::TargetConstantPool),// ->964
/*932*/           OPC_MoveParent,
/*933*/           OPC_MoveChild, 1,
/*935*/           OPC_CheckInteger, 0, 
/*937*/           OPC_MoveParent,
/*938*/           OPC_MoveParent,
/*939*/           OPC_RecordChild1, // #1 = $in
/*940*/           OPC_SwitchType /*2 cases */, 9,  MVT::i64,// ->952
/*943*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS8), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i64 (PPChi:i64 (tconstpool:i64):$g, 0:i64), G8RC:i64:$in) - Complexity = 14
                    // Dst: (ADDIS8:i64 G8RC:i64:$in, (tconstpool:i64):$g)
                  /*SwitchType*/ 9,  MVT::i32,// ->963
/*954*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i32 (PPChi:i32 (tconstpool:i32):$g, 0:i32), GPRC:i32:$in) - Complexity = 14
                    // Dst: (ADDIS:i32 GPRC:i32:$in, (tconstpool:i32):$g)
                  0, // EndSwitchType
                /*SwitchOpcode*/ 32,  TARGET_VAL(ISD::TargetJumpTable),// ->999
/*967*/           OPC_MoveParent,
/*968*/           OPC_MoveChild, 1,
/*970*/           OPC_CheckInteger, 0, 
/*972*/           OPC_MoveParent,
/*973*/           OPC_MoveParent,
/*974*/           OPC_RecordChild1, // #1 = $in
/*975*/           OPC_SwitchType /*2 cases */, 9,  MVT::i64,// ->987
/*978*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS8), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i64 (PPChi:i64 (tjumptable:i64):$g, 0:i64), G8RC:i64:$in) - Complexity = 14
                    // Dst: (ADDIS8:i64 G8RC:i64:$in, (tjumptable:i64):$g)
                  /*SwitchType*/ 9,  MVT::i32,// ->998
/*989*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i32 (PPChi:i32 (tjumptable:i32):$g, 0:i32), GPRC:i32:$in) - Complexity = 14
                    // Dst: (ADDIS:i32 GPRC:i32:$in, (tjumptable:i32):$g)
                  0, // EndSwitchType
                /*SwitchOpcode*/ 32,  TARGET_VAL(ISD::TargetBlockAddress),// ->1034
/*1002*/          OPC_MoveParent,
/*1003*/          OPC_MoveChild, 1,
/*1005*/          OPC_CheckInteger, 0, 
/*1007*/          OPC_MoveParent,
/*1008*/          OPC_MoveParent,
/*1009*/          OPC_RecordChild1, // #1 = $in
/*1010*/          OPC_SwitchType /*2 cases */, 9,  MVT::i64,// ->1022
/*1013*/            OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS8), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i64 (PPChi:i64 (tblockaddress:i64):$g, 0:i64), G8RC:i64:$in) - Complexity = 14
                    // Dst: (ADDIS8:i64 G8RC:i64:$in, (tblockaddress:i64):$g)
                  /*SwitchType*/ 9,  MVT::i32,// ->1033
/*1024*/            OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i32 (PPChi:i32 (tblockaddress:i32):$g, 0:i32), GPRC:i32:$in) - Complexity = 14
                    // Dst: (ADDIS:i32 GPRC:i32:$in, (tblockaddress:i32):$g)
                  0, // EndSwitchType
                0, // EndSwitchOpcode
              0, // EndSwitchOpcode
/*1036*/    /*Scope*/ 77|128,1/*205*/, /*->1243*/
/*1038*/      OPC_RecordChild0, // #0 = $rA
/*1039*/      OPC_RecordChild1, // #1 = $imm
/*1040*/      OPC_Scope, 11|128,1/*139*/, /*->1182*/ // 6 children in Scope
/*1043*/        OPC_MoveChild, 1,
/*1045*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1048*/        OPC_Scope, 29, /*->1079*/ // 5 children in Scope
/*1050*/          OPC_CheckPredicate, 0, // Predicate_immSExt16
/*1052*/          OPC_MoveParent,
/*1053*/          OPC_CheckType, MVT::i32,
/*1055*/          OPC_EmitConvertToTarget, 1,
/*1057*/          OPC_Scope, 9, /*->1068*/ // 2 children in Scope
/*1059*/            OPC_MorphNodeTo, TARGET_VAL(PPC::ADDI), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                    // Src: (add:i32 GPRC:i32:$rA, (imm:i32)<<P:Predicate_immSExt16>>:$imm) - Complexity = 7
                    // Dst: (ADDI:i32 GPRC:i32:$rA, (imm:i32):$imm)
/*1068*/          /*Scope*/ 9, /*->1078*/
/*1069*/            OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIL), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                    // Src: (add:i32 GPRC:i32:$rA, (imm:i32)<<P:Predicate_immSExt16>>:$imm) - Complexity = 7
                    // Dst: (ADDIL:i32 GPRC:i32:$rA, (imm:i32):$imm)
/*1078*/          0, /*End of Scope*/
/*1079*/        /*Scope*/ 19, /*->1099*/
/*1080*/          OPC_CheckPredicate, 1, // Predicate_imm16ShiftedSExt
/*1082*/          OPC_MoveParent,
/*1083*/          OPC_CheckType, MVT::i32,
/*1085*/          OPC_EmitConvertToTarget, 1,
/*1087*/          OPC_EmitNodeXForm, 0, 2, // HI16
/*1090*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (add:i32 GPRC:i32:$rA, (imm:i32)<<P:Predicate_imm16ShiftedSExt>><<X:HI16>>:$imm) - Complexity = 7
                  // Dst: (ADDIS:i32 GPRC:i32:$rA, (HI16:i32 (imm:i32):$imm))
/*1099*/        /*Scope*/ 29, /*->1129*/
/*1100*/          OPC_CheckPredicate, 0, // Predicate_immSExt16
/*1102*/          OPC_MoveParent,
/*1103*/          OPC_CheckType, MVT::i64,
/*1105*/          OPC_EmitConvertToTarget, 1,
/*1107*/          OPC_Scope, 9, /*->1118*/ // 2 children in Scope
/*1109*/            OPC_MorphNodeTo, TARGET_VAL(PPC::ADDI8), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 2, 
                    // Src: (add:i64 G8RC:i64:$rA, (imm:i64)<<P:Predicate_immSExt16>>:$imm) - Complexity = 7
                    // Dst: (ADDI8:i64 G8RC:i64:$rA, (imm:i64):$imm)
/*1118*/          /*Scope*/ 9, /*->1128*/
/*1119*/            OPC_MorphNodeTo, TARGET_VAL(PPC::ADDI8L), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 2, 
                    // Src: (add:i64 G8RC:i64:$rA, (imm:i64)<<P:Predicate_immSExt16>>:$imm) - Complexity = 7
                    // Dst: (ADDI8L:i64 G8RC:i64:$rA, (imm:i64):$imm)
/*1128*/          0, /*End of Scope*/
/*1129*/        /*Scope*/ 19, /*->1149*/
/*1130*/          OPC_CheckPredicate, 1, // Predicate_imm16ShiftedSExt
/*1132*/          OPC_MoveParent,
/*1133*/          OPC_CheckType, MVT::i64,
/*1135*/          OPC_EmitConvertToTarget, 1,
/*1137*/          OPC_EmitNodeXForm, 0, 2, // HI16
/*1140*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS8), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                  // Src: (add:i64 G8RC:i64:$rA, (imm:i64)<<P:Predicate_imm16ShiftedSExt>><<X:HI16>>:$imm) - Complexity = 7
                  // Dst: (ADDIS8:i64 G8RC:i64:$rA, (HI16:i64 (imm:i64):$imm))
/*1149*/        /*Scope*/ 31, /*->1181*/
/*1150*/          OPC_MoveParent,
/*1151*/          OPC_CheckType, MVT::i32,
/*1153*/          OPC_EmitConvertToTarget, 1,
/*1155*/          OPC_EmitNodeXForm, 1, 2, // LO16
/*1158*/          OPC_EmitNode, TARGET_VAL(PPC::ADDI), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3,  // Results = #4
/*1167*/          OPC_EmitConvertToTarget, 1,
/*1169*/          OPC_EmitNodeXForm, 2, 5, // HA16
/*1172*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 4, 6, 
                  // Src: (add:i32 GPRC:i32:$in, (imm:i32):$imm) - Complexity = 6
                  // Dst: (ADDIS:i32 (ADDI:i32 GPRC:i32:$in, (LO16:i32 (imm:i32):$imm)), (HA16:i32 (imm:i32):$imm))
/*1181*/        0, /*End of Scope*/
/*1182*/      /*Scope*/ 11, /*->1194*/
/*1183*/        OPC_CheckType, MVT::i32,
/*1185*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ADD4), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (add:i32 GPRC:i32:$rA, GPRC:i32:$rB) - Complexity = 3
                // Dst: (ADD4:i32 GPRC:i32:$rA, GPRC:i32:$rB)
/*1194*/      /*Scope*/ 11, /*->1206*/
/*1195*/        OPC_CheckType, MVT::i64,
/*1197*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ADD8), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (add:i64 G8RC:i64:$rA, G8RC:i64:$rB) - Complexity = 3
                // Dst: (ADD8:i64 G8RC:i64:$rA, G8RC:i64:$rB)
/*1206*/      /*Scope*/ 11, /*->1218*/
/*1207*/        OPC_CheckType, MVT::v16i8,
/*1209*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VADDUBM), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
                // Src: (add:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB) - Complexity = 3
                // Dst: (VADDUBM:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*1218*/      /*Scope*/ 11, /*->1230*/
/*1219*/        OPC_CheckType, MVT::v8i16,
/*1221*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VADDUHM), 0,
                    1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
                // Src: (add:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB) - Complexity = 3
                // Dst: (VADDUHM:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*1230*/      /*Scope*/ 11, /*->1242*/
/*1231*/        OPC_CheckType, MVT::v4i32,
/*1233*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VADDUWM), 0,
                    1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
                // Src: (add:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 3
                // Dst: (VADDUWM:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*1242*/      0, /*End of Scope*/
/*1243*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 72|128,6/*840*/,  TARGET_VAL(ISD::LOAD),// ->2088
/*1248*/    OPC_RecordMemRef,
/*1249*/    OPC_RecordNode,   // #0 = 'ld' chained node
/*1250*/    OPC_RecordChild1, // #1 = $src
/*1251*/    OPC_CheckPredicate, 2, // Predicate_unindexedload
/*1253*/    OPC_Scope, 19, /*->1274*/ // 18 children in Scope
/*1255*/      OPC_CheckPredicate, 3, // Predicate_zextload
/*1257*/      OPC_CheckPredicate, 4, // Predicate_zextloadi8
/*1259*/      OPC_CheckType, MVT::i32,
/*1261*/      OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1264*/      OPC_EmitMergeInputChains1_0,
/*1265*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LBZ), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (ld:i32 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 13
              // Dst: (LBZ:i32 iaddr:iPTR:$src)
/*1274*/    /*Scope*/ 19, /*->1294*/
/*1275*/      OPC_CheckPredicate, 5, // Predicate_sextload
/*1277*/      OPC_CheckPredicate, 6, // Predicate_sextloadi16
/*1279*/      OPC_CheckType, MVT::i32,
/*1281*/      OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1284*/      OPC_EmitMergeInputChains1_0,
/*1285*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LHA), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (ld:i32 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 13
              // Dst: (LHA:i32 iaddr:iPTR:$src)
/*1294*/    /*Scope*/ 19, /*->1314*/
/*1295*/      OPC_CheckPredicate, 3, // Predicate_zextload
/*1297*/      OPC_CheckPredicate, 7, // Predicate_zextloadi16
/*1299*/      OPC_CheckType, MVT::i32,
/*1301*/      OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1304*/      OPC_EmitMergeInputChains1_0,
/*1305*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LHZ), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (ld:i32 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 13
              // Dst: (LHZ:i32 iaddr:iPTR:$src)
/*1314*/    /*Scope*/ 17, /*->1332*/
/*1315*/      OPC_CheckPredicate, 8, // Predicate_load
/*1317*/      OPC_CheckType, MVT::i32,
/*1319*/      OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1322*/      OPC_EmitMergeInputChains1_0,
/*1323*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LWZ), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (ld:i32 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
              // Dst: (LWZ:i32 iaddr:iPTR:$src)
/*1332*/    /*Scope*/ 19, /*->1352*/
/*1333*/      OPC_CheckPredicate, 3, // Predicate_zextload
/*1335*/      OPC_CheckPredicate, 4, // Predicate_zextloadi8
/*1337*/      OPC_CheckType, MVT::i32,
/*1339*/      OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1342*/      OPC_EmitMergeInputChains1_0,
/*1343*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LBZX), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (ld:i32 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 13
              // Dst: (LBZX:i32 xaddr:iPTR:$src)
/*1352*/    /*Scope*/ 19, /*->1372*/
/*1353*/      OPC_CheckPredicate, 5, // Predicate_sextload
/*1355*/      OPC_CheckPredicate, 6, // Predicate_sextloadi16
/*1357*/      OPC_CheckType, MVT::i32,
/*1359*/      OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1362*/      OPC_EmitMergeInputChains1_0,
/*1363*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LHAX), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (ld:i32 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 13
              // Dst: (LHAX:i32 xaddr:iPTR:$src)
/*1372*/    /*Scope*/ 19, /*->1392*/
/*1373*/      OPC_CheckPredicate, 3, // Predicate_zextload
/*1375*/      OPC_CheckPredicate, 7, // Predicate_zextloadi16
/*1377*/      OPC_CheckType, MVT::i32,
/*1379*/      OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1382*/      OPC_EmitMergeInputChains1_0,
/*1383*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LHZX), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (ld:i32 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 13
              // Dst: (LHZX:i32 xaddr:iPTR:$src)
/*1392*/    /*Scope*/ 17, /*->1410*/
/*1393*/      OPC_CheckPredicate, 8, // Predicate_load
/*1395*/      OPC_CheckType, MVT::i32,
/*1397*/      OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1400*/      OPC_EmitMergeInputChains1_0,
/*1401*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LWZX), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (ld:i32 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
              // Dst: (LWZX:i32 xaddr:iPTR:$src)
/*1410*/    /*Scope*/ 36, /*->1447*/
/*1411*/      OPC_CheckPredicate, 3, // Predicate_zextload
/*1413*/      OPC_CheckPredicate, 9, // Predicate_zextloadi1
/*1415*/      OPC_CheckType, MVT::i32,
/*1417*/      OPC_Scope, 13, /*->1432*/ // 2 children in Scope
/*1419*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1422*/        OPC_EmitMergeInputChains1_0,
/*1423*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LBZ), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i32 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi1>> - Complexity = 13
                // Dst: (LBZ:i32 iaddr:iPTR:$src)
/*1432*/      /*Scope*/ 13, /*->1446*/
/*1433*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1436*/        OPC_EmitMergeInputChains1_0,
/*1437*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LBZX), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i32 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi1>> - Complexity = 13
                // Dst: (LBZX:i32 xaddr:iPTR:$src)
/*1446*/      0, /*End of Scope*/
/*1447*/    /*Scope*/ 105, /*->1553*/
/*1448*/      OPC_CheckPredicate, 10, // Predicate_extload
/*1450*/      OPC_CheckType, MVT::i32,
/*1452*/      OPC_Scope, 32, /*->1486*/ // 3 children in Scope
/*1454*/        OPC_CheckPredicate, 11, // Predicate_extloadi1
/*1456*/        OPC_Scope, 13, /*->1471*/ // 2 children in Scope
/*1458*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1461*/          OPC_EmitMergeInputChains1_0,
/*1462*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LBZ), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi1>> - Complexity = 13
                  // Dst: (LBZ:i32 iaddr:iPTR:$src)
/*1471*/        /*Scope*/ 13, /*->1485*/
/*1472*/          OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1475*/          OPC_EmitMergeInputChains1_0,
/*1476*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LBZX), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi1>> - Complexity = 13
                  // Dst: (LBZX:i32 xaddr:iPTR:$src)
/*1485*/        0, /*End of Scope*/
/*1486*/      /*Scope*/ 32, /*->1519*/
/*1487*/        OPC_CheckPredicate, 12, // Predicate_extloadi8
/*1489*/        OPC_Scope, 13, /*->1504*/ // 2 children in Scope
/*1491*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1494*/          OPC_EmitMergeInputChains1_0,
/*1495*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LBZ), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 13
                  // Dst: (LBZ:i32 iaddr:iPTR:$src)
/*1504*/        /*Scope*/ 13, /*->1518*/
/*1505*/          OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1508*/          OPC_EmitMergeInputChains1_0,
/*1509*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LBZX), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 13
                  // Dst: (LBZX:i32 xaddr:iPTR:$src)
/*1518*/        0, /*End of Scope*/
/*1519*/      /*Scope*/ 32, /*->1552*/
/*1520*/        OPC_CheckPredicate, 13, // Predicate_extloadi16
/*1522*/        OPC_Scope, 13, /*->1537*/ // 2 children in Scope
/*1524*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1527*/          OPC_EmitMergeInputChains1_0,
/*1528*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LHZ), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 13
                  // Dst: (LHZ:i32 iaddr:iPTR:$src)
/*1537*/        /*Scope*/ 13, /*->1551*/
/*1538*/          OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1541*/          OPC_EmitMergeInputChains1_0,
/*1542*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LHZX), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 13
                  // Dst: (LHZX:i32 xaddr:iPTR:$src)
/*1551*/        0, /*End of Scope*/
/*1552*/      0, /*End of Scope*/
/*1553*/    /*Scope*/ 70, /*->1624*/
/*1554*/      OPC_CheckPredicate, 5, // Predicate_sextload
/*1556*/      OPC_CheckType, MVT::i64,
/*1558*/      OPC_Scope, 15, /*->1575*/ // 4 children in Scope
/*1560*/        OPC_CheckPredicate, 6, // Predicate_sextloadi16
/*1562*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1565*/        OPC_EmitMergeInputChains1_0,
/*1566*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LHA8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 13
                // Dst: (LHA8:i64 iaddr:iPTR:$src)
/*1575*/      /*Scope*/ 15, /*->1591*/
/*1576*/        OPC_CheckPredicate, 14, // Predicate_sextloadi32
/*1578*/        OPC_CheckComplexPat, /*CP*/3, /*#*/1, // SelectAddrImmShift:$src #2 #3
/*1581*/        OPC_EmitMergeInputChains1_0,
/*1582*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LWA), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 ixaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi32>> - Complexity = 13
                // Dst: (LWA:i64 ixaddr:iPTR:$src)
/*1591*/      /*Scope*/ 15, /*->1607*/
/*1592*/        OPC_CheckPredicate, 6, // Predicate_sextloadi16
/*1594*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1597*/        OPC_EmitMergeInputChains1_0,
/*1598*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LHAX8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 13
                // Dst: (LHAX8:i64 xaddr:iPTR:$src)
/*1607*/      /*Scope*/ 15, /*->1623*/
/*1608*/        OPC_CheckPredicate, 14, // Predicate_sextloadi32
/*1610*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1613*/        OPC_EmitMergeInputChains1_0,
/*1614*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LWAX), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi32>> - Complexity = 13
                // Dst: (LWAX:i64 xaddr:iPTR:$src)
/*1623*/      0, /*End of Scope*/
/*1624*/    /*Scope*/ 102, /*->1727*/
/*1625*/      OPC_CheckPredicate, 3, // Predicate_zextload
/*1627*/      OPC_CheckType, MVT::i64,
/*1629*/      OPC_Scope, 15, /*->1646*/ // 6 children in Scope
/*1631*/        OPC_CheckPredicate, 4, // Predicate_zextloadi8
/*1633*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1636*/        OPC_EmitMergeInputChains1_0,
/*1637*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LBZ8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 13
                // Dst: (LBZ8:i64 iaddr:iPTR:$src)
/*1646*/      /*Scope*/ 15, /*->1662*/
/*1647*/        OPC_CheckPredicate, 7, // Predicate_zextloadi16
/*1649*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1652*/        OPC_EmitMergeInputChains1_0,
/*1653*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LHZ8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 13
                // Dst: (LHZ8:i64 iaddr:iPTR:$src)
/*1662*/      /*Scope*/ 15, /*->1678*/
/*1663*/        OPC_CheckPredicate, 15, // Predicate_zextloadi32
/*1665*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1668*/        OPC_EmitMergeInputChains1_0,
/*1669*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LWZ8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi32>> - Complexity = 13
                // Dst: (LWZ8:i64 iaddr:iPTR:$src)
/*1678*/      /*Scope*/ 15, /*->1694*/
/*1679*/        OPC_CheckPredicate, 4, // Predicate_zextloadi8
/*1681*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1684*/        OPC_EmitMergeInputChains1_0,
/*1685*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LBZX8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 13
                // Dst: (LBZX8:i64 xaddr:iPTR:$src)
/*1694*/      /*Scope*/ 15, /*->1710*/
/*1695*/        OPC_CheckPredicate, 7, // Predicate_zextloadi16
/*1697*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1700*/        OPC_EmitMergeInputChains1_0,
/*1701*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LHZX8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 13
                // Dst: (LHZX8:i64 xaddr:iPTR:$src)
/*1710*/      /*Scope*/ 15, /*->1726*/
/*1711*/        OPC_CheckPredicate, 15, // Predicate_zextloadi32
/*1713*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1716*/        OPC_EmitMergeInputChains1_0,
/*1717*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LWZX8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi32>> - Complexity = 13
                // Dst: (LWZX8:i64 xaddr:iPTR:$src)
/*1726*/      0, /*End of Scope*/
/*1727*/    /*Scope*/ 34, /*->1762*/
/*1728*/      OPC_CheckPredicate, 8, // Predicate_load
/*1730*/      OPC_CheckType, MVT::i64,
/*1732*/      OPC_Scope, 13, /*->1747*/ // 2 children in Scope
/*1734*/        OPC_CheckComplexPat, /*CP*/3, /*#*/1, // SelectAddrImmShift:$src #2 #3
/*1737*/        OPC_EmitMergeInputChains1_0,
/*1738*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LD), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 ixaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                // Dst: (LD:i64 ixaddr:iPTR:$src)
/*1747*/      /*Scope*/ 13, /*->1761*/
/*1748*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1751*/        OPC_EmitMergeInputChains1_0,
/*1752*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LDX), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                // Dst: (LDX:i64 xaddr:iPTR:$src)
/*1761*/      0, /*End of Scope*/
/*1762*/    /*Scope*/ 36, /*->1799*/
/*1763*/      OPC_CheckPredicate, 3, // Predicate_zextload
/*1765*/      OPC_CheckPredicate, 9, // Predicate_zextloadi1
/*1767*/      OPC_CheckType, MVT::i64,
/*1769*/      OPC_Scope, 13, /*->1784*/ // 2 children in Scope
/*1771*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1774*/        OPC_EmitMergeInputChains1_0,
/*1775*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LBZ8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi1>> - Complexity = 13
                // Dst: (LBZ8:i64 iaddr:iPTR:$src)
/*1784*/      /*Scope*/ 13, /*->1798*/
/*1785*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1788*/        OPC_EmitMergeInputChains1_0,
/*1789*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LBZX8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi1>> - Complexity = 13
                // Dst: (LBZX8:i64 xaddr:iPTR:$src)
/*1798*/      0, /*End of Scope*/
/*1799*/    /*Scope*/ 10|128,1/*138*/, /*->1939*/
/*1801*/      OPC_CheckPredicate, 10, // Predicate_extload
/*1803*/      OPC_CheckType, MVT::i64,
/*1805*/      OPC_Scope, 32, /*->1839*/ // 4 children in Scope
/*1807*/        OPC_CheckPredicate, 11, // Predicate_extloadi1
/*1809*/        OPC_Scope, 13, /*->1824*/ // 2 children in Scope
/*1811*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1814*/          OPC_EmitMergeInputChains1_0,
/*1815*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LBZ8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi1>> - Complexity = 13
                  // Dst: (LBZ8:i64 iaddr:iPTR:$src)
/*1824*/        /*Scope*/ 13, /*->1838*/
/*1825*/          OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1828*/          OPC_EmitMergeInputChains1_0,
/*1829*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LBZX8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi1>> - Complexity = 13
                  // Dst: (LBZX8:i64 xaddr:iPTR:$src)
/*1838*/        0, /*End of Scope*/
/*1839*/      /*Scope*/ 32, /*->1872*/
/*1840*/        OPC_CheckPredicate, 12, // Predicate_extloadi8
/*1842*/        OPC_Scope, 13, /*->1857*/ // 2 children in Scope
/*1844*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1847*/          OPC_EmitMergeInputChains1_0,
/*1848*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LBZ8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 13
                  // Dst: (LBZ8:i64 iaddr:iPTR:$src)
/*1857*/        /*Scope*/ 13, /*->1871*/
/*1858*/          OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1861*/          OPC_EmitMergeInputChains1_0,
/*1862*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LBZX8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 13
                  // Dst: (LBZX8:i64 xaddr:iPTR:$src)
/*1871*/        0, /*End of Scope*/
/*1872*/      /*Scope*/ 32, /*->1905*/
/*1873*/        OPC_CheckPredicate, 13, // Predicate_extloadi16
/*1875*/        OPC_Scope, 13, /*->1890*/ // 2 children in Scope
/*1877*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1880*/          OPC_EmitMergeInputChains1_0,
/*1881*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LHZ8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 13
                  // Dst: (LHZ8:i64 iaddr:iPTR:$src)
/*1890*/        /*Scope*/ 13, /*->1904*/
/*1891*/          OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1894*/          OPC_EmitMergeInputChains1_0,
/*1895*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LHZX8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 13
                  // Dst: (LHZX8:i64 xaddr:iPTR:$src)
/*1904*/        0, /*End of Scope*/
/*1905*/      /*Scope*/ 32, /*->1938*/
/*1906*/        OPC_CheckPredicate, 16, // Predicate_extloadi32
/*1908*/        OPC_Scope, 13, /*->1923*/ // 2 children in Scope
/*1910*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1913*/          OPC_EmitMergeInputChains1_0,
/*1914*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LWZ8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi32>> - Complexity = 13
                  // Dst: (LWZ8:i64 iaddr:iPTR:$src)
/*1923*/        /*Scope*/ 13, /*->1937*/
/*1924*/          OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1927*/          OPC_EmitMergeInputChains1_0,
/*1928*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LWZX8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi32>> - Complexity = 13
                  // Dst: (LWZX8:i64 xaddr:iPTR:$src)
/*1937*/        0, /*End of Scope*/
/*1938*/      0, /*End of Scope*/
/*1939*/    /*Scope*/ 68, /*->2008*/
/*1940*/      OPC_CheckPredicate, 8, // Predicate_load
/*1942*/      OPC_SwitchType /*2 cases */, 30,  MVT::f32,// ->1975
/*1945*/        OPC_Scope, 13, /*->1960*/ // 2 children in Scope
/*1947*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1950*/          OPC_EmitMergeInputChains1_0,
/*1951*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LFS), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:f32 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                  // Dst: (LFS:f32 iaddr:iPTR:$src)
/*1960*/        /*Scope*/ 13, /*->1974*/
/*1961*/          OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1964*/          OPC_EmitMergeInputChains1_0,
/*1965*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LFSX), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:f32 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                  // Dst: (LFSX:f32 xaddr:iPTR:$src)
/*1974*/        0, /*End of Scope*/
              /*SwitchType*/ 30,  MVT::f64,// ->2007
/*1977*/        OPC_Scope, 13, /*->1992*/ // 2 children in Scope
/*1979*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1982*/          OPC_EmitMergeInputChains1_0,
/*1983*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LFD), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:f64 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                  // Dst: (LFD:f64 iaddr:iPTR:$src)
/*1992*/        /*Scope*/ 13, /*->2006*/
/*1993*/          OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1996*/          OPC_EmitMergeInputChains1_0,
/*1997*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LFDX), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:f64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                  // Dst: (LFDX:f64 xaddr:iPTR:$src)
/*2006*/        0, /*End of Scope*/
              0, // EndSwitchType
/*2008*/    /*Scope*/ 60, /*->2069*/
/*2009*/      OPC_CheckPredicate, 10, // Predicate_extload
/*2011*/      OPC_CheckPredicate, 17, // Predicate_extloadf32
/*2013*/      OPC_CheckType, MVT::f64,
/*2015*/      OPC_Scope, 25, /*->2042*/ // 2 children in Scope
/*2017*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*2020*/        OPC_EmitMergeInputChains1_0,
/*2021*/        OPC_EmitNode, TARGET_VAL(PPC::LFS), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::f32, 2/*#Ops*/, 2, 3,  // Results = #4
/*2030*/        OPC_EmitInteger, MVT::i32, PPC::F8RCRegClassID,
/*2033*/        OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 4, 5, 
                // Src: (ld:f64 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadf32>> - Complexity = 13
                // Dst: (COPY_TO_REGCLASS:f64 (LFS:f32 iaddr:iPTR:$src), F8RC:f64)
/*2042*/      /*Scope*/ 25, /*->2068*/
/*2043*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*2046*/        OPC_EmitMergeInputChains1_0,
/*2047*/        OPC_EmitNode, TARGET_VAL(PPC::LFSX), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::f32, 2/*#Ops*/, 2, 3,  // Results = #4
/*2056*/        OPC_EmitInteger, MVT::i32, PPC::F8RCRegClassID,
/*2059*/        OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 4, 5, 
                // Src: (ld:f64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadf32>> - Complexity = 13
                // Dst: (COPY_TO_REGCLASS:f64 (LFSX:f32 xaddr:iPTR:$src), F8RC:f64)
/*2068*/      0, /*End of Scope*/
/*2069*/    /*Scope*/ 17, /*->2087*/
/*2070*/      OPC_CheckPredicate, 8, // Predicate_load
/*2072*/      OPC_CheckType, MVT::v4i32,
/*2074*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$src #2 #3
/*2077*/      OPC_EmitMergeInputChains1_0,
/*2078*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LVX), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 2, 3, 
              // Src: (ld:v4i32 xoaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
              // Dst: (LVX:v4i32 xoaddr:iPTR:$src)
/*2087*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 92|128,5/*732*/,  TARGET_VAL(ISD::STORE),// ->2824
/*2092*/    OPC_RecordMemRef,
/*2093*/    OPC_RecordNode,   // #0 = 'st' chained node
/*2094*/    OPC_RecordChild1, // #1 = $rS
/*2095*/    OPC_Scope, 112|128,1/*240*/, /*->2338*/ // 5 children in Scope
/*2098*/      OPC_CheckChild1Type, MVT::i32,
/*2100*/      OPC_RecordChild2, // #2 = $src
/*2101*/      OPC_Scope, 110, /*->2213*/ // 2 children in Scope
/*2103*/        OPC_CheckPredicate, 18, // Predicate_unindexedstore
/*2105*/        OPC_Scope, 36, /*->2143*/ // 4 children in Scope
/*2107*/          OPC_CheckPredicate, 19, // Predicate_truncstore
/*2109*/          OPC_Scope, 15, /*->2126*/ // 2 children in Scope
/*2111*/            OPC_CheckPredicate, 20, // Predicate_truncstorei8
/*2113*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrImm:$src #3 #4
/*2116*/            OPC_EmitMergeInputChains1_0,
/*2117*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STB), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st GPRC:i32:$rS, iaddr:iPTR:$src)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 13
                    // Dst: (STB GPRC:i32:$rS, iaddr:iPTR:$src)
/*2126*/          /*Scope*/ 15, /*->2142*/
/*2127*/            OPC_CheckPredicate, 21, // Predicate_truncstorei16
/*2129*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrImm:$src #3 #4
/*2132*/            OPC_EmitMergeInputChains1_0,
/*2133*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STH), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st GPRC:i32:$rS, iaddr:iPTR:$src)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 13
                    // Dst: (STH GPRC:i32:$rS, iaddr:iPTR:$src)
/*2142*/          0, /*End of Scope*/
/*2143*/        /*Scope*/ 15, /*->2159*/
/*2144*/          OPC_CheckPredicate, 22, // Predicate_store
/*2146*/          OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrImm:$src #3 #4
/*2149*/          OPC_EmitMergeInputChains1_0,
/*2150*/          OPC_MorphNodeTo, TARGET_VAL(PPC::STW), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                  // Src: (st GPRC:i32:$rS, iaddr:iPTR:$src)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                  // Dst: (STW GPRC:i32:$rS, iaddr:iPTR:$src)
/*2159*/        /*Scope*/ 36, /*->2196*/
/*2160*/          OPC_CheckPredicate, 19, // Predicate_truncstore
/*2162*/          OPC_Scope, 15, /*->2179*/ // 2 children in Scope
/*2164*/            OPC_CheckPredicate, 20, // Predicate_truncstorei8
/*2166*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // SelectAddrIdx:$dst #3 #4
/*2169*/            OPC_EmitMergeInputChains1_0,
/*2170*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STBX), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st GPRC:i32:$rS, xaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 13
                    // Dst: (STBX GPRC:i32:$rS, xaddr:iPTR:$dst)
/*2179*/          /*Scope*/ 15, /*->2195*/
/*2180*/            OPC_CheckPredicate, 21, // Predicate_truncstorei16
/*2182*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // SelectAddrIdx:$dst #3 #4
/*2185*/            OPC_EmitMergeInputChains1_0,
/*2186*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STHX), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st GPRC:i32:$rS, xaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 13
                    // Dst: (STHX GPRC:i32:$rS, xaddr:iPTR:$dst)
/*2195*/          0, /*End of Scope*/
/*2196*/        /*Scope*/ 15, /*->2212*/
/*2197*/          OPC_CheckPredicate, 22, // Predicate_store
/*2199*/          OPC_CheckComplexPat, /*CP*/2, /*#*/2, // SelectAddrIdx:$dst #3 #4
/*2202*/          OPC_EmitMergeInputChains1_0,
/*2203*/          OPC_MorphNodeTo, TARGET_VAL(PPC::STWX), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                  // Src: (st GPRC:i32:$rS, xaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                  // Dst: (STWX GPRC:i32:$rS, xaddr:iPTR:$dst)
/*2212*/        0, /*End of Scope*/
/*2213*/      /*Scope*/ 123, /*->2337*/
/*2214*/        OPC_RecordChild3, // #3 = $ptroff
/*2215*/        OPC_Scope, 40, /*->2257*/ // 4 children in Scope
/*2217*/          OPC_CheckPredicate, 23, // Predicate_itruncstore
/*2219*/          OPC_CheckPredicate, 24, // Predicate_pre_truncst
/*2221*/          OPC_Scope, 16, /*->2239*/ // 2 children in Scope
/*2223*/            OPC_CheckPredicate, 25, // Predicate_pre_truncsti8
/*2225*/            OPC_CheckComplexPat, /*CP*/4, /*#*/3, // SelectAddrImmOffs:$ptroff #4
/*2228*/            OPC_EmitMergeInputChains1_0,
/*2229*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STBU), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 4, 2, 
                    // Src: (ist:iPTR GPRC:i32:$rS, ptr_rc:iPTR:$ptrreg, iaddroff:iPTR:$ptroff)<<P:Predicate_itruncstore>><<P:Predicate_pre_truncst>><<P:Predicate_pre_truncsti8>> - Complexity = 10
                    // Dst: (STBU:iPTR GPRC:i32:$rS, iaddroff:i32:$ptroff, ptr_rc:iPTR:$ptrreg)
/*2239*/          /*Scope*/ 16, /*->2256*/
/*2240*/            OPC_CheckPredicate, 26, // Predicate_pre_truncsti16
/*2242*/            OPC_CheckComplexPat, /*CP*/4, /*#*/3, // SelectAddrImmOffs:$ptroff #4
/*2245*/            OPC_EmitMergeInputChains1_0,
/*2246*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STHU), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 4, 2, 
                    // Src: (ist:iPTR GPRC:i32:$rS, ptr_rc:iPTR:$ptrreg, iaddroff:iPTR:$ptroff)<<P:Predicate_itruncstore>><<P:Predicate_pre_truncst>><<P:Predicate_pre_truncsti16>> - Complexity = 10
                    // Dst: (STHU:iPTR GPRC:i32:$rS, iaddroff:i32:$ptroff, ptr_rc:iPTR:$ptrreg)
/*2256*/          0, /*End of Scope*/
/*2257*/        /*Scope*/ 18, /*->2276*/
/*2258*/          OPC_CheckPredicate, 27, // Predicate_istore
/*2260*/          OPC_CheckPredicate, 28, // Predicate_pre_store
/*2262*/          OPC_CheckComplexPat, /*CP*/4, /*#*/3, // SelectAddrImmOffs:$ptroff #4
/*2265*/          OPC_EmitMergeInputChains1_0,
/*2266*/          OPC_MorphNodeTo, TARGET_VAL(PPC::STWU), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 4, 2, 
                  // Src: (ist:iPTR GPRC:i32:$rS, ptr_rc:iPTR:$ptrreg, iaddroff:iPTR:$ptroff)<<P:Predicate_istore>><<P:Predicate_pre_store>> - Complexity = 10
                  // Dst: (STWU:iPTR GPRC:i32:$rS, iaddroff:i32:$ptroff, ptr_rc:iPTR:$ptrreg)
/*2276*/        /*Scope*/ 40, /*->2317*/
/*2277*/          OPC_CheckPredicate, 23, // Predicate_itruncstore
/*2279*/          OPC_CheckPredicate, 24, // Predicate_pre_truncst
/*2281*/          OPC_Scope, 16, /*->2299*/ // 2 children in Scope
/*2283*/            OPC_CheckPredicate, 25, // Predicate_pre_truncsti8
/*2285*/            OPC_CheckComplexPat, /*CP*/5, /*#*/3, // SelectAddrIdxOffs:$ptroff #4
/*2288*/            OPC_EmitMergeInputChains1_0,
/*2289*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STBUX), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 4, 2, 
                    // Src: (ist:iPTR GPRC:i32:$rS, ptr_rc:iPTR:$ptrreg, xaddroff:iPTR:$ptroff)<<P:Predicate_itruncstore>><<P:Predicate_pre_truncst>><<P:Predicate_pre_truncsti8>> - Complexity = 10
                    // Dst: (STBUX:iPTR GPRC:i32:$rS, xaddroff:iPTR:$ptroff, ptr_rc:iPTR:$ptrreg)
/*2299*/          /*Scope*/ 16, /*->2316*/
/*2300*/            OPC_CheckPredicate, 26, // Predicate_pre_truncsti16
/*2302*/            OPC_CheckComplexPat, /*CP*/5, /*#*/3, // SelectAddrIdxOffs:$ptroff #4
/*2305*/            OPC_EmitMergeInputChains1_0,
/*2306*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STHUX), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 4, 2, 
                    // Src: (ist:iPTR GPRC:i32:$rS, ptr_rc:iPTR:$ptrreg, xaddroff:iPTR:$ptroff)<<P:Predicate_itruncstore>><<P:Predicate_pre_truncst>><<P:Predicate_pre_truncsti16>> - Complexity = 10
                    // Dst: (STHUX:iPTR GPRC:i32:$rS, xaddroff:iPTR:$ptroff, ptr_rc:iPTR:$ptrreg)
/*2316*/          0, /*End of Scope*/
/*2317*/        /*Scope*/ 18, /*->2336*/
/*2318*/          OPC_CheckPredicate, 27, // Predicate_istore
/*2320*/          OPC_CheckPredicate, 28, // Predicate_pre_store
/*2322*/          OPC_CheckComplexPat, /*CP*/5, /*#*/3, // SelectAddrIdxOffs:$ptroff #4
/*2325*/          OPC_EmitMergeInputChains1_0,
/*2326*/          OPC_MorphNodeTo, TARGET_VAL(PPC::STWUX), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 4, 2, 
                  // Src: (ist:iPTR GPRC:i32:$rS, ptr_rc:iPTR:$ptrreg, xaddroff:iPTR:$ptroff)<<P:Predicate_istore>><<P:Predicate_pre_store>> - Complexity = 10
                  // Dst: (STWUX:iPTR GPRC:i32:$rS, xaddroff:iPTR:$ptroff, ptr_rc:iPTR:$ptrreg)
/*2336*/        0, /*End of Scope*/
/*2337*/      0, /*End of Scope*/
/*2338*/    /*Scope*/ 78, /*->2417*/
/*2339*/      OPC_CheckChild1Type, MVT::f32,
/*2341*/      OPC_RecordChild2, // #2 = $dst
/*2342*/      OPC_Scope, 34, /*->2378*/ // 2 children in Scope
/*2344*/        OPC_CheckPredicate, 18, // Predicate_unindexedstore
/*2346*/        OPC_CheckPredicate, 22, // Predicate_store
/*2348*/        OPC_Scope, 13, /*->2363*/ // 2 children in Scope
/*2350*/          OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrImm:$dst #3 #4
/*2353*/          OPC_EmitMergeInputChains1_0,
/*2354*/          OPC_MorphNodeTo, TARGET_VAL(PPC::STFS), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                  // Src: (st F4RC:f32:$rS, iaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                  // Dst: (STFS F4RC:f32:$rS, iaddr:iPTR:$dst)
/*2363*/        /*Scope*/ 13, /*->2377*/
/*2364*/          OPC_CheckComplexPat, /*CP*/2, /*#*/2, // SelectAddrIdx:$dst #3 #4
/*2367*/          OPC_EmitMergeInputChains1_0,
/*2368*/          OPC_MorphNodeTo, TARGET_VAL(PPC::STFSX), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                  // Src: (st F4RC:f32:$frS, xaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                  // Dst: (STFSX F4RC:f32:$frS, xaddr:iPTR:$dst)
/*2377*/        0, /*End of Scope*/
/*2378*/      /*Scope*/ 37, /*->2416*/
/*2379*/        OPC_RecordChild3, // #3 = $ptroff
/*2380*/        OPC_CheckPredicate, 27, // Predicate_istore
/*2382*/        OPC_CheckPredicate, 28, // Predicate_pre_store
/*2384*/        OPC_Scope, 14, /*->2400*/ // 2 children in Scope
/*2386*/          OPC_CheckComplexPat, /*CP*/4, /*#*/3, // SelectAddrImmOffs:$ptroff #4
/*2389*/          OPC_EmitMergeInputChains1_0,
/*2390*/          OPC_MorphNodeTo, TARGET_VAL(PPC::STFSU), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 4, 2, 
                  // Src: (ist:iPTR F4RC:f32:$rS, ptr_rc:iPTR:$ptrreg, iaddroff:iPTR:$ptroff)<<P:Predicate_istore>><<P:Predicate_pre_store>> - Complexity = 10
                  // Dst: (STFSU:iPTR F4RC:f32:$rS, iaddroff:i32:$ptroff, ptr_rc:iPTR:$ptrreg)
/*2400*/        /*Scope*/ 14, /*->2415*/
/*2401*/          OPC_CheckComplexPat, /*CP*/5, /*#*/3, // SelectAddrIdxOffs:$ptroff #4
/*2404*/          OPC_EmitMergeInputChains1_0,
/*2405*/          OPC_MorphNodeTo, TARGET_VAL(PPC::STFSUX), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 4, 2, 
                  // Src: (ist:iPTR F4RC:f32:$rS, ptr_rc:iPTR:$ptrreg, xaddroff:iPTR:$ptroff)<<P:Predicate_istore>><<P:Predicate_pre_store>> - Complexity = 10
                  // Dst: (STFSUX:iPTR F4RC:f32:$rS, xaddroff:iPTR:$ptroff, ptr_rc:iPTR:$ptrreg)
/*2415*/        0, /*End of Scope*/
/*2416*/      0, /*End of Scope*/
/*2417*/    /*Scope*/ 78, /*->2496*/
/*2418*/      OPC_CheckChild1Type, MVT::f64,
/*2420*/      OPC_RecordChild2, // #2 = $dst
/*2421*/      OPC_Scope, 34, /*->2457*/ // 2 children in Scope
/*2423*/        OPC_CheckPredicate, 18, // Predicate_unindexedstore
/*2425*/        OPC_CheckPredicate, 22, // Predicate_store
/*2427*/        OPC_Scope, 13, /*->2442*/ // 2 children in Scope
/*2429*/          OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrImm:$dst #3 #4
/*2432*/          OPC_EmitMergeInputChains1_0,
/*2433*/          OPC_MorphNodeTo, TARGET_VAL(PPC::STFD), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                  // Src: (st F8RC:f64:$rS, iaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                  // Dst: (STFD F8RC:f64:$rS, iaddr:iPTR:$dst)
/*2442*/        /*Scope*/ 13, /*->2456*/
/*2443*/          OPC_CheckComplexPat, /*CP*/2, /*#*/2, // SelectAddrIdx:$dst #3 #4
/*2446*/          OPC_EmitMergeInputChains1_0,
/*2447*/          OPC_MorphNodeTo, TARGET_VAL(PPC::STFDX), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                  // Src: (st F8RC:f64:$frS, xaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                  // Dst: (STFDX F8RC:f64:$frS, xaddr:iPTR:$dst)
/*2456*/        0, /*End of Scope*/
/*2457*/      /*Scope*/ 37, /*->2495*/
/*2458*/        OPC_RecordChild3, // #3 = $ptroff
/*2459*/        OPC_CheckPredicate, 27, // Predicate_istore
/*2461*/        OPC_CheckPredicate, 28, // Predicate_pre_store
/*2463*/        OPC_Scope, 14, /*->2479*/ // 2 children in Scope
/*2465*/          OPC_CheckComplexPat, /*CP*/4, /*#*/3, // SelectAddrImmOffs:$ptroff #4
/*2468*/          OPC_EmitMergeInputChains1_0,
/*2469*/          OPC_MorphNodeTo, TARGET_VAL(PPC::STFDU), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 4, 2, 
                  // Src: (ist:iPTR F8RC:f64:$rS, ptr_rc:iPTR:$ptrreg, iaddroff:iPTR:$ptroff)<<P:Predicate_istore>><<P:Predicate_pre_store>> - Complexity = 10
                  // Dst: (STFDU:iPTR F8RC:f64:$rS, iaddroff:i32:$ptroff, ptr_rc:iPTR:$ptrreg)
/*2479*/        /*Scope*/ 14, /*->2494*/
/*2480*/          OPC_CheckComplexPat, /*CP*/5, /*#*/3, // SelectAddrIdxOffs:$ptroff #4
/*2483*/          OPC_EmitMergeInputChains1_0,
/*2484*/          OPC_MorphNodeTo, TARGET_VAL(PPC::STFDUX), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 4, 2, 
                  // Src: (ist:iPTR F8RC:f64:$rS, ptr_rc:iPTR:$ptrreg, xaddroff:iPTR:$ptroff)<<P:Predicate_istore>><<P:Predicate_pre_store>> - Complexity = 10
                  // Dst: (STFDUX:iPTR F8RC:f64:$rS, xaddroff:iPTR:$ptroff, ptr_rc:iPTR:$ptrreg)
/*2494*/        0, /*End of Scope*/
/*2495*/      0, /*End of Scope*/
/*2496*/    /*Scope*/ 48|128,2/*304*/, /*->2802*/
/*2498*/      OPC_CheckChild1Type, MVT::i64,
/*2500*/      OPC_RecordChild2, // #2 = $ptrreg
/*2501*/      OPC_Scope, 29|128,1/*157*/, /*->2661*/ // 2 children in Scope
/*2504*/        OPC_RecordChild3, // #3 = $ptroff
/*2505*/        OPC_Scope, 57, /*->2564*/ // 4 children in Scope
/*2507*/          OPC_CheckPredicate, 23, // Predicate_itruncstore
/*2509*/          OPC_CheckPredicate, 24, // Predicate_pre_truncst
/*2511*/          OPC_Scope, 16, /*->2529*/ // 3 children in Scope
/*2513*/            OPC_CheckPredicate, 25, // Predicate_pre_truncsti8
/*2515*/            OPC_CheckComplexPat, /*CP*/4, /*#*/3, // SelectAddrImmOffs:$ptroff #4
/*2518*/            OPC_EmitMergeInputChains1_0,
/*2519*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STBU8), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 4, 2, 
                    // Src: (ist:iPTR G8RC:i64:$rS, ptr_rc:iPTR:$ptrreg, iaddroff:iPTR:$ptroff)<<P:Predicate_itruncstore>><<P:Predicate_pre_truncst>><<P:Predicate_pre_truncsti8>> - Complexity = 10
                    // Dst: (STBU8:iPTR G8RC:i64:$rS, iaddroff:i32:$ptroff, ptr_rc:iPTR:$ptrreg)
/*2529*/          /*Scope*/ 16, /*->2546*/
/*2530*/            OPC_CheckPredicate, 26, // Predicate_pre_truncsti16
/*2532*/            OPC_CheckComplexPat, /*CP*/4, /*#*/3, // SelectAddrImmOffs:$ptroff #4
/*2535*/            OPC_EmitMergeInputChains1_0,
/*2536*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STHU8), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 4, 2, 
                    // Src: (ist:iPTR G8RC:i64:$rS, ptr_rc:iPTR:$ptrreg, iaddroff:iPTR:$ptroff)<<P:Predicate_itruncstore>><<P:Predicate_pre_truncst>><<P:Predicate_pre_truncsti16>> - Complexity = 10
                    // Dst: (STHU8:iPTR G8RC:i64:$rS, iaddroff:i32:$ptroff, ptr_rc:iPTR:$ptrreg)
/*2546*/          /*Scope*/ 16, /*->2563*/
/*2547*/            OPC_CheckPredicate, 29, // Predicate_pre_truncsti32
/*2549*/            OPC_CheckComplexPat, /*CP*/4, /*#*/3, // SelectAddrImmOffs:$ptroff #4
/*2552*/            OPC_EmitMergeInputChains1_0,
/*2553*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STWU8), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 4, 2, 
                    // Src: (ist:iPTR G8RC:i64:$rS, ptr_rc:iPTR:$ptrreg, iaddroff:iPTR:$ptroff)<<P:Predicate_itruncstore>><<P:Predicate_pre_truncst>><<P:Predicate_pre_truncsti32>> - Complexity = 10
                    // Dst: (STWU8:iPTR G8RC:i64:$rS, iaddroff:i32:$ptroff, ptr_rc:iPTR:$ptrreg)
/*2563*/          0, /*End of Scope*/
/*2564*/        /*Scope*/ 18, /*->2583*/
/*2565*/          OPC_CheckPredicate, 27, // Predicate_istore
/*2567*/          OPC_CheckPredicate, 28, // Predicate_pre_store
/*2569*/          OPC_CheckComplexPat, /*CP*/4, /*#*/3, // SelectAddrImmOffs:$ptroff #4
/*2572*/          OPC_EmitMergeInputChains1_0,
/*2573*/          OPC_MorphNodeTo, TARGET_VAL(PPC::STDU), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 4, 2, 
                  // Src: (ist:iPTR G8RC:i64:$rS, ptr_rc:iPTR:$ptrreg, iaddroff:iPTR:$ptroff)<<P:Predicate_istore>><<P:Predicate_pre_store>> - Complexity = 10
                  // Dst: (STDU:iPTR G8RC:i64:$rS, iaddroff:i32:$ptroff, ptr_rc:iPTR:$ptrreg)
/*2583*/        /*Scope*/ 57, /*->2641*/
/*2584*/          OPC_CheckPredicate, 23, // Predicate_itruncstore
/*2586*/          OPC_CheckPredicate, 24, // Predicate_pre_truncst
/*2588*/          OPC_Scope, 16, /*->2606*/ // 3 children in Scope
/*2590*/            OPC_CheckPredicate, 25, // Predicate_pre_truncsti8
/*2592*/            OPC_CheckComplexPat, /*CP*/5, /*#*/3, // SelectAddrIdxOffs:$ptroff #4
/*2595*/            OPC_EmitMergeInputChains1_0,
/*2596*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STBUX8), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 4, 2, 
                    // Src: (ist:iPTR G8RC:i64:$rS, ptr_rc:iPTR:$ptrreg, xaddroff:iPTR:$ptroff)<<P:Predicate_itruncstore>><<P:Predicate_pre_truncst>><<P:Predicate_pre_truncsti8>> - Complexity = 10
                    // Dst: (STBUX8:iPTR G8RC:i64:$rS, xaddroff:iPTR:$ptroff, ptr_rc:iPTR:$ptrreg)
/*2606*/          /*Scope*/ 16, /*->2623*/
/*2607*/            OPC_CheckPredicate, 26, // Predicate_pre_truncsti16
/*2609*/            OPC_CheckComplexPat, /*CP*/5, /*#*/3, // SelectAddrIdxOffs:$ptroff #4
/*2612*/            OPC_EmitMergeInputChains1_0,
/*2613*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STHUX8), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 4, 2, 
                    // Src: (ist:iPTR G8RC:i64:$rS, ptr_rc:iPTR:$ptrreg, xaddroff:iPTR:$ptroff)<<P:Predicate_itruncstore>><<P:Predicate_pre_truncst>><<P:Predicate_pre_truncsti16>> - Complexity = 10
                    // Dst: (STHUX8:iPTR G8RC:i64:$rS, xaddroff:iPTR:$ptroff, ptr_rc:iPTR:$ptrreg)
/*2623*/          /*Scope*/ 16, /*->2640*/
/*2624*/            OPC_CheckPredicate, 29, // Predicate_pre_truncsti32
/*2626*/            OPC_CheckComplexPat, /*CP*/5, /*#*/3, // SelectAddrIdxOffs:$ptroff #4
/*2629*/            OPC_EmitMergeInputChains1_0,
/*2630*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STWUX8), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 4, 2, 
                    // Src: (ist:iPTR G8RC:i64:$rS, ptr_rc:iPTR:$ptrreg, xaddroff:iPTR:$ptroff)<<P:Predicate_itruncstore>><<P:Predicate_pre_truncst>><<P:Predicate_pre_truncsti32>> - Complexity = 10
                    // Dst: (STWUX8:iPTR G8RC:i64:$rS, xaddroff:iPTR:$ptroff, ptr_rc:iPTR:$ptrreg)
/*2640*/          0, /*End of Scope*/
/*2641*/        /*Scope*/ 18, /*->2660*/
/*2642*/          OPC_CheckPredicate, 27, // Predicate_istore
/*2644*/          OPC_CheckPredicate, 28, // Predicate_pre_store
/*2646*/          OPC_CheckComplexPat, /*CP*/5, /*#*/3, // SelectAddrIdxOffs:$ptroff #4
/*2649*/          OPC_EmitMergeInputChains1_0,
/*2650*/          OPC_MorphNodeTo, TARGET_VAL(PPC::STDUX), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 4, 2, 
                  // Src: (ist:iPTR G8RC:i64:$rS, ptr_rc:iPTR:$ptrreg, xaddroff:iPTR:$ptroff)<<P:Predicate_istore>><<P:Predicate_pre_store>> - Complexity = 10
                  // Dst: (STDUX:iPTR G8RC:i64:$rS, xaddroff:iPTR:$ptroff, ptr_rc:iPTR:$ptrreg)
/*2660*/        0, /*End of Scope*/
/*2661*/      /*Scope*/ 10|128,1/*138*/, /*->2801*/
/*2663*/        OPC_CheckPredicate, 18, // Predicate_unindexedstore
/*2665*/        OPC_Scope, 100, /*->2767*/ // 2 children in Scope
/*2667*/          OPC_CheckPredicate, 19, // Predicate_truncstore
/*2669*/          OPC_Scope, 15, /*->2686*/ // 6 children in Scope
/*2671*/            OPC_CheckPredicate, 20, // Predicate_truncstorei8
/*2673*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrImm:$src #3 #4
/*2676*/            OPC_EmitMergeInputChains1_0,
/*2677*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STB8), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st G8RC:i64:$rS, iaddr:iPTR:$src)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 13
                    // Dst: (STB8 G8RC:i64:$rS, iaddr:iPTR:$src)
/*2686*/          /*Scope*/ 15, /*->2702*/
/*2687*/            OPC_CheckPredicate, 21, // Predicate_truncstorei16
/*2689*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrImm:$src #3 #4
/*2692*/            OPC_EmitMergeInputChains1_0,
/*2693*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STH8), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st G8RC:i64:$rS, iaddr:iPTR:$src)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 13
                    // Dst: (STH8 G8RC:i64:$rS, iaddr:iPTR:$src)
/*2702*/          /*Scope*/ 15, /*->2718*/
/*2703*/            OPC_CheckPredicate, 30, // Predicate_truncstorei32
/*2705*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrImm:$src #3 #4
/*2708*/            OPC_EmitMergeInputChains1_0,
/*2709*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STW8), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st G8RC:i64:$rS, iaddr:iPTR:$src)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei32>> - Complexity = 13
                    // Dst: (STW8 G8RC:i64:$rS, iaddr:iPTR:$src)
/*2718*/          /*Scope*/ 15, /*->2734*/
/*2719*/            OPC_CheckPredicate, 20, // Predicate_truncstorei8
/*2721*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // SelectAddrIdx:$dst #3 #4
/*2724*/            OPC_EmitMergeInputChains1_0,
/*2725*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STBX8), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st G8RC:i64:$rS, xaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 13
                    // Dst: (STBX8 G8RC:i64:$rS, xaddr:iPTR:$dst)
/*2734*/          /*Scope*/ 15, /*->2750*/
/*2735*/            OPC_CheckPredicate, 21, // Predicate_truncstorei16
/*2737*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // SelectAddrIdx:$dst #3 #4
/*2740*/            OPC_EmitMergeInputChains1_0,
/*2741*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STHX8), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st G8RC:i64:$rS, xaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 13
                    // Dst: (STHX8 G8RC:i64:$rS, xaddr:iPTR:$dst)
/*2750*/          /*Scope*/ 15, /*->2766*/
/*2751*/            OPC_CheckPredicate, 30, // Predicate_truncstorei32
/*2753*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // SelectAddrIdx:$dst #3 #4
/*2756*/            OPC_EmitMergeInputChains1_0,
/*2757*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STWX8), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st G8RC:i64:$rS, xaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei32>> - Complexity = 13
                    // Dst: (STWX8 G8RC:i64:$rS, xaddr:iPTR:$dst)
/*2766*/          0, /*End of Scope*/
/*2767*/        /*Scope*/ 32, /*->2800*/
/*2768*/          OPC_CheckPredicate, 22, // Predicate_store
/*2770*/          OPC_Scope, 13, /*->2785*/ // 2 children in Scope
/*2772*/            OPC_CheckComplexPat, /*CP*/3, /*#*/2, // SelectAddrImmShift:$dst #3 #4
/*2775*/            OPC_EmitMergeInputChains1_0,
/*2776*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STD), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st G8RC:i64:$rS, ixaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                    // Dst: (STD G8RC:i64:$rS, ixaddr:iPTR:$dst)
/*2785*/          /*Scope*/ 13, /*->2799*/
/*2786*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // SelectAddrIdx:$dst #3 #4
/*2789*/            OPC_EmitMergeInputChains1_0,
/*2790*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STDX), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st G8RC:i64:$rS, xaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                    // Dst: (STDX G8RC:i64:$rS, xaddr:iPTR:$dst)
/*2799*/          0, /*End of Scope*/
/*2800*/        0, /*End of Scope*/
/*2801*/      0, /*End of Scope*/
/*2802*/    /*Scope*/ 20, /*->2823*/
/*2803*/      OPC_CheckChild1Type, MVT::v4i32,
/*2805*/      OPC_RecordChild2, // #2 = $dst
/*2806*/      OPC_CheckPredicate, 18, // Predicate_unindexedstore
/*2808*/      OPC_CheckPredicate, 22, // Predicate_store
/*2810*/      OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrIdxOnly:$dst #3 #4
/*2813*/      OPC_EmitMergeInputChains1_0,
/*2814*/      OPC_MorphNodeTo, TARGET_VAL(PPC::STVX), 0|OPFL_Chain|OPFL_MemRefs,
                  0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
              // Src: (st VRRC:v4i32:$rS, xoaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
              // Dst: (STVX VRRC:v4i32:$rS, xoaddr:iPTR:$dst)
/*2823*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 83,  TARGET_VAL(ISD::ATOMIC_LOAD_ADD),// ->2910
/*2827*/    OPC_RecordMemRef,
/*2828*/    OPC_RecordNode,   // #0 = 'atomic_load_add' chained node
/*2829*/    OPC_RecordChild1, // #1 = $ptr
/*2830*/    OPC_RecordChild2, // #2 = $incr
/*2831*/    OPC_SwitchType /*2 cases */, 56,  MVT::i32,// ->2890
/*2834*/      OPC_Scope, 17, /*->2853*/ // 3 children in Scope
/*2836*/        OPC_CheckPredicate, 31, // Predicate_atomic_load_add_8
/*2838*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*2841*/        OPC_EmitMergeInputChains1_0,
/*2842*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_ADD_I8), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_add:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)<<P:Predicate_atomic_load_add_8>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_ADD_I8:i32:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)
/*2853*/      /*Scope*/ 17, /*->2871*/
/*2854*/        OPC_CheckPredicate, 32, // Predicate_atomic_load_add_16
/*2856*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*2859*/        OPC_EmitMergeInputChains1_0,
/*2860*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_ADD_I16), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_add:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)<<P:Predicate_atomic_load_add_16>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_ADD_I16:i32:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)
/*2871*/      /*Scope*/ 17, /*->2889*/
/*2872*/        OPC_CheckPredicate, 33, // Predicate_atomic_load_add_32
/*2874*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*2877*/        OPC_EmitMergeInputChains1_0,
/*2878*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_ADD_I32), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_add:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)<<P:Predicate_atomic_load_add_32>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_ADD_I32:i32:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)
/*2889*/      0, /*End of Scope*/
            /*SwitchType*/ 17,  MVT::i64,// ->2909
/*2892*/      OPC_CheckPredicate, 34, // Predicate_atomic_load_add_64
/*2894*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*2897*/      OPC_EmitMergeInputChains1_0,
/*2898*/      OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_ADD_I64), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_add:i64 xoaddr:iPTR:$ptr, G8RC:i64:$incr)<<P:Predicate_atomic_load_add_64>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_ADD_I64:i64:i32 xoaddr:iPTR:$ptr, G8RC:i64:$incr)
            0, // EndSwitchType
          /*SwitchOpcode*/ 83,  TARGET_VAL(ISD::ATOMIC_LOAD_SUB),// ->2996
/*2913*/    OPC_RecordMemRef,
/*2914*/    OPC_RecordNode,   // #0 = 'atomic_load_sub' chained node
/*2915*/    OPC_RecordChild1, // #1 = $ptr
/*2916*/    OPC_RecordChild2, // #2 = $incr
/*2917*/    OPC_SwitchType /*2 cases */, 56,  MVT::i32,// ->2976
/*2920*/      OPC_Scope, 17, /*->2939*/ // 3 children in Scope
/*2922*/        OPC_CheckPredicate, 35, // Predicate_atomic_load_sub_8
/*2924*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*2927*/        OPC_EmitMergeInputChains1_0,
/*2928*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_SUB_I8), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_sub:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)<<P:Predicate_atomic_load_sub_8>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_SUB_I8:i32:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)
/*2939*/      /*Scope*/ 17, /*->2957*/
/*2940*/        OPC_CheckPredicate, 36, // Predicate_atomic_load_sub_16
/*2942*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*2945*/        OPC_EmitMergeInputChains1_0,
/*2946*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_SUB_I16), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_sub:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)<<P:Predicate_atomic_load_sub_16>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_SUB_I16:i32:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)
/*2957*/      /*Scope*/ 17, /*->2975*/
/*2958*/        OPC_CheckPredicate, 37, // Predicate_atomic_load_sub_32
/*2960*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*2963*/        OPC_EmitMergeInputChains1_0,
/*2964*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_SUB_I32), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_sub:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)<<P:Predicate_atomic_load_sub_32>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_SUB_I32:i32:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)
/*2975*/      0, /*End of Scope*/
            /*SwitchType*/ 17,  MVT::i64,// ->2995
/*2978*/      OPC_CheckPredicate, 38, // Predicate_atomic_load_sub_64
/*2980*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*2983*/      OPC_EmitMergeInputChains1_0,
/*2984*/      OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_SUB_I64), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_sub:i64 xoaddr:iPTR:$ptr, G8RC:i64:$incr)<<P:Predicate_atomic_load_sub_64>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_SUB_I64:i64:i32 xoaddr:iPTR:$ptr, G8RC:i64:$incr)
            0, // EndSwitchType
          /*SwitchOpcode*/ 83,  TARGET_VAL(ISD::ATOMIC_LOAD_AND),// ->3082
/*2999*/    OPC_RecordMemRef,
/*3000*/    OPC_RecordNode,   // #0 = 'atomic_load_and' chained node
/*3001*/    OPC_RecordChild1, // #1 = $ptr
/*3002*/    OPC_RecordChild2, // #2 = $incr
/*3003*/    OPC_SwitchType /*2 cases */, 56,  MVT::i32,// ->3062
/*3006*/      OPC_Scope, 17, /*->3025*/ // 3 children in Scope
/*3008*/        OPC_CheckPredicate, 39, // Predicate_atomic_load_and_8
/*3010*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3013*/        OPC_EmitMergeInputChains1_0,
/*3014*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_AND_I8), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_and:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)<<P:Predicate_atomic_load_and_8>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_AND_I8:i32:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)
/*3025*/      /*Scope*/ 17, /*->3043*/
/*3026*/        OPC_CheckPredicate, 40, // Predicate_atomic_load_and_16
/*3028*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3031*/        OPC_EmitMergeInputChains1_0,
/*3032*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_AND_I16), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_and:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)<<P:Predicate_atomic_load_and_16>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_AND_I16:i32:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)
/*3043*/      /*Scope*/ 17, /*->3061*/
/*3044*/        OPC_CheckPredicate, 41, // Predicate_atomic_load_and_32
/*3046*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3049*/        OPC_EmitMergeInputChains1_0,
/*3050*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_AND_I32), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_and:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)<<P:Predicate_atomic_load_and_32>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_AND_I32:i32:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)
/*3061*/      0, /*End of Scope*/
            /*SwitchType*/ 17,  MVT::i64,// ->3081
/*3064*/      OPC_CheckPredicate, 42, // Predicate_atomic_load_and_64
/*3066*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3069*/      OPC_EmitMergeInputChains1_0,
/*3070*/      OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_AND_I64), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_and:i64 xoaddr:iPTR:$ptr, G8RC:i64:$incr)<<P:Predicate_atomic_load_and_64>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_AND_I64:i64:i32 xoaddr:iPTR:$ptr, G8RC:i64:$incr)
            0, // EndSwitchType
          /*SwitchOpcode*/ 83,  TARGET_VAL(ISD::ATOMIC_LOAD_OR),// ->3168
/*3085*/    OPC_RecordMemRef,
/*3086*/    OPC_RecordNode,   // #0 = 'atomic_load_or' chained node
/*3087*/    OPC_RecordChild1, // #1 = $ptr
/*3088*/    OPC_RecordChild2, // #2 = $incr
/*3089*/    OPC_SwitchType /*2 cases */, 56,  MVT::i32,// ->3148
/*3092*/      OPC_Scope, 17, /*->3111*/ // 3 children in Scope
/*3094*/        OPC_CheckPredicate, 43, // Predicate_atomic_load_or_8
/*3096*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3099*/        OPC_EmitMergeInputChains1_0,
/*3100*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_OR_I8), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_or:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)<<P:Predicate_atomic_load_or_8>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_OR_I8:i32:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)
/*3111*/      /*Scope*/ 17, /*->3129*/
/*3112*/        OPC_CheckPredicate, 44, // Predicate_atomic_load_or_16
/*3114*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3117*/        OPC_EmitMergeInputChains1_0,
/*3118*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_OR_I16), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_or:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)<<P:Predicate_atomic_load_or_16>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_OR_I16:i32:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)
/*3129*/      /*Scope*/ 17, /*->3147*/
/*3130*/        OPC_CheckPredicate, 45, // Predicate_atomic_load_or_32
/*3132*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3135*/        OPC_EmitMergeInputChains1_0,
/*3136*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_OR_I32), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_or:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)<<P:Predicate_atomic_load_or_32>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_OR_I32:i32:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)
/*3147*/      0, /*End of Scope*/
            /*SwitchType*/ 17,  MVT::i64,// ->3167
/*3150*/      OPC_CheckPredicate, 46, // Predicate_atomic_load_or_64
/*3152*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3155*/      OPC_EmitMergeInputChains1_0,
/*3156*/      OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_OR_I64), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_or:i64 xoaddr:iPTR:$ptr, G8RC:i64:$incr)<<P:Predicate_atomic_load_or_64>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_OR_I64:i64:i32 xoaddr:iPTR:$ptr, G8RC:i64:$incr)
            0, // EndSwitchType
          /*SwitchOpcode*/ 83,  TARGET_VAL(ISD::ATOMIC_LOAD_XOR),// ->3254
/*3171*/    OPC_RecordMemRef,
/*3172*/    OPC_RecordNode,   // #0 = 'atomic_load_xor' chained node
/*3173*/    OPC_RecordChild1, // #1 = $ptr
/*3174*/    OPC_RecordChild2, // #2 = $incr
/*3175*/    OPC_SwitchType /*2 cases */, 56,  MVT::i32,// ->3234
/*3178*/      OPC_Scope, 17, /*->3197*/ // 3 children in Scope
/*3180*/        OPC_CheckPredicate, 47, // Predicate_atomic_load_xor_8
/*3182*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3185*/        OPC_EmitMergeInputChains1_0,
/*3186*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_XOR_I8), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_xor:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)<<P:Predicate_atomic_load_xor_8>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_XOR_I8:i32:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)
/*3197*/      /*Scope*/ 17, /*->3215*/
/*3198*/        OPC_CheckPredicate, 48, // Predicate_atomic_load_xor_16
/*3200*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3203*/        OPC_EmitMergeInputChains1_0,
/*3204*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_XOR_I16), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_xor:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)<<P:Predicate_atomic_load_xor_16>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_XOR_I16:i32:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)
/*3215*/      /*Scope*/ 17, /*->3233*/
/*3216*/        OPC_CheckPredicate, 49, // Predicate_atomic_load_xor_32
/*3218*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3221*/        OPC_EmitMergeInputChains1_0,
/*3222*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_XOR_I32), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_xor:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)<<P:Predicate_atomic_load_xor_32>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_XOR_I32:i32:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)
/*3233*/      0, /*End of Scope*/
            /*SwitchType*/ 17,  MVT::i64,// ->3253
/*3236*/      OPC_CheckPredicate, 50, // Predicate_atomic_load_xor_64
/*3238*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3241*/      OPC_EmitMergeInputChains1_0,
/*3242*/      OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_XOR_I64), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_xor:i64 xoaddr:iPTR:$ptr, G8RC:i64:$incr)<<P:Predicate_atomic_load_xor_64>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_XOR_I64:i64:i32 xoaddr:iPTR:$ptr, G8RC:i64:$incr)
            0, // EndSwitchType
          /*SwitchOpcode*/ 83,  TARGET_VAL(ISD::ATOMIC_LOAD_NAND),// ->3340
/*3257*/    OPC_RecordMemRef,
/*3258*/    OPC_RecordNode,   // #0 = 'atomic_load_nand' chained node
/*3259*/    OPC_RecordChild1, // #1 = $ptr
/*3260*/    OPC_RecordChild2, // #2 = $incr
/*3261*/    OPC_SwitchType /*2 cases */, 56,  MVT::i32,// ->3320
/*3264*/      OPC_Scope, 17, /*->3283*/ // 3 children in Scope
/*3266*/        OPC_CheckPredicate, 51, // Predicate_atomic_load_nand_8
/*3268*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3271*/        OPC_EmitMergeInputChains1_0,
/*3272*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_NAND_I8), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_nand:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)<<P:Predicate_atomic_load_nand_8>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_NAND_I8:i32:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)
/*3283*/      /*Scope*/ 17, /*->3301*/
/*3284*/        OPC_CheckPredicate, 52, // Predicate_atomic_load_nand_16
/*3286*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3289*/        OPC_EmitMergeInputChains1_0,
/*3290*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_NAND_I16), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_nand:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)<<P:Predicate_atomic_load_nand_16>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_NAND_I16:i32:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)
/*3301*/      /*Scope*/ 17, /*->3319*/
/*3302*/        OPC_CheckPredicate, 53, // Predicate_atomic_load_nand_32
/*3304*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3307*/        OPC_EmitMergeInputChains1_0,
/*3308*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_NAND_I32), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_nand:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)<<P:Predicate_atomic_load_nand_32>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_NAND_I32:i32:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)
/*3319*/      0, /*End of Scope*/
            /*SwitchType*/ 17,  MVT::i64,// ->3339
/*3322*/      OPC_CheckPredicate, 54, // Predicate_atomic_load_nand_64
/*3324*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3327*/      OPC_EmitMergeInputChains1_0,
/*3328*/      OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_NAND_I64), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_nand:i64 xoaddr:iPTR:$ptr, G8RC:i64:$incr)<<P:Predicate_atomic_load_nand_64>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_NAND_I64:i64:i32 xoaddr:iPTR:$ptr, G8RC:i64:$incr)
            0, // EndSwitchType
          /*SwitchOpcode*/ 88,  TARGET_VAL(ISD::ATOMIC_CMP_SWAP),// ->3431
/*3343*/    OPC_RecordMemRef,
/*3344*/    OPC_RecordNode,   // #0 = 'atomic_cmp_swap' chained node
/*3345*/    OPC_RecordChild1, // #1 = $ptr
/*3346*/    OPC_RecordChild2, // #2 = $old
/*3347*/    OPC_RecordChild3, // #3 = $new
/*3348*/    OPC_SwitchType /*2 cases */, 59,  MVT::i32,// ->3410
/*3351*/      OPC_Scope, 18, /*->3371*/ // 3 children in Scope
/*3353*/        OPC_CheckPredicate, 55, // Predicate_atomic_cmp_swap_8
/*3355*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #4 #5
/*3358*/        OPC_EmitMergeInputChains1_0,
/*3359*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_CMP_SWAP_I8), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 4, 5, 2, 3, 
                // Src: (atomic_cmp_swap:i32 xoaddr:iPTR:$ptr, GPRC:i32:$old, GPRC:i32:$new)<<P:Predicate_atomic_cmp_swap_8>> - Complexity = 13
                // Dst: (ATOMIC_CMP_SWAP_I8:i32:i32 xoaddr:iPTR:$ptr, GPRC:i32:$old, GPRC:i32:$new)
/*3371*/      /*Scope*/ 18, /*->3390*/
/*3372*/        OPC_CheckPredicate, 56, // Predicate_atomic_cmp_swap_16
/*3374*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #4 #5
/*3377*/        OPC_EmitMergeInputChains1_0,
/*3378*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_CMP_SWAP_I16), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 4, 5, 2, 3, 
                // Src: (atomic_cmp_swap:i32 xoaddr:iPTR:$ptr, GPRC:i32:$old, GPRC:i32:$new)<<P:Predicate_atomic_cmp_swap_16>> - Complexity = 13
                // Dst: (ATOMIC_CMP_SWAP_I16:i32:i32 xoaddr:iPTR:$ptr, GPRC:i32:$old, GPRC:i32:$new)
/*3390*/      /*Scope*/ 18, /*->3409*/
/*3391*/        OPC_CheckPredicate, 57, // Predicate_atomic_cmp_swap_32
/*3393*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #4 #5
/*3396*/        OPC_EmitMergeInputChains1_0,
/*3397*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_CMP_SWAP_I32), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 4, 5, 2, 3, 
                // Src: (atomic_cmp_swap:i32 xoaddr:iPTR:$ptr, GPRC:i32:$old, GPRC:i32:$new)<<P:Predicate_atomic_cmp_swap_32>> - Complexity = 13
                // Dst: (ATOMIC_CMP_SWAP_I32:i32:i32 xoaddr:iPTR:$ptr, GPRC:i32:$old, GPRC:i32:$new)
/*3409*/      0, /*End of Scope*/
            /*SwitchType*/ 18,  MVT::i64,// ->3430
/*3412*/      OPC_CheckPredicate, 58, // Predicate_atomic_cmp_swap_64
/*3414*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #4 #5
/*3417*/      OPC_EmitMergeInputChains1_0,
/*3418*/      OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_CMP_SWAP_I64), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i64, MVT::i32, 4/*#Ops*/, 4, 5, 2, 3, 
              // Src: (atomic_cmp_swap:i64 xoaddr:iPTR:$ptr, G8RC:i64:$old, G8RC:i64:$new)<<P:Predicate_atomic_cmp_swap_64>> - Complexity = 13
              // Dst: (ATOMIC_CMP_SWAP_I64:i64:i32 xoaddr:iPTR:$ptr, G8RC:i64:$old, G8RC:i64:$new)
            0, // EndSwitchType
          /*SwitchOpcode*/ 83,  TARGET_VAL(ISD::ATOMIC_SWAP),// ->3517
/*3434*/    OPC_RecordMemRef,
/*3435*/    OPC_RecordNode,   // #0 = 'atomic_swap' chained node
/*3436*/    OPC_RecordChild1, // #1 = $ptr
/*3437*/    OPC_RecordChild2, // #2 = $new
/*3438*/    OPC_SwitchType /*2 cases */, 56,  MVT::i32,// ->3497
/*3441*/      OPC_Scope, 17, /*->3460*/ // 3 children in Scope
/*3443*/        OPC_CheckPredicate, 59, // Predicate_atomic_swap_8
/*3445*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3448*/        OPC_EmitMergeInputChains1_0,
/*3449*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_SWAP_I8), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_swap:i32 xoaddr:iPTR:$ptr, GPRC:i32:$new)<<P:Predicate_atomic_swap_8>> - Complexity = 13
                // Dst: (ATOMIC_SWAP_I8:i32:i32 xoaddr:iPTR:$ptr, GPRC:i32:$new)
/*3460*/      /*Scope*/ 17, /*->3478*/
/*3461*/        OPC_CheckPredicate, 60, // Predicate_atomic_swap_16
/*3463*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3466*/        OPC_EmitMergeInputChains1_0,
/*3467*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_SWAP_I16), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_swap:i32 xoaddr:iPTR:$ptr, GPRC:i32:$new)<<P:Predicate_atomic_swap_16>> - Complexity = 13
                // Dst: (ATOMIC_SWAP_I16:i32:i32 xoaddr:iPTR:$ptr, GPRC:i32:$new)
/*3478*/      /*Scope*/ 17, /*->3496*/
/*3479*/        OPC_CheckPredicate, 61, // Predicate_atomic_swap_32
/*3481*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3484*/        OPC_EmitMergeInputChains1_0,
/*3485*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_SWAP_I32), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_swap:i32 xoaddr:iPTR:$ptr, GPRC:i32:$new)<<P:Predicate_atomic_swap_32>> - Complexity = 13
                // Dst: (ATOMIC_SWAP_I32:i32:i32 xoaddr:iPTR:$ptr, GPRC:i32:$new)
/*3496*/      0, /*End of Scope*/
            /*SwitchType*/ 17,  MVT::i64,// ->3516
/*3499*/      OPC_CheckPredicate, 62, // Predicate_atomic_swap_64
/*3501*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3504*/      OPC_EmitMergeInputChains1_0,
/*3505*/      OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_SWAP_I64), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_swap:i64 xoaddr:iPTR:$ptr, G8RC:i64:$new)<<P:Predicate_atomic_swap_64>> - Complexity = 13
              // Dst: (ATOMIC_SWAP_I64:i64:i32 xoaddr:iPTR:$ptr, G8RC:i64:$new)
            0, // EndSwitchType
          /*SwitchOpcode*/ 48,  TARGET_VAL(PPCISD::DYNALLOC),// ->3568
/*3520*/    OPC_RecordNode,   // #0 = 'PPCdynalloc' chained node
/*3521*/    OPC_RecordChild1, // #1 = $negsize
/*3522*/    OPC_SwitchType /*2 cases */, 20,  MVT::i32,// ->3545
/*3525*/      OPC_CheckChild1Type, MVT::i32,
/*3527*/      OPC_RecordChild2, // #2 = $fpsi
/*3528*/      OPC_CheckChild2Type, MVT::iPTR,
/*3530*/      OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrImm:$fpsi #3 #4
/*3533*/      OPC_EmitMergeInputChains1_0,
/*3534*/      OPC_MorphNodeTo, TARGET_VAL(PPC::DYNALLOC), 0|OPFL_Chain,
                  2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 1, 3, 4, 
              // Src: (PPCdynalloc:i32 GPRC:i32:$negsize, iaddr:iPTR:$fpsi) - Complexity = 12
              // Dst: (DYNALLOC:i32:i32 GPRC:i32:$negsize, iaddr:iPTR:$fpsi)
            /*SwitchType*/ 20,  MVT::i64,// ->3567
/*3547*/      OPC_CheckChild1Type, MVT::i64,
/*3549*/      OPC_RecordChild2, // #2 = $fpsi
/*3550*/      OPC_CheckChild2Type, MVT::iPTR,
/*3552*/      OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrImm:$fpsi #3 #4
/*3555*/      OPC_EmitMergeInputChains1_0,
/*3556*/      OPC_MorphNodeTo, TARGET_VAL(PPC::DYNALLOC8), 0|OPFL_Chain,
                  2/*#VTs*/, MVT::i64, MVT::i64, 3/*#Ops*/, 1, 3, 4, 
              // Src: (PPCdynalloc:i64 G8RC:i64:$negsize, iaddr:iPTR:$fpsi) - Complexity = 12
              // Dst: (DYNALLOC8:i64:i64 G8RC:i64:$negsize, iaddr:iPTR:$fpsi)
            0, // EndSwitchType
          /*SwitchOpcode*/ 34,  TARGET_VAL(PPCISD::LARX),// ->3605
/*3571*/    OPC_RecordNode,   // #0 = 'PPClarx' chained node
/*3572*/    OPC_RecordChild1, // #1 = $src
/*3573*/    OPC_SwitchType /*2 cases */, 13,  MVT::i32,// ->3589
/*3576*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$src #2 #3
/*3579*/      OPC_EmitMergeInputChains1_0,
/*3580*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LWARX), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (PPClarx:i32 xoaddr:iPTR:$src) - Complexity = 12
              // Dst: (LWARX:i32 xoaddr:iPTR:$src)
            /*SwitchType*/ 13,  MVT::i64,// ->3604
/*3591*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #2 #3
/*3594*/      OPC_EmitMergeInputChains1_0,
/*3595*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LDARX), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
              // Src: (PPClarx:i64 xoaddr:iPTR:$ptr) - Complexity = 12
              // Dst: (LDARX:i64 xoaddr:iPTR:$ptr)
            0, // EndSwitchType
          /*SwitchOpcode*/ 40,  TARGET_VAL(PPCISD::LBRX),// ->3648
/*3608*/    OPC_RecordNode,   // #0 = 'PPClbrx' chained node
/*3609*/    OPC_RecordChild1, // #1 = $src
/*3610*/    OPC_MoveChild, 2,
/*3612*/    OPC_Scope, 16, /*->3630*/ // 2 children in Scope
/*3614*/      OPC_CheckValueType, MVT::i16,
/*3616*/      OPC_MoveParent,
/*3617*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$src #2 #3
/*3620*/      OPC_EmitMergeInputChains1_0,
/*3621*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LHBRX), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (PPClbrx:i32 xoaddr:iPTR:$src, i16:Other) - Complexity = 12
              // Dst: (LHBRX:i32 xoaddr:iPTR:$src)
/*3630*/    /*Scope*/ 16, /*->3647*/
/*3631*/      OPC_CheckValueType, MVT::i32,
/*3633*/      OPC_MoveParent,
/*3634*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$src #2 #3
/*3637*/      OPC_EmitMergeInputChains1_0,
/*3638*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LWBRX), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (PPClbrx:i32 xoaddr:iPTR:$src, i32:Other) - Complexity = 12
              // Dst: (LWBRX:i32 xoaddr:iPTR:$src)
/*3647*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 37,  TARGET_VAL(PPCISD::LOAD),// ->3688
/*3651*/    OPC_RecordNode,   // #0 = 'PPCload' chained node
/*3652*/    OPC_CaptureGlueInput,
/*3653*/    OPC_RecordChild1, // #1 = $src
/*3654*/    OPC_CheckChild1Type, MVT::iPTR,
/*3656*/    OPC_CheckType, MVT::i64,
/*3658*/    OPC_Scope, 13, /*->3673*/ // 2 children in Scope
/*3660*/      OPC_CheckComplexPat, /*CP*/3, /*#*/1, // SelectAddrImmShift:$src #2 #3
/*3663*/      OPC_EmitMergeInputChains1_0,
/*3664*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LD), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
              // Src: (PPCload:i64 ixaddr:iPTR:$src) - Complexity = 12
              // Dst: (LD:i64 ixaddr:iPTR:$src)
/*3673*/    /*Scope*/ 13, /*->3687*/
/*3674*/      OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*3677*/      OPC_EmitMergeInputChains1_0,
/*3678*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LDX), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
              // Src: (PPCload:i64 xaddr:iPTR:$src) - Complexity = 12
              // Dst: (LDX:i64 xaddr:iPTR:$src)
/*3687*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 82|128,4/*594*/,  TARGET_VAL(ISD::XOR),// ->4286
/*3692*/    OPC_Scope, 39|128,1/*167*/, /*->3862*/ // 8 children in Scope
/*3695*/      OPC_MoveChild, 0,
/*3697*/      OPC_SwitchOpcode /*3 cases */, 41,  TARGET_VAL(ISD::AND),// ->3742
/*3701*/        OPC_RecordChild0, // #0 = $rS
/*3702*/        OPC_RecordChild1, // #1 = $rB
/*3703*/        OPC_MoveParent,
/*3704*/        OPC_MoveChild, 1,
/*3706*/        OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*3717*/        OPC_MoveParent,
/*3718*/        OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->3730
/*3721*/          OPC_MorphNodeTo, TARGET_VAL(PPC::NAND), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (xor:i32 (and:i32 GPRC:i32:$rS, GPRC:i32:$rB), -1:i32) - Complexity = 11
                  // Dst: (NAND:i32 GPRC:i32:$rS, GPRC:i32:$rB)
                /*SwitchType*/ 9,  MVT::i64,// ->3741
/*3732*/          OPC_MorphNodeTo, TARGET_VAL(PPC::NAND8), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                  // Src: (xor:i64 (and:i64 G8RC:i64:$rS, G8RC:i64:$rB), -1:i64) - Complexity = 11
                  // Dst: (NAND8:i64 G8RC:i64:$rS, G8RC:i64:$rB)
                0, // EndSwitchType
              /*SwitchOpcode*/ 41,  TARGET_VAL(ISD::OR),// ->3786
/*3745*/        OPC_RecordChild0, // #0 = $rS
/*3746*/        OPC_RecordChild1, // #1 = $rB
/*3747*/        OPC_MoveParent,
/*3748*/        OPC_MoveChild, 1,
/*3750*/        OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*3761*/        OPC_MoveParent,
/*3762*/        OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->3774
/*3765*/          OPC_MorphNodeTo, TARGET_VAL(PPC::NOR), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (xor:i32 (or:i32 GPRC:i32:$rS, GPRC:i32:$rB), -1:i32) - Complexity = 11
                  // Dst: (NOR:i32 GPRC:i32:$rS, GPRC:i32:$rB)
                /*SwitchType*/ 9,  MVT::i64,// ->3785
/*3776*/          OPC_MorphNodeTo, TARGET_VAL(PPC::NOR8), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                  // Src: (xor:i64 (or:i64 G8RC:i64:$rS, G8RC:i64:$rB), -1:i64) - Complexity = 11
                  // Dst: (NOR8:i64 G8RC:i64:$rS, G8RC:i64:$rB)
                0, // EndSwitchType
              /*SwitchOpcode*/ 72,  TARGET_VAL(ISD::XOR),// ->3861
/*3789*/        OPC_RecordChild0, // #0 = $rS
/*3790*/        OPC_Scope, 40, /*->3832*/ // 2 children in Scope
/*3792*/          OPC_RecordChild1, // #1 = $rB
/*3793*/          OPC_MoveParent,
/*3794*/          OPC_MoveChild, 1,
/*3796*/          OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*3807*/          OPC_MoveParent,
/*3808*/          OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->3820
/*3811*/            OPC_MorphNodeTo, TARGET_VAL(PPC::EQV), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (xor:i32 (xor:i32 GPRC:i32:$rS, GPRC:i32:$rB), -1:i32) - Complexity = 11
                    // Dst: (EQV:i32 GPRC:i32:$rS, GPRC:i32:$rB)
                  /*SwitchType*/ 9,  MVT::i64,// ->3831
/*3822*/            OPC_MorphNodeTo, TARGET_VAL(PPC::EQV8), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                    // Src: (xor:i64 (xor:i64 G8RC:i64:$rS, G8RC:i64:$rB), -1:i64) - Complexity = 11
                    // Dst: (EQV8:i64 G8RC:i64:$rS, G8RC:i64:$rB)
                  0, // EndSwitchType
/*3832*/        /*Scope*/ 27, /*->3860*/
/*3833*/          OPC_MoveChild, 1,
/*3835*/          OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*3846*/          OPC_MoveParent,
/*3847*/          OPC_MoveParent,
/*3848*/          OPC_RecordChild1, // #1 = $rB
/*3849*/          OPC_CheckType, MVT::i32,
/*3851*/          OPC_MorphNodeTo, TARGET_VAL(PPC::EQV), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (xor:i32 (xor:i32 GPRC:i32:$rS, -1:i32), GPRC:i32:$rB) - Complexity = 11
                  // Dst: (EQV:i32 GPRC:i32:$rS, GPRC:i32:$rB)
/*3860*/        0, /*End of Scope*/
              0, // EndSwitchOpcode
/*3862*/    /*Scope*/ 33, /*->3896*/
/*3863*/      OPC_RecordChild0, // #0 = $rB
/*3864*/      OPC_MoveChild, 1,
/*3866*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*3869*/      OPC_RecordChild0, // #1 = $rS
/*3870*/      OPC_MoveChild, 1,
/*3872*/      OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*3883*/      OPC_MoveParent,
/*3884*/      OPC_MoveParent,
/*3885*/      OPC_CheckType, MVT::i32,
/*3887*/      OPC_MorphNodeTo, TARGET_VAL(PPC::EQV), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
              // Src: (xor:i32 GPRC:i32:$rB, (xor:i32 GPRC:i32:$rS, -1:i32)) - Complexity = 11
              // Dst: (EQV:i32 GPRC:i32:$rS, GPRC:i32:$rB)
/*3896*/    /*Scope*/ 33, /*->3930*/
/*3897*/      OPC_MoveChild, 0,
/*3899*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*3902*/      OPC_RecordChild0, // #0 = $rS
/*3903*/      OPC_MoveChild, 1,
/*3905*/      OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*3916*/      OPC_MoveParent,
/*3917*/      OPC_MoveParent,
/*3918*/      OPC_RecordChild1, // #1 = $rB
/*3919*/      OPC_CheckType, MVT::i64,
/*3921*/      OPC_MorphNodeTo, TARGET_VAL(PPC::EQV8), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (xor:i64 (xor:i64 G8RC:i64:$rS, -1:i64), G8RC:i64:$rB) - Complexity = 11
              // Dst: (EQV8:i64 G8RC:i64:$rS, G8RC:i64:$rB)
/*3930*/    /*Scope*/ 33, /*->3964*/
/*3931*/      OPC_RecordChild0, // #0 = $rB
/*3932*/      OPC_MoveChild, 1,
/*3934*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*3937*/      OPC_RecordChild0, // #1 = $rS
/*3938*/      OPC_MoveChild, 1,
/*3940*/      OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*3951*/      OPC_MoveParent,
/*3952*/      OPC_MoveParent,
/*3953*/      OPC_CheckType, MVT::i64,
/*3955*/      OPC_MorphNodeTo, TARGET_VAL(PPC::EQV8), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
              // Src: (xor:i64 G8RC:i64:$rB, (xor:i64 G8RC:i64:$rS, -1:i64)) - Complexity = 11
              // Dst: (EQV8:i64 G8RC:i64:$rS, G8RC:i64:$rB)
/*3964*/    /*Scope*/ 70, /*->4035*/
/*3965*/      OPC_MoveChild, 0,
/*3967*/      OPC_SwitchOpcode /*2 cases */, 30,  TARGET_VAL(ISD::OR),// ->4001
/*3971*/        OPC_RecordChild0, // #0 = $vA
/*3972*/        OPC_RecordChild1, // #1 = $vB
/*3973*/        OPC_MoveParent,
/*3974*/        OPC_MoveChild, 1,
/*3976*/        OPC_CheckOpcode, TARGET_VAL(ISD::BITCAST),
/*3979*/        OPC_MoveChild, 0,
/*3981*/        OPC_CheckOpcode, TARGET_VAL(ISD::BUILD_VECTOR),
/*3984*/        OPC_CheckPredicate, 63, // Predicate_immAllOnesV
/*3986*/        OPC_CheckType, MVT::v16i8,
/*3988*/        OPC_MoveParent,
/*3989*/        OPC_MoveParent,
/*3990*/        OPC_CheckType, MVT::v4i32,
/*3992*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VNOR), 0,
                    1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
                // Src: (xor:v4i32 (or:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB), (bitconvert:v4i32 (build_vector:v16i8)<<P:Predicate_immAllOnesV>>)) - Complexity = 13
                // Dst: (VNOR:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
              /*SwitchOpcode*/ 30,  TARGET_VAL(ISD::BITCAST),// ->4034
/*4004*/        OPC_MoveChild, 0,
/*4006*/        OPC_CheckOpcode, TARGET_VAL(ISD::BUILD_VECTOR),
/*4009*/        OPC_CheckPredicate, 63, // Predicate_immAllOnesV
/*4011*/        OPC_CheckType, MVT::v16i8,
/*4013*/        OPC_MoveParent,
/*4014*/        OPC_MoveParent,
/*4015*/        OPC_MoveChild, 1,
/*4017*/        OPC_CheckOpcode, TARGET_VAL(ISD::OR),
/*4020*/        OPC_RecordChild0, // #0 = $vA
/*4021*/        OPC_RecordChild1, // #1 = $vB
/*4022*/        OPC_MoveParent,
/*4023*/        OPC_CheckType, MVT::v4i32,
/*4025*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VNOR), 0,
                    1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
                // Src: (xor:v4i32 (bitconvert:v4i32 (build_vector:v16i8)<<P:Predicate_immAllOnesV>>), (or:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)) - Complexity = 13
                // Dst: (VNOR:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
              0, // EndSwitchOpcode
/*4035*/    /*Scope*/ 28, /*->4064*/
/*4036*/      OPC_RecordChild0, // #0 = $vA
/*4037*/      OPC_MoveChild, 1,
/*4039*/      OPC_CheckOpcode, TARGET_VAL(ISD::BITCAST),
/*4042*/      OPC_MoveChild, 0,
/*4044*/      OPC_CheckOpcode, TARGET_VAL(ISD::BUILD_VECTOR),
/*4047*/      OPC_CheckPredicate, 63, // Predicate_immAllOnesV
/*4049*/      OPC_CheckType, MVT::v16i8,
/*4051*/      OPC_MoveParent,
/*4052*/      OPC_MoveParent,
/*4053*/      OPC_CheckType, MVT::v4i32,
/*4055*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VNOR), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 0, 
              // Src: (xor:v4i32 VRRC:v4i32:$vA, (bitconvert:v4i32 (build_vector:v16i8)<<P:Predicate_immAllOnesV>>)) - Complexity = 10
              // Dst: (VNOR:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vA)
/*4064*/    /*Scope*/ 28, /*->4093*/
/*4065*/      OPC_MoveChild, 0,
/*4067*/      OPC_CheckOpcode, TARGET_VAL(ISD::BITCAST),
/*4070*/      OPC_MoveChild, 0,
/*4072*/      OPC_CheckOpcode, TARGET_VAL(ISD::BUILD_VECTOR),
/*4075*/      OPC_CheckPredicate, 63, // Predicate_immAllOnesV
/*4077*/      OPC_CheckType, MVT::v16i8,
/*4079*/      OPC_MoveParent,
/*4080*/      OPC_MoveParent,
/*4081*/      OPC_RecordChild1, // #0 = $vA
/*4082*/      OPC_CheckType, MVT::v4i32,
/*4084*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VNOR), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 0, 
              // Src: (xor:v4i32 (bitconvert:v4i32 (build_vector:v16i8)<<P:Predicate_immAllOnesV>>), VRRC:v4i32:$vA) - Complexity = 10
              // Dst: (VNOR:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vA)
/*4093*/    /*Scope*/ 62|128,1/*190*/, /*->4285*/
/*4095*/      OPC_RecordChild0, // #0 = $in
/*4096*/      OPC_Scope, 25, /*->4123*/ // 2 children in Scope
/*4098*/        OPC_MoveChild, 1,
/*4100*/        OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*4111*/        OPC_MoveParent,
/*4112*/        OPC_CheckType, MVT::i32,
/*4114*/        OPC_MorphNodeTo, TARGET_VAL(PPC::NOR), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 0, 
                // Src: (xor:i32 GPRC:i32:$in, -1:i32) - Complexity = 8
                // Dst: (NOR:i32 GPRC:i32:$in, GPRC:i32:$in)
/*4123*/      /*Scope*/ 31|128,1/*159*/, /*->4284*/
/*4125*/        OPC_RecordChild1, // #1 = $src2
/*4126*/        OPC_Scope, 119, /*->4247*/ // 4 children in Scope
/*4128*/          OPC_MoveChild, 1,
/*4130*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4133*/          OPC_Scope, 19, /*->4154*/ // 5 children in Scope
/*4135*/            OPC_CheckPredicate, 64, // Predicate_immZExt16
/*4137*/            OPC_MoveParent,
/*4138*/            OPC_CheckType, MVT::i32,
/*4140*/            OPC_EmitConvertToTarget, 1,
/*4142*/            OPC_EmitNodeXForm, 1, 2, // LO16
/*4145*/            OPC_MorphNodeTo, TARGET_VAL(PPC::XORI), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (xor:i32 GPRC:i32:$src1, (imm:i32)<<P:Predicate_immZExt16>><<X:LO16>>:$src2) - Complexity = 7
                    // Dst: (XORI:i32 GPRC:i32:$src1, (LO16:i32 (imm:i32):$src2))
/*4154*/          /*Scope*/ 19, /*->4174*/
/*4155*/            OPC_CheckPredicate, 65, // Predicate_imm16ShiftedZExt
/*4157*/            OPC_MoveParent,
/*4158*/            OPC_CheckType, MVT::i32,
/*4160*/            OPC_EmitConvertToTarget, 1,
/*4162*/            OPC_EmitNodeXForm, 0, 2, // HI16
/*4165*/            OPC_MorphNodeTo, TARGET_VAL(PPC::XORIS), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (xor:i32 GPRC:i32:$src1, (imm:i32)<<P:Predicate_imm16ShiftedZExt>><<X:HI16>>:$src2) - Complexity = 7
                    // Dst: (XORIS:i32 GPRC:i32:$src1, (HI16:i32 (imm:i32):$src2))
/*4174*/          /*Scope*/ 19, /*->4194*/
/*4175*/            OPC_CheckPredicate, 64, // Predicate_immZExt16
/*4177*/            OPC_MoveParent,
/*4178*/            OPC_CheckType, MVT::i64,
/*4180*/            OPC_EmitConvertToTarget, 1,
/*4182*/            OPC_EmitNodeXForm, 1, 2, // LO16
/*4185*/            OPC_MorphNodeTo, TARGET_VAL(PPC::XORI8), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                    // Src: (xor:i64 G8RC:i64:$src1, (imm:i64)<<P:Predicate_immZExt16>><<X:LO16>>:$src2) - Complexity = 7
                    // Dst: (XORI8:i64 G8RC:i64:$src1, (LO16:i32 (imm:i64):$src2))
/*4194*/          /*Scope*/ 19, /*->4214*/
/*4195*/            OPC_CheckPredicate, 65, // Predicate_imm16ShiftedZExt
/*4197*/            OPC_MoveParent,
/*4198*/            OPC_CheckType, MVT::i64,
/*4200*/            OPC_EmitConvertToTarget, 1,
/*4202*/            OPC_EmitNodeXForm, 0, 2, // HI16
/*4205*/            OPC_MorphNodeTo, TARGET_VAL(PPC::XORIS8), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                    // Src: (xor:i64 G8RC:i64:$src1, (imm:i64)<<P:Predicate_imm16ShiftedZExt>><<X:HI16>>:$src2) - Complexity = 7
                    // Dst: (XORIS8:i64 G8RC:i64:$src1, (HI16:i32 (imm:i64):$src2))
/*4214*/          /*Scope*/ 31, /*->4246*/
/*4215*/            OPC_MoveParent,
/*4216*/            OPC_CheckType, MVT::i32,
/*4218*/            OPC_EmitConvertToTarget, 1,
/*4220*/            OPC_EmitNodeXForm, 1, 2, // LO16
/*4223*/            OPC_EmitNode, TARGET_VAL(PPC::XORI), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3,  // Results = #4
/*4232*/            OPC_EmitConvertToTarget, 1,
/*4234*/            OPC_EmitNodeXForm, 0, 5, // HI16
/*4237*/            OPC_MorphNodeTo, TARGET_VAL(PPC::XORIS), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 4, 6, 
                    // Src: (xor:i32 GPRC:i32:$in, (imm:i32):$imm) - Complexity = 6
                    // Dst: (XORIS:i32 (XORI:i32 GPRC:i32:$in, (LO16:i32 (imm:i32):$imm)), (HI16:i32 (imm:i32):$imm))
/*4246*/          0, /*End of Scope*/
/*4247*/        /*Scope*/ 11, /*->4259*/
/*4248*/          OPC_CheckType, MVT::i32,
/*4250*/          OPC_MorphNodeTo, TARGET_VAL(PPC::XOR), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (xor:i32 GPRC:i32:$rS, GPRC:i32:$rB) - Complexity = 3
                  // Dst: (XOR:i32 GPRC:i32:$rS, GPRC:i32:$rB)
/*4259*/        /*Scope*/ 11, /*->4271*/
/*4260*/          OPC_CheckType, MVT::i64,
/*4262*/          OPC_MorphNodeTo, TARGET_VAL(PPC::XOR8), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                  // Src: (xor:i64 G8RC:i64:$rS, G8RC:i64:$rB) - Complexity = 3
                  // Dst: (XOR8:i64 G8RC:i64:$rS, G8RC:i64:$rB)
/*4271*/        /*Scope*/ 11, /*->4283*/
/*4272*/          OPC_CheckType, MVT::v4i32,
/*4274*/          OPC_MorphNodeTo, TARGET_VAL(PPC::VXOR), 0,
                      1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
                  // Src: (xor:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 3
                  // Dst: (VXOR:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*4283*/        0, /*End of Scope*/
/*4284*/      0, /*End of Scope*/
/*4285*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 27|128,3/*411*/,  TARGET_VAL(ISD::AND),// ->4701
/*4290*/    OPC_Scope, 46, /*->4338*/ // 5 children in Scope
/*4292*/      OPC_RecordChild0, // #0 = $rS
/*4293*/      OPC_MoveChild, 1,
/*4295*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*4298*/      OPC_RecordChild0, // #1 = $rB
/*4299*/      OPC_MoveChild, 1,
/*4301*/      OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*4312*/      OPC_MoveParent,
/*4313*/      OPC_MoveParent,
/*4314*/      OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->4326
/*4317*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ANDC), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (and:i32 GPRC:i32:$rS, (xor:i32 GPRC:i32:$rB, -1:i32)) - Complexity = 11
                // Dst: (ANDC:i32 GPRC:i32:$rS, GPRC:i32:$rB)
              /*SwitchType*/ 9,  MVT::i64,// ->4337
/*4328*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ANDC8), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (and:i64 G8RC:i64:$rS, (xor:i64 G8RC:i64:$rB, -1:i64)) - Complexity = 11
                // Dst: (ANDC8:i64 G8RC:i64:$rS, G8RC:i64:$rB)
              0, // EndSwitchType
/*4338*/    /*Scope*/ 88, /*->4427*/
/*4339*/      OPC_MoveChild, 0,
/*4341*/      OPC_SwitchOpcode /*2 cases */, 41,  TARGET_VAL(ISD::XOR),// ->4386
/*4345*/        OPC_RecordChild0, // #0 = $rB
/*4346*/        OPC_MoveChild, 1,
/*4348*/        OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*4359*/        OPC_MoveParent,
/*4360*/        OPC_MoveParent,
/*4361*/        OPC_RecordChild1, // #1 = $rS
/*4362*/        OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->4374
/*4365*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ANDC), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                  // Src: (and:i32 (xor:i32 GPRC:i32:$rB, -1:i32), GPRC:i32:$rS) - Complexity = 11
                  // Dst: (ANDC:i32 GPRC:i32:$rS, GPRC:i32:$rB)
                /*SwitchType*/ 9,  MVT::i64,// ->4385
/*4376*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ANDC8), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                  // Src: (and:i64 (xor:i64 G8RC:i64:$rB, -1:i64), G8RC:i64:$rS) - Complexity = 11
                  // Dst: (ANDC8:i64 G8RC:i64:$rS, G8RC:i64:$rB)
                0, // EndSwitchType
              /*SwitchOpcode*/ 37,  TARGET_VAL(ISD::ROTL),// ->4426
/*4389*/        OPC_RecordChild0, // #0 = $in
/*4390*/        OPC_RecordChild1, // #1 = $sh
/*4391*/        OPC_CheckChild1Type, MVT::i32,
/*4393*/        OPC_MoveParent,
/*4394*/        OPC_RecordChild1, // #2 = $imm
/*4395*/        OPC_MoveChild, 1,
/*4397*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4400*/        OPC_CheckPredicate, 66, // Predicate_maskimm32
/*4402*/        OPC_MoveParent,
/*4403*/        OPC_CheckType, MVT::i32,
/*4405*/        OPC_EmitConvertToTarget, 2,
/*4407*/        OPC_EmitNodeXForm, 3, 3, // MB
/*4410*/        OPC_EmitConvertToTarget, 2,
/*4412*/        OPC_EmitNodeXForm, 4, 5, // ME
/*4415*/        OPC_MorphNodeTo, TARGET_VAL(PPC::RLWNM), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 1, 4, 6, 
                // Src: (and:i32 (rotl:i32 GPRC:i32:$in, GPRC:i32:$sh), (imm:i32)<<P:Predicate_maskimm32>>:$imm) - Complexity = 10
                // Dst: (RLWNM:i32 GPRC:i32:$in, GPRC:i32:$sh, (MB:i32 (imm:i32)<<P:Predicate_maskimm32>>:$imm), (ME:i32 (imm:i32)<<P:Predicate_maskimm32>>:$imm))
              0, // EndSwitchOpcode
/*4427*/    /*Scope*/ 68, /*->4496*/
/*4428*/      OPC_RecordChild0, // #0 = $vA
/*4429*/      OPC_MoveChild, 1,
/*4431*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*4434*/      OPC_Scope, 29, /*->4465*/ // 2 children in Scope
/*4436*/        OPC_RecordChild0, // #1 = $vB
/*4437*/        OPC_MoveChild, 1,
/*4439*/        OPC_CheckOpcode, TARGET_VAL(ISD::BITCAST),
/*4442*/        OPC_MoveChild, 0,
/*4444*/        OPC_CheckOpcode, TARGET_VAL(ISD::BUILD_VECTOR),
/*4447*/        OPC_CheckPredicate, 63, // Predicate_immAllOnesV
/*4449*/        OPC_CheckType, MVT::v16i8,
/*4451*/        OPC_MoveParent,
/*4452*/        OPC_MoveParent,
/*4453*/        OPC_MoveParent,
/*4454*/        OPC_CheckType, MVT::v4i32,
/*4456*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VANDC), 0,
                    1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
                // Src: (and:v4i32 VRRC:v4i32:$vA, (xor:v4i32 VRRC:v4i32:$vB, (bitconvert:v4i32 (build_vector:v16i8)<<P:Predicate_immAllOnesV>>))) - Complexity = 13
                // Dst: (VANDC:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*4465*/      /*Scope*/ 29, /*->4495*/
/*4466*/        OPC_MoveChild, 0,
/*4468*/        OPC_CheckOpcode, TARGET_VAL(ISD::BITCAST),
/*4471*/        OPC_MoveChild, 0,
/*4473*/        OPC_CheckOpcode, TARGET_VAL(ISD::BUILD_VECTOR),
/*4476*/        OPC_CheckPredicate, 63, // Predicate_immAllOnesV
/*4478*/        OPC_CheckType, MVT::v16i8,
/*4480*/        OPC_MoveParent,
/*4481*/        OPC_MoveParent,
/*4482*/        OPC_RecordChild1, // #1 = $vB
/*4483*/        OPC_MoveParent,
/*4484*/        OPC_CheckType, MVT::v4i32,
/*4486*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VANDC), 0,
                    1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
                // Src: (and:v4i32 VRRC:v4i32:$vA, (xor:v4i32 (bitconvert:v4i32 (build_vector:v16i8)<<P:Predicate_immAllOnesV>>), VRRC:v4i32:$vB)) - Complexity = 13
                // Dst: (VANDC:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*4495*/      0, /*End of Scope*/
/*4496*/    /*Scope*/ 69, /*->4566*/
/*4497*/      OPC_MoveChild, 0,
/*4499*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*4502*/      OPC_Scope, 30, /*->4534*/ // 2 children in Scope
/*4504*/        OPC_RecordChild0, // #0 = $vB
/*4505*/        OPC_MoveChild, 1,
/*4507*/        OPC_CheckOpcode, TARGET_VAL(ISD::BITCAST),
/*4510*/        OPC_MoveChild, 0,
/*4512*/        OPC_CheckOpcode, TARGET_VAL(ISD::BUILD_VECTOR),
/*4515*/        OPC_CheckPredicate, 63, // Predicate_immAllOnesV
/*4517*/        OPC_CheckType, MVT::v16i8,
/*4519*/        OPC_MoveParent,
/*4520*/        OPC_MoveParent,
/*4521*/        OPC_MoveParent,
/*4522*/        OPC_RecordChild1, // #1 = $vA
/*4523*/        OPC_CheckType, MVT::v4i32,
/*4525*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VANDC), 0,
                    1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 1, 0, 
                // Src: (and:v4i32 (xor:v4i32 VRRC:v4i32:$vB, (bitconvert:v4i32 (build_vector:v16i8)<<P:Predicate_immAllOnesV>>)), VRRC:v4i32:$vA) - Complexity = 13
                // Dst: (VANDC:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*4534*/      /*Scope*/ 30, /*->4565*/
/*4535*/        OPC_MoveChild, 0,
/*4537*/        OPC_CheckOpcode, TARGET_VAL(ISD::BITCAST),
/*4540*/        OPC_MoveChild, 0,
/*4542*/        OPC_CheckOpcode, TARGET_VAL(ISD::BUILD_VECTOR),
/*4545*/        OPC_CheckPredicate, 63, // Predicate_immAllOnesV
/*4547*/        OPC_CheckType, MVT::v16i8,
/*4549*/        OPC_MoveParent,
/*4550*/        OPC_MoveParent,
/*4551*/        OPC_RecordChild1, // #0 = $vB
/*4552*/        OPC_MoveParent,
/*4553*/        OPC_RecordChild1, // #1 = $vA
/*4554*/        OPC_CheckType, MVT::v4i32,
/*4556*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VANDC), 0,
                    1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 1, 0, 
                // Src: (and:v4i32 (xor:v4i32 (bitconvert:v4i32 (build_vector:v16i8)<<P:Predicate_immAllOnesV>>), VRRC:v4i32:$vB), VRRC:v4i32:$vA) - Complexity = 13
                // Dst: (VANDC:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*4565*/      0, /*End of Scope*/
/*4566*/    /*Scope*/ 4|128,1/*132*/, /*->4700*/
/*4568*/      OPC_RecordChild0, // #0 = $src1
/*4569*/      OPC_RecordChild1, // #1 = $src2
/*4570*/      OPC_Scope, 91, /*->4663*/ // 4 children in Scope
/*4572*/        OPC_MoveChild, 1,
/*4574*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4577*/        OPC_Scope, 20, /*->4599*/ // 4 children in Scope
/*4579*/          OPC_CheckPredicate, 64, // Predicate_immZExt16
/*4581*/          OPC_MoveParent,
/*4582*/          OPC_CheckType, MVT::i32,
/*4584*/          OPC_EmitConvertToTarget, 1,
/*4586*/          OPC_EmitNodeXForm, 1, 2, // LO16
/*4589*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ANDIo), 0,
                      2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (and:i32 GPRC:i32:$src1, (imm:i32)<<P:Predicate_immZExt16>><<X:LO16>>:$src2) - Complexity = 7
                  // Dst: (ANDIo:i32:i32 GPRC:i32:$src1, (LO16:i32 (imm:i32):$src2))
/*4599*/        /*Scope*/ 20, /*->4620*/
/*4600*/          OPC_CheckPredicate, 65, // Predicate_imm16ShiftedZExt
/*4602*/          OPC_MoveParent,
/*4603*/          OPC_CheckType, MVT::i32,
/*4605*/          OPC_EmitConvertToTarget, 1,
/*4607*/          OPC_EmitNodeXForm, 0, 2, // HI16
/*4610*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ANDISo), 0,
                      2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (and:i32 GPRC:i32:$src1, (imm:i32)<<P:Predicate_imm16ShiftedZExt>><<X:HI16>>:$src2) - Complexity = 7
                  // Dst: (ANDISo:i32:i32 GPRC:i32:$src1, (HI16:i32 (imm:i32):$src2))
/*4620*/        /*Scope*/ 20, /*->4641*/
/*4621*/          OPC_CheckPredicate, 64, // Predicate_immZExt16
/*4623*/          OPC_MoveParent,
/*4624*/          OPC_CheckType, MVT::i64,
/*4626*/          OPC_EmitConvertToTarget, 1,
/*4628*/          OPC_EmitNodeXForm, 1, 2, // LO16
/*4631*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ANDIo8), 0,
                      2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (and:i64 G8RC:i64:$src1, (imm:i64)<<P:Predicate_immZExt16>><<X:LO16>>:$src2) - Complexity = 7
                  // Dst: (ANDIo8:i64:i32 G8RC:i64:$src1, (LO16:i32 (imm:i64):$src2))
/*4641*/        /*Scope*/ 20, /*->4662*/
/*4642*/          OPC_CheckPredicate, 65, // Predicate_imm16ShiftedZExt
/*4644*/          OPC_MoveParent,
/*4645*/          OPC_CheckType, MVT::i64,
/*4647*/          OPC_EmitConvertToTarget, 1,
/*4649*/          OPC_EmitNodeXForm, 0, 2, // HI16
/*4652*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ANDISo8), 0,
                      2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (and:i64 G8RC:i64:$src1, (imm:i64)<<P:Predicate_imm16ShiftedZExt>><<X:HI16>>:$src2) - Complexity = 7
                  // Dst: (ANDISo8:i64:i32 G8RC:i64:$src1, (HI16:i32 (imm:i64):$src2))
/*4662*/        0, /*End of Scope*/
/*4663*/      /*Scope*/ 11, /*->4675*/
/*4664*/        OPC_CheckType, MVT::i32,
/*4666*/        OPC_MorphNodeTo, TARGET_VAL(PPC::AND), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (and:i32 GPRC:i32:$rS, GPRC:i32:$rB) - Complexity = 3
                // Dst: (AND:i32 GPRC:i32:$rS, GPRC:i32:$rB)
/*4675*/      /*Scope*/ 11, /*->4687*/
/*4676*/        OPC_CheckType, MVT::i64,
/*4678*/        OPC_MorphNodeTo, TARGET_VAL(PPC::AND8), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (and:i64 G8RC:i64:$rS, G8RC:i64:$rB) - Complexity = 3
                // Dst: (AND8:i64 G8RC:i64:$rS, G8RC:i64:$rB)
/*4687*/      /*Scope*/ 11, /*->4699*/
/*4688*/        OPC_CheckType, MVT::v4i32,
/*4690*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VAND), 0,
                    1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
                // Src: (and:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 3
                // Dst: (VAND:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*4699*/      0, /*End of Scope*/
/*4700*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 2|128,2/*258*/,  TARGET_VAL(ISD::OR),// ->4963
/*4705*/    OPC_Scope, 46, /*->4753*/ // 3 children in Scope
/*4707*/      OPC_RecordChild0, // #0 = $rS
/*4708*/      OPC_MoveChild, 1,
/*4710*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*4713*/      OPC_RecordChild0, // #1 = $rB
/*4714*/      OPC_MoveChild, 1,
/*4716*/      OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*4727*/      OPC_MoveParent,
/*4728*/      OPC_MoveParent,
/*4729*/      OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->4741
/*4732*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ORC), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (or:i32 GPRC:i32:$rS, (xor:i32 GPRC:i32:$rB, -1:i32)) - Complexity = 11
                // Dst: (ORC:i32 GPRC:i32:$rS, GPRC:i32:$rB)
              /*SwitchType*/ 9,  MVT::i64,// ->4752
/*4743*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ORC8), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (or:i64 G8RC:i64:$rS, (xor:i64 G8RC:i64:$rB, -1:i64)) - Complexity = 11
                // Dst: (ORC8:i64 G8RC:i64:$rS, G8RC:i64:$rB)
              0, // EndSwitchType
/*4753*/    /*Scope*/ 46, /*->4800*/
/*4754*/      OPC_MoveChild, 0,
/*4756*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*4759*/      OPC_RecordChild0, // #0 = $rB
/*4760*/      OPC_MoveChild, 1,
/*4762*/      OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*4773*/      OPC_MoveParent,
/*4774*/      OPC_MoveParent,
/*4775*/      OPC_RecordChild1, // #1 = $rS
/*4776*/      OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->4788
/*4779*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ORC), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (or:i32 (xor:i32 GPRC:i32:$rB, -1:i32), GPRC:i32:$rS) - Complexity = 11
                // Dst: (ORC:i32 GPRC:i32:$rS, GPRC:i32:$rB)
              /*SwitchType*/ 9,  MVT::i64,// ->4799
/*4790*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ORC8), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                // Src: (or:i64 (xor:i64 G8RC:i64:$rB, -1:i64), G8RC:i64:$rS) - Complexity = 11
                // Dst: (ORC8:i64 G8RC:i64:$rS, G8RC:i64:$rB)
              0, // EndSwitchType
/*4800*/    /*Scope*/ 32|128,1/*160*/, /*->4962*/
/*4802*/      OPC_RecordChild0, // #0 = $src1
/*4803*/      OPC_RecordChild1, // #1 = $src2
/*4804*/      OPC_Scope, 119, /*->4925*/ // 4 children in Scope
/*4806*/        OPC_MoveChild, 1,
/*4808*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4811*/        OPC_Scope, 19, /*->4832*/ // 5 children in Scope
/*4813*/          OPC_CheckPredicate, 64, // Predicate_immZExt16
/*4815*/          OPC_MoveParent,
/*4816*/          OPC_CheckType, MVT::i32,
/*4818*/          OPC_EmitConvertToTarget, 1,
/*4820*/          OPC_EmitNodeXForm, 1, 2, // LO16
/*4823*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ORI), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (or:i32 GPRC:i32:$src1, (imm:i32)<<P:Predicate_immZExt16>><<X:LO16>>:$src2) - Complexity = 7
                  // Dst: (ORI:i32 GPRC:i32:$src1, (LO16:i32 (imm:i32):$src2))
/*4832*/        /*Scope*/ 19, /*->4852*/
/*4833*/          OPC_CheckPredicate, 65, // Predicate_imm16ShiftedZExt
/*4835*/          OPC_MoveParent,
/*4836*/          OPC_CheckType, MVT::i32,
/*4838*/          OPC_EmitConvertToTarget, 1,
/*4840*/          OPC_EmitNodeXForm, 0, 2, // HI16
/*4843*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ORIS), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (or:i32 GPRC:i32:$src1, (imm:i32)<<P:Predicate_imm16ShiftedZExt>><<X:HI16>>:$src2) - Complexity = 7
                  // Dst: (ORIS:i32 GPRC:i32:$src1, (HI16:i32 (imm:i32):$src2))
/*4852*/        /*Scope*/ 19, /*->4872*/
/*4853*/          OPC_CheckPredicate, 64, // Predicate_immZExt16
/*4855*/          OPC_MoveParent,
/*4856*/          OPC_CheckType, MVT::i64,
/*4858*/          OPC_EmitConvertToTarget, 1,
/*4860*/          OPC_EmitNodeXForm, 1, 2, // LO16
/*4863*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ORI8), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                  // Src: (or:i64 G8RC:i64:$src1, (imm:i64)<<P:Predicate_immZExt16>><<X:LO16>>:$src2) - Complexity = 7
                  // Dst: (ORI8:i64 G8RC:i64:$src1, (LO16:i32 (imm:i64):$src2))
/*4872*/        /*Scope*/ 19, /*->4892*/
/*4873*/          OPC_CheckPredicate, 65, // Predicate_imm16ShiftedZExt
/*4875*/          OPC_MoveParent,
/*4876*/          OPC_CheckType, MVT::i64,
/*4878*/          OPC_EmitConvertToTarget, 1,
/*4880*/          OPC_EmitNodeXForm, 0, 2, // HI16
/*4883*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ORIS8), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                  // Src: (or:i64 G8RC:i64:$src1, (imm:i64)<<P:Predicate_imm16ShiftedZExt>><<X:HI16>>:$src2) - Complexity = 7
                  // Dst: (ORIS8:i64 G8RC:i64:$src1, (HI16:i32 (imm:i64):$src2))
/*4892*/        /*Scope*/ 31, /*->4924*/
/*4893*/          OPC_MoveParent,
/*4894*/          OPC_CheckType, MVT::i32,
/*4896*/          OPC_EmitConvertToTarget, 1,
/*4898*/          OPC_EmitNodeXForm, 1, 2, // LO16
/*4901*/          OPC_EmitNode, TARGET_VAL(PPC::ORI), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3,  // Results = #4
/*4910*/          OPC_EmitConvertToTarget, 1,
/*4912*/          OPC_EmitNodeXForm, 0, 5, // HI16
/*4915*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ORIS), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 4, 6, 
                  // Src: (or:i32 GPRC:i32:$in, (imm:i32):$imm) - Complexity = 6
                  // Dst: (ORIS:i32 (ORI:i32 GPRC:i32:$in, (LO16:i32 (imm:i32):$imm)), (HI16:i32 (imm:i32):$imm))
/*4924*/        0, /*End of Scope*/
/*4925*/      /*Scope*/ 11, /*->4937*/
/*4926*/        OPC_CheckType, MVT::i32,
/*4928*/        OPC_MorphNodeTo, TARGET_VAL(PPC::OR), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (or:i32 GPRC:i32:$rS, GPRC:i32:$rB) - Complexity = 3
                // Dst: (OR:i32 GPRC:i32:$rS, GPRC:i32:$rB)
/*4937*/      /*Scope*/ 11, /*->4949*/
/*4938*/        OPC_CheckType, MVT::i64,
/*4940*/        OPC_MorphNodeTo, TARGET_VAL(PPC::OR8), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (or:i64 G8RC:i64:$rS, G8RC:i64:$rB) - Complexity = 3
                // Dst: (OR8:i64 G8RC:i64:$rS, G8RC:i64:$rB)
/*4949*/      /*Scope*/ 11, /*->4961*/
/*4950*/        OPC_CheckType, MVT::v4i32,
/*4952*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VOR), 0,
                    1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
                // Src: (or:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 3
                // Dst: (VOR:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*4961*/      0, /*End of Scope*/
/*4962*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 30|128,1/*158*/,  TARGET_VAL(PPCISD::Hi),// ->5125
/*4967*/    OPC_RecordChild0, // #0 = $in
/*4968*/    OPC_MoveChild, 0,
/*4970*/    OPC_SwitchOpcode /*5 cases */, 28,  TARGET_VAL(ISD::TargetGlobalAddress),// ->5002
/*4974*/      OPC_MoveParent,
/*4975*/      OPC_MoveChild, 1,
/*4977*/      OPC_CheckInteger, 0, 
/*4979*/      OPC_MoveParent,
/*4980*/      OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->4991
/*4983*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LIS), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (PPChi:i32 (tglobaladdr:i32):$in, 0:i32) - Complexity = 11
                // Dst: (LIS:i32 (tglobaladdr:i32):$in)
              /*SwitchType*/ 8,  MVT::i64,// ->5001
/*4993*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LIS8), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (PPChi:i64 (tglobaladdr:i64):$in, 0:i64) - Complexity = 11
                // Dst: (LIS8:i64 (tglobaladdr:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 28,  TARGET_VAL(ISD::TargetConstantPool),// ->5033
/*5005*/      OPC_MoveParent,
/*5006*/      OPC_MoveChild, 1,
/*5008*/      OPC_CheckInteger, 0, 
/*5010*/      OPC_MoveParent,
/*5011*/      OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->5022
/*5014*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LIS), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (PPChi:i32 (tconstpool:i32):$in, 0:i32) - Complexity = 11
                // Dst: (LIS:i32 (tconstpool:i32):$in)
              /*SwitchType*/ 8,  MVT::i64,// ->5032
/*5024*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LIS8), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (PPChi:i64 (tconstpool:i64):$in, 0:i64) - Complexity = 11
                // Dst: (LIS8:i64 (tconstpool:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 28,  TARGET_VAL(ISD::TargetJumpTable),// ->5064
/*5036*/      OPC_MoveParent,
/*5037*/      OPC_MoveChild, 1,
/*5039*/      OPC_CheckInteger, 0, 
/*5041*/      OPC_MoveParent,
/*5042*/      OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->5053
/*5045*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LIS), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (PPChi:i32 (tjumptable:i32):$in, 0:i32) - Complexity = 11
                // Dst: (LIS:i32 (tjumptable:i32):$in)
              /*SwitchType*/ 8,  MVT::i64,// ->5063
/*5055*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LIS8), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (PPChi:i64 (tjumptable:i64):$in, 0:i64) - Complexity = 11
                // Dst: (LIS8:i64 (tjumptable:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 28,  TARGET_VAL(ISD::TargetBlockAddress),// ->5095
/*5067*/      OPC_MoveParent,
/*5068*/      OPC_MoveChild, 1,
/*5070*/      OPC_CheckInteger, 0, 
/*5072*/      OPC_MoveParent,
/*5073*/      OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->5084
/*5076*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LIS), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (PPChi:i32 (tblockaddress:i32):$in, 0:i32) - Complexity = 11
                // Dst: (LIS:i32 (tblockaddress:i32):$in)
              /*SwitchType*/ 8,  MVT::i64,// ->5094
/*5086*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LIS8), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (PPChi:i64 (tblockaddress:i64):$in, 0:i64) - Complexity = 11
                // Dst: (LIS8:i64 (tblockaddress:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 26,  TARGET_VAL(ISD::TargetGlobalTLSAddress),// ->5124
/*5098*/      OPC_MoveParent,
/*5099*/      OPC_RecordChild1, // #1 = $in
/*5100*/      OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->5112
/*5103*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (PPChi:i32 (tglobaltlsaddr:i32):$g, GPRC:i32:$in) - Complexity = 6
                // Dst: (ADDIS:i32 GPRC:i32:$in, (tglobaltlsaddr:i32):$g)
              /*SwitchType*/ 9,  MVT::i64,// ->5123
/*5114*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS8), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                // Src: (PPChi:i64 (tglobaltlsaddr:i64):$g, G8RC:i64:$in) - Complexity = 6
                // Dst: (ADDIS8:i64 G8RC:i64:$in, (tglobaltlsaddr:i64):$g)
              0, // EndSwitchType
            0, // EndSwitchOpcode
          /*SwitchOpcode*/ 30|128,1/*158*/,  TARGET_VAL(PPCISD::Lo),// ->5287
/*5129*/    OPC_RecordChild0, // #0 = $in
/*5130*/    OPC_MoveChild, 0,
/*5132*/    OPC_SwitchOpcode /*5 cases */, 28,  TARGET_VAL(ISD::TargetGlobalAddress),// ->5164
/*5136*/      OPC_MoveParent,
/*5137*/      OPC_MoveChild, 1,
/*5139*/      OPC_CheckInteger, 0, 
/*5141*/      OPC_MoveParent,
/*5142*/      OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->5153
/*5145*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LI), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (PPClo:i32 (tglobaladdr:i32):$in, 0:i32) - Complexity = 11
                // Dst: (LI:i32 (tglobaladdr:i32):$in)
              /*SwitchType*/ 8,  MVT::i64,// ->5163
/*5155*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LI8), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (PPClo:i64 (tglobaladdr:i64):$in, 0:i64) - Complexity = 11
                // Dst: (LI8:i64 (tglobaladdr:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 28,  TARGET_VAL(ISD::TargetConstantPool),// ->5195
/*5167*/      OPC_MoveParent,
/*5168*/      OPC_MoveChild, 1,
/*5170*/      OPC_CheckInteger, 0, 
/*5172*/      OPC_MoveParent,
/*5173*/      OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->5184
/*5176*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LI), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (PPClo:i32 (tconstpool:i32):$in, 0:i32) - Complexity = 11
                // Dst: (LI:i32 (tconstpool:i32):$in)
              /*SwitchType*/ 8,  MVT::i64,// ->5194
/*5186*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LI8), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (PPClo:i64 (tconstpool:i64):$in, 0:i64) - Complexity = 11
                // Dst: (LI8:i64 (tconstpool:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 28,  TARGET_VAL(ISD::TargetJumpTable),// ->5226
/*5198*/      OPC_MoveParent,
/*5199*/      OPC_MoveChild, 1,
/*5201*/      OPC_CheckInteger, 0, 
/*5203*/      OPC_MoveParent,
/*5204*/      OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->5215
/*5207*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LI), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (PPClo:i32 (tjumptable:i32):$in, 0:i32) - Complexity = 11
                // Dst: (LI:i32 (tjumptable:i32):$in)
              /*SwitchType*/ 8,  MVT::i64,// ->5225
/*5217*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LI8), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (PPClo:i64 (tjumptable:i64):$in, 0:i64) - Complexity = 11
                // Dst: (LI8:i64 (tjumptable:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 28,  TARGET_VAL(ISD::TargetBlockAddress),// ->5257
/*5229*/      OPC_MoveParent,
/*5230*/      OPC_MoveChild, 1,
/*5232*/      OPC_CheckInteger, 0, 
/*5234*/      OPC_MoveParent,
/*5235*/      OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->5246
/*5238*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LI), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (PPClo:i32 (tblockaddress:i32):$in, 0:i32) - Complexity = 11
                // Dst: (LI:i32 (tblockaddress:i32):$in)
              /*SwitchType*/ 8,  MVT::i64,// ->5256
/*5248*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LI8), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (PPClo:i64 (tblockaddress:i64):$in, 0:i64) - Complexity = 11
                // Dst: (LI8:i64 (tblockaddress:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 26,  TARGET_VAL(ISD::TargetGlobalTLSAddress),// ->5286
/*5260*/      OPC_MoveParent,
/*5261*/      OPC_RecordChild1, // #1 = $in
/*5262*/      OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->5274
/*5265*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIL), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (PPClo:i32 (tglobaltlsaddr:i32):$g, GPRC:i32:$in) - Complexity = 6
                // Dst: (ADDIL:i32 GPRC:i32:$in, (tglobaltlsaddr:i32):$g)
              /*SwitchType*/ 9,  MVT::i64,// ->5285
/*5276*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ADDI8L), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                // Src: (PPClo:i64 (tglobaltlsaddr:i64):$g, G8RC:i64:$in) - Complexity = 6
                // Dst: (ADDI8L:i64 G8RC:i64:$in, (tglobaltlsaddr:i64):$g)
              0, // EndSwitchType
            0, // EndSwitchOpcode
          /*SwitchOpcode*/ 113,  TARGET_VAL(ISD::INTRINSIC_W_CHAIN),// ->5403
/*5290*/    OPC_RecordNode,   // #0 = 'intrinsic_w_chain' chained node
/*5291*/    OPC_MoveChild, 1,
/*5293*/    OPC_Scope, 18, /*->5313*/ // 6 children in Scope
/*5295*/      OPC_CheckInteger, 52|128,11/*1460*/, 
/*5298*/      OPC_MoveParent,
/*5299*/      OPC_RecordChild2, // #1 = $src
/*5300*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$src #2 #3
/*5303*/      OPC_EmitMergeInputChains1_0,
/*5304*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LVEBX), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 2, 3, 
              // Src: (intrinsic_w_chain:v16i8 1460:iPTR, xoaddr:iPTR:$src) - Complexity = 17
              // Dst: (LVEBX:v16i8 xoaddr:iPTR:$src)
/*5313*/    /*Scope*/ 18, /*->5332*/
/*5314*/      OPC_CheckInteger, 53|128,11/*1461*/, 
/*5317*/      OPC_MoveParent,
/*5318*/      OPC_RecordChild2, // #1 = $src
/*5319*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$src #2 #3
/*5322*/      OPC_EmitMergeInputChains1_0,
/*5323*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LVEHX), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 2, 3, 
              // Src: (intrinsic_w_chain:v8i16 1461:iPTR, xoaddr:iPTR:$src) - Complexity = 17
              // Dst: (LVEHX:v8i16 xoaddr:iPTR:$src)
/*5332*/    /*Scope*/ 18, /*->5351*/
/*5333*/      OPC_CheckInteger, 54|128,11/*1462*/, 
/*5336*/      OPC_MoveParent,
/*5337*/      OPC_RecordChild2, // #1 = $src
/*5338*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$src #2 #3
/*5341*/      OPC_EmitMergeInputChains1_0,
/*5342*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LVEWX), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 2, 3, 
              // Src: (intrinsic_w_chain:v4i32 1462:iPTR, xoaddr:iPTR:$src) - Complexity = 17
              // Dst: (LVEWX:v4i32 xoaddr:iPTR:$src)
/*5351*/    /*Scope*/ 18, /*->5370*/
/*5352*/      OPC_CheckInteger, 57|128,11/*1465*/, 
/*5355*/      OPC_MoveParent,
/*5356*/      OPC_RecordChild2, // #1 = $src
/*5357*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$src #2 #3
/*5360*/      OPC_EmitMergeInputChains1_0,
/*5361*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LVX), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 2, 3, 
              // Src: (intrinsic_w_chain:v4i32 1465:iPTR, xoaddr:iPTR:$src) - Complexity = 17
              // Dst: (LVX:v4i32 xoaddr:iPTR:$src)
/*5370*/    /*Scope*/ 18, /*->5389*/
/*5371*/      OPC_CheckInteger, 58|128,11/*1466*/, 
/*5374*/      OPC_MoveParent,
/*5375*/      OPC_RecordChild2, // #1 = $src
/*5376*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$src #2 #3
/*5379*/      OPC_EmitMergeInputChains1_0,
/*5380*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LVXL), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 2, 3, 
              // Src: (intrinsic_w_chain:v4i32 1466:iPTR, xoaddr:iPTR:$src) - Complexity = 17
              // Dst: (LVXL:v4i32 xoaddr:iPTR:$src)
/*5389*/    /*Scope*/ 12, /*->5402*/
/*5390*/      OPC_CheckInteger, 59|128,11/*1467*/, 
/*5393*/      OPC_MoveParent,
/*5394*/      OPC_EmitMergeInputChains1_0,
/*5395*/      OPC_MorphNodeTo, TARGET_VAL(PPC::MFVSCR), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v8i16, 0/*#Ops*/, 
              // Src: (intrinsic_w_chain:v8i16 1467:iPTR) - Complexity = 8
              // Dst: (MFVSCR:v8i16)
/*5402*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 90|128,13/*1754*/,  TARGET_VAL(ISD::INTRINSIC_WO_CHAIN),// ->7161
/*5407*/    OPC_MoveChild, 0,
/*5409*/    OPC_Scope, 17, /*->5428*/ // 103 children in Scope
/*5411*/      OPC_CheckInteger, 55|128,11/*1463*/, 
/*5414*/      OPC_MoveParent,
/*5415*/      OPC_RecordChild1, // #0 = $src
/*5416*/      OPC_CheckComplexPat, /*CP*/0, /*#*/0, // SelectAddrIdxOnly:$src #1 #2
/*5419*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LVSL), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_wo_chain:v16i8 1463:iPTR, xoaddr:iPTR:$src) - Complexity = 17
              // Dst: (LVSL:v16i8 xoaddr:iPTR:$src)
/*5428*/    /*Scope*/ 17, /*->5446*/
/*5429*/      OPC_CheckInteger, 56|128,11/*1464*/, 
/*5432*/      OPC_MoveParent,
/*5433*/      OPC_RecordChild1, // #0 = $src
/*5434*/      OPC_CheckComplexPat, /*CP*/0, /*#*/0, // SelectAddrIdxOnly:$src #1 #2
/*5437*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LVSR), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_wo_chain:v16i8 1464:iPTR, xoaddr:iPTR:$src) - Complexity = 17
              // Dst: (LVSR:v16i8 xoaddr:iPTR:$src)
/*5446*/    /*Scope*/ 40, /*->5487*/
/*5447*/      OPC_CheckInteger, 108|128,11/*1516*/, 
/*5450*/      OPC_MoveParent,
/*5451*/      OPC_RecordChild1, // #0 = $vB
/*5452*/      OPC_Scope, 13, /*->5467*/ // 2 children in Scope
/*5454*/        OPC_MoveChild, 2,
/*5456*/        OPC_CheckInteger, 0, 
/*5458*/        OPC_MoveParent,
/*5459*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VCTUXS_0), 0,
                    1/*#VTs*/, MVT::v4i32, 1/*#Ops*/, 0, 
                // Src: (intrinsic_wo_chain:v4i32 1516:iPTR, VRRC:v4f32:$vB, 0:i32) - Complexity = 13
                // Dst: (VCTUXS_0:v4i32 VRRC:v4f32:$vB)
/*5467*/      /*Scope*/ 18, /*->5486*/
/*5468*/        OPC_RecordChild2, // #1 = $UIMM
/*5469*/        OPC_MoveChild, 2,
/*5471*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*5474*/        OPC_MoveParent,
/*5475*/        OPC_EmitConvertToTarget, 1,
/*5477*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VCTUXS), 0,
                    1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 2, 0, 
                // Src: (intrinsic_wo_chain:v4i32 1516:iPTR, VRRC:v4f32:$vB, (imm:i32):$UIMM) - Complexity = 11
                // Dst: (VCTUXS:v4i32 (imm:i32):$UIMM, VRRC:v4f32:$vB)
/*5486*/      0, /*End of Scope*/
/*5487*/    /*Scope*/ 40, /*->5528*/
/*5488*/      OPC_CheckInteger, 107|128,11/*1515*/, 
/*5491*/      OPC_MoveParent,
/*5492*/      OPC_RecordChild1, // #0 = $vB
/*5493*/      OPC_Scope, 13, /*->5508*/ // 2 children in Scope
/*5495*/        OPC_MoveChild, 2,
/*5497*/        OPC_CheckInteger, 0, 
/*5499*/        OPC_MoveParent,
/*5500*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VCTSXS_0), 0,
                    1/*#VTs*/, MVT::v4i32, 1/*#Ops*/, 0, 
                // Src: (intrinsic_wo_chain:v4i32 1515:iPTR, VRRC:v4f32:$vB, 0:i32) - Complexity = 13
                // Dst: (VCTSXS_0:v4i32 VRRC:v4f32:$vB)
/*5508*/      /*Scope*/ 18, /*->5527*/
/*5509*/        OPC_RecordChild2, // #1 = $UIMM
/*5510*/        OPC_MoveChild, 2,
/*5512*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*5515*/        OPC_MoveParent,
/*5516*/        OPC_EmitConvertToTarget, 1,
/*5518*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VCTSXS), 0,
                    1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 2, 0, 
                // Src: (intrinsic_wo_chain:v4i32 1515:iPTR, VRRC:v4f32:$vB, (imm:i32):$UIMM) - Complexity = 11
                // Dst: (VCTSXS:v4i32 (imm:i32):$UIMM, VRRC:v4f32:$vB)
/*5527*/      0, /*End of Scope*/
/*5528*/    /*Scope*/ 40, /*->5569*/
/*5529*/      OPC_CheckInteger, 79|128,11/*1487*/, 
/*5532*/      OPC_MoveParent,
/*5533*/      OPC_RecordChild1, // #0 = $vB
/*5534*/      OPC_Scope, 13, /*->5549*/ // 2 children in Scope
/*5536*/        OPC_MoveChild, 2,
/*5538*/        OPC_CheckInteger, 0, 
/*5540*/        OPC_MoveParent,
/*5541*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VCFSX_0), 0,
                    1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
                // Src: (intrinsic_wo_chain:v4f32 1487:iPTR, VRRC:v4i32:$vB, 0:i32) - Complexity = 13
                // Dst: (VCFSX_0:v4f32 VRRC:v4i32:$vB)
/*5549*/      /*Scope*/ 18, /*->5568*/
/*5550*/        OPC_RecordChild2, // #1 = $UIMM
/*5551*/        OPC_MoveChild, 2,
/*5553*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*5556*/        OPC_MoveParent,
/*5557*/        OPC_EmitConvertToTarget, 1,
/*5559*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VCFSX), 0,
                    1/*#VTs*/, MVT::v4f32, 2/*#Ops*/, 2, 0, 
                // Src: (intrinsic_wo_chain:v4f32 1487:iPTR, VRRC:v4i32:$vB, (imm:i32):$UIMM) - Complexity = 11
                // Dst: (VCFSX:v4f32 (imm:i32):$UIMM, VRRC:v4i32:$vB)
/*5568*/      0, /*End of Scope*/
/*5569*/    /*Scope*/ 40, /*->5610*/
/*5570*/      OPC_CheckInteger, 80|128,11/*1488*/, 
/*5573*/      OPC_MoveParent,
/*5574*/      OPC_RecordChild1, // #0 = $vB
/*5575*/      OPC_Scope, 13, /*->5590*/ // 2 children in Scope
/*5577*/        OPC_MoveChild, 2,
/*5579*/        OPC_CheckInteger, 0, 
/*5581*/        OPC_MoveParent,
/*5582*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VCFUX_0), 0,
                    1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
                // Src: (intrinsic_wo_chain:v4f32 1488:iPTR, VRRC:v4i32:$vB, 0:i32) - Complexity = 13
                // Dst: (VCFUX_0:v4f32 VRRC:v4i32:$vB)
/*5590*/      /*Scope*/ 18, /*->5609*/
/*5591*/        OPC_RecordChild2, // #1 = $UIMM
/*5592*/        OPC_MoveChild, 2,
/*5594*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*5597*/        OPC_MoveParent,
/*5598*/        OPC_EmitConvertToTarget, 1,
/*5600*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VCFUX), 0,
                    1/*#VTs*/, MVT::v4f32, 2/*#Ops*/, 2, 0, 
                // Src: (intrinsic_wo_chain:v4f32 1488:iPTR, VRRC:v4i32:$vB, (imm:i32):$UIMM) - Complexity = 11
                // Dst: (VCFUX:v4f32 (imm:i32):$UIMM, VRRC:v4i32:$vB)
/*5609*/      0, /*End of Scope*/
/*5610*/    /*Scope*/ 17, /*->5628*/
/*5611*/      OPC_CheckInteger, 119|128,11/*1527*/, 
/*5614*/      OPC_MoveParent,
/*5615*/      OPC_RecordChild1, // #0 = $vA
/*5616*/      OPC_RecordChild2, // #1 = $vB
/*5617*/      OPC_RecordChild3, // #2 = $vC
/*5618*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMHADDSHS), 0,
                  1/*#VTs*/, MVT::v8i16, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:v8i16 1527:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB, VRRC:v8i16:$vC) - Complexity = 8
              // Dst: (VMHADDSHS:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB, VRRC:v8i16:$vC)
/*5628*/    /*Scope*/ 17, /*->5646*/
/*5629*/      OPC_CheckInteger, 120|128,11/*1528*/, 
/*5632*/      OPC_MoveParent,
/*5633*/      OPC_RecordChild1, // #0 = $vA
/*5634*/      OPC_RecordChild2, // #1 = $vB
/*5635*/      OPC_RecordChild3, // #2 = $vC
/*5636*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMHRADDSHS), 0,
                  1/*#VTs*/, MVT::v8i16, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:v8i16 1528:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB, VRRC:v8i16:$vC) - Complexity = 8
              // Dst: (VMHRADDSHS:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB, VRRC:v8i16:$vC)
/*5646*/    /*Scope*/ 17, /*->5664*/
/*5647*/      OPC_CheckInteger, 0|128,12/*1536*/, 
/*5650*/      OPC_MoveParent,
/*5651*/      OPC_RecordChild1, // #0 = $vA
/*5652*/      OPC_RecordChild2, // #1 = $vB
/*5653*/      OPC_RecordChild3, // #2 = $vC
/*5654*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMLADDUHM), 0,
                  1/*#VTs*/, MVT::v8i16, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:v8i16 1536:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB, VRRC:v8i16:$vC) - Complexity = 8
              // Dst: (VMLADDUHM:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB, VRRC:v8i16:$vC)
/*5664*/    /*Scope*/ 17, /*->5682*/
/*5665*/      OPC_CheckInteger, 16|128,12/*1552*/, 
/*5668*/      OPC_MoveParent,
/*5669*/      OPC_RecordChild1, // #0 = $vA
/*5670*/      OPC_RecordChild2, // #1 = $vB
/*5671*/      OPC_RecordChild3, // #2 = $vC
/*5672*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VPERM), 0,
                  1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:v4i32 1552:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB, VRRC:v16i8:$vC) - Complexity = 8
              // Dst: (VPERM:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB, VRRC:v16i8:$vC)
/*5682*/    /*Scope*/ 17, /*->5700*/
/*5683*/      OPC_CheckInteger, 33|128,12/*1569*/, 
/*5686*/      OPC_MoveParent,
/*5687*/      OPC_RecordChild1, // #0 = $vA
/*5688*/      OPC_RecordChild2, // #1 = $vB
/*5689*/      OPC_RecordChild3, // #2 = $vC
/*5690*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSEL), 0,
                  1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:v4i32 1569:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB, VRRC:v4i32:$vC) - Complexity = 8
              // Dst: (VSEL:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB, VRRC:v4i32:$vC)
/*5700*/    /*Scope*/ 15, /*->5716*/
/*5701*/      OPC_CheckInteger, 66|128,11/*1474*/, 
/*5704*/      OPC_MoveParent,
/*5705*/      OPC_RecordChild1, // #0 = $vA
/*5706*/      OPC_RecordChild2, // #1 = $vB
/*5707*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VADDCUW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1474:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VADDCUW:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*5716*/    /*Scope*/ 15, /*->5732*/
/*5717*/      OPC_CheckInteger, 67|128,11/*1475*/, 
/*5720*/      OPC_MoveParent,
/*5721*/      OPC_RecordChild1, // #0 = $vA
/*5722*/      OPC_RecordChild2, // #1 = $vB
/*5723*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VADDSBS), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 1475:iPTR, VRRC:v16i8:$vA, VRRC:v16i8:$vB) - Complexity = 8
              // Dst: (VADDSBS:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*5732*/    /*Scope*/ 15, /*->5748*/
/*5733*/      OPC_CheckInteger, 68|128,11/*1476*/, 
/*5736*/      OPC_MoveParent,
/*5737*/      OPC_RecordChild1, // #0 = $vA
/*5738*/      OPC_RecordChild2, // #1 = $vB
/*5739*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VADDSHS), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1476:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB) - Complexity = 8
              // Dst: (VADDSHS:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*5748*/    /*Scope*/ 15, /*->5764*/
/*5749*/      OPC_CheckInteger, 69|128,11/*1477*/, 
/*5752*/      OPC_MoveParent,
/*5753*/      OPC_RecordChild1, // #0 = $vA
/*5754*/      OPC_RecordChild2, // #1 = $vB
/*5755*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VADDSWS), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1477:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VADDSWS:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*5764*/    /*Scope*/ 15, /*->5780*/
/*5765*/      OPC_CheckInteger, 70|128,11/*1478*/, 
/*5768*/      OPC_MoveParent,
/*5769*/      OPC_RecordChild1, // #0 = $vA
/*5770*/      OPC_RecordChild2, // #1 = $vB
/*5771*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VADDUBS), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 1478:iPTR, VRRC:v16i8:$vA, VRRC:v16i8:$vB) - Complexity = 8
              // Dst: (VADDUBS:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*5780*/    /*Scope*/ 15, /*->5796*/
/*5781*/      OPC_CheckInteger, 71|128,11/*1479*/, 
/*5784*/      OPC_MoveParent,
/*5785*/      OPC_RecordChild1, // #0 = $vA
/*5786*/      OPC_RecordChild2, // #1 = $vB
/*5787*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VADDUHS), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1479:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB) - Complexity = 8
              // Dst: (VADDUHS:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*5796*/    /*Scope*/ 15, /*->5812*/
/*5797*/      OPC_CheckInteger, 72|128,11/*1480*/, 
/*5800*/      OPC_MoveParent,
/*5801*/      OPC_RecordChild1, // #0 = $vA
/*5802*/      OPC_RecordChild2, // #1 = $vB
/*5803*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VADDUWS), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1480:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VADDUWS:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*5812*/    /*Scope*/ 15, /*->5828*/
/*5813*/      OPC_CheckInteger, 73|128,11/*1481*/, 
/*5816*/      OPC_MoveParent,
/*5817*/      OPC_RecordChild1, // #0 = $vA
/*5818*/      OPC_RecordChild2, // #1 = $vB
/*5819*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VAVGSB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 1481:iPTR, VRRC:v16i8:$vA, VRRC:v16i8:$vB) - Complexity = 8
              // Dst: (VAVGSB:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*5828*/    /*Scope*/ 15, /*->5844*/
/*5829*/      OPC_CheckInteger, 74|128,11/*1482*/, 
/*5832*/      OPC_MoveParent,
/*5833*/      OPC_RecordChild1, // #0 = $vA
/*5834*/      OPC_RecordChild2, // #1 = $vB
/*5835*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VAVGSH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1482:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB) - Complexity = 8
              // Dst: (VAVGSH:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*5844*/    /*Scope*/ 15, /*->5860*/
/*5845*/      OPC_CheckInteger, 75|128,11/*1483*/, 
/*5848*/      OPC_MoveParent,
/*5849*/      OPC_RecordChild1, // #0 = $vA
/*5850*/      OPC_RecordChild2, // #1 = $vB
/*5851*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VAVGSW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1483:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VAVGSW:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*5860*/    /*Scope*/ 15, /*->5876*/
/*5861*/      OPC_CheckInteger, 76|128,11/*1484*/, 
/*5864*/      OPC_MoveParent,
/*5865*/      OPC_RecordChild1, // #0 = $vA
/*5866*/      OPC_RecordChild2, // #1 = $vB
/*5867*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VAVGUB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 1484:iPTR, VRRC:v16i8:$vA, VRRC:v16i8:$vB) - Complexity = 8
              // Dst: (VAVGUB:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*5876*/    /*Scope*/ 15, /*->5892*/
/*5877*/      OPC_CheckInteger, 77|128,11/*1485*/, 
/*5880*/      OPC_MoveParent,
/*5881*/      OPC_RecordChild1, // #0 = $vA
/*5882*/      OPC_RecordChild2, // #1 = $vB
/*5883*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VAVGUH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1485:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB) - Complexity = 8
              // Dst: (VAVGUH:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*5892*/    /*Scope*/ 15, /*->5908*/
/*5893*/      OPC_CheckInteger, 78|128,11/*1486*/, 
/*5896*/      OPC_MoveParent,
/*5897*/      OPC_RecordChild1, // #0 = $vA
/*5898*/      OPC_RecordChild2, // #1 = $vB
/*5899*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VAVGUW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1486:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VAVGUW:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*5908*/    /*Scope*/ 15, /*->5924*/
/*5909*/      OPC_CheckInteger, 113|128,11/*1521*/, 
/*5912*/      OPC_MoveParent,
/*5913*/      OPC_RecordChild1, // #0 = $vA
/*5914*/      OPC_RecordChild2, // #1 = $vB
/*5915*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMAXSB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 1521:iPTR, VRRC:v16i8:$vA, VRRC:v16i8:$vB) - Complexity = 8
              // Dst: (VMAXSB:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*5924*/    /*Scope*/ 15, /*->5940*/
/*5925*/      OPC_CheckInteger, 114|128,11/*1522*/, 
/*5928*/      OPC_MoveParent,
/*5929*/      OPC_RecordChild1, // #0 = $vA
/*5930*/      OPC_RecordChild2, // #1 = $vB
/*5931*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMAXSH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1522:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB) - Complexity = 8
              // Dst: (VMAXSH:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*5940*/    /*Scope*/ 15, /*->5956*/
/*5941*/      OPC_CheckInteger, 115|128,11/*1523*/, 
/*5944*/      OPC_MoveParent,
/*5945*/      OPC_RecordChild1, // #0 = $vA
/*5946*/      OPC_RecordChild2, // #1 = $vB
/*5947*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMAXSW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1523:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VMAXSW:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*5956*/    /*Scope*/ 15, /*->5972*/
/*5957*/      OPC_CheckInteger, 116|128,11/*1524*/, 
/*5960*/      OPC_MoveParent,
/*5961*/      OPC_RecordChild1, // #0 = $vA
/*5962*/      OPC_RecordChild2, // #1 = $vB
/*5963*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMAXUB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 1524:iPTR, VRRC:v16i8:$vA, VRRC:v16i8:$vB) - Complexity = 8
              // Dst: (VMAXUB:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*5972*/    /*Scope*/ 15, /*->5988*/
/*5973*/      OPC_CheckInteger, 117|128,11/*1525*/, 
/*5976*/      OPC_MoveParent,
/*5977*/      OPC_RecordChild1, // #0 = $vA
/*5978*/      OPC_RecordChild2, // #1 = $vB
/*5979*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMAXUH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1525:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB) - Complexity = 8
              // Dst: (VMAXUH:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*5988*/    /*Scope*/ 15, /*->6004*/
/*5989*/      OPC_CheckInteger, 118|128,11/*1526*/, 
/*5992*/      OPC_MoveParent,
/*5993*/      OPC_RecordChild1, // #0 = $vA
/*5994*/      OPC_RecordChild2, // #1 = $vB
/*5995*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMAXUW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1526:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VMAXUW:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*6004*/    /*Scope*/ 15, /*->6020*/
/*6005*/      OPC_CheckInteger, 122|128,11/*1530*/, 
/*6008*/      OPC_MoveParent,
/*6009*/      OPC_RecordChild1, // #0 = $vA
/*6010*/      OPC_RecordChild2, // #1 = $vB
/*6011*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMINSB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 1530:iPTR, VRRC:v16i8:$vA, VRRC:v16i8:$vB) - Complexity = 8
              // Dst: (VMINSB:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*6020*/    /*Scope*/ 15, /*->6036*/
/*6021*/      OPC_CheckInteger, 123|128,11/*1531*/, 
/*6024*/      OPC_MoveParent,
/*6025*/      OPC_RecordChild1, // #0 = $vA
/*6026*/      OPC_RecordChild2, // #1 = $vB
/*6027*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMINSH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1531:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB) - Complexity = 8
              // Dst: (VMINSH:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*6036*/    /*Scope*/ 15, /*->6052*/
/*6037*/      OPC_CheckInteger, 124|128,11/*1532*/, 
/*6040*/      OPC_MoveParent,
/*6041*/      OPC_RecordChild1, // #0 = $vA
/*6042*/      OPC_RecordChild2, // #1 = $vB
/*6043*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMINSW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1532:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VMINSW:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*6052*/    /*Scope*/ 15, /*->6068*/
/*6053*/      OPC_CheckInteger, 125|128,11/*1533*/, 
/*6056*/      OPC_MoveParent,
/*6057*/      OPC_RecordChild1, // #0 = $vA
/*6058*/      OPC_RecordChild2, // #1 = $vB
/*6059*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMINUB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 1533:iPTR, VRRC:v16i8:$vA, VRRC:v16i8:$vB) - Complexity = 8
              // Dst: (VMINUB:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*6068*/    /*Scope*/ 15, /*->6084*/
/*6069*/      OPC_CheckInteger, 126|128,11/*1534*/, 
/*6072*/      OPC_MoveParent,
/*6073*/      OPC_RecordChild1, // #0 = $vA
/*6074*/      OPC_RecordChild2, // #1 = $vB
/*6075*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMINUH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1534:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB) - Complexity = 8
              // Dst: (VMINUH:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*6084*/    /*Scope*/ 15, /*->6100*/
/*6085*/      OPC_CheckInteger, 127|128,11/*1535*/, 
/*6088*/      OPC_MoveParent,
/*6089*/      OPC_RecordChild1, // #0 = $vA
/*6090*/      OPC_RecordChild2, // #1 = $vB
/*6091*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMINUW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1535:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VMINUW:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*6100*/    /*Scope*/ 17, /*->6118*/
/*6101*/      OPC_CheckInteger, 1|128,12/*1537*/, 
/*6104*/      OPC_MoveParent,
/*6105*/      OPC_RecordChild1, // #0 = $vA
/*6106*/      OPC_RecordChild2, // #1 = $vB
/*6107*/      OPC_RecordChild3, // #2 = $vC
/*6108*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMSUMMBM), 0,
                  1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:v4i32 1537:iPTR, VRRC:v16i8:$vA, VRRC:v16i8:$vB, VRRC:v4i32:$vC) - Complexity = 8
              // Dst: (VMSUMMBM:v4i32 VRRC:v16i8:$vA, VRRC:v16i8:$vB, VRRC:v4i32:$vC)
/*6118*/    /*Scope*/ 17, /*->6136*/
/*6119*/      OPC_CheckInteger, 2|128,12/*1538*/, 
/*6122*/      OPC_MoveParent,
/*6123*/      OPC_RecordChild1, // #0 = $vA
/*6124*/      OPC_RecordChild2, // #1 = $vB
/*6125*/      OPC_RecordChild3, // #2 = $vC
/*6126*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMSUMSHM), 0,
                  1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:v4i32 1538:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB, VRRC:v4i32:$vC) - Complexity = 8
              // Dst: (VMSUMSHM:v4i32 VRRC:v8i16:$vA, VRRC:v8i16:$vB, VRRC:v4i32:$vC)
/*6136*/    /*Scope*/ 17, /*->6154*/
/*6137*/      OPC_CheckInteger, 3|128,12/*1539*/, 
/*6140*/      OPC_MoveParent,
/*6141*/      OPC_RecordChild1, // #0 = $vA
/*6142*/      OPC_RecordChild2, // #1 = $vB
/*6143*/      OPC_RecordChild3, // #2 = $vC
/*6144*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMSUMSHS), 0,
                  1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:v4i32 1539:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB, VRRC:v4i32:$vC) - Complexity = 8
              // Dst: (VMSUMSHS:v4i32 VRRC:v8i16:$vA, VRRC:v8i16:$vB, VRRC:v4i32:$vC)
/*6154*/    /*Scope*/ 17, /*->6172*/
/*6155*/      OPC_CheckInteger, 4|128,12/*1540*/, 
/*6158*/      OPC_MoveParent,
/*6159*/      OPC_RecordChild1, // #0 = $vA
/*6160*/      OPC_RecordChild2, // #1 = $vB
/*6161*/      OPC_RecordChild3, // #2 = $vC
/*6162*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMSUMUBM), 0,
                  1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:v4i32 1540:iPTR, VRRC:v16i8:$vA, VRRC:v16i8:$vB, VRRC:v4i32:$vC) - Complexity = 8
              // Dst: (VMSUMUBM:v4i32 VRRC:v16i8:$vA, VRRC:v16i8:$vB, VRRC:v4i32:$vC)
/*6172*/    /*Scope*/ 17, /*->6190*/
/*6173*/      OPC_CheckInteger, 5|128,12/*1541*/, 
/*6176*/      OPC_MoveParent,
/*6177*/      OPC_RecordChild1, // #0 = $vA
/*6178*/      OPC_RecordChild2, // #1 = $vB
/*6179*/      OPC_RecordChild3, // #2 = $vC
/*6180*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMSUMUHM), 0,
                  1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:v4i32 1541:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB, VRRC:v4i32:$vC) - Complexity = 8
              // Dst: (VMSUMUHM:v4i32 VRRC:v8i16:$vA, VRRC:v8i16:$vB, VRRC:v4i32:$vC)
/*6190*/    /*Scope*/ 17, /*->6208*/
/*6191*/      OPC_CheckInteger, 6|128,12/*1542*/, 
/*6194*/      OPC_MoveParent,
/*6195*/      OPC_RecordChild1, // #0 = $vA
/*6196*/      OPC_RecordChild2, // #1 = $vB
/*6197*/      OPC_RecordChild3, // #2 = $vC
/*6198*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMSUMUHS), 0,
                  1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:v4i32 1542:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB, VRRC:v4i32:$vC) - Complexity = 8
              // Dst: (VMSUMUHS:v4i32 VRRC:v8i16:$vA, VRRC:v8i16:$vB, VRRC:v4i32:$vC)
/*6208*/    /*Scope*/ 15, /*->6224*/
/*6209*/      OPC_CheckInteger, 7|128,12/*1543*/, 
/*6212*/      OPC_MoveParent,
/*6213*/      OPC_RecordChild1, // #0 = $vA
/*6214*/      OPC_RecordChild2, // #1 = $vB
/*6215*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMULESB), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1543:iPTR, VRRC:v16i8:$vA, VRRC:v16i8:$vB) - Complexity = 8
              // Dst: (VMULESB:v8i16 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*6224*/    /*Scope*/ 15, /*->6240*/
/*6225*/      OPC_CheckInteger, 8|128,12/*1544*/, 
/*6228*/      OPC_MoveParent,
/*6229*/      OPC_RecordChild1, // #0 = $vA
/*6230*/      OPC_RecordChild2, // #1 = $vB
/*6231*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMULESH), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1544:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB) - Complexity = 8
              // Dst: (VMULESH:v4i32 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*6240*/    /*Scope*/ 15, /*->6256*/
/*6241*/      OPC_CheckInteger, 9|128,12/*1545*/, 
/*6244*/      OPC_MoveParent,
/*6245*/      OPC_RecordChild1, // #0 = $vA
/*6246*/      OPC_RecordChild2, // #1 = $vB
/*6247*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMULEUB), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1545:iPTR, VRRC:v16i8:$vA, VRRC:v16i8:$vB) - Complexity = 8
              // Dst: (VMULEUB:v8i16 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*6256*/    /*Scope*/ 15, /*->6272*/
/*6257*/      OPC_CheckInteger, 10|128,12/*1546*/, 
/*6260*/      OPC_MoveParent,
/*6261*/      OPC_RecordChild1, // #0 = $vA
/*6262*/      OPC_RecordChild2, // #1 = $vB
/*6263*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMULEUH), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1546:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB) - Complexity = 8
              // Dst: (VMULEUH:v4i32 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*6272*/    /*Scope*/ 15, /*->6288*/
/*6273*/      OPC_CheckInteger, 11|128,12/*1547*/, 
/*6276*/      OPC_MoveParent,
/*6277*/      OPC_RecordChild1, // #0 = $vA
/*6278*/      OPC_RecordChild2, // #1 = $vB
/*6279*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMULOSB), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1547:iPTR, VRRC:v16i8:$vA, VRRC:v16i8:$vB) - Complexity = 8
              // Dst: (VMULOSB:v8i16 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*6288*/    /*Scope*/ 15, /*->6304*/
/*6289*/      OPC_CheckInteger, 12|128,12/*1548*/, 
/*6292*/      OPC_MoveParent,
/*6293*/      OPC_RecordChild1, // #0 = $vA
/*6294*/      OPC_RecordChild2, // #1 = $vB
/*6295*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMULOSH), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1548:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB) - Complexity = 8
              // Dst: (VMULOSH:v4i32 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*6304*/    /*Scope*/ 15, /*->6320*/
/*6305*/      OPC_CheckInteger, 13|128,12/*1549*/, 
/*6308*/      OPC_MoveParent,
/*6309*/      OPC_RecordChild1, // #0 = $vA
/*6310*/      OPC_RecordChild2, // #1 = $vB
/*6311*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMULOUB), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1549:iPTR, VRRC:v16i8:$vA, VRRC:v16i8:$vB) - Complexity = 8
              // Dst: (VMULOUB:v8i16 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*6320*/    /*Scope*/ 15, /*->6336*/
/*6321*/      OPC_CheckInteger, 14|128,12/*1550*/, 
/*6324*/      OPC_MoveParent,
/*6325*/      OPC_RecordChild1, // #0 = $vA
/*6326*/      OPC_RecordChild2, // #1 = $vB
/*6327*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMULOUH), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1550:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB) - Complexity = 8
              // Dst: (VMULOUH:v4i32 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*6336*/    /*Scope*/ 15, /*->6352*/
/*6337*/      OPC_CheckInteger, 47|128,12/*1583*/, 
/*6340*/      OPC_MoveParent,
/*6341*/      OPC_RecordChild1, // #0 = $vA
/*6342*/      OPC_RecordChild2, // #1 = $vB
/*6343*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSUBCUW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1583:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VSUBCUW:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*6352*/    /*Scope*/ 15, /*->6368*/
/*6353*/      OPC_CheckInteger, 48|128,12/*1584*/, 
/*6356*/      OPC_MoveParent,
/*6357*/      OPC_RecordChild1, // #0 = $vA
/*6358*/      OPC_RecordChild2, // #1 = $vB
/*6359*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSUBSBS), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 1584:iPTR, VRRC:v16i8:$vA, VRRC:v16i8:$vB) - Complexity = 8
              // Dst: (VSUBSBS:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*6368*/    /*Scope*/ 15, /*->6384*/
/*6369*/      OPC_CheckInteger, 49|128,12/*1585*/, 
/*6372*/      OPC_MoveParent,
/*6373*/      OPC_RecordChild1, // #0 = $vA
/*6374*/      OPC_RecordChild2, // #1 = $vB
/*6375*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSUBSHS), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1585:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB) - Complexity = 8
              // Dst: (VSUBSHS:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*6384*/    /*Scope*/ 15, /*->6400*/
/*6385*/      OPC_CheckInteger, 50|128,12/*1586*/, 
/*6388*/      OPC_MoveParent,
/*6389*/      OPC_RecordChild1, // #0 = $vA
/*6390*/      OPC_RecordChild2, // #1 = $vB
/*6391*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSUBSWS), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1586:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VSUBSWS:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*6400*/    /*Scope*/ 15, /*->6416*/
/*6401*/      OPC_CheckInteger, 51|128,12/*1587*/, 
/*6404*/      OPC_MoveParent,
/*6405*/      OPC_RecordChild1, // #0 = $vA
/*6406*/      OPC_RecordChild2, // #1 = $vB
/*6407*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSUBUBS), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 1587:iPTR, VRRC:v16i8:$vA, VRRC:v16i8:$vB) - Complexity = 8
              // Dst: (VSUBUBS:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*6416*/    /*Scope*/ 15, /*->6432*/
/*6417*/      OPC_CheckInteger, 52|128,12/*1588*/, 
/*6420*/      OPC_MoveParent,
/*6421*/      OPC_RecordChild1, // #0 = $vA
/*6422*/      OPC_RecordChild2, // #1 = $vB
/*6423*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSUBUHS), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1588:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB) - Complexity = 8
              // Dst: (VSUBUHS:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*6432*/    /*Scope*/ 15, /*->6448*/
/*6433*/      OPC_CheckInteger, 53|128,12/*1589*/, 
/*6436*/      OPC_MoveParent,
/*6437*/      OPC_RecordChild1, // #0 = $vA
/*6438*/      OPC_RecordChild2, // #1 = $vB
/*6439*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSUBUWS), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1589:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VSUBUWS:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*6448*/    /*Scope*/ 15, /*->6464*/
/*6449*/      OPC_CheckInteger, 58|128,12/*1594*/, 
/*6452*/      OPC_MoveParent,
/*6453*/      OPC_RecordChild1, // #0 = $vA
/*6454*/      OPC_RecordChild2, // #1 = $vB
/*6455*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSUMSWS), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1594:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VSUMSWS:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*6464*/    /*Scope*/ 15, /*->6480*/
/*6465*/      OPC_CheckInteger, 54|128,12/*1590*/, 
/*6468*/      OPC_MoveParent,
/*6469*/      OPC_RecordChild1, // #0 = $vA
/*6470*/      OPC_RecordChild2, // #1 = $vB
/*6471*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSUM2SWS), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1590:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VSUM2SWS:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*6480*/    /*Scope*/ 15, /*->6496*/
/*6481*/      OPC_CheckInteger, 55|128,12/*1591*/, 
/*6484*/      OPC_MoveParent,
/*6485*/      OPC_RecordChild1, // #0 = $vA
/*6486*/      OPC_RecordChild2, // #1 = $vB
/*6487*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSUM4SBS), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1591:iPTR, VRRC:v16i8:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VSUM4SBS:v4i32 VRRC:v16i8:$vA, VRRC:v4i32:$vB)
/*6496*/    /*Scope*/ 15, /*->6512*/
/*6497*/      OPC_CheckInteger, 56|128,12/*1592*/, 
/*6500*/      OPC_MoveParent,
/*6501*/      OPC_RecordChild1, // #0 = $vA
/*6502*/      OPC_RecordChild2, // #1 = $vB
/*6503*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSUM4SHS), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1592:iPTR, VRRC:v8i16:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VSUM4SHS:v4i32 VRRC:v8i16:$vA, VRRC:v4i32:$vB)
/*6512*/    /*Scope*/ 15, /*->6528*/
/*6513*/      OPC_CheckInteger, 57|128,12/*1593*/, 
/*6516*/      OPC_MoveParent,
/*6517*/      OPC_RecordChild1, // #0 = $vA
/*6518*/      OPC_RecordChild2, // #1 = $vB
/*6519*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSUM4UBS), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1593:iPTR, VRRC:v16i8:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VSUM4UBS:v4i32 VRRC:v16i8:$vA, VRRC:v4i32:$vB)
/*6528*/    /*Scope*/ 15, /*->6544*/
/*6529*/      OPC_CheckInteger, 29|128,12/*1565*/, 
/*6532*/      OPC_MoveParent,
/*6533*/      OPC_RecordChild1, // #0 = $vA
/*6534*/      OPC_RecordChild2, // #1 = $vB
/*6535*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VRLB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 1565:iPTR, VRRC:v16i8:$vA, VRRC:v16i8:$vB) - Complexity = 8
              // Dst: (VRLB:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*6544*/    /*Scope*/ 15, /*->6560*/
/*6545*/      OPC_CheckInteger, 30|128,12/*1566*/, 
/*6548*/      OPC_MoveParent,
/*6549*/      OPC_RecordChild1, // #0 = $vA
/*6550*/      OPC_RecordChild2, // #1 = $vB
/*6551*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VRLH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1566:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB) - Complexity = 8
              // Dst: (VRLH:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*6560*/    /*Scope*/ 15, /*->6576*/
/*6561*/      OPC_CheckInteger, 31|128,12/*1567*/, 
/*6564*/      OPC_MoveParent,
/*6565*/      OPC_RecordChild1, // #0 = $vA
/*6566*/      OPC_RecordChild2, // #1 = $vB
/*6567*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VRLW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1567:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VRLW:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*6576*/    /*Scope*/ 15, /*->6592*/
/*6577*/      OPC_CheckInteger, 34|128,12/*1570*/, 
/*6580*/      OPC_MoveParent,
/*6581*/      OPC_RecordChild1, // #0 = $vA
/*6582*/      OPC_RecordChild2, // #1 = $vB
/*6583*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSL), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1570:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VSL:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*6592*/    /*Scope*/ 15, /*->6608*/
/*6593*/      OPC_CheckInteger, 37|128,12/*1573*/, 
/*6596*/      OPC_MoveParent,
/*6597*/      OPC_RecordChild1, // #0 = $vA
/*6598*/      OPC_RecordChild2, // #1 = $vB
/*6599*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSLO), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1573:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VSLO:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*6608*/    /*Scope*/ 15, /*->6624*/
/*6609*/      OPC_CheckInteger, 35|128,12/*1571*/, 
/*6612*/      OPC_MoveParent,
/*6613*/      OPC_RecordChild1, // #0 = $vA
/*6614*/      OPC_RecordChild2, // #1 = $vB
/*6615*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSLB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 1571:iPTR, VRRC:v16i8:$vA, VRRC:v16i8:$vB) - Complexity = 8
              // Dst: (VSLB:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*6624*/    /*Scope*/ 15, /*->6640*/
/*6625*/      OPC_CheckInteger, 36|128,12/*1572*/, 
/*6628*/      OPC_MoveParent,
/*6629*/      OPC_RecordChild1, // #0 = $vA
/*6630*/      OPC_RecordChild2, // #1 = $vB
/*6631*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSLH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1572:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB) - Complexity = 8
              // Dst: (VSLH:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*6640*/    /*Scope*/ 15, /*->6656*/
/*6641*/      OPC_CheckInteger, 38|128,12/*1574*/, 
/*6644*/      OPC_MoveParent,
/*6645*/      OPC_RecordChild1, // #0 = $vA
/*6646*/      OPC_RecordChild2, // #1 = $vB
/*6647*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSLW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1574:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VSLW:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*6656*/    /*Scope*/ 15, /*->6672*/
/*6657*/      OPC_CheckInteger, 39|128,12/*1575*/, 
/*6660*/      OPC_MoveParent,
/*6661*/      OPC_RecordChild1, // #0 = $vA
/*6662*/      OPC_RecordChild2, // #1 = $vB
/*6663*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSR), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1575:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VSR:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*6672*/    /*Scope*/ 15, /*->6688*/
/*6673*/      OPC_CheckInteger, 45|128,12/*1581*/, 
/*6676*/      OPC_MoveParent,
/*6677*/      OPC_RecordChild1, // #0 = $vA
/*6678*/      OPC_RecordChild2, // #1 = $vB
/*6679*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSRO), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1581:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VSRO:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*6688*/    /*Scope*/ 15, /*->6704*/
/*6689*/      OPC_CheckInteger, 40|128,12/*1576*/, 
/*6692*/      OPC_MoveParent,
/*6693*/      OPC_RecordChild1, // #0 = $vA
/*6694*/      OPC_RecordChild2, // #1 = $vB
/*6695*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSRAB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 1576:iPTR, VRRC:v16i8:$vA, VRRC:v16i8:$vB) - Complexity = 8
              // Dst: (VSRAB:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*6704*/    /*Scope*/ 15, /*->6720*/
/*6705*/      OPC_CheckInteger, 41|128,12/*1577*/, 
/*6708*/      OPC_MoveParent,
/*6709*/      OPC_RecordChild1, // #0 = $vA
/*6710*/      OPC_RecordChild2, // #1 = $vB
/*6711*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSRAH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1577:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB) - Complexity = 8
              // Dst: (VSRAH:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*6720*/    /*Scope*/ 15, /*->6736*/
/*6721*/      OPC_CheckInteger, 42|128,12/*1578*/, 
/*6724*/      OPC_MoveParent,
/*6725*/      OPC_RecordChild1, // #0 = $vA
/*6726*/      OPC_RecordChild2, // #1 = $vB
/*6727*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSRAW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1578:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VSRAW:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*6736*/    /*Scope*/ 15, /*->6752*/
/*6737*/      OPC_CheckInteger, 43|128,12/*1579*/, 
/*6740*/      OPC_MoveParent,
/*6741*/      OPC_RecordChild1, // #0 = $vA
/*6742*/      OPC_RecordChild2, // #1 = $vB
/*6743*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSRB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 1579:iPTR, VRRC:v16i8:$vA, VRRC:v16i8:$vB) - Complexity = 8
              // Dst: (VSRB:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*6752*/    /*Scope*/ 15, /*->6768*/
/*6753*/      OPC_CheckInteger, 44|128,12/*1580*/, 
/*6756*/      OPC_MoveParent,
/*6757*/      OPC_RecordChild1, // #0 = $vA
/*6758*/      OPC_RecordChild2, // #1 = $vB
/*6759*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSRH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1580:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB) - Complexity = 8
              // Dst: (VSRH:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*6768*/    /*Scope*/ 15, /*->6784*/
/*6769*/      OPC_CheckInteger, 46|128,12/*1582*/, 
/*6772*/      OPC_MoveParent,
/*6773*/      OPC_RecordChild1, // #0 = $vA
/*6774*/      OPC_RecordChild2, // #1 = $vB
/*6775*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSRW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1582:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VSRW:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*6784*/    /*Scope*/ 15, /*->6800*/
/*6785*/      OPC_CheckInteger, 17|128,12/*1553*/, 
/*6788*/      OPC_MoveParent,
/*6789*/      OPC_RecordChild1, // #0 = $vA
/*6790*/      OPC_RecordChild2, // #1 = $vB
/*6791*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VPKPX), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1553:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VPKPX:v8i16 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*6800*/    /*Scope*/ 15, /*->6816*/
/*6801*/      OPC_CheckInteger, 18|128,12/*1554*/, 
/*6804*/      OPC_MoveParent,
/*6805*/      OPC_RecordChild1, // #0 = $vA
/*6806*/      OPC_RecordChild2, // #1 = $vB
/*6807*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VPKSHSS), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 1554:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB) - Complexity = 8
              // Dst: (VPKSHSS:v16i8 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*6816*/    /*Scope*/ 15, /*->6832*/
/*6817*/      OPC_CheckInteger, 19|128,12/*1555*/, 
/*6820*/      OPC_MoveParent,
/*6821*/      OPC_RecordChild1, // #0 = $vA
/*6822*/      OPC_RecordChild2, // #1 = $vB
/*6823*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VPKSHUS), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 1555:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB) - Complexity = 8
              // Dst: (VPKSHUS:v16i8 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*6832*/    /*Scope*/ 15, /*->6848*/
/*6833*/      OPC_CheckInteger, 20|128,12/*1556*/, 
/*6836*/      OPC_MoveParent,
/*6837*/      OPC_RecordChild1, // #0 = $vA
/*6838*/      OPC_RecordChild2, // #1 = $vB
/*6839*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VPKSWSS), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 1556:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VPKSWSS:v16i8 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*6848*/    /*Scope*/ 15, /*->6864*/
/*6849*/      OPC_CheckInteger, 21|128,12/*1557*/, 
/*6852*/      OPC_MoveParent,
/*6853*/      OPC_RecordChild1, // #0 = $vA
/*6854*/      OPC_RecordChild2, // #1 = $vB
/*6855*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VPKSWUS), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1557:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VPKSWUS:v8i16 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*6864*/    /*Scope*/ 15, /*->6880*/
/*6865*/      OPC_CheckInteger, 22|128,12/*1558*/, 
/*6868*/      OPC_MoveParent,
/*6869*/      OPC_RecordChild1, // #0 = $vA
/*6870*/      OPC_RecordChild2, // #1 = $vB
/*6871*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VPKUHUS), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 1558:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB) - Complexity = 8
              // Dst: (VPKUHUS:v16i8 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*6880*/    /*Scope*/ 15, /*->6896*/
/*6881*/      OPC_CheckInteger, 23|128,12/*1559*/, 
/*6884*/      OPC_MoveParent,
/*6885*/      OPC_RecordChild1, // #0 = $vA
/*6886*/      OPC_RecordChild2, // #1 = $vB
/*6887*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VPKUWUS), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1559:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VPKUWUS:v8i16 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*6896*/    /*Scope*/ 13, /*->6910*/
/*6897*/      OPC_CheckInteger, 59|128,12/*1595*/, 
/*6900*/      OPC_MoveParent,
/*6901*/      OPC_RecordChild1, // #0 = $vB
/*6902*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VUPKHPX), 0,
                  1/*#VTs*/, MVT::v4i32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v4i32 1595:iPTR, VRRC:v8i16:$vB) - Complexity = 8
              // Dst: (VUPKHPX:v4i32 VRRC:v8i16:$vB)
/*6910*/    /*Scope*/ 13, /*->6924*/
/*6911*/      OPC_CheckInteger, 60|128,12/*1596*/, 
/*6914*/      OPC_MoveParent,
/*6915*/      OPC_RecordChild1, // #0 = $vB
/*6916*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VUPKHSB), 0,
                  1/*#VTs*/, MVT::v8i16, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v8i16 1596:iPTR, VRRC:v16i8:$vB) - Complexity = 8
              // Dst: (VUPKHSB:v8i16 VRRC:v16i8:$vB)
/*6924*/    /*Scope*/ 13, /*->6938*/
/*6925*/      OPC_CheckInteger, 61|128,12/*1597*/, 
/*6928*/      OPC_MoveParent,
/*6929*/      OPC_RecordChild1, // #0 = $vB
/*6930*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VUPKHSH), 0,
                  1/*#VTs*/, MVT::v4i32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v4i32 1597:iPTR, VRRC:v8i16:$vB) - Complexity = 8
              // Dst: (VUPKHSH:v4i32 VRRC:v8i16:$vB)
/*6938*/    /*Scope*/ 13, /*->6952*/
/*6939*/      OPC_CheckInteger, 62|128,12/*1598*/, 
/*6942*/      OPC_MoveParent,
/*6943*/      OPC_RecordChild1, // #0 = $vB
/*6944*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VUPKLPX), 0,
                  1/*#VTs*/, MVT::v4i32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v4i32 1598:iPTR, VRRC:v8i16:$vB) - Complexity = 8
              // Dst: (VUPKLPX:v4i32 VRRC:v8i16:$vB)
/*6952*/    /*Scope*/ 13, /*->6966*/
/*6953*/      OPC_CheckInteger, 63|128,12/*1599*/, 
/*6956*/      OPC_MoveParent,
/*6957*/      OPC_RecordChild1, // #0 = $vB
/*6958*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VUPKLSB), 0,
                  1/*#VTs*/, MVT::v8i16, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v8i16 1599:iPTR, VRRC:v16i8:$vB) - Complexity = 8
              // Dst: (VUPKLSB:v8i16 VRRC:v16i8:$vB)
/*6966*/    /*Scope*/ 13, /*->6980*/
/*6967*/      OPC_CheckInteger, 64|128,12/*1600*/, 
/*6970*/      OPC_MoveParent,
/*6971*/      OPC_RecordChild1, // #0 = $vB
/*6972*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VUPKLSH), 0,
                  1/*#VTs*/, MVT::v4i32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v4i32 1600:iPTR, VRRC:v8i16:$vB) - Complexity = 8
              // Dst: (VUPKLSH:v4i32 VRRC:v8i16:$vB)
/*6980*/    /*Scope*/ 13, /*->6994*/
/*6981*/      OPC_CheckInteger, 109|128,11/*1517*/, 
/*6984*/      OPC_MoveParent,
/*6985*/      OPC_RecordChild1, // #0 = $vB
/*6986*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VEXPTEFP), 0,
                  1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v4f32 1517:iPTR, VRRC:v4f32:$vB) - Complexity = 8
              // Dst: (VEXPTEFP:v4f32 VRRC:v4f32:$vB)
/*6994*/    /*Scope*/ 13, /*->7008*/
/*6995*/      OPC_CheckInteger, 110|128,11/*1518*/, 
/*6998*/      OPC_MoveParent,
/*6999*/      OPC_RecordChild1, // #0 = $vB
/*7000*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VLOGEFP), 0,
                  1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v4f32 1518:iPTR, VRRC:v4f32:$vB) - Complexity = 8
              // Dst: (VLOGEFP:v4f32 VRRC:v4f32:$vB)
/*7008*/    /*Scope*/ 15, /*->7024*/
/*7009*/      OPC_CheckInteger, 112|128,11/*1520*/, 
/*7012*/      OPC_MoveParent,
/*7013*/      OPC_RecordChild1, // #0 = $vA
/*7014*/      OPC_RecordChild2, // #1 = $vB
/*7015*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMAXFP), 0,
                  1/*#VTs*/, MVT::v4f32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4f32 1520:iPTR, VRRC:v4f32:$vA, VRRC:v4f32:$vB) - Complexity = 8
              // Dst: (VMAXFP:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vB)
/*7024*/    /*Scope*/ 15, /*->7040*/
/*7025*/      OPC_CheckInteger, 121|128,11/*1529*/, 
/*7028*/      OPC_MoveParent,
/*7029*/      OPC_RecordChild1, // #0 = $vA
/*7030*/      OPC_RecordChild2, // #1 = $vB
/*7031*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMINFP), 0,
                  1/*#VTs*/, MVT::v4f32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4f32 1529:iPTR, VRRC:v4f32:$vA, VRRC:v4f32:$vB) - Complexity = 8
              // Dst: (VMINFP:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vB)
/*7040*/    /*Scope*/ 13, /*->7054*/
/*7041*/      OPC_CheckInteger, 24|128,12/*1560*/, 
/*7044*/      OPC_MoveParent,
/*7045*/      OPC_RecordChild1, // #0 = $vB
/*7046*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VREFP), 0,
                  1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v4f32 1560:iPTR, VRRC:v4f32:$vB) - Complexity = 8
              // Dst: (VREFP:v4f32 VRRC:v4f32:$vB)
/*7054*/    /*Scope*/ 13, /*->7068*/
/*7055*/      OPC_CheckInteger, 25|128,12/*1561*/, 
/*7058*/      OPC_MoveParent,
/*7059*/      OPC_RecordChild1, // #0 = $vB
/*7060*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VRFIM), 0,
                  1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v4f32 1561:iPTR, VRRC:v4f32:$vB) - Complexity = 8
              // Dst: (VRFIM:v4f32 VRRC:v4f32:$vB)
/*7068*/    /*Scope*/ 13, /*->7082*/
/*7069*/      OPC_CheckInteger, 26|128,12/*1562*/, 
/*7072*/      OPC_MoveParent,
/*7073*/      OPC_RecordChild1, // #0 = $vB
/*7074*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VRFIN), 0,
                  1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v4f32 1562:iPTR, VRRC:v4f32:$vB) - Complexity = 8
              // Dst: (VRFIN:v4f32 VRRC:v4f32:$vB)
/*7082*/    /*Scope*/ 13, /*->7096*/
/*7083*/      OPC_CheckInteger, 27|128,12/*1563*/, 
/*7086*/      OPC_MoveParent,
/*7087*/      OPC_RecordChild1, // #0 = $vB
/*7088*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VRFIP), 0,
                  1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v4f32 1563:iPTR, VRRC:v4f32:$vB) - Complexity = 8
              // Dst: (VRFIP:v4f32 VRRC:v4f32:$vB)
/*7096*/    /*Scope*/ 13, /*->7110*/
/*7097*/      OPC_CheckInteger, 28|128,12/*1564*/, 
/*7100*/      OPC_MoveParent,
/*7101*/      OPC_RecordChild1, // #0 = $vB
/*7102*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VRFIZ), 0,
                  1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v4f32 1564:iPTR, VRRC:v4f32:$vB) - Complexity = 8
              // Dst: (VRFIZ:v4f32 VRRC:v4f32:$vB)
/*7110*/    /*Scope*/ 13, /*->7124*/
/*7111*/      OPC_CheckInteger, 32|128,12/*1568*/, 
/*7114*/      OPC_MoveParent,
/*7115*/      OPC_RecordChild1, // #0 = $vB
/*7116*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VRSQRTEFP), 0,
                  1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v4f32 1568:iPTR, VRRC:v4f32:$vB) - Complexity = 8
              // Dst: (VRSQRTEFP:v4f32 VRRC:v4f32:$vB)
/*7124*/    /*Scope*/ 17, /*->7142*/
/*7125*/      OPC_CheckInteger, 111|128,11/*1519*/, 
/*7128*/      OPC_MoveParent,
/*7129*/      OPC_RecordChild1, // #0 = $A
/*7130*/      OPC_RecordChild2, // #1 = $B
/*7131*/      OPC_RecordChild3, // #2 = $C
/*7132*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMADDFP), 0,
                  1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:v4f32 1519:iPTR, VRRC:v4f32:$A, VRRC:v4f32:$B, VRRC:v4f32:$C) - Complexity = 8
              // Dst: (VMADDFP:v4f32 VRRC:v4f32:$A, VRRC:v4f32:$B, VRRC:v4f32:$C)
/*7142*/    /*Scope*/ 17, /*->7160*/
/*7143*/      OPC_CheckInteger, 15|128,12/*1551*/, 
/*7146*/      OPC_MoveParent,
/*7147*/      OPC_RecordChild1, // #0 = $A
/*7148*/      OPC_RecordChild2, // #1 = $B
/*7149*/      OPC_RecordChild3, // #2 = $C
/*7150*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VNMSUBFP), 0,
                  1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:v4f32 1551:iPTR, VRRC:v4f32:$A, VRRC:v4f32:$B, VRRC:v4f32:$C) - Complexity = 8
              // Dst: (VNMSUBFP:v4f32 VRRC:v4f32:$A, VRRC:v4f32:$B, VRRC:v4f32:$C)
/*7160*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 40,  TARGET_VAL(PPCISD::STCX),// ->7204
/*7164*/    OPC_RecordNode,   // #0 = 'PPCstcx' chained node
/*7165*/    OPC_RecordChild1, // #1 = $rS
/*7166*/    OPC_Scope, 17, /*->7185*/ // 2 children in Scope
/*7168*/      OPC_CheckChild1Type, MVT::i32,
/*7170*/      OPC_RecordChild2, // #2 = $dst
/*7171*/      OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrIdxOnly:$dst #3 #4
/*7174*/      OPC_EmitMergeInputChains1_0,
/*7175*/      OPC_MorphNodeTo, TARGET_VAL(PPC::STWCX), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 3, 4, 
              // Src: (PPCstcx GPRC:i32:$rS, xoaddr:iPTR:$dst) - Complexity = 12
              // Dst: (STWCX:i32 GPRC:i32:$rS, xoaddr:iPTR:$dst)
/*7185*/    /*Scope*/ 17, /*->7203*/
/*7186*/      OPC_CheckChild1Type, MVT::i64,
/*7188*/      OPC_RecordChild2, // #2 = $dst
/*7189*/      OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrIdxOnly:$dst #3 #4
/*7192*/      OPC_EmitMergeInputChains1_0,
/*7193*/      OPC_MorphNodeTo, TARGET_VAL(PPC::STDCX), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 3, 4, 
              // Src: (PPCstcx G8RC:i64:$rS, xoaddr:iPTR:$dst) - Complexity = 12
              // Dst: (STDCX:i32 G8RC:i64:$rS, xoaddr:iPTR:$dst)
/*7203*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 41,  TARGET_VAL(PPCISD::STBRX),// ->7248
/*7207*/    OPC_RecordNode,   // #0 = 'PPCstbrx' chained node
/*7208*/    OPC_RecordChild1, // #1 = $rS
/*7209*/    OPC_RecordChild2, // #2 = $dst
/*7210*/    OPC_MoveChild, 3,
/*7212*/    OPC_Scope, 16, /*->7230*/ // 2 children in Scope
/*7214*/      OPC_CheckValueType, MVT::i16,
/*7216*/      OPC_MoveParent,
/*7217*/      OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrIdxOnly:$dst #3 #4
/*7220*/      OPC_EmitMergeInputChains1_0,
/*7221*/      OPC_MorphNodeTo, TARGET_VAL(PPC::STHBRX), 0|OPFL_Chain,
                  0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
              // Src: (PPCstbrx GPRC:i32:$rS, xoaddr:iPTR:$dst, i16:Other) - Complexity = 12
              // Dst: (STHBRX GPRC:i32:$rS, xoaddr:iPTR:$dst)
/*7230*/    /*Scope*/ 16, /*->7247*/
/*7231*/      OPC_CheckValueType, MVT::i32,
/*7233*/      OPC_MoveParent,
/*7234*/      OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrIdxOnly:$dst #3 #4
/*7237*/      OPC_EmitMergeInputChains1_0,
/*7238*/      OPC_MorphNodeTo, TARGET_VAL(PPC::STWBRX), 0|OPFL_Chain,
                  0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
              // Src: (PPCstbrx GPRC:i32:$rS, xoaddr:iPTR:$dst, i32:Other) - Complexity = 12
              // Dst: (STWBRX GPRC:i32:$rS, xoaddr:iPTR:$dst)
/*7247*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 16,  TARGET_VAL(PPCISD::STFIWX),// ->7267
/*7251*/    OPC_RecordNode,   // #0 = 'PPCstfiwx' chained node
/*7252*/    OPC_RecordChild1, // #1 = $frS
/*7253*/    OPC_RecordChild2, // #2 = $dst
/*7254*/    OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrIdxOnly:$dst #3 #4
/*7257*/    OPC_EmitMergeInputChains1_0,
/*7258*/    OPC_MorphNodeTo, TARGET_VAL(PPC::STFIWX), 0|OPFL_Chain,
                0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
            // Src: (PPCstfiwx F8RC:f64:$frS, xoaddr:iPTR:$dst) - Complexity = 12
            // Dst: (STFIWX F8RC:f64:$frS, xoaddr:iPTR:$dst)
          /*SwitchOpcode*/ 35,  TARGET_VAL(PPCISD::STD_32),// ->7305
/*7270*/    OPC_RecordNode,   // #0 = 'PPCstd_32' chained node
/*7271*/    OPC_RecordChild1, // #1 = $rT
/*7272*/    OPC_CheckChild1Type, MVT::i32,
/*7274*/    OPC_RecordChild2, // #2 = $dst
/*7275*/    OPC_Scope, 13, /*->7290*/ // 2 children in Scope
/*7277*/      OPC_CheckComplexPat, /*CP*/3, /*#*/2, // SelectAddrImmShift:$dst #3 #4
/*7280*/      OPC_EmitMergeInputChains1_0,
/*7281*/      OPC_MorphNodeTo, TARGET_VAL(PPC::STD_32), 0|OPFL_Chain,
                  0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
              // Src: (PPCstd_32 GPRC:i32:$rT, ixaddr:iPTR:$dst) - Complexity = 12
              // Dst: (STD_32 GPRC:i32:$rT, ixaddr:iPTR:$dst)
/*7290*/    /*Scope*/ 13, /*->7304*/
/*7291*/      OPC_CheckComplexPat, /*CP*/2, /*#*/2, // SelectAddrIdx:$dst #3 #4
/*7294*/      OPC_EmitMergeInputChains1_0,
/*7295*/      OPC_MorphNodeTo, TARGET_VAL(PPC::STDX_32), 0|OPFL_Chain,
                  0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
              // Src: (PPCstd_32 GPRC:i32:$rT, xaddr:iPTR:$dst) - Complexity = 12
              // Dst: (STDX_32 GPRC:i32:$rT, xaddr:iPTR:$dst)
/*7304*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 26,  TARGET_VAL(ISD::CALLSEQ_END),// ->7334
/*7308*/    OPC_RecordNode,   // #0 = 'callseq_end' chained node
/*7309*/    OPC_CaptureGlueInput,
/*7310*/    OPC_RecordChild1, // #1 = $amt1
/*7311*/    OPC_MoveChild, 1,
/*7313*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*7316*/    OPC_MoveParent,
/*7317*/    OPC_RecordChild2, // #2 = $amt2
/*7318*/    OPC_MoveChild, 2,
/*7320*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*7323*/    OPC_MoveParent,
/*7324*/    OPC_EmitMergeInputChains1_0,
/*7325*/    OPC_MorphNodeTo, TARGET_VAL(PPC::ADJCALLSTACKUP), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
            // Src: (callseq_end (timm:i32):$amt1, (timm:i32):$amt2) - Complexity = 9
            // Dst: (ADJCALLSTACKUP:i32 (timm:i32):$amt1, (timm:i32):$amt2)
          /*SwitchOpcode*/ 70|128,1/*198*/,  TARGET_VAL(PPCISD::TC_RETURN),// ->7536
/*7338*/    OPC_RecordNode,   // #0 = 'PPCtc_return' chained node
/*7339*/    OPC_CaptureGlueInput,
/*7340*/    OPC_RecordChild1, // #1 = $func
/*7341*/    OPC_Scope, 21|128,1/*149*/, /*->7493*/ // 3 children in Scope
/*7344*/      OPC_MoveChild, 1,
/*7346*/      OPC_SwitchOpcode /*3 cases */, 48,  TARGET_VAL(ISD::Constant),// ->7398
/*7350*/        OPC_SwitchType /*2 cases */, 21,  MVT::i32,// ->7374
/*7353*/          OPC_MoveParent,
/*7354*/          OPC_RecordChild2, // #2 = $offset
/*7355*/          OPC_MoveChild, 2,
/*7357*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*7360*/          OPC_MoveParent,
/*7361*/          OPC_EmitMergeInputChains1_0,
/*7362*/          OPC_EmitConvertToTarget, 1,
/*7364*/          OPC_EmitConvertToTarget, 2,
/*7366*/          OPC_MorphNodeTo, TARGET_VAL(PPC::TCRETURNai), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic2,
                      0/*#VTs*/, 2/*#Ops*/, 3, 4, 
                  // Src: (PPCtc_return (imm:i32):$func, (imm:i32):$offset) - Complexity = 9
                  // Dst: (TCRETURNai (imm:i32):$func, (imm:i32):$offset)
                /*SwitchType*/ 21,  MVT::i64,// ->7397
/*7376*/          OPC_MoveParent,
/*7377*/          OPC_RecordChild2, // #2 = $offset
/*7378*/          OPC_MoveChild, 2,
/*7380*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*7383*/          OPC_MoveParent,
/*7384*/          OPC_EmitMergeInputChains1_0,
/*7385*/          OPC_EmitConvertToTarget, 1,
/*7387*/          OPC_EmitConvertToTarget, 2,
/*7389*/          OPC_MorphNodeTo, TARGET_VAL(PPC::TCRETURNai8), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic2,
                      0/*#VTs*/, 2/*#Ops*/, 3, 4, 
                  // Src: (PPCtc_return (imm:i64):$func, (imm:i32):$offset) - Complexity = 9
                  // Dst: (TCRETURNai8 (imm:i64):$func, (imm:i32):$offset)
                0, // EndSwitchType
              /*SwitchOpcode*/ 44,  TARGET_VAL(ISD::TargetGlobalAddress),// ->7445
/*7401*/        OPC_SwitchType /*2 cases */, 19,  MVT::i32,// ->7423
/*7404*/          OPC_MoveParent,
/*7405*/          OPC_RecordChild2, // #2 = $imm
/*7406*/          OPC_MoveChild, 2,
/*7408*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*7411*/          OPC_MoveParent,
/*7412*/          OPC_EmitMergeInputChains1_0,
/*7413*/          OPC_EmitConvertToTarget, 2,
/*7415*/          OPC_MorphNodeTo, TARGET_VAL(PPC::TCRETURNdi), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic2,
                      0/*#VTs*/, 2/*#Ops*/, 1, 3, 
                  // Src: (PPCtc_return (tglobaladdr:i32):$dst, (imm:i32):$imm) - Complexity = 9
                  // Dst: (TCRETURNdi (tglobaladdr:i32):$dst, (imm:i32):$imm)
                /*SwitchType*/ 19,  MVT::i64,// ->7444
/*7425*/          OPC_MoveParent,
/*7426*/          OPC_RecordChild2, // #2 = $imm
/*7427*/          OPC_MoveChild, 2,
/*7429*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*7432*/          OPC_MoveParent,
/*7433*/          OPC_EmitMergeInputChains1_0,
/*7434*/          OPC_EmitConvertToTarget, 2,
/*7436*/          OPC_MorphNodeTo, TARGET_VAL(PPC::TCRETURNdi8), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic2,
                      0/*#VTs*/, 2/*#Ops*/, 1, 3, 
                  // Src: (PPCtc_return (tglobaladdr:i64):$dst, (imm:i32):$imm) - Complexity = 9
                  // Dst: (TCRETURNdi8 (tglobaladdr:i64):$dst, (imm:i32):$imm)
                0, // EndSwitchType
              /*SwitchOpcode*/ 44,  TARGET_VAL(ISD::TargetExternalSymbol),// ->7492
/*7448*/        OPC_SwitchType /*2 cases */, 19,  MVT::i32,// ->7470
/*7451*/          OPC_MoveParent,
/*7452*/          OPC_RecordChild2, // #2 = $imm
/*7453*/          OPC_MoveChild, 2,
/*7455*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*7458*/          OPC_MoveParent,
/*7459*/          OPC_EmitMergeInputChains1_0,
/*7460*/          OPC_EmitConvertToTarget, 2,
/*7462*/          OPC_MorphNodeTo, TARGET_VAL(PPC::TCRETURNdi), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic2,
                      0/*#VTs*/, 2/*#Ops*/, 1, 3, 
                  // Src: (PPCtc_return (texternalsym:i32):$dst, (imm:i32):$imm) - Complexity = 9
                  // Dst: (TCRETURNdi (texternalsym:i32):$dst, (imm:i32):$imm)
                /*SwitchType*/ 19,  MVT::i64,// ->7491
/*7472*/          OPC_MoveParent,
/*7473*/          OPC_RecordChild2, // #2 = $imm
/*7474*/          OPC_MoveChild, 2,
/*7476*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*7479*/          OPC_MoveParent,
/*7480*/          OPC_EmitMergeInputChains1_0,
/*7481*/          OPC_EmitConvertToTarget, 2,
/*7483*/          OPC_MorphNodeTo, TARGET_VAL(PPC::TCRETURNdi8), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic2,
                      0/*#VTs*/, 2/*#Ops*/, 1, 3, 
                  // Src: (PPCtc_return (texternalsym:i64):$dst, (imm:i32):$imm) - Complexity = 9
                  // Dst: (TCRETURNdi8 (texternalsym:i64):$dst, (imm:i32):$imm)
                0, // EndSwitchType
              0, // EndSwitchOpcode
/*7493*/    /*Scope*/ 20, /*->7514*/
/*7494*/      OPC_CheckChild1Type, MVT::i32,
/*7496*/      OPC_RecordChild2, // #2 = $imm
/*7497*/      OPC_MoveChild, 2,
/*7499*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*7502*/      OPC_MoveParent,
/*7503*/      OPC_EmitMergeInputChains1_0,
/*7504*/      OPC_EmitConvertToTarget, 2,
/*7506*/      OPC_MorphNodeTo, TARGET_VAL(PPC::TCRETURNri), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic2,
                  0/*#VTs*/, 2/*#Ops*/, 1, 3, 
              // Src: (PPCtc_return CTRRC:i32:$dst, (imm:i32):$imm) - Complexity = 6
              // Dst: (TCRETURNri CTRRC:i32:$dst, (imm:i32):$imm)
/*7514*/    /*Scope*/ 20, /*->7535*/
/*7515*/      OPC_CheckChild1Type, MVT::i64,
/*7517*/      OPC_RecordChild2, // #2 = $imm
/*7518*/      OPC_MoveChild, 2,
/*7520*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*7523*/      OPC_MoveParent,
/*7524*/      OPC_EmitMergeInputChains1_0,
/*7525*/      OPC_EmitConvertToTarget, 2,
/*7527*/      OPC_MorphNodeTo, TARGET_VAL(PPC::TCRETURNri8), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic2,
                  0/*#VTs*/, 2/*#Ops*/, 1, 3, 
              // Src: (PPCtc_return CTRRC8:i64:$dst, (imm:i32):$imm) - Complexity = 6
              // Dst: (TCRETURNri8 CTRRC8:i64:$dst, (imm:i32):$imm)
/*7535*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 20,  TARGET_VAL(ISD::ATOMIC_FENCE),// ->7559
/*7539*/    OPC_RecordNode,   // #0 = 'atomic_fence' chained node
/*7540*/    OPC_MoveChild, 1,
/*7542*/    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*7545*/    OPC_MoveParent,
/*7546*/    OPC_MoveChild, 2,
/*7548*/    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*7551*/    OPC_MoveParent,
/*7552*/    OPC_EmitMergeInputChains1_0,
/*7553*/    OPC_MorphNodeTo, TARGET_VAL(PPC::SYNC), 0|OPFL_Chain,
                0/*#VTs*/, 0/*#Ops*/, 
            // Src: (atomic_fence (imm:iPTR), (imm:iPTR)) - Complexity = 9
            // Dst: (SYNC)
          /*SwitchOpcode*/ 118,  TARGET_VAL(ISD::SUB),// ->7680
/*7562*/    OPC_Scope, 28, /*->7592*/ // 2 children in Scope
/*7564*/      OPC_MoveChild, 0,
/*7566*/      OPC_CheckInteger, 0, 
/*7568*/      OPC_MoveParent,
/*7569*/      OPC_RecordChild1, // #0 = $rA
/*7570*/      OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->7581
/*7573*/        OPC_MorphNodeTo, TARGET_VAL(PPC::NEG), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (sub:i32 0:i32, GPRC:i32:$rA) - Complexity = 8
                // Dst: (NEG:i32 GPRC:i32:$rA)
              /*SwitchType*/ 8,  MVT::i64,// ->7591
/*7583*/        OPC_MorphNodeTo, TARGET_VAL(PPC::NEG8), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (sub:i64 0:i64, G8RC:i64:$rA) - Complexity = 8
                // Dst: (NEG8:i64 G8RC:i64:$rA)
              0, // EndSwitchType
/*7592*/    /*Scope*/ 86, /*->7679*/
/*7593*/      OPC_RecordChild0, // #0 = $imm
/*7594*/      OPC_Scope, 23, /*->7619*/ // 2 children in Scope
/*7596*/        OPC_MoveChild, 0,
/*7598*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*7601*/        OPC_CheckPredicate, 0, // Predicate_immSExt16
/*7603*/        OPC_MoveParent,
/*7604*/        OPC_RecordChild1, // #1 = $in
/*7605*/        OPC_CheckType, MVT::i32,
/*7607*/        OPC_EmitConvertToTarget, 0,
/*7609*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SUBFIC), 0,
                    2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 1, 2, 
                // Src: (sub:i32 (imm:i32)<<P:Predicate_immSExt16>>:$imm, GPRC:i32:$in) - Complexity = 7
                // Dst: (SUBFIC:i32:i32 GPRC:i32:$in, (imm:i32):$imm)
/*7619*/      /*Scope*/ 58, /*->7678*/
/*7620*/        OPC_RecordChild1, // #1 = $rA
/*7621*/        OPC_SwitchType /*5 cases */, 9,  MVT::i32,// ->7633
/*7624*/          OPC_MorphNodeTo, TARGET_VAL(PPC::SUBF), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                  // Src: (sub:i32 GPRC:i32:$rB, GPRC:i32:$rA) - Complexity = 3
                  // Dst: (SUBF:i32 GPRC:i32:$rA, GPRC:i32:$rB)
                /*SwitchType*/ 9,  MVT::i64,// ->7644
/*7635*/          OPC_MorphNodeTo, TARGET_VAL(PPC::SUBF8), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                  // Src: (sub:i64 G8RC:i64:$rB, G8RC:i64:$rA) - Complexity = 3
                  // Dst: (SUBF8:i64 G8RC:i64:$rA, G8RC:i64:$rB)
                /*SwitchType*/ 9,  MVT::v16i8,// ->7655
/*7646*/          OPC_MorphNodeTo, TARGET_VAL(PPC::VSUBUBM), 0,
                      1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
                  // Src: (sub:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB) - Complexity = 3
                  // Dst: (VSUBUBM:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
                /*SwitchType*/ 9,  MVT::v8i16,// ->7666
/*7657*/          OPC_MorphNodeTo, TARGET_VAL(PPC::VSUBUHM), 0,
                      1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
                  // Src: (sub:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB) - Complexity = 3
                  // Dst: (VSUBUHM:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
                /*SwitchType*/ 9,  MVT::v4i32,// ->7677
/*7668*/          OPC_MorphNodeTo, TARGET_VAL(PPC::VSUBUWM), 0,
                      1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
                  // Src: (sub:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 3
                  // Dst: (VSUBUWM:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
                0, // EndSwitchType
/*7678*/      0, /*End of Scope*/
/*7679*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 102,  TARGET_VAL(ISD::ADDE),// ->7785
/*7683*/    OPC_CaptureGlueInput,
/*7684*/    OPC_RecordChild0, // #0 = $rA
/*7685*/    OPC_Scope, 69, /*->7756*/ // 2 children in Scope
/*7687*/      OPC_MoveChild, 1,
/*7689*/      OPC_Scope, 36, /*->7727*/ // 2 children in Scope
/*7691*/        OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*7702*/        OPC_MoveParent,
/*7703*/        OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->7715
/*7706*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ADDME), 0|OPFL_GlueInput|OPFL_GlueOutput,
                      2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 0, 
                  // Src: (adde:i32 GPRC:i32:$rA, -1:i32) - Complexity = 8
                  // Dst: (ADDME:i32:i32 GPRC:i32:$rA)
                /*SwitchType*/ 9,  MVT::i64,// ->7726
/*7717*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ADDME8), 0|OPFL_GlueInput|OPFL_GlueOutput,
                      2/*#VTs*/, MVT::i64, MVT::i32, 1/*#Ops*/, 0, 
                  // Src: (adde:i64 G8RC:i64:$rA, -1:i64) - Complexity = 8
                  // Dst: (ADDME8:i64:i32 G8RC:i64:$rA)
                0, // EndSwitchType
/*7727*/      /*Scope*/ 27, /*->7755*/
/*7728*/        OPC_CheckInteger, 0, 
/*7730*/        OPC_MoveParent,
/*7731*/        OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->7743
/*7734*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ADDZE), 0|OPFL_GlueInput|OPFL_GlueOutput,
                      2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 0, 
                  // Src: (adde:i32 GPRC:i32:$rA, 0:i32) - Complexity = 8
                  // Dst: (ADDZE:i32:i32 GPRC:i32:$rA)
                /*SwitchType*/ 9,  MVT::i64,// ->7754
/*7745*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ADDZE8), 0|OPFL_GlueInput|OPFL_GlueOutput,
                      2/*#VTs*/, MVT::i64, MVT::i32, 1/*#Ops*/, 0, 
                  // Src: (adde:i64 G8RC:i64:$rA, 0:i64) - Complexity = 8
                  // Dst: (ADDZE8:i64:i32 G8RC:i64:$rA)
                0, // EndSwitchType
/*7755*/      0, /*End of Scope*/
/*7756*/    /*Scope*/ 27, /*->7784*/
/*7757*/      OPC_RecordChild1, // #1 = $rB
/*7758*/      OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->7771
/*7761*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ADDE), 0|OPFL_GlueInput|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (adde:i32 GPRC:i32:$rA, GPRC:i32:$rB) - Complexity = 3
                // Dst: (ADDE:i32:i32 GPRC:i32:$rA, GPRC:i32:$rB)
              /*SwitchType*/ 10,  MVT::i64,// ->7783
/*7773*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ADDE8), 0|OPFL_GlueInput|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (adde:i64 G8RC:i64:$rA, G8RC:i64:$rB) - Complexity = 3
                // Dst: (ADDE8:i64:i32 G8RC:i64:$rA, G8RC:i64:$rB)
              0, // EndSwitchType
/*7784*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 104,  TARGET_VAL(ISD::SUBE),// ->7892
/*7788*/    OPC_CaptureGlueInput,
/*7789*/    OPC_Scope, 71, /*->7862*/ // 2 children in Scope
/*7791*/      OPC_MoveChild, 0,
/*7793*/      OPC_Scope, 37, /*->7832*/ // 2 children in Scope
/*7795*/        OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*7806*/        OPC_MoveParent,
/*7807*/        OPC_RecordChild1, // #0 = $rA
/*7808*/        OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->7820
/*7811*/          OPC_MorphNodeTo, TARGET_VAL(PPC::SUBFME), 0|OPFL_GlueInput|OPFL_GlueOutput,
                      2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 0, 
                  // Src: (sube:i32 -1:i32, GPRC:i32:$rA) - Complexity = 8
                  // Dst: (SUBFME:i32:i32 GPRC:i32:$rA)
                /*SwitchType*/ 9,  MVT::i64,// ->7831
/*7822*/          OPC_MorphNodeTo, TARGET_VAL(PPC::SUBFME8), 0|OPFL_GlueInput|OPFL_GlueOutput,
                      2/*#VTs*/, MVT::i64, MVT::i32, 1/*#Ops*/, 0, 
                  // Src: (sube:i64 -1:i64, G8RC:i64:$rA) - Complexity = 8
                  // Dst: (SUBFME8:i64:i32 G8RC:i64:$rA)
                0, // EndSwitchType
/*7832*/      /*Scope*/ 28, /*->7861*/
/*7833*/        OPC_CheckInteger, 0, 
/*7835*/        OPC_MoveParent,
/*7836*/        OPC_RecordChild1, // #0 = $rA
/*7837*/        OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->7849
/*7840*/          OPC_MorphNodeTo, TARGET_VAL(PPC::SUBFZE), 0|OPFL_GlueInput|OPFL_GlueOutput,
                      2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 0, 
                  // Src: (sube:i32 0:i32, GPRC:i32:$rA) - Complexity = 8
                  // Dst: (SUBFZE:i32:i32 GPRC:i32:$rA)
                /*SwitchType*/ 9,  MVT::i64,// ->7860
/*7851*/          OPC_MorphNodeTo, TARGET_VAL(PPC::SUBFZE8), 0|OPFL_GlueInput|OPFL_GlueOutput,
                      2/*#VTs*/, MVT::i64, MVT::i32, 1/*#Ops*/, 0, 
                  // Src: (sube:i64 0:i64, G8RC:i64:$rA) - Complexity = 8
                  // Dst: (SUBFZE8:i64:i32 G8RC:i64:$rA)
                0, // EndSwitchType
/*7861*/      0, /*End of Scope*/
/*7862*/    /*Scope*/ 28, /*->7891*/
/*7863*/      OPC_RecordChild0, // #0 = $rB
/*7864*/      OPC_RecordChild1, // #1 = $rA
/*7865*/      OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->7878
/*7868*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SUBFE), 0|OPFL_GlueInput|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (sube:i32 GPRC:i32:$rB, GPRC:i32:$rA) - Complexity = 3
                // Dst: (SUBFE:i32:i32 GPRC:i32:$rA, GPRC:i32:$rB)
              /*SwitchType*/ 10,  MVT::i64,// ->7890
/*7880*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SUBFE8), 0|OPFL_GlueInput|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (sube:i64 G8RC:i64:$rB, G8RC:i64:$rA) - Complexity = 3
                // Dst: (SUBFE8:i64:i32 G8RC:i64:$rA, G8RC:i64:$rB)
              0, // EndSwitchType
/*7891*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 69,  TARGET_VAL(ISD::ADDC),// ->7964
/*7895*/    OPC_RecordChild0, // #0 = $rA
/*7896*/    OPC_RecordChild1, // #1 = $imm
/*7897*/    OPC_Scope, 38, /*->7937*/ // 3 children in Scope
/*7899*/      OPC_MoveChild, 1,
/*7901*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*7904*/      OPC_CheckPredicate, 0, // Predicate_immSExt16
/*7906*/      OPC_MoveParent,
/*7907*/      OPC_SwitchType /*2 cases */, 12,  MVT::i32,// ->7922
/*7910*/        OPC_EmitConvertToTarget, 1,
/*7912*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIC), 0|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (addc:i32 GPRC:i32:$rA, (imm:i32)<<P:Predicate_immSExt16>>:$imm) - Complexity = 7
                // Dst: (ADDIC:i32:i32 GPRC:i32:$rA, (imm:i32):$imm)
              /*SwitchType*/ 12,  MVT::i64,// ->7936
/*7924*/        OPC_EmitConvertToTarget, 1,
/*7926*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIC8), 0|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (addc:i64 G8RC:i64:$rA, (imm:i64)<<P:Predicate_immSExt16>>:$imm) - Complexity = 7
                // Dst: (ADDIC8:i64:i32 G8RC:i64:$rA, (imm:i64):$imm)
              0, // EndSwitchType
/*7937*/    /*Scope*/ 12, /*->7950*/
/*7938*/      OPC_CheckType, MVT::i32,
/*7940*/      OPC_MorphNodeTo, TARGET_VAL(PPC::ADDC), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (addc:i32 GPRC:i32:$rA, GPRC:i32:$rB) - Complexity = 3
              // Dst: (ADDC:i32:i32 GPRC:i32:$rA, GPRC:i32:$rB)
/*7950*/    /*Scope*/ 12, /*->7963*/
/*7951*/      OPC_CheckType, MVT::i64,
/*7953*/      OPC_MorphNodeTo, TARGET_VAL(PPC::ADDC8), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (addc:i64 G8RC:i64:$rA, G8RC:i64:$rB) - Complexity = 3
              // Dst: (ADDC8:i64:i32 G8RC:i64:$rA, G8RC:i64:$rB)
/*7963*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 50,  TARGET_VAL(ISD::MUL),// ->8017
/*7967*/    OPC_RecordChild0, // #0 = $rA
/*7968*/    OPC_RecordChild1, // #1 = $imm
/*7969*/    OPC_Scope, 21, /*->7992*/ // 3 children in Scope
/*7971*/      OPC_MoveChild, 1,
/*7973*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*7976*/      OPC_CheckPredicate, 0, // Predicate_immSExt16
/*7978*/      OPC_MoveParent,
/*7979*/      OPC_CheckType, MVT::i32,
/*7981*/      OPC_EmitConvertToTarget, 1,
/*7983*/      OPC_MorphNodeTo, TARGET_VAL(PPC::MULLI), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
              // Src: (mul:i32 GPRC:i32:$rA, (imm:i32)<<P:Predicate_immSExt16>>:$imm) - Complexity = 7
              // Dst: (MULLI:i32 GPRC:i32:$rA, (imm:i32):$imm)
/*7992*/    /*Scope*/ 11, /*->8004*/
/*7993*/      OPC_CheckType, MVT::i32,
/*7995*/      OPC_MorphNodeTo, TARGET_VAL(PPC::MULLW), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (mul:i32 GPRC:i32:$rA, GPRC:i32:$rB) - Complexity = 3
              // Dst: (MULLW:i32 GPRC:i32:$rA, GPRC:i32:$rB)
/*8004*/    /*Scope*/ 11, /*->8016*/
/*8005*/      OPC_CheckType, MVT::i64,
/*8007*/      OPC_MorphNodeTo, TARGET_VAL(PPC::MULLD), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (mul:i64 G8RC:i64:$rA, G8RC:i64:$rB) - Complexity = 3
              // Dst: (MULLD:i64 G8RC:i64:$rA, G8RC:i64:$rB)
/*8016*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 71,  TARGET_VAL(ISD::SUBC),// ->8091
/*8020*/    OPC_RecordChild0, // #0 = $imm
/*8021*/    OPC_Scope, 39, /*->8062*/ // 2 children in Scope
/*8023*/      OPC_MoveChild, 0,
/*8025*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*8028*/      OPC_CheckPredicate, 0, // Predicate_immSExt16
/*8030*/      OPC_MoveParent,
/*8031*/      OPC_RecordChild1, // #1 = $rA
/*8032*/      OPC_SwitchType /*2 cases */, 12,  MVT::i32,// ->8047
/*8035*/        OPC_EmitConvertToTarget, 0,
/*8037*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SUBFIC), 0|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 1, 2, 
                // Src: (subc:i32 (imm:i32)<<P:Predicate_immSExt16>>:$imm, GPRC:i32:$rA) - Complexity = 7
                // Dst: (SUBFIC:i32:i32 GPRC:i32:$rA, (imm:i32):$imm)
              /*SwitchType*/ 12,  MVT::i64,// ->8061
/*8049*/        OPC_EmitConvertToTarget, 0,
/*8051*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SUBFIC8), 0|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 1, 2, 
                // Src: (subc:i64 (imm:i64)<<P:Predicate_immSExt16>>:$imm, G8RC:i64:$rA) - Complexity = 7
                // Dst: (SUBFIC8:i64:i32 G8RC:i64:$rA, (imm:i64):$imm)
              0, // EndSwitchType
/*8062*/    /*Scope*/ 27, /*->8090*/
/*8063*/      OPC_RecordChild1, // #1 = $rA
/*8064*/      OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->8077
/*8067*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SUBFC), 0|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (subc:i32 GPRC:i32:$rB, GPRC:i32:$rA) - Complexity = 3
                // Dst: (SUBFC:i32:i32 GPRC:i32:$rA, GPRC:i32:$rB)
              /*SwitchType*/ 10,  MVT::i64,// ->8089
/*8079*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SUBFC8), 0|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (subc:i64 G8RC:i64:$rB, G8RC:i64:$rA) - Complexity = 3
                // Dst: (SUBFC8:i64:i32 G8RC:i64:$rA, G8RC:i64:$rB)
              0, // EndSwitchType
/*8090*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 13|128,1/*141*/,  TARGET_VAL(ISD::FNEG),// ->8236
/*8095*/    OPC_Scope, 114, /*->8211*/ // 2 children in Scope
/*8097*/      OPC_MoveChild, 0,
/*8099*/      OPC_SwitchOpcode /*2 cases */, 80,  TARGET_VAL(ISD::FMA),// ->8183
/*8103*/        OPC_RecordChild0, // #0 = $FRA
/*8104*/        OPC_RecordChild1, // #1 = $FRC
/*8105*/        OPC_Scope, 46, /*->8153*/ // 2 children in Scope
/*8107*/          OPC_MoveChild, 2,
/*8109*/          OPC_CheckOpcode, TARGET_VAL(ISD::FNEG),
/*8112*/          OPC_RecordChild0, // #2 = $FRB
/*8113*/          OPC_MoveParent,
/*8114*/          OPC_MoveParent,
/*8115*/          OPC_SwitchType /*3 cases */, 10,  MVT::f64,// ->8128
/*8118*/            OPC_MorphNodeTo, TARGET_VAL(PPC::FNMSUB), 0,
                        1/*#VTs*/, MVT::f64, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (fneg:f64 (fma:f64 F8RC:f64:$FRA, F8RC:f64:$FRC, (fneg:f64 F8RC:f64:$FRB))) - Complexity = 9
                    // Dst: (FNMSUB:f64 F8RC:f64:$FRA, F8RC:f64:$FRC, F8RC:f64:$FRB)
                  /*SwitchType*/ 10,  MVT::f32,// ->8140
/*8130*/            OPC_MorphNodeTo, TARGET_VAL(PPC::FNMSUBS), 0,
                        1/*#VTs*/, MVT::f32, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (fneg:f32 (fma:f32 F4RC:f32:$FRA, F4RC:f32:$FRC, (fneg:f32 F4RC:f32:$FRB))) - Complexity = 9
                    // Dst: (FNMSUBS:f32 F4RC:f32:$FRA, F4RC:f32:$FRC, F4RC:f32:$FRB)
                  /*SwitchType*/ 10,  MVT::v4f32,// ->8152
/*8142*/            OPC_MorphNodeTo, TARGET_VAL(PPC::VNMSUBFP), 0,
                        1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (fneg:v4f32 (fma:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vC, (fneg:v4f32 VRRC:v4f32:$vB))) - Complexity = 9
                    // Dst: (VNMSUBFP:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vC, VRRC:v4f32:$vB)
                  0, // EndSwitchType
/*8153*/        /*Scope*/ 28, /*->8182*/
/*8154*/          OPC_RecordChild2, // #2 = $FRB
/*8155*/          OPC_MoveParent,
/*8156*/          OPC_SwitchType /*2 cases */, 10,  MVT::f64,// ->8169
/*8159*/            OPC_MorphNodeTo, TARGET_VAL(PPC::FNMADD), 0,
                        1/*#VTs*/, MVT::f64, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (fneg:f64 (fma:f64 F8RC:f64:$FRA, F8RC:f64:$FRC, F8RC:f64:$FRB)) - Complexity = 6
                    // Dst: (FNMADD:f64 F8RC:f64:$FRA, F8RC:f64:$FRC, F8RC:f64:$FRB)
                  /*SwitchType*/ 10,  MVT::f32,// ->8181
/*8171*/            OPC_MorphNodeTo, TARGET_VAL(PPC::FNMADDS), 0,
                        1/*#VTs*/, MVT::f32, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (fneg:f32 (fma:f32 F4RC:f32:$FRA, F4RC:f32:$FRC, F4RC:f32:$FRB)) - Complexity = 6
                    // Dst: (FNMADDS:f32 F4RC:f32:$FRA, F4RC:f32:$FRC, F4RC:f32:$FRB)
                  0, // EndSwitchType
/*8182*/        0, /*End of Scope*/
              /*SwitchOpcode*/ 24,  TARGET_VAL(ISD::FABS),// ->8210
/*8186*/        OPC_RecordChild0, // #0 = $frB
/*8187*/        OPC_MoveParent,
/*8188*/        OPC_SwitchType /*2 cases */, 8,  MVT::f32,// ->8199
/*8191*/          OPC_MorphNodeTo, TARGET_VAL(PPC::FNABSS), 0,
                      1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
                  // Src: (fneg:f32 (fabs:f32 F4RC:f32:$frB)) - Complexity = 6
                  // Dst: (FNABSS:f32 F4RC:f32:$frB)
                /*SwitchType*/ 8,  MVT::f64,// ->8209
/*8201*/          OPC_MorphNodeTo, TARGET_VAL(PPC::FNABSD), 0,
                      1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
                  // Src: (fneg:f64 (fabs:f64 F8RC:f64:$frB)) - Complexity = 6
                  // Dst: (FNABSD:f64 F8RC:f64:$frB)
                0, // EndSwitchType
              0, // EndSwitchOpcode
/*8211*/    /*Scope*/ 23, /*->8235*/
/*8212*/      OPC_RecordChild0, // #0 = $frB
/*8213*/      OPC_SwitchType /*2 cases */, 8,  MVT::f32,// ->8224
/*8216*/        OPC_MorphNodeTo, TARGET_VAL(PPC::FNEGS), 0,
                    1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
                // Src: (fneg:f32 F4RC:f32:$frB) - Complexity = 3
                // Dst: (FNEGS:f32 F4RC:f32:$frB)
              /*SwitchType*/ 8,  MVT::f64,// ->8234
/*8226*/        OPC_MorphNodeTo, TARGET_VAL(PPC::FNEGD), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
                // Src: (fneg:f64 F8RC:f64:$frB) - Complexity = 3
                // Dst: (FNEGD:f64 F8RC:f64:$frB)
              0, // EndSwitchType
/*8235*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 84|128,1/*212*/,  TARGET_VAL(PPCISD::VCMP),// ->8452
/*8240*/    OPC_RecordChild0, // #0 = $vA
/*8241*/    OPC_RecordChild1, // #1 = $vB
/*8242*/    OPC_MoveChild, 2,
/*8244*/    OPC_Scope, 14, /*->8260*/ // 13 children in Scope
/*8246*/      OPC_CheckInteger, 6, 
/*8248*/      OPC_MoveParent,
/*8249*/      OPC_CheckType, MVT::v16i8,
/*8251*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPEQUB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB, 6:i32) - Complexity = 8
              // Dst: (VCMPEQUB:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*8260*/    /*Scope*/ 15, /*->8276*/
/*8261*/      OPC_CheckInteger, 6|128,6/*774*/, 
/*8264*/      OPC_MoveParent,
/*8265*/      OPC_CheckType, MVT::v16i8,
/*8267*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTSB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB, 774:i32) - Complexity = 8
              // Dst: (VCMPGTSB:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*8276*/    /*Scope*/ 15, /*->8292*/
/*8277*/      OPC_CheckInteger, 6|128,4/*518*/, 
/*8280*/      OPC_MoveParent,
/*8281*/      OPC_CheckType, MVT::v16i8,
/*8283*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTUB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB, 518:i32) - Complexity = 8
              // Dst: (VCMPGTUB:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*8292*/    /*Scope*/ 14, /*->8307*/
/*8293*/      OPC_CheckInteger, 70, 
/*8295*/      OPC_MoveParent,
/*8296*/      OPC_CheckType, MVT::v8i16,
/*8298*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPEQUH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB, 70:i32) - Complexity = 8
              // Dst: (VCMPEQUH:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*8307*/    /*Scope*/ 15, /*->8323*/
/*8308*/      OPC_CheckInteger, 70|128,6/*838*/, 
/*8311*/      OPC_MoveParent,
/*8312*/      OPC_CheckType, MVT::v8i16,
/*8314*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTSH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB, 838:i32) - Complexity = 8
              // Dst: (VCMPGTSH:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*8323*/    /*Scope*/ 15, /*->8339*/
/*8324*/      OPC_CheckInteger, 70|128,4/*582*/, 
/*8327*/      OPC_MoveParent,
/*8328*/      OPC_CheckType, MVT::v8i16,
/*8330*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTUH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB, 582:i32) - Complexity = 8
              // Dst: (VCMPGTUH:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*8339*/    /*Scope*/ 15, /*->8355*/
/*8340*/      OPC_CheckInteger, 6|128,1/*134*/, 
/*8343*/      OPC_MoveParent,
/*8344*/      OPC_CheckType, MVT::v4i32,
/*8346*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPEQUW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB, 134:i32) - Complexity = 8
              // Dst: (VCMPEQUW:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*8355*/    /*Scope*/ 15, /*->8371*/
/*8356*/      OPC_CheckInteger, 6|128,7/*902*/, 
/*8359*/      OPC_MoveParent,
/*8360*/      OPC_CheckType, MVT::v4i32,
/*8362*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTSW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB, 902:i32) - Complexity = 8
              // Dst: (VCMPGTSW:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*8371*/    /*Scope*/ 15, /*->8387*/
/*8372*/      OPC_CheckInteger, 6|128,5/*646*/, 
/*8375*/      OPC_MoveParent,
/*8376*/      OPC_CheckType, MVT::v4i32,
/*8378*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTUW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB, 646:i32) - Complexity = 8
              // Dst: (VCMPGTUW:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*8387*/    /*Scope*/ 15, /*->8403*/
/*8388*/      OPC_CheckInteger, 70|128,7/*966*/, 
/*8391*/      OPC_MoveParent,
/*8392*/      OPC_CheckType, MVT::v4f32,
/*8394*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPBFP), 0,
                  1/*#VTs*/, MVT::v4f32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vB, 966:i32) - Complexity = 8
              // Dst: (VCMPBFP:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vB)
/*8403*/    /*Scope*/ 15, /*->8419*/
/*8404*/      OPC_CheckInteger, 70|128,1/*198*/, 
/*8407*/      OPC_MoveParent,
/*8408*/      OPC_CheckType, MVT::v4f32,
/*8410*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPEQFP), 0,
                  1/*#VTs*/, MVT::v4f32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vB, 198:i32) - Complexity = 8
              // Dst: (VCMPEQFP:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vB)
/*8419*/    /*Scope*/ 15, /*->8435*/
/*8420*/      OPC_CheckInteger, 70|128,3/*454*/, 
/*8423*/      OPC_MoveParent,
/*8424*/      OPC_CheckType, MVT::v4f32,
/*8426*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGEFP), 0,
                  1/*#VTs*/, MVT::v4f32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vB, 454:i32) - Complexity = 8
              // Dst: (VCMPGEFP:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vB)
/*8435*/    /*Scope*/ 15, /*->8451*/
/*8436*/      OPC_CheckInteger, 70|128,5/*710*/, 
/*8439*/      OPC_MoveParent,
/*8440*/      OPC_CheckType, MVT::v4f32,
/*8442*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTFP), 0,
                  1/*#VTs*/, MVT::v4f32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vB, 710:i32) - Complexity = 8
              // Dst: (VCMPGTFP:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vB)
/*8451*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 97|128,1/*225*/,  TARGET_VAL(PPCISD::VCMPo),// ->8681
/*8456*/    OPC_RecordChild0, // #0 = $vA
/*8457*/    OPC_RecordChild1, // #1 = $vB
/*8458*/    OPC_MoveChild, 2,
/*8460*/    OPC_Scope, 15, /*->8477*/ // 13 children in Scope
/*8462*/      OPC_CheckInteger, 6, 
/*8464*/      OPC_MoveParent,
/*8465*/      OPC_CheckType, MVT::v16i8,
/*8467*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPEQUBo), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::v16i8, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp_o:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB, 6:i32) - Complexity = 8
              // Dst: (VCMPEQUBo:v16i8:i32 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*8477*/    /*Scope*/ 16, /*->8494*/
/*8478*/      OPC_CheckInteger, 6|128,6/*774*/, 
/*8481*/      OPC_MoveParent,
/*8482*/      OPC_CheckType, MVT::v16i8,
/*8484*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTSBo), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::v16i8, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp_o:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB, 774:i32) - Complexity = 8
              // Dst: (VCMPGTSBo:v16i8:i32 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*8494*/    /*Scope*/ 16, /*->8511*/
/*8495*/      OPC_CheckInteger, 6|128,4/*518*/, 
/*8498*/      OPC_MoveParent,
/*8499*/      OPC_CheckType, MVT::v16i8,
/*8501*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTUBo), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::v16i8, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp_o:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB, 518:i32) - Complexity = 8
              // Dst: (VCMPGTUBo:v16i8:i32 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*8511*/    /*Scope*/ 15, /*->8527*/
/*8512*/      OPC_CheckInteger, 70, 
/*8514*/      OPC_MoveParent,
/*8515*/      OPC_CheckType, MVT::v8i16,
/*8517*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPEQUHo), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::v8i16, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp_o:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB, 70:i32) - Complexity = 8
              // Dst: (VCMPEQUHo:v8i16:i32 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*8527*/    /*Scope*/ 16, /*->8544*/
/*8528*/      OPC_CheckInteger, 70|128,6/*838*/, 
/*8531*/      OPC_MoveParent,
/*8532*/      OPC_CheckType, MVT::v8i16,
/*8534*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTSHo), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::v8i16, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp_o:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB, 838:i32) - Complexity = 8
              // Dst: (VCMPGTSHo:v8i16:i32 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*8544*/    /*Scope*/ 16, /*->8561*/
/*8545*/      OPC_CheckInteger, 70|128,4/*582*/, 
/*8548*/      OPC_MoveParent,
/*8549*/      OPC_CheckType, MVT::v8i16,
/*8551*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTUHo), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::v8i16, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp_o:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB, 582:i32) - Complexity = 8
              // Dst: (VCMPGTUHo:v8i16:i32 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*8561*/    /*Scope*/ 16, /*->8578*/
/*8562*/      OPC_CheckInteger, 6|128,1/*134*/, 
/*8565*/      OPC_MoveParent,
/*8566*/      OPC_CheckType, MVT::v4i32,
/*8568*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPEQUWo), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::v4i32, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp_o:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB, 134:i32) - Complexity = 8
              // Dst: (VCMPEQUWo:v4i32:i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*8578*/    /*Scope*/ 16, /*->8595*/
/*8579*/      OPC_CheckInteger, 6|128,7/*902*/, 
/*8582*/      OPC_MoveParent,
/*8583*/      OPC_CheckType, MVT::v4i32,
/*8585*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTSWo), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::v4i32, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp_o:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB, 902:i32) - Complexity = 8
              // Dst: (VCMPGTSWo:v4i32:i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*8595*/    /*Scope*/ 16, /*->8612*/
/*8596*/      OPC_CheckInteger, 6|128,5/*646*/, 
/*8599*/      OPC_MoveParent,
/*8600*/      OPC_CheckType, MVT::v4i32,
/*8602*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTUWo), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::v4i32, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp_o:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB, 646:i32) - Complexity = 8
              // Dst: (VCMPGTUWo:v4i32:i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*8612*/    /*Scope*/ 16, /*->8629*/
/*8613*/      OPC_CheckInteger, 70|128,7/*966*/, 
/*8616*/      OPC_MoveParent,
/*8617*/      OPC_CheckType, MVT::v4f32,
/*8619*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPBFPo), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::v4f32, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp_o:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vB, 966:i32) - Complexity = 8
              // Dst: (VCMPBFPo:v4f32:i32 VRRC:v4f32:$vA, VRRC:v4f32:$vB)
/*8629*/    /*Scope*/ 16, /*->8646*/
/*8630*/      OPC_CheckInteger, 70|128,1/*198*/, 
/*8633*/      OPC_MoveParent,
/*8634*/      OPC_CheckType, MVT::v4f32,
/*8636*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPEQFPo), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::v4f32, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp_o:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vB, 198:i32) - Complexity = 8
              // Dst: (VCMPEQFPo:v4f32:i32 VRRC:v4f32:$vA, VRRC:v4f32:$vB)
/*8646*/    /*Scope*/ 16, /*->8663*/
/*8647*/      OPC_CheckInteger, 70|128,3/*454*/, 
/*8650*/      OPC_MoveParent,
/*8651*/      OPC_CheckType, MVT::v4f32,
/*8653*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGEFPo), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::v4f32, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp_o:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vB, 454:i32) - Complexity = 8
              // Dst: (VCMPGEFPo:v4f32:i32 VRRC:v4f32:$vA, VRRC:v4f32:$vB)
/*8663*/    /*Scope*/ 16, /*->8680*/
/*8664*/      OPC_CheckInteger, 70|128,5/*710*/, 
/*8667*/      OPC_MoveParent,
/*8668*/      OPC_CheckType, MVT::v4f32,
/*8670*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTFPo), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::v4f32, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp_o:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vB, 710:i32) - Complexity = 8
              // Dst: (VCMPGTFPo:v4f32:i32 VRRC:v4f32:$vA, VRRC:v4f32:$vB)
/*8680*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 52|128,2/*308*/,  TARGET_VAL(ISD::VECTOR_SHUFFLE),// ->8993
/*8685*/    OPC_Scope, 73, /*->8760*/ // 4 children in Scope
/*8687*/      OPC_RecordNode, // #0 = $UIMM
/*8688*/      OPC_RecordChild0, // #1 = $vB
/*8689*/      OPC_MoveChild, 1,
/*8691*/      OPC_CheckOpcode, TARGET_VAL(ISD::UNDEF),
/*8694*/      OPC_MoveParent,
/*8695*/      OPC_CheckType, MVT::v16i8,
/*8697*/      OPC_Scope, 14, /*->8713*/ // 4 children in Scope
/*8699*/        OPC_CheckPredicate, 67, // Predicate_vspltb_shuffle
/*8701*/        OPC_EmitNodeXForm, 5, 0, // VSPLTB_get_imm
/*8704*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VSPLTB), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 2, 1, 
                // Src: (vector_shuffle:v16i8 VRRC:v16i8:$vB, (undef:v16i8))<<P:Predicate_vspltb_shuffle>><<X:VSPLTB_get_imm>>:$UIMM - Complexity = 7
                // Dst: (VSPLTB:v16i8 (VSPLTB_get_imm:i32 (vector_shuffle:v16i8 VRRC:v16i8:$vB, (undef:v16i8)):$UIMM), VRRC:v16i8:$vB)
/*8713*/      /*Scope*/ 14, /*->8728*/
/*8714*/        OPC_CheckPredicate, 68, // Predicate_vsplth_shuffle
/*8716*/        OPC_EmitNodeXForm, 6, 0, // VSPLTH_get_imm
/*8719*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VSPLTH), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 2, 1, 
                // Src: (vector_shuffle:v16i8 VRRC:v16i8:$vB, (undef:v16i8))<<P:Predicate_vsplth_shuffle>><<X:VSPLTH_get_imm>>:$UIMM - Complexity = 7
                // Dst: (VSPLTH:v16i8 (VSPLTH_get_imm:i32 (vector_shuffle:v16i8 VRRC:v16i8:$vB, (undef:v16i8)):$UIMM), VRRC:v16i8:$vB)
/*8728*/      /*Scope*/ 14, /*->8743*/
/*8729*/        OPC_CheckPredicate, 69, // Predicate_vspltw_shuffle
/*8731*/        OPC_EmitNodeXForm, 7, 0, // VSPLTW_get_imm
/*8734*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VSPLTW), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 2, 1, 
                // Src: (vector_shuffle:v16i8 VRRC:v16i8:$vB, (undef:v16i8))<<P:Predicate_vspltw_shuffle>><<X:VSPLTW_get_imm>>:$UIMM - Complexity = 7
                // Dst: (VSPLTW:v16i8 (VSPLTW_get_imm:i32 (vector_shuffle:v16i8 VRRC:v16i8:$vB, (undef:v16i8)):$UIMM), VRRC:v16i8:$vB)
/*8743*/      /*Scope*/ 15, /*->8759*/
/*8744*/        OPC_CheckPredicate, 70, // Predicate_vsldoi_unary_shuffle
/*8746*/        OPC_EmitNodeXForm, 8, 0, // VSLDOI_unary_get_imm
/*8749*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VSLDOI), 0,
                    1/*#VTs*/, MVT::v16i8, 3/*#Ops*/, 1, 1, 2, 
                // Src: (vector_shuffle:v16i8 VRRC:v16i8:$vA, (undef:v16i8))<<P:Predicate_vsldoi_unary_shuffle>><<X:VSLDOI_unary_get_imm>>:$in - Complexity = 7
                // Dst: (VSLDOI:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vA, (VSLDOI_unary_get_imm:i32 VRRC:v16i8:$in))
/*8759*/      0, /*End of Scope*/
/*8760*/    /*Scope*/ 107, /*->8868*/
/*8761*/      OPC_RecordChild0, // #0 = $vA
/*8762*/      OPC_MoveChild, 1,
/*8764*/      OPC_CheckOpcode, TARGET_VAL(ISD::UNDEF),
/*8767*/      OPC_MoveParent,
/*8768*/      OPC_CheckType, MVT::v16i8,
/*8770*/      OPC_Scope, 11, /*->8783*/ // 8 children in Scope
/*8772*/        OPC_CheckPredicate, 71, // Predicate_vpkuwum_unary_shuffle
/*8774*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VPKUWUM), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 0, 
                // Src: (vector_shuffle:v16i8 VRRC:v16i8:$vA, (undef:v16i8))<<P:Predicate_vpkuwum_unary_shuffle>> - Complexity = 7
                // Dst: (VPKUWUM:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vA)
/*8783*/      /*Scope*/ 11, /*->8795*/
/*8784*/        OPC_CheckPredicate, 72, // Predicate_vpkuhum_unary_shuffle
/*8786*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VPKUHUM), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 0, 
                // Src: (vector_shuffle:v16i8 VRRC:v16i8:$vA, (undef:v16i8))<<P:Predicate_vpkuhum_unary_shuffle>> - Complexity = 7
                // Dst: (VPKUHUM:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vA)
/*8795*/      /*Scope*/ 11, /*->8807*/
/*8796*/        OPC_CheckPredicate, 73, // Predicate_vmrglb_unary_shuffle
/*8798*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VMRGLB), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 0, 
                // Src: (vector_shuffle:v16i8 VRRC:v16i8:$vA, (undef:v16i8))<<P:Predicate_vmrglb_unary_shuffle>> - Complexity = 7
                // Dst: (VMRGLB:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vA)
/*8807*/      /*Scope*/ 11, /*->8819*/
/*8808*/        OPC_CheckPredicate, 74, // Predicate_vmrglh_unary_shuffle
/*8810*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VMRGLH), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 0, 
                // Src: (vector_shuffle:v16i8 VRRC:v16i8:$vA, (undef:v16i8))<<P:Predicate_vmrglh_unary_shuffle>> - Complexity = 7
                // Dst: (VMRGLH:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vA)
/*8819*/      /*Scope*/ 11, /*->8831*/
/*8820*/        OPC_CheckPredicate, 75, // Predicate_vmrglw_unary_shuffle
/*8822*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VMRGLW), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 0, 
                // Src: (vector_shuffle:v16i8 VRRC:v16i8:$vA, (undef:v16i8))<<P:Predicate_vmrglw_unary_shuffle>> - Complexity = 7
                // Dst: (VMRGLW:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vA)
/*8831*/      /*Scope*/ 11, /*->8843*/
/*8832*/        OPC_CheckPredicate, 76, // Predicate_vmrghb_unary_shuffle
/*8834*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VMRGHB), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 0, 
                // Src: (vector_shuffle:v16i8 VRRC:v16i8:$vA, (undef:v16i8))<<P:Predicate_vmrghb_unary_shuffle>> - Complexity = 7
                // Dst: (VMRGHB:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vA)
/*8843*/      /*Scope*/ 11, /*->8855*/
/*8844*/        OPC_CheckPredicate, 77, // Predicate_vmrghh_unary_shuffle
/*8846*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VMRGHH), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 0, 
                // Src: (vector_shuffle:v16i8 VRRC:v16i8:$vA, (undef:v16i8))<<P:Predicate_vmrghh_unary_shuffle>> - Complexity = 7
                // Dst: (VMRGHH:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vA)
/*8855*/      /*Scope*/ 11, /*->8867*/
/*8856*/        OPC_CheckPredicate, 78, // Predicate_vmrghw_unary_shuffle
/*8858*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VMRGHW), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 0, 
                // Src: (vector_shuffle:v16i8 VRRC:v16i8:$vA, (undef:v16i8))<<P:Predicate_vmrghw_unary_shuffle>> - Complexity = 7
                // Dst: (VMRGHW:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vA)
/*8867*/      0, /*End of Scope*/
/*8868*/    /*Scope*/ 20, /*->8889*/
/*8869*/      OPC_RecordNode, // #0 = $SH
/*8870*/      OPC_RecordChild0, // #1 = $vA
/*8871*/      OPC_RecordChild1, // #2 = $vB
/*8872*/      OPC_CheckPredicate, 79, // Predicate_vsldoi_shuffle
/*8874*/      OPC_CheckType, MVT::v16i8,
/*8876*/      OPC_EmitNodeXForm, 9, 0, // VSLDOI_get_imm
/*8879*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSLDOI), 0,
                  1/*#VTs*/, MVT::v16i8, 3/*#Ops*/, 1, 2, 3, 
              // Src: (vector_shuffle:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)<<P:Predicate_vsldoi_shuffle>><<X:VSLDOI_get_imm>>:$SH - Complexity = 4
              // Dst: (VSLDOI:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB, (VSLDOI_get_imm:i32 (vector_shuffle:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB):$SH))
/*8889*/    /*Scope*/ 102, /*->8992*/
/*8890*/      OPC_RecordChild0, // #0 = $vA
/*8891*/      OPC_RecordChild1, // #1 = $vB
/*8892*/      OPC_CheckType, MVT::v16i8,
/*8894*/      OPC_Scope, 11, /*->8907*/ // 8 children in Scope
/*8896*/        OPC_CheckPredicate, 80, // Predicate_vmrghb_shuffle
/*8898*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VMRGHB), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
                // Src: (vector_shuffle:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)<<P:Predicate_vmrghb_shuffle>> - Complexity = 4
                // Dst: (VMRGHB:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*8907*/      /*Scope*/ 11, /*->8919*/
/*8908*/        OPC_CheckPredicate, 81, // Predicate_vmrghh_shuffle
/*8910*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VMRGHH), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
                // Src: (vector_shuffle:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)<<P:Predicate_vmrghh_shuffle>> - Complexity = 4
                // Dst: (VMRGHH:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*8919*/      /*Scope*/ 11, /*->8931*/
/*8920*/        OPC_CheckPredicate, 82, // Predicate_vmrghw_shuffle
/*8922*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VMRGHW), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
                // Src: (vector_shuffle:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)<<P:Predicate_vmrghw_shuffle>> - Complexity = 4
                // Dst: (VMRGHW:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*8931*/      /*Scope*/ 11, /*->8943*/
/*8932*/        OPC_CheckPredicate, 83, // Predicate_vmrglb_shuffle
/*8934*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VMRGLB), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
                // Src: (vector_shuffle:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)<<P:Predicate_vmrglb_shuffle>> - Complexity = 4
                // Dst: (VMRGLB:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*8943*/      /*Scope*/ 11, /*->8955*/
/*8944*/        OPC_CheckPredicate, 84, // Predicate_vmrglh_shuffle
/*8946*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VMRGLH), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
                // Src: (vector_shuffle:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)<<P:Predicate_vmrglh_shuffle>> - Complexity = 4
                // Dst: (VMRGLH:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*8955*/      /*Scope*/ 11, /*->8967*/
/*8956*/        OPC_CheckPredicate, 85, // Predicate_vmrglw_shuffle
/*8958*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VMRGLW), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
                // Src: (vector_shuffle:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)<<P:Predicate_vmrglw_shuffle>> - Complexity = 4
                // Dst: (VMRGLW:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*8967*/      /*Scope*/ 11, /*->8979*/
/*8968*/        OPC_CheckPredicate, 86, // Predicate_vpkuhum_shuffle
/*8970*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VPKUHUM), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
                // Src: (vector_shuffle:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)<<P:Predicate_vpkuhum_shuffle>> - Complexity = 4
                // Dst: (VPKUHUM:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*8979*/      /*Scope*/ 11, /*->8991*/
/*8980*/        OPC_CheckPredicate, 87, // Predicate_vpkuwum_shuffle
/*8982*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VPKUWUM), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
                // Src: (vector_shuffle:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)<<P:Predicate_vpkuwum_shuffle>> - Complexity = 4
                // Dst: (VPKUWUM:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*8991*/      0, /*End of Scope*/
/*8992*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 17,  TARGET_VAL(ISD::CALLSEQ_START),// ->9013
/*8996*/    OPC_RecordNode,   // #0 = 'callseq_start' chained node
/*8997*/    OPC_RecordChild1, // #1 = $amt
/*8998*/    OPC_MoveChild, 1,
/*9000*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*9003*/    OPC_MoveParent,
/*9004*/    OPC_EmitMergeInputChains1_0,
/*9005*/    OPC_MorphNodeTo, TARGET_VAL(PPC::ADJCALLSTACKDOWN), 0|OPFL_Chain|OPFL_GlueOutput,
                1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
            // Src: (callseq_start (timm:i32):$amt) - Complexity = 6
            // Dst: (ADJCALLSTACKDOWN:i32 (timm:i32):$amt)
          /*SwitchOpcode*/ 98,  TARGET_VAL(PPCISD::CALL_Darwin),// ->9114
/*9016*/    OPC_RecordNode,   // #0 = 'PPCcall_Darwin' chained node
/*9017*/    OPC_CaptureGlueInput,
/*9018*/    OPC_RecordChild1, // #1 = $func
/*9019*/    OPC_MoveChild, 1,
/*9021*/    OPC_SwitchOpcode /*3 cases */, 30,  TARGET_VAL(ISD::Constant),// ->9055
/*9025*/      OPC_SwitchType /*2 cases */, 12,  MVT::i32,// ->9040
/*9028*/        OPC_MoveParent,
/*9029*/        OPC_EmitMergeInputChains1_0,
/*9030*/        OPC_EmitConvertToTarget, 1,
/*9032*/        OPC_MorphNodeTo, TARGET_VAL(PPC::BLA_Darwin), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
                // Src: (PPCcall_Darwin (imm:i32):$func) - Complexity = 6
                // Dst: (BLA_Darwin:i32 (imm:i32):$func)
              /*SwitchType*/ 12,  MVT::i64,// ->9054
/*9042*/        OPC_MoveParent,
/*9043*/        OPC_EmitMergeInputChains1_0,
/*9044*/        OPC_EmitConvertToTarget, 1,
/*9046*/        OPC_MorphNodeTo, TARGET_VAL(PPC::BLA8_Darwin), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2, 
                // Src: (PPCcall_Darwin (imm:i64):$func) - Complexity = 6
                // Dst: (BLA8_Darwin:i64 (imm:i64):$func)
              0, // EndSwitchType
            /*SwitchOpcode*/ 26,  TARGET_VAL(ISD::TargetGlobalAddress),// ->9084
/*9058*/      OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->9071
/*9061*/        OPC_MoveParent,
/*9062*/        OPC_EmitMergeInputChains1_0,
/*9063*/        OPC_MorphNodeTo, TARGET_VAL(PPC::BL_Darwin), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (PPCcall_Darwin (tglobaladdr:i32):$dst) - Complexity = 6
                // Dst: (BL_Darwin:i32 (tglobaladdr:i32):$dst)
              /*SwitchType*/ 10,  MVT::i64,// ->9083
/*9073*/        OPC_MoveParent,
/*9074*/        OPC_EmitMergeInputChains1_0,
/*9075*/        OPC_MorphNodeTo, TARGET_VAL(PPC::BL8_Darwin), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 1, 
                // Src: (PPCcall_Darwin (tglobaladdr:i64):$dst) - Complexity = 6
                // Dst: (BL8_Darwin:i64 (tglobaladdr:i64):$dst)
              0, // EndSwitchType
            /*SwitchOpcode*/ 26,  TARGET_VAL(ISD::TargetExternalSymbol),// ->9113
/*9087*/      OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->9100
/*9090*/        OPC_MoveParent,
/*9091*/        OPC_EmitMergeInputChains1_0,
/*9092*/        OPC_MorphNodeTo, TARGET_VAL(PPC::BL_Darwin), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (PPCcall_Darwin (texternalsym:i32):$dst) - Complexity = 6
                // Dst: (BL_Darwin:i32 (texternalsym:i32):$dst)
              /*SwitchType*/ 10,  MVT::i64,// ->9112
/*9102*/        OPC_MoveParent,
/*9103*/        OPC_EmitMergeInputChains1_0,
/*9104*/        OPC_MorphNodeTo, TARGET_VAL(PPC::BL8_Darwin), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 1, 
                // Src: (PPCcall_Darwin (texternalsym:i64):$dst) - Complexity = 6
                // Dst: (BL8_Darwin:i64 (texternalsym:i64):$dst)
              0, // EndSwitchType
            0, // EndSwitchOpcode
          /*SwitchOpcode*/ 98,  TARGET_VAL(PPCISD::CALL_SVR4),// ->9215
/*9117*/    OPC_RecordNode,   // #0 = 'PPCcall_SVR4' chained node
/*9118*/    OPC_CaptureGlueInput,
/*9119*/    OPC_RecordChild1, // #1 = $func
/*9120*/    OPC_MoveChild, 1,
/*9122*/    OPC_SwitchOpcode /*3 cases */, 30,  TARGET_VAL(ISD::Constant),// ->9156
/*9126*/      OPC_SwitchType /*2 cases */, 12,  MVT::i32,// ->9141
/*9129*/        OPC_MoveParent,
/*9130*/        OPC_EmitMergeInputChains1_0,
/*9131*/        OPC_EmitConvertToTarget, 1,
/*9133*/        OPC_MorphNodeTo, TARGET_VAL(PPC::BLA_SVR4), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
                // Src: (PPCcall_SVR4 (imm:i32):$func) - Complexity = 6
                // Dst: (BLA_SVR4:i32 (imm:i32):$func)
              /*SwitchType*/ 12,  MVT::i64,// ->9155
/*9143*/        OPC_MoveParent,
/*9144*/        OPC_EmitMergeInputChains1_0,
/*9145*/        OPC_EmitConvertToTarget, 1,
/*9147*/        OPC_MorphNodeTo, TARGET_VAL(PPC::BLA8_ELF), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2, 
                // Src: (PPCcall_SVR4 (imm:i64):$func) - Complexity = 6
                // Dst: (BLA8_ELF:i64 (imm:i64):$func)
              0, // EndSwitchType
            /*SwitchOpcode*/ 26,  TARGET_VAL(ISD::TargetGlobalAddress),// ->9185
/*9159*/      OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->9172
/*9162*/        OPC_MoveParent,
/*9163*/        OPC_EmitMergeInputChains1_0,
/*9164*/        OPC_MorphNodeTo, TARGET_VAL(PPC::BL_SVR4), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (PPCcall_SVR4 (tglobaladdr:i32):$dst) - Complexity = 6
                // Dst: (BL_SVR4:i32 (tglobaladdr:i32):$dst)
              /*SwitchType*/ 10,  MVT::i64,// ->9184
/*9174*/        OPC_MoveParent,
/*9175*/        OPC_EmitMergeInputChains1_0,
/*9176*/        OPC_MorphNodeTo, TARGET_VAL(PPC::BL8_ELF), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 1, 
                // Src: (PPCcall_SVR4 (tglobaladdr:i64):$dst) - Complexity = 6
                // Dst: (BL8_ELF:i64 (tglobaladdr:i64):$dst)
              0, // EndSwitchType
            /*SwitchOpcode*/ 26,  TARGET_VAL(ISD::TargetExternalSymbol),// ->9214
/*9188*/      OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->9201
/*9191*/        OPC_MoveParent,
/*9192*/        OPC_EmitMergeInputChains1_0,
/*9193*/        OPC_MorphNodeTo, TARGET_VAL(PPC::BL_SVR4), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (PPCcall_SVR4 (texternalsym:i32):$dst) - Complexity = 6
                // Dst: (BL_SVR4:i32 (texternalsym:i32):$dst)
              /*SwitchType*/ 10,  MVT::i64,// ->9213
/*9203*/        OPC_MoveParent,
/*9204*/        OPC_EmitMergeInputChains1_0,
/*9205*/        OPC_MorphNodeTo, TARGET_VAL(PPC::BL8_ELF), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 1, 
                // Src: (PPCcall_SVR4 (texternalsym:i64):$dst) - Complexity = 6
                // Dst: (BL8_ELF:i64 (texternalsym:i64):$dst)
              0, // EndSwitchType
            0, // EndSwitchOpcode
          /*SwitchOpcode*/ 114,  TARGET_VAL(ISD::SRA),// ->9332
/*9218*/    OPC_RecordChild0, // #0 = $rS
/*9219*/    OPC_RecordChild1, // #1 = $SH
/*9220*/    OPC_Scope, 38, /*->9260*/ // 5 children in Scope
/*9222*/      OPC_MoveChild, 1,
/*9224*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*9227*/      OPC_CheckType, MVT::i32,
/*9229*/      OPC_MoveParent,
/*9230*/      OPC_SwitchType /*2 cases */, 12,  MVT::i32,// ->9245
/*9233*/        OPC_EmitConvertToTarget, 1,
/*9235*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SRAWI), 0,
                    2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (sra:i32 GPRC:i32:$rS, (imm:i32):$SH) - Complexity = 6
                // Dst: (SRAWI:i32:i32 GPRC:i32:$rS, (imm:i32):$SH)
              /*SwitchType*/ 12,  MVT::i64,// ->9259
/*9247*/        OPC_EmitConvertToTarget, 1,
/*9249*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SRADI), 0,
                    2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (sra:i64 G8RC:i64:$rS, (imm:i32):$SH) - Complexity = 6
                // Dst: (SRADI:i64:i32 G8RC:i64:$rS, (imm:i32):$SH)
              0, // EndSwitchType
/*9260*/    /*Scope*/ 28, /*->9289*/
/*9261*/      OPC_CheckChild1Type, MVT::i32,
/*9263*/      OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->9276
/*9266*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SRAW), 0,
                    2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (sra:i32 GPRC:i32:$rS, GPRC:i32:$rB) - Complexity = 3
                // Dst: (SRAW:i32:i32 GPRC:i32:$rS, GPRC:i32:$rB)
              /*SwitchType*/ 10,  MVT::i64,// ->9288
/*9278*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SRAD), 0,
                    2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (sra:i64 G8RC:i64:$rS, GPRC:i32:$rB) - Complexity = 3
                // Dst: (SRAD:i64:i32 G8RC:i64:$rS, GPRC:i32:$rB)
              0, // EndSwitchType
/*9289*/    /*Scope*/ 13, /*->9303*/
/*9290*/      OPC_CheckChild1Type, MVT::v16i8,
/*9292*/      OPC_CheckType, MVT::v16i8,
/*9294*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSRAB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (sra:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB) - Complexity = 3
              // Dst: (VSRAB:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*9303*/    /*Scope*/ 13, /*->9317*/
/*9304*/      OPC_CheckChild1Type, MVT::v8i16,
/*9306*/      OPC_CheckType, MVT::v8i16,
/*9308*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSRAH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (sra:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB) - Complexity = 3
              // Dst: (VSRAH:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*9317*/    /*Scope*/ 13, /*->9331*/
/*9318*/      OPC_CheckChild1Type, MVT::v4i32,
/*9320*/      OPC_CheckType, MVT::v4i32,
/*9322*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSRAW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (sra:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 3
              // Dst: (VSRAW:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*9331*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 19,  TARGET_VAL(PPCISD::MTFSB0),// ->9354
/*9335*/    OPC_CaptureGlueInput,
/*9336*/    OPC_RecordChild0, // #0 = $FM
/*9337*/    OPC_MoveChild, 0,
/*9339*/    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*9342*/    OPC_CheckType, MVT::i32,
/*9344*/    OPC_MoveParent,
/*9345*/    OPC_EmitConvertToTarget, 0,
/*9347*/    OPC_MorphNodeTo, TARGET_VAL(PPC::MTFSB0), 0|OPFL_GlueInput|OPFL_GlueOutput,
                0/*#VTs*/, 1/*#Ops*/, 1, 
            // Src: (PPCmtfsb0 (imm:i32):$FM) - Complexity = 6
            // Dst: (MTFSB0 (imm:i32):$FM)
          /*SwitchOpcode*/ 19,  TARGET_VAL(PPCISD::MTFSB1),// ->9376
/*9357*/    OPC_CaptureGlueInput,
/*9358*/    OPC_RecordChild0, // #0 = $FM
/*9359*/    OPC_MoveChild, 0,
/*9361*/    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*9364*/    OPC_CheckType, MVT::i32,
/*9366*/    OPC_MoveParent,
/*9367*/    OPC_EmitConvertToTarget, 0,
/*9369*/    OPC_MorphNodeTo, TARGET_VAL(PPC::MTFSB1), 0|OPFL_GlueInput|OPFL_GlueOutput,
                0/*#VTs*/, 1/*#Ops*/, 1, 
            // Src: (PPCmtfsb1 (imm:i32):$FM) - Complexity = 6
            // Dst: (MTFSB1 (imm:i32):$FM)
          /*SwitchOpcode*/ 126,  TARGET_VAL(ISD::SHL),// ->9505
/*9379*/    OPC_RecordChild0, // #0 = $in
/*9380*/    OPC_RecordChild1, // #1 = $imm
/*9381*/    OPC_Scope, 52, /*->9435*/ // 5 children in Scope
/*9383*/      OPC_MoveChild, 1,
/*9385*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*9388*/      OPC_CheckType, MVT::i32,
/*9390*/      OPC_MoveParent,
/*9391*/      OPC_SwitchType /*2 cases */, 21,  MVT::i32,// ->9415
/*9394*/        OPC_EmitConvertToTarget, 1,
/*9396*/        OPC_EmitInteger, MVT::i32, 0, 
/*9399*/        OPC_EmitConvertToTarget, 1,
/*9401*/        OPC_EmitNodeXForm, 10, 4, // SHL32
/*9404*/        OPC_MorphNodeTo, TARGET_VAL(PPC::RLWINM), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 2, 3, 5, 
                // Src: (shl:i32 GPRC:i32:$in, (imm:i32):$imm) - Complexity = 6
                // Dst: (RLWINM:i32 GPRC:i32:$in, (imm:i32):$imm, 0:i32, (SHL32:i32 (imm:i32):$imm))
              /*SwitchType*/ 17,  MVT::i64,// ->9434
/*9417*/        OPC_EmitConvertToTarget, 1,
/*9419*/        OPC_EmitConvertToTarget, 1,
/*9421*/        OPC_EmitNodeXForm, 11, 3, // SHL64
/*9424*/        OPC_MorphNodeTo, TARGET_VAL(PPC::RLDICR), 0,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 2, 4, 
                // Src: (shl:i64 G8RC:i64:$in, (imm:i32):$imm) - Complexity = 6
                // Dst: (RLDICR:i64 G8RC:i64:$in, (imm:i32):$imm, (SHL64:i32 (imm:i32):$imm))
              0, // EndSwitchType
/*9435*/    /*Scope*/ 26, /*->9462*/
/*9436*/      OPC_CheckChild1Type, MVT::i32,
/*9438*/      OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->9450
/*9441*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SLW), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (shl:i32 GPRC:i32:$rS, GPRC:i32:$rB) - Complexity = 3
                // Dst: (SLW:i32 GPRC:i32:$rS, GPRC:i32:$rB)
              /*SwitchType*/ 9,  MVT::i64,// ->9461
/*9452*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SLD), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (shl:i64 G8RC:i64:$rS, GPRC:i32:$rB) - Complexity = 3
                // Dst: (SLD:i64 G8RC:i64:$rS, GPRC:i32:$rB)
              0, // EndSwitchType
/*9462*/    /*Scope*/ 13, /*->9476*/
/*9463*/      OPC_CheckChild1Type, MVT::v16i8,
/*9465*/      OPC_CheckType, MVT::v16i8,
/*9467*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSLB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (shl:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB) - Complexity = 3
              // Dst: (VSLB:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*9476*/    /*Scope*/ 13, /*->9490*/
/*9477*/      OPC_CheckChild1Type, MVT::v8i16,
/*9479*/      OPC_CheckType, MVT::v8i16,
/*9481*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSLH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (shl:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB) - Complexity = 3
              // Dst: (VSLH:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*9490*/    /*Scope*/ 13, /*->9504*/
/*9491*/      OPC_CheckChild1Type, MVT::v4i32,
/*9493*/      OPC_CheckType, MVT::v4i32,
/*9495*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSLW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (shl:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 3
              // Dst: (VSLW:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*9504*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 126,  TARGET_VAL(ISD::SRL),// ->9634
/*9508*/    OPC_RecordChild0, // #0 = $in
/*9509*/    OPC_RecordChild1, // #1 = $imm
/*9510*/    OPC_Scope, 52, /*->9564*/ // 5 children in Scope
/*9512*/      OPC_MoveChild, 1,
/*9514*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*9517*/      OPC_CheckType, MVT::i32,
/*9519*/      OPC_MoveParent,
/*9520*/      OPC_SwitchType /*2 cases */, 21,  MVT::i32,// ->9544
/*9523*/        OPC_EmitConvertToTarget, 1,
/*9525*/        OPC_EmitNodeXForm, 12, 2, // SRL32
/*9528*/        OPC_EmitConvertToTarget, 1,
/*9530*/        OPC_EmitInteger, MVT::i32, 31, 
/*9533*/        OPC_MorphNodeTo, TARGET_VAL(PPC::RLWINM), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (srl:i32 GPRC:i32:$in, (imm:i32):$imm) - Complexity = 6
                // Dst: (RLWINM:i32 GPRC:i32:$in, (SRL32:i32 (imm:i32):$imm), (imm:i32):$imm, 31:i32)
              /*SwitchType*/ 17,  MVT::i64,// ->9563
/*9546*/        OPC_EmitConvertToTarget, 1,
/*9548*/        OPC_EmitNodeXForm, 13, 2, // SRL64
/*9551*/        OPC_EmitConvertToTarget, 1,
/*9553*/        OPC_MorphNodeTo, TARGET_VAL(PPC::RLDICL), 0,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 3, 4, 
                // Src: (srl:i64 G8RC:i64:$in, (imm:i32):$imm) - Complexity = 6
                // Dst: (RLDICL:i64 G8RC:i64:$in, (SRL64:i32 (imm:i32):$imm), (imm:i32):$imm)
              0, // EndSwitchType
/*9564*/    /*Scope*/ 26, /*->9591*/
/*9565*/      OPC_CheckChild1Type, MVT::i32,
/*9567*/      OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->9579
/*9570*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SRW), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (srl:i32 GPRC:i32:$rS, GPRC:i32:$rB) - Complexity = 3
                // Dst: (SRW:i32 GPRC:i32:$rS, GPRC:i32:$rB)
              /*SwitchType*/ 9,  MVT::i64,// ->9590
/*9581*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SRD), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (srl:i64 G8RC:i64:$rS, GPRC:i32:$rB) - Complexity = 3
                // Dst: (SRD:i64 G8RC:i64:$rS, GPRC:i32:$rB)
              0, // EndSwitchType
/*9591*/    /*Scope*/ 13, /*->9605*/
/*9592*/      OPC_CheckChild1Type, MVT::v16i8,
/*9594*/      OPC_CheckType, MVT::v16i8,
/*9596*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSRB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (srl:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB) - Complexity = 3
              // Dst: (VSRB:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*9605*/    /*Scope*/ 13, /*->9619*/
/*9606*/      OPC_CheckChild1Type, MVT::v8i16,
/*9608*/      OPC_CheckType, MVT::v8i16,
/*9610*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSRH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (srl:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB) - Complexity = 3
              // Dst: (VSRH:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*9619*/    /*Scope*/ 13, /*->9633*/
/*9620*/      OPC_CheckChild1Type, MVT::v4i32,
/*9622*/      OPC_CheckType, MVT::v4i32,
/*9624*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSRW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (srl:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 3
              // Dst: (VSRW:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*9633*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 92,  TARGET_VAL(ISD::ROTL),// ->9729
/*9637*/    OPC_RecordChild0, // #0 = $in
/*9638*/    OPC_RecordChild1, // #1 = $imm
/*9639*/    OPC_Scope, 48, /*->9689*/ // 2 children in Scope
/*9641*/      OPC_MoveChild, 1,
/*9643*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*9646*/      OPC_CheckType, MVT::i32,
/*9648*/      OPC_MoveParent,
/*9649*/      OPC_SwitchType /*2 cases */, 19,  MVT::i32,// ->9671
/*9652*/        OPC_EmitConvertToTarget, 1,
/*9654*/        OPC_EmitInteger, MVT::i32, 0, 
/*9657*/        OPC_EmitInteger, MVT::i32, 31, 
/*9660*/        OPC_MorphNodeTo, TARGET_VAL(PPC::RLWINM), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 2, 3, 4, 
                // Src: (rotl:i32 GPRC:i32:$in, (imm:i32):$imm) - Complexity = 6
                // Dst: (RLWINM:i32 GPRC:i32:$in, (imm:i32):$imm, 0:i32, 31:i32)
              /*SwitchType*/ 15,  MVT::i64,// ->9688
/*9673*/        OPC_EmitConvertToTarget, 1,
/*9675*/        OPC_EmitInteger, MVT::i32, 0, 
/*9678*/        OPC_MorphNodeTo, TARGET_VAL(PPC::RLDICL), 0,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 2, 3, 
                // Src: (rotl:i64 G8RC:i64:$in, (imm:i32):$imm) - Complexity = 6
                // Dst: (RLDICL:i64 G8RC:i64:$in, (imm:i32):$imm, 0:i32)
              0, // EndSwitchType
/*9689*/    /*Scope*/ 38, /*->9728*/
/*9690*/      OPC_CheckChild1Type, MVT::i32,
/*9692*/      OPC_SwitchType /*2 cases */, 17,  MVT::i32,// ->9712
/*9695*/        OPC_EmitInteger, MVT::i32, 0, 
/*9698*/        OPC_EmitInteger, MVT::i32, 31, 
/*9701*/        OPC_MorphNodeTo, TARGET_VAL(PPC::RLWNM), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 1, 2, 3, 
                // Src: (rotl:i32 GPRC:i32:$in, GPRC:i32:$sh) - Complexity = 3
                // Dst: (RLWNM:i32 GPRC:i32:$in, GPRC:i32:$sh, 0:i32, 31:i32)
              /*SwitchType*/ 13,  MVT::i64,// ->9727
/*9714*/        OPC_EmitInteger, MVT::i32, 0, 
/*9717*/        OPC_MorphNodeTo, TARGET_VAL(PPC::RLDCL), 0,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 1, 2, 
                // Src: (rotl:i64 G8RC:i64:$in, GPRC:i32:$sh) - Complexity = 3
                // Dst: (RLDCL:i64 G8RC:i64:$in, GPRC:i32:$sh, 0:i32)
              0, // EndSwitchType
/*9728*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 54,  TARGET_VAL(PPCISD::CALL_NOP_SVR4),// ->9786
/*9732*/    OPC_RecordNode,   // #0 = 'PPCcall_nop_SVR4' chained node
/*9733*/    OPC_CaptureGlueInput,
/*9734*/    OPC_RecordChild1, // #1 = $func
/*9735*/    OPC_MoveChild, 1,
/*9737*/    OPC_SwitchOpcode /*3 cases */, 14,  TARGET_VAL(ISD::Constant),// ->9755
/*9741*/      OPC_CheckType, MVT::i64,
/*9743*/      OPC_MoveParent,
/*9744*/      OPC_EmitMergeInputChains1_0,
/*9745*/      OPC_EmitConvertToTarget, 1,
/*9747*/      OPC_MorphNodeTo, TARGET_VAL(PPC::BLA8_NOP_ELF), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2, 
              // Src: (PPCcall_nop_SVR4 (imm:i64):$func) - Complexity = 6
              // Dst: (BLA8_NOP_ELF:i64 (imm:i64):$func)
            /*SwitchOpcode*/ 12,  TARGET_VAL(ISD::TargetGlobalAddress),// ->9770
/*9758*/      OPC_CheckType, MVT::i64,
/*9760*/      OPC_MoveParent,
/*9761*/      OPC_EmitMergeInputChains1_0,
/*9762*/      OPC_MorphNodeTo, TARGET_VAL(PPC::BL8_NOP_ELF), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 1, 
              // Src: (PPCcall_nop_SVR4 (tglobaladdr:i64):$dst) - Complexity = 6
              // Dst: (BL8_NOP_ELF:i64 (tglobaladdr:i64):$dst)
            /*SwitchOpcode*/ 12,  TARGET_VAL(ISD::TargetExternalSymbol),// ->9785
/*9773*/      OPC_CheckType, MVT::i64,
/*9775*/      OPC_MoveParent,
/*9776*/      OPC_EmitMergeInputChains1_0,
/*9777*/      OPC_MorphNodeTo, TARGET_VAL(PPC::BL8_NOP_ELF), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 1, 
              // Src: (PPCcall_nop_SVR4 (texternalsym:i64):$dst) - Complexity = 6
              // Dst: (BL8_NOP_ELF:i64 (texternalsym:i64):$dst)
            0, // EndSwitchOpcode
          /*SwitchOpcode*/ 53,  TARGET_VAL(PPCISD::TOC_ENTRY),// ->9842
/*9789*/    OPC_RecordChild0, // #0 = $disp
/*9790*/    OPC_MoveChild, 0,
/*9792*/    OPC_SwitchOpcode /*3 cases */, 13,  TARGET_VAL(ISD::TargetGlobalAddress),// ->9809
/*9796*/      OPC_MoveParent,
/*9797*/      OPC_RecordChild1, // #1 = $reg
/*9798*/      OPC_CheckType, MVT::i64,
/*9800*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LDtoc), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (PPCtoc_entry:i64 (tglobaladdr:i64):$disp, G8RC:i64:$reg) - Complexity = 6
              // Dst: (LDtoc:i64 (tglobaladdr:i64):$disp, G8RC:i64:$reg)
            /*SwitchOpcode*/ 13,  TARGET_VAL(ISD::TargetJumpTable),// ->9825
/*9812*/      OPC_MoveParent,
/*9813*/      OPC_RecordChild1, // #1 = $reg
/*9814*/      OPC_CheckType, MVT::i64,
/*9816*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LDtocJTI), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (PPCtoc_entry:i64 (tjumptable:i64):$disp, G8RC:i64:$reg) - Complexity = 6
              // Dst: (LDtocJTI:i64 (tjumptable:i64):$disp, G8RC:i64:$reg)
            /*SwitchOpcode*/ 13,  TARGET_VAL(ISD::TargetConstantPool),// ->9841
/*9828*/      OPC_MoveParent,
/*9829*/      OPC_RecordChild1, // #1 = $reg
/*9830*/      OPC_CheckType, MVT::i64,
/*9832*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LDtocCPT), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (PPCtoc_entry:i64 (tconstpool:i64):$disp, G8RC:i64:$reg) - Complexity = 6
              // Dst: (LDtocCPT:i64 (tconstpool:i64):$disp, G8RC:i64:$reg)
            0, // EndSwitchOpcode
          /*SwitchOpcode*/ 97,  TARGET_VAL(ISD::Constant),// ->9942
/*9845*/    OPC_RecordNode,   // #0 = $imm
/*9846*/    OPC_SwitchType /*2 cases */, 59,  MVT::i32,// ->9908
/*9849*/      OPC_Scope, 12, /*->9863*/ // 3 children in Scope
/*9851*/        OPC_CheckPredicate, 0, // Predicate_immSExt16
/*9853*/        OPC_EmitConvertToTarget, 0,
/*9855*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LI), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (imm:i32)<<P:Predicate_immSExt16>>:$imm - Complexity = 4
                // Dst: (LI:i32 (imm:i32):$imm)
/*9863*/      /*Scope*/ 15, /*->9879*/
/*9864*/        OPC_CheckPredicate, 1, // Predicate_imm16ShiftedSExt
/*9866*/        OPC_EmitConvertToTarget, 0,
/*9868*/        OPC_EmitNodeXForm, 0, 1, // HI16
/*9871*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LIS), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
                // Src: (imm:i32)<<P:Predicate_imm16ShiftedSExt>><<X:HI16>>:$imm - Complexity = 4
                // Dst: (LIS:i32 (HI16:i32 (imm:i32):$imm))
/*9879*/      /*Scope*/ 27, /*->9907*/
/*9880*/        OPC_EmitConvertToTarget, 0,
/*9882*/        OPC_EmitNodeXForm, 0, 1, // HI16
/*9885*/        OPC_EmitNode, TARGET_VAL(PPC::LIS), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2,  // Results = #3
/*9893*/        OPC_EmitConvertToTarget, 0,
/*9895*/        OPC_EmitNodeXForm, 1, 4, // LO16
/*9898*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ORI), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 3, 5, 
                // Src: (imm:i32):$imm - Complexity = 3
                // Dst: (ORI:i32 (LIS:i32 (HI16:i32 (imm:i32):$imm)), (LO16:i32 (imm:i32):$imm))
/*9907*/      0, /*End of Scope*/
            /*SwitchType*/ 31,  MVT::i64,// ->9941
/*9910*/      OPC_Scope, 12, /*->9924*/ // 2 children in Scope
/*9912*/        OPC_CheckPredicate, 0, // Predicate_immSExt16
/*9914*/        OPC_EmitConvertToTarget, 0,
/*9916*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LI8), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 1, 
                // Src: (imm:i64)<<P:Predicate_immSExt16>>:$imm - Complexity = 4
                // Dst: (LI8:i64 (imm:i64):$imm)
/*9924*/      /*Scope*/ 15, /*->9940*/
/*9925*/        OPC_CheckPredicate, 1, // Predicate_imm16ShiftedSExt
/*9927*/        OPC_EmitConvertToTarget, 0,
/*9929*/        OPC_EmitNodeXForm, 0, 1, // HI16
/*9932*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LIS8), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2, 
                // Src: (imm:i64)<<P:Predicate_imm16ShiftedSExt>><<X:HI16>>:$imm - Complexity = 4
                // Dst: (LIS8:i64 (HI16:i64 (imm:i64):$imm))
/*9940*/      0, /*End of Scope*/
            0, // EndSwitchType
          /*SwitchOpcode*/ 28,  TARGET_VAL(PPCISD::SHL),// ->9973
/*9945*/    OPC_RecordChild0, // #0 = $rS
/*9946*/    OPC_RecordChild1, // #1 = $rB
/*9947*/    OPC_CheckChild1Type, MVT::i32,
/*9949*/    OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->9961
/*9952*/      OPC_MorphNodeTo, TARGET_VAL(PPC::SLW), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCshl:i32 GPRC:i32:$rS, GPRC:i32:$rB) - Complexity = 3
              // Dst: (SLW:i32 GPRC:i32:$rS, GPRC:i32:$rB)
            /*SwitchType*/ 9,  MVT::i64,// ->9972
/*9963*/      OPC_MorphNodeTo, TARGET_VAL(PPC::SLD), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (PPCshl:i64 G8RC:i64:$rS, GPRC:i32:$rB) - Complexity = 3
              // Dst: (SLD:i64 G8RC:i64:$rS, GPRC:i32:$rB)
            0, // EndSwitchType
          /*SwitchOpcode*/ 28,  TARGET_VAL(PPCISD::SRL),// ->10004
/*9976*/    OPC_RecordChild0, // #0 = $rS
/*9977*/    OPC_RecordChild1, // #1 = $rB
/*9978*/    OPC_CheckChild1Type, MVT::i32,
/*9980*/    OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->9992
/*9983*/      OPC_MorphNodeTo, TARGET_VAL(PPC::SRW), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCsrl:i32 GPRC:i32:$rS, GPRC:i32:$rB) - Complexity = 3
              // Dst: (SRW:i32 GPRC:i32:$rS, GPRC:i32:$rB)
            /*SwitchType*/ 9,  MVT::i64,// ->10003
/*9994*/      OPC_MorphNodeTo, TARGET_VAL(PPC::SRD), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (PPCsrl:i64 G8RC:i64:$rS, GPRC:i32:$rB) - Complexity = 3
              // Dst: (SRD:i64 G8RC:i64:$rS, GPRC:i32:$rB)
            0, // EndSwitchType
          /*SwitchOpcode*/ 30,  TARGET_VAL(PPCISD::SRA),// ->10037
/*10007*/   OPC_RecordChild0, // #0 = $rS
/*10008*/   OPC_RecordChild1, // #1 = $rB
/*10009*/   OPC_CheckChild1Type, MVT::i32,
/*10011*/   OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->10024
/*10014*/     OPC_MorphNodeTo, TARGET_VAL(PPC::SRAW), 0,
                  2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCsra:i32 GPRC:i32:$rS, GPRC:i32:$rB) - Complexity = 3
              // Dst: (SRAW:i32:i32 GPRC:i32:$rS, GPRC:i32:$rB)
            /*SwitchType*/ 10,  MVT::i64,// ->10036
/*10026*/     OPC_MorphNodeTo, TARGET_VAL(PPC::SRAD), 0,
                  2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCsra:i64 G8RC:i64:$rS, GPRC:i32:$rB) - Complexity = 3
              // Dst: (SRAD:i64:i32 G8RC:i64:$rS, GPRC:i32:$rB)
            0, // EndSwitchType
          /*SwitchOpcode*/ 23,  TARGET_VAL(ISD::CTLZ),// ->10063
/*10040*/   OPC_RecordChild0, // #0 = $rS
/*10041*/   OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->10052
/*10044*/     OPC_MorphNodeTo, TARGET_VAL(PPC::CNTLZW), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (ctlz:i32 GPRC:i32:$rS) - Complexity = 3
              // Dst: (CNTLZW:i32 GPRC:i32:$rS)
            /*SwitchType*/ 8,  MVT::i64,// ->10062
/*10054*/     OPC_MorphNodeTo, TARGET_VAL(PPC::CNTLZD), 0,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
              // Src: (ctlz:i64 G8RC:i64:$rS) - Complexity = 3
              // Dst: (CNTLZD:i64 G8RC:i64:$rS)
            0, // EndSwitchType
          /*SwitchOpcode*/ 69,  TARGET_VAL(ISD::SIGN_EXTEND_INREG),// ->10135
/*10066*/   OPC_RecordChild0, // #0 = $rS
/*10067*/   OPC_MoveChild, 1,
/*10069*/   OPC_Scope, 25, /*->10096*/ // 3 children in Scope
/*10071*/     OPC_CheckValueType, MVT::i8,
/*10073*/     OPC_MoveParent,
/*10074*/     OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->10085
/*10077*/       OPC_MorphNodeTo, TARGET_VAL(PPC::EXTSB), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (sext_inreg:i32 GPRC:i32:$rS, i8:Other) - Complexity = 3
                // Dst: (EXTSB:i32 GPRC:i32:$rS)
              /*SwitchType*/ 8,  MVT::i64,// ->10095
/*10087*/       OPC_MorphNodeTo, TARGET_VAL(PPC::EXTSB8), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (sext_inreg:i64 G8RC:i64:$rS, i8:Other) - Complexity = 3
                // Dst: (EXTSB8:i64 G8RC:i64:$rS)
              0, // EndSwitchType
/*10096*/   /*Scope*/ 25, /*->10122*/
/*10097*/     OPC_CheckValueType, MVT::i16,
/*10099*/     OPC_MoveParent,
/*10100*/     OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->10111
/*10103*/       OPC_MorphNodeTo, TARGET_VAL(PPC::EXTSH), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (sext_inreg:i32 GPRC:i32:$rS, i16:Other) - Complexity = 3
                // Dst: (EXTSH:i32 GPRC:i32:$rS)
              /*SwitchType*/ 8,  MVT::i64,// ->10121
/*10113*/       OPC_MorphNodeTo, TARGET_VAL(PPC::EXTSH8), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (sext_inreg:i64 G8RC:i64:$rS, i16:Other) - Complexity = 3
                // Dst: (EXTSH8:i64 G8RC:i64:$rS)
              0, // EndSwitchType
/*10122*/   /*Scope*/ 11, /*->10134*/
/*10123*/     OPC_CheckValueType, MVT::i32,
/*10125*/     OPC_MoveParent,
/*10126*/     OPC_MorphNodeTo, TARGET_VAL(PPC::EXTSW), 0,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
              // Src: (sext_inreg:i64 G8RC:i64:$rS, i32:Other) - Complexity = 3
              // Dst: (EXTSW:i64 G8RC:i64:$rS)
/*10134*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 26,  TARGET_VAL(ISD::SDIV),// ->10164
/*10138*/   OPC_RecordChild0, // #0 = $rA
/*10139*/   OPC_RecordChild1, // #1 = $rB
/*10140*/   OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->10152
/*10143*/     OPC_MorphNodeTo, TARGET_VAL(PPC::DIVW), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (sdiv:i32 GPRC:i32:$rA, GPRC:i32:$rB) - Complexity = 3
              // Dst: (DIVW:i32 GPRC:i32:$rA, GPRC:i32:$rB)
            /*SwitchType*/ 9,  MVT::i64,// ->10163
/*10154*/     OPC_MorphNodeTo, TARGET_VAL(PPC::DIVD), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (sdiv:i64 G8RC:i64:$rA, G8RC:i64:$rB) - Complexity = 3
              // Dst: (DIVD:i64 G8RC:i64:$rA, G8RC:i64:$rB)
            0, // EndSwitchType
          /*SwitchOpcode*/ 26,  TARGET_VAL(ISD::UDIV),// ->10193
/*10167*/   OPC_RecordChild0, // #0 = $rA
/*10168*/   OPC_RecordChild1, // #1 = $rB
/*10169*/   OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->10181
/*10172*/     OPC_MorphNodeTo, TARGET_VAL(PPC::DIVWU), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (udiv:i32 GPRC:i32:$rA, GPRC:i32:$rB) - Complexity = 3
              // Dst: (DIVWU:i32 GPRC:i32:$rA, GPRC:i32:$rB)
            /*SwitchType*/ 9,  MVT::i64,// ->10192
/*10183*/     OPC_MorphNodeTo, TARGET_VAL(PPC::DIVDU), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (udiv:i64 G8RC:i64:$rA, G8RC:i64:$rB) - Complexity = 3
              // Dst: (DIVDU:i64 G8RC:i64:$rA, G8RC:i64:$rB)
            0, // EndSwitchType
          /*SwitchOpcode*/ 26,  TARGET_VAL(ISD::MULHS),// ->10222
/*10196*/   OPC_RecordChild0, // #0 = $rA
/*10197*/   OPC_RecordChild1, // #1 = $rB
/*10198*/   OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->10210
/*10201*/     OPC_MorphNodeTo, TARGET_VAL(PPC::MULHW), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (mulhs:i32 GPRC:i32:$rA, GPRC:i32:$rB) - Complexity = 3
              // Dst: (MULHW:i32 GPRC:i32:$rA, GPRC:i32:$rB)
            /*SwitchType*/ 9,  MVT::i64,// ->10221
/*10212*/     OPC_MorphNodeTo, TARGET_VAL(PPC::MULHD), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (mulhs:i64 G8RC:i64:$rA, G8RC:i64:$rB) - Complexity = 3
              // Dst: (MULHD:i64 G8RC:i64:$rA, G8RC:i64:$rB)
            0, // EndSwitchType
          /*SwitchOpcode*/ 26,  TARGET_VAL(ISD::MULHU),// ->10251
/*10225*/   OPC_RecordChild0, // #0 = $rA
/*10226*/   OPC_RecordChild1, // #1 = $rB
/*10227*/   OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->10239
/*10230*/     OPC_MorphNodeTo, TARGET_VAL(PPC::MULHWU), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (mulhu:i32 GPRC:i32:$rA, GPRC:i32:$rB) - Complexity = 3
              // Dst: (MULHWU:i32 GPRC:i32:$rA, GPRC:i32:$rB)
            /*SwitchType*/ 9,  MVT::i64,// ->10250
/*10241*/     OPC_MorphNodeTo, TARGET_VAL(PPC::MULHDU), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (mulhu:i64 G8RC:i64:$rA, G8RC:i64:$rB) - Complexity = 3
              // Dst: (MULHDU:i64 G8RC:i64:$rA, G8RC:i64:$rB)
            0, // EndSwitchType
          /*SwitchOpcode*/ 11,  TARGET_VAL(ISD::READCYCLECOUNTER),// ->10265
/*10254*/   OPC_RecordNode,   // #0 = 'readcyclecounter' chained node
/*10255*/   OPC_CheckType, MVT::i64,
/*10257*/   OPC_EmitMergeInputChains1_0,
/*10258*/   OPC_MorphNodeTo, TARGET_VAL(PPC::MFTB8), 0|OPFL_Chain,
                1/*#VTs*/, MVT::i64, 0/*#Ops*/, 
            // Src: (readcyclecounter:i64) - Complexity = 3
            // Dst: (MFTB8:i64)
          /*SwitchOpcode*/ 11,  TARGET_VAL(PPCISD::EXTSW_32),// ->10279
/*10268*/   OPC_RecordChild0, // #0 = $rS
/*10269*/   OPC_CheckType, MVT::i32,
/*10271*/   OPC_MorphNodeTo, TARGET_VAL(PPC::EXTSW_32), 0,
                1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
            // Src: (PPCextsw_32:i32 GPRC:i32:$rS) - Complexity = 3
            // Dst: (EXTSW_32:i32 GPRC:i32:$rS)
          /*SwitchOpcode*/ 13,  TARGET_VAL(ISD::SIGN_EXTEND),// ->10295
/*10282*/   OPC_RecordChild0, // #0 = $rS
/*10283*/   OPC_CheckChild0Type, MVT::i32,
/*10285*/   OPC_CheckType, MVT::i64,
/*10287*/   OPC_MorphNodeTo, TARGET_VAL(PPC::EXTSW_32_64), 0,
                1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
            // Src: (sext:i64 GPRC:i32:$rS) - Complexity = 3
            // Dst: (EXTSW_32_64:i64 GPRC:i32:$rS)
          /*SwitchOpcode*/ 15,  TARGET_VAL(ISD::TRUNCATE),// ->10313
/*10298*/   OPC_RecordChild0, // #0 = $in
/*10299*/   OPC_CheckType, MVT::i32,
/*10301*/   OPC_EmitInteger, MVT::i32, PPC::sub_32,
/*10304*/   OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
            // Src: (trunc:i32 G8RC:i64:$in) - Complexity = 3
            // Dst: (EXTRACT_SUBREG:i32 G8RC:i64:$in, sub_32:i32)
          /*SwitchOpcode*/ 25,  TARGET_VAL(ISD::ANY_EXTEND),// ->10341
/*10316*/   OPC_RecordChild0, // #0 = $in
/*10317*/   OPC_CheckChild0Type, MVT::i32,
/*10319*/   OPC_CheckType, MVT::i64,
/*10321*/   OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                1/*#VTs*/, MVT::i64, 0/*#Ops*/,  // Results = #1
/*10328*/   OPC_EmitInteger, MVT::i32, PPC::sub_32,
/*10331*/   OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 0, 2, 
            // Src: (anyext:i64 GPRC:i32:$in) - Complexity = 3
            // Dst: (INSERT_SUBREG:i64 (IMPLICIT_DEF:i64), GPRC:i32:$in, sub_32:i32)
          /*SwitchOpcode*/ 41,  TARGET_VAL(ISD::ZERO_EXTEND),// ->10385
/*10344*/   OPC_RecordChild0, // #0 = $in
/*10345*/   OPC_CheckChild0Type, MVT::i32,
/*10347*/   OPC_CheckType, MVT::i64,
/*10349*/   OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                1/*#VTs*/, MVT::i64, 0/*#Ops*/,  // Results = #1
/*10356*/   OPC_EmitInteger, MVT::i32, PPC::sub_32,
/*10359*/   OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 0, 2,  // Results = #3
/*10369*/   OPC_EmitInteger, MVT::i32, 0, 
/*10372*/   OPC_EmitInteger, MVT::i32, 32, 
/*10375*/   OPC_MorphNodeTo, TARGET_VAL(PPC::RLDICL), 0,
                1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 4, 5, 
            // Src: (zext:i64 GPRC:i32:$in) - Complexity = 3
            // Dst: (RLDICL:i64 (INSERT_SUBREG:i64 (IMPLICIT_DEF:i64), GPRC:i32:$in, sub_32:i32), 0:i32, 32:i32)
          /*SwitchOpcode*/ 24,  TARGET_VAL(PPCISD::MTFSF),// ->10412
/*10388*/   OPC_CaptureGlueInput,
/*10389*/   OPC_RecordChild0, // #0 = $FM
/*10390*/   OPC_MoveChild, 0,
/*10392*/   OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*10395*/   OPC_CheckType, MVT::i32,
/*10397*/   OPC_MoveParent,
/*10398*/   OPC_RecordChild1, // #1 = $rT
/*10399*/   OPC_RecordChild2, // #2 = $FRB
/*10400*/   OPC_EmitConvertToTarget, 0,
/*10402*/   OPC_MorphNodeTo, TARGET_VAL(PPC::MTFSF), 0|OPFL_GlueInput,
                1/*#VTs*/, MVT::f64, 3/*#Ops*/, 3, 1, 2, 
            // Src: (PPCmtfsf:f64 (imm:i32):$FM, F8RC:f64:$rT, F8RC:f64:$FRB) - Complexity = 6
            // Dst: (MTFSF:f64 (imm:i32):$FM, F8RC:f64:$rT, F8RC:f64:$FRB)
          /*SwitchOpcode*/ 78,  TARGET_VAL(ISD::FMA),// ->10493
/*10415*/   OPC_RecordChild0, // #0 = $FRA
/*10416*/   OPC_RecordChild1, // #1 = $FRC
/*10417*/   OPC_Scope, 33, /*->10452*/ // 2 children in Scope
/*10419*/     OPC_MoveChild, 2,
/*10421*/     OPC_CheckOpcode, TARGET_VAL(ISD::FNEG),
/*10424*/     OPC_RecordChild0, // #2 = $FRB
/*10425*/     OPC_MoveParent,
/*10426*/     OPC_SwitchType /*2 cases */, 10,  MVT::f64,// ->10439
/*10429*/       OPC_MorphNodeTo, TARGET_VAL(PPC::FMSUB), 0,
                    1/*#VTs*/, MVT::f64, 3/*#Ops*/, 0, 1, 2, 
                // Src: (fma:f64 F8RC:f64:$FRA, F8RC:f64:$FRC, (fneg:f64 F8RC:f64:$FRB)) - Complexity = 6
                // Dst: (FMSUB:f64 F8RC:f64:$FRA, F8RC:f64:$FRC, F8RC:f64:$FRB)
              /*SwitchType*/ 10,  MVT::f32,// ->10451
/*10441*/       OPC_MorphNodeTo, TARGET_VAL(PPC::FMSUBS), 0,
                    1/*#VTs*/, MVT::f32, 3/*#Ops*/, 0, 1, 2, 
                // Src: (fma:f32 F4RC:f32:$FRA, F4RC:f32:$FRC, (fneg:f32 F4RC:f32:$FRB)) - Complexity = 6
                // Dst: (FMSUBS:f32 F4RC:f32:$FRA, F4RC:f32:$FRC, F4RC:f32:$FRB)
              0, // EndSwitchType
/*10452*/   /*Scope*/ 39, /*->10492*/
/*10453*/     OPC_RecordChild2, // #2 = $FRB
/*10454*/     OPC_SwitchType /*3 cases */, 10,  MVT::f64,// ->10467
/*10457*/       OPC_MorphNodeTo, TARGET_VAL(PPC::FMADD), 0,
                    1/*#VTs*/, MVT::f64, 3/*#Ops*/, 0, 1, 2, 
                // Src: (fma:f64 F8RC:f64:$FRA, F8RC:f64:$FRC, F8RC:f64:$FRB) - Complexity = 3
                // Dst: (FMADD:f64 F8RC:f64:$FRA, F8RC:f64:$FRC, F8RC:f64:$FRB)
              /*SwitchType*/ 10,  MVT::f32,// ->10479
/*10469*/       OPC_MorphNodeTo, TARGET_VAL(PPC::FMADDS), 0,
                    1/*#VTs*/, MVT::f32, 3/*#Ops*/, 0, 1, 2, 
                // Src: (fma:f32 F4RC:f32:$FRA, F4RC:f32:$FRC, F4RC:f32:$FRB) - Complexity = 3
                // Dst: (FMADDS:f32 F4RC:f32:$FRA, F4RC:f32:$FRC, F4RC:f32:$FRB)
              /*SwitchType*/ 10,  MVT::v4f32,// ->10491
/*10481*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VMADDFP), 0,
                    1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 0, 1, 2, 
                // Src: (fma:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vC, VRRC:v4f32:$vB) - Complexity = 3
                // Dst: (VMADDFP:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vC, VRRC:v4f32:$vB)
              0, // EndSwitchType
/*10492*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 11,  TARGET_VAL(PPCISD::FCTIWZ),// ->10507
/*10496*/   OPC_RecordChild0, // #0 = $frB
/*10497*/   OPC_CheckType, MVT::f64,
/*10499*/   OPC_MorphNodeTo, TARGET_VAL(PPC::FCTIWZ), 0,
                1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
            // Src: (PPCfctiwz:f64 F8RC:f64:$frB) - Complexity = 3
            // Dst: (FCTIWZ:f64 F8RC:f64:$frB)
          /*SwitchOpcode*/ 9,  TARGET_VAL(ISD::FP_ROUND),// ->10519
/*10510*/   OPC_RecordChild0, // #0 = $frB
/*10511*/   OPC_MorphNodeTo, TARGET_VAL(PPC::FRSP), 0,
                1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
            // Src: (fround:f32 F8RC:f64:$frB) - Complexity = 3
            // Dst: (FRSP:f32 F8RC:f64:$frB)
          /*SwitchOpcode*/ 23,  TARGET_VAL(ISD::FSQRT),// ->10545
/*10522*/   OPC_RecordChild0, // #0 = $frB
/*10523*/   OPC_SwitchType /*2 cases */, 8,  MVT::f64,// ->10534
/*10526*/     OPC_MorphNodeTo, TARGET_VAL(PPC::FSQRT), 0,
                  1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
              // Src: (fsqrt:f64 F8RC:f64:$frB) - Complexity = 3
              // Dst: (FSQRT:f64 F8RC:f64:$frB)
            /*SwitchType*/ 8,  MVT::f32,// ->10544
/*10536*/     OPC_MorphNodeTo, TARGET_VAL(PPC::FSQRTS), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (fsqrt:f32 F4RC:f32:$frB) - Complexity = 3
              // Dst: (FSQRTS:f32 F4RC:f32:$frB)
            0, // EndSwitchType
          /*SwitchOpcode*/ 23,  TARGET_VAL(ISD::FABS),// ->10571
/*10548*/   OPC_RecordChild0, // #0 = $frB
/*10549*/   OPC_SwitchType /*2 cases */, 8,  MVT::f32,// ->10560
/*10552*/     OPC_MorphNodeTo, TARGET_VAL(PPC::FABSS), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (fabs:f32 F4RC:f32:$frB) - Complexity = 3
              // Dst: (FABSS:f32 F4RC:f32:$frB)
            /*SwitchType*/ 8,  MVT::f64,// ->10570
/*10562*/     OPC_MorphNodeTo, TARGET_VAL(PPC::FABSD), 0,
                  1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
              // Src: (fabs:f64 F8RC:f64:$frB) - Complexity = 3
              // Dst: (FABSD:f64 F8RC:f64:$frB)
            0, // EndSwitchType
          /*SwitchOpcode*/ 7,  TARGET_VAL(PPCISD::MFFS),// ->10581
/*10574*/   OPC_MorphNodeTo, TARGET_VAL(PPC::MFFS), 0|OPFL_GlueOutput,
                1/*#VTs*/, MVT::f64, 0/*#Ops*/, 
            // Src: (PPCmffs:f64) - Complexity = 3
            // Dst: (MFFS:f64)
          /*SwitchOpcode*/ 14,  TARGET_VAL(PPCISD::FADDRTZ),// ->10598
/*10584*/   OPC_CaptureGlueInput,
/*10585*/   OPC_RecordChild0, // #0 = $FRA
/*10586*/   OPC_RecordChild1, // #1 = $FRB
/*10587*/   OPC_CheckType, MVT::f64,
/*10589*/   OPC_MorphNodeTo, TARGET_VAL(PPC::FADDrtz), 0|OPFL_GlueInput|OPFL_GlueOutput,
                1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
            // Src: (PPCfaddrtz:f64 F8RC:f64:$FRA, F8RC:f64:$FRB) - Complexity = 3
            // Dst: (FADDrtz:f64 F8RC:f64:$FRA, F8RC:f64:$FRB)
          /*SwitchOpcode*/ 29,  TARGET_VAL(PPCISD::FSEL),// ->10630
/*10601*/   OPC_RecordChild0, // #0 = $FRA
/*10602*/   OPC_RecordChild1, // #1 = $FRC
/*10603*/   OPC_RecordChild2, // #2 = $FRB
/*10604*/   OPC_SwitchType /*2 cases */, 10,  MVT::f64,// ->10617
/*10607*/     OPC_MorphNodeTo, TARGET_VAL(PPC::FSELD), 0,
                  1/*#VTs*/, MVT::f64, 3/*#Ops*/, 0, 1, 2, 
              // Src: (PPCfsel:f64 F8RC:f64:$FRA, F8RC:f64:$FRC, F8RC:f64:$FRB) - Complexity = 3
              // Dst: (FSELD:f64 F8RC:f64:$FRA, F8RC:f64:$FRC, F8RC:f64:$FRB)
            /*SwitchType*/ 10,  MVT::f32,// ->10629
/*10619*/     OPC_MorphNodeTo, TARGET_VAL(PPC::FSELS), 0,
                  1/*#VTs*/, MVT::f32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (PPCfsel:f32 F8RC:f64:$FRA, F4RC:f32:$FRC, F4RC:f32:$FRB) - Complexity = 3
              // Dst: (FSELS:f32 F8RC:f64:$FRA, F4RC:f32:$FRC, F4RC:f32:$FRB)
            0, // EndSwitchType
          /*SwitchOpcode*/ 37,  TARGET_VAL(ISD::FADD),// ->10670
/*10633*/   OPC_RecordChild0, // #0 = $FRA
/*10634*/   OPC_RecordChild1, // #1 = $FRB
/*10635*/   OPC_SwitchType /*3 cases */, 9,  MVT::f64,// ->10647
/*10638*/     OPC_MorphNodeTo, TARGET_VAL(PPC::FADD), 0,
                  1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
              // Src: (fadd:f64 F8RC:f64:$FRA, F8RC:f64:$FRB) - Complexity = 3
              // Dst: (FADD:f64 F8RC:f64:$FRA, F8RC:f64:$FRB)
            /*SwitchType*/ 9,  MVT::f32,// ->10658
/*10649*/     OPC_MorphNodeTo, TARGET_VAL(PPC::FADDS), 0,
                  1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
              // Src: (fadd:f32 F4RC:f32:$FRA, F4RC:f32:$FRB) - Complexity = 3
              // Dst: (FADDS:f32 F4RC:f32:$FRA, F4RC:f32:$FRB)
            /*SwitchType*/ 9,  MVT::v4f32,// ->10669
/*10660*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VADDFP), 0,
                  1/*#VTs*/, MVT::v4f32, 2/*#Ops*/, 0, 1, 
              // Src: (fadd:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vB) - Complexity = 3
              // Dst: (VADDFP:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vB)
            0, // EndSwitchType
          /*SwitchOpcode*/ 26,  TARGET_VAL(ISD::FDIV),// ->10699
/*10673*/   OPC_RecordChild0, // #0 = $FRA
/*10674*/   OPC_RecordChild1, // #1 = $FRB
/*10675*/   OPC_SwitchType /*2 cases */, 9,  MVT::f64,// ->10687
/*10678*/     OPC_MorphNodeTo, TARGET_VAL(PPC::FDIV), 0,
                  1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
              // Src: (fdiv:f64 F8RC:f64:$FRA, F8RC:f64:$FRB) - Complexity = 3
              // Dst: (FDIV:f64 F8RC:f64:$FRA, F8RC:f64:$FRB)
            /*SwitchType*/ 9,  MVT::f32,// ->10698
/*10689*/     OPC_MorphNodeTo, TARGET_VAL(PPC::FDIVS), 0,
                  1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
              // Src: (fdiv:f32 F4RC:f32:$FRA, F4RC:f32:$FRB) - Complexity = 3
              // Dst: (FDIVS:f32 F4RC:f32:$FRA, F4RC:f32:$FRB)
            0, // EndSwitchType
          /*SwitchOpcode*/ 45,  TARGET_VAL(ISD::FMUL),// ->10747
/*10702*/   OPC_RecordChild0, // #0 = $FRA
/*10703*/   OPC_RecordChild1, // #1 = $FRC
/*10704*/   OPC_SwitchType /*3 cases */, 9,  MVT::f64,// ->10716
/*10707*/     OPC_MorphNodeTo, TARGET_VAL(PPC::FMUL), 0,
                  1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
              // Src: (fmul:f64 F8RC:f64:$FRA, F8RC:f64:$FRC) - Complexity = 3
              // Dst: (FMUL:f64 F8RC:f64:$FRA, F8RC:f64:$FRC)
            /*SwitchType*/ 9,  MVT::f32,// ->10727
/*10718*/     OPC_MorphNodeTo, TARGET_VAL(PPC::FMULS), 0,
                  1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
              // Src: (fmul:f32 F4RC:f32:$FRA, F4RC:f32:$FRC) - Complexity = 3
              // Dst: (FMULS:f32 F4RC:f32:$FRA, F4RC:f32:$FRC)
            /*SwitchType*/ 17,  MVT::v4f32,// ->10746
/*10729*/     OPC_EmitNode, TARGET_VAL(PPC::V_SET0), 0,
                  1/*#VTs*/, MVT::v4i32, 0/*#Ops*/,  // Results = #2
/*10736*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VMADDFP), 0,
                  1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (fmul:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vB) - Complexity = 3
              // Dst: (VMADDFP:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vB, (V_SET0:v4i32))
            0, // EndSwitchType
          /*SwitchOpcode*/ 37,  TARGET_VAL(ISD::FSUB),// ->10787
/*10750*/   OPC_RecordChild0, // #0 = $FRA
/*10751*/   OPC_RecordChild1, // #1 = $FRB
/*10752*/   OPC_SwitchType /*3 cases */, 9,  MVT::f64,// ->10764
/*10755*/     OPC_MorphNodeTo, TARGET_VAL(PPC::FSUB), 0,
                  1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
              // Src: (fsub:f64 F8RC:f64:$FRA, F8RC:f64:$FRB) - Complexity = 3
              // Dst: (FSUB:f64 F8RC:f64:$FRA, F8RC:f64:$FRB)
            /*SwitchType*/ 9,  MVT::f32,// ->10775
/*10766*/     OPC_MorphNodeTo, TARGET_VAL(PPC::FSUBS), 0,
                  1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
              // Src: (fsub:f32 F4RC:f32:$FRA, F4RC:f32:$FRB) - Complexity = 3
              // Dst: (FSUBS:f32 F4RC:f32:$FRA, F4RC:f32:$FRB)
            /*SwitchType*/ 9,  MVT::v4f32,// ->10786
/*10777*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VSUBFP), 0,
                  1/*#VTs*/, MVT::v4f32, 2/*#Ops*/, 0, 1, 
              // Src: (fsub:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vB) - Complexity = 3
              // Dst: (VSUBFP:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vB)
            0, // EndSwitchType
          /*SwitchOpcode*/ 13,  TARGET_VAL(ISD::FP_EXTEND),// ->10803
/*10790*/   OPC_RecordChild0, // #0 = $src
/*10791*/   OPC_EmitInteger, MVT::i32, PPC::F8RCRegClassID,
/*10794*/   OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0,
                1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
            // Src: (fextend:f64 F4RC:f32:$src) - Complexity = 3
            // Dst: (COPY_TO_REGCLASS:f64 F4RC:f32:$src, F8RC:f64)
          /*SwitchOpcode*/ 11,  TARGET_VAL(PPCISD::FCFID),// ->10817
/*10806*/   OPC_RecordChild0, // #0 = $frB
/*10807*/   OPC_CheckType, MVT::f64,
/*10809*/   OPC_MorphNodeTo, TARGET_VAL(PPC::FCFID), 0,
                1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
            // Src: (PPCfcfid:f64 F8RC:f64:$frB) - Complexity = 3
            // Dst: (FCFID:f64 F8RC:f64:$frB)
          /*SwitchOpcode*/ 11,  TARGET_VAL(PPCISD::FCTIDZ),// ->10831
/*10820*/   OPC_RecordChild0, // #0 = $frB
/*10821*/   OPC_CheckType, MVT::f64,
/*10823*/   OPC_MorphNodeTo, TARGET_VAL(PPC::FCTIDZ), 0,
                1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
            // Src: (PPCfctidz:f64 F8RC:f64:$frB) - Complexity = 3
            // Dst: (FCTIDZ:f64 F8RC:f64:$frB)
          /*SwitchOpcode*/ 63,  TARGET_VAL(ISD::BUILD_VECTOR),// ->10897
/*10834*/   OPC_Scope, 48, /*->10884*/ // 2 children in Scope
/*10836*/     OPC_RecordNode, // #0 = $SIMM
/*10837*/     OPC_SwitchType /*3 cases */, 13,  MVT::v16i8,// ->10853
/*10840*/       OPC_CheckPredicate, 88, // Predicate_vecspltisb
/*10842*/       OPC_EmitNodeXForm, 14, 0, // VSPLTISB_get_imm
/*10845*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VSPLTISB), 0,
                    1/*#VTs*/, MVT::v16i8, 1/*#Ops*/, 1, 
                // Src: (build_vector:v16i8)<<P:Predicate_vecspltisb>><<X:VSPLTISB_get_imm>>:$SIMM - Complexity = 4
                // Dst: (VSPLTISB:v16i8 (VSPLTISB_get_imm:i32 (build_vector:v16i8):$SIMM))
              /*SwitchType*/ 13,  MVT::v8i16,// ->10868
/*10855*/       OPC_CheckPredicate, 89, // Predicate_vecspltish
/*10857*/       OPC_EmitNodeXForm, 15, 0, // VSPLTISH_get_imm
/*10860*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VSPLTISH), 0,
                    1/*#VTs*/, MVT::v8i16, 1/*#Ops*/, 1, 
                // Src: (build_vector:v8i16)<<P:Predicate_vecspltish>><<X:VSPLTISH_get_imm>>:$SIMM - Complexity = 4
                // Dst: (VSPLTISH:v8i16 (VSPLTISH_get_imm:i32 (build_vector:v8i16):$SIMM))
              /*SwitchType*/ 13,  MVT::v4i32,// ->10883
/*10870*/       OPC_CheckPredicate, 90, // Predicate_vecspltisw
/*10872*/       OPC_EmitNodeXForm, 16, 0, // VSPLTISW_get_imm
/*10875*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VSPLTISW), 0,
                    1/*#VTs*/, MVT::v4i32, 1/*#Ops*/, 1, 
                // Src: (build_vector:v4i32)<<P:Predicate_vecspltisw>><<X:VSPLTISW_get_imm>>:$SIMM - Complexity = 4
                // Dst: (VSPLTISW:v4i32 (VSPLTISW_get_imm:i32 (build_vector:v4i32):$SIMM))
              0, // EndSwitchType
/*10884*/   /*Scope*/ 11, /*->10896*/
/*10885*/     OPC_CheckPredicate, 91, // Predicate_immAllZerosV
/*10887*/     OPC_CheckType, MVT::v4i32,
/*10889*/     OPC_MorphNodeTo, TARGET_VAL(PPC::V_SET0), 0,
                  1/*#VTs*/, MVT::v4i32, 0/*#Ops*/, 
              // Src: (build_vector:v4i32)<<P:Predicate_immAllZerosV>> - Complexity = 4
              // Dst: (V_SET0:v4i32)
/*10896*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 83,  TARGET_VAL(ISD::BITCAST),// ->10983
/*10900*/   OPC_RecordChild0, // #0 = $src
/*10901*/   OPC_Scope, 19, /*->10922*/ // 4 children in Scope
/*10903*/     OPC_CheckChild0Type, MVT::v8i16,
/*10905*/     OPC_SwitchType /*3 cases */, 3,  MVT::v16i8,// ->10911
/*10908*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v16i8 VRRC:v8i16:$src) - Complexity = 3
                // Dst: VRRC:v16i8:$src
              /*SwitchType*/ 3,  MVT::v4i32,// ->10916
/*10913*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v4i32 VRRC:v8i16:$src) - Complexity = 3
                // Dst: VRRC:v4i32:$src
              /*SwitchType*/ 3,  MVT::v4f32,// ->10921
/*10918*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v4f32 VRRC:v8i16:$src) - Complexity = 3
                // Dst: VRRC:v4f32:$src
              0, // EndSwitchType
/*10922*/   /*Scope*/ 19, /*->10942*/
/*10923*/     OPC_CheckChild0Type, MVT::v4i32,
/*10925*/     OPC_SwitchType /*3 cases */, 3,  MVT::v16i8,// ->10931
/*10928*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v16i8 VRRC:v4i32:$src) - Complexity = 3
                // Dst: VRRC:v16i8:$src
              /*SwitchType*/ 3,  MVT::v8i16,// ->10936
/*10933*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v8i16 VRRC:v4i32:$src) - Complexity = 3
                // Dst: VRRC:v8i16:$src
              /*SwitchType*/ 3,  MVT::v4f32,// ->10941
/*10938*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v4f32 VRRC:v4i32:$src) - Complexity = 3
                // Dst: VRRC:v4f32:$src
              0, // EndSwitchType
/*10942*/   /*Scope*/ 19, /*->10962*/
/*10943*/     OPC_CheckChild0Type, MVT::v4f32,
/*10945*/     OPC_SwitchType /*3 cases */, 3,  MVT::v16i8,// ->10951
/*10948*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v16i8 VRRC:v4f32:$src) - Complexity = 3
                // Dst: VRRC:v16i8:$src
              /*SwitchType*/ 3,  MVT::v8i16,// ->10956
/*10953*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v8i16 VRRC:v4f32:$src) - Complexity = 3
                // Dst: VRRC:v8i16:$src
              /*SwitchType*/ 3,  MVT::v4i32,// ->10961
/*10958*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v4i32 VRRC:v4f32:$src) - Complexity = 3
                // Dst: VRRC:v4i32:$src
              0, // EndSwitchType
/*10962*/   /*Scope*/ 19, /*->10982*/
/*10963*/     OPC_CheckChild0Type, MVT::v16i8,
/*10965*/     OPC_SwitchType /*3 cases */, 3,  MVT::v8i16,// ->10971
/*10968*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v8i16 VRRC:v16i8:$src) - Complexity = 3
                // Dst: VRRC:v8i16:$src
              /*SwitchType*/ 3,  MVT::v4i32,// ->10976
/*10973*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v4i32 VRRC:v16i8:$src) - Complexity = 3
                // Dst: VRRC:v4i32:$src
              /*SwitchType*/ 3,  MVT::v4f32,// ->10981
/*10978*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v4f32 VRRC:v16i8:$src) - Complexity = 3
                // Dst: VRRC:v4f32:$src
              0, // EndSwitchType
/*10982*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 17,  TARGET_VAL(PPCISD::RET_FLAG),// ->11003
/*10986*/   OPC_RecordNode,   // #0 = 'retflag' chained node
/*10987*/   OPC_CaptureGlueInput,
/*10988*/   OPC_EmitMergeInputChains1_0,
/*10989*/   OPC_EmitInteger, MVT::i32, 20, 
/*10992*/   OPC_EmitRegister, MVT::i32, 0 /*zero_reg*/,
/*10995*/   OPC_MorphNodeTo, TARGET_VAL(PPC::BLR), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic0,
                0/*#VTs*/, 2/*#Ops*/, 1, 2, 
            // Src: (retflag) - Complexity = 3
            // Dst: (BLR)
          /*SwitchOpcode*/ 16,  TARGET_VAL(ISD::BR),// ->11022
/*11006*/   OPC_RecordNode,   // #0 = 'br' chained node
/*11007*/   OPC_RecordChild1, // #1 = $dst
/*11008*/   OPC_MoveChild, 1,
/*11010*/   OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*11013*/   OPC_MoveParent,
/*11014*/   OPC_EmitMergeInputChains1_0,
/*11015*/   OPC_MorphNodeTo, TARGET_VAL(PPC::B), 0|OPFL_Chain,
                0/*#VTs*/, 1/*#Ops*/, 1, 
            // Src: (br (bb:Other):$dst) - Complexity = 3
            // Dst: (B (bb:Other):$dst)
          /*SwitchOpcode*/ 26,  TARGET_VAL(PPCISD::BCTRL_Darwin),// ->11051
/*11025*/   OPC_RecordNode,   // #0 = 'PPCbctrl_Darwin' chained node
/*11026*/   OPC_CaptureGlueInput,
/*11027*/   OPC_Scope, 10, /*->11039*/ // 2 children in Scope
/*11029*/     OPC_CheckPatternPredicate, 0, // (!PPCSubTarget.isPPC64())
/*11031*/     OPC_EmitMergeInputChains1_0,
/*11032*/     OPC_MorphNodeTo, TARGET_VAL(PPC::BCTRL_Darwin), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic0,
                  1/*#VTs*/, MVT::i32, 0/*#Ops*/, 
              // Src: (PPCbctrl_Darwin) - Complexity = 3
              // Dst: (BCTRL_Darwin:i32)
/*11039*/   /*Scope*/ 10, /*->11050*/
/*11040*/     OPC_CheckPatternPredicate, 1, // (PPCSubTarget.isPPC64())
/*11042*/     OPC_EmitMergeInputChains1_0,
/*11043*/     OPC_MorphNodeTo, TARGET_VAL(PPC::BCTRL8_Darwin), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic0,
                  1/*#VTs*/, MVT::i64, 0/*#Ops*/, 
              // Src: (PPCbctrl_Darwin) - Complexity = 3
              // Dst: (BCTRL8_Darwin:i64)
/*11050*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 26,  TARGET_VAL(PPCISD::BCTRL_SVR4),// ->11080
/*11054*/   OPC_RecordNode,   // #0 = 'PPCbctrl_SVR4' chained node
/*11055*/   OPC_CaptureGlueInput,
/*11056*/   OPC_Scope, 10, /*->11068*/ // 2 children in Scope
/*11058*/     OPC_CheckPatternPredicate, 0, // (!PPCSubTarget.isPPC64())
/*11060*/     OPC_EmitMergeInputChains1_0,
/*11061*/     OPC_MorphNodeTo, TARGET_VAL(PPC::BCTRL_SVR4), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic0,
                  1/*#VTs*/, MVT::i32, 0/*#Ops*/, 
              // Src: (PPCbctrl_SVR4) - Complexity = 3
              // Dst: (BCTRL_SVR4:i32)
/*11068*/   /*Scope*/ 10, /*->11079*/
/*11069*/     OPC_CheckPatternPredicate, 1, // (PPCSubTarget.isPPC64())
/*11071*/     OPC_EmitMergeInputChains1_0,
/*11072*/     OPC_MorphNodeTo, TARGET_VAL(PPC::BCTRL8_ELF), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic0,
                  1/*#VTs*/, MVT::i64, 0/*#Ops*/, 
              // Src: (PPCbctrl_SVR4) - Complexity = 3
              // Dst: (BCTRL8_ELF:i64)
/*11079*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 8,  TARGET_VAL(ISD::TRAP),// ->11091
/*11083*/   OPC_RecordNode,   // #0 = 'trap' chained node
/*11084*/   OPC_EmitMergeInputChains1_0,
/*11085*/   OPC_MorphNodeTo, TARGET_VAL(PPC::TRAP), 0|OPFL_Chain,
                0/*#VTs*/, 0/*#Ops*/, 
            // Src: (trap) - Complexity = 3
            // Dst: (TRAP)
          /*SwitchOpcode*/ 10,  TARGET_VAL(PPCISD::CR6SET),// ->11104
/*11094*/   OPC_RecordNode,   // #0 = 'PPCcr6set' chained node
/*11095*/   OPC_CaptureGlueInput,
/*11096*/   OPC_EmitMergeInputChains1_0,
/*11097*/   OPC_MorphNodeTo, TARGET_VAL(PPC::CR6SET), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                1/*#VTs*/, MVT::i32, 0/*#Ops*/, 
            // Src: (PPCcr6set) - Complexity = 3
            // Dst: (CR6SET:i32)
          /*SwitchOpcode*/ 10,  TARGET_VAL(PPCISD::CR6UNSET),// ->11117
/*11107*/   OPC_RecordNode,   // #0 = 'PPCcr6unset' chained node
/*11108*/   OPC_CaptureGlueInput,
/*11109*/   OPC_EmitMergeInputChains1_0,
/*11110*/   OPC_MorphNodeTo, TARGET_VAL(PPC::CR6UNSET), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                1/*#VTs*/, MVT::i32, 0/*#Ops*/, 
            // Src: (PPCcr6unset) - Complexity = 3
            // Dst: (CR6UNSET:i32)
          /*SwitchOpcode*/ 29,  TARGET_VAL(PPCISD::MTCTR),// ->11149
/*11120*/   OPC_RecordNode,   // #0 = 'PPCmtctr' chained node
/*11121*/   OPC_CaptureGlueInput,
/*11122*/   OPC_RecordChild1, // #1 = $rS
/*11123*/   OPC_Scope, 11, /*->11136*/ // 2 children in Scope
/*11125*/     OPC_CheckChild1Type, MVT::i32,
/*11127*/     OPC_EmitMergeInputChains1_0,
/*11128*/     OPC_MorphNodeTo, TARGET_VAL(PPC::MTCTR), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
              // Src: (PPCmtctr GPRC:i32:$rS) - Complexity = 3
              // Dst: (MTCTR:i32 GPRC:i32:$rS)
/*11136*/   /*Scope*/ 11, /*->11148*/
/*11137*/     OPC_CheckChild1Type, MVT::i64,
/*11139*/     OPC_EmitMergeInputChains1_0,
/*11140*/     OPC_MorphNodeTo, TARGET_VAL(PPC::MTCTR8), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 1, 
              // Src: (PPCmtctr G8RC:i64:$rS) - Complexity = 3
              // Dst: (MTCTR8:i64 G8RC:i64:$rS)
/*11148*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 15,  TARGET_VAL(PPCISD::VPERM),// ->11167
/*11152*/   OPC_RecordChild0, // #0 = $vA
/*11153*/   OPC_RecordChild1, // #1 = $vB
/*11154*/   OPC_RecordChild2, // #2 = $vC
/*11155*/   OPC_CheckType, MVT::v16i8,
/*11157*/   OPC_MorphNodeTo, TARGET_VAL(PPC::VPERM), 0,
                1/*#VTs*/, MVT::v16i8, 3/*#Ops*/, 0, 1, 2, 
            // Src: (PPCvperm:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB, VRRC:v16i8:$vC) - Complexity = 3
            // Dst: (VPERM:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB, VRRC:v16i8:$vC)
          /*SwitchOpcode*/ 13,  TARGET_VAL(ISD::FP_TO_SINT),// ->11183
/*11170*/   OPC_RecordChild0, // #0 = $vA
/*11171*/   OPC_CheckChild0Type, MVT::v4f32,
/*11173*/   OPC_CheckType, MVT::v4i32,
/*11175*/   OPC_MorphNodeTo, TARGET_VAL(PPC::VCTSXS_0), 0,
                1/*#VTs*/, MVT::v4i32, 1/*#Ops*/, 0, 
            // Src: (fp_to_sint:v4i32 VRRC:v4f32:$vA) - Complexity = 3
            // Dst: (VCTSXS_0:v4i32 VRRC:v4f32:$vA)
          /*SwitchOpcode*/ 13,  TARGET_VAL(ISD::FP_TO_UINT),// ->11199
/*11186*/   OPC_RecordChild0, // #0 = $vA
/*11187*/   OPC_CheckChild0Type, MVT::v4f32,
/*11189*/   OPC_CheckType, MVT::v4i32,
/*11191*/   OPC_MorphNodeTo, TARGET_VAL(PPC::VCTUXS_0), 0,
                1/*#VTs*/, MVT::v4i32, 1/*#Ops*/, 0, 
            // Src: (fp_to_uint:v4i32 VRRC:v4f32:$vA) - Complexity = 3
            // Dst: (VCTUXS_0:v4i32 VRRC:v4f32:$vA)
          /*SwitchOpcode*/ 15,  TARGET_VAL(PPCISD::VMADDFP),// ->11217
/*11202*/   OPC_RecordChild0, // #0 = $A
/*11203*/   OPC_RecordChild1, // #1 = $B
/*11204*/   OPC_RecordChild2, // #2 = $C
/*11205*/   OPC_CheckType, MVT::v4f32,
/*11207*/   OPC_MorphNodeTo, TARGET_VAL(PPC::VMADDFP), 0,
                1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 0, 1, 2, 
            // Src: (PPCvmaddfp:v4f32 VRRC:v4f32:$A, VRRC:v4f32:$B, VRRC:v4f32:$C) - Complexity = 3
            // Dst: (VMADDFP:v4f32 VRRC:v4f32:$A, VRRC:v4f32:$B, VRRC:v4f32:$C)
          /*SwitchOpcode*/ 15,  TARGET_VAL(PPCISD::VNMSUBFP),// ->11235
/*11220*/   OPC_RecordChild0, // #0 = $A
/*11221*/   OPC_RecordChild1, // #1 = $B
/*11222*/   OPC_RecordChild2, // #2 = $C
/*11223*/   OPC_CheckType, MVT::v4f32,
/*11225*/   OPC_MorphNodeTo, TARGET_VAL(PPC::VNMSUBFP), 0,
                1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 0, 1, 2, 
            // Src: (PPCvnmsubfp:v4f32 VRRC:v4f32:$A, VRRC:v4f32:$B, VRRC:v4f32:$C) - Complexity = 3
            // Dst: (VNMSUBFP:v4f32 VRRC:v4f32:$A, VRRC:v4f32:$B, VRRC:v4f32:$C)
          /*SwitchOpcode*/ 13,  TARGET_VAL(ISD::SINT_TO_FP),// ->11251
/*11238*/   OPC_RecordChild0, // #0 = $vA
/*11239*/   OPC_CheckChild0Type, MVT::v4i32,
/*11241*/   OPC_CheckType, MVT::v4f32,
/*11243*/   OPC_MorphNodeTo, TARGET_VAL(PPC::VCFSX_0), 0,
                1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
            // Src: (sint_to_fp:v4f32 VRRC:v4i32:$vA) - Complexity = 3
            // Dst: (VCFSX_0:v4f32 VRRC:v4i32:$vA)
          /*SwitchOpcode*/ 13,  TARGET_VAL(ISD::UINT_TO_FP),// ->11267
/*11254*/   OPC_RecordChild0, // #0 = $vA
/*11255*/   OPC_CheckChild0Type, MVT::v4i32,
/*11257*/   OPC_CheckType, MVT::v4f32,
/*11259*/   OPC_MorphNodeTo, TARGET_VAL(PPC::VCFUX_0), 0,
                1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
            // Src: (uint_to_fp:v4f32 VRRC:v4i32:$vA) - Complexity = 3
            // Dst: (VCFUX_0:v4f32 VRRC:v4i32:$vA)
          /*SwitchOpcode*/ 7,  TARGET_VAL(PPCISD::NOP),// ->11277
/*11270*/   OPC_CaptureGlueInput,
/*11271*/   OPC_MorphNodeTo, TARGET_VAL(PPC::NOP), 0|OPFL_GlueInput|OPFL_GlueOutput,
                0/*#VTs*/, 0/*#Ops*/, 
            // Src: (PPCnop) - Complexity = 3
            // Dst: (NOP)
          /*SwitchOpcode*/ 13,  TARGET_VAL(PPCISD::LOAD_TOC),// ->11293
/*11280*/   OPC_RecordNode,   // #0 = 'PPCload_toc' chained node
/*11281*/   OPC_CaptureGlueInput,
/*11282*/   OPC_RecordChild1, // #1 = $reg
/*11283*/   OPC_CheckChild1Type, MVT::i64,
/*11285*/   OPC_EmitMergeInputChains1_0,
/*11286*/   OPC_MorphNodeTo, TARGET_VAL(PPC::LDinto_toc), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                0/*#VTs*/, 1/*#Ops*/, 1, 
            // Src: (PPCload_toc G8RC:i64:$reg) - Complexity = 3
            // Dst: (LDinto_toc G8RC:i64:$reg)
          /*SwitchOpcode*/ 9,  TARGET_VAL(PPCISD::TOC_RESTORE),// ->11305
/*11296*/   OPC_RecordNode,   // #0 = 'PPCtoc_restore' chained node
/*11297*/   OPC_CaptureGlueInput,
/*11298*/   OPC_EmitMergeInputChains1_0,
/*11299*/   OPC_MorphNodeTo, TARGET_VAL(PPC::LDtoc_restore), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                0/*#VTs*/, 0/*#Ops*/, 
            // Src: (PPCtoc_restore) - Complexity = 3
            // Dst: (LDtoc_restore)
          0, // EndSwitchOpcode
    0
  }; // Total Array size is 11307 bytes

  // Opcode Histogram:
  // #OPC_Scope                          = 112
  // #OPC_RecordNode                     = 44
  // #OPC_RecordChild                    = 478
  // #OPC_RecordMemRef                   = 11
  // #OPC_CaptureGlueInput               = 21
  // #OPC_MoveChild                      = 141
  // #OPC_MoveParent                     = 363
  // #OPC_CheckSame                      = 0
  // #OPC_CheckPatternPredicate          = 4
  // #OPC_CheckPredicate                 = 189
  // #OPC_CheckOpcode                    = 79
  // #OPC_SwitchOpcode                   = 16
  // #OPC_CheckType                      = 153
  // #OPC_SwitchType                     = 93
  // #OPC_CheckChildType                 = 54
  // #OPC_CheckInteger                   = 197
  // #OPC_CheckCondCode                  = 0
  // #OPC_CheckValueType                 = 7
  // #OPC_CheckComplexPat                = 150
  // #OPC_CheckAndImm                    = 0
  // #OPC_CheckOrImm                     = 0
  // #OPC_CheckFoldableChainNode         = 0
  // #OPC_EmitInteger                    = 26
  // #OPC_EmitStringInteger              = 6
  // #OPC_EmitRegister                   = 1
  // #OPC_EmitConvertToTarget            = 79
  // #OPC_EmitMergeInputChains           = 202
  // #OPC_EmitCopyToReg                  = 0
  // #OPC_EmitNode                       = 10
  // #OPC_EmitNodeXForm                  = 38
  // #OPC_MarkGlueResults                = 0
  // #OPC_CompleteMatch                  = 12
  // #OPC_MorphNodeTo                    = 600

  #undef TARGET_VAL
  return SelectCodeCommon(N, MatcherTable,sizeof(MatcherTable));
}

virtual bool CheckPatternPredicate(unsigned PredNo) const {
  switch (PredNo) {
  default: llvm_unreachable("Invalid predicate in table?");
  case 0: return (!PPCSubTarget.isPPC64());
  case 1: return (PPCSubTarget.isPPC64());
  }
}

virtual bool CheckNodePredicate(SDNode *Node,
                                unsigned PredNo) const {
  switch (PredNo) {
  default: llvm_unreachable("Invalid predicate in table?");
  case 0: { // Predicate_immSExt16
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  // immSExt16 predicate - True if the immediate fits in a 16-bit sign extended
  // field.  Used by instructions like 'addi'.
  if (N->getValueType(0) == MVT::i32)
    return (int32_t)N->getZExtValue() == (short)N->getZExtValue();
  else
    return (int64_t)N->getZExtValue() == (short)N->getZExtValue();

  }
  case 1: { // Predicate_imm16ShiftedSExt
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  // imm16ShiftedSExt predicate - True if only bits in the top 16-bits of the
  // immediate are set.  Used by instructions like 'addis'.  Identical to 
  // imm16ShiftedZExt in 32-bit mode.
  if (N->getZExtValue() & 0xFFFF) return false;
  if (N->getValueType(0) == MVT::i32)
    return true;
  // For 64-bit, make sure it is sext right.
  return N->getZExtValue() == (uint64_t)(int)N->getZExtValue();

  }
  case 2: { // Predicate_unindexedload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getAddressingMode() == ISD::UNINDEXED;

  }
  case 3: { // Predicate_zextload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::ZEXTLOAD;

  }
  case 4: { // Predicate_zextloadi8
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 5: { // Predicate_sextload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::SEXTLOAD;

  }
  case 6: { // Predicate_sextloadi16
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 7: { // Predicate_zextloadi16
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 8: { // Predicate_load
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::NON_EXTLOAD;

  }
  case 9: { // Predicate_zextloadi1
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i1;

  }
  case 10: { // Predicate_extload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::EXTLOAD;

  }
  case 11: { // Predicate_extloadi1
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i1;

  }
  case 12: { // Predicate_extloadi8
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 13: { // Predicate_extloadi16
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 14: { // Predicate_sextloadi32
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 15: { // Predicate_zextloadi32
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 16: { // Predicate_extloadi32
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 17: { // Predicate_extloadf32
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::f32;

  }
  case 18: { // Predicate_unindexedstore
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getAddressingMode() == ISD::UNINDEXED;

  }
  case 19: { // Predicate_truncstore
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->isTruncatingStore();

  }
  case 20: { // Predicate_truncstorei8
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 21: { // Predicate_truncstorei16
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 22: { // Predicate_store
    SDNode *N = Node;

  return !cast<StoreSDNode>(N)->isTruncatingStore();

  }
  case 23: { // Predicate_itruncstore
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->isTruncatingStore();

  }
  case 24: { // Predicate_pre_truncst
    SDNode *N = Node;

  ISD::MemIndexedMode AM = cast<StoreSDNode>(N)->getAddressingMode();
  return AM == ISD::PRE_INC || AM == ISD::PRE_DEC;

  }
  case 25: { // Predicate_pre_truncsti8
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 26: { // Predicate_pre_truncsti16
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 27: { // Predicate_istore
    SDNode *N = Node;

  return !cast<StoreSDNode>(N)->isTruncatingStore();

  }
  case 28: { // Predicate_pre_store
    SDNode *N = Node;

  ISD::MemIndexedMode AM = cast<StoreSDNode>(N)->getAddressingMode();
  return AM == ISD::PRE_INC || AM == ISD::PRE_DEC;

  }
  case 29: { // Predicate_pre_truncsti32
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 30: { // Predicate_truncstorei32
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 31: { // Predicate_atomic_load_add_8
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
  }
  case 32: { // Predicate_atomic_load_add_16
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
  }
  case 33: { // Predicate_atomic_load_add_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 34: { // Predicate_atomic_load_add_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 35: { // Predicate_atomic_load_sub_8
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
  }
  case 36: { // Predicate_atomic_load_sub_16
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
  }
  case 37: { // Predicate_atomic_load_sub_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 38: { // Predicate_atomic_load_sub_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 39: { // Predicate_atomic_load_and_8
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
  }
  case 40: { // Predicate_atomic_load_and_16
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
  }
  case 41: { // Predicate_atomic_load_and_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 42: { // Predicate_atomic_load_and_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 43: { // Predicate_atomic_load_or_8
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
  }
  case 44: { // Predicate_atomic_load_or_16
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
  }
  case 45: { // Predicate_atomic_load_or_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 46: { // Predicate_atomic_load_or_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 47: { // Predicate_atomic_load_xor_8
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
  }
  case 48: { // Predicate_atomic_load_xor_16
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
  }
  case 49: { // Predicate_atomic_load_xor_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 50: { // Predicate_atomic_load_xor_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 51: { // Predicate_atomic_load_nand_8
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
  }
  case 52: { // Predicate_atomic_load_nand_16
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
  }
  case 53: { // Predicate_atomic_load_nand_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 54: { // Predicate_atomic_load_nand_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 55: { // Predicate_atomic_cmp_swap_8
    SDNode *N = Node;

  return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 56: { // Predicate_atomic_cmp_swap_16
    SDNode *N = Node;

  return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 57: { // Predicate_atomic_cmp_swap_32
    SDNode *N = Node;

  return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 58: { // Predicate_atomic_cmp_swap_64
    SDNode *N = Node;

  return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;

  }
  case 59: { // Predicate_atomic_swap_8
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
  }
  case 60: { // Predicate_atomic_swap_16
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
  }
  case 61: { // Predicate_atomic_swap_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 62: { // Predicate_atomic_swap_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 63: { // Predicate_immAllOnesV
    SDNode *N = Node;

  return ISD::isBuildVectorAllOnes(N);

  }
  case 64: { // Predicate_immZExt16
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  // immZExt16 predicate - True if the immediate fits in a 16-bit zero extended
  // field.  Used by instructions like 'ori'.
  return (uint64_t)N->getZExtValue() == (unsigned short)N->getZExtValue();

  }
  case 65: { // Predicate_imm16ShiftedZExt
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  // imm16ShiftedZExt predicate - True if only bits in the top 16-bits of the
  // immediate are set.  Used by instructions like 'xoris'.
  return (N->getZExtValue() & ~uint64_t(0xFFFF0000)) == 0;

  }
  case 66: { // Predicate_maskimm32
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  // maskImm predicate - True if immediate is a run of ones.
  unsigned mb, me;
  if (N->getValueType(0) == MVT::i32)
    return isRunOfOnes((unsigned)N->getZExtValue(), mb, me);
  else
    return false;

  }
  case 67: { // Predicate_vspltb_shuffle
    SDNode *N = Node;

  return PPC::isSplatShuffleMask(cast<ShuffleVectorSDNode>(N), 1);

  }
  case 68: { // Predicate_vsplth_shuffle
    SDNode *N = Node;

  return PPC::isSplatShuffleMask(cast<ShuffleVectorSDNode>(N), 2);

  }
  case 69: { // Predicate_vspltw_shuffle
    SDNode *N = Node;

  return PPC::isSplatShuffleMask(cast<ShuffleVectorSDNode>(N), 4);

  }
  case 70: { // Predicate_vsldoi_unary_shuffle
    SDNode *N = Node;

  return PPC::isVSLDOIShuffleMask(N, true) != -1;

  }
  case 71: { // Predicate_vpkuwum_unary_shuffle
    SDNode *N = Node;

  return PPC::isVPKUWUMShuffleMask(cast<ShuffleVectorSDNode>(N), true);

  }
  case 72: { // Predicate_vpkuhum_unary_shuffle
    SDNode *N = Node;

  return PPC::isVPKUHUMShuffleMask(cast<ShuffleVectorSDNode>(N), true);

  }
  case 73: { // Predicate_vmrglb_unary_shuffle
    SDNode *N = Node;

  return PPC::isVMRGLShuffleMask(cast<ShuffleVectorSDNode>(N), 1, true);

  }
  case 74: { // Predicate_vmrglh_unary_shuffle
    SDNode *N = Node;

  return PPC::isVMRGLShuffleMask(cast<ShuffleVectorSDNode>(N), 2, true);

  }
  case 75: { // Predicate_vmrglw_unary_shuffle
    SDNode *N = Node;

  return PPC::isVMRGLShuffleMask(cast<ShuffleVectorSDNode>(N), 4, true);

  }
  case 76: { // Predicate_vmrghb_unary_shuffle
    SDNode *N = Node;

  return PPC::isVMRGHShuffleMask(cast<ShuffleVectorSDNode>(N), 1, true);

  }
  case 77: { // Predicate_vmrghh_unary_shuffle
    SDNode *N = Node;

  return PPC::isVMRGHShuffleMask(cast<ShuffleVectorSDNode>(N), 2, true);

  }
  case 78: { // Predicate_vmrghw_unary_shuffle
    SDNode *N = Node;

  return PPC::isVMRGHShuffleMask(cast<ShuffleVectorSDNode>(N), 4, true);

  }
  case 79: { // Predicate_vsldoi_shuffle
    SDNode *N = Node;

  return PPC::isVSLDOIShuffleMask(N, false) != -1;

  }
  case 80: { // Predicate_vmrghb_shuffle
    SDNode *N = Node;

  return PPC::isVMRGHShuffleMask(cast<ShuffleVectorSDNode>(N), 1, false);

  }
  case 81: { // Predicate_vmrghh_shuffle
    SDNode *N = Node;

  return PPC::isVMRGHShuffleMask(cast<ShuffleVectorSDNode>(N), 2, false);

  }
  case 82: { // Predicate_vmrghw_shuffle
    SDNode *N = Node;

  return PPC::isVMRGHShuffleMask(cast<ShuffleVectorSDNode>(N), 4, false);

  }
  case 83: { // Predicate_vmrglb_shuffle
    SDNode *N = Node;

  return PPC::isVMRGLShuffleMask(cast<ShuffleVectorSDNode>(N), 1, false);

  }
  case 84: { // Predicate_vmrglh_shuffle
    SDNode *N = Node;

  return PPC::isVMRGLShuffleMask(cast<ShuffleVectorSDNode>(N), 2, false);

  }
  case 85: { // Predicate_vmrglw_shuffle
    SDNode *N = Node;

  return PPC::isVMRGLShuffleMask(cast<ShuffleVectorSDNode>(N), 4, false);

  }
  case 86: { // Predicate_vpkuhum_shuffle
    SDNode *N = Node;

  return PPC::isVPKUHUMShuffleMask(cast<ShuffleVectorSDNode>(N), false);

  }
  case 87: { // Predicate_vpkuwum_shuffle
    SDNode *N = Node;

  return PPC::isVPKUWUMShuffleMask(cast<ShuffleVectorSDNode>(N), false);

  }
  case 88: { // Predicate_vecspltisb
    SDNode *N = Node;

  return PPC::get_VSPLTI_elt(N, 1, *CurDAG).getNode() != 0;

  }
  case 89: { // Predicate_vecspltish
    SDNode *N = Node;

  return PPC::get_VSPLTI_elt(N, 2, *CurDAG).getNode() != 0;

  }
  case 90: { // Predicate_vecspltisw
    SDNode *N = Node;

  return PPC::get_VSPLTI_elt(N, 4, *CurDAG).getNode() != 0;

  }
  case 91: { // Predicate_immAllZerosV
    SDNode *N = Node;

  return ISD::isBuildVectorAllZeros(N);

  }
  }
}

virtual bool CheckComplexPattern(SDNode *Root, SDNode *Parent,
                                 SDValue N, unsigned PatternNo,
         SmallVectorImpl<std::pair<SDValue, SDNode*> > &Result) {
  unsigned NextRes = Result.size();
  switch (PatternNo) {
  default: llvm_unreachable("Invalid pattern # in table?");
  case 0:
    Result.resize(NextRes+2);
    return SelectAddrIdxOnly(N, Result[NextRes+0].first, Result[NextRes+1].first);
  case 1:
    Result.resize(NextRes+2);
    return SelectAddrImm(N, Result[NextRes+0].first, Result[NextRes+1].first);
  case 2:
    Result.resize(NextRes+2);
    return SelectAddrIdx(N, Result[NextRes+0].first, Result[NextRes+1].first);
  case 3:
    Result.resize(NextRes+2);
    return SelectAddrImmShift(N, Result[NextRes+0].first, Result[NextRes+1].first);
  case 4:
    Result.resize(NextRes+1);
    return SelectAddrImmOffs(N, Result[NextRes+0].first);
  case 5:
    Result.resize(NextRes+1);
    return SelectAddrIdxOffs(N, Result[NextRes+0].first);
  }
}

virtual SDValue RunSDNodeXForm(SDValue V, unsigned XFormNo) {
  switch (XFormNo) {
  default: llvm_unreachable("Invalid xform # in table?");
  case 0: {  // HI16
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: shift the immediate value down into the low bits.
  return getI32Imm((unsigned)N->getZExtValue() >> 16);

  }
  case 1: {  // LO16
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: get the low 16 bits.
  return getI32Imm((unsigned short)N->getZExtValue());

  }
  case 2: {  // HA16
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: shift the immediate value down into the low bits.
  signed int Val = N->getZExtValue();
  return getI32Imm((Val - (signed short)Val) >> 16);

  }
  case 3: {  // MB
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: get the start bit of a mask
  unsigned mb = 0, me;
  (void)isRunOfOnes((unsigned)N->getZExtValue(), mb, me);
  return getI32Imm(mb);

  }
  case 4: {  // ME
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: get the end bit of a mask
  unsigned mb, me = 0;
  (void)isRunOfOnes((unsigned)N->getZExtValue(), mb, me);
  return getI32Imm(me);

  }
  case 5: {  // VSPLTB_get_imm
    SDNode *N = V.getNode();

  return getI32Imm(PPC::getVSPLTImmediate(N, 1));

  }
  case 6: {  // VSPLTH_get_imm
    SDNode *N = V.getNode();

  return getI32Imm(PPC::getVSPLTImmediate(N, 2));

  }
  case 7: {  // VSPLTW_get_imm
    SDNode *N = V.getNode();

  return getI32Imm(PPC::getVSPLTImmediate(N, 4));

  }
  case 8: {  // VSLDOI_unary_get_imm
    SDNode *N = V.getNode();

  return getI32Imm(PPC::isVSLDOIShuffleMask(N, true));

  }
  case 9: {  // VSLDOI_get_imm
    SDNode *N = V.getNode();

  return getI32Imm(PPC::isVSLDOIShuffleMask(N, false));

  }
  case 10: {  // SHL32
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: 31 - imm
  return getI32Imm(31 - N->getZExtValue());

  }
  case 11: {  // SHL64
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: 63 - imm
  return getI32Imm(63 - N->getZExtValue());

  }
  case 12: {  // SRL32
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: 32 - imm
  return N->getZExtValue() ? getI32Imm(32 - N->getZExtValue()) : getI32Imm(0);

  }
  case 13: {  // SRL64
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: 64 - imm
  return N->getZExtValue() ? getI32Imm(64 - N->getZExtValue()) : getI32Imm(0);

  }
  case 14: {  // VSPLTISB_get_imm
    SDNode *N = V.getNode();

  return PPC::get_VSPLTI_elt(N, 1, *CurDAG);

  }
  case 15: {  // VSPLTISH_get_imm
    SDNode *N = V.getNode();

  return PPC::get_VSPLTI_elt(N, 2, *CurDAG);

  }
  case 16: {  // VSPLTISW_get_imm
    SDNode *N = V.getNode();

  return PPC::get_VSPLTI_elt(N, 4, *CurDAG);

  }
  }
}

