/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* DAG Instruction Selector for the XCore target                              *|
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
/*0*/     OPC_SwitchOpcode /*40 cases */, 127|128,1/*255*/,  TARGET_VAL(ISD::ADD),// ->260
/*5*/       OPC_Scope, 34, /*->41*/ // 5 children in Scope
/*7*/         OPC_MoveChild, 0,
/*9*/         OPC_CheckOpcode, TARGET_VAL(ISD::SHL),
/*12*/        OPC_MoveChild, 0,
/*14*/        OPC_CheckInteger, 1, 
/*16*/        OPC_MoveParent,
/*17*/        OPC_RecordChild1, // #0 = $size
/*18*/        OPC_MoveParent,
/*19*/        OPC_MoveChild, 1,
/*21*/        OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*32*/        OPC_MoveParent,
/*33*/        OPC_MorphNodeTo, TARGET_VAL(XCore::MKMSK_2r), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (add:i32 (shl:i32 1:i32, GRRegs:i32:$size), -1:i32) - Complexity = 16
              // Dst: (MKMSK_2r:i32 GRRegs:i32:$size)
/*41*/      /*Scope*/ 39, /*->81*/
/*42*/        OPC_RecordChild0, // #0 = $addr
/*43*/        OPC_MoveChild, 1,
/*45*/        OPC_CheckOpcode, TARGET_VAL(ISD::SHL),
/*48*/        OPC_RecordChild0, // #1 = $offset
/*49*/        OPC_MoveChild, 1,
/*51*/        OPC_Scope, 13, /*->66*/ // 2 children in Scope
/*53*/          OPC_CheckInteger, 2, 
/*55*/          OPC_MoveParent,
/*56*/          OPC_MoveParent,
/*57*/          OPC_MorphNodeTo, TARGET_VAL(XCore::LDAWF_l3r), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (add:i32 GRRegs:i32:$addr, (shl:i32 GRRegs:i32:$offset, 2:i32)) - Complexity = 11
                // Dst: (LDAWF_l3r:i32 GRRegs:i32:$addr, GRRegs:i32:$offset)
/*66*/        /*Scope*/ 13, /*->80*/
/*67*/          OPC_CheckInteger, 1, 
/*69*/          OPC_MoveParent,
/*70*/          OPC_MoveParent,
/*71*/          OPC_MorphNodeTo, TARGET_VAL(XCore::LDA16F_l3r), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (add:i32 GRRegs:i32:$addr, (shl:i32 GRRegs:i32:$offset, 1:i32)) - Complexity = 11
                // Dst: (LDA16F_l3r:i32 GRRegs:i32:$addr, GRRegs:i32:$offset)
/*80*/        0, /*End of Scope*/
/*81*/      /*Scope*/ 40, /*->122*/
/*82*/        OPC_MoveChild, 0,
/*84*/        OPC_CheckOpcode, TARGET_VAL(ISD::SHL),
/*87*/        OPC_RecordChild0, // #0 = $offset
/*88*/        OPC_MoveChild, 1,
/*90*/        OPC_Scope, 14, /*->106*/ // 2 children in Scope
/*92*/          OPC_CheckInteger, 2, 
/*94*/          OPC_MoveParent,
/*95*/          OPC_MoveParent,
/*96*/          OPC_RecordChild1, // #1 = $addr
/*97*/          OPC_MorphNodeTo, TARGET_VAL(XCore::LDAWF_l3r), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (add:i32 (shl:i32 GRRegs:i32:$offset, 2:i32), GRRegs:i32:$addr) - Complexity = 11
                // Dst: (LDAWF_l3r:i32 GRRegs:i32:$addr, GRRegs:i32:$offset)
/*106*/       /*Scope*/ 14, /*->121*/
/*107*/         OPC_CheckInteger, 1, 
/*109*/         OPC_MoveParent,
/*110*/         OPC_MoveParent,
/*111*/         OPC_RecordChild1, // #1 = $addr
/*112*/         OPC_MorphNodeTo, TARGET_VAL(XCore::LDA16F_l3r), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (add:i32 (shl:i32 GRRegs:i32:$offset, 1:i32), GRRegs:i32:$addr) - Complexity = 11
                // Dst: (LDA16F_l3r:i32 GRRegs:i32:$addr, GRRegs:i32:$offset)
/*121*/       0, /*End of Scope*/
/*122*/     /*Scope*/ 44, /*->167*/
/*123*/       OPC_RecordNode, // #0 = $addr
/*124*/       OPC_CheckType, MVT::i32,
/*126*/       OPC_Scope, 12, /*->140*/ // 3 children in Scope
/*128*/         OPC_CheckComplexPat, /*CP*/0, /*#*/0, // SelectADDRspii:$addr #1 #2
/*131*/         OPC_MorphNodeTo, TARGET_VAL(XCore::LDAWFI), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                // Src: ADDRspii:i32:$addr - Complexity = 9
                // Dst: (LDAWFI:i32 ADDRspii:i32:$addr)
/*140*/       /*Scope*/ 12, /*->153*/
/*141*/         OPC_CheckComplexPat, /*CP*/1, /*#*/0, // SelectADDRdpii:$a #1 #2
/*144*/         OPC_MorphNodeTo, TARGET_VAL(XCore::LDAWDP_lru6), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                // Src: ADDRdpii:i32:$a - Complexity = 9
                // Dst: (LDAWDP_lru6:i32 ADDRdpii:i32:$a)
/*153*/       /*Scope*/ 12, /*->166*/
/*154*/         OPC_CheckComplexPat, /*CP*/2, /*#*/0, // SelectADDRcpii:$a #1 #2
/*157*/         OPC_MorphNodeTo, TARGET_VAL(XCore::LDAWCP_lu6), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                // Src: ADDRcpii:i32:$a - Complexity = 9
                // Dst: (LDAWCP_lu6:i32 ADDRcpii:i32:$a)
/*166*/       0, /*End of Scope*/
/*167*/     /*Scope*/ 91, /*->259*/
/*168*/       OPC_RecordChild0, // #0 = $b
/*169*/       OPC_RecordChild1, // #1 = $c
/*170*/       OPC_Scope, 76, /*->248*/ // 2 children in Scope
/*172*/         OPC_MoveChild, 1,
/*174*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*177*/         OPC_Scope, 14, /*->193*/ // 4 children in Scope
/*179*/           OPC_CheckPredicate, 0, // Predicate_immUs
/*181*/           OPC_MoveParent,
/*182*/           OPC_EmitConvertToTarget, 1,
/*184*/           OPC_MorphNodeTo, TARGET_VAL(XCore::ADD_2rus), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                  // Src: (add:i32 GRRegs:i32:$b, (imm:i32)<<P:Predicate_immUs>>:$c) - Complexity = 7
                  // Dst: (ADD_2rus:i32 GRRegs:i32:$b, (imm:i32):$c)
/*193*/         /*Scope*/ 17, /*->211*/
/*194*/           OPC_CheckPredicate, 1, // Predicate_immUs4
/*196*/           OPC_MoveParent,
/*197*/           OPC_EmitConvertToTarget, 1,
/*199*/           OPC_EmitNodeXForm, 0, 2, // div4_xform
/*202*/           OPC_MorphNodeTo, TARGET_VAL(XCore::LDAWF_l2rus), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (add:i32 GRRegs:i32:$addr, (imm:i32)<<P:Predicate_immUs4>>:$offset) - Complexity = 7
                  // Dst: (LDAWF_l2rus:i32 GRRegs:i32:$addr, (div4_xform:i32 (imm:i32)<<P:Predicate_immUs4>>:$offset))
/*211*/         /*Scope*/ 17, /*->229*/
/*212*/           OPC_CheckPredicate, 2, // Predicate_immUsNeg
/*214*/           OPC_MoveParent,
/*215*/           OPC_EmitConvertToTarget, 1,
/*217*/           OPC_EmitNodeXForm, 1, 2, // neg_xform
/*220*/           OPC_MorphNodeTo, TARGET_VAL(XCore::SUB_2rus), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (add:i32 GRRegs:i32:$src1, (imm:i32)<<P:Predicate_immUsNeg>>:$src2) - Complexity = 7
                  // Dst: (SUB_2rus:i32 GRRegs:i32:$src1, (neg_xform:i32 (imm:i32)<<P:Predicate_immUsNeg>>:$src2))
/*229*/         /*Scope*/ 17, /*->247*/
/*230*/           OPC_CheckPredicate, 3, // Predicate_immUs4Neg
/*232*/           OPC_MoveParent,
/*233*/           OPC_EmitConvertToTarget, 1,
/*235*/           OPC_EmitNodeXForm, 2, 2, // div4neg_xform
/*238*/           OPC_MorphNodeTo, TARGET_VAL(XCore::LDAWB_l2rus), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (add:i32 GRRegs:i32:$src1, (imm:i32)<<P:Predicate_immUs4Neg>>:$src2) - Complexity = 7
                  // Dst: (LDAWB_l2rus:i32 GRRegs:i32:$src1, (div4neg_xform:i32 (imm:i32)<<P:Predicate_immUs4Neg>>:$src2))
/*247*/         0, /*End of Scope*/
/*248*/       /*Scope*/ 9, /*->258*/
/*249*/         OPC_MorphNodeTo, TARGET_VAL(XCore::ADD_3r), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (add:i32 GRRegs:i32:$b, GRRegs:i32:$c) - Complexity = 3
                // Dst: (ADD_3r:i32 GRRegs:i32:$b, GRRegs:i32:$c)
/*258*/       0, /*End of Scope*/
/*259*/     0, /*End of Scope*/
          /*SwitchOpcode*/ 45|128,3/*429*/,  TARGET_VAL(ISD::LOAD),// ->693
/*264*/     OPC_RecordMemRef,
/*265*/     OPC_RecordNode,   // #0 = 'ld' chained node
/*266*/     OPC_Scope, 40|128,1/*168*/, /*->437*/ // 4 children in Scope
/*269*/       OPC_MoveChild, 1,
/*271*/       OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*274*/       OPC_Scope, 79, /*->355*/ // 2 children in Scope
/*276*/         OPC_RecordChild0, // #1 = $addr
/*277*/         OPC_MoveChild, 1,
/*279*/         OPC_CheckOpcode, TARGET_VAL(ISD::SHL),
/*282*/         OPC_RecordChild0, // #2 = $offset
/*283*/         OPC_MoveChild, 1,
/*285*/         OPC_Scope, 43, /*->330*/ // 2 children in Scope
/*287*/           OPC_CheckInteger, 1, 
/*289*/           OPC_MoveParent,
/*290*/           OPC_MoveParent,
/*291*/           OPC_CheckType, MVT::i32,
/*293*/           OPC_MoveParent,
/*294*/           OPC_CheckPredicate, 4, // Predicate_unindexedload
/*296*/           OPC_CheckType, MVT::i32,
/*298*/           OPC_Scope, 14, /*->314*/ // 2 children in Scope
/*300*/             OPC_CheckPredicate, 5, // Predicate_sextload
/*302*/             OPC_CheckPredicate, 6, // Predicate_sextloadi16
/*304*/             OPC_EmitMergeInputChains1_0,
/*305*/             OPC_MorphNodeTo, TARGET_VAL(XCore::LD16S_3r), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                    // Src: (ld:i32 (add:i32 GRRegs:i32:$addr, (shl:i32 GRRegs:i32:$offset, 1:i32)))<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 15
                    // Dst: (LD16S_3r:i32 GRRegs:i32:$addr, GRRegs:i32:$offset)
/*314*/           /*Scope*/ 14, /*->329*/
/*315*/             OPC_CheckPredicate, 7, // Predicate_extload
/*317*/             OPC_CheckPredicate, 8, // Predicate_extloadi16
/*319*/             OPC_EmitMergeInputChains1_0,
/*320*/             OPC_MorphNodeTo, TARGET_VAL(XCore::LD16S_3r), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                    // Src: (ld:i32 (add:i32 GRRegs:i32:$addr, (shl:i32 GRRegs:i32:$offset, 1:i32)))<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 15
                    // Dst: (LD16S_3r:i32 GRRegs:i32:$addr, GRRegs:i32:$offset)
/*329*/           0, /*End of Scope*/
/*330*/         /*Scope*/ 23, /*->354*/
/*331*/           OPC_CheckInteger, 2, 
/*333*/           OPC_MoveParent,
/*334*/           OPC_MoveParent,
/*335*/           OPC_CheckType, MVT::i32,
/*337*/           OPC_MoveParent,
/*338*/           OPC_CheckPredicate, 4, // Predicate_unindexedload
/*340*/           OPC_CheckPredicate, 9, // Predicate_load
/*342*/           OPC_CheckType, MVT::i32,
/*344*/           OPC_EmitMergeInputChains1_0,
/*345*/           OPC_MorphNodeTo, TARGET_VAL(XCore::LDW_3r), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (ld:i32 (add:i32 GRRegs:i32:$addr, (shl:i32 GRRegs:i32:$offset, 2:i32)))<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 15
                  // Dst: (LDW_3r:i32 GRRegs:i32:$addr, GRRegs:i32:$offset)
/*354*/         0, /*End of Scope*/
/*355*/       /*Scope*/ 80, /*->436*/
/*356*/         OPC_MoveChild, 0,
/*358*/         OPC_CheckOpcode, TARGET_VAL(ISD::SHL),
/*361*/         OPC_RecordChild0, // #1 = $offset
/*362*/         OPC_MoveChild, 1,
/*364*/         OPC_Scope, 44, /*->410*/ // 2 children in Scope
/*366*/           OPC_CheckInteger, 1, 
/*368*/           OPC_MoveParent,
/*369*/           OPC_MoveParent,
/*370*/           OPC_RecordChild1, // #2 = $addr
/*371*/           OPC_CheckType, MVT::i32,
/*373*/           OPC_MoveParent,
/*374*/           OPC_CheckPredicate, 4, // Predicate_unindexedload
/*376*/           OPC_CheckType, MVT::i32,
/*378*/           OPC_Scope, 14, /*->394*/ // 2 children in Scope
/*380*/             OPC_CheckPredicate, 7, // Predicate_extload
/*382*/             OPC_CheckPredicate, 8, // Predicate_extloadi16
/*384*/             OPC_EmitMergeInputChains1_0,
/*385*/             OPC_MorphNodeTo, TARGET_VAL(XCore::LD16S_3r), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 1, 
                    // Src: (ld:i32 (add:i32 (shl:i32 GRRegs:i32:$offset, 1:i32), GRRegs:i32:$addr))<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 15
                    // Dst: (LD16S_3r:i32 GRRegs:i32:$addr, GRRegs:i32:$offset)
/*394*/           /*Scope*/ 14, /*->409*/
/*395*/             OPC_CheckPredicate, 5, // Predicate_sextload
/*397*/             OPC_CheckPredicate, 6, // Predicate_sextloadi16
/*399*/             OPC_EmitMergeInputChains1_0,
/*400*/             OPC_MorphNodeTo, TARGET_VAL(XCore::LD16S_3r), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 1, 
                    // Src: (ld:i32 (add:i32 (shl:i32 GRRegs:i32:$offset, 1:i32), GRRegs:i32:$addr))<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 15
                    // Dst: (LD16S_3r:i32 GRRegs:i32:$addr, GRRegs:i32:$offset)
/*409*/           0, /*End of Scope*/
/*410*/         /*Scope*/ 24, /*->435*/
/*411*/           OPC_CheckInteger, 2, 
/*413*/           OPC_MoveParent,
/*414*/           OPC_MoveParent,
/*415*/           OPC_RecordChild1, // #2 = $addr
/*416*/           OPC_CheckType, MVT::i32,
/*418*/           OPC_MoveParent,
/*419*/           OPC_CheckPredicate, 4, // Predicate_unindexedload
/*421*/           OPC_CheckPredicate, 9, // Predicate_load
/*423*/           OPC_CheckType, MVT::i32,
/*425*/           OPC_EmitMergeInputChains1_0,
/*426*/           OPC_MorphNodeTo, TARGET_VAL(XCore::LDW_3r), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 1, 
                  // Src: (ld:i32 (add:i32 (shl:i32 GRRegs:i32:$offset, 2:i32), GRRegs:i32:$addr))<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 15
                  // Dst: (LDW_3r:i32 GRRegs:i32:$addr, GRRegs:i32:$offset)
/*435*/         0, /*End of Scope*/
/*436*/       0, /*End of Scope*/
/*437*/     /*Scope*/ 39, /*->477*/
/*438*/       OPC_RecordChild1, // #1 = $addr
/*439*/       OPC_CheckChild1Type, MVT::i32,
/*441*/       OPC_CheckPredicate, 4, // Predicate_unindexedload
/*443*/       OPC_CheckPredicate, 9, // Predicate_load
/*445*/       OPC_CheckType, MVT::i32,
/*447*/       OPC_Scope, 13, /*->462*/ // 2 children in Scope
/*449*/         OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRspii:$addr #2 #3
/*452*/         OPC_EmitMergeInputChains1_0,
/*453*/         OPC_MorphNodeTo, TARGET_VAL(XCore::LDWFI), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i32 ADDRspii:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                // Dst: (LDWFI:i32 ADDRspii:i32:$addr)
/*462*/       /*Scope*/ 13, /*->476*/
/*463*/         OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRdpii:$a #2 #3
/*466*/         OPC_EmitMergeInputChains1_0,
/*467*/         OPC_MorphNodeTo, TARGET_VAL(XCore::LDWDP_lru6), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i32 ADDRdpii:i32:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                // Dst: (LDWDP_lru6:i32 ADDRdpii:i32:$a)
/*476*/       0, /*End of Scope*/
/*477*/     /*Scope*/ 82, /*->560*/
/*478*/       OPC_MoveChild, 1,
/*480*/       OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*483*/       OPC_RecordChild0, // #1 = $addr
/*484*/       OPC_RecordChild1, // #2 = $offset
/*485*/       OPC_Scope, 32, /*->519*/ // 2 children in Scope
/*487*/         OPC_MoveChild, 1,
/*489*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*492*/         OPC_CheckPredicate, 1, // Predicate_immUs4
/*494*/         OPC_MoveParent,
/*495*/         OPC_CheckType, MVT::i32,
/*497*/         OPC_MoveParent,
/*498*/         OPC_CheckPredicate, 4, // Predicate_unindexedload
/*500*/         OPC_CheckPredicate, 9, // Predicate_load
/*502*/         OPC_CheckType, MVT::i32,
/*504*/         OPC_EmitMergeInputChains1_0,
/*505*/         OPC_EmitConvertToTarget, 2,
/*507*/         OPC_EmitNodeXForm, 0, 3, // div4_xform
/*510*/         OPC_MorphNodeTo, TARGET_VAL(XCore::LDW_2rus), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 4, 
                // Src: (ld:i32 (add:i32 GRRegs:i32:$addr, (imm:i32)<<P:Predicate_immUs4>>:$offset))<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 11
                // Dst: (LDW_2rus:i32 GRRegs:i32:$addr, (div4_xform:i32 (imm:i32)<<P:Predicate_immUs4>>:$offset))
/*519*/       /*Scope*/ 39, /*->559*/
/*520*/         OPC_CheckType, MVT::i32,
/*522*/         OPC_MoveParent,
/*523*/         OPC_CheckPredicate, 4, // Predicate_unindexedload
/*525*/         OPC_CheckType, MVT::i32,
/*527*/         OPC_Scope, 14, /*->543*/ // 2 children in Scope
/*529*/           OPC_CheckPredicate, 10, // Predicate_zextload
/*531*/           OPC_CheckPredicate, 11, // Predicate_zextloadi8
/*533*/           OPC_EmitMergeInputChains1_0,
/*534*/           OPC_MorphNodeTo, TARGET_VAL(XCore::LD8U_3r), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (ld:i32 (add:i32 GRRegs:i32:$addr, GRRegs:i32:$offset))<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 7
                  // Dst: (LD8U_3r:i32 GRRegs:i32:$addr, GRRegs:i32:$offset)
