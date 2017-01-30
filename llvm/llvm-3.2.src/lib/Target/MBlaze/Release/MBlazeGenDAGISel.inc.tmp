/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* DAG Instruction Selector for the MBlaze target                             *|
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
/*0*/     OPC_SwitchOpcode /*53 cases */, 69|128,1/*197*/,  TARGET_VAL(ISD::STORE),// ->202
/*5*/       OPC_RecordMemRef,
/*6*/       OPC_RecordNode,   // #0 = 'st' chained node
/*7*/       OPC_Scope, 28, /*->37*/ // 2 children in Scope
/*9*/         OPC_MoveChild, 1,
/*11*/        OPC_CheckInteger, 0, 
/*13*/        OPC_MoveParent,
/*14*/        OPC_RecordChild2, // #1 = $dst
/*15*/        OPC_CheckChild2Type, MVT::i32,
/*17*/        OPC_CheckPredicate, 0, // Predicate_unindexedstore
/*19*/        OPC_CheckPredicate, 1, // Predicate_store
/*21*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrRegImm:$dst #2 #3
/*24*/        OPC_EmitMergeInputChains1_0,
/*25*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*28*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::SWI), 0|OPFL_Chain|OPFL_MemRefs,
                  0/*#VTs*/, 3/*#Ops*/, 4, 2, 3, 
              // Src: (st 0:i32, iaddr:i32:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 18
              // Dst: (SWI R0:i32, iaddr:i32:$dst)
/*37*/      /*Scope*/ 34|128,1/*162*/, /*->201*/
/*39*/        OPC_RecordChild1, // #1 = $dst
/*40*/        OPC_Scope, 116, /*->158*/ // 2 children in Scope
/*42*/          OPC_CheckChild1Type, MVT::i32,
/*44*/          OPC_RecordChild2, // #2 = $addr
/*45*/          OPC_CheckChild2Type, MVT::i32,
/*47*/          OPC_CheckPredicate, 0, // Predicate_unindexedstore
/*49*/          OPC_Scope, 36, /*->87*/ // 3 children in Scope
/*51*/            OPC_CheckPredicate, 2, // Predicate_truncstore
/*53*/            OPC_Scope, 15, /*->70*/ // 2 children in Scope
/*55*/              OPC_CheckPredicate, 3, // Predicate_truncstorei8
/*57*/              OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrRegImm:$addr #3 #4
/*60*/              OPC_EmitMergeInputChains1_0,
/*61*/              OPC_MorphNodeTo, TARGET_VAL(MBlaze::SBI), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st GPR:i32:$dst, iaddr:i32:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 13
                    // Dst: (SBI GPR:i32:$dst, iaddr:i32:$addr)
/*70*/            /*Scope*/ 15, /*->86*/
/*71*/              OPC_CheckPredicate, 4, // Predicate_truncstorei16
/*73*/              OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrRegImm:$addr #3 #4
/*76*/              OPC_EmitMergeInputChains1_0,
/*77*/              OPC_MorphNodeTo, TARGET_VAL(MBlaze::SHI), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st GPR:i32:$dst, iaddr:i32:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 13
                    // Dst: (SHI GPR:i32:$dst, iaddr:i32:$addr)
/*86*/            0, /*End of Scope*/
/*87*/          /*Scope*/ 32, /*->120*/
/*88*/            OPC_CheckPredicate, 1, // Predicate_store
/*90*/            OPC_Scope, 13, /*->105*/ // 2 children in Scope
/*92*/              OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrRegImm:$addr #3 #4
/*95*/              OPC_EmitMergeInputChains1_0,
/*96*/              OPC_MorphNodeTo, TARGET_VAL(MBlaze::SWI), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st GPR:i32:$dst, iaddr:i32:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                    // Dst: (SWI GPR:i32:$dst, iaddr:i32:$addr)
/*105*/           /*Scope*/ 13, /*->119*/
/*106*/             OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrRegReg:$addr #3 #4
/*109*/             OPC_EmitMergeInputChains1_0,
/*110*/             OPC_MorphNodeTo, TARGET_VAL(MBlaze::SW), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st GPR:i32:$dst, xaddr:i32:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                    // Dst: (SW GPR:i32:$dst, xaddr:i32:$addr)
/*119*/           0, /*End of Scope*/
/*120*/         /*Scope*/ 36, /*->157*/
/*121*/           OPC_CheckPredicate, 2, // Predicate_truncstore
/*123*/           OPC_Scope, 15, /*->140*/ // 2 children in Scope
/*125*/             OPC_CheckPredicate, 4, // Predicate_truncstorei16
/*127*/             OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrRegReg:$ad #3 #4
/*130*/             OPC_EmitMergeInputChains1_0,
/*131*/             OPC_MorphNodeTo, TARGET_VAL(MBlaze::SH), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st GPR:i32:$dst, xaddr:i32:$ad)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 13
                    // Dst: (SH GPR:i32:$dst, xaddr:i32:$ad)
/*140*/           /*Scope*/ 15, /*->156*/
/*141*/             OPC_CheckPredicate, 3, // Predicate_truncstorei8
/*143*/             OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrRegReg:$ad #3 #4
/*146*/             OPC_EmitMergeInputChains1_0,
/*147*/             OPC_MorphNodeTo, TARGET_VAL(MBlaze::SB), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st GPR:i32:$dst, xaddr:i32:$ad)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 13
                    // Dst: (SB GPR:i32:$dst, xaddr:i32:$ad)
/*156*/           0, /*End of Scope*/
/*157*/         0, /*End of Scope*/
/*158*/       /*Scope*/ 41, /*->200*/
/*159*/         OPC_CheckChild1Type, MVT::f32,
/*161*/         OPC_RecordChild2, // #2 = $addr
/*162*/         OPC_CheckChild2Type, MVT::i32,
/*164*/         OPC_CheckPredicate, 0, // Predicate_unindexedstore
/*166*/         OPC_CheckPredicate, 1, // Predicate_store
/*168*/         OPC_CheckPatternPredicate, 0, // (Subtarget.hasFPU())
/*170*/         OPC_Scope, 13, /*->185*/ // 2 children in Scope
/*172*/           OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrRegReg:$addr #3 #4
/*175*/           OPC_EmitMergeInputChains1_0,
/*176*/           OPC_MorphNodeTo, TARGET_VAL(MBlaze::SWF), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                  // Src: (st GPR:f32:$dst, xaddr:i32:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                  // Dst: (SWF GPR:f32:$dst, xaddr:i32:$addr)
/*185*/         /*Scope*/ 13, /*->199*/
/*186*/           OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrRegImm:$addr #3 #4
/*189*/           OPC_EmitMergeInputChains1_0,
/*190*/           OPC_MorphNodeTo, TARGET_VAL(MBlaze::SWFI), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                  // Src: (st GPR:f32:$dst, iaddr:i32:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                  // Dst: (SWFI GPR:f32:$dst, iaddr:i32:$addr)
/*199*/         0, /*End of Scope*/
/*200*/       0, /*End of Scope*/
/*201*/     0, /*End of Scope*/
          /*SwitchOpcode*/ 38,  TARGET_VAL(ISD::MEMBARRIER),// ->243
/*205*/     OPC_RecordNode,   // #0 = 'membarrier' chained node
/*206*/     OPC_MoveChild, 1,
/*208*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*211*/     OPC_MoveParent,
/*212*/     OPC_MoveChild, 2,
/*214*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*217*/     OPC_MoveParent,
/*218*/     OPC_MoveChild, 3,
/*220*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*223*/     OPC_MoveParent,
/*224*/     OPC_MoveChild, 4,
/*226*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*229*/     OPC_MoveParent,
/*230*/     OPC_MoveChild, 5,
/*232*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*235*/     OPC_MoveParent,
/*236*/     OPC_EmitMergeInputChains1_0,
/*237*/     OPC_MorphNodeTo, TARGET_VAL(MBlaze::MEMBARRIER), 0|OPFL_Chain,
                0/*#VTs*/, 0/*#Ops*/, 
            // Src: (membarrier (imm:i32), (imm:i32), (imm:i32), (imm:i32), (imm:i32)) - Complexity = 18
            // Dst: (MEMBARRIER)
          /*SwitchOpcode*/ 97|128,1/*225*/,  TARGET_VAL(ISD::LOAD),// ->472
/*247*/     OPC_RecordMemRef,
/*248*/     OPC_RecordNode,   // #0 = 'ld' chained node
/*249*/     OPC_RecordChild1, // #1 = $addr
/*250*/     OPC_CheckChild1Type, MVT::i32,
/*252*/     OPC_CheckPredicate, 5, // Predicate_unindexedload
/*254*/     OPC_SwitchType /*2 cases */, 49|128,1/*177*/,  MVT::i32,// ->435
/*258*/       OPC_Scope, 36, /*->296*/ // 5 children in Scope
/*260*/         OPC_CheckPredicate, 6, // Predicate_zextload
/*262*/         OPC_Scope, 15, /*->279*/ // 2 children in Scope
/*264*/           OPC_CheckPredicate, 7, // Predicate_zextloadi8
/*266*/           OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrRegImm:$addr #2 #3
/*269*/           OPC_EmitMergeInputChains1_0,
/*270*/           OPC_MorphNodeTo, TARGET_VAL(MBlaze::LBUI), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 iaddr:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 13
                  // Dst: (LBUI:i32 iaddr:i32:$addr)
/*279*/         /*Scope*/ 15, /*->295*/
/*280*/           OPC_CheckPredicate, 8, // Predicate_zextloadi16
/*282*/           OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrRegImm:$addr #2 #3
/*285*/           OPC_EmitMergeInputChains1_0,
/*286*/           OPC_MorphNodeTo, TARGET_VAL(MBlaze::LHUI), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 iaddr:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 13
                  // Dst: (LHUI:i32 iaddr:i32:$addr)
/*295*/         0, /*End of Scope*/
/*296*/       /*Scope*/ 15, /*->312*/
/*297*/         OPC_CheckPredicate, 9, // Predicate_load
/*299*/         OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrRegImm:$addr #2 #3
/*302*/         OPC_EmitMergeInputChains1_0,
/*303*/         OPC_MorphNodeTo, TARGET_VAL(MBlaze::LWI), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i32 iaddr:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                // Dst: (LWI:i32 iaddr:i32:$addr)
/*312*/       /*Scope*/ 68, /*->381*/
/*313*/         OPC_CheckPredicate, 10, // Predicate_extload
/*315*/         OPC_Scope, 15, /*->332*/ // 4 children in Scope
/*317*/           OPC_CheckPredicate, 11, // Predicate_extloadi8
/*319*/           OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrRegImm:$src #2 #3
/*322*/           OPC_EmitMergeInputChains1_0,
/*323*/           OPC_MorphNodeTo, TARGET_VAL(MBlaze::LBUI), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 iaddr:i32:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 13
                  // Dst: (LBUI:i32 iaddr:i32:$src)
/*332*/         /*Scope*/ 15, /*->348*/
/*333*/           OPC_CheckPredicate, 12, // Predicate_extloadi16
/*335*/           OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrRegImm:$src #2 #3
/*338*/           OPC_EmitMergeInputChains1_0,
/*339*/           OPC_MorphNodeTo, TARGET_VAL(MBlaze::LHUI), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 iaddr:i32:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 13
                  // Dst: (LHUI:i32 iaddr:i32:$src)
/*348*/         /*Scope*/ 15, /*->364*/
/*349*/           OPC_CheckPredicate, 11, // Predicate_extloadi8
/*351*/           OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrRegReg:$src #2 #3
/*354*/           OPC_EmitMergeInputChains1_0,
/*355*/           OPC_MorphNodeTo, TARGET_VAL(MBlaze::LBU), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 xaddr:i32:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 13
                  // Dst: (LBU:i32 xaddr:i32:$src)
/*364*/         /*Scope*/ 15, /*->380*/
/*365*/           OPC_CheckPredicate, 12, // Predicate_extloadi16
/*367*/           OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrRegReg:$src #2 #3
/*370*/           OPC_EmitMergeInputChains1_0,
/*371*/           OPC_MorphNodeTo, TARGET_VAL(MBlaze::LHU), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 xaddr:i32:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 13
                  // Dst: (LHU:i32 xaddr:i32:$src)
/*380*/         0, /*End of Scope*/
/*381*/       /*Scope*/ 15, /*->397*/
/*382*/         OPC_CheckPredicate, 9, // Predicate_load
/*384*/         OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrRegReg:$addr #2 #3
/*387*/         OPC_EmitMergeInputChains1_0,
/*388*/         OPC_MorphNodeTo, TARGET_VAL(MBlaze::LW), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i32 xaddr:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                // Dst: (LW:i32 xaddr:i32:$addr)
/*397*/       /*Scope*/ 36, /*->434*/
/*398*/         OPC_CheckPredicate, 6, // Predicate_zextload
/*400*/         OPC_Scope, 15, /*->417*/ // 2 children in Scope
/*402*/           OPC_CheckPredicate, 8, // Predicate_zextloadi16
/*404*/           OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrRegReg:$addr #2 #3
/*407*/           OPC_EmitMergeInputChains1_0,
/*408*/           OPC_MorphNodeTo, TARGET_VAL(MBlaze::LHU), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 xaddr:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 13
                  // Dst: (LHU:i32 xaddr:i32:$addr)
/*417*/         /*Scope*/ 15, /*->433*/
/*418*/           OPC_CheckPredicate, 7, // Predicate_zextloadi8
/*420*/           OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrRegReg:$addr #2 #3
/*423*/           OPC_EmitMergeInputChains1_0,
/*424*/           OPC_MorphNodeTo, TARGET_VAL(MBlaze::LBU), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 xaddr:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 13
                  // Dst: (LBU:i32 xaddr:i32:$addr)
/*433*/         0, /*End of Scope*/
/*434*/       0, /*End of Scope*/
            /*SwitchType*/ 34,  MVT::f32,// ->471
/*437*/       OPC_CheckPredicate, 9, // Predicate_load
/*439*/       OPC_CheckPatternPredicate, 0, // (Subtarget.hasFPU())
/*441*/       OPC_Scope, 13, /*->456*/ // 2 children in Scope
/*443*/         OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrRegReg:$addr #2 #3
/*446*/         OPC_EmitMergeInputChains1_0,
/*447*/         OPC_MorphNodeTo, TARGET_VAL(MBlaze::LWF), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::f32, 2/*#Ops*/, 2, 3, 
                // Src: (ld:f32 xaddr:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                // Dst: (LWF:f32 xaddr:i32:$addr)
/*456*/       /*Scope*/ 13, /*->470*/
/*457*/         OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrRegImm:$addr #2 #3
/*460*/         OPC_EmitMergeInputChains1_0,
/*461*/         OPC_MorphNodeTo, TARGET_VAL(MBlaze::LWFI), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::f32, 2/*#Ops*/, 2, 3, 
                // Src: (ld:f32 iaddr:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                // Dst: (LWFI:f32 iaddr:i32:$addr)
/*470*/       0, /*End of Scope*/
            0, // EndSwitchType
          /*SwitchOpcode*/ 101|128,9/*1253*/,  TARGET_VAL(ISD::INTRINSIC_W_CHAIN),// ->1729
/*476*/     OPC_RecordNode,   // #0 = 'intrinsic_w_chain' chained node
/*477*/     OPC_MoveChild, 1,
/*479*/     OPC_Scope, 37, /*->518*/ // 32 children in Scope
/*481*/       OPC_CheckInteger, 66|128,19/*2498*/, 
/*484*/       OPC_MoveParent,
/*485*/       OPC_RecordChild2, // #1 = $b
/*486*/       OPC_Scope, 19, /*->507*/ // 2 children in Scope
/*488*/         OPC_MoveChild, 2,
/*490*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*493*/         OPC_CheckPredicate, 13, // Predicate_immZExt4
/*495*/         OPC_MoveParent,
/*496*/         OPC_EmitMergeInputChains1_0,
/*497*/         OPC_EmitConvertToTarget, 1,
/*499*/         OPC_MorphNodeTo, TARGET_VAL(MBlaze::GET), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
                // Src: (intrinsic_w_chain:i32 2498:iPTR, (imm:i32)<<P:Predicate_immZExt4>>:$b) - Complexity = 12
                // Dst: (GET:i32 (imm:i32):$b)
/*507*/       /*Scope*/ 9, /*->517*/
/*508*/         OPC_EmitMergeInputChains1_0,
/*509*/         OPC_MorphNodeTo, TARGET_VAL(MBlaze::GETD), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (intrinsic_w_chain:i32 2498:iPTR, GPR:i32:$b) - Complexity = 8
                // Dst: (GETD:i32 GPR:i32:$b)
/*517*/       0, /*End of Scope*/
/*518*/     /*Scope*/ 37, /*->556*/
/*519*/       OPC_CheckInteger, 56|128,19/*2488*/, 
/*522*/       OPC_MoveParent,
/*523*/       OPC_RecordChild2, // #1 = $b
/*524*/       OPC_Scope, 19, /*->545*/ // 2 children in Scope
/*526*/         OPC_MoveChild, 2,
/*528*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*531*/         OPC_CheckPredicate, 13, // Predicate_immZExt4
/*533*/         OPC_MoveParent,
/*534*/         OPC_EmitMergeInputChains1_0,
/*535*/         OPC_EmitConvertToTarget, 1,
/*537*/         OPC_MorphNodeTo, TARGET_VAL(MBlaze::AGET), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
                // Src: (intrinsic_w_chain:i32 2488:iPTR, (imm:i32)<<P:Predicate_immZExt4>>:$b) - Complexity = 12
                // Dst: (AGET:i32 (imm:i32):$b)
/*545*/       /*Scope*/ 9, /*->555*/
/*546*/         OPC_EmitMergeInputChains1_0,
/*547*/         OPC_MorphNodeTo, TARGET_VAL(MBlaze::AGETD), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (intrinsic_w_chain:i32 2488:iPTR, GPR:i32:$b) - Complexity = 8
                // Dst: (AGETD:i32 GPR:i32:$b)
/*555*/       0, /*End of Scope*/
/*556*/     /*Scope*/ 37, /*->594*/
/*557*/       OPC_CheckInteger, 60|128,19/*2492*/, 
/*560*/       OPC_MoveParent,
/*561*/       OPC_RecordChild2, // #1 = $b
/*562*/       OPC_Scope, 19, /*->583*/ // 2 children in Scope
/*564*/         OPC_MoveChild, 2,
/*566*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*569*/         OPC_CheckPredicate, 13, // Predicate_immZExt4
/*571*/         OPC_MoveParent,
/*572*/         OPC_EmitMergeInputChains1_0,
/*573*/         OPC_EmitConvertToTarget, 1,
/*575*/         OPC_MorphNodeTo, TARGET_VAL(MBlaze::CGET), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
                // Src: (intrinsic_w_chain:i32 2492:iPTR, (imm:i32)<<P:Predicate_immZExt4>>:$b) - Complexity = 12
                // Dst: (CGET:i32 (imm:i32):$b)
/*583*/       /*Scope*/ 9, /*->593*/
/*584*/         OPC_EmitMergeInputChains1_0,
/*585*/         OPC_MorphNodeTo, TARGET_VAL(MBlaze::CGETD), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (intrinsic_w_chain:i32 2492:iPTR, GPR:i32:$b) - Complexity = 8
                // Dst: (CGETD:i32 GPR:i32:$b)
/*593*/       0, /*End of Scope*/
/*594*/     /*Scope*/ 37, /*->632*/
/*595*/       OPC_CheckInteger, 58|128,19/*2490*/, 
/*598*/       OPC_MoveParent,
/*599*/       OPC_RecordChild2, // #1 = $b
/*600*/       OPC_Scope, 19, /*->621*/ // 2 children in Scope
/*602*/         OPC_MoveChild, 2,
/*604*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*607*/         OPC_CheckPredicate, 13, // Predicate_immZExt4
/*609*/         OPC_MoveParent,
/*610*/         OPC_EmitMergeInputChains1_0,
/*611*/         OPC_EmitConvertToTarget, 1,
/*613*/         OPC_MorphNodeTo, TARGET_VAL(MBlaze::CAGET), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
                // Src: (intrinsic_w_chain:i32 2490:iPTR, (imm:i32)<<P:Predicate_immZExt4>>:$b) - Complexity = 12
                // Dst: (CAGET:i32 (imm:i32):$b)
/*621*/       /*Scope*/ 9, /*->631*/
/*622*/         OPC_EmitMergeInputChains1_0,
/*623*/         OPC_MorphNodeTo, TARGET_VAL(MBlaze::CAGETD), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (intrinsic_w_chain:i32 2490:iPTR, GPR:i32:$b) - Complexity = 8
                // Dst: (CAGETD:i32 GPR:i32:$b)
/*631*/       0, /*End of Scope*/
/*632*/     /*Scope*/ 37, /*->670*/
/*633*/       OPC_CheckInteger, 65|128,19/*2497*/, 
/*636*/       OPC_MoveParent,
/*637*/       OPC_RecordChild2, // #1 = $b
/*638*/       OPC_Scope, 19, /*->659*/ // 2 children in Scope
/*640*/         OPC_MoveChild, 2,
/*642*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*645*/         OPC_CheckPredicate, 13, // Predicate_immZExt4
/*647*/         OPC_MoveParent,
/*648*/         OPC_EmitMergeInputChains1_0,
/*649*/         OPC_EmitConvertToTarget, 1,
/*651*/         OPC_MorphNodeTo, TARGET_VAL(MBlaze::EGET), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
                // Src: (intrinsic_w_chain:i32 2497:iPTR, (imm:i32)<<P:Predicate_immZExt4>>:$b) - Complexity = 12
                // Dst: (EGET:i32 (imm:i32):$b)
/*659*/       /*Scope*/ 9, /*->669*/
/*660*/         OPC_EmitMergeInputChains1_0,
/*661*/         OPC_MorphNodeTo, TARGET_VAL(MBlaze::EGETD), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (intrinsic_w_chain:i32 2497:iPTR, GPR:i32:$b) - Complexity = 8
                // Dst: (EGETD:i32 GPR:i32:$b)
/*669*/       0, /*End of Scope*/
/*670*/     /*Scope*/ 37, /*->708*/
/*671*/       OPC_CheckInteger, 62|128,19/*2494*/, 
/*674*/       OPC_MoveParent,
/*675*/       OPC_RecordChild2, // #1 = $b
/*676*/       OPC_Scope, 19, /*->697*/ // 2 children in Scope
/*678*/         OPC_MoveChild, 2,
/*680*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*683*/         OPC_CheckPredicate, 13, // Predicate_immZExt4
/*685*/         OPC_MoveParent,
/*686*/         OPC_EmitMergeInputChains1_0,
/*687*/         OPC_EmitConvertToTarget, 1,
/*689*/         OPC_MorphNodeTo, TARGET_VAL(MBlaze::EAGET), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
                // Src: (intrinsic_w_chain:i32 2494:iPTR, (imm:i32)<<P:Predicate_immZExt4>>:$b) - Complexity = 12
                // Dst: (EAGET:i32 (imm:i32):$b)
/*697*/       /*Scope*/ 9, /*->707*/
/*698*/         OPC_EmitMergeInputChains1_0,
/*699*/         OPC_MorphNodeTo, TARGET_VAL(MBlaze::EAGETD), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (intrinsic_w_chain:i32 2494:iPTR, GPR:i32:$b) - Complexity = 8
                // Dst: (EAGETD:i32 GPR:i32:$b)
/*707*/       0, /*End of Scope*/
/*708*/     /*Scope*/ 37, /*->746*/
/*709*/       OPC_CheckInteger, 64|128,19/*2496*/, 
/*712*/       OPC_MoveParent,
/*713*/       OPC_RecordChild2, // #1 = $b
/*714*/       OPC_Scope, 19, /*->735*/ // 2 children in Scope
/*716*/         OPC_MoveChild, 2,
/*718*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*721*/         OPC_CheckPredicate, 13, // Predicate_immZExt4
/*723*/         OPC_MoveParent,
/*724*/         OPC_EmitMergeInputChains1_0,
/*725*/         OPC_EmitConvertToTarget, 1,
/*727*/         OPC_MorphNodeTo, TARGET_VAL(MBlaze::ECGET), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
                // Src: (intrinsic_w_chain:i32 2496:iPTR, (imm:i32)<<P:Predicate_immZExt4>>:$b) - Complexity = 12
                // Dst: (ECGET:i32 (imm:i32):$b)
/*735*/       /*Scope*/ 9, /*->745*/
/*736*/         OPC_EmitMergeInputChains1_0,
/*737*/         OPC_MorphNodeTo, TARGET_VAL(MBlaze::ECGETD), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (intrinsic_w_chain:i32 2496:iPTR, GPR:i32:$b) - Complexity = 8
                // Dst: (ECGETD:i32 GPR:i32:$b)
/*745*/       0, /*End of Scope*/
/*746*/     /*Scope*/ 37, /*->784*/
/*747*/       OPC_CheckInteger, 63|128,19/*2495*/, 
/*750*/       OPC_MoveParent,
/*751*/       OPC_RecordChild2, // #1 = $b
/*752*/       OPC_Scope, 19, /*->773*/ // 2 children in Scope
/*754*/         OPC_MoveChild, 2,
/*756*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*759*/         OPC_CheckPredicate, 13, // Predicate_immZExt4
/*761*/         OPC_MoveParent,
/*762*/         OPC_EmitMergeInputChains1_0,
/*763*/         OPC_EmitConvertToTarget, 1,
/*765*/         OPC_MorphNodeTo, TARGET_VAL(MBlaze::ECAGET), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
                // Src: (intrinsic_w_chain:i32 2495:iPTR, (imm:i32)<<P:Predicate_immZExt4>>:$b) - Complexity = 12
                // Dst: (ECAGET:i32 (imm:i32):$b)
/*773*/       /*Scope*/ 9, /*->783*/
/*774*/         OPC_EmitMergeInputChains1_0,
/*775*/         OPC_MorphNodeTo, TARGET_VAL(MBlaze::ECAGETD), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (intrinsic_w_chain:i32 2495:iPTR, GPR:i32:$b) - Complexity = 8
                // Dst: (ECAGETD:i32 GPR:i32:$b)
/*783*/       0, /*End of Scope*/
/*784*/     /*Scope*/ 37, /*->822*/
/*785*/       OPC_CheckInteger, 90|128,19/*2522*/, 
/*788*/       OPC_MoveParent,
/*789*/       OPC_RecordChild2, // #1 = $b
/*790*/       OPC_Scope, 19, /*->811*/ // 2 children in Scope
/*792*/         OPC_MoveChild, 2,
/*794*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*797*/         OPC_CheckPredicate, 13, // Predicate_immZExt4
/*799*/         OPC_MoveParent,
/*800*/         OPC_EmitMergeInputChains1_0,
/*801*/         OPC_EmitConvertToTarget, 1,
/*803*/         OPC_MorphNodeTo, TARGET_VAL(MBlaze::TGET), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
                // Src: (intrinsic_w_chain:i32 2522:iPTR, (imm:i32)<<P:Predicate_immZExt4>>:$b) - Complexity = 12
                // Dst: (TGET:i32 (imm:i32):$b)
/*811*/       /*Scope*/ 9, /*->821*/
/*812*/         OPC_EmitMergeInputChains1_0,
/*813*/         OPC_MorphNodeTo, TARGET_VAL(MBlaze::TGETD), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (intrinsic_w_chain:i32 2522:iPTR, GPR:i32:$b) - Complexity = 8
                // Dst: (TGETD:i32 GPR:i32:$b)
/*821*/       0, /*End of Scope*/
/*822*/     /*Scope*/ 37, /*->860*/
/*823*/       OPC_CheckInteger, 80|128,19/*2512*/, 
/*826*/       OPC_MoveParent,
/*827*/       OPC_RecordChild2, // #1 = $b
/*828*/       OPC_Scope, 19, /*->849*/ // 2 children in Scope
/*830*/         OPC_MoveChild, 2,
/*832*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*835*/         OPC_CheckPredicate, 13, // Predicate_immZExt4
/*837*/         OPC_MoveParent,
/*838*/         OPC_EmitMergeInputChains1_0,
/*839*/         OPC_EmitConvertToTarget, 1,
/*841*/         OPC_MorphNodeTo, TARGET_VAL(MBlaze::TAGET), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
                // Src: (intrinsic_w_chain:i32 2512:iPTR, (imm:i32)<<P:Predicate_immZExt4>>:$b) - Complexity = 12
                // Dst: (TAGET:i32 (imm:i32):$b)
/*849*/       /*Scope*/ 9, /*->859*/
/*850*/         OPC_EmitMergeInputChains1_0,
/*851*/         OPC_MorphNodeTo, TARGET_VAL(MBlaze::TAGETD), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (intrinsic_w_chain:i32 2512:iPTR, GPR:i32:$b) - Complexity = 8
                // Dst: (TAGETD:i32 GPR:i32:$b)
/*859*/       0, /*End of Scope*/
/*860*/     /*Scope*/ 37, /*->898*/
/*861*/       OPC_CheckInteger, 84|128,19/*2516*/, 
/*864*/       OPC_MoveParent,
/*865*/       OPC_RecordChild2, // #1 = $b
/*866*/       OPC_Scope, 19, /*->887*/ // 2 children in Scope
/*868*/         OPC_MoveChild, 2,
/*870*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*873*/         OPC_CheckPredicate, 13, // Predicate_immZExt4
/*875*/         OPC_MoveParent,
/*876*/         OPC_EmitMergeInputChains1_0,
/*877*/         OPC_EmitConvertToTarget, 1,
/*879*/         OPC_MorphNodeTo, TARGET_VAL(MBlaze::TCGET), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
                // Src: (intrinsic_w_chain:i32 2516:iPTR, (imm:i32)<<P:Predicate_immZExt4>>:$b) - Complexity = 12
                // Dst: (TCGET:i32 (imm:i32):$b)
/*887*/       /*Scope*/ 9, /*->897*/
/*888*/         OPC_EmitMergeInputChains1_0,
/*889*/         OPC_MorphNodeTo, TARGET_VAL(MBlaze::TCGETD), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (intrinsic_w_chain:i32 2516:iPTR, GPR:i32:$b) - Complexity = 8
                // Dst: (TCGETD:i32 GPR:i32:$b)
/*897*/       0, /*End of Scope*/
/*898*/     /*Scope*/ 37, /*->936*/
/*899*/       OPC_CheckInteger, 82|128,19/*2514*/, 
/*902*/       OPC_MoveParent,
/*903*/       OPC_RecordChild2, // #1 = $b
/*904*/       OPC_Scope, 19, /*->925*/ // 2 children in Scope
/*906*/         OPC_MoveChild, 2,
/*908*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*911*/         OPC_CheckPredicate, 13, // Predicate_immZExt4
/*913*/         OPC_MoveParent,
/*914*/         OPC_EmitMergeInputChains1_0,
/*915*/         OPC_EmitConvertToTarget, 1,
/*917*/         OPC_MorphNodeTo, TARGET_VAL(MBlaze::TCAGET), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
                // Src: (intrinsic_w_chain:i32 2514:iPTR, (imm:i32)<<P:Predicate_immZExt4>>:$b) - Complexity = 12
                // Dst: (TCAGET:i32 (imm:i32):$b)
/*925*/       /*Scope*/ 9, /*->935*/
/*926*/         OPC_EmitMergeInputChains1_0,
/*927*/         OPC_MorphNodeTo, TARGET_VAL(MBlaze::TCAGETD), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (intrinsic_w_chain:i32 2514:iPTR, GPR:i32:$b) - Complexity = 8
                // Dst: (TCAGETD:i32 GPR:i32:$b)