/*543*/         /*Scope*/ 14, /*->558*/
/*544*/           OPC_CheckPredicate, 7, // Predicate_extload
/*546*/           OPC_CheckPredicate, 12, // Predicate_extloadi8
/*548*/           OPC_EmitMergeInputChains1_0,
/*549*/           OPC_MorphNodeTo, TARGET_VAL(XCore::LD8U_3r), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (ld:i32 (add:i32 GRRegs:i32:$addr, GRRegs:i32:$offset))<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 7
                  // Dst: (LD8U_3r:i32 GRRegs:i32:$addr, GRRegs:i32:$offset)
/*558*/         0, /*End of Scope*/
/*559*/       0, /*End of Scope*/
/*560*/     /*Scope*/ 2|128,1/*130*/, /*->692*/
/*562*/       OPC_RecordChild1, // #1 = $addr
/*563*/       OPC_CheckChild1Type, MVT::i32,
/*565*/       OPC_CheckPredicate, 4, // Predicate_unindexedload
/*567*/       OPC_CheckType, MVT::i32,
/*569*/       OPC_Scope, 15, /*->586*/ // 4 children in Scope
/*571*/         OPC_CheckPredicate, 9, // Predicate_load
/*573*/         OPC_EmitMergeInputChains1_0,
/*574*/         OPC_EmitInteger, MVT::i32, 0, 
/*577*/         OPC_MorphNodeTo, TARGET_VAL(XCore::LDW_2rus), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                // Src: (ld:i32 GRRegs:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 4
                // Dst: (LDW_2rus:i32 GRRegs:i32:$addr, 0:i32)
/*586*/       /*Scope*/ 25, /*->612*/
/*587*/         OPC_CheckPredicate, 10, // Predicate_zextload
/*589*/         OPC_CheckPredicate, 11, // Predicate_zextloadi8
/*591*/         OPC_EmitMergeInputChains1_0,
/*592*/         OPC_EmitInteger, MVT::i32, 0, 
/*595*/         OPC_EmitNode, TARGET_VAL(XCore::LDC_ru6), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2,  // Results = #3
/*603*/         OPC_MorphNodeTo, TARGET_VAL(XCore::LD8U_3r), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 3, 
                // Src: (ld:i32 GRRegs:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 4
                // Dst: (LD8U_3r:i32 GRRegs:i32:$addr, (LDC_ru6:i32 0:i32))
/*612*/       /*Scope*/ 25, /*->638*/
/*613*/         OPC_CheckPredicate, 5, // Predicate_sextload
/*615*/         OPC_CheckPredicate, 6, // Predicate_sextloadi16
/*617*/         OPC_EmitMergeInputChains1_0,
/*618*/         OPC_EmitInteger, MVT::i32, 0, 
/*621*/         OPC_EmitNode, TARGET_VAL(XCore::LDC_ru6), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2,  // Results = #3
/*629*/         OPC_MorphNodeTo, TARGET_VAL(XCore::LD16S_3r), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 3, 
                // Src: (ld:i32 GRRegs:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 4
                // Dst: (LD16S_3r:i32 GRRegs:i32:$addr, (LDC_ru6:i32 0:i32))
/*638*/       /*Scope*/ 52, /*->691*/
/*639*/         OPC_CheckPredicate, 7, // Predicate_extload
/*641*/         OPC_Scope, 23, /*->666*/ // 2 children in Scope
/*643*/           OPC_CheckPredicate, 12, // Predicate_extloadi8
/*645*/           OPC_EmitMergeInputChains1_0,
/*646*/           OPC_EmitInteger, MVT::i32, 0, 
/*649*/           OPC_EmitNode, TARGET_VAL(XCore::LDC_ru6), 0,
                      1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2,  // Results = #3
/*657*/           OPC_MorphNodeTo, TARGET_VAL(XCore::LD8U_3r), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 3, 
                  // Src: (ld:i32 GRRegs:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 4
                  // Dst: (LD8U_3r:i32 GRRegs:i32:$addr, (LDC_ru6:i32 0:i32))
/*666*/         /*Scope*/ 23, /*->690*/
/*667*/           OPC_CheckPredicate, 8, // Predicate_extloadi16
/*669*/           OPC_EmitMergeInputChains1_0,
/*670*/           OPC_EmitInteger, MVT::i32, 0, 
/*673*/           OPC_EmitNode, TARGET_VAL(XCore::LDC_ru6), 0,
                      1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2,  // Results = #3
/*681*/           OPC_MorphNodeTo, TARGET_VAL(XCore::LD16S_3r), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 3, 
                  // Src: (ld:i32 GRRegs:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 4
                  // Dst: (LD16S_3r:i32 GRRegs:i32:$addr, (LDC_ru6:i32 0:i32))
/*690*/         0, /*End of Scope*/
/*691*/       0, /*End of Scope*/
/*692*/     0, /*End of Scope*/
          /*SwitchOpcode*/ 52|128,2/*308*/,  TARGET_VAL(ISD::STORE),// ->1005
/*697*/     OPC_RecordMemRef,
/*698*/     OPC_RecordNode,   // #0 = 'st' chained node
/*699*/     OPC_RecordChild1, // #1 = $val
/*700*/     OPC_CheckChild1Type, MVT::i32,
/*702*/     OPC_Scope, 124, /*->828*/ // 4 children in Scope
/*704*/       OPC_MoveChild, 2,
/*706*/       OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*709*/       OPC_Scope, 57, /*->768*/ // 2 children in Scope
/*711*/         OPC_RecordChild0, // #2 = $addr
/*712*/         OPC_MoveChild, 1,
/*714*/         OPC_CheckOpcode, TARGET_VAL(ISD::SHL),
/*717*/         OPC_RecordChild0, // #3 = $offset
/*718*/         OPC_MoveChild, 1,
/*720*/         OPC_Scope, 23, /*->745*/ // 2 children in Scope
/*722*/           OPC_CheckInteger, 1, 
/*724*/           OPC_MoveParent,
/*725*/           OPC_MoveParent,
/*726*/           OPC_CheckType, MVT::i32,
/*728*/           OPC_MoveParent,
/*729*/           OPC_CheckPredicate, 13, // Predicate_unindexedstore
/*731*/           OPC_CheckPredicate, 14, // Predicate_truncstore
/*733*/           OPC_CheckPredicate, 15, // Predicate_truncstorei16
/*735*/           OPC_EmitMergeInputChains1_0,
/*736*/           OPC_MorphNodeTo, TARGET_VAL(XCore::ST16_l3r), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 1, 2, 3, 
                  // Src: (st GRRegs:i32:$val, (add:i32 GRRegs:i32:$addr, (shl:i32 GRRegs:i32:$offset, 1:i32)))<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 15
                  // Dst: (ST16_l3r GRRegs:i32:$val, GRRegs:i32:$addr, GRRegs:i32:$offset)
/*745*/         /*Scope*/ 21, /*->767*/
/*746*/           OPC_CheckInteger, 2, 
/*748*/           OPC_MoveParent,
/*749*/           OPC_MoveParent,
/*750*/           OPC_CheckType, MVT::i32,
/*752*/           OPC_MoveParent,
/*753*/           OPC_CheckPredicate, 13, // Predicate_unindexedstore
/*755*/           OPC_CheckPredicate, 16, // Predicate_store
/*757*/           OPC_EmitMergeInputChains1_0,
/*758*/           OPC_MorphNodeTo, TARGET_VAL(XCore::STW_3r), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 1, 2, 3, 
                  // Src: (st GRRegs:i32:$val, (add:i32 GRRegs:i32:$addr, (shl:i32 GRRegs:i32:$offset, 2:i32)))<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 15
                  // Dst: (STW_3r GRRegs:i32:$val, GRRegs:i32:$addr, GRRegs:i32:$offset)
/*767*/         0, /*End of Scope*/
/*768*/       /*Scope*/ 58, /*->827*/
/*769*/         OPC_MoveChild, 0,
/*771*/         OPC_CheckOpcode, TARGET_VAL(ISD::SHL),
/*774*/         OPC_RecordChild0, // #2 = $offset
/*775*/         OPC_MoveChild, 1,
/*777*/         OPC_Scope, 24, /*->803*/ // 2 children in Scope
/*779*/           OPC_CheckInteger, 1, 
/*781*/           OPC_MoveParent,
/*782*/           OPC_MoveParent,
/*783*/           OPC_RecordChild1, // #3 = $addr
/*784*/           OPC_CheckType, MVT::i32,
/*786*/           OPC_MoveParent,
/*787*/           OPC_CheckPredicate, 13, // Predicate_unindexedstore
/*789*/           OPC_CheckPredicate, 14, // Predicate_truncstore
/*791*/           OPC_CheckPredicate, 15, // Predicate_truncstorei16
/*793*/           OPC_EmitMergeInputChains1_0,
/*794*/           OPC_MorphNodeTo, TARGET_VAL(XCore::ST16_l3r), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 1, 3, 2, 
                  // Src: (st GRRegs:i32:$val, (add:i32 (shl:i32 GRRegs:i32:$offset, 1:i32), GRRegs:i32:$addr))<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 15
                  // Dst: (ST16_l3r GRRegs:i32:$val, GRRegs:i32:$addr, GRRegs:i32:$offset)
/*803*/         /*Scope*/ 22, /*->826*/
/*804*/           OPC_CheckInteger, 2, 
/*806*/           OPC_MoveParent,
/*807*/           OPC_MoveParent,
/*808*/           OPC_RecordChild1, // #3 = $addr
/*809*/           OPC_CheckType, MVT::i32,
/*811*/           OPC_MoveParent,
/*812*/           OPC_CheckPredicate, 13, // Predicate_unindexedstore
/*814*/           OPC_CheckPredicate, 16, // Predicate_store
/*816*/           OPC_EmitMergeInputChains1_0,
/*817*/           OPC_MorphNodeTo, TARGET_VAL(XCore::STW_3r), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 1, 3, 2, 
                  // Src: (st GRRegs:i32:$val, (add:i32 (shl:i32 GRRegs:i32:$offset, 2:i32), GRRegs:i32:$addr))<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 15
                  // Dst: (STW_3r GRRegs:i32:$val, GRRegs:i32:$addr, GRRegs:i32:$offset)
/*826*/         0, /*End of Scope*/
/*827*/       0, /*End of Scope*/
/*828*/     /*Scope*/ 37, /*->866*/
/*829*/       OPC_RecordChild2, // #2 = $addr
/*830*/       OPC_CheckChild2Type, MVT::i32,
/*832*/       OPC_CheckPredicate, 13, // Predicate_unindexedstore
/*834*/       OPC_CheckPredicate, 16, // Predicate_store
/*836*/       OPC_Scope, 13, /*->851*/ // 2 children in Scope
/*838*/         OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectADDRspii:$addr #3 #4
/*841*/         OPC_EmitMergeInputChains1_0,
/*842*/         OPC_MorphNodeTo, TARGET_VAL(XCore::STWFI), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                // Src: (st GRRegs:i32:$src, ADDRspii:i32:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                // Dst: (STWFI GRRegs:i32:$src, ADDRspii:i32:$addr)
/*851*/       /*Scope*/ 13, /*->865*/
/*852*/         OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectADDRdpii:$addr #3 #4
/*855*/         OPC_EmitMergeInputChains1_0,
/*856*/         OPC_MorphNodeTo, TARGET_VAL(XCore::STWDP_lru6), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                // Src: (st GRRegs:i32:$val, ADDRdpii:i32:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                // Dst: (STWDP_lru6 GRRegs:i32:$val, ADDRdpii:i32:$addr)
/*865*/       0, /*End of Scope*/
/*866*/     /*Scope*/ 60, /*->927*/
/*867*/       OPC_MoveChild, 2,
/*869*/       OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*872*/       OPC_RecordChild0, // #2 = $addr
/*873*/       OPC_RecordChild1, // #3 = $offset
/*874*/       OPC_Scope, 30, /*->906*/ // 2 children in Scope
/*876*/         OPC_MoveChild, 1,
/*878*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*881*/         OPC_CheckPredicate, 1, // Predicate_immUs4
/*883*/         OPC_MoveParent,
/*884*/         OPC_CheckType, MVT::i32,
/*886*/         OPC_MoveParent,
/*887*/         OPC_CheckPredicate, 13, // Predicate_unindexedstore
/*889*/         OPC_CheckPredicate, 16, // Predicate_store
/*891*/         OPC_EmitMergeInputChains1_0,
/*892*/         OPC_EmitConvertToTarget, 3,
/*894*/         OPC_EmitNodeXForm, 0, 4, // div4_xform
/*897*/         OPC_MorphNodeTo, TARGET_VAL(XCore::STW_2rus), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 3/*#Ops*/, 1, 2, 5, 
                // Src: (st GRRegs:i32:$val, (add:i32 GRRegs:i32:$addr, (imm:i32)<<P:Predicate_immUs4>>:$offset))<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 11
                // Dst: (STW_2rus GRRegs:i32:$val, GRRegs:i32:$addr, (div4_xform:i32 (imm:i32)<<P:Predicate_immUs4>>:$offset))
/*906*/       /*Scope*/ 19, /*->926*/
/*907*/         OPC_CheckType, MVT::i32,
/*909*/         OPC_MoveParent,
/*910*/         OPC_CheckPredicate, 13, // Predicate_unindexedstore
/*912*/         OPC_CheckPredicate, 14, // Predicate_truncstore
/*914*/         OPC_CheckPredicate, 17, // Predicate_truncstorei8
/*916*/         OPC_EmitMergeInputChains1_0,
/*917*/         OPC_MorphNodeTo, TARGET_VAL(XCore::ST8_l3r), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 3/*#Ops*/, 1, 2, 3, 
                // Src: (st GRRegs:i32:$val, (add:i32 GRRegs:i32:$addr, GRRegs:i32:$offset))<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 7
                // Dst: (ST8_l3r GRRegs:i32:$val, GRRegs:i32:$addr, GRRegs:i32:$offset)
/*926*/       0, /*End of Scope*/
/*927*/     /*Scope*/ 76, /*->1004*/
/*928*/       OPC_RecordChild2, // #2 = $addr
/*929*/       OPC_CheckChild2Type, MVT::i32,
/*931*/       OPC_CheckPredicate, 13, // Predicate_unindexedstore
/*933*/       OPC_Scope, 15, /*->950*/ // 2 children in Scope
/*935*/         OPC_CheckPredicate, 16, // Predicate_store
/*937*/         OPC_EmitMergeInputChains1_0,
/*938*/         OPC_EmitInteger, MVT::i32, 0, 
/*941*/         OPC_MorphNodeTo, TARGET_VAL(XCore::STW_2rus), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 3/*#Ops*/, 1, 2, 3, 
                // Src: (st GRRegs:i32:$val, GRRegs:i32:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 4
                // Dst: (STW_2rus GRRegs:i32:$val, GRRegs:i32:$addr, 0:i32)
/*950*/       /*Scope*/ 52, /*->1003*/
/*951*/         OPC_CheckPredicate, 14, // Predicate_truncstore
/*953*/         OPC_Scope, 23, /*->978*/ // 2 children in Scope
/*955*/           OPC_CheckPredicate, 17, // Predicate_truncstorei8
/*957*/           OPC_EmitMergeInputChains1_0,
/*958*/           OPC_EmitInteger, MVT::i32, 0, 
/*961*/           OPC_EmitNode, TARGET_VAL(XCore::LDC_ru6), 0,
                      1/*#VTs*/, MVT::i32, 1/*#Ops*/, 3,  // Results = #4
/*969*/           OPC_MorphNodeTo, TARGET_VAL(XCore::ST8_l3r), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 1, 2, 4, 
                  // Src: (st GRRegs:i32:$val, GRRegs:i32:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 4
                  // Dst: (ST8_l3r GRRegs:i32:$val, GRRegs:i32:$addr, (LDC_ru6:i32 0:i32))
/*978*/         /*Scope*/ 23, /*->1002*/
/*979*/           OPC_CheckPredicate, 15, // Predicate_truncstorei16
/*981*/           OPC_EmitMergeInputChains1_0,
/*982*/           OPC_EmitInteger, MVT::i32, 0, 
/*985*/           OPC_EmitNode, TARGET_VAL(XCore::LDC_ru6), 0,
                      1/*#VTs*/, MVT::i32, 1/*#Ops*/, 3,  // Results = #4
/*993*/           OPC_MorphNodeTo, TARGET_VAL(XCore::ST16_l3r), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 1, 2, 4, 
                  // Src: (st GRRegs:i32:$val, GRRegs:i32:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 4
                  // Dst: (ST16_l3r GRRegs:i32:$val, GRRegs:i32:$addr, (LDC_ru6:i32 0:i32))
/*1002*/        0, /*End of Scope*/
/*1003*/      0, /*End of Scope*/
/*1004*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 94,  TARGET_VAL(ISD::SRA),// ->1102
/*1008*/    OPC_Scope, 35, /*->1045*/ // 2 children in Scope
/*1010*/      OPC_MoveChild, 0,
/*1012*/      OPC_CheckOpcode, TARGET_VAL(ISD::SHL),
/*1015*/      OPC_RecordChild0, // #0 = $src
/*1016*/      OPC_RecordChild1, // #1 = $imm
/*1017*/      OPC_MoveChild, 1,
/*1019*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1022*/      OPC_CheckPredicate, 18, // Predicate_immBpwSubBitp
/*1024*/      OPC_MoveParent,
/*1025*/      OPC_MoveParent,
/*1026*/      OPC_MoveChild, 1,
/*1028*/      OPC_CheckSame, 1,
/*1030*/      OPC_MoveParent,
/*1031*/      OPC_EmitConvertToTarget, 1,
/*1033*/      OPC_EmitNodeXForm, 3, 2, // bpwsub_xform
/*1036*/      OPC_MorphNodeTo, TARGET_VAL(XCore::SEXT_rus), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
              // Src: (sra:i32 (shl:i32 GRRegs:i32:$src, (imm:i32)<<P:Predicate_immBpwSubBitp>>:$imm), (imm:i32)<<P:Predicate_immBpwSubBitp>>:$imm) - Complexity = 14
              // Dst: (SEXT_rus:i32 GRRegs:i32:$src, (bpwsub_xform:i32 (imm:i32)<<P:Predicate_immBpwSubBitp>>:$imm))
/*1045*/    /*Scope*/ 55, /*->1101*/
/*1046*/      OPC_RecordChild0, // #0 = $src
/*1047*/      OPC_Scope, 17, /*->1066*/ // 2 children in Scope
/*1049*/        OPC_MoveChild, 1,
/*1051*/        OPC_CheckInteger, 31, 
/*1053*/        OPC_MoveParent,
/*1054*/        OPC_EmitInteger, MVT::i32, 32, 
/*1057*/        OPC_MorphNodeTo, TARGET_VAL(XCore::ASHR_l2rus), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (sra:i32 GRRegs:i32:$src, 31:i32) - Complexity = 8
                // Dst: (ASHR_l2rus:i32 GRRegs:i32:$src, 32:i32)
/*1066*/      /*Scope*/ 33, /*->1100*/
/*1067*/        OPC_RecordChild1, // #1 = $c
/*1068*/        OPC_Scope, 19, /*->1089*/ // 2 children in Scope
/*1070*/          OPC_MoveChild, 1,
/*1072*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1075*/          OPC_CheckPredicate, 19, // Predicate_immBitp
/*1077*/          OPC_MoveParent,
/*1078*/          OPC_EmitConvertToTarget, 1,
/*1080*/          OPC_MorphNodeTo, TARGET_VAL(XCore::ASHR_l2rus), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                  // Src: (sra:i32 GRRegs:i32:$b, (imm:i32)<<P:Predicate_immBitp>>:$c) - Complexity = 7
                  // Dst: (ASHR_l2rus:i32 GRRegs:i32:$b, (imm:i32):$c)
/*1089*/        /*Scope*/ 9, /*->1099*/
/*1090*/          OPC_MorphNodeTo, TARGET_VAL(XCore::ASHR_l3r), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (sra:i32 GRRegs:i32:$b, GRRegs:i32:$c) - Complexity = 3
                  // Dst: (ASHR_l3r:i32 GRRegs:i32:$b, GRRegs:i32:$c)