/*935*/       0, /*End of Scope*/
/*936*/     /*Scope*/ 37, /*->974*/
/*937*/       OPC_CheckInteger, 89|128,19/*2521*/, 
/*940*/       OPC_MoveParent,
/*941*/       OPC_RecordChild2, // #1 = $b
/*942*/       OPC_Scope, 19, /*->963*/ // 2 children in Scope
/*944*/         OPC_MoveChild, 2,
/*946*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*949*/         OPC_CheckPredicate, 13, // Predicate_immZExt4
/*951*/         OPC_MoveParent,
/*952*/         OPC_EmitMergeInputChains1_0,
/*953*/         OPC_EmitConvertToTarget, 1,
/*955*/         OPC_MorphNodeTo, TARGET_VAL(MBlaze::TEGET), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
                // Src: (intrinsic_w_chain:i32 2521:iPTR, (imm:i32)<<P:Predicate_immZExt4>>:$b) - Complexity = 12
                // Dst: (TEGET:i32 (imm:i32):$b)
/*963*/       /*Scope*/ 9, /*->973*/
/*964*/         OPC_EmitMergeInputChains1_0,
/*965*/         OPC_MorphNodeTo, TARGET_VAL(MBlaze::TEGETD), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (intrinsic_w_chain:i32 2521:iPTR, GPR:i32:$b) - Complexity = 8
                // Dst: (TEGETD:i32 GPR:i32:$b)
/*973*/       0, /*End of Scope*/
/*974*/     /*Scope*/ 37, /*->1012*/
/*975*/       OPC_CheckInteger, 86|128,19/*2518*/, 
/*978*/       OPC_MoveParent,
/*979*/       OPC_RecordChild2, // #1 = $b
/*980*/       OPC_Scope, 19, /*->1001*/ // 2 children in Scope
/*982*/         OPC_MoveChild, 2,
/*984*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*987*/         OPC_CheckPredicate, 13, // Predicate_immZExt4
/*989*/         OPC_MoveParent,
/*990*/         OPC_EmitMergeInputChains1_0,
/*991*/         OPC_EmitConvertToTarget, 1,
/*993*/         OPC_MorphNodeTo, TARGET_VAL(MBlaze::TEAGET), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
                // Src: (intrinsic_w_chain:i32 2518:iPTR, (imm:i32)<<P:Predicate_immZExt4>>:$b) - Complexity = 12
                // Dst: (TEAGET:i32 (imm:i32):$b)
/*1001*/      /*Scope*/ 9, /*->1011*/
/*1002*/        OPC_EmitMergeInputChains1_0,
/*1003*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::TEAGETD), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (intrinsic_w_chain:i32 2518:iPTR, GPR:i32:$b) - Complexity = 8
                // Dst: (TEAGETD:i32 GPR:i32:$b)
/*1011*/      0, /*End of Scope*/
/*1012*/    /*Scope*/ 37, /*->1050*/
/*1013*/      OPC_CheckInteger, 88|128,19/*2520*/, 
/*1016*/      OPC_MoveParent,
/*1017*/      OPC_RecordChild2, // #1 = $b
/*1018*/      OPC_Scope, 19, /*->1039*/ // 2 children in Scope
/*1020*/        OPC_MoveChild, 2,
/*1022*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1025*/        OPC_CheckPredicate, 13, // Predicate_immZExt4
/*1027*/        OPC_MoveParent,
/*1028*/        OPC_EmitMergeInputChains1_0,
/*1029*/        OPC_EmitConvertToTarget, 1,
/*1031*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::TECGET), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
                // Src: (intrinsic_w_chain:i32 2520:iPTR, (imm:i32)<<P:Predicate_immZExt4>>:$b) - Complexity = 12
                // Dst: (TECGET:i32 (imm:i32):$b)
/*1039*/      /*Scope*/ 9, /*->1049*/
/*1040*/        OPC_EmitMergeInputChains1_0,
/*1041*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::TECGETD), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (intrinsic_w_chain:i32 2520:iPTR, GPR:i32:$b) - Complexity = 8
                // Dst: (TECGETD:i32 GPR:i32:$b)
/*1049*/      0, /*End of Scope*/
/*1050*/    /*Scope*/ 37, /*->1088*/
/*1051*/      OPC_CheckInteger, 87|128,19/*2519*/, 
/*1054*/      OPC_MoveParent,
/*1055*/      OPC_RecordChild2, // #1 = $b
/*1056*/      OPC_Scope, 19, /*->1077*/ // 2 children in Scope
/*1058*/        OPC_MoveChild, 2,
/*1060*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1063*/        OPC_CheckPredicate, 13, // Predicate_immZExt4
/*1065*/        OPC_MoveParent,
/*1066*/        OPC_EmitMergeInputChains1_0,
/*1067*/        OPC_EmitConvertToTarget, 1,
/*1069*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::TECAGET), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
                // Src: (intrinsic_w_chain:i32 2519:iPTR, (imm:i32)<<P:Predicate_immZExt4>>:$b) - Complexity = 12
                // Dst: (TECAGET:i32 (imm:i32):$b)
/*1077*/      /*Scope*/ 9, /*->1087*/
/*1078*/        OPC_EmitMergeInputChains1_0,
/*1079*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::TECAGETD), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (intrinsic_w_chain:i32 2519:iPTR, GPR:i32:$b) - Complexity = 8
                // Dst: (TECAGETD:i32 GPR:i32:$b)
/*1087*/      0, /*End of Scope*/
/*1088*/    /*Scope*/ 39, /*->1128*/
/*1089*/      OPC_CheckInteger, 77|128,19/*2509*/, 
/*1092*/      OPC_MoveParent,
/*1093*/      OPC_RecordChild2, // #1 = $b
/*1094*/      OPC_Scope, 20, /*->1116*/ // 2 children in Scope
/*1096*/        OPC_MoveChild, 2,
/*1098*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1101*/        OPC_CheckPredicate, 13, // Predicate_immZExt4
/*1103*/        OPC_MoveParent,
/*1104*/        OPC_EmitMergeInputChains1_0,
/*1105*/        OPC_EmitConvertToTarget, 1,
/*1107*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::NGET), 0|OPFL_Chain,
                    2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 2, 
                // Src: (intrinsic_w_chain:i32 2509:iPTR, (imm:i32)<<P:Predicate_immZExt4>>:$b) - Complexity = 12
                // Dst: (NGET:i32:i32 (imm:i32):$b)
/*1116*/      /*Scope*/ 10, /*->1127*/
/*1117*/        OPC_EmitMergeInputChains1_0,
/*1118*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::NGETD), 0|OPFL_Chain,
                    2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (intrinsic_w_chain:i32 2509:iPTR, GPR:i32:$b) - Complexity = 8
                // Dst: (NGETD:i32:i32 GPR:i32:$b)
/*1127*/      0, /*End of Scope*/
/*1128*/    /*Scope*/ 39, /*->1168*/
/*1129*/      OPC_CheckInteger, 67|128,19/*2499*/, 
/*1132*/      OPC_MoveParent,
/*1133*/      OPC_RecordChild2, // #1 = $b
/*1134*/      OPC_Scope, 20, /*->1156*/ // 2 children in Scope
/*1136*/        OPC_MoveChild, 2,
/*1138*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1141*/        OPC_CheckPredicate, 13, // Predicate_immZExt4
/*1143*/        OPC_MoveParent,
/*1144*/        OPC_EmitMergeInputChains1_0,
/*1145*/        OPC_EmitConvertToTarget, 1,
/*1147*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::NAGET), 0|OPFL_Chain,
                    2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 2, 
                // Src: (intrinsic_w_chain:i32 2499:iPTR, (imm:i32)<<P:Predicate_immZExt4>>:$b) - Complexity = 12
                // Dst: (NAGET:i32:i32 (imm:i32):$b)
/*1156*/      /*Scope*/ 10, /*->1167*/
/*1157*/        OPC_EmitMergeInputChains1_0,
/*1158*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::NAGETD), 0|OPFL_Chain,
                    2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (intrinsic_w_chain:i32 2499:iPTR, GPR:i32:$b) - Complexity = 8
                // Dst: (NAGETD:i32:i32 GPR:i32:$b)
/*1167*/      0, /*End of Scope*/
/*1168*/    /*Scope*/ 39, /*->1208*/
/*1169*/      OPC_CheckInteger, 71|128,19/*2503*/, 
/*1172*/      OPC_MoveParent,
/*1173*/      OPC_RecordChild2, // #1 = $b
/*1174*/      OPC_Scope, 20, /*->1196*/ // 2 children in Scope
/*1176*/        OPC_MoveChild, 2,
/*1178*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1181*/        OPC_CheckPredicate, 13, // Predicate_immZExt4
/*1183*/        OPC_MoveParent,
/*1184*/        OPC_EmitMergeInputChains1_0,
/*1185*/        OPC_EmitConvertToTarget, 1,
/*1187*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::NCGET), 0|OPFL_Chain,
                    2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 2, 
                // Src: (intrinsic_w_chain:i32 2503:iPTR, (imm:i32)<<P:Predicate_immZExt4>>:$b) - Complexity = 12
                // Dst: (NCGET:i32:i32 (imm:i32):$b)
/*1196*/      /*Scope*/ 10, /*->1207*/
/*1197*/        OPC_EmitMergeInputChains1_0,
/*1198*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::NCGETD), 0|OPFL_Chain,
                    2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (intrinsic_w_chain:i32 2503:iPTR, GPR:i32:$b) - Complexity = 8
                // Dst: (NCGETD:i32:i32 GPR:i32:$b)
/*1207*/      0, /*End of Scope*/
/*1208*/    /*Scope*/ 39, /*->1248*/
/*1209*/      OPC_CheckInteger, 69|128,19/*2501*/, 
/*1212*/      OPC_MoveParent,
/*1213*/      OPC_RecordChild2, // #1 = $b
/*1214*/      OPC_Scope, 20, /*->1236*/ // 2 children in Scope
/*1216*/        OPC_MoveChild, 2,
/*1218*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1221*/        OPC_CheckPredicate, 13, // Predicate_immZExt4
/*1223*/        OPC_MoveParent,
/*1224*/        OPC_EmitMergeInputChains1_0,
/*1225*/        OPC_EmitConvertToTarget, 1,
/*1227*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::NCAGET), 0|OPFL_Chain,
                    2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 2, 
                // Src: (intrinsic_w_chain:i32 2501:iPTR, (imm:i32)<<P:Predicate_immZExt4>>:$b) - Complexity = 12
                // Dst: (NCAGET:i32:i32 (imm:i32):$b)
/*1236*/      /*Scope*/ 10, /*->1247*/
/*1237*/        OPC_EmitMergeInputChains1_0,
/*1238*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::NCAGETD), 0|OPFL_Chain,
                    2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (intrinsic_w_chain:i32 2501:iPTR, GPR:i32:$b) - Complexity = 8
                // Dst: (NCAGETD:i32:i32 GPR:i32:$b)
/*1247*/      0, /*End of Scope*/
/*1248*/    /*Scope*/ 39, /*->1288*/
/*1249*/      OPC_CheckInteger, 76|128,19/*2508*/, 
/*1252*/      OPC_MoveParent,
/*1253*/      OPC_RecordChild2, // #1 = $b
/*1254*/      OPC_Scope, 20, /*->1276*/ // 2 children in Scope
/*1256*/        OPC_MoveChild, 2,
/*1258*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1261*/        OPC_CheckPredicate, 13, // Predicate_immZExt4
/*1263*/        OPC_MoveParent,
/*1264*/        OPC_EmitMergeInputChains1_0,
/*1265*/        OPC_EmitConvertToTarget, 1,
/*1267*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::NEGET), 0|OPFL_Chain,
                    2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 2, 
                // Src: (intrinsic_w_chain:i32 2508:iPTR, (imm:i32)<<P:Predicate_immZExt4>>:$b) - Complexity = 12
                // Dst: (NEGET:i32:i32 (imm:i32):$b)
/*1276*/      /*Scope*/ 10, /*->1287*/
/*1277*/        OPC_EmitMergeInputChains1_0,
/*1278*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::NEGETD), 0|OPFL_Chain,
                    2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (intrinsic_w_chain:i32 2508:iPTR, GPR:i32:$b) - Complexity = 8
                // Dst: (NEGETD:i32:i32 GPR:i32:$b)
/*1287*/      0, /*End of Scope*/
/*1288*/    /*Scope*/ 39, /*->1328*/
/*1289*/      OPC_CheckInteger, 73|128,19/*2505*/, 
/*1292*/      OPC_MoveParent,
/*1293*/      OPC_RecordChild2, // #1 = $b
/*1294*/      OPC_Scope, 20, /*->1316*/ // 2 children in Scope
/*1296*/        OPC_MoveChild, 2,
/*1298*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1301*/        OPC_CheckPredicate, 13, // Predicate_immZExt4
/*1303*/        OPC_MoveParent,
/*1304*/        OPC_EmitMergeInputChains1_0,
/*1305*/        OPC_EmitConvertToTarget, 1,
/*1307*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::NEAGET), 0|OPFL_Chain,
                    2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 2, 
                // Src: (intrinsic_w_chain:i32 2505:iPTR, (imm:i32)<<P:Predicate_immZExt4>>:$b) - Complexity = 12
                // Dst: (NEAGET:i32:i32 (imm:i32):$b)
/*1316*/      /*Scope*/ 10, /*->1327*/
/*1317*/        OPC_EmitMergeInputChains1_0,
/*1318*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::NEAGETD), 0|OPFL_Chain,
                    2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (intrinsic_w_chain:i32 2505:iPTR, GPR:i32:$b) - Complexity = 8
                // Dst: (NEAGETD:i32:i32 GPR:i32:$b)
/*1327*/      0, /*End of Scope*/
/*1328*/    /*Scope*/ 39, /*->1368*/
/*1329*/      OPC_CheckInteger, 75|128,19/*2507*/, 
/*1332*/      OPC_MoveParent,
/*1333*/      OPC_RecordChild2, // #1 = $b
/*1334*/      OPC_Scope, 20, /*->1356*/ // 2 children in Scope
/*1336*/        OPC_MoveChild, 2,
/*1338*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1341*/        OPC_CheckPredicate, 13, // Predicate_immZExt4
/*1343*/        OPC_MoveParent,
/*1344*/        OPC_EmitMergeInputChains1_0,
/*1345*/        OPC_EmitConvertToTarget, 1,
/*1347*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::NECGET), 0|OPFL_Chain,
                    2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 2, 
                // Src: (intrinsic_w_chain:i32 2507:iPTR, (imm:i32)<<P:Predicate_immZExt4>>:$b) - Complexity = 12
                // Dst: (NECGET:i32:i32 (imm:i32):$b)
/*1356*/      /*Scope*/ 10, /*->1367*/
/*1357*/        OPC_EmitMergeInputChains1_0,
/*1358*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::NECGETD), 0|OPFL_Chain,
                    2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (intrinsic_w_chain:i32 2507:iPTR, GPR:i32:$b) - Complexity = 8
                // Dst: (NECGETD:i32:i32 GPR:i32:$b)
/*1367*/      0, /*End of Scope*/
/*1368*/    /*Scope*/ 39, /*->1408*/
/*1369*/      OPC_CheckInteger, 74|128,19/*2506*/, 
/*1372*/      OPC_MoveParent,
/*1373*/      OPC_RecordChild2, // #1 = $b
/*1374*/      OPC_Scope, 20, /*->1396*/ // 2 children in Scope
/*1376*/        OPC_MoveChild, 2,
/*1378*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1381*/        OPC_CheckPredicate, 13, // Predicate_immZExt4
/*1383*/        OPC_MoveParent,
/*1384*/        OPC_EmitMergeInputChains1_0,
/*1385*/        OPC_EmitConvertToTarget, 1,
/*1387*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::NECAGET), 0|OPFL_Chain,
                    2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 2, 
                // Src: (intrinsic_w_chain:i32 2506:iPTR, (imm:i32)<<P:Predicate_immZExt4>>:$b) - Complexity = 12
                // Dst: (NECAGET:i32:i32 (imm:i32):$b)
/*1396*/      /*Scope*/ 10, /*->1407*/
/*1397*/        OPC_EmitMergeInputChains1_0,
/*1398*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::NECAGETD), 0|OPFL_Chain,
                    2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (intrinsic_w_chain:i32 2506:iPTR, GPR:i32:$b) - Complexity = 8
                // Dst: (NECAGETD:i32:i32 GPR:i32:$b)
/*1407*/      0, /*End of Scope*/
/*1408*/    /*Scope*/ 39, /*->1448*/
/*1409*/      OPC_CheckInteger, 101|128,19/*2533*/, 
/*1412*/      OPC_MoveParent,
/*1413*/      OPC_RecordChild2, // #1 = $b
/*1414*/      OPC_Scope, 20, /*->1436*/ // 2 children in Scope
/*1416*/        OPC_MoveChild, 2,
/*1418*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1421*/        OPC_CheckPredicate, 13, // Predicate_immZExt4
/*1423*/        OPC_MoveParent,
/*1424*/        OPC_EmitMergeInputChains1_0,
/*1425*/        OPC_EmitConvertToTarget, 1,
/*1427*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::TNGET), 0|OPFL_Chain,
                    2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 2, 
                // Src: (intrinsic_w_chain:i32 2533:iPTR, (imm:i32)<<P:Predicate_immZExt4>>:$b) - Complexity = 12
                // Dst: (TNGET:i32:i32 (imm:i32):$b)
/*1436*/      /*Scope*/ 10, /*->1447*/
/*1437*/        OPC_EmitMergeInputChains1_0,
/*1438*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::TNGETD), 0|OPFL_Chain,
                    2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (intrinsic_w_chain:i32 2533:iPTR, GPR:i32:$b) - Complexity = 8
                // Dst: (TNGETD:i32:i32 GPR:i32:$b)
/*1447*/      0, /*End of Scope*/
/*1448*/    /*Scope*/ 39, /*->1488*/
/*1449*/      OPC_CheckInteger, 91|128,19/*2523*/, 
/*1452*/      OPC_MoveParent,
/*1453*/      OPC_RecordChild2, // #1 = $b
/*1454*/      OPC_Scope, 20, /*->1476*/ // 2 children in Scope
/*1456*/        OPC_MoveChild, 2,
/*1458*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1461*/        OPC_CheckPredicate, 13, // Predicate_immZExt4
/*1463*/        OPC_MoveParent,
/*1464*/        OPC_EmitMergeInputChains1_0,
/*1465*/        OPC_EmitConvertToTarget, 1,
/*1467*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::TNAGET), 0|OPFL_Chain,
                    2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 2, 
                // Src: (intrinsic_w_chain:i32 2523:iPTR, (imm:i32)<<P:Predicate_immZExt4>>:$b) - Complexity = 12
                // Dst: (TNAGET:i32:i32 (imm:i32):$b)
/*1476*/      /*Scope*/ 10, /*->1487*/
/*1477*/        OPC_EmitMergeInputChains1_0,
/*1478*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::TNAGETD), 0|OPFL_Chain,
                    2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (intrinsic_w_chain:i32 2523:iPTR, GPR:i32:$b) - Complexity = 8
                // Dst: (TNAGETD:i32:i32 GPR:i32:$b)
/*1487*/      0, /*End of Scope*/
/*1488*/    /*Scope*/ 39, /*->1528*/
/*1489*/      OPC_CheckInteger, 95|128,19/*2527*/, 
/*1492*/      OPC_MoveParent,
/*1493*/      OPC_RecordChild2, // #1 = $b
/*1494*/      OPC_Scope, 20, /*->1516*/ // 2 children in Scope
/*1496*/        OPC_MoveChild, 2,
/*1498*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1501*/        OPC_CheckPredicate, 13, // Predicate_immZExt4
/*1503*/        OPC_MoveParent,
/*1504*/        OPC_EmitMergeInputChains1_0,
/*1505*/        OPC_EmitConvertToTarget, 1,
/*1507*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::TNCGET), 0|OPFL_Chain,
                    2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 2, 
                // Src: (intrinsic_w_chain:i32 2527:iPTR, (imm:i32)<<P:Predicate_immZExt4>>:$b) - Complexity = 12
                // Dst: (TNCGET:i32:i32 (imm:i32):$b)
/*1516*/      /*Scope*/ 10, /*->1527*/
/*1517*/        OPC_EmitMergeInputChains1_0,
/*1518*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::TNCGETD), 0|OPFL_Chain,
                    2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (intrinsic_w_chain:i32 2527:iPTR, GPR:i32:$b) - Complexity = 8
                // Dst: (TNCGETD:i32:i32 GPR:i32:$b)
/*1527*/      0, /*End of Scope*/
/*1528*/    /*Scope*/ 39, /*->1568*/
/*1529*/      OPC_CheckInteger, 93|128,19/*2525*/, 
/*1532*/      OPC_MoveParent,
/*1533*/      OPC_RecordChild2, // #1 = $b
/*1534*/      OPC_Scope, 20, /*->1556*/ // 2 children in Scope
/*1536*/        OPC_MoveChild, 2,
/*1538*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1541*/        OPC_CheckPredicate, 13, // Predicate_immZExt4
/*1543*/        OPC_MoveParent,
/*1544*/        OPC_EmitMergeInputChains1_0,
/*1545*/        OPC_EmitConvertToTarget, 1,
/*1547*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::TNCAGET), 0|OPFL_Chain,
                    2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 2, 
                // Src: (intrinsic_w_chain:i32 2525:iPTR, (imm:i32)<<P:Predicate_immZExt4>>:$b) - Complexity = 12
                // Dst: (TNCAGET:i32:i32 (imm:i32):$b)
/*1556*/      /*Scope*/ 10, /*->1567*/
/*1557*/        OPC_EmitMergeInputChains1_0,
/*1558*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::TNCAGETD), 0|OPFL_Chain,
                    2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (intrinsic_w_chain:i32 2525:iPTR, GPR:i32:$b) - Complexity = 8
                // Dst: (TNCAGETD:i32:i32 GPR:i32:$b)
/*1567*/      0, /*End of Scope*/
/*1568*/    /*Scope*/ 39, /*->1608*/
/*1569*/      OPC_CheckInteger, 100|128,19/*2532*/, 
/*1572*/      OPC_MoveParent,
/*1573*/      OPC_RecordChild2, // #1 = $b
/*1574*/      OPC_Scope, 20, /*->1596*/ // 2 children in Scope
/*1576*/        OPC_MoveChild, 2,
/*1578*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1581*/        OPC_CheckPredicate, 13, // Predicate_immZExt4
/*1583*/        OPC_MoveParent,
/*1584*/        OPC_EmitMergeInputChains1_0,
/*1585*/        OPC_EmitConvertToTarget, 1,
/*1587*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::TNEGET), 0|OPFL_Chain,
                    2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 2, 
                // Src: (intrinsic_w_chain:i32 2532:iPTR, (imm:i32)<<P:Predicate_immZExt4>>:$b) - Complexity = 12
                // Dst: (TNEGET:i32:i32 (imm:i32):$b)
/*1596*/      /*Scope*/ 10, /*->1607*/
/*1597*/        OPC_EmitMergeInputChains1_0,
/*1598*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::TNEGETD), 0|OPFL_Chain,
                    2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (intrinsic_w_chain:i32 2532:iPTR, GPR:i32:$b) - Complexity = 8
                // Dst: (TNEGETD:i32:i32 GPR:i32:$b)
/*1607*/      0, /*End of Scope*/
/*1608*/    /*Scope*/ 39, /*->1648*/
/*1609*/      OPC_CheckInteger, 97|128,19/*2529*/, 
/*1612*/      OPC_MoveParent,
/*1613*/      OPC_RecordChild2, // #1 = $b
/*1614*/      OPC_Scope, 20, /*->1636*/ // 2 children in Scope
/*1616*/        OPC_MoveChild, 2,
/*1618*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1621*/        OPC_CheckPredicate, 13, // Predicate_immZExt4
/*1623*/        OPC_MoveParent,
/*1624*/        OPC_EmitMergeInputChains1_0,
/*1625*/        OPC_EmitConvertToTarget, 1,
/*1627*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::TNEAGET), 0|OPFL_Chain,
                    2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 2, 
                // Src: (intrinsic_w_chain:i32 2529:iPTR, (imm:i32)<<P:Predicate_immZExt4>>:$b) - Complexity = 12
                // Dst: (TNEAGET:i32:i32 (imm:i32):$b)
/*1636*/      /*Scope*/ 10, /*->1647*/
/*1637*/        OPC_EmitMergeInputChains1_0,
/*1638*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::TNEAGETD), 0|OPFL_Chain,
                    2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (intrinsic_w_chain:i32 2529:iPTR, GPR:i32:$b) - Complexity = 8
                // Dst: (TNEAGETD:i32:i32 GPR:i32:$b)
/*1647*/      0, /*End of Scope*/
/*1648*/    /*Scope*/ 39, /*->1688*/
/*1649*/      OPC_CheckInteger, 99|128,19/*2531*/, 
/*1652*/      OPC_MoveParent,
/*1653*/      OPC_RecordChild2, // #1 = $b
/*1654*/      OPC_Scope, 20, /*->1676*/ // 2 children in Scope
/*1656*/        OPC_MoveChild, 2,
/*1658*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1661*/        OPC_CheckPredicate, 13, // Predicate_immZExt4
/*1663*/        OPC_MoveParent,
/*1664*/        OPC_EmitMergeInputChains1_0,
/*1665*/        OPC_EmitConvertToTarget, 1,
/*1667*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::TNECGET), 0|OPFL_Chain,
                    2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 2, 
                // Src: (intrinsic_w_chain:i32 2531:iPTR, (imm:i32)<<P:Predicate_immZExt4>>:$b) - Complexity = 12
                // Dst: (TNECGET:i32:i32 (imm:i32):$b)
/*1676*/      /*Scope*/ 10, /*->1687*/
/*1677*/        OPC_EmitMergeInputChains1_0,
/*1678*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::TNECGETD), 0|OPFL_Chain,
                    2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (intrinsic_w_chain:i32 2531:iPTR, GPR:i32:$b) - Complexity = 8
                // Dst: (TNECGETD:i32:i32 GPR:i32:$b)
/*1687*/      0, /*End of Scope*/
/*1688*/    /*Scope*/ 39, /*->1728*/
/*1689*/      OPC_CheckInteger, 98|128,19/*2530*/, 
/*1692*/      OPC_MoveParent,
/*1693*/      OPC_RecordChild2, // #1 = $b
/*1694*/      OPC_Scope, 20, /*->1716*/ // 2 children in Scope
/*1696*/        OPC_MoveChild, 2,
/*1698*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1701*/        OPC_CheckPredicate, 13, // Predicate_immZExt4
/*1703*/        OPC_MoveParent,
/*1704*/        OPC_EmitMergeInputChains1_0,
/*1705*/        OPC_EmitConvertToTarget, 1,
/*1707*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::TNECAGET), 0|OPFL_Chain,
                    2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 2, 
                // Src: (intrinsic_w_chain:i32 2530:iPTR, (imm:i32)<<P:Predicate_immZExt4>>:$b) - Complexity = 12
                // Dst: (TNECAGET:i32:i32 (imm:i32):$b)
/*1716*/      /*Scope*/ 10, /*->1727*/
/*1717*/        OPC_EmitMergeInputChains1_0,
/*1718*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::TNECAGETD), 0|OPFL_Chain,
                    2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (intrinsic_w_chain:i32 2530:iPTR, GPR:i32:$b) - Complexity = 8
                // Dst: (TNECAGETD:i32:i32 GPR:i32:$b)
/*1727*/      0, /*End of Scope*/
/*1728*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 109|128,4/*621*/,  TARGET_VAL(ISD::INTRINSIC_VOID),// ->2354
/*1733*/    OPC_RecordNode,   // #0 = 'intrinsic_void' chained node
/*1734*/    OPC_MoveChild, 1,
/*1736*/    OPC_Scope, 38, /*->1776*/ // 16 children in Scope
/*1738*/      OPC_CheckInteger, 79|128,19/*2511*/, 
/*1741*/      OPC_MoveParent,
/*1742*/      OPC_RecordChild2, // #1 = $v
/*1743*/      OPC_RecordChild3, // #2 = $b
/*1744*/      OPC_Scope, 19, /*->1765*/ // 2 children in Scope
/*1746*/        OPC_MoveChild, 3,
/*1748*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1751*/        OPC_CheckPredicate, 13, // Predicate_immZExt4
/*1753*/        OPC_MoveParent,
/*1754*/        OPC_EmitMergeInputChains1_0,
/*1755*/        OPC_EmitConvertToTarget, 2,
/*1757*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::PUT), 0|OPFL_Chain,
                    0/*#VTs*/, 2/*#Ops*/, 1, 3, 
                // Src: (intrinsic_void 2511:iPTR, GPR:i32:$v, (imm:i32)<<P:Predicate_immZExt4>>:$b) - Complexity = 12
                // Dst: (PUT GPR:i32:$v, (imm:i32):$b)
/*1765*/      /*Scope*/ 9, /*->1775*/
/*1766*/        OPC_EmitMergeInputChains1_0,
/*1767*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::PUTD), 0|OPFL_Chain,
                    0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                // Src: (intrinsic_void 2511:iPTR, GPR:i32:$v, GPR:i32:$b) - Complexity = 8
                // Dst: (PUTD GPR:i32:$v, GPR:i32:$b)
/*1775*/      0, /*End of Scope*/
/*1776*/    /*Scope*/ 38, /*->1815*/
/*1777*/      OPC_CheckInteger, 57|128,19/*2489*/, 
/*1780*/      OPC_MoveParent,
/*1781*/      OPC_RecordChild2, // #1 = $v
/*1782*/      OPC_RecordChild3, // #2 = $b
/*1783*/      OPC_Scope, 19, /*->1804*/ // 2 children in Scope
/*1785*/        OPC_MoveChild, 3,
/*1787*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1790*/        OPC_CheckPredicate, 13, // Predicate_immZExt4
/*1792*/        OPC_MoveParent,
/*1793*/        OPC_EmitMergeInputChains1_0,
/*1794*/        OPC_EmitConvertToTarget, 2,
/*1796*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::APUT), 0|OPFL_Chain,
                    0/*#VTs*/, 2/*#Ops*/, 1, 3, 
                // Src: (intrinsic_void 2489:iPTR, GPR:i32:$v, (imm:i32)<<P:Predicate_immZExt4>>:$b) - Complexity = 12
                // Dst: (APUT GPR:i32:$v, (imm:i32):$b)
/*1804*/      /*Scope*/ 9, /*->1814*/
/*1805*/        OPC_EmitMergeInputChains1_0,
/*1806*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::APUTD), 0|OPFL_Chain,
                    0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                // Src: (intrinsic_void 2489:iPTR, GPR:i32:$v, GPR:i32:$b) - Complexity = 8
                // Dst: (APUTD GPR:i32:$v, GPR:i32:$b)
/*1814*/      0, /*End of Scope*/
/*1815*/    /*Scope*/ 38, /*->1854*/
/*1816*/      OPC_CheckInteger, 61|128,19/*2493*/, 
/*1819*/      OPC_MoveParent,
/*1820*/      OPC_RecordChild2, // #1 = $v
/*1821*/      OPC_RecordChild3, // #2 = $b
/*1822*/      OPC_Scope, 19, /*->1843*/ // 2 children in Scope
/*1824*/        OPC_MoveChild, 3,
/*1826*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1829*/        OPC_CheckPredicate, 13, // Predicate_immZExt4
/*1831*/        OPC_MoveParent,
/*1832*/        OPC_EmitMergeInputChains1_0,
/*1833*/        OPC_EmitConvertToTarget, 2,
/*1835*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::CPUT), 0|OPFL_Chain,
                    0/*#VTs*/, 2/*#Ops*/, 1, 3, 
                // Src: (intrinsic_void 2493:iPTR, GPR:i32:$v, (imm:i32)<<P:Predicate_immZExt4>>:$b) - Complexity = 12
                // Dst: (CPUT GPR:i32:$v, (imm:i32):$b)