/*1099*/        0, /*End of Scope*/
/*1100*/      0, /*End of Scope*/
/*1101*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 0|128,5/*640*/,  TARGET_VAL(ISD::INTRINSIC_VOID),// ->1746
/*1106*/    OPC_RecordNode,   // #0 = 'intrinsic_void' chained node
/*1107*/    OPC_MoveChild, 1,
/*1109*/    OPC_Scope, 58, /*->1169*/ // 28 children in Scope
/*1111*/      OPC_CheckInteger, 38|128,19/*2470*/, 
/*1114*/      OPC_MoveParent,
/*1115*/      OPC_RecordChild2, // #1 = $r
/*1116*/      OPC_CheckChild2Type, MVT::i32,
/*1118*/      OPC_RecordChild3, // #2 = $val
/*1119*/      OPC_Scope, 37, /*->1158*/ // 2 children in Scope
/*1121*/        OPC_MoveChild, 3,
/*1123*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1126*/        OPC_Scope, 14, /*->1142*/ // 2 children in Scope
/*1128*/          OPC_CheckPredicate, 20, // Predicate_immU6
/*1130*/          OPC_MoveParent,
/*1131*/          OPC_EmitMergeInputChains1_0,
/*1132*/          OPC_EmitConvertToTarget, 2,
/*1134*/          OPC_MorphNodeTo, TARGET_VAL(XCore::SETC_ru6), 0|OPFL_Chain,
                      0/*#VTs*/, 2/*#Ops*/, 1, 3, 
                  // Src: (intrinsic_void 2470:iPTR, GRRegs:i32:$r, (imm:i32)<<P:Predicate_immU6>>:$val) - Complexity = 12
                  // Dst: (SETC_ru6 GRRegs:i32:$r, (imm:i32):$val)
/*1142*/        /*Scope*/ 14, /*->1157*/
/*1143*/          OPC_CheckPredicate, 21, // Predicate_immU16
/*1145*/          OPC_MoveParent,
/*1146*/          OPC_EmitMergeInputChains1_0,
/*1147*/          OPC_EmitConvertToTarget, 2,
/*1149*/          OPC_MorphNodeTo, TARGET_VAL(XCore::SETC_lru6), 0|OPFL_Chain,
                      0/*#VTs*/, 2/*#Ops*/, 1, 3, 
                  // Src: (intrinsic_void 2470:iPTR, GRRegs:i32:$r, (imm:i32)<<P:Predicate_immU16>>:$val) - Complexity = 12
                  // Dst: (SETC_lru6 GRRegs:i32:$r, (imm:i32):$val)
/*1157*/        0, /*End of Scope*/
/*1158*/      /*Scope*/ 9, /*->1168*/
/*1159*/        OPC_EmitMergeInputChains1_0,
/*1160*/        OPC_MorphNodeTo, TARGET_VAL(XCore::SETC_l2r), 0|OPFL_Chain,
                    0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                // Src: (intrinsic_void 2470:iPTR, GRRegs:i32:$r, GRRegs:i32:$val) - Complexity = 8
                // Dst: (SETC_l2r GRRegs:i32:$r, GRRegs:i32:$val)
/*1168*/      0, /*End of Scope*/
/*1169*/    /*Scope*/ 40, /*->1210*/
/*1170*/      OPC_CheckInteger, 46|128,19/*2478*/, 
/*1173*/      OPC_MoveParent,
/*1174*/      OPC_RecordChild2, // #1 = $b
/*1175*/      OPC_MoveChild, 2,
/*1177*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1180*/      OPC_Scope, 13, /*->1195*/ // 2 children in Scope
/*1182*/        OPC_CheckPredicate, 20, // Predicate_immU6
/*1184*/        OPC_MoveParent,
/*1185*/        OPC_EmitMergeInputChains1_0,
/*1186*/        OPC_EmitConvertToTarget, 1,
/*1188*/        OPC_MorphNodeTo, TARGET_VAL(XCore::SETSR_u6), 0|OPFL_Chain,
                    0/*#VTs*/, 1/*#Ops*/, 2, 
                // Src: (intrinsic_void 2478:iPTR, (imm:i32)<<P:Predicate_immU6>>:$b) - Complexity = 12
                // Dst: (SETSR_u6 (imm:i32):$b)
/*1195*/      /*Scope*/ 13, /*->1209*/
/*1196*/        OPC_CheckPredicate, 21, // Predicate_immU16
/*1198*/        OPC_MoveParent,
/*1199*/        OPC_EmitMergeInputChains1_0,
/*1200*/        OPC_EmitConvertToTarget, 1,
/*1202*/        OPC_MorphNodeTo, TARGET_VAL(XCore::SETSR_lu6), 0|OPFL_Chain,
                    0/*#VTs*/, 1/*#Ops*/, 2, 
                // Src: (intrinsic_void 2478:iPTR, (imm:i32)<<P:Predicate_immU16>>:$b) - Complexity = 12
                // Dst: (SETSR_lu6 (imm:i32):$b)
/*1209*/      0, /*End of Scope*/
/*1210*/    /*Scope*/ 40, /*->1251*/
/*1211*/      OPC_CheckInteger, 9|128,19/*2441*/, 
/*1214*/      OPC_MoveParent,
/*1215*/      OPC_RecordChild2, // #1 = $b
/*1216*/      OPC_MoveChild, 2,
/*1218*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1221*/      OPC_Scope, 13, /*->1236*/ // 2 children in Scope
/*1223*/        OPC_CheckPredicate, 20, // Predicate_immU6
/*1225*/        OPC_MoveParent,
/*1226*/        OPC_EmitMergeInputChains1_0,
/*1227*/        OPC_EmitConvertToTarget, 1,
/*1229*/        OPC_MorphNodeTo, TARGET_VAL(XCore::CLRSR_u6), 0|OPFL_Chain,
                    0/*#VTs*/, 1/*#Ops*/, 2, 
                // Src: (intrinsic_void 2441:iPTR, (imm:i32)<<P:Predicate_immU6>>:$b) - Complexity = 12
                // Dst: (CLRSR_u6 (imm:i32):$b)
/*1236*/      /*Scope*/ 13, /*->1250*/
/*1237*/        OPC_CheckPredicate, 21, // Predicate_immU16
/*1239*/        OPC_MoveParent,
/*1240*/        OPC_EmitMergeInputChains1_0,
/*1241*/        OPC_EmitConvertToTarget, 1,
/*1243*/        OPC_MorphNodeTo, TARGET_VAL(XCore::CLRSR_lu6), 0|OPFL_Chain,
                    0/*#VTs*/, 1/*#Ops*/, 2, 
                // Src: (intrinsic_void 2441:iPTR, (imm:i32)<<P:Predicate_immU16>>:$b) - Complexity = 12
                // Dst: (CLRSR_lu6 (imm:i32):$b)
/*1250*/      0, /*End of Scope*/
/*1251*/    /*Scope*/ 40, /*->1292*/
/*1252*/      OPC_CheckInteger, 34|128,19/*2466*/, 
/*1255*/      OPC_MoveParent,
/*1256*/      OPC_RecordChild2, // #1 = $r
/*1257*/      OPC_CheckChild2Type, MVT::i32,
/*1259*/      OPC_RecordChild3, // #2 = $val
/*1260*/      OPC_Scope, 19, /*->1281*/ // 2 children in Scope
/*1262*/        OPC_MoveChild, 3,
/*1264*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1267*/        OPC_CheckPredicate, 0, // Predicate_immUs
/*1269*/        OPC_MoveParent,
/*1270*/        OPC_EmitMergeInputChains1_0,
/*1271*/        OPC_EmitConvertToTarget, 2,
/*1273*/        OPC_MorphNodeTo, TARGET_VAL(XCore::OUTCT_rus), 0|OPFL_Chain,
                    0/*#VTs*/, 2/*#Ops*/, 1, 3, 
                // Src: (intrinsic_void 2466:iPTR, GRRegs:i32:$r, (imm:i32)<<P:Predicate_immUs>>:$val) - Complexity = 12
                // Dst: (OUTCT_rus GRRegs:i32:$r, (imm:i32):$val)
/*1281*/      /*Scope*/ 9, /*->1291*/
/*1282*/        OPC_EmitMergeInputChains1_0,
/*1283*/        OPC_MorphNodeTo, TARGET_VAL(XCore::OUTCT_2r), 0|OPFL_Chain,
                    0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                // Src: (intrinsic_void 2466:iPTR, GRRegs:i32:$r, GRRegs:i32:$val) - Complexity = 8
                // Dst: (OUTCT_2r GRRegs:i32:$r, GRRegs:i32:$val)
/*1291*/      0, /*End of Scope*/
/*1292*/    /*Scope*/ 40, /*->1333*/
/*1293*/      OPC_CheckInteger, 7|128,19/*2439*/, 
/*1296*/      OPC_MoveParent,
/*1297*/      OPC_RecordChild2, // #1 = $r
/*1298*/      OPC_CheckChild2Type, MVT::i32,
/*1300*/      OPC_RecordChild3, // #2 = $val
/*1301*/      OPC_Scope, 19, /*->1322*/ // 2 children in Scope
/*1303*/        OPC_MoveChild, 3,
/*1305*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1308*/        OPC_CheckPredicate, 0, // Predicate_immUs
/*1310*/        OPC_MoveParent,
/*1311*/        OPC_EmitMergeInputChains1_0,
/*1312*/        OPC_EmitConvertToTarget, 2,
/*1314*/        OPC_MorphNodeTo, TARGET_VAL(XCore::CHKCT_rus), 0|OPFL_Chain,
                    0/*#VTs*/, 2/*#Ops*/, 1, 3, 
                // Src: (intrinsic_void 2439:iPTR, GRRegs:i32:$r, (imm:i32)<<P:Predicate_immUs>>:$val) - Complexity = 12
                // Dst: (CHKCT_rus GRRegs:i32:$r, (imm:i32):$val)
/*1322*/      /*Scope*/ 9, /*->1332*/
/*1323*/        OPC_EmitMergeInputChains1_0,
/*1324*/        OPC_MorphNodeTo, TARGET_VAL(XCore::CHKCT_2r), 0|OPFL_Chain,
                    0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                // Src: (intrinsic_void 2439:iPTR, GRRegs:i32:$r, GRRegs:i32:$val) - Complexity = 8
                // Dst: (CHKCT_2r GRRegs:i32:$r, GRRegs:i32:$val)
/*1332*/      0, /*End of Scope*/
/*1333*/    /*Scope*/ 17, /*->1351*/
/*1334*/      OPC_CheckInteger, 44|128,19/*2476*/, 
/*1337*/      OPC_MoveParent,
/*1338*/      OPC_RecordChild2, // #1 = $r
/*1339*/      OPC_CheckChild2Type, MVT::i32,
/*1341*/      OPC_RecordChild3, // #2 = $val
/*1342*/      OPC_EmitMergeInputChains1_0,
/*1343*/      OPC_MorphNodeTo, TARGET_VAL(XCore::SETPT_2r), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_void 2476:iPTR, GRRegs:i32:$r, GRRegs:i32:$val) - Complexity = 8
              // Dst: (SETPT_2r GRRegs:i32:$r, GRRegs:i32:$val)
/*1351*/    /*Scope*/ 17, /*->1369*/
/*1352*/      OPC_CheckInteger, 36|128,19/*2468*/, 
/*1355*/      OPC_MoveParent,
/*1356*/      OPC_RecordChild2, // #1 = $r
/*1357*/      OPC_CheckChild2Type, MVT::i32,
/*1359*/      OPC_RecordChild3, // #2 = $val
/*1360*/      OPC_EmitMergeInputChains1_0,
/*1361*/      OPC_MorphNodeTo, TARGET_VAL(XCore::OUTT_2r), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_void 2468:iPTR, GRRegs:i32:$r, GRRegs:i32:$val) - Complexity = 8
              // Dst: (OUTT_2r GRRegs:i32:$r, GRRegs:i32:$val)
/*1369*/    /*Scope*/ 17, /*->1387*/
/*1370*/      OPC_CheckInteger, 33|128,19/*2465*/, 
/*1373*/      OPC_MoveParent,
/*1374*/      OPC_RecordChild2, // #1 = $r
/*1375*/      OPC_CheckChild2Type, MVT::i32,
/*1377*/      OPC_RecordChild3, // #2 = $val
/*1378*/      OPC_EmitMergeInputChains1_0,
/*1379*/      OPC_MorphNodeTo, TARGET_VAL(XCore::OUT_2r), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_void 2465:iPTR, GRRegs:i32:$r, GRRegs:i32:$val) - Complexity = 8
              // Dst: (OUT_2r GRRegs:i32:$r, GRRegs:i32:$val)
/*1387*/    /*Scope*/ 17, /*->1405*/
/*1388*/      OPC_CheckInteger, 40|128,19/*2472*/, 
/*1391*/      OPC_MoveParent,
/*1392*/      OPC_RecordChild2, // #1 = $r
/*1393*/      OPC_CheckChild2Type, MVT::i32,
/*1395*/      OPC_RecordChild3, // #2 = $val
/*1396*/      OPC_EmitMergeInputChains1_0,
/*1397*/      OPC_MorphNodeTo, TARGET_VAL(XCore::SETD_2r), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_void 2472:iPTR, GRRegs:i32:$r, GRRegs:i32:$val) - Complexity = 8
              // Dst: (SETD_2r GRRegs:i32:$r, GRRegs:i32:$val)
/*1405*/    /*Scope*/ 19, /*->1425*/
/*1406*/      OPC_CheckInteger, 28|128,19/*2460*/, 
/*1409*/      OPC_MoveParent,
/*1410*/      OPC_RecordChild2, // #1 = $t
/*1411*/      OPC_CheckChild2Type, MVT::i32,
/*1413*/      OPC_RecordChild3, // #2 = $src
/*1414*/      OPC_CheckChild3Type, MVT::i32,
/*1416*/      OPC_EmitMergeInputChains1_0,
/*1417*/      OPC_MorphNodeTo, TARGET_VAL(XCore::INITSP_2r), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_void 2460:iPTR, GRRegs:i32:$t, GRRegs:i32:$src) - Complexity = 8
              // Dst: (INITSP_2r GRRegs:i32:$t, GRRegs:i32:$src)
/*1425*/    /*Scope*/ 19, /*->1445*/
/*1426*/      OPC_CheckInteger, 27|128,19/*2459*/, 
/*1429*/      OPC_MoveParent,
/*1430*/      OPC_RecordChild2, // #1 = $t
/*1431*/      OPC_CheckChild2Type, MVT::i32,
/*1433*/      OPC_RecordChild3, // #2 = $src
/*1434*/      OPC_CheckChild3Type, MVT::i32,
/*1436*/      OPC_EmitMergeInputChains1_0,
/*1437*/      OPC_MorphNodeTo, TARGET_VAL(XCore::INITPC_2r), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_void 2459:iPTR, GRRegs:i32:$t, GRRegs:i32:$src) - Complexity = 8
              // Dst: (INITPC_2r GRRegs:i32:$t, GRRegs:i32:$src)
/*1445*/    /*Scope*/ 19, /*->1465*/
/*1446*/      OPC_CheckInteger, 24|128,19/*2456*/, 
/*1449*/      OPC_MoveParent,
/*1450*/      OPC_RecordChild2, // #1 = $t
/*1451*/      OPC_CheckChild2Type, MVT::i32,
/*1453*/      OPC_RecordChild3, // #2 = $src
/*1454*/      OPC_CheckChild3Type, MVT::i32,
/*1456*/      OPC_EmitMergeInputChains1_0,
/*1457*/      OPC_MorphNodeTo, TARGET_VAL(XCore::INITCP_2r), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_void 2456:iPTR, GRRegs:i32:$t, GRRegs:i32:$src) - Complexity = 8
              // Dst: (INITCP_2r GRRegs:i32:$t, GRRegs:i32:$src)
/*1465*/    /*Scope*/ 19, /*->1485*/
/*1466*/      OPC_CheckInteger, 25|128,19/*2457*/, 
/*1469*/      OPC_MoveParent,
/*1470*/      OPC_RecordChild2, // #1 = $t
/*1471*/      OPC_CheckChild2Type, MVT::i32,
/*1473*/      OPC_RecordChild3, // #2 = $src
/*1474*/      OPC_CheckChild3Type, MVT::i32,
/*1476*/      OPC_EmitMergeInputChains1_0,
/*1477*/      OPC_MorphNodeTo, TARGET_VAL(XCore::INITDP_2r), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_void 2457:iPTR, GRRegs:i32:$t, GRRegs:i32:$src) - Complexity = 8
              // Dst: (INITDP_2r GRRegs:i32:$t, GRRegs:i32:$src)
/*1485*/    /*Scope*/ 17, /*->1503*/
/*1486*/      OPC_CheckInteger, 47|128,19/*2479*/, 
/*1489*/      OPC_MoveParent,
/*1490*/      OPC_RecordChild2, // #1 = $r
/*1491*/      OPC_CheckChild2Type, MVT::i32,
/*1493*/      OPC_RecordChild3, // #2 = $val
/*1494*/      OPC_EmitMergeInputChains1_0,
/*1495*/      OPC_MorphNodeTo, TARGET_VAL(XCore::SETTW_l2r), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_void 2479:iPTR, GRRegs:i32:$r, GRRegs:i32:$val) - Complexity = 8
              // Dst: (SETTW_l2r GRRegs:i32:$r, GRRegs:i32:$val)
/*1503*/    /*Scope*/ 15, /*->1519*/
/*1504*/      OPC_CheckInteger, 42|128,19/*2474*/, 
/*1507*/      OPC_MoveParent,
/*1508*/      OPC_RecordChild2, // #1 = $src1
/*1509*/      OPC_RecordChild3, // #2 = $src2
/*1510*/      OPC_EmitMergeInputChains1_0,
/*1511*/      OPC_MorphNodeTo, TARGET_VAL(XCore::SETPS_l2r), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_void 2474:iPTR, GRRegs:i32:$src1, GRRegs:i32:$src2) - Complexity = 8
              // Dst: (SETPS_l2r GRRegs:i32:$src1, GRRegs:i32:$src2)
/*1519*/    /*Scope*/ 19, /*->1539*/
/*1520*/      OPC_CheckInteger, 26|128,19/*2458*/, 
/*1523*/      OPC_MoveParent,
/*1524*/      OPC_RecordChild2, // #1 = $t
/*1525*/      OPC_CheckChild2Type, MVT::i32,
/*1527*/      OPC_RecordChild3, // #2 = $src
/*1528*/      OPC_CheckChild3Type, MVT::i32,
/*1530*/      OPC_EmitMergeInputChains1_0,
/*1531*/      OPC_MorphNodeTo, TARGET_VAL(XCore::INITLR_l2r), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_void 2458:iPTR, GRRegs:i32:$t, GRRegs:i32:$src) - Complexity = 8
              // Dst: (INITLR_l2r GRRegs:i32:$t, GRRegs:i32:$src)
/*1539*/    /*Scope*/ 19, /*->1559*/
/*1540*/      OPC_CheckInteger, 39|128,19/*2471*/, 
/*1543*/      OPC_MoveParent,
/*1544*/      OPC_RecordChild2, // #1 = $src1
/*1545*/      OPC_CheckChild2Type, MVT::i32,
/*1547*/      OPC_RecordChild3, // #2 = $src2
/*1548*/      OPC_CheckChild3Type, MVT::i32,
/*1550*/      OPC_EmitMergeInputChains1_0,
/*1551*/      OPC_MorphNodeTo, TARGET_VAL(XCore::SETCLK_l2r), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_void 2471:iPTR, GRRegs:i32:$src1, GRRegs:i32:$src2) - Complexity = 8
              // Dst: (SETCLK_l2r GRRegs:i32:$src1, GRRegs:i32:$src2)
/*1559*/    /*Scope*/ 19, /*->1579*/
/*1560*/      OPC_CheckInteger, 45|128,19/*2477*/, 
/*1563*/      OPC_MoveParent,
/*1564*/      OPC_RecordChild2, // #1 = $src1
/*1565*/      OPC_CheckChild2Type, MVT::i32,
/*1567*/      OPC_RecordChild3, // #2 = $src2
/*1568*/      OPC_CheckChild3Type, MVT::i32,
/*1570*/      OPC_EmitMergeInputChains1_0,
/*1571*/      OPC_MorphNodeTo, TARGET_VAL(XCore::SETRDY_l2r), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_void 2477:iPTR, GRRegs:i32:$src1, GRRegs:i32:$src2) - Complexity = 8
              // Dst: (SETRDY_l2r GRRegs:i32:$src1, GRRegs:i32:$src2)