/*1843*/      /*Scope*/ 9, /*->1853*/
/*1844*/        OPC_EmitMergeInputChains1_0,
/*1845*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::CPUTD), 0|OPFL_Chain,
                    0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                // Src: (intrinsic_void 2493:iPTR, GPR:i32:$v, GPR:i32:$b) - Complexity = 8
                // Dst: (CPUTD GPR:i32:$v, GPR:i32:$b)
/*1853*/      0, /*End of Scope*/
/*1854*/    /*Scope*/ 38, /*->1893*/
/*1855*/      OPC_CheckInteger, 59|128,19/*2491*/, 
/*1858*/      OPC_MoveParent,
/*1859*/      OPC_RecordChild2, // #1 = $v
/*1860*/      OPC_RecordChild3, // #2 = $b
/*1861*/      OPC_Scope, 19, /*->1882*/ // 2 children in Scope
/*1863*/        OPC_MoveChild, 3,
/*1865*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1868*/        OPC_CheckPredicate, 13, // Predicate_immZExt4
/*1870*/        OPC_MoveParent,
/*1871*/        OPC_EmitMergeInputChains1_0,
/*1872*/        OPC_EmitConvertToTarget, 2,
/*1874*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::CAPUT), 0|OPFL_Chain,
                    0/*#VTs*/, 2/*#Ops*/, 1, 3, 
                // Src: (intrinsic_void 2491:iPTR, GPR:i32:$v, (imm:i32)<<P:Predicate_immZExt4>>:$b) - Complexity = 12
                // Dst: (CAPUT GPR:i32:$v, (imm:i32):$b)
/*1882*/      /*Scope*/ 9, /*->1892*/
/*1883*/        OPC_EmitMergeInputChains1_0,
/*1884*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::CAPUTD), 0|OPFL_Chain,
                    0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                // Src: (intrinsic_void 2491:iPTR, GPR:i32:$v, GPR:i32:$b) - Complexity = 8
                // Dst: (CAPUTD GPR:i32:$v, GPR:i32:$b)
/*1892*/      0, /*End of Scope*/
/*1893*/    /*Scope*/ 35, /*->1929*/
/*1894*/      OPC_CheckInteger, 103|128,19/*2535*/, 
/*1897*/      OPC_MoveParent,
/*1898*/      OPC_RecordChild2, // #1 = $b
/*1899*/      OPC_Scope, 18, /*->1919*/ // 2 children in Scope
/*1901*/        OPC_MoveChild, 2,
/*1903*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1906*/        OPC_CheckPredicate, 13, // Predicate_immZExt4
/*1908*/        OPC_MoveParent,
/*1909*/        OPC_EmitMergeInputChains1_0,
/*1910*/        OPC_EmitConvertToTarget, 1,
/*1912*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::TPUT), 0|OPFL_Chain,
                    0/*#VTs*/, 1/*#Ops*/, 2, 
                // Src: (intrinsic_void 2535:iPTR, (imm:i32)<<P:Predicate_immZExt4>>:$b) - Complexity = 12
                // Dst: (TPUT (imm:i32):$b)
/*1919*/      /*Scope*/ 8, /*->1928*/
/*1920*/        OPC_EmitMergeInputChains1_0,
/*1921*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::TPUTD), 0|OPFL_Chain,
                    0/*#VTs*/, 1/*#Ops*/, 1, 
                // Src: (intrinsic_void 2535:iPTR, GPR:i32:$b) - Complexity = 8
                // Dst: (TPUTD GPR:i32:$b)
/*1928*/      0, /*End of Scope*/
/*1929*/    /*Scope*/ 35, /*->1965*/
/*1930*/      OPC_CheckInteger, 81|128,19/*2513*/, 
/*1933*/      OPC_MoveParent,
/*1934*/      OPC_RecordChild2, // #1 = $b
/*1935*/      OPC_Scope, 18, /*->1955*/ // 2 children in Scope
/*1937*/        OPC_MoveChild, 2,
/*1939*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1942*/        OPC_CheckPredicate, 13, // Predicate_immZExt4
/*1944*/        OPC_MoveParent,
/*1945*/        OPC_EmitMergeInputChains1_0,
/*1946*/        OPC_EmitConvertToTarget, 1,
/*1948*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::TAPUT), 0|OPFL_Chain,
                    0/*#VTs*/, 1/*#Ops*/, 2, 
                // Src: (intrinsic_void 2513:iPTR, (imm:i32)<<P:Predicate_immZExt4>>:$b) - Complexity = 12
                // Dst: (TAPUT (imm:i32):$b)
/*1955*/      /*Scope*/ 8, /*->1964*/
/*1956*/        OPC_EmitMergeInputChains1_0,
/*1957*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::TAPUTD), 0|OPFL_Chain,
                    0/*#VTs*/, 1/*#Ops*/, 1, 
                // Src: (intrinsic_void 2513:iPTR, GPR:i32:$b) - Complexity = 8
                // Dst: (TAPUTD GPR:i32:$b)
/*1964*/      0, /*End of Scope*/
/*1965*/    /*Scope*/ 35, /*->2001*/
/*1966*/      OPC_CheckInteger, 85|128,19/*2517*/, 
/*1969*/      OPC_MoveParent,
/*1970*/      OPC_RecordChild2, // #1 = $b
/*1971*/      OPC_Scope, 18, /*->1991*/ // 2 children in Scope
/*1973*/        OPC_MoveChild, 2,
/*1975*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1978*/        OPC_CheckPredicate, 13, // Predicate_immZExt4
/*1980*/        OPC_MoveParent,
/*1981*/        OPC_EmitMergeInputChains1_0,
/*1982*/        OPC_EmitConvertToTarget, 1,
/*1984*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::TCPUT), 0|OPFL_Chain,
                    0/*#VTs*/, 1/*#Ops*/, 2, 
                // Src: (intrinsic_void 2517:iPTR, (imm:i32)<<P:Predicate_immZExt4>>:$b) - Complexity = 12
                // Dst: (TCPUT (imm:i32):$b)
/*1991*/      /*Scope*/ 8, /*->2000*/
/*1992*/        OPC_EmitMergeInputChains1_0,
/*1993*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::TCPUTD), 0|OPFL_Chain,
                    0/*#VTs*/, 1/*#Ops*/, 1, 
                // Src: (intrinsic_void 2517:iPTR, GPR:i32:$b) - Complexity = 8
                // Dst: (TCPUTD GPR:i32:$b)
/*2000*/      0, /*End of Scope*/
/*2001*/    /*Scope*/ 35, /*->2037*/
/*2002*/      OPC_CheckInteger, 83|128,19/*2515*/, 
/*2005*/      OPC_MoveParent,
/*2006*/      OPC_RecordChild2, // #1 = $b
/*2007*/      OPC_Scope, 18, /*->2027*/ // 2 children in Scope
/*2009*/        OPC_MoveChild, 2,
/*2011*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2014*/        OPC_CheckPredicate, 13, // Predicate_immZExt4
/*2016*/        OPC_MoveParent,
/*2017*/        OPC_EmitMergeInputChains1_0,
/*2018*/        OPC_EmitConvertToTarget, 1,
/*2020*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::TCAPUT), 0|OPFL_Chain,
                    0/*#VTs*/, 1/*#Ops*/, 2, 
                // Src: (intrinsic_void 2515:iPTR, (imm:i32)<<P:Predicate_immZExt4>>:$b) - Complexity = 12
                // Dst: (TCAPUT (imm:i32):$b)
/*2027*/      /*Scope*/ 8, /*->2036*/
/*2028*/        OPC_EmitMergeInputChains1_0,
/*2029*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::TCAPUTD), 0|OPFL_Chain,
                    0/*#VTs*/, 1/*#Ops*/, 1, 
                // Src: (intrinsic_void 2515:iPTR, GPR:i32:$b) - Complexity = 8
                // Dst: (TCAPUTD GPR:i32:$b)
/*2036*/      0, /*End of Scope*/
/*2037*/    /*Scope*/ 40, /*->2078*/
/*2038*/      OPC_CheckInteger, 78|128,19/*2510*/, 
/*2041*/      OPC_MoveParent,
/*2042*/      OPC_RecordChild2, // #1 = $v
/*2043*/      OPC_RecordChild3, // #2 = $b
/*2044*/      OPC_Scope, 20, /*->2066*/ // 2 children in Scope
/*2046*/        OPC_MoveChild, 3,
/*2048*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2051*/        OPC_CheckPredicate, 13, // Predicate_immZExt4
/*2053*/        OPC_MoveParent,
/*2054*/        OPC_EmitMergeInputChains1_0,
/*2055*/        OPC_EmitConvertToTarget, 2,
/*2057*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::NPUT), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 3, 
                // Src: (intrinsic_void 2510:iPTR, GPR:i32:$v, (imm:i32)<<P:Predicate_immZExt4>>:$b) - Complexity = 12
                // Dst: (NPUT:i32 GPR:i32:$v, (imm:i32):$b)
/*2066*/      /*Scope*/ 10, /*->2077*/
/*2067*/        OPC_EmitMergeInputChains1_0,
/*2068*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::NPUTD), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                // Src: (intrinsic_void 2510:iPTR, GPR:i32:$v, GPR:i32:$b) - Complexity = 8
                // Dst: (NPUTD:i32 GPR:i32:$v, GPR:i32:$b)
/*2077*/      0, /*End of Scope*/
/*2078*/    /*Scope*/ 40, /*->2119*/
/*2079*/      OPC_CheckInteger, 68|128,19/*2500*/, 
/*2082*/      OPC_MoveParent,
/*2083*/      OPC_RecordChild2, // #1 = $v
/*2084*/      OPC_RecordChild3, // #2 = $b
/*2085*/      OPC_Scope, 20, /*->2107*/ // 2 children in Scope
/*2087*/        OPC_MoveChild, 3,
/*2089*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2092*/        OPC_CheckPredicate, 13, // Predicate_immZExt4
/*2094*/        OPC_MoveParent,
/*2095*/        OPC_EmitMergeInputChains1_0,
/*2096*/        OPC_EmitConvertToTarget, 2,
/*2098*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::NAPUT), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 3, 
                // Src: (intrinsic_void 2500:iPTR, GPR:i32:$v, (imm:i32)<<P:Predicate_immZExt4>>:$b) - Complexity = 12
                // Dst: (NAPUT:i32 GPR:i32:$v, (imm:i32):$b)
/*2107*/      /*Scope*/ 10, /*->2118*/
/*2108*/        OPC_EmitMergeInputChains1_0,
/*2109*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::NAPUTD), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                // Src: (intrinsic_void 2500:iPTR, GPR:i32:$v, GPR:i32:$b) - Complexity = 8
                // Dst: (NAPUTD:i32 GPR:i32:$v, GPR:i32:$b)
/*2118*/      0, /*End of Scope*/
/*2119*/    /*Scope*/ 40, /*->2160*/
/*2120*/      OPC_CheckInteger, 72|128,19/*2504*/, 
/*2123*/      OPC_MoveParent,
/*2124*/      OPC_RecordChild2, // #1 = $v
/*2125*/      OPC_RecordChild3, // #2 = $b
/*2126*/      OPC_Scope, 20, /*->2148*/ // 2 children in Scope
/*2128*/        OPC_MoveChild, 3,
/*2130*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2133*/        OPC_CheckPredicate, 13, // Predicate_immZExt4
/*2135*/        OPC_MoveParent,
/*2136*/        OPC_EmitMergeInputChains1_0,
/*2137*/        OPC_EmitConvertToTarget, 2,
/*2139*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::NCPUT), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 3, 
                // Src: (intrinsic_void 2504:iPTR, GPR:i32:$v, (imm:i32)<<P:Predicate_immZExt4>>:$b) - Complexity = 12
                // Dst: (NCPUT:i32 GPR:i32:$v, (imm:i32):$b)
/*2148*/      /*Scope*/ 10, /*->2159*/
/*2149*/        OPC_EmitMergeInputChains1_0,
/*2150*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::NCPUTD), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                // Src: (intrinsic_void 2504:iPTR, GPR:i32:$v, GPR:i32:$b) - Complexity = 8
                // Dst: (NCPUTD:i32 GPR:i32:$v, GPR:i32:$b)
/*2159*/      0, /*End of Scope*/
/*2160*/    /*Scope*/ 40, /*->2201*/
/*2161*/      OPC_CheckInteger, 70|128,19/*2502*/, 
/*2164*/      OPC_MoveParent,
/*2165*/      OPC_RecordChild2, // #1 = $v
/*2166*/      OPC_RecordChild3, // #2 = $b
/*2167*/      OPC_Scope, 20, /*->2189*/ // 2 children in Scope
/*2169*/        OPC_MoveChild, 3,
/*2171*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2174*/        OPC_CheckPredicate, 13, // Predicate_immZExt4
/*2176*/        OPC_MoveParent,
/*2177*/        OPC_EmitMergeInputChains1_0,
/*2178*/        OPC_EmitConvertToTarget, 2,
/*2180*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::NCAPUT), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 3, 
                // Src: (intrinsic_void 2502:iPTR, GPR:i32:$v, (imm:i32)<<P:Predicate_immZExt4>>:$b) - Complexity = 12
                // Dst: (NCAPUT:i32 GPR:i32:$v, (imm:i32):$b)
/*2189*/      /*Scope*/ 10, /*->2200*/
/*2190*/        OPC_EmitMergeInputChains1_0,
/*2191*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::NCAPUTD), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                // Src: (intrinsic_void 2502:iPTR, GPR:i32:$v, GPR:i32:$b) - Complexity = 8
                // Dst: (NCAPUTD:i32 GPR:i32:$v, GPR:i32:$b)
/*2200*/      0, /*End of Scope*/
/*2201*/    /*Scope*/ 37, /*->2239*/
/*2202*/      OPC_CheckInteger, 102|128,19/*2534*/, 
/*2205*/      OPC_MoveParent,
/*2206*/      OPC_RecordChild2, // #1 = $b
/*2207*/      OPC_Scope, 19, /*->2228*/ // 2 children in Scope
/*2209*/        OPC_MoveChild, 2,
/*2211*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2214*/        OPC_CheckPredicate, 13, // Predicate_immZExt4
/*2216*/        OPC_MoveParent,
/*2217*/        OPC_EmitMergeInputChains1_0,
/*2218*/        OPC_EmitConvertToTarget, 1,
/*2220*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::TNPUT), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
                // Src: (intrinsic_void 2534:iPTR, (imm:i32)<<P:Predicate_immZExt4>>:$b) - Complexity = 12
                // Dst: (TNPUT:i32 (imm:i32):$b)
/*2228*/      /*Scope*/ 9, /*->2238*/
/*2229*/        OPC_EmitMergeInputChains1_0,
/*2230*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::TNPUTD), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (intrinsic_void 2534:iPTR, GPR:i32:$b) - Complexity = 8
                // Dst: (TNPUTD:i32 GPR:i32:$b)
/*2238*/      0, /*End of Scope*/
/*2239*/    /*Scope*/ 37, /*->2277*/
/*2240*/      OPC_CheckInteger, 92|128,19/*2524*/, 
/*2243*/      OPC_MoveParent,
/*2244*/      OPC_RecordChild2, // #1 = $b
/*2245*/      OPC_Scope, 19, /*->2266*/ // 2 children in Scope
/*2247*/        OPC_MoveChild, 2,
/*2249*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2252*/        OPC_CheckPredicate, 13, // Predicate_immZExt4
/*2254*/        OPC_MoveParent,
/*2255*/        OPC_EmitMergeInputChains1_0,
/*2256*/        OPC_EmitConvertToTarget, 1,
/*2258*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::TNAPUT), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
                // Src: (intrinsic_void 2524:iPTR, (imm:i32)<<P:Predicate_immZExt4>>:$b) - Complexity = 12
                // Dst: (TNAPUT:i32 (imm:i32):$b)
/*2266*/      /*Scope*/ 9, /*->2276*/
/*2267*/        OPC_EmitMergeInputChains1_0,
/*2268*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::TNAPUTD), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (intrinsic_void 2524:iPTR, GPR:i32:$b) - Complexity = 8
                // Dst: (TNAPUTD:i32 GPR:i32:$b)
/*2276*/      0, /*End of Scope*/
/*2277*/    /*Scope*/ 37, /*->2315*/
/*2278*/      OPC_CheckInteger, 96|128,19/*2528*/, 
/*2281*/      OPC_MoveParent,
/*2282*/      OPC_RecordChild2, // #1 = $b
/*2283*/      OPC_Scope, 19, /*->2304*/ // 2 children in Scope
/*2285*/        OPC_MoveChild, 2,
/*2287*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2290*/        OPC_CheckPredicate, 13, // Predicate_immZExt4
/*2292*/        OPC_MoveParent,
/*2293*/        OPC_EmitMergeInputChains1_0,
/*2294*/        OPC_EmitConvertToTarget, 1,
/*2296*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::TNCPUT), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
                // Src: (intrinsic_void 2528:iPTR, (imm:i32)<<P:Predicate_immZExt4>>:$b) - Complexity = 12
                // Dst: (TNCPUT:i32 (imm:i32):$b)
/*2304*/      /*Scope*/ 9, /*->2314*/
/*2305*/        OPC_EmitMergeInputChains1_0,
/*2306*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::TNCPUTD), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (intrinsic_void 2528:iPTR, GPR:i32:$b) - Complexity = 8
                // Dst: (TNCPUTD:i32 GPR:i32:$b)
/*2314*/      0, /*End of Scope*/
/*2315*/    /*Scope*/ 37, /*->2353*/
/*2316*/      OPC_CheckInteger, 94|128,19/*2526*/, 
/*2319*/      OPC_MoveParent,
/*2320*/      OPC_RecordChild2, // #1 = $b
/*2321*/      OPC_Scope, 19, /*->2342*/ // 2 children in Scope
/*2323*/        OPC_MoveChild, 2,
/*2325*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2328*/        OPC_CheckPredicate, 13, // Predicate_immZExt4
/*2330*/        OPC_MoveParent,
/*2331*/        OPC_EmitMergeInputChains1_0,
/*2332*/        OPC_EmitConvertToTarget, 1,
/*2334*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::TNCAPUT), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
                // Src: (intrinsic_void 2526:iPTR, (imm:i32)<<P:Predicate_immZExt4>>:$b) - Complexity = 12
                // Dst: (TNCAPUT:i32 (imm:i32):$b)
/*2342*/      /*Scope*/ 9, /*->2352*/
/*2343*/        OPC_EmitMergeInputChains1_0,
/*2344*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::TNCAPUTD), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (intrinsic_void 2526:iPTR, GPR:i32:$b) - Complexity = 8
                // Dst: (TNCAPUTD:i32 GPR:i32:$b)
/*2352*/      0, /*End of Scope*/
/*2353*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 8|128,7/*904*/,  TARGET_VAL(ISD::BRCOND),// ->3262
/*2358*/    OPC_RecordNode,   // #0 = 'brcond' chained node
/*2359*/    OPC_Scope, 113|128,6/*881*/, /*->3243*/ // 2 children in Scope
/*2362*/      OPC_MoveChild, 1,
/*2364*/      OPC_CheckOpcode, TARGET_VAL(ISD::SETCC),
/*2367*/      OPC_Scope, 8|128,1/*136*/, /*->2506*/ // 5 children in Scope
/*2370*/        OPC_RecordChild0, // #1 = $L
/*2371*/        OPC_MoveChild, 1,
/*2373*/        OPC_CheckInteger, 0, 
/*2375*/        OPC_MoveParent,
/*2376*/        OPC_MoveChild, 2,
/*2378*/        OPC_Scope, 20, /*->2400*/ // 6 children in Scope
/*2380*/          OPC_CheckCondCode, ISD::SETEQ,
/*2382*/          OPC_MoveParent,
/*2383*/          OPC_MoveParent,
/*2384*/          OPC_RecordChild2, // #2 = $T
/*2385*/          OPC_MoveChild, 2,
/*2387*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*2390*/          OPC_MoveParent,
/*2391*/          OPC_EmitMergeInputChains1_0,
/*2392*/          OPC_MorphNodeTo, TARGET_VAL(MBlaze::BEQID), 0|OPFL_Chain,
                      0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                  // Src: (brcond (setcc:i32 GPR:i32:$L, 0:i32, SETEQ:Other), (bb:Other):$T) - Complexity = 11
                  // Dst: (BEQID GPR:i32:$L, (bb:Other):$T)
/*2400*/        /*Scope*/ 20, /*->2421*/
/*2401*/          OPC_CheckCondCode, ISD::SETNE,
/*2403*/          OPC_MoveParent,
/*2404*/          OPC_MoveParent,
/*2405*/          OPC_RecordChild2, // #2 = $T
/*2406*/          OPC_MoveChild, 2,
/*2408*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*2411*/          OPC_MoveParent,
/*2412*/          OPC_EmitMergeInputChains1_0,
/*2413*/          OPC_MorphNodeTo, TARGET_VAL(MBlaze::BNEID), 0|OPFL_Chain,
                      0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                  // Src: (brcond (setcc:i32 GPR:i32:$L, 0:i32, SETNE:Other), (bb:Other):$T) - Complexity = 11
                  // Dst: (BNEID GPR:i32:$L, (bb:Other):$T)
/*2421*/        /*Scope*/ 20, /*->2442*/
/*2422*/          OPC_CheckCondCode, ISD::SETGT,
/*2424*/          OPC_MoveParent,
/*2425*/          OPC_MoveParent,
/*2426*/          OPC_RecordChild2, // #2 = $T
/*2427*/          OPC_MoveChild, 2,
/*2429*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*2432*/          OPC_MoveParent,
/*2433*/          OPC_EmitMergeInputChains1_0,
/*2434*/          OPC_MorphNodeTo, TARGET_VAL(MBlaze::BGTID), 0|OPFL_Chain,
                      0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                  // Src: (brcond (setcc:i32 GPR:i32:$L, 0:i32, SETGT:Other), (bb:Other):$T) - Complexity = 11
                  // Dst: (BGTID GPR:i32:$L, (bb:Other):$T)
/*2442*/        /*Scope*/ 20, /*->2463*/
/*2443*/          OPC_CheckCondCode, ISD::SETLT,
/*2445*/          OPC_MoveParent,
/*2446*/          OPC_MoveParent,
/*2447*/          OPC_RecordChild2, // #2 = $T
/*2448*/          OPC_MoveChild, 2,
/*2450*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*2453*/          OPC_MoveParent,
/*2454*/          OPC_EmitMergeInputChains1_0,
/*2455*/          OPC_MorphNodeTo, TARGET_VAL(MBlaze::BLTID), 0|OPFL_Chain,
                      0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                  // Src: (brcond (setcc:i32 GPR:i32:$L, 0:i32, SETLT:Other), (bb:Other):$T) - Complexity = 11
                  // Dst: (BLTID GPR:i32:$L, (bb:Other):$T)
/*2463*/        /*Scope*/ 20, /*->2484*/
/*2464*/          OPC_CheckCondCode, ISD::SETGE,
/*2466*/          OPC_MoveParent,
/*2467*/          OPC_MoveParent,
/*2468*/          OPC_RecordChild2, // #2 = $T
/*2469*/          OPC_MoveChild, 2,
/*2471*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*2474*/          OPC_MoveParent,
/*2475*/          OPC_EmitMergeInputChains1_0,
/*2476*/          OPC_MorphNodeTo, TARGET_VAL(MBlaze::BGEID), 0|OPFL_Chain,
                      0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                  // Src: (brcond (setcc:i32 GPR:i32:$L, 0:i32, SETGE:Other), (bb:Other):$T) - Complexity = 11
                  // Dst: (BGEID GPR:i32:$L, (bb:Other):$T)
/*2484*/        /*Scope*/ 20, /*->2505*/
/*2485*/          OPC_CheckCondCode, ISD::SETLE,
/*2487*/          OPC_MoveParent,
/*2488*/          OPC_MoveParent,
/*2489*/          OPC_RecordChild2, // #2 = $T
/*2490*/          OPC_MoveChild, 2,
/*2492*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*2495*/          OPC_MoveParent,
/*2496*/          OPC_EmitMergeInputChains1_0,
/*2497*/          OPC_MorphNodeTo, TARGET_VAL(MBlaze::BLEID), 0|OPFL_Chain,
                      0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                  // Src: (brcond (setcc:i32 GPR:i32:$L, 0:i32, SETLE:Other), (bb:Other):$T) - Complexity = 11
                  // Dst: (BLEID GPR:i32:$L, (bb:Other):$T)
/*2505*/        0, /*End of Scope*/
/*2506*/      /*Scope*/ 8|128,1/*136*/, /*->2644*/
/*2508*/        OPC_MoveChild, 0,
/*2510*/        OPC_CheckInteger, 0, 
/*2512*/        OPC_MoveParent,
/*2513*/        OPC_RecordChild1, // #1 = $R
/*2514*/        OPC_MoveChild, 2,
/*2516*/        OPC_Scope, 20, /*->2538*/ // 6 children in Scope
/*2518*/          OPC_CheckCondCode, ISD::SETEQ,
/*2520*/          OPC_MoveParent,
/*2521*/          OPC_MoveParent,
/*2522*/          OPC_RecordChild2, // #2 = $T
/*2523*/          OPC_MoveChild, 2,
/*2525*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*2528*/          OPC_MoveParent,
/*2529*/          OPC_EmitMergeInputChains1_0,
/*2530*/          OPC_MorphNodeTo, TARGET_VAL(MBlaze::BEQID), 0|OPFL_Chain,
                      0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                  // Src: (brcond (setcc:i32 0:i32, GPR:i32:$R, SETEQ:Other), (bb:Other):$T) - Complexity = 11
                  // Dst: (BEQID GPR:i32:$R, (bb:Other):$T)
/*2538*/        /*Scope*/ 20, /*->2559*/
/*2539*/          OPC_CheckCondCode, ISD::SETNE,
/*2541*/          OPC_MoveParent,
/*2542*/          OPC_MoveParent,
/*2543*/          OPC_RecordChild2, // #2 = $T
/*2544*/          OPC_MoveChild, 2,
/*2546*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*2549*/          OPC_MoveParent,
/*2550*/          OPC_EmitMergeInputChains1_0,
/*2551*/          OPC_MorphNodeTo, TARGET_VAL(MBlaze::BNEID), 0|OPFL_Chain,
                      0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                  // Src: (brcond (setcc:i32 0:i32, GPR:i32:$R, SETNE:Other), (bb:Other):$T) - Complexity = 11
                  // Dst: (BNEID GPR:i32:$R, (bb:Other):$T)
/*2559*/        /*Scope*/ 20, /*->2580*/
/*2560*/          OPC_CheckCondCode, ISD::SETGT,
/*2562*/          OPC_MoveParent,
/*2563*/          OPC_MoveParent,
/*2564*/          OPC_RecordChild2, // #2 = $T
/*2565*/          OPC_MoveChild, 2,
/*2567*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*2570*/          OPC_MoveParent,
/*2571*/          OPC_EmitMergeInputChains1_0,
/*2572*/          OPC_MorphNodeTo, TARGET_VAL(MBlaze::BGTID), 0|OPFL_Chain,
                      0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                  // Src: (brcond (setcc:i32 0:i32, GPR:i32:$R, SETGT:Other), (bb:Other):$T) - Complexity = 11
                  // Dst: (BGTID GPR:i32:$R, (bb:Other):$T)
/*2580*/        /*Scope*/ 20, /*->2601*/
/*2581*/          OPC_CheckCondCode, ISD::SETLT,
/*2583*/          OPC_MoveParent,
/*2584*/          OPC_MoveParent,
/*2585*/          OPC_RecordChild2, // #2 = $T
/*2586*/          OPC_MoveChild, 2,
/*2588*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*2591*/          OPC_MoveParent,
/*2592*/          OPC_EmitMergeInputChains1_0,
/*2593*/          OPC_MorphNodeTo, TARGET_VAL(MBlaze::BLTID), 0|OPFL_Chain,
                      0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                  // Src: (brcond (setcc:i32 0:i32, GPR:i32:$R, SETLT:Other), (bb:Other):$T) - Complexity = 11
                  // Dst: (BLTID GPR:i32:$R, (bb:Other):$T)
/*2601*/        /*Scope*/ 20, /*->2622*/
/*2602*/          OPC_CheckCondCode, ISD::SETGE,
/*2604*/          OPC_MoveParent,
/*2605*/          OPC_MoveParent,
/*2606*/          OPC_RecordChild2, // #2 = $T
/*2607*/          OPC_MoveChild, 2,
/*2609*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*2612*/          OPC_MoveParent,
/*2613*/          OPC_EmitMergeInputChains1_0,
/*2614*/          OPC_MorphNodeTo, TARGET_VAL(MBlaze::BGEID), 0|OPFL_Chain,
                      0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                  // Src: (brcond (setcc:i32 0:i32, GPR:i32:$R, SETGE:Other), (bb:Other):$T) - Complexity = 11
                  // Dst: (BGEID GPR:i32:$R, (bb:Other):$T)
/*2622*/        /*Scope*/ 20, /*->2643*/
/*2623*/          OPC_CheckCondCode, ISD::SETLE,
/*2625*/          OPC_MoveParent,
/*2626*/          OPC_MoveParent,
/*2627*/          OPC_RecordChild2, // #2 = $T
/*2628*/          OPC_MoveChild, 2,
/*2630*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*2633*/          OPC_MoveParent,
/*2634*/          OPC_EmitMergeInputChains1_0,
/*2635*/          OPC_MorphNodeTo, TARGET_VAL(MBlaze::BLEID), 0|OPFL_Chain,
                      0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                  // Src: (brcond (setcc:i32 0:i32, GPR:i32:$R, SETLE:Other), (bb:Other):$T) - Complexity = 11
                  // Dst: (BLEID GPR:i32:$R, (bb:Other):$T)
/*2643*/        0, /*End of Scope*/
/*2644*/      /*Scope*/ 14|128,1/*142*/, /*->2788*/
/*2646*/        OPC_RecordChild0, // #1 = $L
/*2647*/        OPC_MoveChild, 1,
/*2649*/        OPC_CheckInteger, 0, 
/*2651*/        OPC_MoveParent,
/*2652*/        OPC_MoveChild, 2,
/*2654*/        OPC_Scope, 32, /*->2688*/ // 4 children in Scope
/*2656*/          OPC_CheckCondCode, ISD::SETUGT,
/*2658*/          OPC_MoveParent,
/*2659*/          OPC_MoveParent,
/*2660*/          OPC_RecordChild2, // #2 = $T
/*2661*/          OPC_MoveChild, 2,
/*2663*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*2666*/          OPC_MoveParent,
/*2667*/          OPC_EmitMergeInputChains1_0,
/*2668*/          OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*2671*/          OPC_EmitNode, TARGET_VAL(MBlaze::CMPU), 0|OPFL_Chain,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 3, 1,  // Results = #4
/*2680*/          OPC_MorphNodeTo, TARGET_VAL(MBlaze::BGTID), 0|OPFL_Chain,
                      0/*#VTs*/, 2/*#Ops*/, 4, 2, 
                  // Src: (brcond (setcc:i32 GPR:i32:$L, 0:i32, SETUGT:Other), (bb:Other):$T) - Complexity = 11
                  // Dst: (BGTID (CMPU:i32 R0:i32, GPR:i32:$L), (bb:Other):$T)
/*2688*/        /*Scope*/ 32, /*->2721*/
/*2689*/          OPC_CheckCondCode, ISD::SETULT,
/*2691*/          OPC_MoveParent,
/*2692*/          OPC_MoveParent,
/*2693*/          OPC_RecordChild2, // #2 = $T
/*2694*/          OPC_MoveChild, 2,
/*2696*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*2699*/          OPC_MoveParent,
/*2700*/          OPC_EmitMergeInputChains1_0,
/*2701*/          OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*2704*/          OPC_EmitNode, TARGET_VAL(MBlaze::CMPU), 0|OPFL_Chain,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 3, 1,  // Results = #4
/*2713*/          OPC_MorphNodeTo, TARGET_VAL(MBlaze::BLTID), 0|OPFL_Chain,
                      0/*#VTs*/, 2/*#Ops*/, 4, 2, 
                  // Src: (brcond (setcc:i32 GPR:i32:$L, 0:i32, SETULT:Other), (bb:Other):$T) - Complexity = 11
                  // Dst: (BLTID (CMPU:i32 R0:i32, GPR:i32:$L), (bb:Other):$T)
/*2721*/        /*Scope*/ 32, /*->2754*/
/*2722*/          OPC_CheckCondCode, ISD::SETUGE,
/*2724*/          OPC_MoveParent,
/*2725*/          OPC_MoveParent,
/*2726*/          OPC_RecordChild2, // #2 = $T
/*2727*/          OPC_MoveChild, 2,
/*2729*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*2732*/          OPC_MoveParent,
/*2733*/          OPC_EmitMergeInputChains1_0,
/*2734*/          OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*2737*/          OPC_EmitNode, TARGET_VAL(MBlaze::CMPU), 0|OPFL_Chain,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 3, 1,  // Results = #4
/*2746*/          OPC_MorphNodeTo, TARGET_VAL(MBlaze::BGEID), 0|OPFL_Chain,
                      0/*#VTs*/, 2/*#Ops*/, 4, 2, 
                  // Src: (brcond (setcc:i32 GPR:i32:$L, 0:i32, SETUGE:Other), (bb:Other):$T) - Complexity = 11
                  // Dst: (BGEID (CMPU:i32 R0:i32, GPR:i32:$L), (bb:Other):$T)
/*2754*/        /*Scope*/ 32, /*->2787*/
/*2755*/          OPC_CheckCondCode, ISD::SETULE,
/*2757*/          OPC_MoveParent,
/*2758*/          OPC_MoveParent,
/*2759*/          OPC_RecordChild2, // #2 = $T
/*2760*/          OPC_MoveChild, 2,
/*2762*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*2765*/          OPC_MoveParent,
/*2766*/          OPC_EmitMergeInputChains1_0,
/*2767*/          OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*2770*/          OPC_EmitNode, TARGET_VAL(MBlaze::CMPU), 0|OPFL_Chain,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 3, 1,  // Results = #4
/*2779*/          OPC_MorphNodeTo, TARGET_VAL(MBlaze::BLEID), 0|OPFL_Chain,
                      0/*#VTs*/, 2/*#Ops*/, 4, 2, 
                  // Src: (brcond (setcc:i32 GPR:i32:$L, 0:i32, SETULE:Other), (bb:Other):$T) - Complexity = 11
                  // Dst: (BLEID (CMPU:i32 R0:i32, GPR:i32:$L), (bb:Other):$T)
/*2787*/        0, /*End of Scope*/
/*2788*/      /*Scope*/ 14|128,1/*142*/, /*->2932*/
/*2790*/        OPC_MoveChild, 0,
/*2792*/        OPC_CheckInteger, 0, 
/*2794*/        OPC_MoveParent,
/*2795*/        OPC_RecordChild1, // #1 = $R
/*2796*/        OPC_MoveChild, 2,
/*2798*/        OPC_Scope, 32, /*->2832*/ // 4 children in Scope
/*2800*/          OPC_CheckCondCode, ISD::SETUGT,
/*2802*/          OPC_MoveParent,
/*2803*/          OPC_MoveParent,
/*2804*/          OPC_RecordChild2, // #2 = $T
/*2805*/          OPC_MoveChild, 2,
/*2807*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*2810*/          OPC_MoveParent,
/*2811*/          OPC_EmitMergeInputChains1_0,
/*2812*/          OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*2815*/          OPC_EmitNode, TARGET_VAL(MBlaze::CMPU), 0|OPFL_Chain,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 3,  // Results = #4
/*2824*/          OPC_MorphNodeTo, TARGET_VAL(MBlaze::BGTID), 0|OPFL_Chain,
                      0/*#VTs*/, 2/*#Ops*/, 4, 2, 
                  // Src: (brcond (setcc:i32 0:i32, GPR:i32:$R, SETUGT:Other), (bb:Other):$T) - Complexity = 11
                  // Dst: (BGTID (CMPU:i32 GPR:i32:$R, R0:i32), (bb:Other):$T)
/*2832*/        /*Scope*/ 32, /*->2865*/
/*2833*/          OPC_CheckCondCode, ISD::SETULT,
/*2835*/          OPC_MoveParent,
/*2836*/          OPC_MoveParent,
/*2837*/          OPC_RecordChild2, // #2 = $T
/*2838*/          OPC_MoveChild, 2,
/*2840*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*2843*/          OPC_MoveParent,
/*2844*/          OPC_EmitMergeInputChains1_0,
/*2845*/          OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*2848*/          OPC_EmitNode, TARGET_VAL(MBlaze::CMPU), 0|OPFL_Chain,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 3,  // Results = #4
/*2857*/          OPC_MorphNodeTo, TARGET_VAL(MBlaze::BLTID), 0|OPFL_Chain,
                      0/*#VTs*/, 2/*#Ops*/, 4, 2, 
                  // Src: (brcond (setcc:i32 0:i32, GPR:i32:$R, SETULT:Other), (bb:Other):$T) - Complexity = 11
                  // Dst: (BLTID (CMPU:i32 GPR:i32:$R, R0:i32), (bb:Other):$T)
/*2865*/        /*Scope*/ 32, /*->2898*/
/*2866*/          OPC_CheckCondCode, ISD::SETUGE,
/*2868*/          OPC_MoveParent,
/*2869*/          OPC_MoveParent,
/*2870*/          OPC_RecordChild2, // #2 = $T
/*2871*/          OPC_MoveChild, 2,
/*2873*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*2876*/          OPC_MoveParent,
/*2877*/          OPC_EmitMergeInputChains1_0,
/*2878*/          OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*2881*/          OPC_EmitNode, TARGET_VAL(MBlaze::CMPU), 0|OPFL_Chain,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 3,  // Results = #4
/*2890*/          OPC_MorphNodeTo, TARGET_VAL(MBlaze::BGEID), 0|OPFL_Chain,
                      0/*#VTs*/, 2/*#Ops*/, 4, 2, 
                  // Src: (brcond (setcc:i32 0:i32, GPR:i32:$R, SETUGE:Other), (bb:Other):$T) - Complexity = 11
                  // Dst: (BGEID (CMPU:i32 GPR:i32:$R, R0:i32), (bb:Other):$T)
/*2898*/        /*Scope*/ 32, /*->2931*/
/*2899*/          OPC_CheckCondCode, ISD::SETULE,
/*2901*/          OPC_MoveParent,
/*2902*/          OPC_MoveParent,
/*2903*/          OPC_RecordChild2, // #2 = $T
/*2904*/          OPC_MoveChild, 2,
/*2906*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*2909*/          OPC_MoveParent,
/*2910*/          OPC_EmitMergeInputChains1_0,
/*2911*/          OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*2914*/          OPC_EmitNode, TARGET_VAL(MBlaze::CMPU), 0|OPFL_Chain,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 3,  // Results = #4
/*2923*/          OPC_MorphNodeTo, TARGET_VAL(MBlaze::BLEID), 0|OPFL_Chain,
                      0/*#VTs*/, 2/*#Ops*/, 4, 2, 
                  // Src: (brcond (setcc:i32 0:i32, GPR:i32:$R, SETULE:Other), (bb:Other):$T) - Complexity = 11
                  // Dst: (BLEID (CMPU:i32 GPR:i32:$R, R0:i32), (bb:Other):$T)
/*2931*/        0, /*End of Scope*/
/*2932*/      /*Scope*/ 52|128,2/*308*/, /*->3242*/
/*2934*/        OPC_RecordChild0, // #1 = $L
/*2935*/        OPC_CheckChild0Type, MVT::i32,
/*2937*/        OPC_RecordChild1, // #2 = $R
/*2938*/        OPC_MoveChild, 2,
/*2940*/        OPC_Scope, 29, /*->2971*/ // 10 children in Scope
/*2942*/          OPC_CheckCondCode, ISD::SETEQ,
/*2944*/          OPC_MoveParent,
/*2945*/          OPC_MoveParent,
/*2946*/          OPC_RecordChild2, // #3 = $T
/*2947*/          OPC_MoveChild, 2,
/*2949*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*2952*/          OPC_MoveParent,
/*2953*/          OPC_EmitMergeInputChains1_0,
/*2954*/          OPC_EmitNode, TARGET_VAL(MBlaze::CMP), 0|OPFL_Chain,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 1,  // Results = #4
/*2963*/          OPC_MorphNodeTo, TARGET_VAL(MBlaze::BEQID), 0|OPFL_Chain,
                      0/*#VTs*/, 2/*#Ops*/, 4, 3, 
                  // Src: (brcond (setcc:i32 GPR:i32:$L, GPR:i32:$R, SETEQ:Other), (bb:Other):$T) - Complexity = 6
                  // Dst: (BEQID (CMP:i32 GPR:i32:$R, GPR:i32:$L), (bb:Other):$T)
/*2971*/        /*Scope*/ 29, /*->3001*/
/*2972*/          OPC_CheckCondCode, ISD::SETNE,
/*2974*/          OPC_MoveParent,
/*2975*/          OPC_MoveParent,
/*2976*/          OPC_RecordChild2, // #3 = $T
/*2977*/          OPC_MoveChild, 2,
/*2979*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*2982*/          OPC_MoveParent,
/*2983*/          OPC_EmitMergeInputChains1_0,
/*2984*/          OPC_EmitNode, TARGET_VAL(MBlaze::CMP), 0|OPFL_Chain,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 1,  // Results = #4
/*2993*/          OPC_MorphNodeTo, TARGET_VAL(MBlaze::BNEID), 0|OPFL_Chain,
                      0/*#VTs*/, 2/*#Ops*/, 4, 3, 
                  // Src: (brcond (setcc:i32 GPR:i32:$L, GPR:i32:$R, SETNE:Other), (bb:Other):$T) - Complexity = 6
                  // Dst: (BNEID (CMP:i32 GPR:i32:$R, GPR:i32:$L), (bb:Other):$T)
/*3001*/        /*Scope*/ 29, /*->3031*/
/*3002*/          OPC_CheckCondCode, ISD::SETGT,
/*3004*/          OPC_MoveParent,
/*3005*/          OPC_MoveParent,
/*3006*/          OPC_RecordChild2, // #3 = $T
/*3007*/          OPC_MoveChild, 2,
/*3009*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*3012*/          OPC_MoveParent,
/*3013*/          OPC_EmitMergeInputChains1_0,
/*3014*/          OPC_EmitNode, TARGET_VAL(MBlaze::CMP), 0|OPFL_Chain,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 1,  // Results = #4
/*3023*/          OPC_MorphNodeTo, TARGET_VAL(MBlaze::BGTID), 0|OPFL_Chain,
                      0/*#VTs*/, 2/*#Ops*/, 4, 3, 
                  // Src: (brcond (setcc:i32 GPR:i32:$L, GPR:i32:$R, SETGT:Other), (bb:Other):$T) - Complexity = 6
                  // Dst: (BGTID (CMP:i32 GPR:i32:$R, GPR:i32:$L), (bb:Other):$T)
/*3031*/        /*Scope*/ 29, /*->3061*/
/*3032*/          OPC_CheckCondCode, ISD::SETLT,
/*3034*/          OPC_MoveParent,
/*3035*/          OPC_MoveParent,
/*3036*/          OPC_RecordChild2, // #3 = $T
/*3037*/          OPC_MoveChild, 2,
/*3039*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*3042*/          OPC_MoveParent,
/*3043*/          OPC_EmitMergeInputChains1_0,
/*3044*/          OPC_EmitNode, TARGET_VAL(MBlaze::CMP), 0|OPFL_Chain,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 1,  // Results = #4
/*3053*/          OPC_MorphNodeTo, TARGET_VAL(MBlaze::BLTID), 0|OPFL_Chain,
                      0/*#VTs*/, 2/*#Ops*/, 4, 3, 
                  // Src: (brcond (setcc:i32 GPR:i32:$L, GPR:i32:$R, SETLT:Other), (bb:Other):$T) - Complexity = 6
                  // Dst: (BLTID (CMP:i32 GPR:i32:$R, GPR:i32:$L), (bb:Other):$T)
/*3061*/        /*Scope*/ 29, /*->3091*/
/*3062*/          OPC_CheckCondCode, ISD::SETGE,
/*3064*/          OPC_MoveParent,
/*3065*/          OPC_MoveParent,
/*3066*/          OPC_RecordChild2, // #3 = $T
/*3067*/          OPC_MoveChild, 2,
/*3069*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*3072*/          OPC_MoveParent,
/*3073*/          OPC_EmitMergeInputChains1_0,
/*3074*/          OPC_EmitNode, TARGET_VAL(MBlaze::CMP), 0|OPFL_Chain,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 1,  // Results = #4
/*3083*/          OPC_MorphNodeTo, TARGET_VAL(MBlaze::BGEID), 0|OPFL_Chain,
                      0/*#VTs*/, 2/*#Ops*/, 4, 3, 
                  // Src: (brcond (setcc:i32 GPR:i32:$L, GPR:i32:$R, SETGE:Other), (bb:Other):$T) - Complexity = 6
                  // Dst: (BGEID (CMP:i32 GPR:i32:$R, GPR:i32:$L), (bb:Other):$T)
/*3091*/        /*Scope*/ 29, /*->3121*/
/*3092*/          OPC_CheckCondCode, ISD::SETLE,
/*3094*/          OPC_MoveParent,
/*3095*/          OPC_MoveParent,
/*3096*/          OPC_RecordChild2, // #3 = $T
/*3097*/          OPC_MoveChild, 2,
/*3099*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*3102*/          OPC_MoveParent,
/*3103*/          OPC_EmitMergeInputChains1_0,
/*3104*/          OPC_EmitNode, TARGET_VAL(MBlaze::CMP), 0|OPFL_Chain,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 1,  // Results = #4
/*3113*/          OPC_MorphNodeTo, TARGET_VAL(MBlaze::BLEID), 0|OPFL_Chain,
                      0/*#VTs*/, 2/*#Ops*/, 4, 3, 
                  // Src: (brcond (setcc:i32 GPR:i32:$L, GPR:i32:$R, SETLE:Other), (bb:Other):$T) - Complexity = 6
                  // Dst: (BLEID (CMP:i32 GPR:i32:$R, GPR:i32:$L), (bb:Other):$T)
/*3121*/        /*Scope*/ 29, /*->3151*/
/*3122*/          OPC_CheckCondCode, ISD::SETUGT,
/*3124*/          OPC_MoveParent,
/*3125*/          OPC_MoveParent,
/*3126*/          OPC_RecordChild2, // #3 = $T
/*3127*/          OPC_MoveChild, 2,
/*3129*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*3132*/          OPC_MoveParent,
/*3133*/          OPC_EmitMergeInputChains1_0,
/*3134*/          OPC_EmitNode, TARGET_VAL(MBlaze::CMPU), 0|OPFL_Chain,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 1,  // Results = #4
/*3143*/          OPC_MorphNodeTo, TARGET_VAL(MBlaze::BGTID), 0|OPFL_Chain,
                      0/*#VTs*/, 2/*#Ops*/, 4, 3, 
                  // Src: (brcond (setcc:i32 GPR:i32:$L, GPR:i32:$R, SETUGT:Other), (bb:Other):$T) - Complexity = 6
                  // Dst: (BGTID (CMPU:i32 GPR:i32:$R, GPR:i32:$L), (bb:Other):$T)
/*3151*/        /*Scope*/ 29, /*->3181*/
/*3152*/          OPC_CheckCondCode, ISD::SETULT,
/*3154*/          OPC_MoveParent,
/*3155*/          OPC_MoveParent,
/*3156*/          OPC_RecordChild2, // #3 = $T
/*3157*/          OPC_MoveChild, 2,
/*3159*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*3162*/          OPC_MoveParent,
/*3163*/          OPC_EmitMergeInputChains1_0,
/*3164*/          OPC_EmitNode, TARGET_VAL(MBlaze::CMPU), 0|OPFL_Chain,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 1,  // Results = #4
/*3173*/          OPC_MorphNodeTo, TARGET_VAL(MBlaze::BLTID), 0|OPFL_Chain,
                      0/*#VTs*/, 2/*#Ops*/, 4, 3, 
                  // Src: (brcond (setcc:i32 GPR:i32:$L, GPR:i32:$R, SETULT:Other), (bb:Other):$T) - Complexity = 6
                  // Dst: (BLTID (CMPU:i32 GPR:i32:$R, GPR:i32:$L), (bb:Other):$T)
/*3181*/        /*Scope*/ 29, /*->3211*/
/*3182*/          OPC_CheckCondCode, ISD::SETUGE,
/*3184*/          OPC_MoveParent,
/*3185*/          OPC_MoveParent,
/*3186*/          OPC_RecordChild2, // #3 = $T
/*3187*/          OPC_MoveChild, 2,
/*3189*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*3192*/          OPC_MoveParent,
/*3193*/          OPC_EmitMergeInputChains1_0,
/*3194*/          OPC_EmitNode, TARGET_VAL(MBlaze::CMPU), 0|OPFL_Chain,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 1,  // Results = #4
/*3203*/          OPC_MorphNodeTo, TARGET_VAL(MBlaze::BGEID), 0|OPFL_Chain,
                      0/*#VTs*/, 2/*#Ops*/, 4, 3, 
                  // Src: (brcond (setcc:i32 GPR:i32:$L, GPR:i32:$R, SETUGE:Other), (bb:Other):$T) - Complexity = 6
                  // Dst: (BGEID (CMPU:i32 GPR:i32:$R, GPR:i32:$L), (bb:Other):$T)
/*3211*/        /*Scope*/ 29, /*->3241*/
/*3212*/          OPC_CheckCondCode, ISD::SETULE,
/*3214*/          OPC_MoveParent,
/*3215*/          OPC_MoveParent,
/*3216*/          OPC_RecordChild2, // #3 = $T
/*3217*/          OPC_MoveChild, 2,
/*3219*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*3222*/          OPC_MoveParent,
/*3223*/          OPC_EmitMergeInputChains1_0,
/*3224*/          OPC_EmitNode, TARGET_VAL(MBlaze::CMPU), 0|OPFL_Chain,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 1,  // Results = #4
/*3233*/          OPC_MorphNodeTo, TARGET_VAL(MBlaze::BLEID), 0|OPFL_Chain,
                      0/*#VTs*/, 2/*#Ops*/, 4, 3, 
                  // Src: (brcond (setcc:i32 GPR:i32:$L, GPR:i32:$R, SETULE:Other), (bb:Other):$T) - Complexity = 6
                  // Dst: (BLEID (CMPU:i32 GPR:i32:$R, GPR:i32:$L), (bb:Other):$T)
/*3241*/        0, /*End of Scope*/
/*3242*/      0, /*End of Scope*/
/*3243*/    /*Scope*/ 17, /*->3261*/
/*3244*/      OPC_RecordChild1, // #1 = $C
/*3245*/      OPC_RecordChild2, // #2 = $T
/*3246*/      OPC_MoveChild, 2,
/*3248*/      OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*3251*/      OPC_MoveParent,
/*3252*/      OPC_EmitMergeInputChains1_0,
/*3253*/      OPC_MorphNodeTo, TARGET_VAL(MBlaze::BNEID), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 1, 2, 
              // Src: (brcond GPR:i32:$C, (bb:Other):$T) - Complexity = 3
              // Dst: (BNEID GPR:i32:$C, (bb:Other):$T)
/*3261*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 101,  TARGET_VAL(ISD::AND),// ->3366
/*3265*/    OPC_Scope, 31, /*->3298*/ // 3 children in Scope
/*3267*/      OPC_RecordChild0, // #0 = $lh
/*3268*/      OPC_MoveChild, 1,
/*3270*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*3273*/      OPC_RecordChild0, // #1 = $rh
/*3274*/      OPC_MoveChild, 1,
/*3276*/      OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*3287*/      OPC_MoveParent,
/*3288*/      OPC_MoveParent,
/*3289*/      OPC_MorphNodeTo, TARGET_VAL(MBlaze::ANDN), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (and:i32 GPR:i32:$lh, (xor:i32 GPR:i32:$rh, -1:i32)) - Complexity = 11
              // Dst: (ANDN:i32 GPR:i32:$lh, GPR:i32:$rh)
/*3298*/    /*Scope*/ 31, /*->3330*/
/*3299*/      OPC_MoveChild, 0,
/*3301*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*3304*/      OPC_RecordChild0, // #0 = $rh
/*3305*/      OPC_MoveChild, 1,
/*3307*/      OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*3318*/      OPC_MoveParent,
/*3319*/      OPC_MoveParent,
/*3320*/      OPC_RecordChild1, // #1 = $lh
/*3321*/      OPC_MorphNodeTo, TARGET_VAL(MBlaze::ANDN), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
              // Src: (and:i32 (xor:i32 GPR:i32:$rh, -1:i32), GPR:i32:$lh) - Complexity = 11
              // Dst: (ANDN:i32 GPR:i32:$lh, GPR:i32:$rh)
/*3330*/    /*Scope*/ 34, /*->3365*/
/*3331*/      OPC_RecordChild0, // #0 = $b
/*3332*/      OPC_RecordChild1, // #1 = $c
/*3333*/      OPC_Scope, 19, /*->3354*/ // 2 children in Scope
/*3335*/        OPC_MoveChild, 1,
/*3337*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3340*/        OPC_CheckPredicate, 14, // Predicate_immZExt16
/*3342*/        OPC_MoveParent,
/*3343*/        OPC_EmitConvertToTarget, 1,
/*3345*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::ANDI), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (and:i32 GPR:i32:$b, (imm:i32)<<P:Predicate_immZExt16>>:$c) - Complexity = 7
                // Dst: (ANDI:i32 GPR:i32:$b, (imm:i32):$c)
/*3354*/      /*Scope*/ 9, /*->3364*/
/*3355*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::AND), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (and:i32 GPR:i32:$b, GPR:i32:$c) - Complexity = 3
                // Dst: (AND:i32 GPR:i32:$b, GPR:i32:$c)
/*3364*/      0, /*End of Scope*/
/*3365*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 25,  TARGET_VAL(ISD::CALLSEQ_END),// ->3394
/*3369*/    OPC_RecordNode,   // #0 = 'callseq_end' chained node
/*3370*/    OPC_CaptureGlueInput,
/*3371*/    OPC_RecordChild1, // #1 = $amt1
/*3372*/    OPC_MoveChild, 1,
/*3374*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*3377*/    OPC_MoveParent,
/*3378*/    OPC_RecordChild2, // #2 = $amt2
/*3379*/    OPC_MoveChild, 2,
/*3381*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*3384*/    OPC_MoveParent,
/*3385*/    OPC_EmitMergeInputChains1_0,
/*3386*/    OPC_MorphNodeTo, TARGET_VAL(MBlaze::ADJCALLSTACKUP), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                0/*#VTs*/, 2/*#Ops*/, 1, 2, 
            // Src: (callseq_end (timm:i32):$amt1, (timm:i32):$amt2) - Complexity = 9
            // Dst: (ADJCALLSTACKUP (timm:i32):$amt1, (timm:i32):$amt2)
          /*SwitchOpcode*/ 20,  TARGET_VAL(ISD::ATOMIC_FENCE),// ->3417
/*3397*/    OPC_RecordNode,   // #0 = 'atomic_fence' chained node
/*3398*/    OPC_MoveChild, 1,
/*3400*/    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3403*/    OPC_MoveParent,
/*3404*/    OPC_MoveChild, 2,
/*3406*/    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3409*/    OPC_MoveParent,
/*3410*/    OPC_EmitMergeInputChains1_0,
/*3411*/    OPC_MorphNodeTo, TARGET_VAL(MBlaze::MEMBARRIER), 0|OPFL_Chain,
                0/*#VTs*/, 0/*#Ops*/, 
            // Src: (atomic_fence (imm:i32), (imm:i32)) - Complexity = 9
            // Dst: (MEMBARRIER)
          /*SwitchOpcode*/ 88|128,6/*856*/,  TARGET_VAL(ISD::SELECT_CC),// ->4277