/*1579*/    /*Scope*/ 17, /*->1597*/
/*1580*/      OPC_CheckInteger, 43|128,19/*2475*/, 
/*1583*/      OPC_MoveParent,
/*1584*/      OPC_RecordChild2, // #1 = $src1
/*1585*/      OPC_CheckChild2Type, MVT::i32,
/*1587*/      OPC_RecordChild3, // #2 = $src2
/*1588*/      OPC_EmitMergeInputChains1_0,
/*1589*/      OPC_MorphNodeTo, TARGET_VAL(XCore::SETPSC_l2r), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_void 2475:iPTR, GRRegs:i32:$src1, GRRegs:i32:$src2) - Complexity = 8
              // Dst: (SETPSC_l2r GRRegs:i32:$src1, GRRegs:i32:$src2)
/*1597*/    /*Scope*/ 15, /*->1613*/
/*1598*/      OPC_CheckInteger, 32|128,19/*2464*/, 
/*1601*/      OPC_MoveParent,
/*1602*/      OPC_RecordChild2, // #1 = $i
/*1603*/      OPC_CheckChild2Type, MVT::i32,
/*1605*/      OPC_EmitMergeInputChains1_0,
/*1606*/      OPC_MorphNodeTo, TARGET_VAL(XCore::MSYNC_1r), 0|OPFL_Chain,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (intrinsic_void 2464:iPTR, GRRegs:i32:$i) - Complexity = 8
              // Dst: (MSYNC_1r GRRegs:i32:$i)
/*1613*/    /*Scope*/ 15, /*->1629*/
/*1614*/      OPC_CheckInteger, 31|128,19/*2463*/, 
/*1617*/      OPC_MoveParent,
/*1618*/      OPC_RecordChild2, // #1 = $i
/*1619*/      OPC_CheckChild2Type, MVT::i32,
/*1621*/      OPC_EmitMergeInputChains1_0,
/*1622*/      OPC_MorphNodeTo, TARGET_VAL(XCore::MJOIN_1r), 0|OPFL_Chain,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (intrinsic_void 2463:iPTR, GRRegs:i32:$i) - Complexity = 8
              // Dst: (MJOIN_1r GRRegs:i32:$i)
/*1629*/    /*Scope*/ 15, /*->1645*/
/*1630*/      OPC_CheckInteger, 51|128,19/*2483*/, 
/*1633*/      OPC_MoveParent,
/*1634*/      OPC_RecordChild2, // #1 = $r
/*1635*/      OPC_CheckChild2Type, MVT::i32,
/*1637*/      OPC_EmitMergeInputChains1_0,
/*1638*/      OPC_MorphNodeTo, TARGET_VAL(XCore::SYNCR_1r), 0|OPFL_Chain,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (intrinsic_void 2483:iPTR, GRRegs:i32:$r) - Complexity = 8
              // Dst: (SYNCR_1r GRRegs:i32:$r)
/*1645*/    /*Scope*/ 15, /*->1661*/
/*1646*/      OPC_CheckInteger, 14|128,19/*2446*/, 
/*1649*/      OPC_MoveParent,
/*1650*/      OPC_RecordChild2, // #1 = $r
/*1651*/      OPC_CheckChild2Type, MVT::i32,
/*1653*/      OPC_EmitMergeInputChains1_0,
/*1654*/      OPC_MorphNodeTo, TARGET_VAL(XCore::FREER_1r), 0|OPFL_Chain,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (intrinsic_void 2446:iPTR, GRRegs:i32:$r) - Complexity = 8
              // Dst: (FREER_1r GRRegs:i32:$r)
/*1661*/    /*Scope*/ 21, /*->1683*/
/*1662*/      OPC_CheckInteger, 48|128,19/*2480*/, 
/*1665*/      OPC_MoveParent,
/*1666*/      OPC_RecordChild2, // #1 = $r
/*1667*/      OPC_CheckChild2Type, MVT::i32,
/*1669*/      OPC_RecordChild3, // #2 = physreg input R11
/*1670*/      OPC_CheckChild3Type, MVT::i32,
/*1672*/      OPC_EmitMergeInputChains1_0,
/*1673*/      OPC_EmitCopyToReg, 2, XCore::R11,
/*1676*/      OPC_MorphNodeTo, TARGET_VAL(XCore::SETV_1r), 0|OPFL_Chain|OPFL_GlueInput,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (intrinsic_void 2480:iPTR, GRRegs:i32:$r, R11:i32) - Complexity = 8
              // Dst: (SETV_1r GRRegs:i32:$r)
/*1683*/    /*Scope*/ 21, /*->1705*/
/*1684*/      OPC_CheckInteger, 41|128,19/*2473*/, 
/*1687*/      OPC_MoveParent,
/*1688*/      OPC_RecordChild2, // #1 = $r
/*1689*/      OPC_CheckChild2Type, MVT::i32,
/*1691*/      OPC_RecordChild3, // #2 = physreg input R11
/*1692*/      OPC_CheckChild3Type, MVT::i32,
/*1694*/      OPC_EmitMergeInputChains1_0,
/*1695*/      OPC_EmitCopyToReg, 2, XCore::R11,
/*1698*/      OPC_MorphNodeTo, TARGET_VAL(XCore::SETEV_1r), 0|OPFL_Chain|OPFL_GlueInput,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (intrinsic_void 2473:iPTR, GRRegs:i32:$r, R11:i32) - Complexity = 8
              // Dst: (SETEV_1r GRRegs:i32:$r)
/*1705*/    /*Scope*/ 15, /*->1721*/
/*1706*/      OPC_CheckInteger, 12|128,19/*2444*/, 
/*1709*/      OPC_MoveParent,
/*1710*/      OPC_RecordChild2, // #1 = $r
/*1711*/      OPC_CheckChild2Type, MVT::i32,
/*1713*/      OPC_EmitMergeInputChains1_0,
/*1714*/      OPC_MorphNodeTo, TARGET_VAL(XCore::EEU_1r), 0|OPFL_Chain,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (intrinsic_void 2444:iPTR, GRRegs:i32:$r) - Complexity = 8
              // Dst: (EEU_1r GRRegs:i32:$r)
/*1721*/    /*Scope*/ 11, /*->1733*/
/*1722*/      OPC_CheckInteger, 8|128,19/*2440*/, 
/*1725*/      OPC_MoveParent,
/*1726*/      OPC_EmitMergeInputChains1_0,
/*1727*/      OPC_MorphNodeTo, TARGET_VAL(XCore::CLRE_0R), 0|OPFL_Chain,
                  0/*#VTs*/, 0/*#Ops*/, 
              // Src: (intrinsic_void 2440:iPTR) - Complexity = 8
              // Dst: (CLRE_0R)
/*1733*/    /*Scope*/ 11, /*->1745*/
/*1734*/      OPC_CheckInteger, 50|128,19/*2482*/, 
/*1737*/      OPC_MoveParent,
/*1738*/      OPC_EmitMergeInputChains1_0,
/*1739*/      OPC_MorphNodeTo, TARGET_VAL(XCore::SSYNC_0r), 0|OPFL_Chain,
                  0/*#VTs*/, 0/*#Ops*/, 
              // Src: (intrinsic_void 2482:iPTR) - Complexity = 8
              // Dst: (SSYNC_0r)
/*1745*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 126,  TARGET_VAL(ISD::INTRINSIC_WO_CHAIN),// ->1875
/*1749*/    OPC_MoveChild, 0,
/*1751*/    OPC_Scope, 38, /*->1791*/ // 5 children in Scope
/*1753*/      OPC_CheckInteger, 49|128,19/*2481*/, 
/*1756*/      OPC_MoveParent,
/*1757*/      OPC_RecordChild1, // #0 = $src1
/*1758*/      OPC_RecordChild2, // #1 = $src2
/*1759*/      OPC_Scope, 19, /*->1780*/ // 2 children in Scope
/*1761*/        OPC_MoveChild, 2,
/*1763*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1766*/        OPC_CheckPredicate, 19, // Predicate_immBitp
/*1768*/        OPC_MoveParent,
/*1769*/        OPC_EmitConvertToTarget, 1,
/*1771*/        OPC_MorphNodeTo, TARGET_VAL(XCore::SEXT_rus), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (intrinsic_wo_chain:i32 2481:iPTR, GRRegs:i32:$src1, (imm:i32)<<P:Predicate_immBitp>>:$src2) - Complexity = 12
                // Dst: (SEXT_rus:i32 GRRegs:i32:$src1, (imm:i32):$src2)
/*1780*/      /*Scope*/ 9, /*->1790*/
/*1781*/        OPC_MorphNodeTo, TARGET_VAL(XCore::SEXT_2r), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (intrinsic_wo_chain:i32 2481:iPTR, GRRegs:i32:$src1, GRRegs:i32:$src2) - Complexity = 8
                // Dst: (SEXT_2r:i32 GRRegs:i32:$src1, GRRegs:i32:$src2)
/*1790*/      0, /*End of Scope*/
/*1791*/    /*Scope*/ 38, /*->1830*/
/*1792*/      OPC_CheckInteger, 55|128,19/*2487*/, 
/*1795*/      OPC_MoveParent,
/*1796*/      OPC_RecordChild1, // #0 = $src1
/*1797*/      OPC_RecordChild2, // #1 = $src2
/*1798*/      OPC_Scope, 19, /*->1819*/ // 2 children in Scope
/*1800*/        OPC_MoveChild, 2,
/*1802*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1805*/        OPC_CheckPredicate, 19, // Predicate_immBitp
/*1807*/        OPC_MoveParent,
/*1808*/        OPC_EmitConvertToTarget, 1,
/*1810*/        OPC_MorphNodeTo, TARGET_VAL(XCore::ZEXT_rus), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (intrinsic_wo_chain:i32 2487:iPTR, GRRegs:i32:$src1, (imm:i32)<<P:Predicate_immBitp>>:$src2) - Complexity = 12
                // Dst: (ZEXT_rus:i32 GRRegs:i32:$src1, (imm:i32):$src2)
/*1819*/      /*Scope*/ 9, /*->1829*/
/*1820*/        OPC_MorphNodeTo, TARGET_VAL(XCore::ZEXT_2r), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (intrinsic_wo_chain:i32 2487:iPTR, GRRegs:i32:$src1, GRRegs:i32:$src2) - Complexity = 8
                // Dst: (ZEXT_2r:i32 GRRegs:i32:$src1, GRRegs:i32:$src2)
/*1829*/      0, /*End of Scope*/
/*1830*/    /*Scope*/ 17, /*->1848*/
/*1831*/      OPC_CheckInteger, 10|128,19/*2442*/, 
/*1834*/      OPC_MoveParent,
/*1835*/      OPC_RecordChild1, // #0 = $src1
/*1836*/      OPC_RecordChild2, // #1 = $src2
/*1837*/      OPC_RecordChild3, // #2 = $src3
/*1838*/      OPC_MorphNodeTo, TARGET_VAL(XCore::CRC_l3r), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i32 2442:iPTR, GRRegs:i32:$src1, GRRegs:i32:$src2, GRRegs:i32:$src3) - Complexity = 8
              // Dst: (CRC_l3r:i32 GRRegs:i32:$src1, GRRegs:i32:$src2, GRRegs:i32:$src3)
/*1848*/    /*Scope*/ 13, /*->1862*/
/*1849*/      OPC_CheckInteger, 5|128,19/*2437*/, 
/*1852*/      OPC_MoveParent,
/*1853*/      OPC_RecordChild1, // #0 = $src
/*1854*/      OPC_MorphNodeTo, TARGET_VAL(XCore::BITREV_l2r), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:i32 2437:iPTR, GRRegs:i32:$src) - Complexity = 8
              // Dst: (BITREV_l2r:i32 GRRegs:i32:$src)
/*1862*/    /*Scope*/ 11, /*->1874*/
/*1863*/      OPC_CheckInteger, 17|128,19/*2449*/, 
/*1866*/      OPC_MoveParent,
/*1867*/      OPC_MorphNodeTo, TARGET_VAL(XCore::GETID_0R), 0,
                  1/*#VTs*/, MVT::i32, 0/*#Ops*/, 
              // Src: (intrinsic_wo_chain:i32 2449:iPTR) - Complexity = 8
              // Dst: (GETID_0R:i32)
/*1874*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 10|128,2/*266*/,  TARGET_VAL(ISD::INTRINSIC_W_CHAIN),// ->2145
/*1879*/    OPC_RecordNode,   // #0 = 'intrinsic_w_chain' chained node
/*1880*/    OPC_MoveChild, 1,
/*1882*/    OPC_Scope, 26, /*->1910*/ // 15 children in Scope
/*1884*/      OPC_CheckInteger, 19|128,19/*2451*/, 
/*1887*/      OPC_MoveParent,
/*1888*/      OPC_RecordChild2, // #1 = $type
/*1889*/      OPC_MoveChild, 2,
/*1891*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1894*/      OPC_CheckPredicate, 0, // Predicate_immUs
/*1896*/      OPC_MoveParent,
/*1897*/      OPC_CheckType, MVT::i32,
/*1899*/      OPC_EmitMergeInputChains1_0,
/*1900*/      OPC_EmitConvertToTarget, 1,
/*1902*/      OPC_MorphNodeTo, TARGET_VAL(XCore::GETR_rus), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
              // Src: (intrinsic_w_chain:i32 2451:iPTR, (imm:i32)<<P:Predicate_immUs>>:$type) - Complexity = 12
              // Dst: (GETR_rus:i32 (imm:i32):$type)
/*1910*/    /*Scope*/ 16, /*->1927*/
/*1911*/      OPC_CheckInteger, 21|128,19/*2453*/, 
/*1914*/      OPC_MoveParent,
/*1915*/      OPC_RecordChild2, // #1 = $r
/*1916*/      OPC_CheckChild2Type, MVT::i32,
/*1918*/      OPC_EmitMergeInputChains1_0,
/*1919*/      OPC_MorphNodeTo, TARGET_VAL(XCore::GETTS_2r), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
              // Src: (intrinsic_w_chain:i32 2453:iPTR, GRRegs:i32:$r) - Complexity = 8
              // Dst: (GETTS_2r:i32 GRRegs:i32:$r)
/*1927*/    /*Scope*/ 18, /*->1946*/
/*1928*/      OPC_CheckInteger, 35|128,19/*2467*/, 
/*1931*/      OPC_MoveParent,
/*1932*/      OPC_RecordChild2, // #1 = $r
/*1933*/      OPC_CheckChild2Type, MVT::i32,
/*1935*/      OPC_RecordChild3, // #2 = $src
/*1936*/      OPC_EmitMergeInputChains1_0,
/*1937*/      OPC_MorphNodeTo, TARGET_VAL(XCore::OUTSHR_2r), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:i32 2467:iPTR, GRRegs:i32:$r, GRRegs:i32:$src) - Complexity = 8
              // Dst: (OUTSHR_2r:i32 GRRegs:i32:$r, GRRegs:i32:$src)
/*1946*/    /*Scope*/ 16, /*->1963*/
/*1947*/      OPC_CheckInteger, 23|128,19/*2455*/, 
/*1950*/      OPC_MoveParent,
/*1951*/      OPC_RecordChild2, // #1 = $r
/*1952*/      OPC_CheckChild2Type, MVT::i32,
/*1954*/      OPC_EmitMergeInputChains1_0,
/*1955*/      OPC_MorphNodeTo, TARGET_VAL(XCore::INCT_2r), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
              // Src: (intrinsic_w_chain:i32 2455:iPTR, GRRegs:i32:$r) - Complexity = 8
              // Dst: (INCT_2r:i32 GRRegs:i32:$r)
/*1963*/    /*Scope*/ 16, /*->1980*/
/*1964*/      OPC_CheckInteger, 30|128,19/*2462*/, 
/*1967*/      OPC_MoveParent,
/*1968*/      OPC_RecordChild2, // #1 = $r
/*1969*/      OPC_CheckChild2Type, MVT::i32,
/*1971*/      OPC_EmitMergeInputChains1_0,
/*1972*/      OPC_MorphNodeTo, TARGET_VAL(XCore::INT_2r), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
              // Src: (intrinsic_w_chain:i32 2462:iPTR, GRRegs:i32:$r) - Complexity = 8
              // Dst: (INT_2r:i32 GRRegs:i32:$r)
/*1980*/    /*Scope*/ 16, /*->1997*/
/*1981*/      OPC_CheckInteger, 22|128,19/*2454*/, 
/*1984*/      OPC_MoveParent,
/*1985*/      OPC_RecordChild2, // #1 = $r
/*1986*/      OPC_CheckChild2Type, MVT::i32,
/*1988*/      OPC_EmitMergeInputChains1_0,
/*1989*/      OPC_MorphNodeTo, TARGET_VAL(XCore::IN_2r), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
              // Src: (intrinsic_w_chain:i32 2454:iPTR, GRRegs:i32:$r) - Complexity = 8
              // Dst: (IN_2r:i32 GRRegs:i32:$r)
/*1997*/    /*Scope*/ 18, /*->2016*/
/*1998*/      OPC_CheckInteger, 29|128,19/*2461*/, 
/*2001*/      OPC_MoveParent,
/*2002*/      OPC_RecordChild2, // #1 = $r
/*2003*/      OPC_CheckChild2Type, MVT::i32,
/*2005*/      OPC_RecordChild3, // #2 = $src
/*2006*/      OPC_EmitMergeInputChains1_0,
/*2007*/      OPC_MorphNodeTo, TARGET_VAL(XCore::INSHR_2r), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:i32 2461:iPTR, GRRegs:i32:$r, GRRegs:i32:$src) - Complexity = 8
              // Dst: (INSHR_2r:i32 GRRegs:i32:$r, GRRegs:i32:$src)
/*2016*/    /*Scope*/ 16, /*->2033*/
/*2017*/      OPC_CheckInteger, 52|128,19/*2484*/, 
/*2020*/      OPC_MoveParent,
/*2021*/      OPC_RecordChild2, // #1 = $src
/*2022*/      OPC_CheckChild2Type, MVT::i32,
/*2024*/      OPC_EmitMergeInputChains1_0,
/*2025*/      OPC_MorphNodeTo, TARGET_VAL(XCore::TESTCT_2r), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
              // Src: (intrinsic_w_chain:i32 2484:iPTR, GRRegs:i32:$src) - Complexity = 8
              // Dst: (TESTCT_2r:i32 GRRegs:i32:$src)
/*2033*/    /*Scope*/ 16, /*->2050*/
/*2034*/      OPC_CheckInteger, 53|128,19/*2485*/, 
/*2037*/      OPC_MoveParent,
/*2038*/      OPC_RecordChild2, // #1 = $src
/*2039*/      OPC_CheckChild2Type, MVT::i32,
/*2041*/      OPC_EmitMergeInputChains1_0,
/*2042*/      OPC_MorphNodeTo, TARGET_VAL(XCore::TESTWCT_2r), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
              // Src: (intrinsic_w_chain:i32 2485:iPTR, GRRegs:i32:$src) - Complexity = 8
              // Dst: (TESTWCT_2r:i32 GRRegs:i32:$src)
/*2050*/    /*Scope*/ 18, /*->2069*/
/*2051*/      OPC_CheckInteger, 20|128,19/*2452*/, 
/*2054*/      OPC_MoveParent,
/*2055*/      OPC_RecordChild2, // #1 = $r
/*2056*/      OPC_CheckChild2Type, MVT::i32,
/*2058*/      OPC_CheckType, MVT::i32,
/*2060*/      OPC_EmitMergeInputChains1_0,
/*2061*/      OPC_MorphNodeTo, TARGET_VAL(XCore::GETST_2r), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
              // Src: (intrinsic_w_chain:i32 2452:iPTR, GRRegs:i32:$r) - Complexity = 8
              // Dst: (GETST_2r:i32 GRRegs:i32:$r)