/*3421*/    OPC_Scope, 4|128,1/*132*/, /*->3556*/ // 5 children in Scope
/*3424*/      OPC_RecordChild0, // #0 = $L
/*3425*/      OPC_MoveChild, 1,
/*3427*/      OPC_CheckInteger, 0, 
/*3429*/      OPC_MoveParent,
/*3430*/      OPC_RecordChild2, // #1 = $T
/*3431*/      OPC_RecordChild3, // #2 = $F
/*3432*/      OPC_MoveChild, 4,
/*3434*/      OPC_Scope, 19, /*->3455*/ // 6 children in Scope
/*3436*/        OPC_CheckCondCode, ISD::SETEQ,
/*3438*/        OPC_MoveParent,
/*3439*/        OPC_CheckType, MVT::i32,
/*3441*/        OPC_EmitInteger, MVT::i32, 1, 
/*3444*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 1, 2, 0, 3, 
                // Src: (selectcc:i32 GPR:i32:$L, 0:i32, GPR:i32:$T, GPR:i32:$F, SETEQ:Other) - Complexity = 8
                // Dst: (Select_CC:i32 GPR:i32:$T, GPR:i32:$F, GPR:i32:$L, 1:i32)
/*3455*/      /*Scope*/ 19, /*->3475*/
/*3456*/        OPC_CheckCondCode, ISD::SETNE,
/*3458*/        OPC_MoveParent,
/*3459*/        OPC_CheckType, MVT::i32,
/*3461*/        OPC_EmitInteger, MVT::i32, 2, 
/*3464*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 1, 2, 0, 3, 
                // Src: (selectcc:i32 GPR:i32:$L, 0:i32, GPR:i32:$T, GPR:i32:$F, SETNE:Other) - Complexity = 8
                // Dst: (Select_CC:i32 GPR:i32:$T, GPR:i32:$F, GPR:i32:$L, 2:i32)
/*3475*/      /*Scope*/ 19, /*->3495*/
/*3476*/        OPC_CheckCondCode, ISD::SETGT,
/*3478*/        OPC_MoveParent,
/*3479*/        OPC_CheckType, MVT::i32,
/*3481*/        OPC_EmitInteger, MVT::i32, 3, 
/*3484*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 1, 2, 0, 3, 
                // Src: (selectcc:i32 GPR:i32:$L, 0:i32, GPR:i32:$T, GPR:i32:$F, SETGT:Other) - Complexity = 8
                // Dst: (Select_CC:i32 GPR:i32:$T, GPR:i32:$F, GPR:i32:$L, 3:i32)
/*3495*/      /*Scope*/ 19, /*->3515*/
/*3496*/        OPC_CheckCondCode, ISD::SETLT,
/*3498*/        OPC_MoveParent,
/*3499*/        OPC_CheckType, MVT::i32,
/*3501*/        OPC_EmitInteger, MVT::i32, 4, 
/*3504*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 1, 2, 0, 3, 
                // Src: (selectcc:i32 GPR:i32:$L, 0:i32, GPR:i32:$T, GPR:i32:$F, SETLT:Other) - Complexity = 8
                // Dst: (Select_CC:i32 GPR:i32:$T, GPR:i32:$F, GPR:i32:$L, 4:i32)
/*3515*/      /*Scope*/ 19, /*->3535*/
/*3516*/        OPC_CheckCondCode, ISD::SETGE,
/*3518*/        OPC_MoveParent,
/*3519*/        OPC_CheckType, MVT::i32,
/*3521*/        OPC_EmitInteger, MVT::i32, 5, 
/*3524*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 1, 2, 0, 3, 
                // Src: (selectcc:i32 GPR:i32:$L, 0:i32, GPR:i32:$T, GPR:i32:$F, SETGE:Other) - Complexity = 8
                // Dst: (Select_CC:i32 GPR:i32:$T, GPR:i32:$F, GPR:i32:$L, 5:i32)
/*3535*/      /*Scope*/ 19, /*->3555*/
/*3536*/        OPC_CheckCondCode, ISD::SETLE,
/*3538*/        OPC_MoveParent,
/*3539*/        OPC_CheckType, MVT::i32,
/*3541*/        OPC_EmitInteger, MVT::i32, 6, 
/*3544*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 1, 2, 0, 3, 
                // Src: (selectcc:i32 GPR:i32:$L, 0:i32, GPR:i32:$T, GPR:i32:$F, SETLE:Other) - Complexity = 8
                // Dst: (Select_CC:i32 GPR:i32:$T, GPR:i32:$F, GPR:i32:$L, 6:i32)
/*3555*/      0, /*End of Scope*/
/*3556*/    /*Scope*/ 4|128,1/*132*/, /*->3690*/
/*3558*/      OPC_MoveChild, 0,
/*3560*/      OPC_CheckInteger, 0, 
/*3562*/      OPC_MoveParent,
/*3563*/      OPC_RecordChild1, // #0 = $R
/*3564*/      OPC_RecordChild2, // #1 = $T
/*3565*/      OPC_RecordChild3, // #2 = $F
/*3566*/      OPC_MoveChild, 4,
/*3568*/      OPC_Scope, 19, /*->3589*/ // 6 children in Scope
/*3570*/        OPC_CheckCondCode, ISD::SETEQ,
/*3572*/        OPC_MoveParent,
/*3573*/        OPC_CheckType, MVT::i32,
/*3575*/        OPC_EmitInteger, MVT::i32, 1, 
/*3578*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 1, 2, 0, 3, 
                // Src: (selectcc:i32 0:i32, GPR:i32:$R, GPR:i32:$T, GPR:i32:$F, SETEQ:Other) - Complexity = 8
                // Dst: (Select_CC:i32 GPR:i32:$T, GPR:i32:$F, GPR:i32:$R, 1:i32)
/*3589*/      /*Scope*/ 19, /*->3609*/
/*3590*/        OPC_CheckCondCode, ISD::SETNE,
/*3592*/        OPC_MoveParent,
/*3593*/        OPC_CheckType, MVT::i32,
/*3595*/        OPC_EmitInteger, MVT::i32, 2, 
/*3598*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 1, 2, 0, 3, 
                // Src: (selectcc:i32 0:i32, GPR:i32:$R, GPR:i32:$T, GPR:i32:$F, SETNE:Other) - Complexity = 8
                // Dst: (Select_CC:i32 GPR:i32:$T, GPR:i32:$F, GPR:i32:$R, 2:i32)
/*3609*/      /*Scope*/ 19, /*->3629*/
/*3610*/        OPC_CheckCondCode, ISD::SETGT,
/*3612*/        OPC_MoveParent,
/*3613*/        OPC_CheckType, MVT::i32,
/*3615*/        OPC_EmitInteger, MVT::i32, 3, 
/*3618*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 1, 2, 0, 3, 
                // Src: (selectcc:i32 0:i32, GPR:i32:$R, GPR:i32:$T, GPR:i32:$F, SETGT:Other) - Complexity = 8
                // Dst: (Select_CC:i32 GPR:i32:$T, GPR:i32:$F, GPR:i32:$R, 3:i32)
/*3629*/      /*Scope*/ 19, /*->3649*/
/*3630*/        OPC_CheckCondCode, ISD::SETLT,
/*3632*/        OPC_MoveParent,
/*3633*/        OPC_CheckType, MVT::i32,
/*3635*/        OPC_EmitInteger, MVT::i32, 4, 
/*3638*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 1, 2, 0, 3, 
                // Src: (selectcc:i32 0:i32, GPR:i32:$R, GPR:i32:$T, GPR:i32:$F, SETLT:Other) - Complexity = 8
                // Dst: (Select_CC:i32 GPR:i32:$T, GPR:i32:$F, GPR:i32:$R, 4:i32)
/*3649*/      /*Scope*/ 19, /*->3669*/
/*3650*/        OPC_CheckCondCode, ISD::SETGE,
/*3652*/        OPC_MoveParent,
/*3653*/        OPC_CheckType, MVT::i32,
/*3655*/        OPC_EmitInteger, MVT::i32, 5, 
/*3658*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 1, 2, 0, 3, 
                // Src: (selectcc:i32 0:i32, GPR:i32:$R, GPR:i32:$T, GPR:i32:$F, SETGE:Other) - Complexity = 8
                // Dst: (Select_CC:i32 GPR:i32:$T, GPR:i32:$F, GPR:i32:$R, 5:i32)
/*3669*/      /*Scope*/ 19, /*->3689*/
/*3670*/        OPC_CheckCondCode, ISD::SETLE,
/*3672*/        OPC_MoveParent,
/*3673*/        OPC_CheckType, MVT::i32,
/*3675*/        OPC_EmitInteger, MVT::i32, 6, 
/*3678*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 1, 2, 0, 3, 
                // Src: (selectcc:i32 0:i32, GPR:i32:$R, GPR:i32:$T, GPR:i32:$F, SETLE:Other) - Complexity = 8
                // Dst: (Select_CC:i32 GPR:i32:$T, GPR:i32:$F, GPR:i32:$R, 6:i32)
/*3689*/      0, /*End of Scope*/
/*3690*/    /*Scope*/ 12|128,1/*140*/, /*->3832*/
/*3692*/      OPC_RecordChild0, // #0 = $L
/*3693*/      OPC_MoveChild, 1,
/*3695*/      OPC_CheckInteger, 0, 
/*3697*/      OPC_MoveParent,
/*3698*/      OPC_RecordChild2, // #1 = $T
/*3699*/      OPC_RecordChild3, // #2 = $F
/*3700*/      OPC_MoveChild, 4,
/*3702*/      OPC_Scope, 31, /*->3735*/ // 4 children in Scope
/*3704*/        OPC_CheckCondCode, ISD::SETUGT,
/*3706*/        OPC_MoveParent,
/*3707*/        OPC_CheckType, MVT::i32,
/*3709*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*3712*/        OPC_EmitNode, TARGET_VAL(MBlaze::CMPU), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 3, 0,  // Results = #4
/*3721*/        OPC_EmitInteger, MVT::i32, 3, 
/*3724*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 1, 2, 4, 5, 
                // Src: (selectcc:i32 GPR:i32:$L, 0:i32, GPR:i32:$T, GPR:i32:$F, SETUGT:Other) - Complexity = 8
                // Dst: (Select_CC:i32 GPR:i32:$T, GPR:i32:$F, (CMPU:i32 R0:i32, GPR:i32:$L), 3:i32)
/*3735*/      /*Scope*/ 31, /*->3767*/
/*3736*/        OPC_CheckCondCode, ISD::SETULT,
/*3738*/        OPC_MoveParent,
/*3739*/        OPC_CheckType, MVT::i32,
/*3741*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*3744*/        OPC_EmitNode, TARGET_VAL(MBlaze::CMPU), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 3, 0,  // Results = #4
/*3753*/        OPC_EmitInteger, MVT::i32, 4, 
/*3756*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 1, 2, 4, 5, 
                // Src: (selectcc:i32 GPR:i32:$L, 0:i32, GPR:i32:$T, GPR:i32:$F, SETULT:Other) - Complexity = 8
                // Dst: (Select_CC:i32 GPR:i32:$T, GPR:i32:$F, (CMPU:i32 R0:i32, GPR:i32:$L), 4:i32)
/*3767*/      /*Scope*/ 31, /*->3799*/
/*3768*/        OPC_CheckCondCode, ISD::SETUGE,
/*3770*/        OPC_MoveParent,
/*3771*/        OPC_CheckType, MVT::i32,
/*3773*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*3776*/        OPC_EmitNode, TARGET_VAL(MBlaze::CMPU), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 3, 0,  // Results = #4
/*3785*/        OPC_EmitInteger, MVT::i32, 5, 
/*3788*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 1, 2, 4, 5, 
                // Src: (selectcc:i32 GPR:i32:$L, 0:i32, GPR:i32:$T, GPR:i32:$F, SETUGE:Other) - Complexity = 8
                // Dst: (Select_CC:i32 GPR:i32:$T, GPR:i32:$F, (CMPU:i32 R0:i32, GPR:i32:$L), 5:i32)
/*3799*/      /*Scope*/ 31, /*->3831*/
/*3800*/        OPC_CheckCondCode, ISD::SETULE,
/*3802*/        OPC_MoveParent,
/*3803*/        OPC_CheckType, MVT::i32,
/*3805*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*3808*/        OPC_EmitNode, TARGET_VAL(MBlaze::CMPU), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 3, 0,  // Results = #4
/*3817*/        OPC_EmitInteger, MVT::i32, 6, 
/*3820*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 1, 2, 4, 5, 
                // Src: (selectcc:i32 GPR:i32:$L, 0:i32, GPR:i32:$T, GPR:i32:$F, SETULE:Other) - Complexity = 8
                // Dst: (Select_CC:i32 GPR:i32:$T, GPR:i32:$F, (CMPU:i32 R0:i32, GPR:i32:$L), 6:i32)
/*3831*/      0, /*End of Scope*/
/*3832*/    /*Scope*/ 12|128,1/*140*/, /*->3974*/
/*3834*/      OPC_MoveChild, 0,
/*3836*/      OPC_CheckInteger, 0, 
/*3838*/      OPC_MoveParent,
/*3839*/      OPC_RecordChild1, // #0 = $R
/*3840*/      OPC_RecordChild2, // #1 = $T
/*3841*/      OPC_RecordChild3, // #2 = $F
/*3842*/      OPC_MoveChild, 4,
/*3844*/      OPC_Scope, 31, /*->3877*/ // 4 children in Scope
/*3846*/        OPC_CheckCondCode, ISD::SETUGT,
/*3848*/        OPC_MoveParent,
/*3849*/        OPC_CheckType, MVT::i32,
/*3851*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*3854*/        OPC_EmitNode, TARGET_VAL(MBlaze::CMPU), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3,  // Results = #4
/*3863*/        OPC_EmitInteger, MVT::i32, 3, 
/*3866*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 1, 2, 4, 5, 
                // Src: (selectcc:i32 0:i32, GPR:i32:$R, GPR:i32:$T, GPR:i32:$F, SETUGT:Other) - Complexity = 8
                // Dst: (Select_CC:i32 GPR:i32:$T, GPR:i32:$F, (CMPU:i32 GPR:i32:$R, R0:i32), 3:i32)
/*3877*/      /*Scope*/ 31, /*->3909*/
/*3878*/        OPC_CheckCondCode, ISD::SETULT,
/*3880*/        OPC_MoveParent,
/*3881*/        OPC_CheckType, MVT::i32,
/*3883*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*3886*/        OPC_EmitNode, TARGET_VAL(MBlaze::CMPU), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3,  // Results = #4
/*3895*/        OPC_EmitInteger, MVT::i32, 4, 
/*3898*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 1, 2, 4, 5, 
                // Src: (selectcc:i32 0:i32, GPR:i32:$R, GPR:i32:$T, GPR:i32:$F, SETULT:Other) - Complexity = 8
                // Dst: (Select_CC:i32 GPR:i32:$T, GPR:i32:$F, (CMPU:i32 GPR:i32:$R, R0:i32), 4:i32)
/*3909*/      /*Scope*/ 31, /*->3941*/
/*3910*/        OPC_CheckCondCode, ISD::SETUGE,
/*3912*/        OPC_MoveParent,
/*3913*/        OPC_CheckType, MVT::i32,
/*3915*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*3918*/        OPC_EmitNode, TARGET_VAL(MBlaze::CMPU), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3,  // Results = #4
/*3927*/        OPC_EmitInteger, MVT::i32, 5, 
/*3930*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 1, 2, 4, 5, 
                // Src: (selectcc:i32 0:i32, GPR:i32:$R, GPR:i32:$T, GPR:i32:$F, SETUGE:Other) - Complexity = 8
                // Dst: (Select_CC:i32 GPR:i32:$T, GPR:i32:$F, (CMPU:i32 GPR:i32:$R, R0:i32), 5:i32)
/*3941*/      /*Scope*/ 31, /*->3973*/
/*3942*/        OPC_CheckCondCode, ISD::SETULE,
/*3944*/        OPC_MoveParent,
/*3945*/        OPC_CheckType, MVT::i32,
/*3947*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*3950*/        OPC_EmitNode, TARGET_VAL(MBlaze::CMPU), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3,  // Results = #4
/*3959*/        OPC_EmitInteger, MVT::i32, 6, 
/*3962*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 1, 2, 4, 5, 
                // Src: (selectcc:i32 0:i32, GPR:i32:$R, GPR:i32:$T, GPR:i32:$F, SETULE:Other) - Complexity = 8
                // Dst: (Select_CC:i32 GPR:i32:$T, GPR:i32:$F, (CMPU:i32 GPR:i32:$R, R0:i32), 6:i32)
/*3973*/      0, /*End of Scope*/
/*3974*/    /*Scope*/ 44|128,2/*300*/, /*->4276*/
/*3976*/      OPC_RecordChild0, // #0 = $L
/*3977*/      OPC_CheckChild0Type, MVT::i32,
/*3979*/      OPC_RecordChild1, // #1 = $R
/*3980*/      OPC_RecordChild2, // #2 = $T
/*3981*/      OPC_RecordChild3, // #3 = $F
/*3982*/      OPC_MoveChild, 4,
/*3984*/      OPC_Scope, 28, /*->4014*/ // 10 children in Scope
/*3986*/        OPC_CheckCondCode, ISD::SETEQ,
/*3988*/        OPC_MoveParent,
/*3989*/        OPC_CheckType, MVT::i32,
/*3991*/        OPC_EmitNode, TARGET_VAL(MBlaze::CMP), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4
/*4000*/        OPC_EmitInteger, MVT::i32, 1, 
/*4003*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                // Src: (selectcc:i32 GPR:i32:$L, GPR:i32:$R, GPR:i32:$T, GPR:i32:$F, SETEQ:Other) - Complexity = 3
                // Dst: (Select_CC:i32 GPR:i32:$T, GPR:i32:$F, (CMP:i32 GPR:i32:$R, GPR:i32:$L), 1:i32)
/*4014*/      /*Scope*/ 28, /*->4043*/
/*4015*/        OPC_CheckCondCode, ISD::SETNE,
/*4017*/        OPC_MoveParent,
/*4018*/        OPC_CheckType, MVT::i32,
/*4020*/        OPC_EmitNode, TARGET_VAL(MBlaze::CMP), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4
/*4029*/        OPC_EmitInteger, MVT::i32, 2, 
/*4032*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                // Src: (selectcc:i32 GPR:i32:$L, GPR:i32:$R, GPR:i32:$T, GPR:i32:$F, SETNE:Other) - Complexity = 3
                // Dst: (Select_CC:i32 GPR:i32:$T, GPR:i32:$F, (CMP:i32 GPR:i32:$R, GPR:i32:$L), 2:i32)
/*4043*/      /*Scope*/ 28, /*->4072*/
/*4044*/        OPC_CheckCondCode, ISD::SETGT,
/*4046*/        OPC_MoveParent,
/*4047*/        OPC_CheckType, MVT::i32,
/*4049*/        OPC_EmitNode, TARGET_VAL(MBlaze::CMP), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4
/*4058*/        OPC_EmitInteger, MVT::i32, 3, 
/*4061*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                // Src: (selectcc:i32 GPR:i32:$L, GPR:i32:$R, GPR:i32:$T, GPR:i32:$F, SETGT:Other) - Complexity = 3
                // Dst: (Select_CC:i32 GPR:i32:$T, GPR:i32:$F, (CMP:i32 GPR:i32:$R, GPR:i32:$L), 3:i32)
/*4072*/      /*Scope*/ 28, /*->4101*/
/*4073*/        OPC_CheckCondCode, ISD::SETLT,
/*4075*/        OPC_MoveParent,
/*4076*/        OPC_CheckType, MVT::i32,
/*4078*/        OPC_EmitNode, TARGET_VAL(MBlaze::CMP), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4
/*4087*/        OPC_EmitInteger, MVT::i32, 4, 
/*4090*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                // Src: (selectcc:i32 GPR:i32:$L, GPR:i32:$R, GPR:i32:$T, GPR:i32:$F, SETLT:Other) - Complexity = 3
                // Dst: (Select_CC:i32 GPR:i32:$T, GPR:i32:$F, (CMP:i32 GPR:i32:$R, GPR:i32:$L), 4:i32)
/*4101*/      /*Scope*/ 28, /*->4130*/
/*4102*/        OPC_CheckCondCode, ISD::SETGE,
/*4104*/        OPC_MoveParent,
/*4105*/        OPC_CheckType, MVT::i32,
/*4107*/        OPC_EmitNode, TARGET_VAL(MBlaze::CMP), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4
/*4116*/        OPC_EmitInteger, MVT::i32, 5, 
/*4119*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                // Src: (selectcc:i32 GPR:i32:$L, GPR:i32:$R, GPR:i32:$T, GPR:i32:$F, SETGE:Other) - Complexity = 3
                // Dst: (Select_CC:i32 GPR:i32:$T, GPR:i32:$F, (CMP:i32 GPR:i32:$R, GPR:i32:$L), 5:i32)
/*4130*/      /*Scope*/ 28, /*->4159*/
/*4131*/        OPC_CheckCondCode, ISD::SETLE,
/*4133*/        OPC_MoveParent,
/*4134*/        OPC_CheckType, MVT::i32,
/*4136*/        OPC_EmitNode, TARGET_VAL(MBlaze::CMP), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4
/*4145*/        OPC_EmitInteger, MVT::i32, 6, 
/*4148*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                // Src: (selectcc:i32 GPR:i32:$L, GPR:i32:$R, GPR:i32:$T, GPR:i32:$F, SETLE:Other) - Complexity = 3
                // Dst: (Select_CC:i32 GPR:i32:$T, GPR:i32:$F, (CMP:i32 GPR:i32:$R, GPR:i32:$L), 6:i32)
/*4159*/      /*Scope*/ 28, /*->4188*/
/*4160*/        OPC_CheckCondCode, ISD::SETUGT,
/*4162*/        OPC_MoveParent,
/*4163*/        OPC_CheckType, MVT::i32,
/*4165*/        OPC_EmitNode, TARGET_VAL(MBlaze::CMPU), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4
/*4174*/        OPC_EmitInteger, MVT::i32, 3, 
/*4177*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                // Src: (selectcc:i32 GPR:i32:$L, GPR:i32:$R, GPR:i32:$T, GPR:i32:$F, SETUGT:Other) - Complexity = 3
                // Dst: (Select_CC:i32 GPR:i32:$T, GPR:i32:$F, (CMPU:i32 GPR:i32:$R, GPR:i32:$L), 3:i32)
/*4188*/      /*Scope*/ 28, /*->4217*/
/*4189*/        OPC_CheckCondCode, ISD::SETULT,
/*4191*/        OPC_MoveParent,
/*4192*/        OPC_CheckType, MVT::i32,
/*4194*/        OPC_EmitNode, TARGET_VAL(MBlaze::CMPU), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4
/*4203*/        OPC_EmitInteger, MVT::i32, 4, 
/*4206*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                // Src: (selectcc:i32 GPR:i32:$L, GPR:i32:$R, GPR:i32:$T, GPR:i32:$F, SETULT:Other) - Complexity = 3
                // Dst: (Select_CC:i32 GPR:i32:$T, GPR:i32:$F, (CMPU:i32 GPR:i32:$R, GPR:i32:$L), 4:i32)
/*4217*/      /*Scope*/ 28, /*->4246*/
/*4218*/        OPC_CheckCondCode, ISD::SETUGE,
/*4220*/        OPC_MoveParent,
/*4221*/        OPC_CheckType, MVT::i32,
/*4223*/        OPC_EmitNode, TARGET_VAL(MBlaze::CMPU), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4
/*4232*/        OPC_EmitInteger, MVT::i32, 5, 
/*4235*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                // Src: (selectcc:i32 GPR:i32:$L, GPR:i32:$R, GPR:i32:$T, GPR:i32:$F, SETUGE:Other) - Complexity = 3
                // Dst: (Select_CC:i32 GPR:i32:$T, GPR:i32:$F, (CMPU:i32 GPR:i32:$R, GPR:i32:$L), 5:i32)
/*4246*/      /*Scope*/ 28, /*->4275*/
/*4247*/        OPC_CheckCondCode, ISD::SETULE,
/*4249*/        OPC_MoveParent,
/*4250*/        OPC_CheckType, MVT::i32,
/*4252*/        OPC_EmitNode, TARGET_VAL(MBlaze::CMPU), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4
/*4261*/        OPC_EmitInteger, MVT::i32, 6, 
/*4264*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                // Src: (selectcc:i32 GPR:i32:$L, GPR:i32:$R, GPR:i32:$T, GPR:i32:$F, SETULE:Other) - Complexity = 3
                // Dst: (Select_CC:i32 GPR:i32:$T, GPR:i32:$F, (CMPU:i32 GPR:i32:$R, GPR:i32:$L), 6:i32)
/*4275*/      0, /*End of Scope*/
/*4276*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 70|128,23/*3014*/,  TARGET_VAL(ISD::SETCC),// ->7295
/*4281*/    OPC_Scope, 42|128,2/*298*/, /*->4582*/ // 5 children in Scope
/*4284*/      OPC_RecordChild0, // #0 = $L
/*4285*/      OPC_MoveChild, 1,
/*4287*/      OPC_CheckInteger, 0, 
/*4289*/      OPC_MoveParent,
/*4290*/      OPC_MoveChild, 2,
/*4292*/      OPC_Scope, 47, /*->4341*/ // 6 children in Scope
/*4294*/        OPC_CheckCondCode, ISD::SETEQ,
/*4296*/        OPC_MoveParent,
/*4297*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*4300*/        OPC_EmitInteger, MVT::i32, 1, 
/*4303*/        OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #3
/*4312*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*4315*/        OPC_EmitInteger, MVT::i32, 0, 
/*4318*/        OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 4, 5,  // Results = #6
/*4327*/        OPC_EmitInteger, MVT::i32, 1, 
/*4330*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 3, 6, 0, 7, 
                // Src: (setcc:i32 GPR:i32:$L, 0:i32, SETEQ:Other) - Complexity = 8
                // Dst: (Select_CC:i32 (ADDIK:i32 R0:i32, 1:i32), (ADDIK:i32 R0:i32, 0:i32), GPR:i32:$L, 1:i32)
/*4341*/      /*Scope*/ 47, /*->4389*/
/*4342*/        OPC_CheckCondCode, ISD::SETNE,
/*4344*/        OPC_MoveParent,
/*4345*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*4348*/        OPC_EmitInteger, MVT::i32, 1, 
/*4351*/        OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #3
/*4360*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*4363*/        OPC_EmitInteger, MVT::i32, 0, 
/*4366*/        OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 4, 5,  // Results = #6
/*4375*/        OPC_EmitInteger, MVT::i32, 2, 
/*4378*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 3, 6, 0, 7, 
                // Src: (setcc:i32 GPR:i32:$L, 0:i32, SETNE:Other) - Complexity = 8
                // Dst: (Select_CC:i32 (ADDIK:i32 R0:i32, 1:i32), (ADDIK:i32 R0:i32, 0:i32), GPR:i32:$L, 2:i32)
/*4389*/      /*Scope*/ 47, /*->4437*/
/*4390*/        OPC_CheckCondCode, ISD::SETGT,
/*4392*/        OPC_MoveParent,
/*4393*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*4396*/        OPC_EmitInteger, MVT::i32, 1, 
/*4399*/        OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #3
/*4408*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*4411*/        OPC_EmitInteger, MVT::i32, 0, 
/*4414*/        OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 4, 5,  // Results = #6
/*4423*/        OPC_EmitInteger, MVT::i32, 3, 
/*4426*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 3, 6, 0, 7, 
                // Src: (setcc:i32 GPR:i32:$L, 0:i32, SETGT:Other) - Complexity = 8
                // Dst: (Select_CC:i32 (ADDIK:i32 R0:i32, 1:i32), (ADDIK:i32 R0:i32, 0:i32), GPR:i32:$L, 3:i32)
/*4437*/      /*Scope*/ 47, /*->4485*/
/*4438*/        OPC_CheckCondCode, ISD::SETLT,
/*4440*/        OPC_MoveParent,
/*4441*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*4444*/        OPC_EmitInteger, MVT::i32, 1, 
/*4447*/        OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #3
/*4456*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*4459*/        OPC_EmitInteger, MVT::i32, 0, 
/*4462*/        OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 4, 5,  // Results = #6
/*4471*/        OPC_EmitInteger, MVT::i32, 4, 
/*4474*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 3, 6, 0, 7, 
                // Src: (setcc:i32 GPR:i32:$L, 0:i32, SETLT:Other) - Complexity = 8
                // Dst: (Select_CC:i32 (ADDIK:i32 R0:i32, 1:i32), (ADDIK:i32 R0:i32, 0:i32), GPR:i32:$L, 4:i32)
/*4485*/      /*Scope*/ 47, /*->4533*/
/*4486*/        OPC_CheckCondCode, ISD::SETGE,
/*4488*/        OPC_MoveParent,
/*4489*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*4492*/        OPC_EmitInteger, MVT::i32, 1, 
/*4495*/        OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #3
/*4504*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*4507*/        OPC_EmitInteger, MVT::i32, 0, 
/*4510*/        OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 4, 5,  // Results = #6
/*4519*/        OPC_EmitInteger, MVT::i32, 5, 
/*4522*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 3, 6, 0, 7, 
                // Src: (setcc:i32 GPR:i32:$L, 0:i32, SETGE:Other) - Complexity = 8
                // Dst: (Select_CC:i32 (ADDIK:i32 R0:i32, 1:i32), (ADDIK:i32 R0:i32, 0:i32), GPR:i32:$L, 5:i32)
/*4533*/      /*Scope*/ 47, /*->4581*/
/*4534*/        OPC_CheckCondCode, ISD::SETLE,
/*4536*/        OPC_MoveParent,
/*4537*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*4540*/        OPC_EmitInteger, MVT::i32, 1, 
/*4543*/        OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #3
/*4552*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*4555*/        OPC_EmitInteger, MVT::i32, 0, 
/*4558*/        OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 4, 5,  // Results = #6
/*4567*/        OPC_EmitInteger, MVT::i32, 6, 
/*4570*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 3, 6, 0, 7, 
                // Src: (setcc:i32 GPR:i32:$L, 0:i32, SETLE:Other) - Complexity = 8
                // Dst: (Select_CC:i32 (ADDIK:i32 R0:i32, 1:i32), (ADDIK:i32 R0:i32, 0:i32), GPR:i32:$L, 6:i32)
/*4581*/      0, /*End of Scope*/
/*4582*/    /*Scope*/ 42|128,2/*298*/, /*->4882*/
/*4584*/      OPC_MoveChild, 0,
/*4586*/      OPC_CheckInteger, 0, 
/*4588*/      OPC_MoveParent,
/*4589*/      OPC_RecordChild1, // #0 = $R
/*4590*/      OPC_MoveChild, 2,
/*4592*/      OPC_Scope, 47, /*->4641*/ // 6 children in Scope
/*4594*/        OPC_CheckCondCode, ISD::SETEQ,
/*4596*/        OPC_MoveParent,
/*4597*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*4600*/        OPC_EmitInteger, MVT::i32, 1, 
/*4603*/        OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #3
/*4612*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*4615*/        OPC_EmitInteger, MVT::i32, 0, 
/*4618*/        OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 4, 5,  // Results = #6
/*4627*/        OPC_EmitInteger, MVT::i32, 1, 
/*4630*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 3, 6, 0, 7, 
                // Src: (setcc:i32 0:i32, GPR:i32:$R, SETEQ:Other) - Complexity = 8
                // Dst: (Select_CC:i32 (ADDIK:i32 R0:i32, 1:i32), (ADDIK:i32 R0:i32, 0:i32), GPR:i32:$R, 1:i32)
/*4641*/      /*Scope*/ 47, /*->4689*/
/*4642*/        OPC_CheckCondCode, ISD::SETNE,
/*4644*/        OPC_MoveParent,
/*4645*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*4648*/        OPC_EmitInteger, MVT::i32, 1, 
/*4651*/        OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #3
/*4660*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*4663*/        OPC_EmitInteger, MVT::i32, 0, 
/*4666*/        OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 4, 5,  // Results = #6
/*4675*/        OPC_EmitInteger, MVT::i32, 2, 
/*4678*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 3, 6, 0, 7, 
                // Src: (setcc:i32 0:i32, GPR:i32:$R, SETNE:Other) - Complexity = 8
                // Dst: (Select_CC:i32 (ADDIK:i32 R0:i32, 1:i32), (ADDIK:i32 R0:i32, 0:i32), GPR:i32:$R, 2:i32)
/*4689*/      /*Scope*/ 47, /*->4737*/
/*4690*/        OPC_CheckCondCode, ISD::SETGT,
/*4692*/        OPC_MoveParent,
/*4693*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*4696*/        OPC_EmitInteger, MVT::i32, 1, 
/*4699*/        OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #3
/*4708*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*4711*/        OPC_EmitInteger, MVT::i32, 0, 
/*4714*/        OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 4, 5,  // Results = #6
/*4723*/        OPC_EmitInteger, MVT::i32, 3, 
/*4726*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 3, 6, 0, 7, 
                // Src: (setcc:i32 0:i32, GPR:i32:$R, SETGT:Other) - Complexity = 8
                // Dst: (Select_CC:i32 (ADDIK:i32 R0:i32, 1:i32), (ADDIK:i32 R0:i32, 0:i32), GPR:i32:$R, 3:i32)
/*4737*/      /*Scope*/ 47, /*->4785*/
/*4738*/        OPC_CheckCondCode, ISD::SETLT,
/*4740*/        OPC_MoveParent,
/*4741*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*4744*/        OPC_EmitInteger, MVT::i32, 1, 
/*4747*/        OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #3
/*4756*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*4759*/        OPC_EmitInteger, MVT::i32, 0, 
/*4762*/        OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 4, 5,  // Results = #6
/*4771*/        OPC_EmitInteger, MVT::i32, 4, 
/*4774*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 3, 6, 0, 7, 
                // Src: (setcc:i32 0:i32, GPR:i32:$R, SETLT:Other) - Complexity = 8
                // Dst: (Select_CC:i32 (ADDIK:i32 R0:i32, 1:i32), (ADDIK:i32 R0:i32, 0:i32), GPR:i32:$R, 4:i32)
/*4785*/      /*Scope*/ 47, /*->4833*/
/*4786*/        OPC_CheckCondCode, ISD::SETGE,
/*4788*/        OPC_MoveParent,
/*4789*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*4792*/        OPC_EmitInteger, MVT::i32, 1, 
/*4795*/        OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #3
/*4804*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*4807*/        OPC_EmitInteger, MVT::i32, 0, 
/*4810*/        OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 4, 5,  // Results = #6
/*4819*/        OPC_EmitInteger, MVT::i32, 5, 
/*4822*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 3, 6, 0, 7, 
                // Src: (setcc:i32 0:i32, GPR:i32:$R, SETGE:Other) - Complexity = 8
                // Dst: (Select_CC:i32 (ADDIK:i32 R0:i32, 1:i32), (ADDIK:i32 R0:i32, 0:i32), GPR:i32:$R, 5:i32)
/*4833*/      /*Scope*/ 47, /*->4881*/
/*4834*/        OPC_CheckCondCode, ISD::SETLE,
/*4836*/        OPC_MoveParent,
/*4837*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*4840*/        OPC_EmitInteger, MVT::i32, 1, 
/*4843*/        OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #3
/*4852*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*4855*/        OPC_EmitInteger, MVT::i32, 0, 
/*4858*/        OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 4, 5,  // Results = #6
/*4867*/        OPC_EmitInteger, MVT::i32, 6, 
/*4870*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 3, 6, 0, 7, 
                // Src: (setcc:i32 0:i32, GPR:i32:$R, SETLE:Other) - Complexity = 8
                // Dst: (Select_CC:i32 (ADDIK:i32 R0:i32, 1:i32), (ADDIK:i32 R0:i32, 0:i32), GPR:i32:$R, 6:i32)
/*4881*/      0, /*End of Scope*/
/*4882*/    /*Scope*/ 122|128,1/*250*/, /*->5134*/
/*4884*/      OPC_RecordChild0, // #0 = $L
/*4885*/      OPC_MoveChild, 1,
/*4887*/      OPC_CheckInteger, 0, 
/*4889*/      OPC_MoveParent,
/*4890*/      OPC_MoveChild, 2,
/*4892*/      OPC_Scope, 59, /*->4953*/ // 4 children in Scope
/*4894*/        OPC_CheckCondCode, ISD::SETUGT,
/*4896*/        OPC_MoveParent,
/*4897*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*4900*/        OPC_EmitInteger, MVT::i32, 1, 
/*4903*/        OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #3
/*4912*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*4915*/        OPC_EmitInteger, MVT::i32, 0, 
/*4918*/        OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 4, 5,  // Results = #6
/*4927*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*4930*/        OPC_EmitNode, TARGET_VAL(MBlaze::CMPU), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 7, 0,  // Results = #8
/*4939*/        OPC_EmitInteger, MVT::i32, 3, 
/*4942*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 3, 6, 8, 9, 
                // Src: (setcc:i32 GPR:i32:$L, 0:i32, SETUGT:Other) - Complexity = 8
                // Dst: (Select_CC:i32 (ADDIK:i32 R0:i32, 1:i32), (ADDIK:i32 R0:i32, 0:i32), (CMPU:i32 R0:i32, GPR:i32:$L), 3:i32)
/*4953*/      /*Scope*/ 59, /*->5013*/
/*4954*/        OPC_CheckCondCode, ISD::SETULT,
/*4956*/        OPC_MoveParent,
/*4957*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*4960*/        OPC_EmitInteger, MVT::i32, 1, 
/*4963*/        OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #3
/*4972*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*4975*/        OPC_EmitInteger, MVT::i32, 0, 
/*4978*/        OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 4, 5,  // Results = #6
/*4987*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*4990*/        OPC_EmitNode, TARGET_VAL(MBlaze::CMPU), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 7, 0,  // Results = #8
/*4999*/        OPC_EmitInteger, MVT::i32, 4, 
/*5002*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 3, 6, 8, 9, 
                // Src: (setcc:i32 GPR:i32:$L, 0:i32, SETULT:Other) - Complexity = 8
                // Dst: (Select_CC:i32 (ADDIK:i32 R0:i32, 1:i32), (ADDIK:i32 R0:i32, 0:i32), (CMPU:i32 R0:i32, GPR:i32:$L), 4:i32)
/*5013*/      /*Scope*/ 59, /*->5073*/
/*5014*/        OPC_CheckCondCode, ISD::SETUGE,
/*5016*/        OPC_MoveParent,
/*5017*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*5020*/        OPC_EmitInteger, MVT::i32, 1, 
/*5023*/        OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #3
/*5032*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*5035*/        OPC_EmitInteger, MVT::i32, 0, 
/*5038*/        OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 4, 5,  // Results = #6
/*5047*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*5050*/        OPC_EmitNode, TARGET_VAL(MBlaze::CMPU), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 7, 0,  // Results = #8
/*5059*/        OPC_EmitInteger, MVT::i32, 5, 
/*5062*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 3, 6, 8, 9, 
                // Src: (setcc:i32 GPR:i32:$L, 0:i32, SETUGE:Other) - Complexity = 8
                // Dst: (Select_CC:i32 (ADDIK:i32 R0:i32, 1:i32), (ADDIK:i32 R0:i32, 0:i32), (CMPU:i32 R0:i32, GPR:i32:$L), 5:i32)
/*5073*/      /*Scope*/ 59, /*->5133*/
/*5074*/        OPC_CheckCondCode, ISD::SETULE,
/*5076*/        OPC_MoveParent,
/*5077*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*5080*/        OPC_EmitInteger, MVT::i32, 1, 
/*5083*/        OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #3
/*5092*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*5095*/        OPC_EmitInteger, MVT::i32, 0, 
/*5098*/        OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 4, 5,  // Results = #6
/*5107*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*5110*/        OPC_EmitNode, TARGET_VAL(MBlaze::CMPU), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 7, 0,  // Results = #8
/*5119*/        OPC_EmitInteger, MVT::i32, 6, 
/*5122*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 3, 6, 8, 9, 
                // Src: (setcc:i32 GPR:i32:$L, 0:i32, SETULE:Other) - Complexity = 8
                // Dst: (Select_CC:i32 (ADDIK:i32 R0:i32, 1:i32), (ADDIK:i32 R0:i32, 0:i32), (CMPU:i32 R0:i32, GPR:i32:$L), 6:i32)
/*5133*/      0, /*End of Scope*/
/*5134*/    /*Scope*/ 122|128,1/*250*/, /*->5386*/
/*5136*/      OPC_MoveChild, 0,
/*5138*/      OPC_CheckInteger, 0, 
/*5140*/      OPC_MoveParent,
/*5141*/      OPC_RecordChild1, // #0 = $R
/*5142*/      OPC_MoveChild, 2,
/*5144*/      OPC_Scope, 59, /*->5205*/ // 4 children in Scope
/*5146*/        OPC_CheckCondCode, ISD::SETUGT,
/*5148*/        OPC_MoveParent,
/*5149*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*5152*/        OPC_EmitInteger, MVT::i32, 1, 
/*5155*/        OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #3
/*5164*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*5167*/        OPC_EmitInteger, MVT::i32, 0, 
/*5170*/        OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 4, 5,  // Results = #6
/*5179*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*5182*/        OPC_EmitNode, TARGET_VAL(MBlaze::CMPU), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 7,  // Results = #8
/*5191*/        OPC_EmitInteger, MVT::i32, 3, 
/*5194*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 3, 6, 8, 9, 
                // Src: (setcc:i32 0:i32, GPR:i32:$R, SETUGT:Other) - Complexity = 8
                // Dst: (Select_CC:i32 (ADDIK:i32 R0:i32, 1:i32), (ADDIK:i32 R0:i32, 0:i32), (CMPU:i32 GPR:i32:$R, R0:i32), 3:i32)
/*5205*/      /*Scope*/ 59, /*->5265*/
/*5206*/        OPC_CheckCondCode, ISD::SETULT,
/*5208*/        OPC_MoveParent,
/*5209*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*5212*/        OPC_EmitInteger, MVT::i32, 1, 
/*5215*/        OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #3
/*5224*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*5227*/        OPC_EmitInteger, MVT::i32, 0, 
/*5230*/        OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 4, 5,  // Results = #6
/*5239*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*5242*/        OPC_EmitNode, TARGET_VAL(MBlaze::CMPU), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 7,  // Results = #8
/*5251*/        OPC_EmitInteger, MVT::i32, 4, 
/*5254*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 3, 6, 8, 9, 
                // Src: (setcc:i32 0:i32, GPR:i32:$R, SETULT:Other) - Complexity = 8
                // Dst: (Select_CC:i32 (ADDIK:i32 R0:i32, 1:i32), (ADDIK:i32 R0:i32, 0:i32), (CMPU:i32 GPR:i32:$R, R0:i32), 4:i32)
/*5265*/      /*Scope*/ 59, /*->5325*/
/*5266*/        OPC_CheckCondCode, ISD::SETUGE,
/*5268*/        OPC_MoveParent,
/*5269*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*5272*/        OPC_EmitInteger, MVT::i32, 1, 
/*5275*/        OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #3
/*5284*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*5287*/        OPC_EmitInteger, MVT::i32, 0, 
/*5290*/        OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 4, 5,  // Results = #6
/*5299*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*5302*/        OPC_EmitNode, TARGET_VAL(MBlaze::CMPU), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 7,  // Results = #8
/*5311*/        OPC_EmitInteger, MVT::i32, 5, 
/*5314*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 3, 6, 8, 9, 
                // Src: (setcc:i32 0:i32, GPR:i32:$R, SETUGE:Other) - Complexity = 8
                // Dst: (Select_CC:i32 (ADDIK:i32 R0:i32, 1:i32), (ADDIK:i32 R0:i32, 0:i32), (CMPU:i32 GPR:i32:$R, R0:i32), 5:i32)
/*5325*/      /*Scope*/ 59, /*->5385*/
/*5326*/        OPC_CheckCondCode, ISD::SETULE,
/*5328*/        OPC_MoveParent,
/*5329*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*5332*/        OPC_EmitInteger, MVT::i32, 1, 
/*5335*/        OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #3
/*5344*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*5347*/        OPC_EmitInteger, MVT::i32, 0, 
/*5350*/        OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 4, 5,  // Results = #6
/*5359*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*5362*/        OPC_EmitNode, TARGET_VAL(MBlaze::CMPU), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 7,  // Results = #8
/*5371*/        OPC_EmitInteger, MVT::i32, 6, 
/*5374*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 3, 6, 8, 9, 
                // Src: (setcc:i32 0:i32, GPR:i32:$R, SETULE:Other) - Complexity = 8
                // Dst: (Select_CC:i32 (ADDIK:i32 R0:i32, 1:i32), (ADDIK:i32 R0:i32, 0:i32), (CMPU:i32 GPR:i32:$R, R0:i32), 6:i32)
/*5385*/      0, /*End of Scope*/
/*5386*/    /*Scope*/ 114|128,14/*1906*/, /*->7294*/
/*5388*/      OPC_RecordChild0, // #0 = $L
/*5389*/      OPC_Scope, 65|128,4/*577*/, /*->5969*/ // 2 children in Scope
/*5392*/        OPC_CheckChild0Type, MVT::i32,
/*5394*/        OPC_RecordChild1, // #1 = $R
/*5395*/        OPC_MoveChild, 2,
/*5397*/        OPC_Scope, 56, /*->5455*/ // 10 children in Scope
/*5399*/          OPC_CheckCondCode, ISD::SETEQ,
/*5401*/          OPC_MoveParent,
/*5402*/          OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*5405*/          OPC_EmitInteger, MVT::i32, 1, 
/*5408*/          OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3,  // Results = #4
/*5417*/          OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*5420*/          OPC_EmitInteger, MVT::i32, 0, 
/*5423*/          OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 5, 6,  // Results = #7
/*5432*/          OPC_EmitNode, TARGET_VAL(MBlaze::CMP), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #8
/*5441*/          OPC_EmitInteger, MVT::i32, 1, 
/*5444*/          OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                      1/*#VTs*/, MVT::i32, 4/*#Ops*/, 4, 7, 8, 9, 
                  // Src: (setcc:i32 GPR:i32:$L, GPR:i32:$R, SETEQ:Other) - Complexity = 3
                  // Dst: (Select_CC:i32 (ADDIK:i32 R0:i32, 1:i32), (ADDIK:i32 R0:i32, 0:i32), (CMP:i32 GPR:i32:$R, GPR:i32:$L), 1:i32)
/*5455*/        /*Scope*/ 56, /*->5512*/
/*5456*/          OPC_CheckCondCode, ISD::SETNE,
/*5458*/          OPC_MoveParent,
/*5459*/          OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*5462*/          OPC_EmitInteger, MVT::i32, 1, 
/*5465*/          OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3,  // Results = #4
/*5474*/          OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*5477*/          OPC_EmitInteger, MVT::i32, 0, 
/*5480*/          OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 5, 6,  // Results = #7
/*5489*/          OPC_EmitNode, TARGET_VAL(MBlaze::CMP), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #8
/*5498*/          OPC_EmitInteger, MVT::i32, 2, 
/*5501*/          OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                      1/*#VTs*/, MVT::i32, 4/*#Ops*/, 4, 7, 8, 9, 
                  // Src: (setcc:i32 GPR:i32:$L, GPR:i32:$R, SETNE:Other) - Complexity = 3
                  // Dst: (Select_CC:i32 (ADDIK:i32 R0:i32, 1:i32), (ADDIK:i32 R0:i32, 0:i32), (CMP:i32 GPR:i32:$R, GPR:i32:$L), 2:i32)
/*5512*/        /*Scope*/ 56, /*->5569*/
/*5513*/          OPC_CheckCondCode, ISD::SETGT,
/*5515*/          OPC_MoveParent,
/*5516*/          OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*5519*/          OPC_EmitInteger, MVT::i32, 1, 
/*5522*/          OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3,  // Results = #4
/*5531*/          OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*5534*/          OPC_EmitInteger, MVT::i32, 0, 
/*5537*/          OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 5, 6,  // Results = #7
/*5546*/          OPC_EmitNode, TARGET_VAL(MBlaze::CMP), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #8
/*5555*/          OPC_EmitInteger, MVT::i32, 3, 
/*5558*/          OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                      1/*#VTs*/, MVT::i32, 4/*#Ops*/, 4, 7, 8, 9, 
                  // Src: (setcc:i32 GPR:i32:$L, GPR:i32:$R, SETGT:Other) - Complexity = 3
                  // Dst: (Select_CC:i32 (ADDIK:i32 R0:i32, 1:i32), (ADDIK:i32 R0:i32, 0:i32), (CMP:i32 GPR:i32:$R, GPR:i32:$L), 3:i32)
/*5569*/        /*Scope*/ 56, /*->5626*/
/*5570*/          OPC_CheckCondCode, ISD::SETLT,
/*5572*/          OPC_MoveParent,
/*5573*/          OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*5576*/          OPC_EmitInteger, MVT::i32, 1, 
/*5579*/          OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3,  // Results = #4
/*5588*/          OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*5591*/          OPC_EmitInteger, MVT::i32, 0, 
/*5594*/          OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 5, 6,  // Results = #7
/*5603*/          OPC_EmitNode, TARGET_VAL(MBlaze::CMP), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #8
/*5612*/          OPC_EmitInteger, MVT::i32, 4, 
/*5615*/          OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                      1/*#VTs*/, MVT::i32, 4/*#Ops*/, 4, 7, 8, 9, 
                  // Src: (setcc:i32 GPR:i32:$L, GPR:i32:$R, SETLT:Other) - Complexity = 3
                  // Dst: (Select_CC:i32 (ADDIK:i32 R0:i32, 1:i32), (ADDIK:i32 R0:i32, 0:i32), (CMP:i32 GPR:i32:$R, GPR:i32:$L), 4:i32)
/*5626*/        /*Scope*/ 56, /*->5683*/
/*5627*/          OPC_CheckCondCode, ISD::SETGE,
/*5629*/          OPC_MoveParent,
/*5630*/          OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*5633*/          OPC_EmitInteger, MVT::i32, 1, 
/*5636*/          OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3,  // Results = #4
/*5645*/          OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*5648*/          OPC_EmitInteger, MVT::i32, 0, 
/*5651*/          OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 5, 6,  // Results = #7
/*5660*/          OPC_EmitNode, TARGET_VAL(MBlaze::CMP), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #8
/*5669*/          OPC_EmitInteger, MVT::i32, 5, 
/*5672*/          OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                      1/*#VTs*/, MVT::i32, 4/*#Ops*/, 4, 7, 8, 9, 
                  // Src: (setcc:i32 GPR:i32:$L, GPR:i32:$R, SETGE:Other) - Complexity = 3
                  // Dst: (Select_CC:i32 (ADDIK:i32 R0:i32, 1:i32), (ADDIK:i32 R0:i32, 0:i32), (CMP:i32 GPR:i32:$R, GPR:i32:$L), 5:i32)
/*5683*/        /*Scope*/ 56, /*->5740*/
/*5684*/          OPC_CheckCondCode, ISD::SETLE,
/*5686*/          OPC_MoveParent,
/*5687*/          OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*5690*/          OPC_EmitInteger, MVT::i32, 1, 
/*5693*/          OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3,  // Results = #4
/*5702*/          OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*5705*/          OPC_EmitInteger, MVT::i32, 0, 
/*5708*/          OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 5, 6,  // Results = #7
/*5717*/          OPC_EmitNode, TARGET_VAL(MBlaze::CMP), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #8
/*5726*/          OPC_EmitInteger, MVT::i32, 6, 
/*5729*/          OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                      1/*#VTs*/, MVT::i32, 4/*#Ops*/, 4, 7, 8, 9, 
                  // Src: (setcc:i32 GPR:i32:$L, GPR:i32:$R, SETLE:Other) - Complexity = 3
                  // Dst: (Select_CC:i32 (ADDIK:i32 R0:i32, 1:i32), (ADDIK:i32 R0:i32, 0:i32), (CMP:i32 GPR:i32:$R, GPR:i32:$L), 6:i32)
/*5740*/        /*Scope*/ 56, /*->5797*/
/*5741*/          OPC_CheckCondCode, ISD::SETUGT,
/*5743*/          OPC_MoveParent,
/*5744*/          OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*5747*/          OPC_EmitInteger, MVT::i32, 1, 
/*5750*/          OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3,  // Results = #4
/*5759*/          OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*5762*/          OPC_EmitInteger, MVT::i32, 0, 
/*5765*/          OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 5, 6,  // Results = #7
/*5774*/          OPC_EmitNode, TARGET_VAL(MBlaze::CMPU), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #8
/*5783*/          OPC_EmitInteger, MVT::i32, 3, 
/*5786*/          OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                      1/*#VTs*/, MVT::i32, 4/*#Ops*/, 4, 7, 8, 9, 
                  // Src: (setcc:i32 GPR:i32:$L, GPR:i32:$R, SETUGT:Other) - Complexity = 3
                  // Dst: (Select_CC:i32 (ADDIK:i32 R0:i32, 1:i32), (ADDIK:i32 R0:i32, 0:i32), (CMPU:i32 GPR:i32:$R, GPR:i32:$L), 3:i32)
/*5797*/        /*Scope*/ 56, /*->5854*/
/*5798*/          OPC_CheckCondCode, ISD::SETULT,
/*5800*/          OPC_MoveParent,
/*5801*/          OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*5804*/          OPC_EmitInteger, MVT::i32, 1, 
/*5807*/          OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3,  // Results = #4
/*5816*/          OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*5819*/          OPC_EmitInteger, MVT::i32, 0, 
/*5822*/          OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 5, 6,  // Results = #7
/*5831*/          OPC_EmitNode, TARGET_VAL(MBlaze::CMPU), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #8
/*5840*/          OPC_EmitInteger, MVT::i32, 4, 
/*5843*/          OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                      1/*#VTs*/, MVT::i32, 4/*#Ops*/, 4, 7, 8, 9, 
                  // Src: (setcc:i32 GPR:i32:$L, GPR:i32:$R, SETULT:Other) - Complexity = 3
                  // Dst: (Select_CC:i32 (ADDIK:i32 R0:i32, 1:i32), (ADDIK:i32 R0:i32, 0:i32), (CMPU:i32 GPR:i32:$R, GPR:i32:$L), 4:i32)
/*5854*/        /*Scope*/ 56, /*->5911*/
/*5855*/          OPC_CheckCondCode, ISD::SETUGE,
/*5857*/          OPC_MoveParent,
/*5858*/          OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*5861*/          OPC_EmitInteger, MVT::i32, 1, 
/*5864*/          OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3,  // Results = #4
/*5873*/          OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*5876*/          OPC_EmitInteger, MVT::i32, 0, 
/*5879*/          OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 5, 6,  // Results = #7
/*5888*/          OPC_EmitNode, TARGET_VAL(MBlaze::CMPU), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #8
/*5897*/          OPC_EmitInteger, MVT::i32, 5, 
/*5900*/          OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                      1/*#VTs*/, MVT::i32, 4/*#Ops*/, 4, 7, 8, 9, 
                  // Src: (setcc:i32 GPR:i32:$L, GPR:i32:$R, SETUGE:Other) - Complexity = 3
                  // Dst: (Select_CC:i32 (ADDIK:i32 R0:i32, 1:i32), (ADDIK:i32 R0:i32, 0:i32), (CMPU:i32 GPR:i32:$R, GPR:i32:$L), 5:i32)
/*5911*/        /*Scope*/ 56, /*->5968*/
/*5912*/          OPC_CheckCondCode, ISD::SETULE,
/*5914*/          OPC_MoveParent,
/*5915*/          OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*5918*/          OPC_EmitInteger, MVT::i32, 1, 
/*5921*/          OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3,  // Results = #4
/*5930*/          OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*5933*/          OPC_EmitInteger, MVT::i32, 0, 
/*5936*/          OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 5, 6,  // Results = #7
/*5945*/          OPC_EmitNode, TARGET_VAL(MBlaze::CMPU), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #8
/*5954*/          OPC_EmitInteger, MVT::i32, 6, 
/*5957*/          OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                      1/*#VTs*/, MVT::i32, 4/*#Ops*/, 4, 7, 8, 9, 
                  // Src: (setcc:i32 GPR:i32:$L, GPR:i32:$R, SETULE:Other) - Complexity = 3
                  // Dst: (Select_CC:i32 (ADDIK:i32 R0:i32, 1:i32), (ADDIK:i32 R0:i32, 0:i32), (CMPU:i32 GPR:i32:$R, GPR:i32:$L), 6:i32)
/*5968*/        0, /*End of Scope*/
/*5969*/      /*Scope*/ 42|128,10/*1322*/, /*->7293*/
/*5971*/        OPC_CheckChild0Type, MVT::f32,
/*5973*/        OPC_RecordChild1, // #1 = $R
/*5974*/        OPC_MoveChild, 2,
/*5976*/        OPC_Scope, 58, /*->6036*/ // 20 children in Scope
/*5978*/          OPC_CheckCondCode, ISD::SETEQ,
/*5980*/          OPC_MoveParent,
/*5981*/          OPC_CheckPatternPredicate, 0, // (Subtarget.hasFPU())
/*5983*/          OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*5986*/          OPC_EmitInteger, MVT::i32, 1, 
/*5989*/          OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3,  // Results = #4
/*5998*/          OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*6001*/          OPC_EmitInteger, MVT::i32, 0, 
/*6004*/          OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 5, 6,  // Results = #7
/*6013*/          OPC_EmitNode, TARGET_VAL(MBlaze::FCMP_EQ), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #8
/*6022*/          OPC_EmitInteger, MVT::i32, 2, 
/*6025*/          OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                      1/*#VTs*/, MVT::i32, 4/*#Ops*/, 4, 7, 8, 9, 
                  // Src: (setcc:i32 GPR:f32:$L, GPR:f32:$R, SETEQ:Other) - Complexity = 3
                  // Dst: (Select_CC:i32 (ADDIK:i32 R0:i32, 1:i32), (ADDIK:i32 R0:i32, 0:i32), (FCMP_EQ:i32 GPR:f32:$L, GPR:f32:$R), 2:i32)
/*6036*/        /*Scope*/ 58, /*->6095*/
/*6037*/          OPC_CheckCondCode, ISD::SETNE,
/*6039*/          OPC_MoveParent,
/*6040*/          OPC_CheckPatternPredicate, 0, // (Subtarget.hasFPU())
/*6042*/          OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*6045*/          OPC_EmitInteger, MVT::i32, 1, 
/*6048*/          OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3,  // Results = #4
/*6057*/          OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*6060*/          OPC_EmitInteger, MVT::i32, 0, 
/*6063*/          OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 5, 6,  // Results = #7
/*6072*/          OPC_EmitNode, TARGET_VAL(MBlaze::FCMP_EQ), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #8
/*6081*/          OPC_EmitInteger, MVT::i32, 1, 
/*6084*/          OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                      1/*#VTs*/, MVT::i32, 4/*#Ops*/, 4, 7, 8, 9, 
                  // Src: (setcc:i32 GPR:f32:$L, GPR:f32:$R, SETNE:Other) - Complexity = 3
                  // Dst: (Select_CC:i32 (ADDIK:i32 R0:i32, 1:i32), (ADDIK:i32 R0:i32, 0:i32), (FCMP_EQ:i32 GPR:f32:$L, GPR:f32:$R), 1:i32)
/*6095*/        /*Scope*/ 58, /*->6154*/
/*6096*/          OPC_CheckCondCode, ISD::SETOEQ,
/*6098*/          OPC_MoveParent,
/*6099*/          OPC_CheckPatternPredicate, 0, // (Subtarget.hasFPU())
/*6101*/          OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*6104*/          OPC_EmitInteger, MVT::i32, 1, 
/*6107*/          OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3,  // Results = #4
/*6116*/          OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*6119*/          OPC_EmitInteger, MVT::i32, 0, 
/*6122*/          OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 5, 6,  // Results = #7
/*6131*/          OPC_EmitNode, TARGET_VAL(MBlaze::FCMP_EQ), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #8
/*6140*/          OPC_EmitInteger, MVT::i32, 2, 
/*6143*/          OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                      1/*#VTs*/, MVT::i32, 4/*#Ops*/, 4, 7, 8, 9, 
                  // Src: (setcc:i32 GPR:f32:$L, GPR:f32:$R, SETOEQ:Other) - Complexity = 3
                  // Dst: (Select_CC:i32 (ADDIK:i32 R0:i32, 1:i32), (ADDIK:i32 R0:i32, 0:i32), (FCMP_EQ:i32 GPR:f32:$L, GPR:f32:$R), 2:i32)
/*6154*/        /*Scope*/ 58, /*->6213*/
/*6155*/          OPC_CheckCondCode, ISD::SETGT,
/*6157*/          OPC_MoveParent,
/*6158*/          OPC_CheckPatternPredicate, 0, // (Subtarget.hasFPU())
/*6160*/          OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*6163*/          OPC_EmitInteger, MVT::i32, 1, 
/*6166*/          OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3,  // Results = #4
/*6175*/          OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*6178*/          OPC_EmitInteger, MVT::i32, 0, 
/*6181*/          OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 5, 6,  // Results = #7
/*6190*/          OPC_EmitNode, TARGET_VAL(MBlaze::FCMP_GT), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #8
/*6199*/          OPC_EmitInteger, MVT::i32, 2, 
/*6202*/          OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                      1/*#VTs*/, MVT::i32, 4/*#Ops*/, 4, 7, 8, 9, 
                  // Src: (setcc:i32 GPR:f32:$L, GPR:f32:$R, SETGT:Other) - Complexity = 3
                  // Dst: (Select_CC:i32 (ADDIK:i32 R0:i32, 1:i32), (ADDIK:i32 R0:i32, 0:i32), (FCMP_GT:i32 GPR:f32:$L, GPR:f32:$R), 2:i32)
/*6213*/        /*Scope*/ 58, /*->6272*/
/*6214*/          OPC_CheckCondCode, ISD::SETLT,
/*6216*/          OPC_MoveParent,
/*6217*/          OPC_CheckPatternPredicate, 0, // (Subtarget.hasFPU())
/*6219*/          OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*6222*/          OPC_EmitInteger, MVT::i32, 1, 
/*6225*/          OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3,  // Results = #4
/*6234*/          OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*6237*/          OPC_EmitInteger, MVT::i32, 0, 
/*6240*/          OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 5, 6,  // Results = #7
/*6249*/          OPC_EmitNode, TARGET_VAL(MBlaze::FCMP_LT), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #8
/*6258*/          OPC_EmitInteger, MVT::i32, 2, 
/*6261*/          OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                      1/*#VTs*/, MVT::i32, 4/*#Ops*/, 4, 7, 8, 9, 
                  // Src: (setcc:i32 GPR:f32:$L, GPR:f32:$R, SETLT:Other) - Complexity = 3
                  // Dst: (Select_CC:i32 (ADDIK:i32 R0:i32, 1:i32), (ADDIK:i32 R0:i32, 0:i32), (FCMP_LT:i32 GPR:f32:$L, GPR:f32:$R), 2:i32)
/*6272*/        /*Scope*/ 58, /*->6331*/
/*6273*/          OPC_CheckCondCode, ISD::SETGE,
/*6275*/          OPC_MoveParent,
/*6276*/          OPC_CheckPatternPredicate, 0, // (Subtarget.hasFPU())
/*6278*/          OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*6281*/          OPC_EmitInteger, MVT::i32, 1, 
/*6284*/          OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3,  // Results = #4
/*6293*/          OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*6296*/          OPC_EmitInteger, MVT::i32, 0, 
/*6299*/          OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 5, 6,  // Results = #7
/*6308*/          OPC_EmitNode, TARGET_VAL(MBlaze::FCMP_GE), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #8
/*6317*/          OPC_EmitInteger, MVT::i32, 2, 
/*6320*/          OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                      1/*#VTs*/, MVT::i32, 4/*#Ops*/, 4, 7, 8, 9, 
                  // Src: (setcc:i32 GPR:f32:$L, GPR:f32:$R, SETGE:Other) - Complexity = 3
                  // Dst: (Select_CC:i32 (ADDIK:i32 R0:i32, 1:i32), (ADDIK:i32 R0:i32, 0:i32), (FCMP_GE:i32 GPR:f32:$L, GPR:f32:$R), 2:i32)
/*6331*/        /*Scope*/ 58, /*->6390*/
/*6332*/          OPC_CheckCondCode, ISD::SETLE,
/*6334*/          OPC_MoveParent,
/*6335*/          OPC_CheckPatternPredicate, 0, // (Subtarget.hasFPU())
/*6337*/          OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*6340*/          OPC_EmitInteger, MVT::i32, 1, 
/*6343*/          OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3,  // Results = #4
/*6352*/          OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*6355*/          OPC_EmitInteger, MVT::i32, 0, 
/*6358*/          OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 5, 6,  // Results = #7
/*6367*/          OPC_EmitNode, TARGET_VAL(MBlaze::FCMP_LE), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #8
/*6376*/          OPC_EmitInteger, MVT::i32, 2, 
/*6379*/          OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                      1/*#VTs*/, MVT::i32, 4/*#Ops*/, 4, 7, 8, 9, 
                  // Src: (setcc:i32 GPR:f32:$L, GPR:f32:$R, SETLE:Other) - Complexity = 3
                  // Dst: (Select_CC:i32 (ADDIK:i32 R0:i32, 1:i32), (ADDIK:i32 R0:i32, 0:i32), (FCMP_LE:i32 GPR:f32:$L, GPR:f32:$R), 2:i32)
/*6390*/        /*Scope*/ 58, /*->6449*/
/*6391*/          OPC_CheckCondCode, ISD::SETOGT,
/*6393*/          OPC_MoveParent,
/*6394*/          OPC_CheckPatternPredicate, 0, // (Subtarget.hasFPU())
/*6396*/          OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*6399*/          OPC_EmitInteger, MVT::i32, 1, 
/*6402*/          OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3,  // Results = #4
/*6411*/          OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*6414*/          OPC_EmitInteger, MVT::i32, 0, 
/*6417*/          OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 5, 6,  // Results = #7
/*6426*/          OPC_EmitNode, TARGET_VAL(MBlaze::FCMP_GT), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #8
/*6435*/          OPC_EmitInteger, MVT::i32, 2, 
/*6438*/          OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                      1/*#VTs*/, MVT::i32, 4/*#Ops*/, 4, 7, 8, 9, 
                  // Src: (setcc:i32 GPR:f32:$L, GPR:f32:$R, SETOGT:Other) - Complexity = 3
                  // Dst: (Select_CC:i32 (ADDIK:i32 R0:i32, 1:i32), (ADDIK:i32 R0:i32, 0:i32), (FCMP_GT:i32 GPR:f32:$L, GPR:f32:$R), 2:i32)
/*6449*/        /*Scope*/ 58, /*->6508*/
/*6450*/          OPC_CheckCondCode, ISD::SETOLT,
/*6452*/          OPC_MoveParent,
/*6453*/          OPC_CheckPatternPredicate, 0, // (Subtarget.hasFPU())
/*6455*/          OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*6458*/          OPC_EmitInteger, MVT::i32, 1, 
/*6461*/          OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3,  // Results = #4
/*6470*/          OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*6473*/          OPC_EmitInteger, MVT::i32, 0, 
/*6476*/          OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 5, 6,  // Results = #7
/*6485*/          OPC_EmitNode, TARGET_VAL(MBlaze::FCMP_LT), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #8
/*6494*/          OPC_EmitInteger, MVT::i32, 2, 
/*6497*/          OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                      1/*#VTs*/, MVT::i32, 4/*#Ops*/, 4, 7, 8, 9, 
                  // Src: (setcc:i32 GPR:f32:$L, GPR:f32:$R, SETOLT:Other) - Complexity = 3
                  // Dst: (Select_CC:i32 (ADDIK:i32 R0:i32, 1:i32), (ADDIK:i32 R0:i32, 0:i32), (FCMP_LT:i32 GPR:f32:$L, GPR:f32:$R), 2:i32)
/*6508*/        /*Scope*/ 58, /*->6567*/
/*6509*/          OPC_CheckCondCode, ISD::SETOGE,
/*6511*/          OPC_MoveParent,
/*6512*/          OPC_CheckPatternPredicate, 0, // (Subtarget.hasFPU())
/*6514*/          OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*6517*/          OPC_EmitInteger, MVT::i32, 1, 
/*6520*/          OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3,  // Results = #4
/*6529*/          OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*6532*/          OPC_EmitInteger, MVT::i32, 0, 
/*6535*/          OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 5, 6,  // Results = #7
/*6544*/          OPC_EmitNode, TARGET_VAL(MBlaze::FCMP_GE), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #8
/*6553*/          OPC_EmitInteger, MVT::i32, 2, 
/*6556*/          OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                      1/*#VTs*/, MVT::i32, 4/*#Ops*/, 4, 7, 8, 9, 
                  // Src: (setcc:i32 GPR:f32:$L, GPR:f32:$R, SETOGE:Other) - Complexity = 3
                  // Dst: (Select_CC:i32 (ADDIK:i32 R0:i32, 1:i32), (ADDIK:i32 R0:i32, 0:i32), (FCMP_GE:i32 GPR:f32:$L, GPR:f32:$R), 2:i32)
/*6567*/        /*Scope*/ 58, /*->6626*/
/*6568*/          OPC_CheckCondCode, ISD::SETOLE,
/*6570*/          OPC_MoveParent,
/*6571*/          OPC_CheckPatternPredicate, 0, // (Subtarget.hasFPU())
/*6573*/          OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*6576*/          OPC_EmitInteger, MVT::i32, 1, 
/*6579*/          OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3,  // Results = #4
/*6588*/          OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*6591*/          OPC_EmitInteger, MVT::i32, 0, 
/*6594*/          OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 5, 6,  // Results = #7
/*6603*/          OPC_EmitNode, TARGET_VAL(MBlaze::FCMP_LE), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #8
/*6612*/          OPC_EmitInteger, MVT::i32, 2, 
/*6615*/          OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                      1/*#VTs*/, MVT::i32, 4/*#Ops*/, 4, 7, 8, 9, 
                  // Src: (setcc:i32 GPR:f32:$L, GPR:f32:$R, SETOLE:Other) - Complexity = 3
                  // Dst: (Select_CC:i32 (ADDIK:i32 R0:i32, 1:i32), (ADDIK:i32 R0:i32, 0:i32), (FCMP_LE:i32 GPR:f32:$L, GPR:f32:$R), 2:i32)