/*2069*/    /*Scope*/ 14, /*->2084*/
/*2070*/      OPC_CheckInteger, 18|128,19/*2450*/, 
/*2073*/      OPC_MoveParent,
/*2074*/      OPC_RecordChild2, // #1 = $src
/*2075*/      OPC_EmitMergeInputChains1_0,
/*2076*/      OPC_MorphNodeTo, TARGET_VAL(XCore::GETPS_l2r), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
              // Src: (intrinsic_w_chain:i32 2450:iPTR, GRRegs:i32:$src) - Complexity = 8
              // Dst: (GETPS_l2r:i32 GRRegs:i32:$src)
/*2084*/    /*Scope*/ 16, /*->2101*/
/*2085*/      OPC_CheckInteger, 37|128,19/*2469*/, 
/*2088*/      OPC_MoveParent,
/*2089*/      OPC_RecordChild2, // #1 = $src
/*2090*/      OPC_CheckChild2Type, MVT::i32,
/*2092*/      OPC_EmitMergeInputChains1_0,
/*2093*/      OPC_MorphNodeTo, TARGET_VAL(XCore::PEEK_l2r), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
              // Src: (intrinsic_w_chain:i32 2469:iPTR, GRRegs:i32:$src) - Complexity = 8
              // Dst: (PEEK_l2r:i32 GRRegs:i32:$src)
/*2101*/    /*Scope*/ 16, /*->2118*/
/*2102*/      OPC_CheckInteger, 13|128,19/*2445*/, 
/*2105*/      OPC_MoveParent,
/*2106*/      OPC_RecordChild2, // #1 = $src
/*2107*/      OPC_CheckChild2Type, MVT::i32,
/*2109*/      OPC_EmitMergeInputChains1_0,
/*2110*/      OPC_MorphNodeTo, TARGET_VAL(XCore::ENDIN_l2r), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
              // Src: (intrinsic_w_chain:i32 2445:iPTR, GRRegs:i32:$src) - Complexity = 8
              // Dst: (ENDIN_l2r:i32 GRRegs:i32:$src)
/*2118*/    /*Scope*/ 12, /*->2131*/
/*2119*/      OPC_CheckInteger, 15|128,19/*2447*/, 
/*2122*/      OPC_MoveParent,
/*2123*/      OPC_EmitMergeInputChains1_0,
/*2124*/      OPC_MorphNodeTo, TARGET_VAL(XCore::GETED_0R), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 0/*#Ops*/, 
              // Src: (intrinsic_w_chain:i32 2447:iPTR) - Complexity = 8
              // Dst: (GETED_0R:i32)
/*2131*/    /*Scope*/ 12, /*->2144*/
/*2132*/      OPC_CheckInteger, 16|128,19/*2448*/, 
/*2135*/      OPC_MoveParent,
/*2136*/      OPC_EmitMergeInputChains1_0,
/*2137*/      OPC_MorphNodeTo, TARGET_VAL(XCore::GETET_0R), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 0/*#Ops*/, 
              // Src: (intrinsic_w_chain:i32 2448:iPTR) - Complexity = 8
              // Dst: (GETET_0R:i32)
/*2144*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 113,  TARGET_VAL(ISD::SUB),// ->2261
/*2148*/    OPC_Scope, 39, /*->2189*/ // 3 children in Scope
/*2150*/      OPC_RecordChild0, // #0 = $addr
/*2151*/      OPC_MoveChild, 1,
/*2153*/      OPC_CheckOpcode, TARGET_VAL(ISD::SHL),
/*2156*/      OPC_RecordChild0, // #1 = $offset
/*2157*/      OPC_MoveChild, 1,
/*2159*/      OPC_Scope, 13, /*->2174*/ // 2 children in Scope
/*2161*/        OPC_CheckInteger, 2, 
/*2163*/        OPC_MoveParent,
/*2164*/        OPC_MoveParent,
/*2165*/        OPC_MorphNodeTo, TARGET_VAL(XCore::LDAWB_l3r), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (sub:i32 GRRegs:i32:$addr, (shl:i32 GRRegs:i32:$offset, 2:i32)) - Complexity = 11
                // Dst: (LDAWB_l3r:i32 GRRegs:i32:$addr, GRRegs:i32:$offset)
/*2174*/      /*Scope*/ 13, /*->2188*/
/*2175*/        OPC_CheckInteger, 1, 
/*2177*/        OPC_MoveParent,
/*2178*/        OPC_MoveParent,
/*2179*/        OPC_MorphNodeTo, TARGET_VAL(XCore::LDA16B_l3r), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (sub:i32 GRRegs:i32:$addr, (shl:i32 GRRegs:i32:$offset, 1:i32)) - Complexity = 11
                // Dst: (LDA16B_l3r:i32 GRRegs:i32:$addr, GRRegs:i32:$offset)
/*2188*/      0, /*End of Scope*/
/*2189*/    /*Scope*/ 14, /*->2204*/
/*2190*/      OPC_MoveChild, 0,
/*2192*/      OPC_CheckInteger, 0, 
/*2194*/      OPC_MoveParent,
/*2195*/      OPC_RecordChild1, // #0 = $b
/*2196*/      OPC_MorphNodeTo, TARGET_VAL(XCore::NEG), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (sub:i32 0:i32, GRRegs:i32:$b) - Complexity = 8
              // Dst: (NEG:i32 GRRegs:i32:$b)
/*2204*/    /*Scope*/ 55, /*->2260*/
/*2205*/      OPC_RecordChild0, // #0 = $b
/*2206*/      OPC_RecordChild1, // #1 = $c
/*2207*/      OPC_Scope, 40, /*->2249*/ // 2 children in Scope
/*2209*/        OPC_MoveChild, 1,
/*2211*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2214*/        OPC_Scope, 14, /*->2230*/ // 2 children in Scope
/*2216*/          OPC_CheckPredicate, 0, // Predicate_immUs
/*2218*/          OPC_MoveParent,
/*2219*/          OPC_EmitConvertToTarget, 1,
/*2221*/          OPC_MorphNodeTo, TARGET_VAL(XCore::SUB_2rus), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                  // Src: (sub:i32 GRRegs:i32:$b, (imm:i32)<<P:Predicate_immUs>>:$c) - Complexity = 7
                  // Dst: (SUB_2rus:i32 GRRegs:i32:$b, (imm:i32):$c)
/*2230*/        /*Scope*/ 17, /*->2248*/
/*2231*/          OPC_CheckPredicate, 1, // Predicate_immUs4
/*2233*/          OPC_MoveParent,
/*2234*/          OPC_EmitConvertToTarget, 1,
/*2236*/          OPC_EmitNodeXForm, 0, 2, // div4_xform
/*2239*/          OPC_MorphNodeTo, TARGET_VAL(XCore::LDAWB_l2rus), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (sub:i32 GRRegs:i32:$addr, (imm:i32)<<P:Predicate_immUs4>>:$offset) - Complexity = 7
                  // Dst: (LDAWB_l2rus:i32 GRRegs:i32:$addr, (div4_xform:i32 (imm:i32)<<P:Predicate_immUs4>>:$offset))
/*2248*/        0, /*End of Scope*/
/*2249*/      /*Scope*/ 9, /*->2259*/
/*2250*/        OPC_MorphNodeTo, TARGET_VAL(XCore::SUB_3r), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (sub:i32 GRRegs:i32:$b, GRRegs:i32:$c) - Complexity = 3
                // Dst: (SUB_3r:i32 GRRegs:i32:$b, GRRegs:i32:$c)
/*2259*/      0, /*End of Scope*/
/*2260*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 104,  TARGET_VAL(ISD::AND),// ->2368
/*2264*/    OPC_Scope, 31, /*->2297*/ // 3 children in Scope
/*2266*/      OPC_RecordChild0, // #0 = $src1
/*2267*/      OPC_MoveChild, 1,
/*2269*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*2272*/      OPC_RecordChild0, // #1 = $src2
/*2273*/      OPC_MoveChild, 1,
/*2275*/      OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*2286*/      OPC_MoveParent,
/*2287*/      OPC_MoveParent,
/*2288*/      OPC_MorphNodeTo, TARGET_VAL(XCore::ANDNOT_2r), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (and:i32 GRRegs:i32:$src1, (xor:i32 GRRegs:i32:$src2, -1:i32)) - Complexity = 11
              // Dst: (ANDNOT_2r:i32 GRRegs:i32:$src1, GRRegs:i32:$src2)
/*2297*/    /*Scope*/ 31, /*->2329*/
/*2298*/      OPC_MoveChild, 0,
/*2300*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*2303*/      OPC_RecordChild0, // #0 = $src2
/*2304*/      OPC_MoveChild, 1,
/*2306*/      OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*2317*/      OPC_MoveParent,
/*2318*/      OPC_MoveParent,
/*2319*/      OPC_RecordChild1, // #1 = $src1
/*2320*/      OPC_MorphNodeTo, TARGET_VAL(XCore::ANDNOT_2r), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
              // Src: (and:i32 (xor:i32 GRRegs:i32:$src2, -1:i32), GRRegs:i32:$src1) - Complexity = 11
              // Dst: (ANDNOT_2r:i32 GRRegs:i32:$src1, GRRegs:i32:$src2)
/*2329*/    /*Scope*/ 37, /*->2367*/
/*2330*/      OPC_RecordChild0, // #0 = $val
/*2331*/      OPC_RecordChild1, // #1 = $mask
/*2332*/      OPC_Scope, 22, /*->2356*/ // 2 children in Scope
/*2334*/        OPC_MoveChild, 1,
/*2336*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2339*/        OPC_CheckPredicate, 22, // Predicate_immMskBitp
/*2341*/        OPC_MoveParent,
/*2342*/        OPC_EmitConvertToTarget, 1,
/*2344*/        OPC_EmitNodeXForm, 4, 2, // msksize_xform
/*2347*/        OPC_MorphNodeTo, TARGET_VAL(XCore::ZEXT_rus), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                // Src: (and:i32 GRRegs:i32:$val, (imm:i32)<<P:Predicate_immMskBitp>>:$mask) - Complexity = 7
                // Dst: (ZEXT_rus:i32 GRRegs:i32:$val, (msksize_xform:i32 (imm:i32)<<P:Predicate_immMskBitp>>:$mask))
/*2356*/      /*Scope*/ 9, /*->2366*/
/*2357*/        OPC_MorphNodeTo, TARGET_VAL(XCore::AND_3r), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (and:i32 GRRegs:i32:$b, GRRegs:i32:$c) - Complexity = 3
                // Dst: (AND_3r:i32 GRRegs:i32:$b, GRRegs:i32:$c)
/*2366*/      0, /*End of Scope*/
/*2367*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 40,  TARGET_VAL(ISD::BRIND),// ->2411
/*2371*/    OPC_RecordNode,   // #0 = 'brind' chained node
/*2372*/    OPC_Scope, 24, /*->2398*/ // 2 children in Scope
/*2374*/      OPC_MoveChild, 1,
/*2376*/      OPC_CheckOpcode, TARGET_VAL(ISD::INTRINSIC_W_CHAIN),
/*2379*/      OPC_RecordNode, // #1 = 'intrinsic_w_chain' chained node
/*2380*/      OPC_CheckFoldableChainNode,
/*2381*/      OPC_MoveChild, 1,
/*2383*/      OPC_CheckInteger, 54|128,19/*2486*/, 
/*2386*/      OPC_MoveParent,
/*2387*/      OPC_MoveParent,
/*2388*/      OPC_EmitMergeInputChains, 2, 0, 1, 
/*2392*/      OPC_MorphNodeTo, TARGET_VAL(XCore::WAITEU_0R), 0|OPFL_Chain,
                  0/*#VTs*/, 0/*#Ops*/, 
              // Src: (brind (intrinsic_w_chain:iPTR 2486:iPTR)) - Complexity = 11
              // Dst: (WAITEU_0R)
/*2398*/    /*Scope*/ 11, /*->2410*/
/*2399*/      OPC_RecordChild1, // #1 = $addr
/*2400*/      OPC_CheckChild1Type, MVT::i32,
/*2402*/      OPC_EmitMergeInputChains1_0,
/*2403*/      OPC_MorphNodeTo, TARGET_VAL(XCore::BAU_1r), 0|OPFL_Chain,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (brind GRRegs:i32:$addr) - Complexity = 3
              // Dst: (BAU_1r GRRegs:i32:$addr)
/*2410*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 113|128,2/*369*/,  TARGET_VAL(ISD::BRCOND),// ->2784
/*2415*/    OPC_RecordNode,   // #0 = 'brcond' chained node
/*2416*/    OPC_Scope, 90|128,2/*346*/, /*->2765*/ // 2 children in Scope
/*2419*/      OPC_MoveChild, 1,
/*2421*/      OPC_CheckOpcode, TARGET_VAL(ISD::SETCC),
/*2424*/      OPC_RecordChild0, // #1 = $lhs
/*2425*/      OPC_Scope, 6|128,1/*134*/, /*->2562*/ // 3 children in Scope
/*2428*/        OPC_MoveChild, 1,
/*2430*/        OPC_Scope, 82, /*->2514*/ // 2 children in Scope
/*2432*/          OPC_CheckInteger, 0, 
/*2434*/          OPC_MoveParent,
/*2435*/          OPC_MoveChild, 2,
/*2437*/          OPC_Scope, 20, /*->2459*/ // 3 children in Scope
/*2439*/            OPC_CheckCondCode, ISD::SETNE,
/*2441*/            OPC_MoveParent,
/*2442*/            OPC_MoveParent,
/*2443*/            OPC_RecordChild2, // #2 = $dst
/*2444*/            OPC_MoveChild, 2,
/*2446*/            OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*2449*/            OPC_MoveParent,
/*2450*/            OPC_EmitMergeInputChains1_0,
/*2451*/            OPC_MorphNodeTo, TARGET_VAL(XCore::BRFT_lru6), 0|OPFL_Chain,
                        0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                    // Src: (brcond (setcc:i32 GRRegs:i32:$lhs, 0:i32, SETNE:Other), (bb:Other):$dst) - Complexity = 11
                    // Dst: (BRFT_lru6 GRRegs:i32:$lhs, (bb:Other):$dst)
/*2459*/          /*Scope*/ 20, /*->2480*/
/*2460*/            OPC_CheckCondCode, ISD::SETEQ,
/*2462*/            OPC_MoveParent,
/*2463*/            OPC_MoveParent,
/*2464*/            OPC_RecordChild2, // #2 = $dst
/*2465*/            OPC_MoveChild, 2,
/*2467*/            OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*2470*/            OPC_MoveParent,
/*2471*/            OPC_EmitMergeInputChains1_0,
/*2472*/            OPC_MorphNodeTo, TARGET_VAL(XCore::BRFF_lru6), 0|OPFL_Chain,
                        0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                    // Src: (brcond (setcc:i32 GRRegs:i32:$lhs, 0:i32, SETEQ:Other), (bb:Other):$dst) - Complexity = 11
                    // Dst: (BRFF_lru6 GRRegs:i32:$lhs, (bb:Other):$dst)
/*2480*/          /*Scope*/ 32, /*->2513*/
/*2481*/            OPC_CheckCondCode, ISD::SETLT,
/*2483*/            OPC_MoveParent,
/*2484*/            OPC_MoveParent,
/*2485*/            OPC_RecordChild2, // #2 = $dst
/*2486*/            OPC_MoveChild, 2,
/*2488*/            OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*2491*/            OPC_MoveParent,
/*2492*/            OPC_EmitMergeInputChains1_0,
/*2493*/            OPC_EmitInteger, MVT::i32, 32, 
/*2496*/            OPC_EmitNode, TARGET_VAL(XCore::ASHR_l2rus), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 3,  // Results = #4
/*2505*/            OPC_MorphNodeTo, TARGET_VAL(XCore::BRFT_lru6), 0|OPFL_Chain,
                        0/*#VTs*/, 2/*#Ops*/, 4, 2, 
                    // Src: (brcond (setcc:i32 GRRegs:i32:$lhs, 0:i32, SETLT:Other), (bb:Other):$dst) - Complexity = 11
                    // Dst: (BRFT_lru6 (ASHR_l2rus:i32 GRRegs:i32:$lhs, 32:i32), (bb:Other):$dst)
/*2513*/          0, /*End of Scope*/
/*2514*/        /*Scope*/ 46, /*->2561*/
/*2515*/          OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*2526*/          OPC_MoveParent,
/*2527*/          OPC_MoveChild, 2,
/*2529*/          OPC_CheckCondCode, ISD::SETGT,
/*2531*/          OPC_MoveParent,
/*2532*/          OPC_MoveParent,
/*2533*/          OPC_RecordChild2, // #2 = $dst
/*2534*/          OPC_MoveChild, 2,
/*2536*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*2539*/          OPC_MoveParent,
/*2540*/          OPC_EmitMergeInputChains1_0,
/*2541*/          OPC_EmitInteger, MVT::i32, 32, 
/*2544*/          OPC_EmitNode, TARGET_VAL(XCore::ASHR_l2rus), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 3,  // Results = #4
/*2553*/          OPC_MorphNodeTo, TARGET_VAL(XCore::BRFF_lru6), 0|OPFL_Chain,
                      0/*#VTs*/, 2/*#Ops*/, 4, 2, 
                  // Src: (brcond (setcc:i32 GRRegs:i32:$lhs, -1:i32, SETGT:Other), (bb:Other):$dst) - Complexity = 11
                  // Dst: (BRFF_lru6 (ASHR_l2rus:i32 GRRegs:i32:$lhs, 32:i32), (bb:Other):$dst)
/*2561*/        0, /*End of Scope*/
/*2562*/      /*Scope*/ 42, /*->2605*/
/*2563*/        OPC_RecordChild1, // #2 = $rhs
/*2564*/        OPC_MoveChild, 1,
/*2566*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2569*/        OPC_CheckPredicate, 0, // Predicate_immUs
/*2571*/        OPC_MoveParent,
/*2572*/        OPC_MoveChild, 2,
/*2574*/        OPC_CheckCondCode, ISD::SETNE,
/*2576*/        OPC_MoveParent,
/*2577*/        OPC_MoveParent,
/*2578*/        OPC_RecordChild2, // #3 = $dst
/*2579*/        OPC_MoveChild, 2,
/*2581*/        OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*2584*/        OPC_MoveParent,
/*2585*/        OPC_EmitMergeInputChains1_0,
/*2586*/        OPC_EmitConvertToTarget, 2,
/*2588*/        OPC_EmitNode, TARGET_VAL(XCore::EQ_2rus), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 4,  // Results = #5
/*2597*/        OPC_MorphNodeTo, TARGET_VAL(XCore::BRFF_lru6), 0|OPFL_Chain,
                    0/*#VTs*/, 2/*#Ops*/, 5, 3, 
                // Src: (brcond (setcc:i32 GRRegs:i32:$lhs, (imm:i32)<<P:Predicate_immUs>>:$rhs, SETNE:Other), (bb:Other):$dst) - Complexity = 10
                // Dst: (BRFF_lru6 (EQ_2rus:i32 GRRegs:i32:$lhs, (imm:i32)<<P:Predicate_immUs>>:$rhs), (bb:Other):$dst)
/*2605*/      /*Scope*/ 29|128,1/*157*/, /*->2764*/
/*2607*/        OPC_CheckChild0Type, MVT::i32,
/*2609*/        OPC_RecordChild1, // #2 = $rhs
/*2610*/        OPC_MoveChild, 2,
/*2612*/        OPC_Scope, 29, /*->2643*/ // 5 children in Scope
/*2614*/          OPC_CheckCondCode, ISD::SETLE,
/*2616*/          OPC_MoveParent,
/*2617*/          OPC_MoveParent,
/*2618*/          OPC_RecordChild2, // #3 = $dst
/*2619*/          OPC_MoveChild, 2,
/*2621*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*2624*/          OPC_MoveParent,
/*2625*/          OPC_EmitMergeInputChains1_0,
/*2626*/          OPC_EmitNode, TARGET_VAL(XCore::LSS_3r), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 1,  // Results = #4
/*2635*/          OPC_MorphNodeTo, TARGET_VAL(XCore::BRFF_lru6), 0|OPFL_Chain,
                      0/*#VTs*/, 2/*#Ops*/, 4, 3, 
                  // Src: (brcond (setcc:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs, SETLE:Other), (bb:Other):$dst) - Complexity = 6
                  // Dst: (BRFF_lru6 (LSS_3r:i32 GRRegs:i32:$rhs, GRRegs:i32:$lhs), (bb:Other):$dst)