/*6626*/        /*Scope*/ 58, /*->6685*/
/*6627*/          OPC_CheckCondCode, ISD::SETUNE,
/*6629*/          OPC_MoveParent,
/*6630*/          OPC_CheckPatternPredicate, 0, // (Subtarget.hasFPU())
/*6632*/          OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*6635*/          OPC_EmitInteger, MVT::i32, 1, 
/*6638*/          OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3,  // Results = #4
/*6647*/          OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*6650*/          OPC_EmitInteger, MVT::i32, 0, 
/*6653*/          OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 5, 6,  // Results = #7
/*6662*/          OPC_EmitNode, TARGET_VAL(MBlaze::FCMP_NE), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #8
/*6671*/          OPC_EmitInteger, MVT::i32, 2, 
/*6674*/          OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                      1/*#VTs*/, MVT::i32, 4/*#Ops*/, 4, 7, 8, 9, 
                  // Src: (setcc:i32 GPR:f32:$L, GPR:f32:$R, SETUNE:Other) - Complexity = 3
                  // Dst: (Select_CC:i32 (ADDIK:i32 R0:i32, 1:i32), (ADDIK:i32 R0:i32, 0:i32), (FCMP_NE:i32 GPR:f32:$L, GPR:f32:$R), 2:i32)
/*6685*/        /*Scope*/ 58, /*->6744*/
/*6686*/          OPC_CheckCondCode, ISD::SETO,
/*6688*/          OPC_MoveParent,
/*6689*/          OPC_CheckPatternPredicate, 0, // (Subtarget.hasFPU())
/*6691*/          OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*6694*/          OPC_EmitInteger, MVT::i32, 1, 
/*6697*/          OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3,  // Results = #4
/*6706*/          OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*6709*/          OPC_EmitInteger, MVT::i32, 0, 
/*6712*/          OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 5, 6,  // Results = #7
/*6721*/          OPC_EmitNode, TARGET_VAL(MBlaze::FCMP_UN), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #8
/*6730*/          OPC_EmitInteger, MVT::i32, 1, 
/*6733*/          OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                      1/*#VTs*/, MVT::i32, 4/*#Ops*/, 4, 7, 8, 9, 
                  // Src: (setcc:i32 GPR:f32:$L, GPR:f32:$R, SETO:Other) - Complexity = 3
                  // Dst: (Select_CC:i32 (ADDIK:i32 R0:i32, 1:i32), (ADDIK:i32 R0:i32, 0:i32), (FCMP_UN:i32 GPR:f32:$L, GPR:f32:$R), 1:i32)
/*6744*/        /*Scope*/ 58, /*->6803*/
/*6745*/          OPC_CheckCondCode, ISD::SETUO,
/*6747*/          OPC_MoveParent,
/*6748*/          OPC_CheckPatternPredicate, 0, // (Subtarget.hasFPU())
/*6750*/          OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*6753*/          OPC_EmitInteger, MVT::i32, 1, 
/*6756*/          OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3,  // Results = #4
/*6765*/          OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*6768*/          OPC_EmitInteger, MVT::i32, 0, 
/*6771*/          OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 5, 6,  // Results = #7
/*6780*/          OPC_EmitNode, TARGET_VAL(MBlaze::FCMP_UN), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #8
/*6789*/          OPC_EmitInteger, MVT::i32, 2, 
/*6792*/          OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                      1/*#VTs*/, MVT::i32, 4/*#Ops*/, 4, 7, 8, 9, 
                  // Src: (setcc:i32 GPR:f32:$L, GPR:f32:$R, SETUO:Other) - Complexity = 3
                  // Dst: (Select_CC:i32 (ADDIK:i32 R0:i32, 1:i32), (ADDIK:i32 R0:i32, 0:i32), (FCMP_UN:i32 GPR:f32:$L, GPR:f32:$R), 2:i32)
/*6803*/        /*Scope*/ 103, /*->6907*/
/*6804*/          OPC_CheckCondCode, ISD::SETONE,
/*6806*/          OPC_MoveParent,
/*6807*/          OPC_CheckPatternPredicate, 0, // (Subtarget.hasFPU())
/*6809*/          OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*6812*/          OPC_EmitInteger, MVT::i32, 1, 
/*6815*/          OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3,  // Results = #4
/*6824*/          OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*6827*/          OPC_EmitInteger, MVT::i32, 0, 
/*6830*/          OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 5, 6,  // Results = #7
/*6839*/          OPC_EmitNode, TARGET_VAL(MBlaze::FCMP_UN), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #8
/*6848*/          OPC_EmitNode, TARGET_VAL(MBlaze::FCMP_EQ), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #9
/*6857*/          OPC_Scope, 23, /*->6882*/ // 2 children in Scope
/*6859*/            OPC_EmitNode, TARGET_VAL(MBlaze::XOR), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 8, 9,  // Results = #10
/*6868*/            OPC_EmitInteger, MVT::i32, 2, 
/*6871*/            OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                        1/*#VTs*/, MVT::i32, 4/*#Ops*/, 4, 7, 10, 11, 
                    // Src: (setcc:i32 GPR:f32:$L, GPR:f32:$R, SETONE:Other) - Complexity = 3
                    // Dst: (Select_CC:i32 (ADDIK:i32 R0:i32, 1:i32), (ADDIK:i32 R0:i32, 0:i32), (XOR:i32 (FCMP_UN:i32 GPR:f32:$L, GPR:f32:$R), (FCMP_EQ:i32 GPR:f32:$L, GPR:f32:$R)), 2:i32)
/*6882*/          /*Scope*/ 23, /*->6906*/
/*6883*/            OPC_EmitNode, TARGET_VAL(MBlaze::OR), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 8, 9,  // Results = #10
/*6892*/            OPC_EmitInteger, MVT::i32, 2, 
/*6895*/            OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                        1/*#VTs*/, MVT::i32, 4/*#Ops*/, 4, 7, 10, 11, 
                    // Src: (setcc:i32 GPR:f32:$L, GPR:f32:$R, SETONE:Other) - Complexity = 3
                    // Dst: (Select_CC:i32 (ADDIK:i32 R0:i32, 1:i32), (ADDIK:i32 R0:i32, 0:i32), (OR:i32 (FCMP_UN:i32 GPR:f32:$L, GPR:f32:$R), (FCMP_EQ:i32 GPR:f32:$L, GPR:f32:$R)), 2:i32)
/*6906*/          0, /*End of Scope*/
/*6907*/        /*Scope*/ 76, /*->6984*/
/*6908*/          OPC_CheckCondCode, ISD::SETUEQ,
/*6910*/          OPC_MoveParent,
/*6911*/          OPC_CheckPatternPredicate, 0, // (Subtarget.hasFPU())
/*6913*/          OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*6916*/          OPC_EmitInteger, MVT::i32, 1, 
/*6919*/          OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3,  // Results = #4
/*6928*/          OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*6931*/          OPC_EmitInteger, MVT::i32, 0, 
/*6934*/          OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 5, 6,  // Results = #7
/*6943*/          OPC_EmitNode, TARGET_VAL(MBlaze::FCMP_UN), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #8
/*6952*/          OPC_EmitNode, TARGET_VAL(MBlaze::FCMP_EQ), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #9
/*6961*/          OPC_EmitNode, TARGET_VAL(MBlaze::OR), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 8, 9,  // Results = #10
/*6970*/          OPC_EmitInteger, MVT::i32, 2, 
/*6973*/          OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                      1/*#VTs*/, MVT::i32, 4/*#Ops*/, 4, 7, 10, 11, 
                  // Src: (setcc:i32 GPR:f32:$L, GPR:f32:$R, SETUEQ:Other) - Complexity = 3
                  // Dst: (Select_CC:i32 (ADDIK:i32 R0:i32, 1:i32), (ADDIK:i32 R0:i32, 0:i32), (OR:i32 (FCMP_UN:i32 GPR:f32:$L, GPR:f32:$R), (FCMP_EQ:i32 GPR:f32:$L, GPR:f32:$R)), 2:i32)
/*6984*/        /*Scope*/ 76, /*->7061*/
/*6985*/          OPC_CheckCondCode, ISD::SETUGT,
/*6987*/          OPC_MoveParent,
/*6988*/          OPC_CheckPatternPredicate, 0, // (Subtarget.hasFPU())
/*6990*/          OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*6993*/          OPC_EmitInteger, MVT::i32, 1, 
/*6996*/          OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3,  // Results = #4
/*7005*/          OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*7008*/          OPC_EmitInteger, MVT::i32, 0, 
/*7011*/          OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 5, 6,  // Results = #7
/*7020*/          OPC_EmitNode, TARGET_VAL(MBlaze::FCMP_UN), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #8
/*7029*/          OPC_EmitNode, TARGET_VAL(MBlaze::FCMP_GT), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #9
/*7038*/          OPC_EmitNode, TARGET_VAL(MBlaze::OR), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 8, 9,  // Results = #10
/*7047*/          OPC_EmitInteger, MVT::i32, 2, 
/*7050*/          OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                      1/*#VTs*/, MVT::i32, 4/*#Ops*/, 4, 7, 10, 11, 
                  // Src: (setcc:i32 GPR:f32:$L, GPR:f32:$R, SETUGT:Other) - Complexity = 3
                  // Dst: (Select_CC:i32 (ADDIK:i32 R0:i32, 1:i32), (ADDIK:i32 R0:i32, 0:i32), (OR:i32 (FCMP_UN:i32 GPR:f32:$L, GPR:f32:$R), (FCMP_GT:i32 GPR:f32:$L, GPR:f32:$R)), 2:i32)
/*7061*/        /*Scope*/ 76, /*->7138*/
/*7062*/          OPC_CheckCondCode, ISD::SETULT,
/*7064*/          OPC_MoveParent,
/*7065*/          OPC_CheckPatternPredicate, 0, // (Subtarget.hasFPU())
/*7067*/          OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*7070*/          OPC_EmitInteger, MVT::i32, 1, 
/*7073*/          OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3,  // Results = #4
/*7082*/          OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*7085*/          OPC_EmitInteger, MVT::i32, 0, 
/*7088*/          OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 5, 6,  // Results = #7
/*7097*/          OPC_EmitNode, TARGET_VAL(MBlaze::FCMP_UN), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #8
/*7106*/          OPC_EmitNode, TARGET_VAL(MBlaze::FCMP_LT), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #9
/*7115*/          OPC_EmitNode, TARGET_VAL(MBlaze::OR), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 8, 9,  // Results = #10
/*7124*/          OPC_EmitInteger, MVT::i32, 2, 
/*7127*/          OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                      1/*#VTs*/, MVT::i32, 4/*#Ops*/, 4, 7, 10, 11, 
                  // Src: (setcc:i32 GPR:f32:$L, GPR:f32:$R, SETULT:Other) - Complexity = 3
                  // Dst: (Select_CC:i32 (ADDIK:i32 R0:i32, 1:i32), (ADDIK:i32 R0:i32, 0:i32), (OR:i32 (FCMP_UN:i32 GPR:f32:$L, GPR:f32:$R), (FCMP_LT:i32 GPR:f32:$L, GPR:f32:$R)), 2:i32)
/*7138*/        /*Scope*/ 76, /*->7215*/
/*7139*/          OPC_CheckCondCode, ISD::SETUGE,
/*7141*/          OPC_MoveParent,
/*7142*/          OPC_CheckPatternPredicate, 0, // (Subtarget.hasFPU())
/*7144*/          OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*7147*/          OPC_EmitInteger, MVT::i32, 1, 
/*7150*/          OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3,  // Results = #4
/*7159*/          OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*7162*/          OPC_EmitInteger, MVT::i32, 0, 
/*7165*/          OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 5, 6,  // Results = #7
/*7174*/          OPC_EmitNode, TARGET_VAL(MBlaze::FCMP_UN), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #8
/*7183*/          OPC_EmitNode, TARGET_VAL(MBlaze::FCMP_GE), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #9
/*7192*/          OPC_EmitNode, TARGET_VAL(MBlaze::OR), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 8, 9,  // Results = #10
/*7201*/          OPC_EmitInteger, MVT::i32, 2, 
/*7204*/          OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                      1/*#VTs*/, MVT::i32, 4/*#Ops*/, 4, 7, 10, 11, 
                  // Src: (setcc:i32 GPR:f32:$L, GPR:f32:$R, SETUGE:Other) - Complexity = 3
                  // Dst: (Select_CC:i32 (ADDIK:i32 R0:i32, 1:i32), (ADDIK:i32 R0:i32, 0:i32), (OR:i32 (FCMP_UN:i32 GPR:f32:$L, GPR:f32:$R), (FCMP_GE:i32 GPR:f32:$L, GPR:f32:$R)), 2:i32)
/*7215*/        /*Scope*/ 76, /*->7292*/
/*7216*/          OPC_CheckCondCode, ISD::SETULE,
/*7218*/          OPC_MoveParent,
/*7219*/          OPC_CheckPatternPredicate, 0, // (Subtarget.hasFPU())
/*7221*/          OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*7224*/          OPC_EmitInteger, MVT::i32, 1, 
/*7227*/          OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3,  // Results = #4
/*7236*/          OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*7239*/          OPC_EmitInteger, MVT::i32, 0, 
/*7242*/          OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 5, 6,  // Results = #7
/*7251*/          OPC_EmitNode, TARGET_VAL(MBlaze::FCMP_UN), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #8
/*7260*/          OPC_EmitNode, TARGET_VAL(MBlaze::FCMP_LE), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #9
/*7269*/          OPC_EmitNode, TARGET_VAL(MBlaze::OR), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 8, 9,  // Results = #10
/*7278*/          OPC_EmitInteger, MVT::i32, 2, 
/*7281*/          OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                      1/*#VTs*/, MVT::i32, 4/*#Ops*/, 4, 7, 10, 11, 
                  // Src: (setcc:i32 GPR:f32:$L, GPR:f32:$R, SETULE:Other) - Complexity = 3
                  // Dst: (Select_CC:i32 (ADDIK:i32 R0:i32, 1:i32), (ADDIK:i32 R0:i32, 0:i32), (OR:i32 (FCMP_UN:i32 GPR:f32:$L, GPR:f32:$R), (FCMP_LE:i32 GPR:f32:$L, GPR:f32:$R)), 2:i32)
/*7292*/        0, /*End of Scope*/
/*7293*/      0, /*End of Scope*/
/*7294*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 48,  TARGET_VAL(ISD::SRL),// ->7346
/*7298*/    OPC_RecordChild0, // #0 = $b
/*7299*/    OPC_RecordChild1, // #1 = $c
/*7300*/    OPC_Scope, 21, /*->7323*/ // 3 children in Scope
/*7302*/      OPC_MoveChild, 1,
/*7304*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*7307*/      OPC_CheckPredicate, 15, // Predicate_immZExt5
/*7309*/      OPC_MoveParent,
/*7310*/      OPC_CheckPatternPredicate, 1, // (Subtarget.hasBarrel())
/*7312*/      OPC_EmitConvertToTarget, 1,
/*7314*/      OPC_MorphNodeTo, TARGET_VAL(MBlaze::BSRLI), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
              // Src: (srl:i32 GPR:i32:$b, (imm:i32)<<P:Predicate_immZExt5>>:$c) - Complexity = 7
              // Dst: (BSRLI:i32 GPR:i32:$b, (imm:i32):$c)
/*7323*/    /*Scope*/ 11, /*->7335*/
/*7324*/      OPC_CheckPatternPredicate, 1, // (Subtarget.hasBarrel())
/*7326*/      OPC_MorphNodeTo, TARGET_VAL(MBlaze::BSRL), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (srl:i32 GPR:i32:$b, GPR:i32:$c) - Complexity = 3
              // Dst: (BSRL:i32 GPR:i32:$b, GPR:i32:$c)
/*7335*/    /*Scope*/ 9, /*->7345*/
/*7336*/      OPC_MorphNodeTo, TARGET_VAL(MBlaze::ShiftRL), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (srl:i32 GPR:i32:$L, GPR:i32:$R) - Complexity = 3
              // Dst: (ShiftRL:i32 GPR:i32:$L, GPR:i32:$R)
/*7345*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 48,  TARGET_VAL(ISD::SRA),// ->7397
/*7349*/    OPC_RecordChild0, // #0 = $b
/*7350*/    OPC_RecordChild1, // #1 = $c
/*7351*/    OPC_Scope, 21, /*->7374*/ // 3 children in Scope
/*7353*/      OPC_MoveChild, 1,
/*7355*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*7358*/      OPC_CheckPredicate, 15, // Predicate_immZExt5
/*7360*/      OPC_MoveParent,
/*7361*/      OPC_CheckPatternPredicate, 1, // (Subtarget.hasBarrel())
/*7363*/      OPC_EmitConvertToTarget, 1,
/*7365*/      OPC_MorphNodeTo, TARGET_VAL(MBlaze::BSRAI), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
              // Src: (sra:i32 GPR:i32:$b, (imm:i32)<<P:Predicate_immZExt5>>:$c) - Complexity = 7
              // Dst: (BSRAI:i32 GPR:i32:$b, (imm:i32):$c)
/*7374*/    /*Scope*/ 11, /*->7386*/
/*7375*/      OPC_CheckPatternPredicate, 1, // (Subtarget.hasBarrel())
/*7377*/      OPC_MorphNodeTo, TARGET_VAL(MBlaze::BSRA), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (sra:i32 GPR:i32:$b, GPR:i32:$c) - Complexity = 3
              // Dst: (BSRA:i32 GPR:i32:$b, GPR:i32:$c)
/*7386*/    /*Scope*/ 9, /*->7396*/
/*7387*/      OPC_MorphNodeTo, TARGET_VAL(MBlaze::ShiftRA), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (sra:i32 GPR:i32:$L, GPR:i32:$R) - Complexity = 3
              // Dst: (ShiftRA:i32 GPR:i32:$L, GPR:i32:$R)
/*7396*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 48,  TARGET_VAL(ISD::SHL),// ->7448
/*7400*/    OPC_RecordChild0, // #0 = $b
/*7401*/    OPC_RecordChild1, // #1 = $c
/*7402*/    OPC_Scope, 21, /*->7425*/ // 3 children in Scope
/*7404*/      OPC_MoveChild, 1,
/*7406*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*7409*/      OPC_CheckPredicate, 15, // Predicate_immZExt5
/*7411*/      OPC_MoveParent,
/*7412*/      OPC_CheckPatternPredicate, 1, // (Subtarget.hasBarrel())
/*7414*/      OPC_EmitConvertToTarget, 1,
/*7416*/      OPC_MorphNodeTo, TARGET_VAL(MBlaze::BSLLI), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
              // Src: (shl:i32 GPR:i32:$b, (imm:i32)<<P:Predicate_immZExt5>>:$c) - Complexity = 7
              // Dst: (BSLLI:i32 GPR:i32:$b, (imm:i32):$c)
/*7425*/    /*Scope*/ 11, /*->7437*/
/*7426*/      OPC_CheckPatternPredicate, 1, // (Subtarget.hasBarrel())
/*7428*/      OPC_MorphNodeTo, TARGET_VAL(MBlaze::BSLL), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (shl:i32 GPR:i32:$b, GPR:i32:$c) - Complexity = 3
              // Dst: (BSLL:i32 GPR:i32:$b, GPR:i32:$c)
/*7437*/    /*Scope*/ 9, /*->7447*/
/*7438*/      OPC_MorphNodeTo, TARGET_VAL(MBlaze::ShiftL), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (shl:i32 GPR:i32:$L, GPR:i32:$R) - Complexity = 3
              // Dst: (ShiftL:i32 GPR:i32:$L, GPR:i32:$R)
/*7447*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 34,  TARGET_VAL(ISD::ADD),// ->7485
/*7451*/    OPC_RecordChild0, // #0 = $b
/*7452*/    OPC_RecordChild1, // #1 = $c
/*7453*/    OPC_Scope, 19, /*->7474*/ // 2 children in Scope
/*7455*/      OPC_MoveChild, 1,
/*7457*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*7460*/      OPC_CheckPredicate, 16, // Predicate_immSExt16
/*7462*/      OPC_MoveParent,
/*7463*/      OPC_EmitConvertToTarget, 1,
/*7465*/      OPC_MorphNodeTo, TARGET_VAL(MBlaze::ADDIK), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
              // Src: (add:i32 GPR:i32:$b, (imm:i32)<<P:Predicate_immSExt16>>:$c) - Complexity = 7
              // Dst: (ADDIK:i32 GPR:i32:$b, (imm:i32):$c)
/*7474*/    /*Scope*/ 9, /*->7484*/
/*7475*/      OPC_MorphNodeTo, TARGET_VAL(MBlaze::ADDK), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (add:i32 GPR:i32:$b, GPR:i32:$c) - Complexity = 3
              // Dst: (ADDK:i32 GPR:i32:$b, GPR:i32:$c)
/*7484*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 35,  TARGET_VAL(ISD::SUB),// ->7523
/*7488*/    OPC_RecordChild0, // #0 = $b
/*7489*/    OPC_Scope, 20, /*->7511*/ // 2 children in Scope
/*7491*/      OPC_MoveChild, 0,
/*7493*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*7496*/      OPC_CheckPredicate, 16, // Predicate_immSExt16
/*7498*/      OPC_MoveParent,
/*7499*/      OPC_RecordChild1, // #1 = $c
/*7500*/      OPC_EmitConvertToTarget, 0,
/*7502*/      OPC_MorphNodeTo, TARGET_VAL(MBlaze::RSUBIK), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 1, 
              // Src: (sub:i32 (imm:i32)<<P:Predicate_immSExt16>>:$b, GPR:i32:$c) - Complexity = 7
              // Dst: (RSUBIK:i32 (imm:i32):$b, GPR:i32:$c)
/*7511*/    /*Scope*/ 10, /*->7522*/
/*7512*/      OPC_RecordChild1, // #1 = $c
/*7513*/      OPC_MorphNodeTo, TARGET_VAL(MBlaze::RSUBK), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (sub:i32 GPR:i32:$b, GPR:i32:$c) - Complexity = 3
              // Dst: (RSUBK:i32 GPR:i32:$b, GPR:i32:$c)
/*7522*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 34,  TARGET_VAL(ISD::OR),// ->7560
/*7526*/    OPC_RecordChild0, // #0 = $b
/*7527*/    OPC_RecordChild1, // #1 = $c
/*7528*/    OPC_Scope, 19, /*->7549*/ // 2 children in Scope
/*7530*/      OPC_MoveChild, 1,
/*7532*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*7535*/      OPC_CheckPredicate, 14, // Predicate_immZExt16
/*7537*/      OPC_MoveParent,
/*7538*/      OPC_EmitConvertToTarget, 1,
/*7540*/      OPC_MorphNodeTo, TARGET_VAL(MBlaze::ORI), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
              // Src: (or:i32 GPR:i32:$b, (imm:i32)<<P:Predicate_immZExt16>>:$c) - Complexity = 7
              // Dst: (ORI:i32 GPR:i32:$b, (imm:i32):$c)
/*7549*/    /*Scope*/ 9, /*->7559*/
/*7550*/      OPC_MorphNodeTo, TARGET_VAL(MBlaze::OR), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (or:i32 GPR:i32:$b, GPR:i32:$c) - Complexity = 3
              // Dst: (OR:i32 GPR:i32:$b, GPR:i32:$c)
/*7559*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 34,  TARGET_VAL(ISD::XOR),// ->7597
/*7563*/    OPC_RecordChild0, // #0 = $b
/*7564*/    OPC_RecordChild1, // #1 = $c
/*7565*/    OPC_Scope, 19, /*->7586*/ // 2 children in Scope
/*7567*/      OPC_MoveChild, 1,
/*7569*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*7572*/      OPC_CheckPredicate, 14, // Predicate_immZExt16
/*7574*/      OPC_MoveParent,
/*7575*/      OPC_EmitConvertToTarget, 1,
/*7577*/      OPC_MorphNodeTo, TARGET_VAL(MBlaze::XORI), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
              // Src: (xor:i32 GPR:i32:$b, (imm:i32)<<P:Predicate_immZExt16>>:$c) - Complexity = 7
              // Dst: (XORI:i32 GPR:i32:$b, (imm:i32):$c)
/*7586*/    /*Scope*/ 9, /*->7596*/
/*7587*/      OPC_MorphNodeTo, TARGET_VAL(MBlaze::XOR), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (xor:i32 GPR:i32:$b, GPR:i32:$c) - Complexity = 3
              // Dst: (XOR:i32 GPR:i32:$b, GPR:i32:$c)
/*7596*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 36,  TARGET_VAL(ISD::ADDC),// ->7636
/*7600*/    OPC_RecordChild0, // #0 = $b
/*7601*/    OPC_RecordChild1, // #1 = $c
/*7602*/    OPC_Scope, 20, /*->7624*/ // 2 children in Scope
/*7604*/      OPC_MoveChild, 1,
/*7606*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*7609*/      OPC_CheckPredicate, 16, // Predicate_immSExt16
/*7611*/      OPC_MoveParent,
/*7612*/      OPC_EmitConvertToTarget, 1,
/*7614*/      OPC_MorphNodeTo, TARGET_VAL(MBlaze::ADDI), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 2, 
              // Src: (addc:i32 GPR:i32:$b, (imm:i32)<<P:Predicate_immSExt16>>:$c) - Complexity = 7
              // Dst: (ADDI:i32:i32 GPR:i32:$b, (imm:i32):$c)
/*7624*/    /*Scope*/ 10, /*->7635*/
/*7625*/      OPC_MorphNodeTo, TARGET_VAL(MBlaze::ADD), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (addc:i32 GPR:i32:$b, GPR:i32:$c) - Complexity = 3
              // Dst: (ADD:i32:i32 GPR:i32:$b, GPR:i32:$c)
/*7635*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 37,  TARGET_VAL(ISD::SUBC),// ->7676
/*7639*/    OPC_RecordChild0, // #0 = $b
/*7640*/    OPC_Scope, 21, /*->7663*/ // 2 children in Scope
/*7642*/      OPC_MoveChild, 0,
/*7644*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*7647*/      OPC_CheckPredicate, 16, // Predicate_immSExt16
/*7649*/      OPC_MoveParent,
/*7650*/      OPC_RecordChild1, // #1 = $c
/*7651*/      OPC_EmitConvertToTarget, 0,
/*7653*/      OPC_MorphNodeTo, TARGET_VAL(MBlaze::RSUBI), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 2, 1, 
              // Src: (subc:i32 (imm:i32)<<P:Predicate_immSExt16>>:$b, GPR:i32:$c) - Complexity = 7
              // Dst: (RSUBI:i32:i32 (imm:i32):$b, GPR:i32:$c)
/*7663*/    /*Scope*/ 11, /*->7675*/
/*7664*/      OPC_RecordChild1, // #1 = $c
/*7665*/      OPC_MorphNodeTo, TARGET_VAL(MBlaze::RSUB), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (subc:i32 GPR:i32:$b, GPR:i32:$c) - Complexity = 3
              // Dst: (RSUB:i32:i32 GPR:i32:$b, GPR:i32:$c)
/*7675*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 37,  TARGET_VAL(ISD::ADDE),// ->7716
/*7679*/    OPC_CaptureGlueInput,
/*7680*/    OPC_RecordChild0, // #0 = $b
/*7681*/    OPC_RecordChild1, // #1 = $c
/*7682*/    OPC_Scope, 20, /*->7704*/ // 2 children in Scope
/*7684*/      OPC_MoveChild, 1,
/*7686*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*7689*/      OPC_CheckPredicate, 16, // Predicate_immSExt16
/*7691*/      OPC_MoveParent,
/*7692*/      OPC_EmitConvertToTarget, 1,
/*7694*/      OPC_MorphNodeTo, TARGET_VAL(MBlaze::ADDIC), 0|OPFL_GlueInput|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 2, 
              // Src: (adde:i32 GPR:i32:$b, (imm:i32)<<P:Predicate_immSExt16>>:$c) - Complexity = 7
              // Dst: (ADDIC:i32:i32 GPR:i32:$b, (imm:i32):$c)
/*7704*/    /*Scope*/ 10, /*->7715*/
/*7705*/      OPC_MorphNodeTo, TARGET_VAL(MBlaze::ADDC), 0|OPFL_GlueInput|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (adde:i32 GPR:i32:$b, GPR:i32:$c) - Complexity = 3
              // Dst: (ADDC:i32:i32 GPR:i32:$b, GPR:i32:$c)
/*7715*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 38,  TARGET_VAL(ISD::SUBE),// ->7757
/*7719*/    OPC_CaptureGlueInput,
/*7720*/    OPC_RecordChild0, // #0 = $b
/*7721*/    OPC_Scope, 21, /*->7744*/ // 2 children in Scope
/*7723*/      OPC_MoveChild, 0,
/*7725*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*7728*/      OPC_CheckPredicate, 16, // Predicate_immSExt16
/*7730*/      OPC_MoveParent,
/*7731*/      OPC_RecordChild1, // #1 = $c
/*7732*/      OPC_EmitConvertToTarget, 0,
/*7734*/      OPC_MorphNodeTo, TARGET_VAL(MBlaze::RSUBIC), 0|OPFL_GlueInput|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 2, 1, 
              // Src: (sube:i32 (imm:i32)<<P:Predicate_immSExt16>>:$b, GPR:i32:$c) - Complexity = 7
              // Dst: (RSUBIC:i32:i32 (imm:i32):$b, GPR:i32:$c)
/*7744*/    /*Scope*/ 11, /*->7756*/
/*7745*/      OPC_RecordChild1, // #1 = $c
/*7746*/      OPC_MorphNodeTo, TARGET_VAL(MBlaze::RSUBC), 0|OPFL_GlueInput|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (sube:i32 GPR:i32:$b, GPR:i32:$c) - Complexity = 3
              // Dst: (RSUBC:i32:i32 GPR:i32:$b, GPR:i32:$c)
/*7756*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 38,  TARGET_VAL(ISD::MUL),// ->7798
/*7760*/    OPC_RecordChild0, // #0 = $b
/*7761*/    OPC_RecordChild1, // #1 = $c
/*7762*/    OPC_Scope, 21, /*->7785*/ // 2 children in Scope
/*7764*/      OPC_MoveChild, 1,
/*7766*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*7769*/      OPC_CheckPredicate, 16, // Predicate_immSExt16
/*7771*/      OPC_MoveParent,
/*7772*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasMul())
/*7774*/      OPC_EmitConvertToTarget, 1,
/*7776*/      OPC_MorphNodeTo, TARGET_VAL(MBlaze::MULI), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
              // Src: (mul:i32 GPR:i32:$b, (imm:i32)<<P:Predicate_immSExt16>>:$c) - Complexity = 7
              // Dst: (MULI:i32 GPR:i32:$b, (imm:i32):$c)
/*7785*/    /*Scope*/ 11, /*->7797*/
/*7786*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasMul())
/*7788*/      OPC_MorphNodeTo, TARGET_VAL(MBlaze::MUL), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (mul:i32 GPR:i32:$b, GPR:i32:$c) - Complexity = 3
              // Dst: (MUL:i32 GPR:i32:$b, GPR:i32:$c)
/*7797*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 16,  TARGET_VAL(ISD::CALLSEQ_START),// ->7817
/*7801*/    OPC_RecordNode,   // #0 = 'callseq_start' chained node
/*7802*/    OPC_RecordChild1, // #1 = $amt
/*7803*/    OPC_MoveChild, 1,
/*7805*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*7808*/    OPC_MoveParent,
/*7809*/    OPC_EmitMergeInputChains1_0,
/*7810*/    OPC_MorphNodeTo, TARGET_VAL(MBlaze::ADJCALLSTACKDOWN), 0|OPFL_Chain|OPFL_GlueOutput,
                0/*#VTs*/, 1/*#Ops*/, 1, 
            // Src: (callseq_start (timm:i32):$amt) - Complexity = 6
            // Dst: (ADJCALLSTACKDOWN (timm:i32):$amt)
          /*SwitchOpcode*/ 55,  TARGET_VAL(MBlazeISD::JmpLink),// ->7875
/*7820*/    OPC_RecordNode,   // #0 = 'MBlazeJmpLink' chained node
/*7821*/    OPC_CaptureGlueInput,
/*7822*/    OPC_RecordChild1, // #1 = $dst
/*7823*/    OPC_Scope, 36, /*->7861*/ // 2 children in Scope
/*7825*/      OPC_MoveChild, 1,
/*7827*/      OPC_SwitchOpcode /*2 cases */, 13,  TARGET_VAL(ISD::TargetGlobalAddress),// ->7844
/*7831*/        OPC_MoveParent,
/*7832*/        OPC_EmitMergeInputChains1_0,
/*7833*/        OPC_EmitRegister, MVT::i32, MBlaze::R15,
/*7836*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::BRLID), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    0/*#VTs*/, 2/*#Ops*/, 2, 1, 
                // Src: (MBlazeJmpLink (tglobaladdr:i32):$dst) - Complexity = 6
                // Dst: (BRLID R15:i32, (tglobaladdr:i32):$dst)
              /*SwitchOpcode*/ 13,  TARGET_VAL(ISD::TargetExternalSymbol),// ->7860
/*7847*/        OPC_MoveParent,
/*7848*/        OPC_EmitMergeInputChains1_0,
/*7849*/        OPC_EmitRegister, MVT::i32, MBlaze::R15,
/*7852*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::BRLID), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    0/*#VTs*/, 2/*#Ops*/, 2, 1, 
                // Src: (MBlazeJmpLink (texternalsym:i32):$dst) - Complexity = 6
                // Dst: (BRLID R15:i32, (texternalsym:i32):$dst)
              0, // EndSwitchOpcode
/*7861*/    /*Scope*/ 12, /*->7874*/
/*7862*/      OPC_EmitMergeInputChains1_0,
/*7863*/      OPC_EmitRegister, MVT::i32, MBlaze::R15,
/*7866*/      OPC_MorphNodeTo, TARGET_VAL(MBlaze::BRALD), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                  0/*#VTs*/, 2/*#Ops*/, 2, 1, 
              // Src: (MBlazeJmpLink GPR:i32:$dst) - Complexity = 3
              // Dst: (BRALD R15:i32, GPR:i32:$dst)
/*7874*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 53,  TARGET_VAL(MBlazeISD::Wrap),// ->7931
/*7878*/    OPC_RecordChild0, // #0 = $in
/*7879*/    OPC_MoveChild, 0,
/*7881*/    OPC_SwitchOpcode /*3 cases */, 13,  TARGET_VAL(ISD::TargetGlobalAddress),// ->7898
/*7885*/      OPC_MoveParent,
/*7886*/      OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*7889*/      OPC_MorphNodeTo, TARGET_VAL(MBlaze::ORI), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
              // Src: (MBWrapper:i32 (tglobaladdr:i32):$in) - Complexity = 6
              // Dst: (ORI:i32 R0:i32, (tglobaladdr:i32):$in)
            /*SwitchOpcode*/ 13,  TARGET_VAL(ISD::TargetJumpTable),// ->7914
/*7901*/      OPC_MoveParent,
/*7902*/      OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*7905*/      OPC_MorphNodeTo, TARGET_VAL(MBlaze::ORI), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
              // Src: (MBWrapper:i32 (tjumptable:i32):$in) - Complexity = 6
              // Dst: (ORI:i32 R0:i32, (tjumptable:i32):$in)
            /*SwitchOpcode*/ 13,  TARGET_VAL(ISD::TargetConstantPool),// ->7930
/*7917*/      OPC_MoveParent,
/*7918*/      OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*7921*/      OPC_MorphNodeTo, TARGET_VAL(MBlaze::ORI), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
              // Src: (MBWrapper:i32 (tconstpool:i32):$in) - Complexity = 6
              // Dst: (ORI:i32 R0:i32, (tconstpool:i32):$in)
            0, // EndSwitchOpcode
          /*SwitchOpcode*/ 73,  TARGET_VAL(ISD::Constant),// ->8007
/*7934*/    OPC_Scope, 17, /*->7953*/ // 2 children in Scope
/*7936*/      OPC_CheckInteger, 0, 
/*7938*/      OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*7941*/      OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*7944*/      OPC_MorphNodeTo, TARGET_VAL(MBlaze::ADDK), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: 0:i32 - Complexity = 5
              // Dst: (ADDK:i32 R0:i32, R0:i32)
/*7953*/    /*Scope*/ 52, /*->8006*/
/*7954*/      OPC_RecordNode, // #0 = $imm
/*7955*/      OPC_Scope, 16, /*->7973*/ // 3 children in Scope
/*7957*/        OPC_CheckPredicate, 16, // Predicate_immSExt16
/*7959*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*7962*/        OPC_EmitConvertToTarget, 0,
/*7964*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::ADDIK), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                // Src: (imm:i32)<<P:Predicate_immSExt16>>:$imm - Complexity = 4
                // Dst: (ADDIK:i32 R0:i32, (imm:i32):$imm)
/*7973*/      /*Scope*/ 16, /*->7990*/
/*7974*/        OPC_CheckPredicate, 14, // Predicate_immZExt16
/*7976*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*7979*/        OPC_EmitConvertToTarget, 0,
/*7981*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::ORI), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                // Src: (imm:i32)<<P:Predicate_immZExt16>>:$imm - Complexity = 4
                // Dst: (ORI:i32 R0:i32, (imm:i32):$imm)
/*7990*/      /*Scope*/ 14, /*->8005*/
/*7991*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*7994*/        OPC_EmitConvertToTarget, 0,
/*7996*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::ADDIK), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                // Src: (imm:i32):$imm - Complexity = 3
                // Dst: (ADDIK:i32 R0:i32, (imm:i32):$imm)
/*8005*/      0, /*End of Scope*/
/*8006*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 20,  TARGET_VAL(ISD::ATOMIC_CMP_SWAP),// ->8030
/*8010*/    OPC_RecordMemRef,
/*8011*/    OPC_RecordNode,   // #0 = 'atomic_cmp_swap' chained node
/*8012*/    OPC_RecordChild1, // #1 = $ptr
/*8013*/    OPC_CheckChild1Type, MVT::i32,
/*8015*/    OPC_RecordChild2, // #2 = $cmp
/*8016*/    OPC_RecordChild3, // #3 = $swp
/*8017*/    OPC_CheckPredicate, 17, // Predicate_atomic_cmp_swap_32
/*8019*/    OPC_EmitMergeInputChains1_0,
/*8020*/    OPC_MorphNodeTo, TARGET_VAL(MBlaze::CAS32), 0|OPFL_Chain|OPFL_MemRefs,
                1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 2, 3, 
            // Src: (atomic_cmp_swap:i32 GPR:i32:$ptr, GPR:i32:$cmp, GPR:i32:$swp)<<P:Predicate_atomic_cmp_swap_32>> - Complexity = 4
            // Dst: (CAS32:i32 GPR:i32:$ptr, GPR:i32:$cmp, GPR:i32:$swp)
          /*SwitchOpcode*/ 18,  TARGET_VAL(ISD::ATOMIC_SWAP),// ->8051
/*8033*/    OPC_RecordMemRef,
/*8034*/    OPC_RecordNode,   // #0 = 'atomic_swap' chained node
/*8035*/    OPC_RecordChild1, // #1 = $ptr
/*8036*/    OPC_CheckChild1Type, MVT::i32,
/*8038*/    OPC_RecordChild2, // #2 = $swp
/*8039*/    OPC_CheckPredicate, 18, // Predicate_atomic_swap_32
/*8041*/    OPC_EmitMergeInputChains1_0,
/*8042*/    OPC_MorphNodeTo, TARGET_VAL(MBlaze::SWP32), 0|OPFL_Chain|OPFL_MemRefs,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
            // Src: (atomic_swap:i32 GPR:i32:$ptr, GPR:i32:$swp)<<P:Predicate_atomic_swap_32>> - Complexity = 4
            // Dst: (SWP32:i32 GPR:i32:$ptr, GPR:i32:$swp)
          /*SwitchOpcode*/ 18,  TARGET_VAL(ISD::ATOMIC_LOAD_ADD),// ->8072
/*8054*/    OPC_RecordMemRef,
/*8055*/    OPC_RecordNode,   // #0 = 'atomic_load_add' chained node
/*8056*/    OPC_RecordChild1, // #1 = $ptr
/*8057*/    OPC_CheckChild1Type, MVT::i32,
/*8059*/    OPC_RecordChild2, // #2 = $val
/*8060*/    OPC_CheckPredicate, 19, // Predicate_atomic_load_add_32
/*8062*/    OPC_EmitMergeInputChains1_0,
/*8063*/    OPC_MorphNodeTo, TARGET_VAL(MBlaze::LAA32), 0|OPFL_Chain|OPFL_MemRefs,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
            // Src: (atomic_load_add:i32 GPR:i32:$ptr, GPR:i32:$val)<<P:Predicate_atomic_load_add_32>> - Complexity = 4
            // Dst: (LAA32:i32 GPR:i32:$ptr, GPR:i32:$val)
          /*SwitchOpcode*/ 18,  TARGET_VAL(ISD::ATOMIC_LOAD_SUB),// ->8093
/*8075*/    OPC_RecordMemRef,
/*8076*/    OPC_RecordNode,   // #0 = 'atomic_load_sub' chained node
/*8077*/    OPC_RecordChild1, // #1 = $ptr
/*8078*/    OPC_CheckChild1Type, MVT::i32,
/*8080*/    OPC_RecordChild2, // #2 = $val
/*8081*/    OPC_CheckPredicate, 20, // Predicate_atomic_load_sub_32
/*8083*/    OPC_EmitMergeInputChains1_0,
/*8084*/    OPC_MorphNodeTo, TARGET_VAL(MBlaze::LAS32), 0|OPFL_Chain|OPFL_MemRefs,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
            // Src: (atomic_load_sub:i32 GPR:i32:$ptr, GPR:i32:$val)<<P:Predicate_atomic_load_sub_32>> - Complexity = 4
            // Dst: (LAS32:i32 GPR:i32:$ptr, GPR:i32:$val)
          /*SwitchOpcode*/ 18,  TARGET_VAL(ISD::ATOMIC_LOAD_AND),// ->8114
/*8096*/    OPC_RecordMemRef,
/*8097*/    OPC_RecordNode,   // #0 = 'atomic_load_and' chained node
/*8098*/    OPC_RecordChild1, // #1 = $ptr
/*8099*/    OPC_CheckChild1Type, MVT::i32,
/*8101*/    OPC_RecordChild2, // #2 = $val
/*8102*/    OPC_CheckPredicate, 21, // Predicate_atomic_load_and_32
/*8104*/    OPC_EmitMergeInputChains1_0,
/*8105*/    OPC_MorphNodeTo, TARGET_VAL(MBlaze::LAD32), 0|OPFL_Chain|OPFL_MemRefs,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
            // Src: (atomic_load_and:i32 GPR:i32:$ptr, GPR:i32:$val)<<P:Predicate_atomic_load_and_32>> - Complexity = 4
            // Dst: (LAD32:i32 GPR:i32:$ptr, GPR:i32:$val)
          /*SwitchOpcode*/ 18,  TARGET_VAL(ISD::ATOMIC_LOAD_OR),// ->8135
/*8117*/    OPC_RecordMemRef,
/*8118*/    OPC_RecordNode,   // #0 = 'atomic_load_or' chained node
/*8119*/    OPC_RecordChild1, // #1 = $ptr
/*8120*/    OPC_CheckChild1Type, MVT::i32,
/*8122*/    OPC_RecordChild2, // #2 = $val
/*8123*/    OPC_CheckPredicate, 22, // Predicate_atomic_load_or_32
/*8125*/    OPC_EmitMergeInputChains1_0,
/*8126*/    OPC_MorphNodeTo, TARGET_VAL(MBlaze::LAO32), 0|OPFL_Chain|OPFL_MemRefs,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
            // Src: (atomic_load_or:i32 GPR:i32:$ptr, GPR:i32:$val)<<P:Predicate_atomic_load_or_32>> - Complexity = 4
            // Dst: (LAO32:i32 GPR:i32:$ptr, GPR:i32:$val)
          /*SwitchOpcode*/ 18,  TARGET_VAL(ISD::ATOMIC_LOAD_XOR),// ->8156
/*8138*/    OPC_RecordMemRef,
/*8139*/    OPC_RecordNode,   // #0 = 'atomic_load_xor' chained node
/*8140*/    OPC_RecordChild1, // #1 = $ptr
/*8141*/    OPC_CheckChild1Type, MVT::i32,
/*8143*/    OPC_RecordChild2, // #2 = $val
/*8144*/    OPC_CheckPredicate, 23, // Predicate_atomic_load_xor_32
/*8146*/    OPC_EmitMergeInputChains1_0,
/*8147*/    OPC_MorphNodeTo, TARGET_VAL(MBlaze::LAX32), 0|OPFL_Chain|OPFL_MemRefs,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
            // Src: (atomic_load_xor:i32 GPR:i32:$ptr, GPR:i32:$val)<<P:Predicate_atomic_load_xor_32>> - Complexity = 4
            // Dst: (LAX32:i32 GPR:i32:$ptr, GPR:i32:$val)
          /*SwitchOpcode*/ 18,  TARGET_VAL(ISD::ATOMIC_LOAD_NAND),// ->8177
/*8159*/    OPC_RecordMemRef,
/*8160*/    OPC_RecordNode,   // #0 = 'atomic_load_nand' chained node
/*8161*/    OPC_RecordChild1, // #1 = $ptr
/*8162*/    OPC_CheckChild1Type, MVT::i32,
/*8164*/    OPC_RecordChild2, // #2 = $val
/*8165*/    OPC_CheckPredicate, 24, // Predicate_atomic_load_nand_32
/*8167*/    OPC_EmitMergeInputChains1_0,
/*8168*/    OPC_MorphNodeTo, TARGET_VAL(MBlaze::LAN32), 0|OPFL_Chain|OPFL_MemRefs,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
            // Src: (atomic_load_nand:i32 GPR:i32:$ptr, GPR:i32:$val)<<P:Predicate_atomic_load_nand_32>> - Complexity = 4
            // Dst: (LAN32:i32 GPR:i32:$ptr, GPR:i32:$val)
          /*SwitchOpcode*/ 13,  TARGET_VAL(ISD::MULHS),// ->8193
/*8180*/    OPC_RecordChild0, // #0 = $b
/*8181*/    OPC_RecordChild1, // #1 = $c
/*8182*/    OPC_CheckPatternPredicate, 3, // (Subtarget.hasMul()) && (Subtarget.hasMul64())
/*8184*/    OPC_MorphNodeTo, TARGET_VAL(MBlaze::MULH), 0,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
            // Src: (mulhs:i32 GPR:i32:$b, GPR:i32:$c) - Complexity = 3
            // Dst: (MULH:i32 GPR:i32:$b, GPR:i32:$c)
          /*SwitchOpcode*/ 13,  TARGET_VAL(ISD::MULHU),// ->8209
/*8196*/    OPC_RecordChild0, // #0 = $b
/*8197*/    OPC_RecordChild1, // #1 = $c
/*8198*/    OPC_CheckPatternPredicate, 3, // (Subtarget.hasMul()) && (Subtarget.hasMul64())
/*8200*/    OPC_MorphNodeTo, TARGET_VAL(MBlaze::MULHU), 0,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
            // Src: (mulhu:i32 GPR:i32:$b, GPR:i32:$c) - Complexity = 3
            // Dst: (MULHU:i32 GPR:i32:$b, GPR:i32:$c)
          /*SwitchOpcode*/ 13,  TARGET_VAL(ISD::SDIV),// ->8225
/*8212*/    OPC_RecordChild0, // #0 = $b
/*8213*/    OPC_RecordChild1, // #1 = $c
/*8214*/    OPC_CheckPatternPredicate, 4, // (Subtarget.hasDiv())
/*8216*/    OPC_MorphNodeTo, TARGET_VAL(MBlaze::IDIV), 0,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
            // Src: (sdiv:i32 GPR:i32:$b, GPR:i32:$c) - Complexity = 3
            // Dst: (IDIV:i32 GPR:i32:$b, GPR:i32:$c)
          /*SwitchOpcode*/ 13,  TARGET_VAL(ISD::UDIV),// ->8241
/*8228*/    OPC_RecordChild0, // #0 = $b
/*8229*/    OPC_RecordChild1, // #1 = $c
/*8230*/    OPC_CheckPatternPredicate, 4, // (Subtarget.hasDiv())
/*8232*/    OPC_MorphNodeTo, TARGET_VAL(MBlaze::IDIVU), 0,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
            // Src: (udiv:i32 GPR:i32:$b, GPR:i32:$c) - Complexity = 3
            // Dst: (IDIVU:i32 GPR:i32:$b, GPR:i32:$c)
          /*SwitchOpcode*/ 29,  TARGET_VAL(ISD::SIGN_EXTEND_INREG),// ->8273
/*8244*/    OPC_RecordChild0, // #0 = $src
/*8245*/    OPC_MoveChild, 1,
/*8247*/    OPC_Scope, 11, /*->8260*/ // 2 children in Scope
/*8249*/      OPC_CheckValueType, MVT::i16,
/*8251*/      OPC_MoveParent,
/*8252*/      OPC_MorphNodeTo, TARGET_VAL(MBlaze::SEXT16), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (sext_inreg:i32 GPR:i32:$src, i16:Other) - Complexity = 3
              // Dst: (SEXT16:i32 GPR:i32:$src)
/*8260*/    /*Scope*/ 11, /*->8272*/
/*8261*/      OPC_CheckValueType, MVT::i8,
/*8263*/      OPC_MoveParent,
/*8264*/      OPC_MorphNodeTo, TARGET_VAL(MBlaze::SEXT8), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (sext_inreg:i32 GPR:i32:$src, i8:Other) - Complexity = 3
              // Dst: (SEXT8:i32 GPR:i32:$src)
/*8272*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 15,  TARGET_VAL(MBlazeISD::Ret),// ->8291
/*8276*/    OPC_RecordNode,   // #0 = 'MBlazeRet' chained node
/*8277*/    OPC_CaptureGlueInput,
/*8278*/    OPC_RecordChild1, // #1 = $target
/*8279*/    OPC_EmitMergeInputChains1_0,
/*8280*/    OPC_EmitInteger, MVT::i32, 8, 
/*8283*/    OPC_MorphNodeTo, TARGET_VAL(MBlaze::RTSD), 0|OPFL_Chain|OPFL_GlueInput,
                0/*#VTs*/, 2/*#Ops*/, 1, 2, 
            // Src: (MBlazeRet GPR:i32:$target) - Complexity = 3
            // Dst: (RTSD GPR:i32:$target, 8:i32)
          /*SwitchOpcode*/ 15,  TARGET_VAL(MBlazeISD::IRet),// ->8309
/*8294*/    OPC_RecordNode,   // #0 = 'MBlazeIRet' chained node
/*8295*/    OPC_CaptureGlueInput,
/*8296*/    OPC_RecordChild1, // #1 = $target
/*8297*/    OPC_EmitMergeInputChains1_0,
/*8298*/    OPC_EmitInteger, MVT::i32, 0, 
/*8301*/    OPC_MorphNodeTo, TARGET_VAL(MBlaze::RTID), 0|OPFL_Chain|OPFL_GlueInput,
                0/*#VTs*/, 2/*#Ops*/, 1, 2, 
            // Src: (MBlazeIRet GPR:i32:$target) - Complexity = 3
            // Dst: (RTID GPR:i32:$target, 0:i32)
          /*SwitchOpcode*/ 16,  TARGET_VAL(ISD::BR),// ->8328
/*8312*/    OPC_RecordNode,   // #0 = 'br' chained node
/*8313*/    OPC_RecordChild1, // #1 = $T
/*8314*/    OPC_MoveChild, 1,
/*8316*/    OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*8319*/    OPC_MoveParent,
/*8320*/    OPC_EmitMergeInputChains1_0,
/*8321*/    OPC_MorphNodeTo, TARGET_VAL(MBlaze::BRID), 0|OPFL_Chain,
                0/*#VTs*/, 1/*#Ops*/, 1, 
            // Src: (br (bb:Other):$T) - Complexity = 3
            // Dst: (BRID (bb:Other):$T)
          /*SwitchOpcode*/ 12,  TARGET_VAL(ISD::BRIND),// ->8343
/*8331*/    OPC_RecordNode,   // #0 = 'brind' chained node
/*8332*/    OPC_RecordChild1, // #1 = $T
/*8333*/    OPC_CheckChild1Type, MVT::i32,
/*8335*/    OPC_EmitMergeInputChains1_0,
/*8336*/    OPC_MorphNodeTo, TARGET_VAL(MBlaze::BRAD), 0|OPFL_Chain,
                0/*#VTs*/, 1/*#Ops*/, 1, 
            // Src: (brind GPR:i32:$T) - Complexity = 3
            // Dst: (BRAD GPR:i32:$T)
          /*SwitchOpcode*/ 11,  TARGET_VAL(ISD::FP_TO_SINT),// ->8357
/*8346*/    OPC_RecordChild0, // #0 = $V
/*8347*/    OPC_CheckPatternPredicate, 0, // (Subtarget.hasFPU())
/*8349*/    OPC_MorphNodeTo, TARGET_VAL(MBlaze::FINT), 0,
                1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
            // Src: (fp_to_sint:i32 GPR:f32:$V) - Complexity = 3
            // Dst: (FINT:i32 GPR:f32:$V)
          /*SwitchOpcode*/ 37,  TARGET_VAL(ISD::SELECT),// ->8397
/*8360*/    OPC_RecordChild0, // #0 = $C
/*8361*/    OPC_RecordChild1, // #1 = $T
/*8362*/    OPC_RecordChild2, // #2 = $F
/*8363*/    OPC_SwitchType /*2 cases */, 14,  MVT::i32,// ->8380
/*8366*/      OPC_EmitInteger, MVT::i32, 2, 
/*8369*/      OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                  1/*#VTs*/, MVT::i32, 4/*#Ops*/, 1, 2, 0, 3, 
              // Src: (select:i32 GPR:i32:$C, GPR:i32:$T, GPR:i32:$F) - Complexity = 3
              // Dst: (Select_CC:i32 GPR:i32:$T, GPR:i32:$F, GPR:i32:$C, 2:i32)
            /*SwitchType*/ 14,  MVT::f32,// ->8396
/*8382*/      OPC_EmitInteger, MVT::i32, 2, 
/*8385*/      OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_FCC), 0,
                  1/*#VTs*/, MVT::f32, 4/*#Ops*/, 1, 2, 0, 3, 
              // Src: (select:f32 GPR:i32:$C, GPR:f32:$T, GPR:f32:$F) - Complexity = 3
              // Dst: (Select_FCC:f32 GPR:f32:$T, GPR:f32:$F, GPR:i32:$C, 2:i32)
            0, // EndSwitchType
          /*SwitchOpcode*/ 13,  TARGET_VAL(ISD::FADD),// ->8413
/*8400*/    OPC_RecordChild0, // #0 = $b
/*8401*/    OPC_RecordChild1, // #1 = $c
/*8402*/    OPC_CheckPatternPredicate, 0, // (Subtarget.hasFPU())
/*8404*/    OPC_MorphNodeTo, TARGET_VAL(MBlaze::FADD), 0,
                1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
            // Src: (fadd:f32 GPR:f32:$b, GPR:f32:$c) - Complexity = 3
            // Dst: (FADD:f32 GPR:f32:$b, GPR:f32:$c)
          /*SwitchOpcode*/ 13,  TARGET_VAL(ISD::FSUB),// ->8429
/*8416*/    OPC_RecordChild0, // #0 = $b
/*8417*/    OPC_RecordChild1, // #1 = $c
/*8418*/    OPC_CheckPatternPredicate, 0, // (Subtarget.hasFPU())
/*8420*/    OPC_MorphNodeTo, TARGET_VAL(MBlaze::FRSUB), 0,
                1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
            // Src: (fsub:f32 GPR:f32:$b, GPR:f32:$c) - Complexity = 3
            // Dst: (FRSUB:f32 GPR:f32:$b, GPR:f32:$c)
          /*SwitchOpcode*/ 13,  TARGET_VAL(ISD::FMUL),// ->8445
/*8432*/    OPC_RecordChild0, // #0 = $b
/*8433*/    OPC_RecordChild1, // #1 = $c
/*8434*/    OPC_CheckPatternPredicate, 0, // (Subtarget.hasFPU())
/*8436*/    OPC_MorphNodeTo, TARGET_VAL(MBlaze::FMUL), 0,
                1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
            // Src: (fmul:f32 GPR:f32:$b, GPR:f32:$c) - Complexity = 3
            // Dst: (FMUL:f32 GPR:f32:$b, GPR:f32:$c)
          /*SwitchOpcode*/ 13,  TARGET_VAL(ISD::FDIV),// ->8461
/*8448*/    OPC_RecordChild0, // #0 = $b
/*8449*/    OPC_RecordChild1, // #1 = $c
/*8450*/    OPC_CheckPatternPredicate, 0, // (Subtarget.hasFPU())
/*8452*/    OPC_MorphNodeTo, TARGET_VAL(MBlaze::FDIV), 0,
                1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
            // Src: (fdiv:f32 GPR:f32:$b, GPR:f32:$c) - Complexity = 3
            // Dst: (FDIV:f32 GPR:f32:$b, GPR:f32:$c)
          /*SwitchOpcode*/ 11,  TARGET_VAL(ISD::SINT_TO_FP),// ->8475
/*8464*/    OPC_RecordChild0, // #0 = $V
/*8465*/    OPC_CheckPatternPredicate, 0, // (Subtarget.hasFPU())
/*8467*/    OPC_MorphNodeTo, TARGET_VAL(MBlaze::FLT), 0,
                1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
            // Src: (sint_to_fp:f32 GPR:i32:$V) - Complexity = 3
            // Dst: (FLT:f32 GPR:i32:$V)
          /*SwitchOpcode*/ 11,  TARGET_VAL(ISD::FSQRT),// ->8489
/*8478*/    OPC_RecordChild0, // #0 = $V
/*8479*/    OPC_CheckPatternPredicate, 0, // (Subtarget.hasFPU())
/*8481*/    OPC_MorphNodeTo, TARGET_VAL(MBlaze::FSQRT), 0,
                1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
            // Src: (fsqrt:f32 GPR:f32:$V) - Complexity = 3
            // Dst: (FSQRT:f32 GPR:f32:$V)
          /*SwitchOpcode*/ 15,  TARGET_VAL(ISD::ConstantFP),// ->8507
/*8492*/    OPC_RecordNode,   // #0 = $imm
/*8493*/    OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*8496*/    OPC_EmitConvertToTarget, 0,
/*8498*/    OPC_MorphNodeTo, TARGET_VAL(MBlaze::FORI), 0,
                1/*#VTs*/, MVT::f32, 2/*#Ops*/, 1, 2, 
            // Src: (fpimm:f32):$imm - Complexity = 3
            // Dst: (FORI:f32 R0:i32, (fpimm:f32):$imm)
          0, // EndSwitchOpcode
    0
  }; // Total Array size is 8509 bytes

  // Opcode Histogram:
  // #OPC_Scope                          = 102
  // #OPC_RecordNode                     = 24
  // #OPC_RecordChild                    = 204
  // #OPC_RecordMemRef                   = 10
  // #OPC_CaptureGlueInput               = 6
  // #OPC_MoveChild                      = 142
  // #OPC_MoveParent                     = 315
  // #OPC_CheckSame                      = 0
  // #OPC_CheckPatternPredicate          = 41
  // #OPC_CheckPredicate                 = 98
  // #OPC_CheckOpcode                    = 106
  // #OPC_SwitchOpcode                   = 3
  // #OPC_CheckType                      = 30
  // #OPC_SwitchType                     = 2
  // #OPC_CheckChildType                 = 19
  // #OPC_CheckInteger                   = 64
  // #OPC_CheckCondCode                  = 110
  // #OPC_CheckValueType                 = 2
  // #OPC_CheckComplexPat                = 21
  // #OPC_CheckAndImm                    = 0
  // #OPC_CheckOrImm                     = 0
  // #OPC_CheckFoldableChainNode         = 0
  // #OPC_EmitInteger                    = 185
  // #OPC_EmitStringInteger              = 0
  // #OPC_EmitRegister                   = 137
  // #OPC_EmitConvertToTarget            = 65
  // #OPC_EmitMergeInputChains           = 167
  // #OPC_EmitCopyToReg                  = 0
  // #OPC_EmitNode                       = 187
  // #OPC_EmitNodeXForm                  = 0
  // #OPC_MarkGlueResults                = 0
  // #OPC_CompleteMatch                  = 0
  // #OPC_MorphNodeTo                    = 302

  #undef TARGET_VAL
  return SelectCodeCommon(N, MatcherTable,sizeof(MatcherTable));
}

virtual bool CheckPatternPredicate(unsigned PredNo) const {
  switch (PredNo) {
  default: llvm_unreachable("Invalid predicate in table?");
  case 0: return (Subtarget.hasFPU());
  case 1: return (Subtarget.hasBarrel());
  case 2: return (Subtarget.hasMul());
  case 3: return (Subtarget.hasMul()) && (Subtarget.hasMul64());
  case 4: return (Subtarget.hasDiv());
  }
}

virtual bool CheckNodePredicate(SDNode *Node,
                                unsigned PredNo) const {
  switch (PredNo) {
  default: llvm_unreachable("Invalid predicate in table?");
  case 0: { // Predicate_unindexedstore
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getAddressingMode() == ISD::UNINDEXED;

  }
  case 1: { // Predicate_store
    SDNode *N = Node;

  return !cast<StoreSDNode>(N)->isTruncatingStore();

  }
  case 2: { // Predicate_truncstore
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->isTruncatingStore();

  }
  case 3: { // Predicate_truncstorei8
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 4: { // Predicate_truncstorei16
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 5: { // Predicate_unindexedload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getAddressingMode() == ISD::UNINDEXED;

  }
  case 6: { // Predicate_zextload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::ZEXTLOAD;

  }
  case 7: { // Predicate_zextloadi8
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 8: { // Predicate_zextloadi16
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 9: { // Predicate_load
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::NON_EXTLOAD;

  }
  case 10: { // Predicate_extload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::EXTLOAD;

  }
  case 11: { // Predicate_extloadi8
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 12: { // Predicate_extloadi16
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 13: { // Predicate_immZExt4
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return N->getZExtValue() == ((N->getZExtValue()) & 0xf) ;

  }
  case 14: { // Predicate_immZExt16
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return (N->getZExtValue() >> 16) == 0;

  }
  case 15: { // Predicate_immZExt5
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return N->getZExtValue() == ((N->getZExtValue()) & 0x1f) ;

  }
  case 16: { // Predicate_immSExt16
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return (N->getZExtValue() >> 16) == 0;

  }
  case 17: { // Predicate_atomic_cmp_swap_32
    SDNode *N = Node;

  return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 18: { // Predicate_atomic_swap_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 19: { // Predicate_atomic_load_add_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 20: { // Predicate_atomic_load_sub_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 21: { // Predicate_atomic_load_and_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 22: { // Predicate_atomic_load_or_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 23: { // Predicate_atomic_load_xor_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 24: { // Predicate_atomic_load_nand_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
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
    return SelectAddrRegImm(N, Result[NextRes+0].first, Result[NextRes+1].first);
  case 1:
    Result.resize(NextRes+2);
    return SelectAddrRegReg(N, Result[NextRes+0].first, Result[NextRes+1].first);
  }
}