/*2643*/        /*Scope*/ 29, /*->2673*/
/*2644*/          OPC_CheckCondCode, ISD::SETULE,
/*2646*/          OPC_MoveParent,
/*2647*/          OPC_MoveParent,
/*2648*/          OPC_RecordChild2, // #3 = $dst
/*2649*/          OPC_MoveChild, 2,
/*2651*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*2654*/          OPC_MoveParent,
/*2655*/          OPC_EmitMergeInputChains1_0,
/*2656*/          OPC_EmitNode, TARGET_VAL(XCore::LSU_3r), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 1,  // Results = #4
/*2665*/          OPC_MorphNodeTo, TARGET_VAL(XCore::BRFF_lru6), 0|OPFL_Chain,
                      0/*#VTs*/, 2/*#Ops*/, 4, 3, 
                  // Src: (brcond (setcc:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs, SETULE:Other), (bb:Other):$dst) - Complexity = 6
                  // Dst: (BRFF_lru6 (LSU_3r:i32 GRRegs:i32:$rhs, GRRegs:i32:$lhs), (bb:Other):$dst)
/*2673*/        /*Scope*/ 29, /*->2703*/
/*2674*/          OPC_CheckCondCode, ISD::SETGE,
/*2676*/          OPC_MoveParent,
/*2677*/          OPC_MoveParent,
/*2678*/          OPC_RecordChild2, // #3 = $dst
/*2679*/          OPC_MoveChild, 2,
/*2681*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*2684*/          OPC_MoveParent,
/*2685*/          OPC_EmitMergeInputChains1_0,
/*2686*/          OPC_EmitNode, TARGET_VAL(XCore::LSS_3r), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #4
/*2695*/          OPC_MorphNodeTo, TARGET_VAL(XCore::BRFF_lru6), 0|OPFL_Chain,
                      0/*#VTs*/, 2/*#Ops*/, 4, 3, 
                  // Src: (brcond (setcc:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs, SETGE:Other), (bb:Other):$dst) - Complexity = 6
                  // Dst: (BRFF_lru6 (LSS_3r:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs), (bb:Other):$dst)
/*2703*/        /*Scope*/ 29, /*->2733*/
/*2704*/          OPC_CheckCondCode, ISD::SETUGE,
/*2706*/          OPC_MoveParent,
/*2707*/          OPC_MoveParent,
/*2708*/          OPC_RecordChild2, // #3 = $dst
/*2709*/          OPC_MoveChild, 2,
/*2711*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*2714*/          OPC_MoveParent,
/*2715*/          OPC_EmitMergeInputChains1_0,
/*2716*/          OPC_EmitNode, TARGET_VAL(XCore::LSU_3r), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #4
/*2725*/          OPC_MorphNodeTo, TARGET_VAL(XCore::BRFF_lru6), 0|OPFL_Chain,
                      0/*#VTs*/, 2/*#Ops*/, 4, 3, 
                  // Src: (brcond (setcc:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs, SETUGE:Other), (bb:Other):$dst) - Complexity = 6
                  // Dst: (BRFF_lru6 (LSU_3r:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs), (bb:Other):$dst)
/*2733*/        /*Scope*/ 29, /*->2763*/
/*2734*/          OPC_CheckCondCode, ISD::SETNE,
/*2736*/          OPC_MoveParent,
/*2737*/          OPC_MoveParent,
/*2738*/          OPC_RecordChild2, // #3 = $dst
/*2739*/          OPC_MoveChild, 2,
/*2741*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*2744*/          OPC_MoveParent,
/*2745*/          OPC_EmitMergeInputChains1_0,
/*2746*/          OPC_EmitNode, TARGET_VAL(XCore::EQ_3r), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #4
/*2755*/          OPC_MorphNodeTo, TARGET_VAL(XCore::BRFF_lru6), 0|OPFL_Chain,
                      0/*#VTs*/, 2/*#Ops*/, 4, 3, 
                  // Src: (brcond (setcc:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs, SETNE:Other), (bb:Other):$dst) - Complexity = 6
                  // Dst: (BRFF_lru6 (EQ_3r:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs), (bb:Other):$dst)
/*2763*/        0, /*End of Scope*/
/*2764*/      0, /*End of Scope*/
/*2765*/    /*Scope*/ 17, /*->2783*/
/*2766*/      OPC_RecordChild1, // #1 = $cond
/*2767*/      OPC_RecordChild2, // #2 = $addr
/*2768*/      OPC_MoveChild, 2,
/*2770*/      OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*2773*/      OPC_MoveParent,
/*2774*/      OPC_EmitMergeInputChains1_0,
/*2775*/      OPC_MorphNodeTo, TARGET_VAL(XCore::BRFT_lru6), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 1, 2, 
              // Src: (brcond GRRegs:i32:$cond, (bb:Other):$addr) - Complexity = 3
              // Dst: (BRFT_lru6 GRRegs:i32:$cond, (bb:Other):$addr)
/*2783*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 89|128,2/*345*/,  TARGET_VAL(ISD::SELECT),// ->3133
/*2788*/    OPC_Scope, 69|128,2/*325*/, /*->3116*/ // 2 children in Scope
/*2791*/      OPC_MoveChild, 0,
/*2793*/      OPC_CheckOpcode, TARGET_VAL(ISD::SETCC),
/*2796*/      OPC_RecordChild0, // #0 = $lhs
/*2797*/      OPC_Scope, 126, /*->2925*/ // 3 children in Scope
/*2799*/        OPC_MoveChild, 1,
/*2801*/        OPC_Scope, 76, /*->2879*/ // 2 children in Scope
/*2803*/          OPC_CheckInteger, 0, 
/*2805*/          OPC_MoveParent,
/*2806*/          OPC_MoveChild, 2,
/*2808*/          OPC_Scope, 18, /*->2828*/ // 3 children in Scope
/*2810*/            OPC_CheckCondCode, ISD::SETNE,
/*2812*/            OPC_MoveParent,
/*2813*/            OPC_MoveParent,
/*2814*/            OPC_RecordChild1, // #1 = $T
/*2815*/            OPC_RecordChild2, // #2 = $F
/*2816*/            OPC_CheckType, MVT::i32,
/*2818*/            OPC_MorphNodeTo, TARGET_VAL(XCore::SELECT_CC), 0,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (select:i32 (setcc:i32 GRRegs:i32:$lhs, 0:i32, SETNE:Other), GRRegs:i32:$T, GRRegs:i32:$F) - Complexity = 11
                    // Dst: (SELECT_CC:i32 GRRegs:i32:$lhs, GRRegs:i32:$T, GRRegs:i32:$F)
/*2828*/          /*Scope*/ 18, /*->2847*/
/*2829*/            OPC_CheckCondCode, ISD::SETEQ,
/*2831*/            OPC_MoveParent,
/*2832*/            OPC_MoveParent,
/*2833*/            OPC_RecordChild1, // #1 = $T
/*2834*/            OPC_RecordChild2, // #2 = $F
/*2835*/            OPC_CheckType, MVT::i32,
/*2837*/            OPC_MorphNodeTo, TARGET_VAL(XCore::SELECT_CC), 0,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 2, 1, 
                    // Src: (select:i32 (setcc:i32 GRRegs:i32:$lhs, 0:i32, SETEQ:Other), GRRegs:i32:$T, GRRegs:i32:$F) - Complexity = 11
                    // Dst: (SELECT_CC:i32 GRRegs:i32:$lhs, GRRegs:i32:$F, GRRegs:i32:$T)
/*2847*/          /*Scope*/ 30, /*->2878*/
/*2848*/            OPC_CheckCondCode, ISD::SETLT,
/*2850*/            OPC_MoveParent,
/*2851*/            OPC_MoveParent,
/*2852*/            OPC_RecordChild1, // #1 = $T
/*2853*/            OPC_RecordChild2, // #2 = $F
/*2854*/            OPC_CheckType, MVT::i32,
/*2856*/            OPC_EmitInteger, MVT::i32, 32, 
/*2859*/            OPC_EmitNode, TARGET_VAL(XCore::ASHR_l2rus), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3,  // Results = #4
/*2868*/            OPC_MorphNodeTo, TARGET_VAL(XCore::SELECT_CC), 0,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 4, 1, 2, 
                    // Src: (select:i32 (setcc:i32 GRRegs:i32:$lhs, 0:i32, SETLT:Other), GRRegs:i32:$T, GRRegs:i32:$F) - Complexity = 11
                    // Dst: (SELECT_CC:i32 (ASHR_l2rus:i32 GRRegs:i32:$lhs, 32:i32), GRRegs:i32:$T, GRRegs:i32:$F)
/*2878*/          0, /*End of Scope*/
/*2879*/        /*Scope*/ 44, /*->2924*/
/*2880*/          OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*2891*/          OPC_MoveParent,
/*2892*/          OPC_MoveChild, 2,
/*2894*/          OPC_CheckCondCode, ISD::SETGT,
/*2896*/          OPC_MoveParent,
/*2897*/          OPC_MoveParent,
/*2898*/          OPC_RecordChild1, // #1 = $T
/*2899*/          OPC_RecordChild2, // #2 = $F
/*2900*/          OPC_CheckType, MVT::i32,
/*2902*/          OPC_EmitInteger, MVT::i32, 32, 
/*2905*/          OPC_EmitNode, TARGET_VAL(XCore::ASHR_l2rus), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3,  // Results = #4
/*2914*/          OPC_MorphNodeTo, TARGET_VAL(XCore::SELECT_CC), 0,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 4, 2, 1, 
                  // Src: (select:i32 (setcc:i32 GRRegs:i32:$lhs, -1:i32, SETGT:Other), GRRegs:i32:$T, GRRegs:i32:$F) - Complexity = 11
                  // Dst: (SELECT_CC:i32 (ASHR_l2rus:i32 GRRegs:i32:$lhs, 32:i32), GRRegs:i32:$F, GRRegs:i32:$T)
/*2924*/        0, /*End of Scope*/
/*2925*/      /*Scope*/ 40, /*->2966*/
/*2926*/        OPC_RecordChild1, // #1 = $rhs
/*2927*/        OPC_MoveChild, 1,
/*2929*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2932*/        OPC_CheckPredicate, 0, // Predicate_immUs
/*2934*/        OPC_MoveParent,
/*2935*/        OPC_MoveChild, 2,
/*2937*/        OPC_CheckCondCode, ISD::SETNE,
/*2939*/        OPC_MoveParent,
/*2940*/        OPC_MoveParent,
/*2941*/        OPC_RecordChild1, // #2 = $T
/*2942*/        OPC_RecordChild2, // #3 = $F
/*2943*/        OPC_CheckType, MVT::i32,
/*2945*/        OPC_EmitConvertToTarget, 1,
/*2947*/        OPC_EmitNode, TARGET_VAL(XCore::EQ_2rus), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5
/*2956*/        OPC_MorphNodeTo, TARGET_VAL(XCore::SELECT_CC), 0,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 5, 3, 2, 
                // Src: (select:i32 (setcc:i32 GRRegs:i32:$lhs, (imm:i32)<<P:Predicate_immUs>>:$rhs, SETNE:Other), GRRegs:i32:$T, GRRegs:i32:$F) - Complexity = 10
                // Dst: (SELECT_CC:i32 (EQ_2rus:i32 GRRegs:i32:$lhs, (imm:i32)<<P:Predicate_immUs>>:$rhs), GRRegs:i32:$F, GRRegs:i32:$T)
/*2966*/      /*Scope*/ 19|128,1/*147*/, /*->3115*/
/*2968*/        OPC_CheckChild0Type, MVT::i32,
/*2970*/        OPC_RecordChild1, // #1 = $rhs
/*2971*/        OPC_MoveChild, 2,
/*2973*/        OPC_Scope, 27, /*->3002*/ // 5 children in Scope
/*2975*/          OPC_CheckCondCode, ISD::SETLE,
/*2977*/          OPC_MoveParent,
/*2978*/          OPC_MoveParent,
/*2979*/          OPC_RecordChild1, // #2 = $T
/*2980*/          OPC_RecordChild2, // #3 = $F
/*2981*/          OPC_CheckType, MVT::i32,
/*2983*/          OPC_EmitNode, TARGET_VAL(XCore::LSS_3r), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4
/*2992*/          OPC_MorphNodeTo, TARGET_VAL(XCore::SELECT_CC), 0,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 4, 3, 2, 
                  // Src: (select:i32 (setcc:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs, SETLE:Other), GRRegs:i32:$T, GRRegs:i32:$F) - Complexity = 6
                  // Dst: (SELECT_CC:i32 (LSS_3r:i32 GRRegs:i32:$rhs, GRRegs:i32:$lhs), GRRegs:i32:$F, GRRegs:i32:$T)
/*3002*/        /*Scope*/ 27, /*->3030*/
/*3003*/          OPC_CheckCondCode, ISD::SETULE,
/*3005*/          OPC_MoveParent,
/*3006*/          OPC_MoveParent,
/*3007*/          OPC_RecordChild1, // #2 = $T
/*3008*/          OPC_RecordChild2, // #3 = $F
/*3009*/          OPC_CheckType, MVT::i32,
/*3011*/          OPC_EmitNode, TARGET_VAL(XCore::LSU_3r), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4
/*3020*/          OPC_MorphNodeTo, TARGET_VAL(XCore::SELECT_CC), 0,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 4, 3, 2, 
                  // Src: (select:i32 (setcc:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs, SETULE:Other), GRRegs:i32:$T, GRRegs:i32:$F) - Complexity = 6
                  // Dst: (SELECT_CC:i32 (LSU_3r:i32 GRRegs:i32:$rhs, GRRegs:i32:$lhs), GRRegs:i32:$F, GRRegs:i32:$T)
/*3030*/        /*Scope*/ 27, /*->3058*/
/*3031*/          OPC_CheckCondCode, ISD::SETGE,
/*3033*/          OPC_MoveParent,
/*3034*/          OPC_MoveParent,
/*3035*/          OPC_RecordChild1, // #2 = $T
/*3036*/          OPC_RecordChild2, // #3 = $F
/*3037*/          OPC_CheckType, MVT::i32,
/*3039*/          OPC_EmitNode, TARGET_VAL(XCore::LSS_3r), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*3048*/          OPC_MorphNodeTo, TARGET_VAL(XCore::SELECT_CC), 0,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 4, 3, 2, 
                  // Src: (select:i32 (setcc:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs, SETGE:Other), GRRegs:i32:$T, GRRegs:i32:$F) - Complexity = 6
                  // Dst: (SELECT_CC:i32 (LSS_3r:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs), GRRegs:i32:$F, GRRegs:i32:$T)
/*3058*/        /*Scope*/ 27, /*->3086*/
/*3059*/          OPC_CheckCondCode, ISD::SETUGE,
/*3061*/          OPC_MoveParent,
/*3062*/          OPC_MoveParent,
/*3063*/          OPC_RecordChild1, // #2 = $T
/*3064*/          OPC_RecordChild2, // #3 = $F
/*3065*/          OPC_CheckType, MVT::i32,
/*3067*/          OPC_EmitNode, TARGET_VAL(XCore::LSU_3r), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*3076*/          OPC_MorphNodeTo, TARGET_VAL(XCore::SELECT_CC), 0,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 4, 3, 2, 
                  // Src: (select:i32 (setcc:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs, SETUGE:Other), GRRegs:i32:$T, GRRegs:i32:$F) - Complexity = 6
                  // Dst: (SELECT_CC:i32 (LSU_3r:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs), GRRegs:i32:$F, GRRegs:i32:$T)
/*3086*/        /*Scope*/ 27, /*->3114*/
/*3087*/          OPC_CheckCondCode, ISD::SETNE,
/*3089*/          OPC_MoveParent,
/*3090*/          OPC_MoveParent,
/*3091*/          OPC_RecordChild1, // #2 = $T
/*3092*/          OPC_RecordChild2, // #3 = $F
/*3093*/          OPC_CheckType, MVT::i32,
/*3095*/          OPC_EmitNode, TARGET_VAL(XCore::EQ_3r), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*3104*/          OPC_MorphNodeTo, TARGET_VAL(XCore::SELECT_CC), 0,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 4, 3, 2, 
                  // Src: (select:i32 (setcc:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs, SETNE:Other), GRRegs:i32:$T, GRRegs:i32:$F) - Complexity = 6
                  // Dst: (SELECT_CC:i32 (EQ_3r:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs), GRRegs:i32:$F, GRRegs:i32:$T)
/*3114*/        0, /*End of Scope*/
/*3115*/      0, /*End of Scope*/
/*3116*/    /*Scope*/ 15, /*->3132*/
/*3117*/      OPC_RecordChild0, // #0 = $cond
/*3118*/      OPC_RecordChild1, // #1 = $T
/*3119*/      OPC_RecordChild2, // #2 = $F
/*3120*/      OPC_CheckType, MVT::i32,
/*3122*/      OPC_MorphNodeTo, TARGET_VAL(XCore::SELECT_CC), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (select:i32 GRRegs:i32:$cond, GRRegs:i32:$T, GRRegs:i32:$F) - Complexity = 3
              // Dst: (SELECT_CC:i32 GRRegs:i32:$cond, GRRegs:i32:$T, GRRegs:i32:$F)
/*3132*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 26,  TARGET_VAL(ISD::CALLSEQ_END),// ->3162
/*3136*/    OPC_RecordNode,   // #0 = 'callseq_end' chained node
/*3137*/    OPC_CaptureGlueInput,
/*3138*/    OPC_RecordChild1, // #1 = $amt1
/*3139*/    OPC_MoveChild, 1,
/*3141*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*3144*/    OPC_MoveParent,
/*3145*/    OPC_RecordChild2, // #2 = $amt2
/*3146*/    OPC_MoveChild, 2,
/*3148*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*3151*/    OPC_MoveParent,
/*3152*/    OPC_EmitMergeInputChains1_0,
/*3153*/    OPC_MorphNodeTo, TARGET_VAL(XCore::ADJCALLSTACKUP), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
            // Src: (callseq_end (timm:i32):$amt1, (timm:i32):$amt2) - Complexity = 9
            // Dst: (ADJCALLSTACKUP:i32 (timm:i32):$amt1, (timm:i32):$amt2)
          /*SwitchOpcode*/ 15,  TARGET_VAL(ISD::FrameIndex),// ->3180
/*3165*/    OPC_RecordNode,   // #0 = $addr
/*3166*/    OPC_CheckType, MVT::i32,
/*3168*/    OPC_CheckComplexPat, /*CP*/0, /*#*/0, // SelectADDRspii:$addr #1 #2
/*3171*/    OPC_MorphNodeTo, TARGET_VAL(XCore::LDAWFI), 0,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
            // Src: ADDRspii:i32:$addr - Complexity = 9
            // Dst: (LDAWFI:i32 ADDRspii:i32:$addr)
          /*SwitchOpcode*/ 15,  TARGET_VAL(XCoreISD::DPRelativeWrapper),// ->3198
/*3183*/    OPC_RecordNode,   // #0 = $a
/*3184*/    OPC_CheckType, MVT::i32,
/*3186*/    OPC_CheckComplexPat, /*CP*/1, /*#*/0, // SelectADDRdpii:$a #1 #2
/*3189*/    OPC_MorphNodeTo, TARGET_VAL(XCore::LDAWDP_lru6), 0,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
            // Src: ADDRdpii:i32:$a - Complexity = 9
            // Dst: (LDAWDP_lru6:i32 ADDRdpii:i32:$a)
          /*SwitchOpcode*/ 15,  TARGET_VAL(XCoreISD::CPRelativeWrapper),// ->3216
/*3201*/    OPC_RecordNode,   // #0 = $a
/*3202*/    OPC_CheckType, MVT::i32,
/*3204*/    OPC_CheckComplexPat, /*CP*/2, /*#*/0, // SelectADDRcpii:$a #1 #2
/*3207*/    OPC_MorphNodeTo, TARGET_VAL(XCore::LDAWCP_lu6), 0,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
            // Src: ADDRcpii:i32:$a - Complexity = 9
            // Dst: (LDAWCP_lu6:i32 ADDRcpii:i32:$a)
          /*SwitchOpcode*/ 37,  TARGET_VAL(ISD::XOR),// ->3256
/*3219*/    OPC_RecordChild0, // #0 = $b
/*3220*/    OPC_Scope, 22, /*->3244*/ // 2 children in Scope
/*3222*/      OPC_MoveChild, 1,
/*3224*/      OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*3235*/      OPC_MoveParent,
/*3236*/      OPC_MorphNodeTo, TARGET_VAL(XCore::NOT), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (xor:i32 GRRegs:i32:$b, -1:i32) - Complexity = 8
              // Dst: (NOT:i32 GRRegs:i32:$b)
/*3244*/    /*Scope*/ 10, /*->3255*/
/*3245*/      OPC_RecordChild1, // #1 = $c
/*3246*/      OPC_MorphNodeTo, TARGET_VAL(XCore::XOR_l3r), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (xor:i32 GRRegs:i32:$b, GRRegs:i32:$c) - Complexity = 3
              // Dst: (XOR_l3r:i32 GRRegs:i32:$b, GRRegs:i32:$c)
/*3255*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 67,  TARGET_VAL(ISD::MUL),// ->3326
/*3259*/    OPC_RecordChild0, // #0 = $src
/*3260*/    OPC_Scope, 52, /*->3314*/ // 2 children in Scope
/*3262*/      OPC_MoveChild, 1,
/*3264*/      OPC_Scope, 12, /*->3278*/ // 3 children in Scope
/*3266*/        OPC_CheckInteger, 3, 
/*3268*/        OPC_MoveParent,
/*3269*/        OPC_MorphNodeTo, TARGET_VAL(XCore::LDA16F_l3r), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 0, 
                // Src: (mul:i32 GRRegs:i32:$src, 3:i32) - Complexity = 8
                // Dst: (LDA16F_l3r:i32 GRRegs:i32:$src, GRRegs:i32:$src)
/*3278*/      /*Scope*/ 12, /*->3291*/
/*3279*/        OPC_CheckInteger, 5, 
/*3281*/        OPC_MoveParent,
/*3282*/        OPC_MorphNodeTo, TARGET_VAL(XCore::LDAWF_l3r), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 0, 
                // Src: (mul:i32 GRRegs:i32:$src, 5:i32) - Complexity = 8
                // Dst: (LDAWF_l3r:i32 GRRegs:i32:$src, GRRegs:i32:$src)
/*3291*/      /*Scope*/ 21, /*->3313*/
/*3292*/        OPC_CheckInteger, 125|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551613*/, 
/*3303*/        OPC_MoveParent,
/*3304*/        OPC_MorphNodeTo, TARGET_VAL(XCore::LDAWB_l3r), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 0, 
                // Src: (mul:i32 GRRegs:i32:$src, -3:i32) - Complexity = 8
                // Dst: (LDAWB_l3r:i32 GRRegs:i32:$src, GRRegs:i32:$src)
/*3313*/      0, /*End of Scope*/
/*3314*/    /*Scope*/ 10, /*->3325*/
/*3315*/      OPC_RecordChild1, // #1 = $c
/*3316*/      OPC_MorphNodeTo, TARGET_VAL(XCore::MUL_l3r), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (mul:i32 GRRegs:i32:$b, GRRegs:i32:$c) - Complexity = 3
              // Dst: (MUL_l3r:i32 GRRegs:i32:$b, GRRegs:i32:$c)
/*3325*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 46|128,2/*302*/,  TARGET_VAL(ISD::SETCC),// ->3632
/*3330*/    OPC_RecordChild0, // #0 = $lhs
/*3331*/    OPC_Scope, 43, /*->3376*/ // 3 children in Scope
/*3333*/      OPC_MoveChild, 1,
/*3335*/      OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*3346*/      OPC_MoveParent,
/*3347*/      OPC_MoveChild, 2,
/*3349*/      OPC_CheckCondCode, ISD::SETGT,
/*3351*/      OPC_MoveParent,
/*3352*/      OPC_EmitInteger, MVT::i32, 32, 
/*3355*/      OPC_EmitNode, TARGET_VAL(XCore::ASHR_l2rus), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2
/*3364*/      OPC_EmitInteger, MVT::i32, 0, 
/*3367*/      OPC_MorphNodeTo, TARGET_VAL(XCore::EQ_2rus), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (setcc:i32 GRRegs:i32:$lhs, -1:i32, SETGT:Other) - Complexity = 8
              // Dst: (EQ_2rus:i32 (ASHR_l2rus:i32 GRRegs:i32:$lhs, 32:i32), 0:i32)
/*3376*/    /*Scope*/ 55, /*->3432*/
/*3377*/      OPC_RecordChild1, // #1 = $rhs
/*3378*/      OPC_MoveChild, 1,
/*3380*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3383*/      OPC_CheckPredicate, 0, // Predicate_immUs
/*3385*/      OPC_MoveParent,
/*3386*/      OPC_MoveChild, 2,
/*3388*/      OPC_Scope, 14, /*->3404*/ // 2 children in Scope
/*3390*/        OPC_CheckCondCode, ISD::SETEQ,
/*3392*/        OPC_MoveParent,
/*3393*/        OPC_EmitConvertToTarget, 1,
/*3395*/        OPC_MorphNodeTo, TARGET_VAL(XCore::EQ_2rus), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (setcc:i32 GRRegs:i32:$lhs, (imm:i32)<<P:Predicate_immUs>>:$rhs, SETEQ:Other) - Complexity = 7
                // Dst: (EQ_2rus:i32 GRRegs:i32:$lhs, (imm:i32)<<P:Predicate_immUs>>:$rhs)
/*3404*/      /*Scope*/ 26, /*->3431*/
/*3405*/        OPC_CheckCondCode, ISD::SETNE,
/*3407*/        OPC_MoveParent,
/*3408*/        OPC_EmitConvertToTarget, 1,
/*3410*/        OPC_EmitNode, TARGET_VAL(XCore::EQ_2rus), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2,  // Results = #3
/*3419*/        OPC_EmitInteger, MVT::i32, 0, 
/*3422*/        OPC_MorphNodeTo, TARGET_VAL(XCore::EQ_2rus), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 3, 4, 
                // Src: (setcc:i32 GRRegs:i32:$lhs, (imm:i32)<<P:Predicate_immUs>>:$rhs, SETNE:Other) - Complexity = 7
                // Dst: (EQ_2rus:i32 (EQ_2rus:i32 GRRegs:i32:$lhs, (imm:i32)<<P:Predicate_immUs>>:$rhs), 0:i32)
/*3431*/      0, /*End of Scope*/
/*3432*/    /*Scope*/ 69|128,1/*197*/, /*->3631*/
/*3434*/      OPC_CheckChild0Type, MVT::i32,
/*3436*/      OPC_RecordChild1, // #1 = $rhs
/*3437*/      OPC_MoveChild, 2,
/*3439*/      OPC_Scope, 12, /*->3453*/ // 10 children in Scope
/*3441*/        OPC_CheckCondCode, ISD::SETGT,
/*3443*/        OPC_MoveParent,
/*3444*/        OPC_MorphNodeTo, TARGET_VAL(XCore::LSS_3r), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (setcc:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs, SETGT:Other) - Complexity = 3
                // Dst: (LSS_3r:i32 GRRegs:i32:$rhs, GRRegs:i32:$lhs)
/*3453*/      /*Scope*/ 12, /*->3466*/
/*3454*/        OPC_CheckCondCode, ISD::SETUGT,
/*3456*/        OPC_MoveParent,
/*3457*/        OPC_MorphNodeTo, TARGET_VAL(XCore::LSU_3r), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (setcc:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs, SETUGT:Other) - Complexity = 3
                // Dst: (LSU_3r:i32 GRRegs:i32:$rhs, GRRegs:i32:$lhs)
/*3466*/      /*Scope*/ 12, /*->3479*/
/*3467*/        OPC_CheckCondCode, ISD::SETLT,
/*3469*/        OPC_MoveParent,
/*3470*/        OPC_MorphNodeTo, TARGET_VAL(XCore::LSS_3r), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (setcc:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs, SETLT:Other) - Complexity = 3
                // Dst: (LSS_3r:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs)
/*3479*/      /*Scope*/ 12, /*->3492*/
/*3480*/        OPC_CheckCondCode, ISD::SETULT,
/*3482*/        OPC_MoveParent,
/*3483*/        OPC_MorphNodeTo, TARGET_VAL(XCore::LSU_3r), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (setcc:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs, SETULT:Other) - Complexity = 3
                // Dst: (LSU_3r:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs)
/*3492*/      /*Scope*/ 12, /*->3505*/
/*3493*/        OPC_CheckCondCode, ISD::SETEQ,
/*3495*/        OPC_MoveParent,
/*3496*/        OPC_MorphNodeTo, TARGET_VAL(XCore::EQ_3r), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (setcc:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs, SETEQ:Other) - Complexity = 3
                // Dst: (EQ_3r:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs)
/*3505*/      /*Scope*/ 24, /*->3530*/
/*3506*/        OPC_CheckCondCode, ISD::SETLE,
/*3508*/        OPC_MoveParent,
/*3509*/        OPC_EmitNode, TARGET_VAL(XCore::LSS_3r), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #2
/*3518*/        OPC_EmitInteger, MVT::i32, 0, 
/*3521*/        OPC_MorphNodeTo, TARGET_VAL(XCore::EQ_2rus), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (setcc:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs, SETLE:Other) - Complexity = 3
                // Dst: (EQ_2rus:i32 (LSS_3r:i32 GRRegs:i32:$rhs, GRRegs:i32:$lhs), 0:i32)
/*3530*/      /*Scope*/ 24, /*->3555*/
/*3531*/        OPC_CheckCondCode, ISD::SETULE,
/*3533*/        OPC_MoveParent,
/*3534*/        OPC_EmitNode, TARGET_VAL(XCore::LSU_3r), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #2
/*3543*/        OPC_EmitInteger, MVT::i32, 0, 
/*3546*/        OPC_MorphNodeTo, TARGET_VAL(XCore::EQ_2rus), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (setcc:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs, SETULE:Other) - Complexity = 3
                // Dst: (EQ_2rus:i32 (LSU_3r:i32 GRRegs:i32:$rhs, GRRegs:i32:$lhs), 0:i32)
/*3555*/      /*Scope*/ 24, /*->3580*/
/*3556*/        OPC_CheckCondCode, ISD::SETGE,
/*3558*/        OPC_MoveParent,
/*3559*/        OPC_EmitNode, TARGET_VAL(XCore::LSS_3r), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2
/*3568*/        OPC_EmitInteger, MVT::i32, 0, 
/*3571*/        OPC_MorphNodeTo, TARGET_VAL(XCore::EQ_2rus), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (setcc:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs, SETGE:Other) - Complexity = 3
                // Dst: (EQ_2rus:i32 (LSS_3r:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs), 0:i32)
/*3580*/      /*Scope*/ 24, /*->3605*/
/*3581*/        OPC_CheckCondCode, ISD::SETUGE,
/*3583*/        OPC_MoveParent,
/*3584*/        OPC_EmitNode, TARGET_VAL(XCore::LSU_3r), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2
/*3593*/        OPC_EmitInteger, MVT::i32, 0, 
/*3596*/        OPC_MorphNodeTo, TARGET_VAL(XCore::EQ_2rus), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (setcc:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs, SETUGE:Other) - Complexity = 3
                // Dst: (EQ_2rus:i32 (LSU_3r:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs), 0:i32)
/*3605*/      /*Scope*/ 24, /*->3630*/
/*3606*/        OPC_CheckCondCode, ISD::SETNE,
/*3608*/        OPC_MoveParent,
/*3609*/        OPC_EmitNode, TARGET_VAL(XCore::EQ_3r), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2
/*3618*/        OPC_EmitInteger, MVT::i32, 0, 
/*3621*/        OPC_MorphNodeTo, TARGET_VAL(XCore::EQ_2rus), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (setcc:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs, SETNE:Other) - Complexity = 3
                // Dst: (EQ_2rus:i32 (EQ_3r:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs), 0:i32)
/*3630*/      0, /*End of Scope*/
/*3631*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 34,  TARGET_VAL(ISD::SHL),// ->3669
/*3635*/    OPC_RecordChild0, // #0 = $b
/*3636*/    OPC_RecordChild1, // #1 = $c
/*3637*/    OPC_Scope, 19, /*->3658*/ // 2 children in Scope
/*3639*/      OPC_MoveChild, 1,
/*3641*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3644*/      OPC_CheckPredicate, 19, // Predicate_immBitp
/*3646*/      OPC_MoveParent,
/*3647*/      OPC_EmitConvertToTarget, 1,
/*3649*/      OPC_MorphNodeTo, TARGET_VAL(XCore::SHL_2rus), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
              // Src: (shl:i32 GRRegs:i32:$b, (imm:i32)<<P:Predicate_immBitp>>:$c) - Complexity = 7
              // Dst: (SHL_2rus:i32 GRRegs:i32:$b, (imm:i32):$c)
/*3658*/    /*Scope*/ 9, /*->3668*/
/*3659*/      OPC_MorphNodeTo, TARGET_VAL(XCore::SHL_3r), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (shl:i32 GRRegs:i32:$b, GRRegs:i32:$c) - Complexity = 3
              // Dst: (SHL_3r:i32 GRRegs:i32:$b, GRRegs:i32:$c)
/*3668*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 34,  TARGET_VAL(ISD::SRL),// ->3706
/*3672*/    OPC_RecordChild0, // #0 = $b
/*3673*/    OPC_RecordChild1, // #1 = $c
/*3674*/    OPC_Scope, 19, /*->3695*/ // 2 children in Scope
/*3676*/      OPC_MoveChild, 1,
/*3678*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3681*/      OPC_CheckPredicate, 19, // Predicate_immBitp
/*3683*/      OPC_MoveParent,
/*3684*/      OPC_EmitConvertToTarget, 1,
/*3686*/      OPC_MorphNodeTo, TARGET_VAL(XCore::SHR_2rus), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
              // Src: (srl:i32 GRRegs:i32:$b, (imm:i32)<<P:Predicate_immBitp>>:$c) - Complexity = 7
              // Dst: (SHR_2rus:i32 GRRegs:i32:$b, (imm:i32):$c)
/*3695*/    /*Scope*/ 9, /*->3705*/
/*3696*/      OPC_MorphNodeTo, TARGET_VAL(XCore::SHR_3r), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (srl:i32 GRRegs:i32:$b, GRRegs:i32:$c) - Complexity = 3
              // Dst: (SHR_3r:i32 GRRegs:i32:$b, GRRegs:i32:$c)
/*3705*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 42,  TARGET_VAL(XCoreISD::STWSP),// ->3751
/*3709*/    OPC_RecordNode,   // #0 = 'XCoreStwsp' chained node
/*3710*/    OPC_RecordChild1, // #1 = $val
/*3711*/    OPC_CheckChild1Type, MVT::i32,
/*3713*/    OPC_RecordChild2, // #2 = $index
/*3714*/    OPC_MoveChild, 2,
/*3716*/    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3719*/    OPC_Scope, 14, /*->3735*/ // 2 children in Scope
/*3721*/      OPC_CheckPredicate, 20, // Predicate_immU6
/*3723*/      OPC_MoveParent,
/*3724*/      OPC_EmitMergeInputChains1_0,
/*3725*/      OPC_EmitConvertToTarget, 2,
/*3727*/      OPC_MorphNodeTo, TARGET_VAL(XCore::STWSP_ru6), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 1, 3, 
              // Src: (XCoreStwsp GRRegs:i32:$val, (imm:i32)<<P:Predicate_immU6>>:$index) - Complexity = 7
              // Dst: (STWSP_ru6 GRRegs:i32:$val, (imm:i32):$index)
/*3735*/    /*Scope*/ 14, /*->3750*/
/*3736*/      OPC_CheckPredicate, 21, // Predicate_immU16
/*3738*/      OPC_MoveParent,
/*3739*/      OPC_EmitMergeInputChains1_0,
/*3740*/      OPC_EmitConvertToTarget, 2,
/*3742*/      OPC_MorphNodeTo, TARGET_VAL(XCore::STWSP_lru6), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 1, 3, 
              // Src: (XCoreStwsp GRRegs:i32:$val, (imm:i32)<<P:Predicate_immU16>>:$index) - Complexity = 7
              // Dst: (STWSP_lru6 GRRegs:i32:$val, (imm:i32):$index)
/*3750*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 42,  TARGET_VAL(XCoreISD::RETSP),// ->3796
/*3754*/    OPC_RecordNode,   // #0 = 'XCoreRetsp' chained node
/*3755*/    OPC_CaptureGlueInput,
/*3756*/    OPC_RecordChild1, // #1 = $b
/*3757*/    OPC_MoveChild, 1,
/*3759*/    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3762*/    OPC_CheckType, MVT::i32,
/*3764*/    OPC_Scope, 14, /*->3780*/ // 2 children in Scope
/*3766*/      OPC_CheckPredicate, 20, // Predicate_immU6
/*3768*/      OPC_MoveParent,
/*3769*/      OPC_EmitMergeInputChains1_0,
/*3770*/      OPC_EmitConvertToTarget, 1,
/*3772*/      OPC_MorphNodeTo, TARGET_VAL(XCore::RETSP_u6), 0|OPFL_Chain|OPFL_GlueInput,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
              // Src: (XCoreRetsp (imm:i32)<<P:Predicate_immU6>>:$b) - Complexity = 7
              // Dst: (RETSP_u6:i32 (imm:i32):$b)
/*3780*/    /*Scope*/ 14, /*->3795*/
/*3781*/      OPC_CheckPredicate, 21, // Predicate_immU16
/*3783*/      OPC_MoveParent,
/*3784*/      OPC_EmitMergeInputChains1_0,
/*3785*/      OPC_EmitConvertToTarget, 1,
/*3787*/      OPC_MorphNodeTo, TARGET_VAL(XCore::RETSP_lu6), 0|OPFL_Chain|OPFL_GlueInput,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
              // Src: (XCoreRetsp (imm:i32)<<P:Predicate_immU16>>:$b) - Complexity = 7
              // Dst: (RETSP_lu6:i32 (imm:i32):$b)
/*3795*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 85,  TARGET_VAL(XCoreISD::BL),// ->3884
/*3799*/    OPC_RecordNode,   // #0 = 'XCoreBranchLink' chained node
/*3800*/    OPC_CaptureGlueInput,
/*3801*/    OPC_RecordChild1, // #1 = $target
/*3802*/    OPC_Scope, 67, /*->3871*/ // 2 children in Scope
/*3804*/      OPC_MoveChild, 1,
/*3806*/      OPC_SwitchOpcode /*3 cases */, 34,  TARGET_VAL(ISD::Constant),// ->3844
/*3810*/        OPC_CheckType, MVT::i32,
/*3812*/        OPC_Scope, 14, /*->3828*/ // 2 children in Scope
/*3814*/          OPC_CheckPredicate, 23, // Predicate_immU10
/*3816*/          OPC_MoveParent,
/*3817*/          OPC_EmitMergeInputChains1_0,
/*3818*/          OPC_EmitConvertToTarget, 1,
/*3820*/          OPC_MorphNodeTo, TARGET_VAL(XCore::BL_u10), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                      1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
                  // Src: (XCoreBranchLink (imm:i32)<<P:Predicate_immU10>>:$target) - Complexity = 7
                  // Dst: (BL_u10:i32 (imm:i32):$target)
/*3828*/        /*Scope*/ 14, /*->3843*/
/*3829*/          OPC_CheckPredicate, 24, // Predicate_immU20
/*3831*/          OPC_MoveParent,
/*3832*/          OPC_EmitMergeInputChains1_0,
/*3833*/          OPC_EmitConvertToTarget, 1,
/*3835*/          OPC_MorphNodeTo, TARGET_VAL(XCore::BL_lu10), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                      1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
                  // Src: (XCoreBranchLink (imm:i32)<<P:Predicate_immU20>>:$target) - Complexity = 7
                  // Dst: (BL_lu10:i32 (imm:i32):$target)
/*3843*/        0, /*End of Scope*/
              /*SwitchOpcode*/ 10,  TARGET_VAL(ISD::TargetGlobalAddress),// ->3857
/*3847*/        OPC_MoveParent,
/*3848*/        OPC_EmitMergeInputChains1_0,
/*3849*/        OPC_MorphNodeTo, TARGET_VAL(XCore::BL_lu10), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (XCoreBranchLink (tglobaladdr:iPTR):$addr) - Complexity = 6
                // Dst: (BL_lu10:i32 (tglobaladdr:i32):$addr)
              /*SwitchOpcode*/ 10,  TARGET_VAL(ISD::TargetExternalSymbol),// ->3870
/*3860*/        OPC_MoveParent,
/*3861*/        OPC_EmitMergeInputChains1_0,
/*3862*/        OPC_MorphNodeTo, TARGET_VAL(XCore::BL_lu10), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (XCoreBranchLink (texternalsym:iPTR):$addr) - Complexity = 6
                // Dst: (BL_lu10:i32 (texternalsym:i32):$addr)
              0, // EndSwitchOpcode
/*3871*/    /*Scope*/ 11, /*->3883*/
/*3872*/      OPC_CheckChild1Type, MVT::i32,
/*3874*/      OPC_EmitMergeInputChains1_0,
/*3875*/      OPC_MorphNodeTo, TARGET_VAL(XCore::BLA_1r), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
              // Src: (XCoreBranchLink GRRegs:i32:$addr) - Complexity = 3
              // Dst: (BLA_1r:i32 GRRegs:i32:$addr)
/*3883*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 17,  TARGET_VAL(ISD::CALLSEQ_START),// ->3904
/*3887*/    OPC_RecordNode,   // #0 = 'callseq_start' chained node
/*3888*/    OPC_RecordChild1, // #1 = $amt
/*3889*/    OPC_MoveChild, 1,
/*3891*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*3894*/    OPC_MoveParent,
/*3895*/    OPC_EmitMergeInputChains1_0,
/*3896*/    OPC_MorphNodeTo, TARGET_VAL(XCore::ADJCALLSTACKDOWN), 0|OPFL_Chain|OPFL_GlueOutput,
                1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
            // Src: (callseq_start (timm:i32):$amt) - Complexity = 6
            // Dst: (ADJCALLSTACKDOWN:i32 (timm:i32):$amt)
          /*SwitchOpcode*/ 33,  TARGET_VAL(XCoreISD::PCRelativeWrapper),// ->3940
/*3907*/    OPC_RecordChild0, // #0 = $addr
/*3908*/    OPC_MoveChild, 0,
/*3910*/    OPC_SwitchOpcode /*2 cases */, 11,  TARGET_VAL(ISD::TargetGlobalAddress),// ->3925
/*3914*/      OPC_MoveParent,
/*3915*/      OPC_CheckType, MVT::i32,
/*3917*/      OPC_MorphNodeTo, TARGET_VAL(XCore::LDAP_lu10), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (pcrelwrapper:i32 (tglobaladdr:i32):$addr) - Complexity = 6
              // Dst: (LDAP_lu10:i32 (tglobaladdr:i32):$addr)
            /*SwitchOpcode*/ 11,  TARGET_VAL(ISD::TargetBlockAddress),// ->3939
/*3928*/      OPC_MoveParent,
/*3929*/      OPC_CheckType, MVT::i32,
/*3931*/      OPC_MorphNodeTo, TARGET_VAL(XCore::LDAP_lu10_ba), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (pcrelwrapper:i32 (tblockaddress:i32):$addr) - Complexity = 6
              // Dst: (LDAP_lu10_ba:i32 (tblockaddress:i32):$addr)
            0, // EndSwitchOpcode
          /*SwitchOpcode*/ 18,  TARGET_VAL(XCoreISD::BR_JT),// ->3961
/*3943*/    OPC_RecordNode,   // #0 = 'XCoreBR_JT' chained node
/*3944*/    OPC_RecordChild1, // #1 = $t
/*3945*/    OPC_MoveChild, 1,
/*3947*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetJumpTable),
/*3950*/    OPC_MoveParent,
/*3951*/    OPC_RecordChild2, // #2 = $i
/*3952*/    OPC_EmitMergeInputChains1_0,
/*3953*/    OPC_MorphNodeTo, TARGET_VAL(XCore::BR_JT), 0|OPFL_Chain,
                0/*#VTs*/, 2/*#Ops*/, 1, 2, 
            // Src: (XCoreBR_JT (tjumptable:i32):$t, GRRegs:i32:$i) - Complexity = 6
            // Dst: (BR_JT (tjumptable:i32):$t, GRRegs:i32:$i)
          /*SwitchOpcode*/ 18,  TARGET_VAL(XCoreISD::BR_JT32),// ->3982
/*3964*/    OPC_RecordNode,   // #0 = 'XCoreBR_JT32' chained node
/*3965*/    OPC_RecordChild1, // #1 = $t
/*3966*/    OPC_MoveChild, 1,
/*3968*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetJumpTable),
/*3971*/    OPC_MoveParent,
/*3972*/    OPC_RecordChild2, // #2 = $i
/*3973*/    OPC_EmitMergeInputChains1_0,
/*3974*/    OPC_MorphNodeTo, TARGET_VAL(XCore::BR_JT32), 0|OPFL_Chain,
                0/*#VTs*/, 2/*#Ops*/, 1, 2, 
            // Src: (XCoreBR_JT32 (tjumptable:i32):$t, GRRegs:i32:$i) - Complexity = 6
            // Dst: (BR_JT32 (tjumptable:i32):$t, GRRegs:i32:$i)
          /*SwitchOpcode*/ 29,  TARGET_VAL(ISD::Constant),// ->4014
/*3985*/    OPC_RecordNode,   // #0 = $b
/*3986*/    OPC_Scope, 12, /*->4000*/ // 2 children in Scope
/*3988*/      OPC_CheckPredicate, 20, // Predicate_immU6
/*3990*/      OPC_EmitConvertToTarget, 0,
/*3992*/      OPC_MorphNodeTo, TARGET_VAL(XCore::LDC_ru6), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
              // Src: (imm:i32)<<P:Predicate_immU6>>:$b - Complexity = 4
              // Dst: (LDC_ru6:i32 (imm:i32):$b)
/*4000*/    /*Scope*/ 12, /*->4013*/
/*4001*/      OPC_CheckPredicate, 21, // Predicate_immU16
/*4003*/      OPC_EmitConvertToTarget, 0,
/*4005*/      OPC_MorphNodeTo, TARGET_VAL(XCore::LDC_lru6), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
              // Src: (imm:i32)<<P:Predicate_immU16>>:$b - Complexity = 4
              // Dst: (LDC_lru6:i32 (imm:i32):$b)
/*4013*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 11,  TARGET_VAL(ISD::OR),// ->4028
/*4017*/    OPC_RecordChild0, // #0 = $b
/*4018*/    OPC_RecordChild1, // #1 = $c
/*4019*/    OPC_MorphNodeTo, TARGET_VAL(XCore::OR_3r), 0,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
            // Src: (or:i32 GRRegs:i32:$b, GRRegs:i32:$c) - Complexity = 3
            // Dst: (OR_3r:i32 GRRegs:i32:$b, GRRegs:i32:$c)
          /*SwitchOpcode*/ 11,  TARGET_VAL(ISD::SDIV),// ->4042
/*4031*/    OPC_RecordChild0, // #0 = $b
/*4032*/    OPC_RecordChild1, // #1 = $c
/*4033*/    OPC_MorphNodeTo, TARGET_VAL(XCore::DIVS_l3r), 0,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
            // Src: (sdiv:i32 GRRegs:i32:$b, GRRegs:i32:$c) - Complexity = 3
            // Dst: (DIVS_l3r:i32 GRRegs:i32:$b, GRRegs:i32:$c)
          /*SwitchOpcode*/ 11,  TARGET_VAL(ISD::UDIV),// ->4056
/*4045*/    OPC_RecordChild0, // #0 = $b
/*4046*/    OPC_RecordChild1, // #1 = $c
/*4047*/    OPC_MorphNodeTo, TARGET_VAL(XCore::DIVU_l3r), 0,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
            // Src: (udiv:i32 GRRegs:i32:$b, GRRegs:i32:$c) - Complexity = 3
            // Dst: (DIVU_l3r:i32 GRRegs:i32:$b, GRRegs:i32:$c)
          /*SwitchOpcode*/ 11,  TARGET_VAL(ISD::SREM),// ->4070
/*4059*/    OPC_RecordChild0, // #0 = $b
/*4060*/    OPC_RecordChild1, // #1 = $c
/*4061*/    OPC_MorphNodeTo, TARGET_VAL(XCore::REMS_l3r), 0,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
            // Src: (srem:i32 GRRegs:i32:$b, GRRegs:i32:$c) - Complexity = 3
            // Dst: (REMS_l3r:i32 GRRegs:i32:$b, GRRegs:i32:$c)
          /*SwitchOpcode*/ 11,  TARGET_VAL(ISD::UREM),// ->4084
/*4073*/    OPC_RecordChild0, // #0 = $b
/*4074*/    OPC_RecordChild1, // #1 = $c
/*4075*/    OPC_MorphNodeTo, TARGET_VAL(XCore::REMU_l3r), 0,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
            // Src: (urem:i32 GRRegs:i32:$b, GRRegs:i32:$c) - Complexity = 3
            // Dst: (REMU_l3r:i32 GRRegs:i32:$b, GRRegs:i32:$c)
          /*SwitchOpcode*/ 9,  TARGET_VAL(ISD::BSWAP),// ->4096
/*4087*/    OPC_RecordChild0, // #0 = $src
/*4088*/    OPC_MorphNodeTo, TARGET_VAL(XCore::BYTEREV_l2r), 0,
                1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
            // Src: (bswap:i32 GRRegs:i32:$src) - Complexity = 3
            // Dst: (BYTEREV_l2r:i32 GRRegs:i32:$src)
          /*SwitchOpcode*/ 9,  TARGET_VAL(ISD::CTLZ),// ->4108
/*4099*/    OPC_RecordChild0, // #0 = $src
/*4100*/    OPC_MorphNodeTo, TARGET_VAL(XCore::CLZ_l2r), 0,
                1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
            // Src: (ctlz:i32 GRRegs:i32:$src) - Complexity = 3
            // Dst: (CLZ_l2r:i32 GRRegs:i32:$src)
          /*SwitchOpcode*/ 53,  TARGET_VAL(ISD::SIGN_EXTEND_INREG),// ->4164
/*4111*/    OPC_RecordChild0, // #0 = $b
/*4112*/    OPC_MoveChild, 1,
/*4114*/    OPC_Scope, 15, /*->4131*/ // 3 children in Scope
/*4116*/      OPC_CheckValueType, MVT::i1,
/*4118*/      OPC_MoveParent,
/*4119*/      OPC_EmitInteger, MVT::i32, 1, 
/*4122*/      OPC_MorphNodeTo, TARGET_VAL(XCore::SEXT_rus), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (sext_inreg:i32 GRRegs:i32:$b, i1:Other) - Complexity = 3
              // Dst: (SEXT_rus:i32 GRRegs:i32:$b, 1:i32)
/*4131*/    /*Scope*/ 15, /*->4147*/
/*4132*/      OPC_CheckValueType, MVT::i8,
/*4134*/      OPC_MoveParent,
/*4135*/      OPC_EmitInteger, MVT::i32, 8, 
/*4138*/      OPC_MorphNodeTo, TARGET_VAL(XCore::SEXT_rus), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (sext_inreg:i32 GRRegs:i32:$b, i8:Other) - Complexity = 3
              // Dst: (SEXT_rus:i32 GRRegs:i32:$b, 8:i32)
/*4147*/    /*Scope*/ 15, /*->4163*/
/*4148*/      OPC_CheckValueType, MVT::i16,
/*4150*/      OPC_MoveParent,
/*4151*/      OPC_EmitInteger, MVT::i32, 16, 
/*4154*/      OPC_MorphNodeTo, TARGET_VAL(XCore::SEXT_rus), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (sext_inreg:i32 GRRegs:i32:$b, i16:Other) - Complexity = 3
              // Dst: (SEXT_rus:i32 GRRegs:i32:$b, 16:i32)
/*4163*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 16,  TARGET_VAL(ISD::BR),// ->4183
/*4167*/    OPC_RecordNode,   // #0 = 'br' chained node
/*4168*/    OPC_RecordChild1, // #1 = $addr
/*4169*/    OPC_MoveChild, 1,
/*4171*/    OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*4174*/    OPC_MoveParent,
/*4175*/    OPC_EmitMergeInputChains1_0,
/*4176*/    OPC_MorphNodeTo, TARGET_VAL(XCore::BRFU_lu6), 0|OPFL_Chain,
                0/*#VTs*/, 1/*#Ops*/, 1, 
            // Src: (br (bb:Other):$addr) - Complexity = 3
            // Dst: (BRFU_lu6 (bb:Other):$addr)
          /*SwitchOpcode*/ 17,  TARGET_VAL(ISD::CTTZ),// ->4203
/*4186*/    OPC_RecordChild0, // #0 = $src
/*4187*/    OPC_EmitNode, TARGET_VAL(XCore::BITREV_l2r), 0,
                1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0,  // Results = #1
/*4195*/    OPC_MorphNodeTo, TARGET_VAL(XCore::CLZ_l2r), 0,
                1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
            // Src: (cttz:i32 GRRegs:i32:$src) - Complexity = 3
            // Dst: (CLZ_l2r:i32 (BITREV_l2r:i32 GRRegs:i32:$src))
          /*SwitchOpcode*/ 20,  TARGET_VAL(ISD::TRAP),// ->4226
/*4206*/    OPC_RecordNode,   // #0 = 'trap' chained node
/*4207*/    OPC_EmitMergeInputChains1_0,
/*4208*/    OPC_EmitInteger, MVT::i32, 0, 
/*4211*/    OPC_EmitNode, TARGET_VAL(XCore::LDC_ru6), 0,
                1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1,  // Results = #2
/*4219*/    OPC_MorphNodeTo, TARGET_VAL(XCore::ECALLF_1r), 0|OPFL_Chain,
                0/*#VTs*/, 1/*#Ops*/, 2, 
            // Src: (trap) - Complexity = 3
            // Dst: (ECALLF_1r (LDC_ru6:i32 0:i32))
          0, // EndSwitchOpcode
    0
  }; // Total Array size is 4228 bytes

  // Opcode Histogram:
  // #OPC_Scope                          = 70
  // #OPC_RecordNode                     = 21
  // #OPC_RecordChild                    = 190
  // #OPC_RecordMemRef                   = 2
  // #OPC_CaptureGlueInput               = 3
  // #OPC_MoveChild                      = 94
  // #OPC_MoveParent                     = 220
  // #OPC_CheckSame                      = 1
  // #OPC_CheckPatternPredicate          = 0
  // #OPC_CheckPredicate                 = 89
  // #OPC_CheckOpcode                    = 57
  // #OPC_SwitchOpcode                   = 3
  // #OPC_CheckType                      = 41
  // #OPC_SwitchType                     = 0
  // #OPC_CheckChildType                 = 54
  // #OPC_CheckInteger                   = 78
  // #OPC_CheckCondCode                  = 33
  // #OPC_CheckValueType                 = 3
  // #OPC_CheckComplexPat                = 10
  // #OPC_CheckAndImm                    = 0
  // #OPC_CheckOrImm                     = 0
  // #OPC_CheckFoldableChainNode         = 1
  // #OPC_EmitInteger                    = 25
  // #OPC_EmitStringInteger              = 0
  // #OPC_EmitRegister                   = 0
  // #OPC_EmitConvertToTarget            = 36
  // #OPC_EmitMergeInputChains           = 104
  // #OPC_EmitCopyToReg                  = 2
  // #OPC_EmitNode                       = 31
  // #OPC_EmitNodeXForm                  = 8
  // #OPC_MarkGlueResults                = 0
  // #OPC_CompleteMatch                  = 0
  // #OPC_MorphNodeTo                    = 190

  #undef TARGET_VAL
  return SelectCodeCommon(N, MatcherTable,sizeof(MatcherTable));
}

virtual bool CheckNodePredicate(SDNode *Node,
                                unsigned PredNo) const {
  switch (PredNo) {
  default: llvm_unreachable("Invalid predicate in table?");
  case 0: { // Predicate_immUs
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return (uint32_t)N->getZExtValue() <= 11;

  }
  case 1: { // Predicate_immUs4
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  uint32_t value = (uint32_t)N->getZExtValue();
  return value%4 == 0 && value/4 <= 11;

  }
  case 2: { // Predicate_immUsNeg
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return -((uint32_t)N->getZExtValue()) <= 11;

  }
  case 3: { // Predicate_immUs4Neg
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  uint32_t value = (uint32_t)N->getZExtValue();
  return (-value)%4 == 0 && (-value)/4 <= 11;

  }
  case 4: { // Predicate_unindexedload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getAddressingMode() == ISD::UNINDEXED;

  }
  case 5: { // Predicate_sextload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::SEXTLOAD;

  }
  case 6: { // Predicate_sextloadi16
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 7: { // Predicate_extload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::EXTLOAD;

  }
  case 8: { // Predicate_extloadi16
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 9: { // Predicate_load
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::NON_EXTLOAD;

  }
  case 10: { // Predicate_zextload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::ZEXTLOAD;

  }
  case 11: { // Predicate_zextloadi8
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 12: { // Predicate_extloadi8
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 13: { // Predicate_unindexedstore
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getAddressingMode() == ISD::UNINDEXED;

  }
  case 14: { // Predicate_truncstore
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->isTruncatingStore();

  }
  case 15: { // Predicate_truncstorei16
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 16: { // Predicate_store
    SDNode *N = Node;

  return !cast<StoreSDNode>(N)->isTruncatingStore();

  }
  case 17: { // Predicate_truncstorei8
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 18: { // Predicate_immBpwSubBitp
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  uint32_t value = (uint32_t)N->getZExtValue();
  return (value >= 24 && value <= 31)
          || value == 16
          || value == 8
          || value == 0;

  }
  case 19: { // Predicate_immBitp
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  uint32_t value = (uint32_t)N->getZExtValue();
  return (value >= 1 && value <= 8)
          || value == 16
          || value == 24
          || value == 32;

  }
  case 20: { // Predicate_immU6
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return (uint32_t)N->getZExtValue() < (1 << 6);

  }
  case 21: { // Predicate_immU16
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return (uint32_t)N->getZExtValue() < (1 << 16);

  }
  case 22: { // Predicate_immMskBitp
    ConstantSDNode*N = cast<ConstantSDNode>(Node);
 return immMskBitp(N); 
  }
  case 23: { // Predicate_immU10
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return (uint32_t)N->getZExtValue() < (1 << 10);

  }
  case 24: { // Predicate_immU20
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return (uint32_t)N->getZExtValue() < (1 << 20);

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
    return SelectADDRspii(N, Result[NextRes+0].first, Result[NextRes+1].first);
  case 1:
    Result.resize(NextRes+2);
    return SelectADDRdpii(N, Result[NextRes+0].first, Result[NextRes+1].first);
  case 2:
    Result.resize(NextRes+2);
    return SelectADDRcpii(N, Result[NextRes+0].first, Result[NextRes+1].first);
  }
}

virtual SDValue RunSDNodeXForm(SDValue V, unsigned XFormNo) {
  switch (XFormNo) {
  default: llvm_unreachable("Invalid xform # in table?");
  case 0: {  // div4_xform
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: imm/4
  assert(N->getZExtValue() % 4 == 0);
  return getI32Imm(N->getZExtValue()/4);

  }
  case 1: {  // neg_xform
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: -imm
  uint32_t value = N->getZExtValue();
  return getI32Imm(-value);

  }
  case 2: {  // div4neg_xform
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: -imm/4
  uint32_t value = N->getZExtValue();
  assert(-value % 4 == 0);
  return getI32Imm(-value/4);

  }
  case 3: {  // bpwsub_xform
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: 32-imm
  uint32_t value = N->getZExtValue();
  return getI32Imm(32-value);

  }
  case 4: {  // msksize_xform
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: get the size of a mask
  assert(isMask_32(N->getZExtValue()));
  // look for the first non-zero bit
  return getI32Imm(32 - CountLeadingZeros_32(N->getZExtValue()));

  }
  }
}

