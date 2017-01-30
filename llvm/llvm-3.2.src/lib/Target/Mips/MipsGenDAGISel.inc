/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* DAG Instruction Selector for the Mips target                               *|
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
/*0*/     OPC_SwitchOpcode /*120 cases */, 59|128,5/*699*/,  TARGET_VAL(ISD::STORE),// ->704
/*5*/       OPC_RecordMemRef,
/*6*/       OPC_RecordNode,   // #0 = 'st' chained node
/*7*/       OPC_Scope, 52, /*->61*/ // 2 children in Scope
/*9*/         OPC_MoveChild, 1,
/*11*/        OPC_CheckInteger, 0, 
/*13*/        OPC_CheckType, MVT::i32,
/*15*/        OPC_MoveParent,
/*16*/        OPC_RecordChild2, // #1 = $dst
/*17*/        OPC_CheckPredicate, 0, // Predicate_unindexedstore
/*19*/        OPC_CheckPredicate, 1, // Predicate_store
/*21*/        OPC_Scope, 18, /*->41*/ // 2 children in Scope
/*23*/          OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*25*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$dst #2 #3
/*28*/          OPC_EmitMergeInputChains1_0,
/*29*/          OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*32*/          OPC_MorphNodeTo, TARGET_VAL(Mips::SW), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 3/*#Ops*/, 4, 2, 3, 
                // Src: (st 0:i32, addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 18
                // Dst: (SW ZERO:i32, addr:i32:$dst)
/*41*/        /*Scope*/ 18, /*->60*/
/*42*/          OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*44*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$dst #2 #3
/*47*/          OPC_EmitMergeInputChains1_0,
/*48*/          OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*51*/          OPC_MorphNodeTo, TARGET_VAL(Mips::SW_P8), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 3/*#Ops*/, 4, 2, 3, 
                // Src: (st 0:i32, addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 18
                // Dst: (SW_P8 ZERO:i32, addr:i64:$dst)
/*60*/        0, /*End of Scope*/
/*61*/      /*Scope*/ 0|128,5/*640*/, /*->703*/
/*63*/        OPC_RecordChild1, // #1 = $r
/*64*/        OPC_Scope, 57|128,1/*185*/, /*->252*/ // 6 children in Scope
/*67*/          OPC_CheckChild1Type, MVT::i32,
/*69*/          OPC_RecordChild2, // #2 = $addr
/*70*/          OPC_CheckPredicate, 0, // Predicate_unindexedstore
/*72*/          OPC_Scope, 42, /*->116*/ // 4 children in Scope
/*74*/            OPC_CheckPredicate, 2, // Predicate_truncstore
/*76*/            OPC_Scope, 18, /*->96*/ // 2 children in Scope
/*78*/              OPC_CheckPredicate, 3, // Predicate_truncstorei8
/*80*/              OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*82*/              OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddr16:$addr #3 #4 #5
/*85*/              OPC_EmitMergeInputChains1_0,
/*86*/              OPC_MorphNodeTo, TARGET_VAL(Mips::SbRxRyOffMemX16), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 4/*#Ops*/, 1, 3, 4, 5, 
                    // Src: (st CPU16Regs:i32:$r, addr16:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 16
                    // Dst: (SbRxRyOffMemX16 CPU16Regs:i32:$r, addr16:i32:$addr)
/*96*/            /*Scope*/ 18, /*->115*/
/*97*/              OPC_CheckPredicate, 4, // Predicate_truncstorei16
/*99*/              OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*101*/             OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddr16:$addr #3 #4 #5
/*104*/             OPC_EmitMergeInputChains1_0,
/*105*/             OPC_MorphNodeTo, TARGET_VAL(Mips::ShRxRyOffMemX16), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 4/*#Ops*/, 1, 3, 4, 5, 
                    // Src: (st CPU16Regs:i32:$r, addr16:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 16
                    // Dst: (ShRxRyOffMemX16 CPU16Regs:i32:$r, addr16:i32:$addr)
/*115*/           0, /*End of Scope*/
/*116*/         /*Scope*/ 18, /*->135*/
/*117*/           OPC_CheckPredicate, 1, // Predicate_store
/*119*/           OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*121*/           OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddr16:$addr #3 #4 #5
/*124*/           OPC_EmitMergeInputChains1_0,
/*125*/           OPC_MorphNodeTo, TARGET_VAL(Mips::SwRxRyOffMemX16), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 4/*#Ops*/, 1, 3, 4, 5, 
                  // Src: (st CPU16Regs:i32:$r, addr16:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 16
                  // Dst: (SwRxRyOffMemX16 CPU16Regs:i32:$r, addr16:i32:$addr)
/*135*/         /*Scope*/ 78, /*->214*/
/*136*/           OPC_CheckPredicate, 2, // Predicate_truncstore
/*138*/           OPC_Scope, 36, /*->176*/ // 2 children in Scope
/*140*/             OPC_CheckPredicate, 3, // Predicate_truncstorei8
/*142*/             OPC_Scope, 15, /*->159*/ // 2 children in Scope
/*144*/               OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*146*/               OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$addr #3 #4
/*149*/               OPC_EmitMergeInputChains1_0,
/*150*/               OPC_MorphNodeTo, TARGET_VAL(Mips::SB), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                      // Src: (st CPURegs:i32:$rt, addr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 13
                      // Dst: (SB CPURegs:i32:$rt, addr:i32:$addr)
/*159*/             /*Scope*/ 15, /*->175*/
/*160*/               OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*162*/               OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$addr #3 #4
/*165*/               OPC_EmitMergeInputChains1_0,
/*166*/               OPC_MorphNodeTo, TARGET_VAL(Mips::SB_P8), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                      // Src: (st CPURegs:i32:$rt, addr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 13
                      // Dst: (SB_P8 CPURegs:i32:$rt, addr:i64:$addr)
/*175*/             0, /*End of Scope*/
/*176*/           /*Scope*/ 36, /*->213*/
/*177*/             OPC_CheckPredicate, 4, // Predicate_truncstorei16
/*179*/             OPC_Scope, 15, /*->196*/ // 2 children in Scope
/*181*/               OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*183*/               OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$addr #3 #4
/*186*/               OPC_EmitMergeInputChains1_0,
/*187*/               OPC_MorphNodeTo, TARGET_VAL(Mips::SH), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                      // Src: (st CPURegs:i32:$rt, addr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 13
                      // Dst: (SH CPURegs:i32:$rt, addr:i32:$addr)
/*196*/             /*Scope*/ 15, /*->212*/
/*197*/               OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*199*/               OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$addr #3 #4
/*202*/               OPC_EmitMergeInputChains1_0,
/*203*/               OPC_MorphNodeTo, TARGET_VAL(Mips::SH_P8), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                      // Src: (st CPURegs:i32:$rt, addr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 13
                      // Dst: (SH_P8 CPURegs:i32:$rt, addr:i64:$addr)
/*212*/             0, /*End of Scope*/
/*213*/           0, /*End of Scope*/
/*214*/         /*Scope*/ 36, /*->251*/
/*215*/           OPC_CheckPredicate, 1, // Predicate_store
/*217*/           OPC_Scope, 15, /*->234*/ // 2 children in Scope
/*219*/             OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*221*/             OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$addr #3 #4
/*224*/             OPC_EmitMergeInputChains1_0,
/*225*/             OPC_MorphNodeTo, TARGET_VAL(Mips::SW), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st CPURegs:i32:$rt, addr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                    // Dst: (SW CPURegs:i32:$rt, addr:i32:$addr)
/*234*/           /*Scope*/ 15, /*->250*/
/*235*/             OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*237*/             OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$addr #3 #4
/*240*/             OPC_EmitMergeInputChains1_0,
/*241*/             OPC_MorphNodeTo, TARGET_VAL(Mips::SW_P8), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st CPURegs:i32:$rt, addr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                    // Dst: (SW_P8 CPURegs:i32:$rt, addr:i64:$addr)
/*250*/           0, /*End of Scope*/
/*251*/         0, /*End of Scope*/
/*252*/       /*Scope*/ 92, /*->345*/
/*253*/         OPC_CheckChild1Type, MVT::f32,
/*255*/         OPC_Scope, 39, /*->296*/ // 2 children in Scope
/*257*/           OPC_RecordChild2, // #2 = $addr
/*258*/           OPC_CheckPredicate, 0, // Predicate_unindexedstore
/*260*/           OPC_CheckPredicate, 1, // Predicate_store
/*262*/           OPC_Scope, 15, /*->279*/ // 2 children in Scope
/*264*/             OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*266*/             OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$addr #3 #4
/*269*/             OPC_EmitMergeInputChains1_0,
/*270*/             OPC_MorphNodeTo, TARGET_VAL(Mips::SWC1_P8), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st FGR32:f32:$ft, addr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                    // Dst: (SWC1_P8 FGR32:f32:$ft, addr:i64:$addr)
/*279*/           /*Scope*/ 15, /*->295*/
/*280*/             OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*282*/             OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$addr #3 #4
/*285*/             OPC_EmitMergeInputChains1_0,
/*286*/             OPC_MorphNodeTo, TARGET_VAL(Mips::SWC1), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st FGR32:f32:$ft, addr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                    // Dst: (SWC1 FGR32:f32:$ft, addr:i32:$addr)
/*295*/           0, /*End of Scope*/
/*296*/         /*Scope*/ 47, /*->344*/
/*297*/           OPC_MoveChild, 2,
/*299*/           OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*302*/           OPC_RecordChild0, // #2 = $base
/*303*/           OPC_RecordChild1, // #3 = $index
/*304*/           OPC_SwitchType /*2 cases */, 17,  MVT::i32,// ->324
/*307*/             OPC_MoveParent,
/*308*/             OPC_CheckPredicate, 0, // Predicate_unindexedstore
/*310*/             OPC_CheckPredicate, 1, // Predicate_store
/*312*/             OPC_CheckPatternPredicate, 3, // (Subtarget.hasMips32r2Or64()) && (Subtarget.hasStandardEncoding())
/*314*/             OPC_EmitMergeInputChains1_0,
/*315*/             OPC_MorphNodeTo, TARGET_VAL(Mips::SWXC1), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 2, 3, 
                    // Src: (st FGR32:f32:$fs, (add:i32 CPURegs:i32:$base, CPURegs:i32:$index))<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 7
                    // Dst: (SWXC1 FGR32:f32:$fs, CPURegs:i32:$base, CPURegs:i32:$index)
                  /*SwitchType*/ 17,  MVT::i64,// ->343
/*326*/             OPC_MoveParent,
/*327*/             OPC_CheckPredicate, 0, // Predicate_unindexedstore
/*329*/             OPC_CheckPredicate, 1, // Predicate_store
/*331*/             OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*333*/             OPC_EmitMergeInputChains1_0,
/*334*/             OPC_MorphNodeTo, TARGET_VAL(Mips::SWXC1_P8), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 2, 3, 
                    // Src: (st FGR32:f32:$fs, (add:i64 CPU64Regs:i64:$base, CPU64Regs:i64:$index))<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 7
                    // Dst: (SWXC1_P8 FGR32:f32:$fs, CPU64Regs:i64:$base, CPU64Regs:i64:$index)
                  0, // EndSwitchType
/*344*/         0, /*End of Scope*/
/*345*/       /*Scope*/ 124, /*->470*/
/*346*/         OPC_CheckChild1Type, MVT::f64,
/*348*/         OPC_Scope, 55, /*->405*/ // 2 children in Scope
/*350*/           OPC_RecordChild2, // #2 = $addr
/*351*/           OPC_CheckPredicate, 0, // Predicate_unindexedstore
/*353*/           OPC_CheckPredicate, 1, // Predicate_store
/*355*/           OPC_Scope, 15, /*->372*/ // 3 children in Scope
/*357*/             OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*359*/             OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$addr #3 #4
/*362*/             OPC_EmitMergeInputChains1_0,
/*363*/             OPC_MorphNodeTo, TARGET_VAL(Mips::SDC164_P8), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st FGR64:f64:$ft, addr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                    // Dst: (SDC164_P8 FGR64:f64:$ft, addr:i64:$addr)
/*372*/           /*Scope*/ 15, /*->388*/
/*373*/             OPC_CheckPatternPredicate, 4, // (!Subtarget.isABI_N64()) && (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*375*/             OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$addr #3 #4
/*378*/             OPC_EmitMergeInputChains1_0,
/*379*/             OPC_MorphNodeTo, TARGET_VAL(Mips::SDC164), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st FGR64:f64:$ft, addr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                    // Dst: (SDC164 FGR64:f64:$ft, addr:i32:$addr)
/*388*/           /*Scope*/ 15, /*->404*/
/*389*/             OPC_CheckPatternPredicate, 5, // (!Subtarget.isABI_N64()) && (!Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*391*/             OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$addr #3 #4
/*394*/             OPC_EmitMergeInputChains1_0,
/*395*/             OPC_MorphNodeTo, TARGET_VAL(Mips::SDC1), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st AFGR64:f64:$ft, addr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                    // Dst: (SDC1 AFGR64:f64:$ft, addr:i32:$addr)
/*404*/           0, /*End of Scope*/
/*405*/         /*Scope*/ 63, /*->469*/
/*406*/           OPC_MoveChild, 2,
/*408*/           OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*411*/           OPC_RecordChild0, // #2 = $base
/*412*/           OPC_RecordChild1, // #3 = $index
/*413*/           OPC_SwitchType /*2 cases */, 33,  MVT::i32,// ->449
/*416*/             OPC_MoveParent,
/*417*/             OPC_CheckPredicate, 0, // Predicate_unindexedstore
/*419*/             OPC_CheckPredicate, 1, // Predicate_store
/*421*/             OPC_Scope, 12, /*->435*/ // 2 children in Scope
/*423*/               OPC_CheckPatternPredicate, 6, // (Subtarget.hasMips32r2()) && (!Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*425*/               OPC_EmitMergeInputChains1_0,
/*426*/               OPC_MorphNodeTo, TARGET_VAL(Mips::SDXC1), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 3/*#Ops*/, 1, 2, 3, 
                      // Src: (st AFGR64:f64:$fs, (add:i32 CPURegs:i32:$base, CPURegs:i32:$index))<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 7
                      // Dst: (SDXC1 AFGR64:f64:$fs, CPURegs:i32:$base, CPURegs:i32:$index)
/*435*/             /*Scope*/ 12, /*->448*/
/*436*/               OPC_CheckPatternPredicate, 7, // (Subtarget.hasMips64()) && (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*438*/               OPC_EmitMergeInputChains1_0,
/*439*/               OPC_MorphNodeTo, TARGET_VAL(Mips::SDXC164), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 3/*#Ops*/, 1, 2, 3, 
                      // Src: (st FGR64:f64:$fs, (add:i32 CPURegs:i32:$base, CPURegs:i32:$index))<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 7
                      // Dst: (SDXC164 FGR64:f64:$fs, CPURegs:i32:$base, CPURegs:i32:$index)
/*448*/             0, /*End of Scope*/
                  /*SwitchType*/ 17,  MVT::i64,// ->468
/*451*/             OPC_MoveParent,
/*452*/             OPC_CheckPredicate, 0, // Predicate_unindexedstore
/*454*/             OPC_CheckPredicate, 1, // Predicate_store
/*456*/             OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*458*/             OPC_EmitMergeInputChains1_0,
/*459*/             OPC_MorphNodeTo, TARGET_VAL(Mips::SDXC164_P8), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 2, 3, 
                    // Src: (st FGR64:f64:$fs, (add:i64 CPU64Regs:i64:$base, CPU64Regs:i64:$index))<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 7
                    // Dst: (SDXC164_P8 FGR64:f64:$fs, CPU64Regs:i64:$base, CPU64Regs:i64:$index)
                  0, // EndSwitchType
/*469*/         0, /*End of Scope*/
/*470*/       /*Scope*/ 32|128,1/*160*/, /*->632*/
/*472*/         OPC_CheckChild1Type, MVT::i64,
/*474*/         OPC_RecordChild2, // #2 = $addr
/*475*/         OPC_CheckPredicate, 0, // Predicate_unindexedstore
/*477*/         OPC_Scope, 115, /*->594*/ // 2 children in Scope
/*479*/           OPC_CheckPredicate, 2, // Predicate_truncstore
/*481*/           OPC_Scope, 36, /*->519*/ // 3 children in Scope
/*483*/             OPC_CheckPredicate, 3, // Predicate_truncstorei8
/*485*/             OPC_Scope, 15, /*->502*/ // 2 children in Scope
/*487*/               OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*489*/               OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$addr #3 #4
/*492*/               OPC_EmitMergeInputChains1_0,
/*493*/               OPC_MorphNodeTo, TARGET_VAL(Mips::SB64), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                      // Src: (st CPU64Regs:i64:$rt, addr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 13
                      // Dst: (SB64 CPU64Regs:i64:$rt, addr:i32:$addr)
/*502*/             /*Scope*/ 15, /*->518*/
/*503*/               OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*505*/               OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$addr #3 #4
/*508*/               OPC_EmitMergeInputChains1_0,
/*509*/               OPC_MorphNodeTo, TARGET_VAL(Mips::SB64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                      // Src: (st CPU64Regs:i64:$rt, addr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 13
                      // Dst: (SB64_P8 CPU64Regs:i64:$rt, addr:i64:$addr)
/*518*/             0, /*End of Scope*/
/*519*/           /*Scope*/ 36, /*->556*/
/*520*/             OPC_CheckPredicate, 4, // Predicate_truncstorei16
/*522*/             OPC_Scope, 15, /*->539*/ // 2 children in Scope
/*524*/               OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*526*/               OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$addr #3 #4
/*529*/               OPC_EmitMergeInputChains1_0,
/*530*/               OPC_MorphNodeTo, TARGET_VAL(Mips::SH64), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                      // Src: (st CPU64Regs:i64:$rt, addr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 13
                      // Dst: (SH64 CPU64Regs:i64:$rt, addr:i32:$addr)
/*539*/             /*Scope*/ 15, /*->555*/
/*540*/               OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*542*/               OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$addr #3 #4
/*545*/               OPC_EmitMergeInputChains1_0,
/*546*/               OPC_MorphNodeTo, TARGET_VAL(Mips::SH64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                      // Src: (st CPU64Regs:i64:$rt, addr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 13
                      // Dst: (SH64_P8 CPU64Regs:i64:$rt, addr:i64:$addr)
/*555*/             0, /*End of Scope*/
/*556*/           /*Scope*/ 36, /*->593*/
/*557*/             OPC_CheckPredicate, 5, // Predicate_truncstorei32
/*559*/             OPC_Scope, 15, /*->576*/ // 2 children in Scope
/*561*/               OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*563*/               OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$addr #3 #4
/*566*/               OPC_EmitMergeInputChains1_0,
/*567*/               OPC_MorphNodeTo, TARGET_VAL(Mips::SW64), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                      // Src: (st CPU64Regs:i64:$rt, addr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei32>> - Complexity = 13
                      // Dst: (SW64 CPU64Regs:i64:$rt, addr:i32:$addr)
/*576*/             /*Scope*/ 15, /*->592*/
/*577*/               OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*579*/               OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$addr #3 #4
/*582*/               OPC_EmitMergeInputChains1_0,
/*583*/               OPC_MorphNodeTo, TARGET_VAL(Mips::SW64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                      // Src: (st CPU64Regs:i64:$rt, addr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei32>> - Complexity = 13
                      // Dst: (SW64_P8 CPU64Regs:i64:$rt, addr:i64:$addr)
/*592*/             0, /*End of Scope*/
/*593*/           0, /*End of Scope*/
/*594*/         /*Scope*/ 36, /*->631*/
/*595*/           OPC_CheckPredicate, 1, // Predicate_store
/*597*/           OPC_Scope, 15, /*->614*/ // 2 children in Scope
/*599*/             OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*601*/             OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$addr #3 #4
/*604*/             OPC_EmitMergeInputChains1_0,
/*605*/             OPC_MorphNodeTo, TARGET_VAL(Mips::SD), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st CPU64Regs:i64:$rt, addr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                    // Dst: (SD CPU64Regs:i64:$rt, addr:i32:$addr)
/*614*/           /*Scope*/ 15, /*->630*/
/*615*/             OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*617*/             OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$addr #3 #4
/*620*/             OPC_EmitMergeInputChains1_0,
/*621*/             OPC_MorphNodeTo, TARGET_VAL(Mips::SD_P8), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st CPU64Regs:i64:$rt, addr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                    // Dst: (SD_P8 CPU64Regs:i64:$rt, addr:i64:$addr)
/*630*/           0, /*End of Scope*/
/*631*/         0, /*End of Scope*/
/*632*/       /*Scope*/ 34, /*->667*/
/*633*/         OPC_CheckChild1Type, MVT::v2i16,
/*635*/         OPC_RecordChild2, // #2 = $a
/*636*/         OPC_CheckPredicate, 0, // Predicate_unindexedstore
/*638*/         OPC_CheckPredicate, 1, // Predicate_store
/*640*/         OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*642*/         OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$a #3 #4
/*645*/         OPC_EmitMergeInputChains1_0,
/*646*/         OPC_EmitInteger, MVT::i32, Mips::CPURegsRegClassID,
/*649*/         OPC_EmitNode, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 5,  // Results = #6
/*658*/         OPC_MorphNodeTo, TARGET_VAL(Mips::SW), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 3/*#Ops*/, 6, 3, 4, 
                // Src: (st DSPRegs:v2i16:$val, addr:iPTR:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                // Dst: (SW (COPY_TO_REGCLASS:i32 DSPRegs:v2i16:$val, CPURegs:i32), addr:i32:$a)
/*667*/       /*Scope*/ 34, /*->702*/
/*668*/         OPC_CheckChild1Type, MVT::v4i8,
/*670*/         OPC_RecordChild2, // #2 = $a
/*671*/         OPC_CheckPredicate, 0, // Predicate_unindexedstore
/*673*/         OPC_CheckPredicate, 1, // Predicate_store
/*675*/         OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*677*/         OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$a #3 #4
/*680*/         OPC_EmitMergeInputChains1_0,
/*681*/         OPC_EmitInteger, MVT::i32, Mips::CPURegsRegClassID,
/*684*/         OPC_EmitNode, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 5,  // Results = #6
/*693*/         OPC_MorphNodeTo, TARGET_VAL(Mips::SW), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 3/*#Ops*/, 6, 3, 4, 
                // Src: (st DSPRegs:v4i8:$val, addr:iPTR:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                // Dst: (SW (COPY_TO_REGCLASS:i32 DSPRegs:v4i8:$val, CPURegs:i32), addr:i32:$a)
/*702*/       0, /*End of Scope*/
/*703*/     0, /*End of Scope*/
          /*SwitchOpcode*/ 31|128,9/*1183*/,  TARGET_VAL(ISD::LOAD),// ->1891
/*708*/     OPC_RecordMemRef,
/*709*/     OPC_RecordNode,   // #0 = 'ld' chained node
/*710*/     OPC_Scope, 115|128,7/*1011*/, /*->1724*/ // 3 children in Scope
/*713*/       OPC_RecordChild1, // #1 = $addr
/*714*/       OPC_CheckPredicate, 6, // Predicate_unindexedload
/*716*/       OPC_Scope, 22, /*->740*/ // 21 children in Scope
/*718*/         OPC_CheckPredicate, 7, // Predicate_sextload
/*720*/         OPC_CheckPredicate, 8, // Predicate_sextloadi8
/*722*/         OPC_CheckType, MVT::i32,
/*724*/         OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*726*/         OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddr16:$addr #2 #3 #4
/*729*/         OPC_EmitMergeInputChains1_0,
/*730*/         OPC_MorphNodeTo, TARGET_VAL(Mips::LbRxRyOffMemX16), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                // Src: (ld:i32 addr16:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>> - Complexity = 16
                // Dst: (LbRxRyOffMemX16:i32 addr16:i32:$addr)
/*740*/       /*Scope*/ 22, /*->763*/
/*741*/         OPC_CheckPredicate, 9, // Predicate_zextload
/*743*/         OPC_CheckPredicate, 10, // Predicate_zextloadi8
/*745*/         OPC_CheckType, MVT::i32,
/*747*/         OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*749*/         OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddr16:$addr #2 #3 #4
/*752*/         OPC_EmitMergeInputChains1_0,
/*753*/         OPC_MorphNodeTo, TARGET_VAL(Mips::LbuRxRyOffMemX16), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                // Src: (ld:i32 addr16:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 16
                // Dst: (LbuRxRyOffMemX16:i32 addr16:i32:$addr)
/*763*/       /*Scope*/ 22, /*->786*/
/*764*/         OPC_CheckPredicate, 7, // Predicate_sextload
/*766*/         OPC_CheckPredicate, 11, // Predicate_sextloadi16
/*768*/         OPC_CheckType, MVT::i32,
/*770*/         OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*772*/         OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddr16:$addr #2 #3 #4
/*775*/         OPC_EmitMergeInputChains1_0,
/*776*/         OPC_MorphNodeTo, TARGET_VAL(Mips::LhRxRyOffMemX16), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                // Src: (ld:i32 addr16:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 16
                // Dst: (LhRxRyOffMemX16:i32 addr16:i32:$addr)
/*786*/       /*Scope*/ 22, /*->809*/
/*787*/         OPC_CheckPredicate, 9, // Predicate_zextload
/*789*/         OPC_CheckPredicate, 12, // Predicate_zextloadi16
/*791*/         OPC_CheckType, MVT::i32,
/*793*/         OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*795*/         OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddr16:$addr #2 #3 #4
/*798*/         OPC_EmitMergeInputChains1_0,
/*799*/         OPC_MorphNodeTo, TARGET_VAL(Mips::LhuRxRyOffMemX16), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                // Src: (ld:i32 addr16:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 16
                // Dst: (LhuRxRyOffMemX16:i32 addr16:i32:$addr)
/*809*/       /*Scope*/ 20, /*->830*/
/*810*/         OPC_CheckPredicate, 13, // Predicate_load
/*812*/         OPC_CheckType, MVT::i32,
/*814*/         OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*816*/         OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddr16:$addr #2 #3 #4
/*819*/         OPC_EmitMergeInputChains1_0,
/*820*/         OPC_MorphNodeTo, TARGET_VAL(Mips::LwRxRyOffMemX16), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                // Src: (ld:i32 addr16:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 16
                // Dst: (LwRxRyOffMemX16:i32 addr16:i32:$addr)
/*830*/       /*Scope*/ 44, /*->875*/
/*831*/         OPC_CheckPredicate, 14, // Predicate_extload
/*833*/         OPC_CheckType, MVT::i32,
/*835*/         OPC_Scope, 18, /*->855*/ // 2 children in Scope
/*837*/           OPC_CheckPredicate, 15, // Predicate_extloadi8
/*839*/           OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*841*/           OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddr16:$src #2 #3 #4
/*844*/           OPC_EmitMergeInputChains1_0,
/*845*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LbuRxRyOffMemX16), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:i32 addr16:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 16
                  // Dst: (LbuRxRyOffMemX16:i32 addr16:i32:$src)
/*855*/         /*Scope*/ 18, /*->874*/
/*856*/           OPC_CheckPredicate, 16, // Predicate_extloadi16
/*858*/           OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*860*/           OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddr16:$src #2 #3 #4
/*863*/           OPC_EmitMergeInputChains1_0,
/*864*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LhuRxRyOffMemX16), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:i32 addr16:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 16
                  // Dst: (LhuRxRyOffMemX16:i32 addr16:i32:$src)
/*874*/         0, /*End of Scope*/
/*875*/       /*Scope*/ 40, /*->916*/
/*876*/         OPC_CheckPredicate, 7, // Predicate_sextload
/*878*/         OPC_CheckPredicate, 8, // Predicate_sextloadi8
/*880*/         OPC_CheckType, MVT::i32,
/*882*/         OPC_Scope, 15, /*->899*/ // 2 children in Scope
/*884*/           OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*886*/           OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #2 #3
/*889*/           OPC_EmitMergeInputChains1_0,
/*890*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LB), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>> - Complexity = 13
                  // Dst: (LB:i32 addr:i32:$addr)
/*899*/         /*Scope*/ 15, /*->915*/
/*900*/           OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*902*/           OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #2 #3
/*905*/           OPC_EmitMergeInputChains1_0,
/*906*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LB_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>> - Complexity = 13
                  // Dst: (LB_P8:i32 addr:i64:$addr)
/*915*/         0, /*End of Scope*/
/*916*/       /*Scope*/ 40, /*->957*/
/*917*/         OPC_CheckPredicate, 9, // Predicate_zextload
/*919*/         OPC_CheckPredicate, 10, // Predicate_zextloadi8
/*921*/         OPC_CheckType, MVT::i32,
/*923*/         OPC_Scope, 15, /*->940*/ // 2 children in Scope
/*925*/           OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*927*/           OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #2 #3
/*930*/           OPC_EmitMergeInputChains1_0,
/*931*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LBu), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 13
                  // Dst: (LBu:i32 addr:i32:$addr)
/*940*/         /*Scope*/ 15, /*->956*/
/*941*/           OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*943*/           OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #2 #3
/*946*/           OPC_EmitMergeInputChains1_0,
/*947*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LBu_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 13
                  // Dst: (LBu_P8:i32 addr:i64:$addr)
/*956*/         0, /*End of Scope*/
/*957*/       /*Scope*/ 40, /*->998*/
/*958*/         OPC_CheckPredicate, 7, // Predicate_sextload
/*960*/         OPC_CheckPredicate, 11, // Predicate_sextloadi16
/*962*/         OPC_CheckType, MVT::i32,
/*964*/         OPC_Scope, 15, /*->981*/ // 2 children in Scope
/*966*/           OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*968*/           OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #2 #3
/*971*/           OPC_EmitMergeInputChains1_0,
/*972*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LH), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 13
                  // Dst: (LH:i32 addr:i32:$addr)
/*981*/         /*Scope*/ 15, /*->997*/
/*982*/           OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*984*/           OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #2 #3
/*987*/           OPC_EmitMergeInputChains1_0,
/*988*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LH_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 13
                  // Dst: (LH_P8:i32 addr:i64:$addr)
/*997*/         0, /*End of Scope*/
/*998*/       /*Scope*/ 40, /*->1039*/
/*999*/         OPC_CheckPredicate, 9, // Predicate_zextload
/*1001*/        OPC_CheckPredicate, 12, // Predicate_zextloadi16
/*1003*/        OPC_CheckType, MVT::i32,
/*1005*/        OPC_Scope, 15, /*->1022*/ // 2 children in Scope
/*1007*/          OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1009*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #2 #3
/*1012*/          OPC_EmitMergeInputChains1_0,
/*1013*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LHu), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 13
                  // Dst: (LHu:i32 addr:i32:$addr)
/*1022*/        /*Scope*/ 15, /*->1038*/
/*1023*/          OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1025*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #2 #3
/*1028*/          OPC_EmitMergeInputChains1_0,
/*1029*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LHu_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 13
                  // Dst: (LHu_P8:i32 addr:i64:$addr)
/*1038*/        0, /*End of Scope*/
/*1039*/      /*Scope*/ 38, /*->1078*/
/*1040*/        OPC_CheckPredicate, 13, // Predicate_load
/*1042*/        OPC_CheckType, MVT::i32,
/*1044*/        OPC_Scope, 15, /*->1061*/ // 2 children in Scope
/*1046*/          OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1048*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #2 #3
/*1051*/          OPC_EmitMergeInputChains1_0,
/*1052*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LW), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                  // Dst: (LW:i32 addr:i32:$addr)
/*1061*/        /*Scope*/ 15, /*->1077*/
/*1062*/          OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1064*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #2 #3
/*1067*/          OPC_EmitMergeInputChains1_0,
/*1068*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LW_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                  // Dst: (LW_P8:i32 addr:i64:$addr)
/*1077*/        0, /*End of Scope*/
/*1078*/      /*Scope*/ 114, /*->1193*/
/*1079*/        OPC_CheckPredicate, 14, // Predicate_extload
/*1081*/        OPC_CheckType, MVT::i32,
/*1083*/        OPC_Scope, 17, /*->1102*/ // 6 children in Scope
/*1085*/          OPC_CheckPredicate, 17, // Predicate_extloadi1
/*1087*/          OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1089*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$src #2 #3
/*1092*/          OPC_EmitMergeInputChains1_0,
/*1093*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LBu), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi1>> - Complexity = 13
                  // Dst: (LBu:i32 addr:i32:$src)
/*1102*/        /*Scope*/ 17, /*->1120*/
/*1103*/          OPC_CheckPredicate, 15, // Predicate_extloadi8
/*1105*/          OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1107*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$src #2 #3
/*1110*/          OPC_EmitMergeInputChains1_0,
/*1111*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LBu), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 13
                  // Dst: (LBu:i32 addr:i32:$src)
/*1120*/        /*Scope*/ 17, /*->1138*/
/*1121*/          OPC_CheckPredicate, 16, // Predicate_extloadi16
/*1123*/          OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1125*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$src #2 #3
/*1128*/          OPC_EmitMergeInputChains1_0,
/*1129*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LHu), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 13
                  // Dst: (LHu:i32 addr:i32:$src)
/*1138*/        /*Scope*/ 17, /*->1156*/
/*1139*/          OPC_CheckPredicate, 17, // Predicate_extloadi1
/*1141*/          OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1143*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$src #2 #3
/*1146*/          OPC_EmitMergeInputChains1_0,
/*1147*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LBu_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi1>> - Complexity = 13
                  // Dst: (LBu_P8:i32 addr:i64:$src)
/*1156*/        /*Scope*/ 17, /*->1174*/
/*1157*/          OPC_CheckPredicate, 15, // Predicate_extloadi8
/*1159*/          OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1161*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$src #2 #3
/*1164*/          OPC_EmitMergeInputChains1_0,
/*1165*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LBu_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 13
                  // Dst: (LBu_P8:i32 addr:i64:$src)
/*1174*/        /*Scope*/ 17, /*->1192*/
/*1175*/          OPC_CheckPredicate, 16, // Predicate_extloadi16
/*1177*/          OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1179*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$src #2 #3
/*1182*/          OPC_EmitMergeInputChains1_0,
/*1183*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LHu_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 13
                  // Dst: (LHu_P8:i32 addr:i64:$src)
/*1192*/        0, /*End of Scope*/
/*1193*/      /*Scope*/ 40, /*->1234*/
/*1194*/        OPC_CheckPredicate, 7, // Predicate_sextload
/*1196*/        OPC_CheckPredicate, 8, // Predicate_sextloadi8
/*1198*/        OPC_CheckType, MVT::i64,
/*1200*/        OPC_Scope, 15, /*->1217*/ // 2 children in Scope
/*1202*/          OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1204*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #2 #3
/*1207*/          OPC_EmitMergeInputChains1_0,
/*1208*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LB64), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>> - Complexity = 13
                  // Dst: (LB64:i64 addr:i32:$addr)
/*1217*/        /*Scope*/ 15, /*->1233*/
/*1218*/          OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1220*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #2 #3
/*1223*/          OPC_EmitMergeInputChains1_0,
/*1224*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LB64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>> - Complexity = 13
                  // Dst: (LB64_P8:i64 addr:i64:$addr)
/*1233*/        0, /*End of Scope*/
/*1234*/      /*Scope*/ 40, /*->1275*/
/*1235*/        OPC_CheckPredicate, 9, // Predicate_zextload
/*1237*/        OPC_CheckPredicate, 10, // Predicate_zextloadi8
/*1239*/        OPC_CheckType, MVT::i64,
/*1241*/        OPC_Scope, 15, /*->1258*/ // 2 children in Scope
/*1243*/          OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1245*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #2 #3
/*1248*/          OPC_EmitMergeInputChains1_0,
/*1249*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LBu64), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 13
                  // Dst: (LBu64:i64 addr:i32:$addr)
/*1258*/        /*Scope*/ 15, /*->1274*/
/*1259*/          OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1261*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #2 #3
/*1264*/          OPC_EmitMergeInputChains1_0,
/*1265*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LBu64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 13
                  // Dst: (LBu64_P8:i64 addr:i64:$addr)
/*1274*/        0, /*End of Scope*/
/*1275*/      /*Scope*/ 40, /*->1316*/
/*1276*/        OPC_CheckPredicate, 7, // Predicate_sextload
/*1278*/        OPC_CheckPredicate, 11, // Predicate_sextloadi16
/*1280*/        OPC_CheckType, MVT::i64,
/*1282*/        OPC_Scope, 15, /*->1299*/ // 2 children in Scope
/*1284*/          OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1286*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #2 #3
/*1289*/          OPC_EmitMergeInputChains1_0,
/*1290*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LH64), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 13
                  // Dst: (LH64:i64 addr:i32:$addr)
/*1299*/        /*Scope*/ 15, /*->1315*/
/*1300*/          OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1302*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #2 #3
/*1305*/          OPC_EmitMergeInputChains1_0,
/*1306*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LH64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 13
                  // Dst: (LH64_P8:i64 addr:i64:$addr)
/*1315*/        0, /*End of Scope*/
/*1316*/      /*Scope*/ 40, /*->1357*/
/*1317*/        OPC_CheckPredicate, 9, // Predicate_zextload
/*1319*/        OPC_CheckPredicate, 12, // Predicate_zextloadi16
/*1321*/        OPC_CheckType, MVT::i64,
/*1323*/        OPC_Scope, 15, /*->1340*/ // 2 children in Scope
/*1325*/          OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1327*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #2 #3
/*1330*/          OPC_EmitMergeInputChains1_0,
/*1331*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LHu64), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 13
                  // Dst: (LHu64:i64 addr:i32:$addr)
/*1340*/        /*Scope*/ 15, /*->1356*/
/*1341*/          OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1343*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #2 #3
/*1346*/          OPC_EmitMergeInputChains1_0,
/*1347*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LHu64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 13
                  // Dst: (LHu64_P8:i64 addr:i64:$addr)
/*1356*/        0, /*End of Scope*/
/*1357*/      /*Scope*/ 40, /*->1398*/
/*1358*/        OPC_CheckPredicate, 7, // Predicate_sextload
/*1360*/        OPC_CheckPredicate, 18, // Predicate_sextloadi32
/*1362*/        OPC_CheckType, MVT::i64,
/*1364*/        OPC_Scope, 15, /*->1381*/ // 2 children in Scope
/*1366*/          OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1368*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #2 #3
/*1371*/          OPC_EmitMergeInputChains1_0,
/*1372*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LW64), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi32>> - Complexity = 13
                  // Dst: (LW64:i64 addr:i32:$addr)
/*1381*/        /*Scope*/ 15, /*->1397*/
/*1382*/          OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1384*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #2 #3
/*1387*/          OPC_EmitMergeInputChains1_0,
/*1388*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LW64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi32>> - Complexity = 13
                  // Dst: (LW64_P8:i64 addr:i64:$addr)
/*1397*/        0, /*End of Scope*/
/*1398*/      /*Scope*/ 40, /*->1439*/
/*1399*/        OPC_CheckPredicate, 9, // Predicate_zextload
/*1401*/        OPC_CheckPredicate, 19, // Predicate_zextloadi32
/*1403*/        OPC_CheckType, MVT::i64,
/*1405*/        OPC_Scope, 15, /*->1422*/ // 2 children in Scope
/*1407*/          OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1409*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #2 #3
/*1412*/          OPC_EmitMergeInputChains1_0,
/*1413*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LWu64), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi32>> - Complexity = 13
                  // Dst: (LWu64:i64 addr:i32:$addr)
/*1422*/        /*Scope*/ 15, /*->1438*/
/*1423*/          OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1425*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #2 #3
/*1428*/          OPC_EmitMergeInputChains1_0,
/*1429*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LWu64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi32>> - Complexity = 13
                  // Dst: (LWu64_P8:i64 addr:i64:$addr)
/*1438*/        0, /*End of Scope*/
/*1439*/      /*Scope*/ 38, /*->1478*/
/*1440*/        OPC_CheckPredicate, 13, // Predicate_load
/*1442*/        OPC_CheckType, MVT::i64,
/*1444*/        OPC_Scope, 15, /*->1461*/ // 2 children in Scope
/*1446*/          OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1448*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #2 #3
/*1451*/          OPC_EmitMergeInputChains1_0,
/*1452*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LD), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                  // Dst: (LD:i64 addr:i32:$addr)
/*1461*/        /*Scope*/ 15, /*->1477*/
/*1462*/          OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1464*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #2 #3
/*1467*/          OPC_EmitMergeInputChains1_0,
/*1468*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LD_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                  // Dst: (LD_P8:i64 addr:i64:$addr)
/*1477*/        0, /*End of Scope*/
/*1478*/      /*Scope*/ 22|128,1/*150*/, /*->1630*/
/*1480*/        OPC_CheckPredicate, 14, // Predicate_extload
/*1482*/        OPC_CheckType, MVT::i64,
/*1484*/        OPC_Scope, 17, /*->1503*/ // 8 children in Scope
/*1486*/          OPC_CheckPredicate, 17, // Predicate_extloadi1
/*1488*/          OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1490*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$src #2 #3
/*1493*/          OPC_EmitMergeInputChains1_0,
/*1494*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LB64), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi1>> - Complexity = 13
                  // Dst: (LB64:i64 addr:i32:$src)
/*1503*/        /*Scope*/ 17, /*->1521*/
/*1504*/          OPC_CheckPredicate, 15, // Predicate_extloadi8
/*1506*/          OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1508*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$src #2 #3
/*1511*/          OPC_EmitMergeInputChains1_0,
/*1512*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LB64), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 13
                  // Dst: (LB64:i64 addr:i32:$src)
/*1521*/        /*Scope*/ 17, /*->1539*/
/*1522*/          OPC_CheckPredicate, 16, // Predicate_extloadi16
/*1524*/          OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1526*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$src #2 #3
/*1529*/          OPC_EmitMergeInputChains1_0,
/*1530*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LH64), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 13
                  // Dst: (LH64:i64 addr:i32:$src)
/*1539*/        /*Scope*/ 17, /*->1557*/
/*1540*/          OPC_CheckPredicate, 20, // Predicate_extloadi32
/*1542*/          OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1544*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$src #2 #3
/*1547*/          OPC_EmitMergeInputChains1_0,
/*1548*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LW64), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi32>> - Complexity = 13
                  // Dst: (LW64:i64 addr:i32:$src)
/*1557*/        /*Scope*/ 17, /*->1575*/
/*1558*/          OPC_CheckPredicate, 17, // Predicate_extloadi1
/*1560*/          OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1562*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$src #2 #3
/*1565*/          OPC_EmitMergeInputChains1_0,
/*1566*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LB64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi1>> - Complexity = 13
                  // Dst: (LB64_P8:i64 addr:i64:$src)
/*1575*/        /*Scope*/ 17, /*->1593*/
/*1576*/          OPC_CheckPredicate, 15, // Predicate_extloadi8
/*1578*/          OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1580*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$src #2 #3
/*1583*/          OPC_EmitMergeInputChains1_0,
/*1584*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LB64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 13
                  // Dst: (LB64_P8:i64 addr:i64:$src)
/*1593*/        /*Scope*/ 17, /*->1611*/
/*1594*/          OPC_CheckPredicate, 16, // Predicate_extloadi16
/*1596*/          OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1598*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$src #2 #3
/*1601*/          OPC_EmitMergeInputChains1_0,
/*1602*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LH64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 13
                  // Dst: (LH64_P8:i64 addr:i64:$src)
/*1611*/        /*Scope*/ 17, /*->1629*/
/*1612*/          OPC_CheckPredicate, 20, // Predicate_extloadi32
/*1614*/          OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1616*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$src #2 #3
/*1619*/          OPC_EmitMergeInputChains1_0,
/*1620*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LW64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi32>> - Complexity = 13
                  // Dst: (LW64_P8:i64 addr:i64:$src)
/*1629*/        0, /*End of Scope*/
/*1630*/      /*Scope*/ 92, /*->1723*/
/*1631*/        OPC_CheckPredicate, 13, // Predicate_load
/*1633*/        OPC_SwitchType /*2 cases */, 34,  MVT::f32,// ->1670
/*1636*/          OPC_Scope, 15, /*->1653*/ // 2 children in Scope
/*1638*/            OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1640*/            OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #2 #3
/*1643*/            OPC_EmitMergeInputChains1_0,
/*1644*/            OPC_MorphNodeTo, TARGET_VAL(Mips::LWC1_P8), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f32, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:f32 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                    // Dst: (LWC1_P8:f32 addr:i64:$addr)
/*1653*/          /*Scope*/ 15, /*->1669*/
/*1654*/            OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1656*/            OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #2 #3
/*1659*/            OPC_EmitMergeInputChains1_0,
/*1660*/            OPC_MorphNodeTo, TARGET_VAL(Mips::LWC1), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f32, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:f32 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                    // Dst: (LWC1:f32 addr:i32:$addr)
/*1669*/          0, /*End of Scope*/
                /*SwitchType*/ 50,  MVT::f64,// ->1722
/*1672*/          OPC_Scope, 15, /*->1689*/ // 3 children in Scope
/*1674*/            OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1676*/            OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #2 #3
/*1679*/            OPC_EmitMergeInputChains1_0,
/*1680*/            OPC_MorphNodeTo, TARGET_VAL(Mips::LDC164_P8), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f64, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:f64 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                    // Dst: (LDC164_P8:f64 addr:i64:$addr)
/*1689*/          /*Scope*/ 15, /*->1705*/
/*1690*/            OPC_CheckPatternPredicate, 4, // (!Subtarget.isABI_N64()) && (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*1692*/            OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #2 #3
/*1695*/            OPC_EmitMergeInputChains1_0,
/*1696*/            OPC_MorphNodeTo, TARGET_VAL(Mips::LDC164), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f64, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:f64 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                    // Dst: (LDC164:f64 addr:i32:$addr)
/*1705*/          /*Scope*/ 15, /*->1721*/
/*1706*/            OPC_CheckPatternPredicate, 5, // (!Subtarget.isABI_N64()) && (!Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*1708*/            OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #2 #3
/*1711*/            OPC_EmitMergeInputChains1_0,
/*1712*/            OPC_MorphNodeTo, TARGET_VAL(Mips::LDC1), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f64, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:f64 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                    // Dst: (LDC1:f64 addr:i32:$addr)
/*1721*/          0, /*End of Scope*/
                0, // EndSwitchType
/*1723*/      0, /*End of Scope*/
/*1724*/    /*Scope*/ 99, /*->1824*/
/*1725*/      OPC_MoveChild, 1,
/*1727*/      OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*1730*/      OPC_RecordChild0, // #1 = $base
/*1731*/      OPC_RecordChild1, // #2 = $index
/*1732*/      OPC_SwitchType /*2 cases */, 51,  MVT::i32,// ->1786
/*1735*/        OPC_MoveParent,
/*1736*/        OPC_CheckPredicate, 6, // Predicate_unindexedload
/*1738*/        OPC_CheckPredicate, 13, // Predicate_load
/*1740*/        OPC_SwitchType /*2 cases */, 12,  MVT::f32,// ->1755
/*1743*/          OPC_CheckPatternPredicate, 3, // (Subtarget.hasMips32r2Or64()) && (Subtarget.hasStandardEncoding())
/*1745*/          OPC_EmitMergeInputChains1_0,
/*1746*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LWXC1), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 1, 2, 
                  // Src: (ld:f32 (add:i32 CPURegs:i32:$base, CPURegs:i32:$index))<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 7
                  // Dst: (LWXC1:f32 CPURegs:i32:$base, CPURegs:i32:$index)
                /*SwitchType*/ 28,  MVT::f64,// ->1785
/*1757*/          OPC_Scope, 12, /*->1771*/ // 2 children in Scope
/*1759*/            OPC_CheckPatternPredicate, 6, // (Subtarget.hasMips32r2()) && (!Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*1761*/            OPC_EmitMergeInputChains1_0,
/*1762*/            OPC_MorphNodeTo, TARGET_VAL(Mips::LDXC1), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f64, 2/*#Ops*/, 1, 2, 
                    // Src: (ld:f64 (add:i32 CPURegs:i32:$base, CPURegs:i32:$index))<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 7
                    // Dst: (LDXC1:f64 CPURegs:i32:$base, CPURegs:i32:$index)
/*1771*/          /*Scope*/ 12, /*->1784*/
/*1772*/            OPC_CheckPatternPredicate, 7, // (Subtarget.hasMips64()) && (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1774*/            OPC_EmitMergeInputChains1_0,
/*1775*/            OPC_MorphNodeTo, TARGET_VAL(Mips::LDXC164), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f64, 2/*#Ops*/, 1, 2, 
                    // Src: (ld:f64 (add:i32 CPURegs:i32:$base, CPURegs:i32:$index))<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 7
                    // Dst: (LDXC164:f64 CPURegs:i32:$base, CPURegs:i32:$index)
/*1784*/          0, /*End of Scope*/
                0, // EndSwitchType
              /*SwitchType*/ 35,  MVT::i64,// ->1823
/*1788*/        OPC_MoveParent,
/*1789*/        OPC_CheckPredicate, 6, // Predicate_unindexedload
/*1791*/        OPC_CheckPredicate, 13, // Predicate_load
/*1793*/        OPC_SwitchType /*2 cases */, 12,  MVT::f32,// ->1808
/*1796*/          OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1798*/          OPC_EmitMergeInputChains1_0,
/*1799*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LWXC1_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 1, 2, 
                  // Src: (ld:f32 (add:i64 CPU64Regs:i64:$base, CPU64Regs:i64:$index))<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 7
                  // Dst: (LWXC1_P8:f32 CPU64Regs:i64:$base, CPU64Regs:i64:$index)
                /*SwitchType*/ 12,  MVT::f64,// ->1822
/*1810*/          OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1812*/          OPC_EmitMergeInputChains1_0,
/*1813*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LDXC164_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f64, 2/*#Ops*/, 1, 2, 
                  // Src: (ld:f64 (add:i64 CPU64Regs:i64:$base, CPU64Regs:i64:$index))<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 7
                  // Dst: (LDXC164_P8:f64 CPU64Regs:i64:$base, CPU64Regs:i64:$index)
                0, // EndSwitchType
              0, // EndSwitchType
/*1824*/    /*Scope*/ 65, /*->1890*/
/*1825*/      OPC_RecordChild1, // #1 = $a
/*1826*/      OPC_CheckPredicate, 6, // Predicate_unindexedload
/*1828*/      OPC_CheckPredicate, 13, // Predicate_load
/*1830*/      OPC_SwitchType /*2 cases */, 27,  MVT::v2i16,// ->1860
/*1833*/        OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*1835*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$a #2 #3
/*1838*/        OPC_EmitMergeInputChains1_0,
/*1839*/        OPC_EmitNode, TARGET_VAL(Mips::LW), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3,  // Results = #4
/*1848*/        OPC_EmitInteger, MVT::i32, Mips::DSPRegsRegClassID,
/*1851*/        OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 4, 5, 
                // Src: (ld:v2i16 addr:iPTR:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                // Dst: (COPY_TO_REGCLASS:v2i16 (LW:i32 addr:i32:$a), DSPRegs:v4i8)
              /*SwitchType*/ 27,  MVT::v4i8,// ->1889
/*1862*/        OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*1864*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$a #2 #3
/*1867*/        OPC_EmitMergeInputChains1_0,
/*1868*/        OPC_EmitNode, TARGET_VAL(Mips::LW), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3,  // Results = #4
/*1877*/        OPC_EmitInteger, MVT::i32, Mips::DSPRegsRegClassID,
/*1880*/        OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 4, 5, 
                // Src: (ld:v4i8 addr:iPTR:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                // Dst: (COPY_TO_REGCLASS:v4i8 (LW:i32 addr:i32:$a), DSPRegs:v4i8)
              0, // EndSwitchType
/*1890*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 82,  TARGET_VAL(MipsISD::LWL),// ->1976
/*1894*/    OPC_RecordMemRef,
/*1895*/    OPC_RecordNode,   // #0 = 'MipsLWL' chained node
/*1896*/    OPC_RecordChild1, // #1 = $addr
/*1897*/    OPC_RecordChild2, // #2 = $src
/*1898*/    OPC_SwitchType /*2 cases */, 36,  MVT::i32,// ->1937
/*1901*/      OPC_Scope, 16, /*->1919*/ // 2 children in Scope
/*1903*/        OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1905*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #3 #4
/*1908*/        OPC_EmitMergeInputChains1_0,
/*1909*/        OPC_MorphNodeTo, TARGET_VAL(Mips::LWL), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (MipsLWL:i32 addr:iPTR:$addr, CPURegs:i32:$src) - Complexity = 12
                // Dst: (LWL:i32 addr:i32:$addr, CPURegs:i32:$src)
/*1919*/      /*Scope*/ 16, /*->1936*/
/*1920*/        OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1922*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #3 #4
/*1925*/        OPC_EmitMergeInputChains1_0,
/*1926*/        OPC_MorphNodeTo, TARGET_VAL(Mips::LWL_P8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (MipsLWL:i32 addr:iPTR:$addr, CPURegs:i32:$src) - Complexity = 12
                // Dst: (LWL_P8:i32 addr:i64:$addr, CPURegs:i32:$src)
/*1936*/      0, /*End of Scope*/
            /*SwitchType*/ 36,  MVT::i64,// ->1975
/*1939*/      OPC_Scope, 16, /*->1957*/ // 2 children in Scope
/*1941*/        OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1943*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #3 #4
/*1946*/        OPC_EmitMergeInputChains1_0,
/*1947*/        OPC_MorphNodeTo, TARGET_VAL(Mips::LWL64), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 4, 2, 
                // Src: (MipsLWL:i64 addr:iPTR:$addr, CPU64Regs:i64:$src) - Complexity = 12
                // Dst: (LWL64:i64 addr:i32:$addr, CPU64Regs:i64:$src)
/*1957*/      /*Scope*/ 16, /*->1974*/
/*1958*/        OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1960*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #3 #4
/*1963*/        OPC_EmitMergeInputChains1_0,
/*1964*/        OPC_MorphNodeTo, TARGET_VAL(Mips::LWL64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 4, 2, 
                // Src: (MipsLWL:i64 addr:iPTR:$addr, CPU64Regs:i64:$src) - Complexity = 12
                // Dst: (LWL64_P8:i64 addr:i64:$addr, CPU64Regs:i64:$src)
/*1974*/      0, /*End of Scope*/
            0, // EndSwitchType
          /*SwitchOpcode*/ 82,  TARGET_VAL(MipsISD::LWR),// ->2061
/*1979*/    OPC_RecordMemRef,
/*1980*/    OPC_RecordNode,   // #0 = 'MipsLWR' chained node
/*1981*/    OPC_RecordChild1, // #1 = $addr
/*1982*/    OPC_RecordChild2, // #2 = $src
/*1983*/    OPC_SwitchType /*2 cases */, 36,  MVT::i32,// ->2022
/*1986*/      OPC_Scope, 16, /*->2004*/ // 2 children in Scope
/*1988*/        OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1990*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #3 #4
/*1993*/        OPC_EmitMergeInputChains1_0,
/*1994*/        OPC_MorphNodeTo, TARGET_VAL(Mips::LWR), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (MipsLWR:i32 addr:iPTR:$addr, CPURegs:i32:$src) - Complexity = 12
                // Dst: (LWR:i32 addr:i32:$addr, CPURegs:i32:$src)
/*2004*/      /*Scope*/ 16, /*->2021*/
/*2005*/        OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2007*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #3 #4
/*2010*/        OPC_EmitMergeInputChains1_0,
/*2011*/        OPC_MorphNodeTo, TARGET_VAL(Mips::LWR_P8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (MipsLWR:i32 addr:iPTR:$addr, CPURegs:i32:$src) - Complexity = 12
                // Dst: (LWR_P8:i32 addr:i64:$addr, CPURegs:i32:$src)
/*2021*/      0, /*End of Scope*/
            /*SwitchType*/ 36,  MVT::i64,// ->2060
/*2024*/      OPC_Scope, 16, /*->2042*/ // 2 children in Scope
/*2026*/        OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2028*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #3 #4
/*2031*/        OPC_EmitMergeInputChains1_0,
/*2032*/        OPC_MorphNodeTo, TARGET_VAL(Mips::LWR64), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 4, 2, 
                // Src: (MipsLWR:i64 addr:iPTR:$addr, CPU64Regs:i64:$src) - Complexity = 12
                // Dst: (LWR64:i64 addr:i32:$addr, CPU64Regs:i64:$src)
/*2042*/      /*Scope*/ 16, /*->2059*/
/*2043*/        OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2045*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #3 #4
/*2048*/        OPC_EmitMergeInputChains1_0,
/*2049*/        OPC_MorphNodeTo, TARGET_VAL(Mips::LWR64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 4, 2, 
                // Src: (MipsLWR:i64 addr:iPTR:$addr, CPU64Regs:i64:$src) - Complexity = 12
                // Dst: (LWR64_P8:i64 addr:i64:$addr, CPU64Regs:i64:$src)
/*2059*/      0, /*End of Scope*/
            0, // EndSwitchType
          /*SwitchOpcode*/ 81,  TARGET_VAL(MipsISD::SWL),// ->2145
/*2064*/    OPC_RecordMemRef,
/*2065*/    OPC_RecordNode,   // #0 = 'MipsSWL' chained node
/*2066*/    OPC_RecordChild1, // #1 = $rt
/*2067*/    OPC_Scope, 37, /*->2106*/ // 2 children in Scope
/*2069*/      OPC_CheckChild1Type, MVT::i32,
/*2071*/      OPC_RecordChild2, // #2 = $addr
/*2072*/      OPC_Scope, 15, /*->2089*/ // 2 children in Scope
/*2074*/        OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2076*/        OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$addr #3 #4
/*2079*/        OPC_EmitMergeInputChains1_0,
/*2080*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SWL), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                // Src: (MipsSWL CPURegs:i32:$rt, addr:iPTR:$addr) - Complexity = 12
                // Dst: (SWL CPURegs:i32:$rt, addr:i32:$addr)
/*2089*/      /*Scope*/ 15, /*->2105*/
/*2090*/        OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2092*/        OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$addr #3 #4
/*2095*/        OPC_EmitMergeInputChains1_0,
/*2096*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SWL_P8), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                // Src: (MipsSWL CPURegs:i32:$rt, addr:iPTR:$addr) - Complexity = 12
                // Dst: (SWL_P8 CPURegs:i32:$rt, addr:i64:$addr)
/*2105*/      0, /*End of Scope*/
/*2106*/    /*Scope*/ 37, /*->2144*/
/*2107*/      OPC_CheckChild1Type, MVT::i64,
/*2109*/      OPC_RecordChild2, // #2 = $addr
/*2110*/      OPC_Scope, 15, /*->2127*/ // 2 children in Scope
/*2112*/        OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2114*/        OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$addr #3 #4
/*2117*/        OPC_EmitMergeInputChains1_0,
/*2118*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SWL64), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                // Src: (MipsSWL CPU64Regs:i64:$rt, addr:iPTR:$addr) - Complexity = 12
                // Dst: (SWL64 CPU64Regs:i64:$rt, addr:i32:$addr)
/*2127*/      /*Scope*/ 15, /*->2143*/
/*2128*/        OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2130*/        OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$addr #3 #4
/*2133*/        OPC_EmitMergeInputChains1_0,
/*2134*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SWL64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                // Src: (MipsSWL CPU64Regs:i64:$rt, addr:iPTR:$addr) - Complexity = 12
                // Dst: (SWL64_P8 CPU64Regs:i64:$rt, addr:i64:$addr)
/*2143*/      0, /*End of Scope*/
/*2144*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 81,  TARGET_VAL(MipsISD::SWR),// ->2229
/*2148*/    OPC_RecordMemRef,
/*2149*/    OPC_RecordNode,   // #0 = 'MipsSWR' chained node
/*2150*/    OPC_RecordChild1, // #1 = $rt
/*2151*/    OPC_Scope, 37, /*->2190*/ // 2 children in Scope
/*2153*/      OPC_CheckChild1Type, MVT::i32,
/*2155*/      OPC_RecordChild2, // #2 = $addr
/*2156*/      OPC_Scope, 15, /*->2173*/ // 2 children in Scope
/*2158*/        OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2160*/        OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$addr #3 #4
/*2163*/        OPC_EmitMergeInputChains1_0,
/*2164*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SWR), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                // Src: (MipsSWR CPURegs:i32:$rt, addr:iPTR:$addr) - Complexity = 12
                // Dst: (SWR CPURegs:i32:$rt, addr:i32:$addr)
/*2173*/      /*Scope*/ 15, /*->2189*/
/*2174*/        OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2176*/        OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$addr #3 #4
/*2179*/        OPC_EmitMergeInputChains1_0,
/*2180*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SWR_P8), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                // Src: (MipsSWR CPURegs:i32:$rt, addr:iPTR:$addr) - Complexity = 12
                // Dst: (SWR_P8 CPURegs:i32:$rt, addr:i64:$addr)
/*2189*/      0, /*End of Scope*/
/*2190*/    /*Scope*/ 37, /*->2228*/
/*2191*/      OPC_CheckChild1Type, MVT::i64,
/*2193*/      OPC_RecordChild2, // #2 = $addr
/*2194*/      OPC_Scope, 15, /*->2211*/ // 2 children in Scope
/*2196*/        OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2198*/        OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$addr #3 #4
/*2201*/        OPC_EmitMergeInputChains1_0,
/*2202*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SWR64), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                // Src: (MipsSWR CPU64Regs:i64:$rt, addr:iPTR:$addr) - Complexity = 12
                // Dst: (SWR64 CPU64Regs:i64:$rt, addr:i32:$addr)
/*2211*/      /*Scope*/ 15, /*->2227*/
/*2212*/        OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2214*/        OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$addr #3 #4
/*2217*/        OPC_EmitMergeInputChains1_0,
/*2218*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SWR64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                // Src: (MipsSWR CPU64Regs:i64:$rt, addr:iPTR:$addr) - Complexity = 12
                // Dst: (SWR64_P8 CPU64Regs:i64:$rt, addr:i64:$addr)
/*2227*/      0, /*End of Scope*/
/*2228*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 45,  TARGET_VAL(MipsISD::DynAlloc),// ->2277
/*2232*/    OPC_RecordNode,   // #0 = 'MipsDynAlloc' chained node
/*2233*/    OPC_CaptureGlueInput,
/*2234*/    OPC_RecordChild1, // #1 = $f
/*2235*/    OPC_SwitchType /*2 cases */, 18,  MVT::i32,// ->2256
/*2238*/      OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*2240*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$f #2 #3
/*2243*/      OPC_EmitMergeInputChains1_0,
/*2244*/      OPC_EmitNode, TARGET_VAL(Mips::DynAlloc), 0|OPFL_GlueInput,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3,  // Results = #4
/*2253*/      OPC_CompleteMatch, 1, 4, 
              // Src: (MipsDynAlloc:i32 addr:i32:$f) - Complexity = 12
              // Dst: (DynAlloc:i32 addr:i32:$f)
            /*SwitchType*/ 18,  MVT::i64,// ->2276
/*2258*/      OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2260*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$f #2 #3
/*2263*/      OPC_EmitMergeInputChains1_0,
/*2264*/      OPC_EmitNode, TARGET_VAL(Mips::DynAlloc64), 0|OPFL_GlueInput,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3,  // Results = #4
/*2273*/      OPC_CompleteMatch, 1, 4, 
              // Src: (MipsDynAlloc:i64 addr:i64:$f) - Complexity = 12
              // Dst: (DynAlloc64:i64 addr:i64:$f)
            0, // EndSwitchType
          /*SwitchOpcode*/ 42,  TARGET_VAL(MipsISD::LDL),// ->2322
/*2280*/    OPC_RecordMemRef,
/*2281*/    OPC_RecordNode,   // #0 = 'MipsLDL' chained node
/*2282*/    OPC_RecordChild1, // #1 = $addr
/*2283*/    OPC_RecordChild2, // #2 = $src
/*2284*/    OPC_CheckType, MVT::i64,
/*2286*/    OPC_Scope, 16, /*->2304*/ // 2 children in Scope
/*2288*/      OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2290*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #3 #4
/*2293*/      OPC_EmitMergeInputChains1_0,
/*2294*/      OPC_MorphNodeTo, TARGET_VAL(Mips::LDL), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 4, 2, 
              // Src: (MipsLDL:i64 addr:iPTR:$addr, CPU64Regs:i64:$src) - Complexity = 12
              // Dst: (LDL:i64 addr:i32:$addr, CPU64Regs:i64:$src)
/*2304*/    /*Scope*/ 16, /*->2321*/
/*2305*/      OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2307*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #3 #4
/*2310*/      OPC_EmitMergeInputChains1_0,
/*2311*/      OPC_MorphNodeTo, TARGET_VAL(Mips::LDL_P8), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 4, 2, 
              // Src: (MipsLDL:i64 addr:iPTR:$addr, CPU64Regs:i64:$src) - Complexity = 12
              // Dst: (LDL_P8:i64 addr:i64:$addr, CPU64Regs:i64:$src)
/*2321*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 42,  TARGET_VAL(MipsISD::LDR),// ->2367
/*2325*/    OPC_RecordMemRef,
/*2326*/    OPC_RecordNode,   // #0 = 'MipsLDR' chained node
/*2327*/    OPC_RecordChild1, // #1 = $addr
/*2328*/    OPC_RecordChild2, // #2 = $src
/*2329*/    OPC_CheckType, MVT::i64,
/*2331*/    OPC_Scope, 16, /*->2349*/ // 2 children in Scope
/*2333*/      OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2335*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #3 #4
/*2338*/      OPC_EmitMergeInputChains1_0,
/*2339*/      OPC_MorphNodeTo, TARGET_VAL(Mips::LDR), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 4, 2, 
              // Src: (MipsLDR:i64 addr:iPTR:$addr, CPU64Regs:i64:$src) - Complexity = 12
              // Dst: (LDR:i64 addr:i32:$addr, CPU64Regs:i64:$src)
/*2349*/    /*Scope*/ 16, /*->2366*/
/*2350*/      OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2352*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #3 #4
/*2355*/      OPC_EmitMergeInputChains1_0,
/*2356*/      OPC_MorphNodeTo, TARGET_VAL(Mips::LDR_P8), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 4, 2, 
              // Src: (MipsLDR:i64 addr:iPTR:$addr, CPU64Regs:i64:$src) - Complexity = 12
              // Dst: (LDR_P8:i64 addr:i64:$addr, CPU64Regs:i64:$src)
/*2366*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 40,  TARGET_VAL(MipsISD::SDL),// ->2410
/*2370*/    OPC_RecordMemRef,
/*2371*/    OPC_RecordNode,   // #0 = 'MipsSDL' chained node
/*2372*/    OPC_RecordChild1, // #1 = $rt
/*2373*/    OPC_CheckChild1Type, MVT::i64,
/*2375*/    OPC_RecordChild2, // #2 = $addr
/*2376*/    OPC_Scope, 15, /*->2393*/ // 2 children in Scope
/*2378*/      OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2380*/      OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$addr #3 #4
/*2383*/      OPC_EmitMergeInputChains1_0,
/*2384*/      OPC_MorphNodeTo, TARGET_VAL(Mips::SDL), 0|OPFL_Chain|OPFL_MemRefs,
                  0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
              // Src: (MipsSDL CPU64Regs:i64:$rt, addr:iPTR:$addr) - Complexity = 12
              // Dst: (SDL CPU64Regs:i64:$rt, addr:i32:$addr)
/*2393*/    /*Scope*/ 15, /*->2409*/
/*2394*/      OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2396*/      OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$addr #3 #4
/*2399*/      OPC_EmitMergeInputChains1_0,
/*2400*/      OPC_MorphNodeTo, TARGET_VAL(Mips::SDL_P8), 0|OPFL_Chain|OPFL_MemRefs,
                  0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
              // Src: (MipsSDL CPU64Regs:i64:$rt, addr:iPTR:$addr) - Complexity = 12
              // Dst: (SDL_P8 CPU64Regs:i64:$rt, addr:i64:$addr)
/*2409*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 40,  TARGET_VAL(MipsISD::SDR),// ->2453
/*2413*/    OPC_RecordMemRef,
/*2414*/    OPC_RecordNode,   // #0 = 'MipsSDR' chained node
/*2415*/    OPC_RecordChild1, // #1 = $rt
/*2416*/    OPC_CheckChild1Type, MVT::i64,
/*2418*/    OPC_RecordChild2, // #2 = $addr
/*2419*/    OPC_Scope, 15, /*->2436*/ // 2 children in Scope
/*2421*/      OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2423*/      OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$addr #3 #4
/*2426*/      OPC_EmitMergeInputChains1_0,
/*2427*/      OPC_MorphNodeTo, TARGET_VAL(Mips::SDR), 0|OPFL_Chain|OPFL_MemRefs,
                  0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
              // Src: (MipsSDR CPU64Regs:i64:$rt, addr:iPTR:$addr) - Complexity = 12
              // Dst: (SDR CPU64Regs:i64:$rt, addr:i32:$addr)
/*2436*/    /*Scope*/ 15, /*->2452*/
/*2437*/      OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2439*/      OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$addr #3 #4
/*2442*/      OPC_EmitMergeInputChains1_0,
/*2443*/      OPC_MorphNodeTo, TARGET_VAL(Mips::SDR_P8), 0|OPFL_Chain|OPFL_MemRefs,
                  0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
              // Src: (MipsSDR CPU64Regs:i64:$rt, addr:iPTR:$addr) - Complexity = 12
              // Dst: (SDR_P8 CPU64Regs:i64:$rt, addr:i64:$addr)
/*2452*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 85,  TARGET_VAL(ISD::FrameIndex),// ->2541
/*2456*/    OPC_RecordNode,   // #0 = $addr
/*2457*/    OPC_SwitchType /*2 cases */, 46,  MVT::i32,// ->2506
/*2460*/      OPC_Scope, 15, /*->2477*/ // 2 children in Scope
/*2462*/        OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*2464*/        OPC_CheckComplexPat, /*CP*/1, /*#*/0, // SelectAddr16:$addr #1 #2 #3
/*2467*/        OPC_MorphNodeTo, TARGET_VAL(Mips::AddiuRxRyOffMemX16), 0,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 2, 3, 
                // Src: addr16:i32:$addr - Complexity = 12
                // Dst: (AddiuRxRyOffMemX16:i32 addr16:i32:$addr)
/*2477*/      /*Scope*/ 27, /*->2505*/
/*2478*/        OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*2480*/        OPC_CheckComplexPat, /*CP*/0, /*#*/0, // SelectAddr:$addr #1 #2
/*2483*/        OPC_Scope, 9, /*->2494*/ // 2 children in Scope
/*2485*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LEA_ADDiu), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: addr:i32:$addr - Complexity = 9
                  // Dst: (LEA_ADDiu:i32 addr:i32:$addr)
/*2494*/        /*Scope*/ 9, /*->2504*/
/*2495*/          OPC_MorphNodeTo, TARGET_VAL(Mips::DynAlloc), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: addr:i32:$addr - Complexity = 9
                  // Dst: (DynAlloc:i32 addr:i32:$addr)
/*2504*/        0, /*End of Scope*/
/*2505*/      0, /*End of Scope*/
            /*SwitchType*/ 32,  MVT::i64,// ->2540
/*2508*/      OPC_Scope, 14, /*->2524*/ // 2 children in Scope
/*2510*/        OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*2512*/        OPC_CheckComplexPat, /*CP*/0, /*#*/0, // SelectAddr:$addr #1 #2
/*2515*/        OPC_MorphNodeTo, TARGET_VAL(Mips::LEA_ADDiu64), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
                // Src: addr:i64:$addr - Complexity = 9
                // Dst: (LEA_ADDiu64:i64 addr:i64:$addr)
/*2524*/      /*Scope*/ 14, /*->2539*/
/*2525*/        OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2527*/        OPC_CheckComplexPat, /*CP*/0, /*#*/0, // SelectAddr:$addr #1 #2
/*2530*/        OPC_MorphNodeTo, TARGET_VAL(Mips::DynAlloc64), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
                // Src: addr:i64:$addr - Complexity = 9
                // Dst: (DynAlloc64:i64 addr:i64:$addr)
/*2539*/      0, /*End of Scope*/
            0, // EndSwitchType
          /*SwitchOpcode*/ 37|128,8/*1061*/,  TARGET_VAL(ISD::INTRINSIC_W_CHAIN),// ->3606
/*2545*/    OPC_RecordNode,   // #0 = 'intrinsic_w_chain' chained node
/*2546*/    OPC_MoveChild, 1,
/*2548*/    OPC_Scope, 44, /*->2594*/ // 50 children in Scope
/*2550*/      OPC_CheckInteger, 123|128,8/*1147*/, 
/*2553*/      OPC_MoveParent,
/*2554*/      OPC_RecordChild2, // #1 = $rt
/*2555*/      OPC_RecordChild3, // #2 = $rs_sa
/*2556*/      OPC_Scope, 22, /*->2580*/ // 2 children in Scope
/*2558*/        OPC_MoveChild, 3,
/*2560*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2563*/        OPC_CheckPredicate, 21, // Predicate_immZExt5
/*2565*/        OPC_MoveParent,
/*2566*/        OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*2568*/        OPC_EmitMergeInputChains1_0,
/*2569*/        OPC_EmitConvertToTarget, 2,
/*2571*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SHLL_S_W), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 3, 
                // Src: (intrinsic_w_chain:i32 1147:iPTR, CPURegs:i32:$rt, (imm:i32)<<P:Predicate_immZExt5>>:$rs_sa) - Complexity = 12
                // Dst: (SHLL_S_W:i32 CPURegs:i32:$rt, (imm:i32):$rs_sa)
/*2580*/      /*Scope*/ 12, /*->2593*/
/*2581*/        OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*2583*/        OPC_EmitMergeInputChains1_0,
/*2584*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SHLLV_S_W), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                // Src: (intrinsic_w_chain:i32 1147:iPTR, CPURegs:i32:$rt, CPURegs:i32:$rs_sa) - Complexity = 8
                // Dst: (SHLLV_S_W:i32 CPURegs:i32:$rt, CPURegs:i32:$rs_sa)
/*2593*/      0, /*End of Scope*/
/*2594*/    /*Scope*/ 26, /*->2621*/
/*2595*/      OPC_CheckInteger, 116|128,8/*1140*/, 
/*2598*/      OPC_MoveParent,
/*2599*/      OPC_RecordChild2, // #1 = $mask
/*2600*/      OPC_MoveChild, 2,
/*2602*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2605*/      OPC_CheckPredicate, 22, // Predicate_immZExt10
/*2607*/      OPC_MoveParent,
/*2608*/      OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*2610*/      OPC_EmitMergeInputChains1_0,
/*2611*/      OPC_EmitConvertToTarget, 1,
/*2613*/      OPC_MorphNodeTo, TARGET_VAL(Mips::RDDSP), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
              // Src: (intrinsic_w_chain:i32 1140:iPTR, (imm:i32)<<P:Predicate_immZExt10>>:$mask) - Complexity = 12
              // Dst: (RDDSP:i32 (imm:i32):$mask)
/*2621*/    /*Scope*/ 18, /*->2640*/
/*2622*/      OPC_CheckInteger, 15|128,8/*1039*/, 
/*2625*/      OPC_MoveParent,
/*2626*/      OPC_RecordChild2, // #1 = $rs
/*2627*/      OPC_RecordChild3, // #2 = $rt
/*2628*/      OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*2630*/      OPC_EmitMergeInputChains1_0,
/*2631*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ADDQ_S_W), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:i32 1039:iPTR, CPURegs:i32:$rs, CPURegs:i32:$rt) - Complexity = 8
              // Dst: (ADDQ_S_W:i32 CPURegs:i32:$rs, CPURegs:i32:$rt)
/*2640*/    /*Scope*/ 18, /*->2659*/
/*2641*/      OPC_CheckInteger, 5|128,9/*1157*/, 
/*2644*/      OPC_MoveParent,
/*2645*/      OPC_RecordChild2, // #1 = $rs
/*2646*/      OPC_RecordChild3, // #2 = $rt
/*2647*/      OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*2649*/      OPC_EmitMergeInputChains1_0,
/*2650*/      OPC_MorphNodeTo, TARGET_VAL(Mips::SUBQ_S_W), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:i32 1157:iPTR, CPURegs:i32:$rs, CPURegs:i32:$rt) - Complexity = 8
              // Dst: (SUBQ_S_W:i32 CPURegs:i32:$rs, CPURegs:i32:$rt)
/*2659*/    /*Scope*/ 18, /*->2678*/
/*2660*/      OPC_CheckInteger, 20|128,8/*1044*/, 
/*2663*/      OPC_MoveParent,
/*2664*/      OPC_RecordChild2, // #1 = $rs
/*2665*/      OPC_RecordChild3, // #2 = $rt
/*2666*/      OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*2668*/      OPC_EmitMergeInputChains1_0,
/*2669*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ADDSC), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:i32 1044:iPTR, CPURegs:i32:$rs, CPURegs:i32:$rt) - Complexity = 8
              // Dst: (ADDSC:i32 CPURegs:i32:$rs, CPURegs:i32:$rt)
/*2678*/    /*Scope*/ 18, /*->2697*/
/*2679*/      OPC_CheckInteger, 27|128,8/*1051*/, 
/*2682*/      OPC_MoveParent,
/*2683*/      OPC_RecordChild2, // #1 = $rs
/*2684*/      OPC_RecordChild3, // #2 = $rt
/*2685*/      OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*2687*/      OPC_EmitMergeInputChains1_0,
/*2688*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ADDWC), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:i32 1051:iPTR, CPURegs:i32:$rs, CPURegs:i32:$rt) - Complexity = 8
              // Dst: (ADDWC:i32 CPURegs:i32:$rs, CPURegs:i32:$rt)
/*2697*/    /*Scope*/ 16, /*->2714*/
/*2698*/      OPC_CheckInteger, 12|128,8/*1036*/, 
/*2701*/      OPC_MoveParent,
/*2702*/      OPC_RecordChild2, // #1 = $rt
/*2703*/      OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*2705*/      OPC_EmitMergeInputChains1_0,
/*2706*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ABSQ_S_W), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
              // Src: (intrinsic_w_chain:i32 1036:iPTR, CPURegs:i32:$rt) - Complexity = 8
              // Dst: (ABSQ_S_W:i32 CPURegs:i32:$rt)
/*2714*/    /*Scope*/ 18, /*->2733*/
/*2715*/      OPC_CheckInteger, 82|128,8/*1106*/, 
/*2718*/      OPC_MoveParent,
/*2719*/      OPC_RecordChild2, // #1 = $rs
/*2720*/      OPC_RecordChild3, // #2 = $rt
/*2721*/      OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*2723*/      OPC_EmitMergeInputChains1_0,
/*2724*/      OPC_MorphNodeTo, TARGET_VAL(Mips::MULEQ_S_W_PHL), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:i32 1106:iPTR, DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (MULEQ_S_W_PHL:i32 DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt)
/*2733*/    /*Scope*/ 18, /*->2752*/
/*2734*/      OPC_CheckInteger, 83|128,8/*1107*/, 
/*2737*/      OPC_MoveParent,
/*2738*/      OPC_RecordChild2, // #1 = $rs
/*2739*/      OPC_RecordChild3, // #2 = $rt
/*2740*/      OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*2742*/      OPC_EmitMergeInputChains1_0,
/*2743*/      OPC_MorphNodeTo, TARGET_VAL(Mips::MULEQ_S_W_PHR), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:i32 1107:iPTR, DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (MULEQ_S_W_PHR:i32 DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt)
/*2752*/    /*Scope*/ 18, /*->2771*/
/*2753*/      OPC_CheckInteger, 38|128,8/*1062*/, 
/*2756*/      OPC_MoveParent,
/*2757*/      OPC_RecordChild2, // #1 = $rs
/*2758*/      OPC_RecordChild3, // #2 = $rt
/*2759*/      OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*2761*/      OPC_EmitMergeInputChains1_0,
/*2762*/      OPC_MorphNodeTo, TARGET_VAL(Mips::CMPGU_EQ_QB), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:i32 1062:iPTR, DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt) - Complexity = 8
              // Dst: (CMPGU_EQ_QB:i32 DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt)
/*2771*/    /*Scope*/ 18, /*->2790*/
/*2772*/      OPC_CheckInteger, 40|128,8/*1064*/, 
/*2775*/      OPC_MoveParent,
/*2776*/      OPC_RecordChild2, // #1 = $rs
/*2777*/      OPC_RecordChild3, // #2 = $rt
/*2778*/      OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*2780*/      OPC_EmitMergeInputChains1_0,
/*2781*/      OPC_MorphNodeTo, TARGET_VAL(Mips::CMPGU_LT_QB), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:i32 1064:iPTR, DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt) - Complexity = 8
              // Dst: (CMPGU_LT_QB:i32 DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt)
/*2790*/    /*Scope*/ 18, /*->2809*/
/*2791*/      OPC_CheckInteger, 39|128,8/*1063*/, 
/*2794*/      OPC_MoveParent,
/*2795*/      OPC_RecordChild2, // #1 = $rs
/*2796*/      OPC_RecordChild3, // #2 = $rt
/*2797*/      OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*2799*/      OPC_EmitMergeInputChains1_0,
/*2800*/      OPC_MorphNodeTo, TARGET_VAL(Mips::CMPGU_LE_QB), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:i32 1063:iPTR, DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt) - Complexity = 8
              // Dst: (CMPGU_LE_QB:i32 DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt)
/*2809*/    /*Scope*/ 20, /*->2830*/
/*2810*/      OPC_CheckInteger, 69|128,8/*1093*/, 
/*2813*/      OPC_MoveParent,
/*2814*/      OPC_RecordChild2, // #1 = $base
/*2815*/      OPC_CheckChild2Type, MVT::i32,
/*2817*/      OPC_RecordChild3, // #2 = $index
/*2818*/      OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*2820*/      OPC_EmitMergeInputChains1_0,
/*2821*/      OPC_MorphNodeTo, TARGET_VAL(Mips::LWX), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:i32 1093:iPTR, CPURegs:i32:$base, CPURegs:i32:$index) - Complexity = 8
              // Dst: (LWX:i32 CPURegs:i32:$base, CPURegs:i32:$index)
/*2830*/    /*Scope*/ 20, /*->2851*/
/*2831*/      OPC_CheckInteger, 68|128,8/*1092*/, 
/*2834*/      OPC_MoveParent,
/*2835*/      OPC_RecordChild2, // #1 = $base
/*2836*/      OPC_CheckChild2Type, MVT::i32,
/*2838*/      OPC_RecordChild3, // #2 = $index
/*2839*/      OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*2841*/      OPC_EmitMergeInputChains1_0,
/*2842*/      OPC_MorphNodeTo, TARGET_VAL(Mips::LHX), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:i32 1092:iPTR, CPURegs:i32:$base, CPURegs:i32:$index) - Complexity = 8
              // Dst: (LHX:i32 CPURegs:i32:$base, CPURegs:i32:$index)
/*2851*/    /*Scope*/ 20, /*->2872*/
/*2852*/      OPC_CheckInteger, 67|128,8/*1091*/, 
/*2855*/      OPC_MoveParent,
/*2856*/      OPC_RecordChild2, // #1 = $base
/*2857*/      OPC_CheckChild2Type, MVT::i32,
/*2859*/      OPC_RecordChild3, // #2 = $index
/*2860*/      OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*2862*/      OPC_EmitMergeInputChains1_0,
/*2863*/      OPC_MorphNodeTo, TARGET_VAL(Mips::LBUX), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:i32 1091:iPTR, CPURegs:i32:$base, CPURegs:i32:$index) - Complexity = 8
              // Dst: (LBUX:i32 CPURegs:i32:$base, CPURegs:i32:$index)
/*2872*/    /*Scope*/ 18, /*->2891*/
/*2873*/      OPC_CheckInteger, 66|128,8/*1090*/, 
/*2876*/      OPC_MoveParent,
/*2877*/      OPC_RecordChild2, // #1 = $src
/*2878*/      OPC_RecordChild3, // #2 = $rs
/*2879*/      OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*2881*/      OPC_EmitMergeInputChains1_0,
/*2882*/      OPC_MorphNodeTo, TARGET_VAL(Mips::INSV), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:i32 1090:iPTR, CPURegs:i32:$src, CPURegs:i32:$rs) - Complexity = 8
              // Dst: (INSV:i32 CPURegs:i32:$src, CPURegs:i32:$rs)
/*2891*/    /*Scope*/ 18, /*->2910*/
/*2892*/      OPC_CheckInteger, 35|128,8/*1059*/, 
/*2895*/      OPC_MoveParent,
/*2896*/      OPC_RecordChild2, // #1 = $rs
/*2897*/      OPC_RecordChild3, // #2 = $rt
/*2898*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*2900*/      OPC_EmitMergeInputChains1_0,
/*2901*/      OPC_MorphNodeTo, TARGET_VAL(Mips::CMPGDU_EQ_QB), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:i32 1059:iPTR, DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt) - Complexity = 8
              // Dst: (CMPGDU_EQ_QB:i32 DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt)
/*2910*/    /*Scope*/ 18, /*->2929*/
/*2911*/      OPC_CheckInteger, 37|128,8/*1061*/, 
/*2914*/      OPC_MoveParent,
/*2915*/      OPC_RecordChild2, // #1 = $rs
/*2916*/      OPC_RecordChild3, // #2 = $rt
/*2917*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*2919*/      OPC_EmitMergeInputChains1_0,
/*2920*/      OPC_MorphNodeTo, TARGET_VAL(Mips::CMPGDU_LT_QB), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:i32 1061:iPTR, DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt) - Complexity = 8
              // Dst: (CMPGDU_LT_QB:i32 DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt)
/*2929*/    /*Scope*/ 18, /*->2948*/
/*2930*/      OPC_CheckInteger, 36|128,8/*1060*/, 
/*2933*/      OPC_MoveParent,
/*2934*/      OPC_RecordChild2, // #1 = $rs
/*2935*/      OPC_RecordChild3, // #2 = $rt
/*2936*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*2938*/      OPC_EmitMergeInputChains1_0,
/*2939*/      OPC_MorphNodeTo, TARGET_VAL(Mips::CMPGDU_LE_QB), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:i32 1060:iPTR, DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt) - Complexity = 8
              // Dst: (CMPGDU_LE_QB:i32 DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt)
/*2948*/    /*Scope*/ 18, /*->2967*/
/*2949*/      OPC_CheckInteger, 89|128,8/*1113*/, 
/*2952*/      OPC_MoveParent,
/*2953*/      OPC_RecordChild2, // #1 = $rs
/*2954*/      OPC_RecordChild3, // #2 = $rt
/*2955*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*2957*/      OPC_EmitMergeInputChains1_0,
/*2958*/      OPC_MorphNodeTo, TARGET_VAL(Mips::MULQ_S_W), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:i32 1113:iPTR, CPURegs:i32:$rs, CPURegs:i32:$rt) - Complexity = 8
              // Dst: (MULQ_S_W:i32 CPURegs:i32:$rs, CPURegs:i32:$rt)
/*2967*/    /*Scope*/ 18, /*->2986*/
/*2968*/      OPC_CheckInteger, 87|128,8/*1111*/, 
/*2971*/      OPC_MoveParent,
/*2972*/      OPC_RecordChild2, // #1 = $rs
/*2973*/      OPC_RecordChild3, // #2 = $rt
/*2974*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*2976*/      OPC_EmitMergeInputChains1_0,
/*2977*/      OPC_MorphNodeTo, TARGET_VAL(Mips::MULQ_RS_W), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:i32 1111:iPTR, CPURegs:i32:$rs, CPURegs:i32:$rt) - Complexity = 8
              // Dst: (MULQ_RS_W:i32 CPURegs:i32:$rs, CPURegs:i32:$rt)
/*2986*/    /*Scope*/ 12, /*->2999*/
/*2987*/      OPC_CheckInteger, 31|128,8/*1055*/, 
/*2990*/      OPC_MoveParent,
/*2991*/      OPC_EmitMergeInputChains1_0,
/*2992*/      OPC_MorphNodeTo, TARGET_VAL(Mips::BPOSGE32_PSEUDO), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 0/*#Ops*/, 
              // Src: (intrinsic_w_chain:i32 1055:iPTR) - Complexity = 8
              // Dst: (BPOSGE32_PSEUDO:i32)
/*2999*/    /*Scope*/ 44, /*->3044*/
/*3000*/      OPC_CheckInteger, 121|128,8/*1145*/, 
/*3003*/      OPC_MoveParent,
/*3004*/      OPC_RecordChild2, // #1 = $rt
/*3005*/      OPC_RecordChild3, // #2 = $rs_sa
/*3006*/      OPC_Scope, 22, /*->3030*/ // 2 children in Scope
/*3008*/        OPC_MoveChild, 3,
/*3010*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3013*/        OPC_CheckPredicate, 23, // Predicate_immZExt3
/*3015*/        OPC_MoveParent,
/*3016*/        OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*3018*/        OPC_EmitMergeInputChains1_0,
/*3019*/        OPC_EmitConvertToTarget, 2,
/*3021*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SHLL_QB), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 1, 3, 
                // Src: (intrinsic_w_chain:v4i8 1145:iPTR, DSPRegs:v4i8:$rt, (imm:i32)<<P:Predicate_immZExt3>>:$rs_sa) - Complexity = 12
                // Dst: (SHLL_QB:v4i8 DSPRegs:v4i8:$rt, (imm:i32):$rs_sa)
/*3030*/      /*Scope*/ 12, /*->3043*/
/*3031*/        OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*3033*/        OPC_EmitMergeInputChains1_0,
/*3034*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SHLLV_QB), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 1, 2, 
                // Src: (intrinsic_w_chain:v4i8 1145:iPTR, DSPRegs:v4i8:$rt, CPURegs:i32:$rs_sa) - Complexity = 8
                // Dst: (SHLLV_QB:v4i8 DSPRegs:v4i8:$rt, CPURegs:i32:$rs_sa)
/*3043*/      0, /*End of Scope*/
/*3044*/    /*Scope*/ 44, /*->3089*/
/*3045*/      OPC_CheckInteger, 120|128,8/*1144*/, 
/*3048*/      OPC_MoveParent,
/*3049*/      OPC_RecordChild2, // #1 = $rt
/*3050*/      OPC_RecordChild3, // #2 = $rs_sa
/*3051*/      OPC_Scope, 22, /*->3075*/ // 2 children in Scope
/*3053*/        OPC_MoveChild, 3,
/*3055*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3058*/        OPC_CheckPredicate, 24, // Predicate_immZExt4
/*3060*/        OPC_MoveParent,
/*3061*/        OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*3063*/        OPC_EmitMergeInputChains1_0,
/*3064*/        OPC_EmitConvertToTarget, 2,
/*3066*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SHLL_PH), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 1, 3, 
                // Src: (intrinsic_w_chain:v2i16 1144:iPTR, DSPRegs:v2i16:$rt, (imm:i32)<<P:Predicate_immZExt4>>:$rs_sa) - Complexity = 12
                // Dst: (SHLL_PH:v2i16 DSPRegs:v2i16:$rt, (imm:i32):$rs_sa)
/*3075*/      /*Scope*/ 12, /*->3088*/
/*3076*/        OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*3078*/        OPC_EmitMergeInputChains1_0,
/*3079*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SHLLV_PH), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 1, 2, 
                // Src: (intrinsic_w_chain:v2i16 1144:iPTR, DSPRegs:v2i16:$rt, CPURegs:i32:$rs_sa) - Complexity = 8
                // Dst: (SHLLV_PH:v2i16 DSPRegs:v2i16:$rt, CPURegs:i32:$rs_sa)
/*3088*/      0, /*End of Scope*/
/*3089*/    /*Scope*/ 44, /*->3134*/
/*3090*/      OPC_CheckInteger, 122|128,8/*1146*/, 
/*3093*/      OPC_MoveParent,
/*3094*/      OPC_RecordChild2, // #1 = $rt
/*3095*/      OPC_RecordChild3, // #2 = $rs_sa
/*3096*/      OPC_Scope, 22, /*->3120*/ // 2 children in Scope
/*3098*/        OPC_MoveChild, 3,
/*3100*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3103*/        OPC_CheckPredicate, 24, // Predicate_immZExt4
/*3105*/        OPC_MoveParent,
/*3106*/        OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*3108*/        OPC_EmitMergeInputChains1_0,
/*3109*/        OPC_EmitConvertToTarget, 2,
/*3111*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SHLL_S_PH), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 1, 3, 
                // Src: (intrinsic_w_chain:v2i16 1146:iPTR, DSPRegs:v2i16:$rt, (imm:i32)<<P:Predicate_immZExt4>>:$rs_sa) - Complexity = 12
                // Dst: (SHLL_S_PH:v2i16 DSPRegs:v2i16:$rt, (imm:i32):$rs_sa)
/*3120*/      /*Scope*/ 12, /*->3133*/
/*3121*/        OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*3123*/        OPC_EmitMergeInputChains1_0,
/*3124*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SHLLV_S_PH), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 1, 2, 
                // Src: (intrinsic_w_chain:v2i16 1146:iPTR, DSPRegs:v2i16:$rt, CPURegs:i32:$rs_sa) - Complexity = 8
                // Dst: (SHLLV_S_PH:v2i16 DSPRegs:v2i16:$rt, CPURegs:i32:$rs_sa)
/*3133*/      0, /*End of Scope*/
/*3134*/    /*Scope*/ 18, /*->3153*/
/*3135*/      OPC_CheckInteger, 22|128,8/*1046*/, 
/*3138*/      OPC_MoveParent,
/*3139*/      OPC_RecordChild2, // #1 = $rs
/*3140*/      OPC_RecordChild3, // #2 = $rt
/*3141*/      OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*3143*/      OPC_EmitMergeInputChains1_0,
/*3144*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ADDU_QB), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:v4i8 1046:iPTR, DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt) - Complexity = 8
              // Dst: (ADDU_QB:v4i8 DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt)
/*3153*/    /*Scope*/ 18, /*->3172*/
/*3154*/      OPC_CheckInteger, 24|128,8/*1048*/, 
/*3157*/      OPC_MoveParent,
/*3158*/      OPC_RecordChild2, // #1 = $rs
/*3159*/      OPC_RecordChild3, // #2 = $rt
/*3160*/      OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*3162*/      OPC_EmitMergeInputChains1_0,
/*3163*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ADDU_S_QB), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:v4i8 1048:iPTR, DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt) - Complexity = 8
              // Dst: (ADDU_S_QB:v4i8 DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt)
/*3172*/    /*Scope*/ 18, /*->3191*/
/*3173*/      OPC_CheckInteger, 11|128,9/*1163*/, 
/*3176*/      OPC_MoveParent,
/*3177*/      OPC_RecordChild2, // #1 = $rs
/*3178*/      OPC_RecordChild3, // #2 = $rt
/*3179*/      OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*3181*/      OPC_EmitMergeInputChains1_0,
/*3182*/      OPC_MorphNodeTo, TARGET_VAL(Mips::SUBU_QB), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:v4i8 1163:iPTR, DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt) - Complexity = 8
              // Dst: (SUBU_QB:v4i8 DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt)
/*3191*/    /*Scope*/ 18, /*->3210*/
/*3192*/      OPC_CheckInteger, 13|128,9/*1165*/, 
/*3195*/      OPC_MoveParent,
/*3196*/      OPC_RecordChild2, // #1 = $rs
/*3197*/      OPC_RecordChild3, // #2 = $rt
/*3198*/      OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*3200*/      OPC_EmitMergeInputChains1_0,
/*3201*/      OPC_MorphNodeTo, TARGET_VAL(Mips::SUBU_S_QB), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:v4i8 1165:iPTR, DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt) - Complexity = 8
              // Dst: (SUBU_S_QB:v4i8 DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt)
/*3210*/    /*Scope*/ 18, /*->3229*/
/*3211*/      OPC_CheckInteger, 13|128,8/*1037*/, 
/*3214*/      OPC_MoveParent,
/*3215*/      OPC_RecordChild2, // #1 = $rs
/*3216*/      OPC_RecordChild3, // #2 = $rt
/*3217*/      OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*3219*/      OPC_EmitMergeInputChains1_0,
/*3220*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ADDQ_PH), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:v2i16 1037:iPTR, DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (ADDQ_PH:v2i16 DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt)
/*3229*/    /*Scope*/ 18, /*->3248*/
/*3230*/      OPC_CheckInteger, 14|128,8/*1038*/, 
/*3233*/      OPC_MoveParent,
/*3234*/      OPC_RecordChild2, // #1 = $rs
/*3235*/      OPC_RecordChild3, // #2 = $rt
/*3236*/      OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*3238*/      OPC_EmitMergeInputChains1_0,
/*3239*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ADDQ_S_PH), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:v2i16 1038:iPTR, DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (ADDQ_S_PH:v2i16 DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt)
/*3248*/    /*Scope*/ 18, /*->3267*/
/*3249*/      OPC_CheckInteger, 3|128,9/*1155*/, 
/*3252*/      OPC_MoveParent,
/*3253*/      OPC_RecordChild2, // #1 = $rs
/*3254*/      OPC_RecordChild3, // #2 = $rt
/*3255*/      OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*3257*/      OPC_EmitMergeInputChains1_0,
/*3258*/      OPC_MorphNodeTo, TARGET_VAL(Mips::SUBQ_PH), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:v2i16 1155:iPTR, DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (SUBQ_PH:v2i16 DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt)
/*3267*/    /*Scope*/ 18, /*->3286*/
/*3268*/      OPC_CheckInteger, 4|128,9/*1156*/, 
/*3271*/      OPC_MoveParent,
/*3272*/      OPC_RecordChild2, // #1 = $rs
/*3273*/      OPC_RecordChild3, // #2 = $rt
/*3274*/      OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*3276*/      OPC_EmitMergeInputChains1_0,
/*3277*/      OPC_MorphNodeTo, TARGET_VAL(Mips::SUBQ_S_PH), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:v2i16 1156:iPTR, DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (SUBQ_S_PH:v2i16 DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt)
/*3286*/    /*Scope*/ 16, /*->3303*/
/*3287*/      OPC_CheckInteger, 10|128,8/*1034*/, 
/*3290*/      OPC_MoveParent,
/*3291*/      OPC_RecordChild2, // #1 = $rt
/*3292*/      OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*3294*/      OPC_EmitMergeInputChains1_0,
/*3295*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ABSQ_S_PH), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v2i16, 1/*#Ops*/, 1, 
              // Src: (intrinsic_w_chain:v2i16 1034:iPTR, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (ABSQ_S_PH:v2i16 DSPRegs:v2i16:$rt)
/*3303*/    /*Scope*/ 18, /*->3322*/
/*3304*/      OPC_CheckInteger, 112|128,8/*1136*/, 
/*3307*/      OPC_MoveParent,
/*3308*/      OPC_RecordChild2, // #1 = $rs
/*3309*/      OPC_RecordChild3, // #2 = $rt
/*3310*/      OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*3312*/      OPC_EmitMergeInputChains1_0,
/*3313*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PRECRQ_RS_PH_W), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:v2i16 1136:iPTR, CPURegs:i32:$rs, CPURegs:i32:$rt) - Complexity = 8
              // Dst: (PRECRQ_RS_PH_W:v2i16 CPURegs:i32:$rs, CPURegs:i32:$rt)
/*3322*/    /*Scope*/ 18, /*->3341*/
/*3323*/      OPC_CheckInteger, 113|128,8/*1137*/, 
/*3326*/      OPC_MoveParent,
/*3327*/      OPC_RecordChild2, // #1 = $rs
/*3328*/      OPC_RecordChild3, // #2 = $rt
/*3329*/      OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*3331*/      OPC_EmitMergeInputChains1_0,
/*3332*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PRECRQU_S_QB_PH), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:v4i8 1137:iPTR, DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (PRECRQU_S_QB_PH:v4i8 DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt)
/*3341*/    /*Scope*/ 18, /*->3360*/
/*3342*/      OPC_CheckInteger, 84|128,8/*1108*/, 
/*3345*/      OPC_MoveParent,
/*3346*/      OPC_RecordChild2, // #1 = $rs
/*3347*/      OPC_RecordChild3, // #2 = $rt
/*3348*/      OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*3350*/      OPC_EmitMergeInputChains1_0,
/*3351*/      OPC_MorphNodeTo, TARGET_VAL(Mips::MULEU_S_PH_QBL), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:v2i16 1108:iPTR, DSPRegs:v4i8:$rs, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (MULEU_S_PH_QBL:v2i16 DSPRegs:v4i8:$rs, DSPRegs:v2i16:$rt)
/*3360*/    /*Scope*/ 18, /*->3379*/
/*3361*/      OPC_CheckInteger, 85|128,8/*1109*/, 
/*3364*/      OPC_MoveParent,
/*3365*/      OPC_RecordChild2, // #1 = $rs
/*3366*/      OPC_RecordChild3, // #2 = $rt
/*3367*/      OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*3369*/      OPC_EmitMergeInputChains1_0,
/*3370*/      OPC_MorphNodeTo, TARGET_VAL(Mips::MULEU_S_PH_QBR), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:v2i16 1109:iPTR, DSPRegs:v4i8:$rs, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (MULEU_S_PH_QBR:v2i16 DSPRegs:v4i8:$rs, DSPRegs:v2i16:$rt)
/*3379*/    /*Scope*/ 18, /*->3398*/
/*3380*/      OPC_CheckInteger, 86|128,8/*1110*/, 
/*3383*/      OPC_MoveParent,
/*3384*/      OPC_RecordChild2, // #1 = $rs
/*3385*/      OPC_RecordChild3, // #2 = $rt
/*3386*/      OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*3388*/      OPC_EmitMergeInputChains1_0,
/*3389*/      OPC_MorphNodeTo, TARGET_VAL(Mips::MULQ_RS_PH), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:v2i16 1110:iPTR, DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (MULQ_RS_PH:v2i16 DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt)
/*3398*/    /*Scope*/ 18, /*->3417*/
/*3399*/      OPC_CheckInteger, 96|128,8/*1120*/, 
/*3402*/      OPC_MoveParent,
/*3403*/      OPC_RecordChild2, // #1 = $rs
/*3404*/      OPC_RecordChild3, // #2 = $rt
/*3405*/      OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*3407*/      OPC_EmitMergeInputChains1_0,
/*3408*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PICK_QB), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:v4i8 1120:iPTR, DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt) - Complexity = 8
              // Dst: (PICK_QB:v4i8 DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt)
/*3417*/    /*Scope*/ 18, /*->3436*/
/*3418*/      OPC_CheckInteger, 95|128,8/*1119*/, 
/*3421*/      OPC_MoveParent,
/*3422*/      OPC_RecordChild2, // #1 = $rs
/*3423*/      OPC_RecordChild3, // #2 = $rt
/*3424*/      OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*3426*/      OPC_EmitMergeInputChains1_0,
/*3427*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PICK_PH), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:v2i16 1119:iPTR, DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (PICK_PH:v2i16 DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt)
/*3436*/    /*Scope*/ 18, /*->3455*/
/*3437*/      OPC_CheckInteger, 21|128,8/*1045*/, 
/*3440*/      OPC_MoveParent,
/*3441*/      OPC_RecordChild2, // #1 = $rs
/*3442*/      OPC_RecordChild3, // #2 = $rt
/*3443*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*3445*/      OPC_EmitMergeInputChains1_0,
/*3446*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ADDU_PH), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:v2i16 1045:iPTR, DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (ADDU_PH:v2i16 DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt)
/*3455*/    /*Scope*/ 18, /*->3474*/
/*3456*/      OPC_CheckInteger, 23|128,8/*1047*/, 
/*3459*/      OPC_MoveParent,
/*3460*/      OPC_RecordChild2, // #1 = $rs
/*3461*/      OPC_RecordChild3, // #2 = $rt
/*3462*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*3464*/      OPC_EmitMergeInputChains1_0,
/*3465*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ADDU_S_PH), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:v2i16 1047:iPTR, DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (ADDU_S_PH:v2i16 DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt)
/*3474*/    /*Scope*/ 18, /*->3493*/
/*3475*/      OPC_CheckInteger, 10|128,9/*1162*/, 
/*3478*/      OPC_MoveParent,
/*3479*/      OPC_RecordChild2, // #1 = $rs
/*3480*/      OPC_RecordChild3, // #2 = $rt
/*3481*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*3483*/      OPC_EmitMergeInputChains1_0,
/*3484*/      OPC_MorphNodeTo, TARGET_VAL(Mips::SUBU_PH), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:v2i16 1162:iPTR, DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (SUBU_PH:v2i16 DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt)
/*3493*/    /*Scope*/ 18, /*->3512*/
/*3494*/      OPC_CheckInteger, 12|128,9/*1164*/, 
/*3497*/      OPC_MoveParent,
/*3498*/      OPC_RecordChild2, // #1 = $rs
/*3499*/      OPC_RecordChild3, // #2 = $rt
/*3500*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*3502*/      OPC_EmitMergeInputChains1_0,
/*3503*/      OPC_MorphNodeTo, TARGET_VAL(Mips::SUBU_S_PH), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:v2i16 1164:iPTR, DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (SUBU_S_PH:v2i16 DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt)
/*3512*/    /*Scope*/ 16, /*->3529*/
/*3513*/      OPC_CheckInteger, 11|128,8/*1035*/, 
/*3516*/      OPC_MoveParent,
/*3517*/      OPC_RecordChild2, // #1 = $rt
/*3518*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*3520*/      OPC_EmitMergeInputChains1_0,
/*3521*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ABSQ_S_QB), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v4i8, 1/*#Ops*/, 1, 
              // Src: (intrinsic_w_chain:v4i8 1035:iPTR, DSPRegs:v4i8:$rt) - Complexity = 8
              // Dst: (ABSQ_S_QB:v4i8 DSPRegs:v4i8:$rt)
/*3529*/    /*Scope*/ 18, /*->3548*/
/*3530*/      OPC_CheckInteger, 80|128,8/*1104*/, 
/*3533*/      OPC_MoveParent,
/*3534*/      OPC_RecordChild2, // #1 = $rs
/*3535*/      OPC_RecordChild3, // #2 = $rt
/*3536*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*3538*/      OPC_EmitMergeInputChains1_0,
/*3539*/      OPC_MorphNodeTo, TARGET_VAL(Mips::MUL_PH), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:v2i16 1104:iPTR, DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (MUL_PH:v2i16 DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt)
/*3548*/    /*Scope*/ 18, /*->3567*/
/*3549*/      OPC_CheckInteger, 81|128,8/*1105*/, 
/*3552*/      OPC_MoveParent,
/*3553*/      OPC_RecordChild2, // #1 = $rs
/*3554*/      OPC_RecordChild3, // #2 = $rt
/*3555*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*3557*/      OPC_EmitMergeInputChains1_0,
/*3558*/      OPC_MorphNodeTo, TARGET_VAL(Mips::MUL_S_PH), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:v2i16 1105:iPTR, DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (MUL_S_PH:v2i16 DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt)
/*3567*/    /*Scope*/ 18, /*->3586*/
/*3568*/      OPC_CheckInteger, 88|128,8/*1112*/, 
/*3571*/      OPC_MoveParent,
/*3572*/      OPC_RecordChild2, // #1 = $rs
/*3573*/      OPC_RecordChild3, // #2 = $rt
/*3574*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*3576*/      OPC_EmitMergeInputChains1_0,
/*3577*/      OPC_MorphNodeTo, TARGET_VAL(Mips::MULQ_S_PH), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:v2i16 1112:iPTR, DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (MULQ_S_PH:v2i16 DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt)
/*3586*/    /*Scope*/ 18, /*->3605*/
/*3587*/      OPC_CheckInteger, 107|128,8/*1131*/, 
/*3590*/      OPC_MoveParent,
/*3591*/      OPC_RecordChild2, // #1 = $rs
/*3592*/      OPC_RecordChild3, // #2 = $rt
/*3593*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*3595*/      OPC_EmitMergeInputChains1_0,
/*3596*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PRECR_QB_PH), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:v4i8 1131:iPTR, DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (PRECR_QB_PH:v4i8 DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt)
/*3605*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 119|128,7/*1015*/,  TARGET_VAL(ISD::INTRINSIC_WO_CHAIN),// ->4625
/*3610*/    OPC_MoveChild, 0,
/*3612*/    OPC_Scope, 42, /*->3656*/ // 42 children in Scope
/*3614*/      OPC_CheckInteger, 0|128,9/*1152*/, 
/*3617*/      OPC_MoveParent,
/*3618*/      OPC_RecordChild1, // #0 = $rt
/*3619*/      OPC_RecordChild2, // #1 = $rs_sa
/*3620*/      OPC_Scope, 21, /*->3643*/ // 2 children in Scope
/*3622*/        OPC_MoveChild, 2,
/*3624*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3627*/        OPC_CheckPredicate, 21, // Predicate_immZExt5
/*3629*/        OPC_MoveParent,
/*3630*/        OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*3632*/        OPC_EmitConvertToTarget, 1,
/*3634*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SHRA_R_W), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (intrinsic_wo_chain:i32 1152:iPTR, CPURegs:i32:$rt, (imm:i32)<<P:Predicate_immZExt5>>:$rs_sa) - Complexity = 12
                // Dst: (SHRA_R_W:i32 CPURegs:i32:$rt, (imm:i32):$rs_sa)
/*3643*/      /*Scope*/ 11, /*->3655*/
/*3644*/        OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*3646*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SHRAV_R_W), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (intrinsic_wo_chain:i32 1152:iPTR, CPURegs:i32:$rt, CPURegs:i32:$rs_sa) - Complexity = 8
                // Dst: (SHRAV_R_W:i32 CPURegs:i32:$rt, CPURegs:i32:$rs_sa)
/*3655*/      0, /*End of Scope*/
/*3656*/    /*Scope*/ 29, /*->3686*/
/*3657*/      OPC_CheckInteger, 28|128,8/*1052*/, 
/*3660*/      OPC_MoveParent,
/*3661*/      OPC_RecordChild1, // #0 = $src
/*3662*/      OPC_RecordChild2, // #1 = $rs
/*3663*/      OPC_RecordChild3, // #2 = $sa
/*3664*/      OPC_MoveChild, 3,
/*3666*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3669*/      OPC_CheckPredicate, 21, // Predicate_immZExt5
/*3671*/      OPC_MoveParent,
/*3672*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*3674*/      OPC_EmitConvertToTarget, 2,
/*3676*/      OPC_MorphNodeTo, TARGET_VAL(Mips::APPEND), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 3, 0, 
              // Src: (intrinsic_wo_chain:i32 1052:iPTR, CPURegs:i32:$src, CPURegs:i32:$rs, (imm:i32)<<P:Predicate_immZExt5>>:$sa) - Complexity = 12
              // Dst: (APPEND:i32 CPURegs:i32:$rs, (imm:i32):$sa, CPURegs:i32:$src)
/*3686*/    /*Scope*/ 29, /*->3716*/
/*3687*/      OPC_CheckInteger, 29|128,8/*1053*/, 
/*3690*/      OPC_MoveParent,
/*3691*/      OPC_RecordChild1, // #0 = $src
/*3692*/      OPC_RecordChild2, // #1 = $rs
/*3693*/      OPC_RecordChild3, // #2 = $sa
/*3694*/      OPC_MoveChild, 3,
/*3696*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3699*/      OPC_CheckPredicate, 25, // Predicate_immZExt2
/*3701*/      OPC_MoveParent,
/*3702*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*3704*/      OPC_EmitConvertToTarget, 2,
/*3706*/      OPC_MorphNodeTo, TARGET_VAL(Mips::BALIGN), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 3, 0, 
              // Src: (intrinsic_wo_chain:i32 1053:iPTR, CPURegs:i32:$src, CPURegs:i32:$rs, (imm:i32)<<P:Predicate_immZExt2>>:$sa) - Complexity = 12
              // Dst: (BALIGN:i32 CPURegs:i32:$rs, (imm:i32):$sa, CPURegs:i32:$src)
/*3716*/    /*Scope*/ 29, /*->3746*/
/*3717*/      OPC_CheckInteger, 114|128,8/*1138*/, 
/*3720*/      OPC_MoveParent,
/*3721*/      OPC_RecordChild1, // #0 = $src
/*3722*/      OPC_RecordChild2, // #1 = $rs
/*3723*/      OPC_RecordChild3, // #2 = $sa
/*3724*/      OPC_MoveChild, 3,
/*3726*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3729*/      OPC_CheckPredicate, 21, // Predicate_immZExt5
/*3731*/      OPC_MoveParent,
/*3732*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*3734*/      OPC_EmitConvertToTarget, 2,
/*3736*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PREPEND), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 3, 0, 
              // Src: (intrinsic_wo_chain:i32 1138:iPTR, CPURegs:i32:$src, CPURegs:i32:$rs, (imm:i32)<<P:Predicate_immZExt5>>:$sa) - Complexity = 12
              // Dst: (PREPEND:i32 CPURegs:i32:$rs, (imm:i32):$sa, CPURegs:i32:$src)
/*3746*/    /*Scope*/ 17, /*->3764*/
/*3747*/      OPC_CheckInteger, 76|128,8/*1100*/, 
/*3750*/      OPC_MoveParent,
/*3751*/      OPC_RecordChild1, // #0 = $rs
/*3752*/      OPC_RecordChild2, // #1 = $rt
/*3753*/      OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*3755*/      OPC_MorphNodeTo, TARGET_VAL(Mips::MODSUB), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 1100:iPTR, CPURegs:i32:$rs, CPURegs:i32:$rt) - Complexity = 8
              // Dst: (MODSUB:i32 CPURegs:i32:$rs, CPURegs:i32:$rt)
/*3764*/    /*Scope*/ 15, /*->3780*/
/*3765*/      OPC_CheckInteger, 115|128,8/*1139*/, 
/*3768*/      OPC_MoveParent,
/*3769*/      OPC_RecordChild1, // #0 = $rs
/*3770*/      OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*3772*/      OPC_MorphNodeTo, TARGET_VAL(Mips::RADDU_W_QB), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:i32 1139:iPTR, DSPRegs:v4i8:$rs) - Complexity = 8
              // Dst: (RADDU_W_QB:i32 DSPRegs:v4i8:$rs)
/*3780*/    /*Scope*/ 15, /*->3796*/
/*3781*/      OPC_CheckInteger, 97|128,8/*1121*/, 
/*3784*/      OPC_MoveParent,
/*3785*/      OPC_RecordChild1, // #0 = $rt
/*3786*/      OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*3788*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PRECEQ_W_PHL), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:i32 1121:iPTR, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (PRECEQ_W_PHL:i32 DSPRegs:v2i16:$rt)
/*3796*/    /*Scope*/ 15, /*->3812*/
/*3797*/      OPC_CheckInteger, 98|128,8/*1122*/, 
/*3800*/      OPC_MoveParent,
/*3801*/      OPC_RecordChild1, // #0 = $rt
/*3802*/      OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*3804*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PRECEQ_W_PHR), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:i32 1122:iPTR, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (PRECEQ_W_PHR:i32 DSPRegs:v2i16:$rt)
/*3812*/    /*Scope*/ 15, /*->3828*/
/*3813*/      OPC_CheckInteger, 30|128,8/*1054*/, 
/*3816*/      OPC_MoveParent,
/*3817*/      OPC_RecordChild1, // #0 = $rt
/*3818*/      OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*3820*/      OPC_MorphNodeTo, TARGET_VAL(Mips::BITREV), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:i32 1054:iPTR, CPURegs:i32:$rt) - Complexity = 8
              // Dst: (BITREV:i32 CPURegs:i32:$rt)
/*3828*/    /*Scope*/ 17, /*->3846*/
/*3829*/      OPC_CheckInteger, 19|128,8/*1043*/, 
/*3832*/      OPC_MoveParent,
/*3833*/      OPC_RecordChild1, // #0 = $rs
/*3834*/      OPC_RecordChild2, // #1 = $rt
/*3835*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*3837*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ADDQH_W), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 1043:iPTR, CPURegs:i32:$rs, CPURegs:i32:$rt) - Complexity = 8
              // Dst: (ADDQH_W:i32 CPURegs:i32:$rs, CPURegs:i32:$rt)
/*3846*/    /*Scope*/ 17, /*->3864*/
/*3847*/      OPC_CheckInteger, 18|128,8/*1042*/, 
/*3850*/      OPC_MoveParent,
/*3851*/      OPC_RecordChild1, // #0 = $rs
/*3852*/      OPC_RecordChild2, // #1 = $rt
/*3853*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*3855*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ADDQH_R_W), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 1042:iPTR, CPURegs:i32:$rs, CPURegs:i32:$rt) - Complexity = 8
              // Dst: (ADDQH_R_W:i32 CPURegs:i32:$rs, CPURegs:i32:$rt)
/*3864*/    /*Scope*/ 17, /*->3882*/
/*3865*/      OPC_CheckInteger, 9|128,9/*1161*/, 
/*3868*/      OPC_MoveParent,
/*3869*/      OPC_RecordChild1, // #0 = $rs
/*3870*/      OPC_RecordChild2, // #1 = $rt
/*3871*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*3873*/      OPC_MorphNodeTo, TARGET_VAL(Mips::SUBQH_W), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 1161:iPTR, CPURegs:i32:$rs, CPURegs:i32:$rt) - Complexity = 8
              // Dst: (SUBQH_W:i32 CPURegs:i32:$rs, CPURegs:i32:$rt)
/*3882*/    /*Scope*/ 17, /*->3900*/
/*3883*/      OPC_CheckInteger, 8|128,9/*1160*/, 
/*3886*/      OPC_MoveParent,
/*3887*/      OPC_RecordChild1, // #0 = $rs
/*3888*/      OPC_RecordChild2, // #1 = $rt
/*3889*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*3891*/      OPC_MorphNodeTo, TARGET_VAL(Mips::SUBQH_R_W), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 1160:iPTR, CPURegs:i32:$rs, CPURegs:i32:$rt) - Complexity = 8
              // Dst: (SUBQH_R_W:i32 CPURegs:i32:$rs, CPURegs:i32:$rt)
/*3900*/    /*Scope*/ 42, /*->3943*/
/*3901*/      OPC_CheckInteger, 2|128,9/*1154*/, 
/*3904*/      OPC_MoveParent,
/*3905*/      OPC_RecordChild1, // #0 = $rt
/*3906*/      OPC_RecordChild2, // #1 = $rs_sa
/*3907*/      OPC_Scope, 21, /*->3930*/ // 2 children in Scope
/*3909*/        OPC_MoveChild, 2,
/*3911*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3914*/        OPC_CheckPredicate, 23, // Predicate_immZExt3
/*3916*/        OPC_MoveParent,
/*3917*/        OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*3919*/        OPC_EmitConvertToTarget, 1,
/*3921*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SHRL_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 2, 
                // Src: (intrinsic_wo_chain:v4i8 1154:iPTR, DSPRegs:v4i8:$rt, (imm:i32)<<P:Predicate_immZExt3>>:$rs_sa) - Complexity = 12
                // Dst: (SHRL_QB:v4i8 DSPRegs:v4i8:$rt, (imm:i32):$rs_sa)
/*3930*/      /*Scope*/ 11, /*->3942*/
/*3931*/        OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*3933*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SHRLV_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 1, 
                // Src: (intrinsic_wo_chain:v4i8 1154:iPTR, DSPRegs:v4i8:$rt, CPURegs:i32:$rs_sa) - Complexity = 8
                // Dst: (SHRLV_QB:v4i8 DSPRegs:v4i8:$rt, CPURegs:i32:$rs_sa)
/*3942*/      0, /*End of Scope*/
/*3943*/    /*Scope*/ 42, /*->3986*/
/*3944*/      OPC_CheckInteger, 124|128,8/*1148*/, 
/*3947*/      OPC_MoveParent,
/*3948*/      OPC_RecordChild1, // #0 = $rt
/*3949*/      OPC_RecordChild2, // #1 = $rs_sa
/*3950*/      OPC_Scope, 21, /*->3973*/ // 2 children in Scope
/*3952*/        OPC_MoveChild, 2,
/*3954*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3957*/        OPC_CheckPredicate, 24, // Predicate_immZExt4
/*3959*/        OPC_MoveParent,
/*3960*/        OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*3962*/        OPC_EmitConvertToTarget, 1,
/*3964*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SHRA_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 2, 
                // Src: (intrinsic_wo_chain:v2i16 1148:iPTR, DSPRegs:v2i16:$rt, (imm:i32)<<P:Predicate_immZExt4>>:$rs_sa) - Complexity = 12
                // Dst: (SHRA_PH:v2i16 DSPRegs:v2i16:$rt, (imm:i32):$rs_sa)
/*3973*/      /*Scope*/ 11, /*->3985*/
/*3974*/        OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*3976*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SHRAV_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 1, 
                // Src: (intrinsic_wo_chain:v2i16 1148:iPTR, DSPRegs:v2i16:$rt, CPURegs:i32:$rs_sa) - Complexity = 8
                // Dst: (SHRAV_PH:v2i16 DSPRegs:v2i16:$rt, CPURegs:i32:$rs_sa)
/*3985*/      0, /*End of Scope*/
/*3986*/    /*Scope*/ 42, /*->4029*/
/*3987*/      OPC_CheckInteger, 126|128,8/*1150*/, 
/*3990*/      OPC_MoveParent,
/*3991*/      OPC_RecordChild1, // #0 = $rt
/*3992*/      OPC_RecordChild2, // #1 = $rs_sa
/*3993*/      OPC_Scope, 21, /*->4016*/ // 2 children in Scope
/*3995*/        OPC_MoveChild, 2,
/*3997*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4000*/        OPC_CheckPredicate, 24, // Predicate_immZExt4
/*4002*/        OPC_MoveParent,
/*4003*/        OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*4005*/        OPC_EmitConvertToTarget, 1,
/*4007*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SHRA_R_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 2, 
                // Src: (intrinsic_wo_chain:v2i16 1150:iPTR, DSPRegs:v2i16:$rt, (imm:i32)<<P:Predicate_immZExt4>>:$rs_sa) - Complexity = 12
                // Dst: (SHRA_R_PH:v2i16 DSPRegs:v2i16:$rt, (imm:i32):$rs_sa)
/*4016*/      /*Scope*/ 11, /*->4028*/
/*4017*/        OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*4019*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SHRAV_R_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 1, 
                // Src: (intrinsic_wo_chain:v2i16 1150:iPTR, DSPRegs:v2i16:$rt, CPURegs:i32:$rs_sa) - Complexity = 8
                // Dst: (SHRAV_R_PH:v2i16 DSPRegs:v2i16:$rt, CPURegs:i32:$rs_sa)
/*4028*/      0, /*End of Scope*/
/*4029*/    /*Scope*/ 39, /*->4069*/
/*4030*/      OPC_CheckInteger, 118|128,8/*1142*/, 
/*4033*/      OPC_MoveParent,
/*4034*/      OPC_RecordChild1, // #0 = $imm
/*4035*/      OPC_Scope, 20, /*->4057*/ // 2 children in Scope
/*4037*/        OPC_MoveChild, 1,
/*4039*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4042*/        OPC_CheckPredicate, 26, // Predicate_immZExt8
/*4044*/        OPC_MoveParent,
/*4045*/        OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*4047*/        OPC_EmitConvertToTarget, 0,
/*4049*/        OPC_MorphNodeTo, TARGET_VAL(Mips::REPL_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 1/*#Ops*/, 1, 
                // Src: (intrinsic_wo_chain:v4i8 1142:iPTR, (imm:i32)<<P:Predicate_immZExt8>>:$imm) - Complexity = 12
                // Dst: (REPL_QB:v4i8 (imm:i32):$imm)
/*4057*/      /*Scope*/ 10, /*->4068*/
/*4058*/        OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*4060*/        OPC_MorphNodeTo, TARGET_VAL(Mips::REPLV_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 1/*#Ops*/, 0, 
                // Src: (intrinsic_wo_chain:v4i8 1142:iPTR, CPURegs:i32:$rt) - Complexity = 8
                // Dst: (REPLV_QB:v4i8 CPURegs:i32:$rt)
/*4068*/      0, /*End of Scope*/
/*4069*/    /*Scope*/ 39, /*->4109*/
/*4070*/      OPC_CheckInteger, 117|128,8/*1141*/, 
/*4073*/      OPC_MoveParent,
/*4074*/      OPC_RecordChild1, // #0 = $imm
/*4075*/      OPC_Scope, 20, /*->4097*/ // 2 children in Scope
/*4077*/        OPC_MoveChild, 1,
/*4079*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4082*/        OPC_CheckPredicate, 22, // Predicate_immZExt10
/*4084*/        OPC_MoveParent,
/*4085*/        OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*4087*/        OPC_EmitConvertToTarget, 0,
/*4089*/        OPC_MorphNodeTo, TARGET_VAL(Mips::REPL_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 1/*#Ops*/, 1, 
                // Src: (intrinsic_wo_chain:v2i16 1141:iPTR, (imm:i32)<<P:Predicate_immZExt10>>:$imm) - Complexity = 12
                // Dst: (REPL_PH:v2i16 (imm:i32):$imm)
/*4097*/      /*Scope*/ 10, /*->4108*/
/*4098*/        OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*4100*/        OPC_MorphNodeTo, TARGET_VAL(Mips::REPLV_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 1/*#Ops*/, 0, 
                // Src: (intrinsic_wo_chain:v2i16 1141:iPTR, CPURegs:i32:$rt) - Complexity = 8
                // Dst: (REPLV_PH:v2i16 CPURegs:i32:$rt)
/*4108*/      0, /*End of Scope*/
/*4109*/    /*Scope*/ 29, /*->4139*/
/*4110*/      OPC_CheckInteger, 108|128,8/*1132*/, 
/*4113*/      OPC_MoveParent,
/*4114*/      OPC_RecordChild1, // #0 = $src
/*4115*/      OPC_RecordChild2, // #1 = $rs
/*4116*/      OPC_RecordChild3, // #2 = $sa
/*4117*/      OPC_MoveChild, 3,
/*4119*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4122*/      OPC_CheckPredicate, 21, // Predicate_immZExt5
/*4124*/      OPC_MoveParent,
/*4125*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*4127*/      OPC_EmitConvertToTarget, 2,
/*4129*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PRECR_SRA_PH_W), 0,
                  1/*#VTs*/, MVT::v2i16, 3/*#Ops*/, 1, 3, 0, 
              // Src: (intrinsic_wo_chain:v2i16 1132:iPTR, CPURegs:i32:$src, CPURegs:i32:$rs, (imm:i32)<<P:Predicate_immZExt5>>:$sa) - Complexity = 12
              // Dst: (PRECR_SRA_PH_W:v2i16 CPURegs:i32:$rs, (imm:i32):$sa, CPURegs:i32:$src)
/*4139*/    /*Scope*/ 29, /*->4169*/
/*4140*/      OPC_CheckInteger, 109|128,8/*1133*/, 
/*4143*/      OPC_MoveParent,
/*4144*/      OPC_RecordChild1, // #0 = $src
/*4145*/      OPC_RecordChild2, // #1 = $rs
/*4146*/      OPC_RecordChild3, // #2 = $sa
/*4147*/      OPC_MoveChild, 3,
/*4149*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4152*/      OPC_CheckPredicate, 21, // Predicate_immZExt5
/*4154*/      OPC_MoveParent,
/*4155*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*4157*/      OPC_EmitConvertToTarget, 2,
/*4159*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PRECR_SRA_R_PH_W), 0,
                  1/*#VTs*/, MVT::v2i16, 3/*#Ops*/, 1, 3, 0, 
              // Src: (intrinsic_wo_chain:v2i16 1133:iPTR, CPURegs:i32:$src, CPURegs:i32:$rs, (imm:i32)<<P:Predicate_immZExt5>>:$sa) - Complexity = 12
              // Dst: (PRECR_SRA_R_PH_W:v2i16 CPURegs:i32:$rs, (imm:i32):$sa, CPURegs:i32:$src)
/*4169*/    /*Scope*/ 42, /*->4212*/
/*4170*/      OPC_CheckInteger, 125|128,8/*1149*/, 
/*4173*/      OPC_MoveParent,
/*4174*/      OPC_RecordChild1, // #0 = $rt
/*4175*/      OPC_RecordChild2, // #1 = $rs_sa
/*4176*/      OPC_Scope, 21, /*->4199*/ // 2 children in Scope
/*4178*/        OPC_MoveChild, 2,
/*4180*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4183*/        OPC_CheckPredicate, 23, // Predicate_immZExt3
/*4185*/        OPC_MoveParent,
/*4186*/        OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*4188*/        OPC_EmitConvertToTarget, 1,
/*4190*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SHRA_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 2, 
                // Src: (intrinsic_wo_chain:v4i8 1149:iPTR, DSPRegs:v4i8:$rt, (imm:i32)<<P:Predicate_immZExt3>>:$rs_sa) - Complexity = 12
                // Dst: (SHRA_QB:v4i8 DSPRegs:v4i8:$rt, (imm:i32):$rs_sa)
/*4199*/      /*Scope*/ 11, /*->4211*/
/*4200*/        OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*4202*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SHRAV_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 1, 
                // Src: (intrinsic_wo_chain:v4i8 1149:iPTR, DSPRegs:v4i8:$rt, CPURegs:i32:$rs_sa) - Complexity = 8
                // Dst: (SHRAV_QB:v4i8 DSPRegs:v4i8:$rt, CPURegs:i32:$rs_sa)
/*4211*/      0, /*End of Scope*/
/*4212*/    /*Scope*/ 42, /*->4255*/
/*4213*/      OPC_CheckInteger, 127|128,8/*1151*/, 
/*4216*/      OPC_MoveParent,
/*4217*/      OPC_RecordChild1, // #0 = $rt
/*4218*/      OPC_RecordChild2, // #1 = $rs_sa
/*4219*/      OPC_Scope, 21, /*->4242*/ // 2 children in Scope
/*4221*/        OPC_MoveChild, 2,
/*4223*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4226*/        OPC_CheckPredicate, 23, // Predicate_immZExt3
/*4228*/        OPC_MoveParent,
/*4229*/        OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*4231*/        OPC_EmitConvertToTarget, 1,
/*4233*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SHRA_R_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 2, 
                // Src: (intrinsic_wo_chain:v4i8 1151:iPTR, DSPRegs:v4i8:$rt, (imm:i32)<<P:Predicate_immZExt3>>:$rs_sa) - Complexity = 12
                // Dst: (SHRA_R_QB:v4i8 DSPRegs:v4i8:$rt, (imm:i32):$rs_sa)
/*4242*/      /*Scope*/ 11, /*->4254*/
/*4243*/        OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*4245*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SHRAV_R_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 1, 
                // Src: (intrinsic_wo_chain:v4i8 1151:iPTR, DSPRegs:v4i8:$rt, CPURegs:i32:$rs_sa) - Complexity = 8
                // Dst: (SHRAV_R_QB:v4i8 DSPRegs:v4i8:$rt, CPURegs:i32:$rs_sa)
/*4254*/      0, /*End of Scope*/
/*4255*/    /*Scope*/ 42, /*->4298*/
/*4256*/      OPC_CheckInteger, 1|128,9/*1153*/, 
/*4259*/      OPC_MoveParent,
/*4260*/      OPC_RecordChild1, // #0 = $rt
/*4261*/      OPC_RecordChild2, // #1 = $rs_sa
/*4262*/      OPC_Scope, 21, /*->4285*/ // 2 children in Scope
/*4264*/        OPC_MoveChild, 2,
/*4266*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4269*/        OPC_CheckPredicate, 24, // Predicate_immZExt4
/*4271*/        OPC_MoveParent,
/*4272*/        OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*4274*/        OPC_EmitConvertToTarget, 1,
/*4276*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SHRL_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 2, 
                // Src: (intrinsic_wo_chain:v2i16 1153:iPTR, DSPRegs:v2i16:$rt, (imm:i32)<<P:Predicate_immZExt4>>:$rs_sa) - Complexity = 12
                // Dst: (SHRL_PH:v2i16 DSPRegs:v2i16:$rt, (imm:i32):$rs_sa)
/*4285*/      /*Scope*/ 11, /*->4297*/
/*4286*/        OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*4288*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SHRLV_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 1, 
                // Src: (intrinsic_wo_chain:v2i16 1153:iPTR, DSPRegs:v2i16:$rt, CPURegs:i32:$rs_sa) - Complexity = 8
                // Dst: (SHRLV_PH:v2i16 DSPRegs:v2i16:$rt, CPURegs:i32:$rs_sa)
/*4297*/      0, /*End of Scope*/
/*4298*/    /*Scope*/ 17, /*->4316*/
/*4299*/      OPC_CheckInteger, 111|128,8/*1135*/, 
/*4302*/      OPC_MoveParent,
/*4303*/      OPC_RecordChild1, // #0 = $rs
/*4304*/      OPC_RecordChild2, // #1 = $rt
/*4305*/      OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*4307*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PRECRQ_QB_PH), 0,
                  1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i8 1135:iPTR, DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (PRECRQ_QB_PH:v4i8 DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt)
/*4316*/    /*Scope*/ 17, /*->4334*/
/*4317*/      OPC_CheckInteger, 110|128,8/*1134*/, 
/*4320*/      OPC_MoveParent,
/*4321*/      OPC_RecordChild1, // #0 = $rs
/*4322*/      OPC_RecordChild2, // #1 = $rt
/*4323*/      OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*4325*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PRECRQ_PH_W), 0,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v2i16 1134:iPTR, CPURegs:i32:$rs, CPURegs:i32:$rt) - Complexity = 8
              // Dst: (PRECRQ_PH_W:v2i16 CPURegs:i32:$rs, CPURegs:i32:$rt)
/*4334*/    /*Scope*/ 15, /*->4350*/
/*4335*/      OPC_CheckInteger, 99|128,8/*1123*/, 
/*4338*/      OPC_MoveParent,
/*4339*/      OPC_RecordChild1, // #0 = $rt
/*4340*/      OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*4342*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PRECEQU_PH_QBL), 0,
                  1/*#VTs*/, MVT::v2i16, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v2i16 1123:iPTR, DSPRegs:v4i8:$rt) - Complexity = 8
              // Dst: (PRECEQU_PH_QBL:v2i16 DSPRegs:v4i8:$rt)
/*4350*/    /*Scope*/ 15, /*->4366*/
/*4351*/      OPC_CheckInteger, 101|128,8/*1125*/, 
/*4354*/      OPC_MoveParent,
/*4355*/      OPC_RecordChild1, // #0 = $rt
/*4356*/      OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*4358*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PRECEQU_PH_QBR), 0,
                  1/*#VTs*/, MVT::v2i16, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v2i16 1125:iPTR, DSPRegs:v4i8:$rt) - Complexity = 8
              // Dst: (PRECEQU_PH_QBR:v2i16 DSPRegs:v4i8:$rt)
/*4366*/    /*Scope*/ 15, /*->4382*/
/*4367*/      OPC_CheckInteger, 100|128,8/*1124*/, 
/*4370*/      OPC_MoveParent,
/*4371*/      OPC_RecordChild1, // #0 = $rt
/*4372*/      OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*4374*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PRECEQU_PH_QBLA), 0,
                  1/*#VTs*/, MVT::v2i16, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v2i16 1124:iPTR, DSPRegs:v4i8:$rt) - Complexity = 8
              // Dst: (PRECEQU_PH_QBLA:v2i16 DSPRegs:v4i8:$rt)
/*4382*/    /*Scope*/ 15, /*->4398*/
/*4383*/      OPC_CheckInteger, 102|128,8/*1126*/, 
/*4386*/      OPC_MoveParent,
/*4387*/      OPC_RecordChild1, // #0 = $rt
/*4388*/      OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*4390*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PRECEQU_PH_QBRA), 0,
                  1/*#VTs*/, MVT::v2i16, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v2i16 1126:iPTR, DSPRegs:v4i8:$rt) - Complexity = 8
              // Dst: (PRECEQU_PH_QBRA:v2i16 DSPRegs:v4i8:$rt)
/*4398*/    /*Scope*/ 15, /*->4414*/
/*4399*/      OPC_CheckInteger, 103|128,8/*1127*/, 
/*4402*/      OPC_MoveParent,
/*4403*/      OPC_RecordChild1, // #0 = $rt
/*4404*/      OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*4406*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PRECEU_PH_QBL), 0,
                  1/*#VTs*/, MVT::v2i16, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v2i16 1127:iPTR, DSPRegs:v4i8:$rt) - Complexity = 8
              // Dst: (PRECEU_PH_QBL:v2i16 DSPRegs:v4i8:$rt)
/*4414*/    /*Scope*/ 15, /*->4430*/
/*4415*/      OPC_CheckInteger, 105|128,8/*1129*/, 
/*4418*/      OPC_MoveParent,
/*4419*/      OPC_RecordChild1, // #0 = $rt
/*4420*/      OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*4422*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PRECEU_PH_QBR), 0,
                  1/*#VTs*/, MVT::v2i16, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v2i16 1129:iPTR, DSPRegs:v4i8:$rt) - Complexity = 8
              // Dst: (PRECEU_PH_QBR:v2i16 DSPRegs:v4i8:$rt)
/*4430*/    /*Scope*/ 15, /*->4446*/
/*4431*/      OPC_CheckInteger, 104|128,8/*1128*/, 
/*4434*/      OPC_MoveParent,
/*4435*/      OPC_RecordChild1, // #0 = $rt
/*4436*/      OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*4438*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PRECEU_PH_QBLA), 0,
                  1/*#VTs*/, MVT::v2i16, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v2i16 1128:iPTR, DSPRegs:v4i8:$rt) - Complexity = 8
              // Dst: (PRECEU_PH_QBLA:v2i16 DSPRegs:v4i8:$rt)
/*4446*/    /*Scope*/ 15, /*->4462*/
/*4447*/      OPC_CheckInteger, 106|128,8/*1130*/, 
/*4450*/      OPC_MoveParent,
/*4451*/      OPC_RecordChild1, // #0 = $rt
/*4452*/      OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*4454*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PRECEU_PH_QBRA), 0,
                  1/*#VTs*/, MVT::v2i16, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v2i16 1130:iPTR, DSPRegs:v4i8:$rt) - Complexity = 8
              // Dst: (PRECEU_PH_QBRA:v2i16 DSPRegs:v4i8:$rt)
/*4462*/    /*Scope*/ 17, /*->4480*/
/*4463*/      OPC_CheckInteger, 94|128,8/*1118*/, 
/*4466*/      OPC_MoveParent,
/*4467*/      OPC_RecordChild1, // #0 = $rs
/*4468*/      OPC_RecordChild2, // #1 = $rt
/*4469*/      OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*4471*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PACKRL_PH), 0,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v2i16 1118:iPTR, DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (PACKRL_PH:v2i16 DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt)
/*4480*/    /*Scope*/ 17, /*->4498*/
/*4481*/      OPC_CheckInteger, 25|128,8/*1049*/, 
/*4484*/      OPC_MoveParent,
/*4485*/      OPC_RecordChild1, // #0 = $rs
/*4486*/      OPC_RecordChild2, // #1 = $rt
/*4487*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*4489*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ADDUH_QB), 0,
                  1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i8 1049:iPTR, DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt) - Complexity = 8
              // Dst: (ADDUH_QB:v4i8 DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt)
/*4498*/    /*Scope*/ 17, /*->4516*/
/*4499*/      OPC_CheckInteger, 26|128,8/*1050*/, 
/*4502*/      OPC_MoveParent,
/*4503*/      OPC_RecordChild1, // #0 = $rs
/*4504*/      OPC_RecordChild2, // #1 = $rt
/*4505*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*4507*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ADDUH_R_QB), 0,
                  1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i8 1050:iPTR, DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt) - Complexity = 8
              // Dst: (ADDUH_R_QB:v4i8 DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt)
/*4516*/    /*Scope*/ 17, /*->4534*/
/*4517*/      OPC_CheckInteger, 14|128,9/*1166*/, 
/*4520*/      OPC_MoveParent,
/*4521*/      OPC_RecordChild1, // #0 = $rs
/*4522*/      OPC_RecordChild2, // #1 = $rt
/*4523*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*4525*/      OPC_MorphNodeTo, TARGET_VAL(Mips::SUBUH_QB), 0,
                  1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i8 1166:iPTR, DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt) - Complexity = 8
              // Dst: (SUBUH_QB:v4i8 DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt)
/*4534*/    /*Scope*/ 17, /*->4552*/
/*4535*/      OPC_CheckInteger, 15|128,9/*1167*/, 
/*4538*/      OPC_MoveParent,
/*4539*/      OPC_RecordChild1, // #0 = $rs
/*4540*/      OPC_RecordChild2, // #1 = $rt
/*4541*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*4543*/      OPC_MorphNodeTo, TARGET_VAL(Mips::SUBUH_R_QB), 0,
                  1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i8 1167:iPTR, DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt) - Complexity = 8
              // Dst: (SUBUH_R_QB:v4i8 DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt)
/*4552*/    /*Scope*/ 17, /*->4570*/
/*4553*/      OPC_CheckInteger, 16|128,8/*1040*/, 
/*4556*/      OPC_MoveParent,
/*4557*/      OPC_RecordChild1, // #0 = $rs
/*4558*/      OPC_RecordChild2, // #1 = $rt
/*4559*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*4561*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ADDQH_PH), 0,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v2i16 1040:iPTR, DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (ADDQH_PH:v2i16 DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt)
/*4570*/    /*Scope*/ 17, /*->4588*/
/*4571*/      OPC_CheckInteger, 17|128,8/*1041*/, 
/*4574*/      OPC_MoveParent,
/*4575*/      OPC_RecordChild1, // #0 = $rs
/*4576*/      OPC_RecordChild2, // #1 = $rt
/*4577*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*4579*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ADDQH_R_PH), 0,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v2i16 1041:iPTR, DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (ADDQH_R_PH:v2i16 DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt)
/*4588*/    /*Scope*/ 17, /*->4606*/
/*4589*/      OPC_CheckInteger, 6|128,9/*1158*/, 
/*4592*/      OPC_MoveParent,
/*4593*/      OPC_RecordChild1, // #0 = $rs
/*4594*/      OPC_RecordChild2, // #1 = $rt
/*4595*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*4597*/      OPC_MorphNodeTo, TARGET_VAL(Mips::SUBQH_PH), 0,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v2i16 1158:iPTR, DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (SUBQH_PH:v2i16 DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt)
/*4606*/    /*Scope*/ 17, /*->4624*/
/*4607*/      OPC_CheckInteger, 7|128,9/*1159*/, 
/*4610*/      OPC_MoveParent,
/*4611*/      OPC_RecordChild1, // #0 = $rs
/*4612*/      OPC_RecordChild2, // #1 = $rt
/*4613*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*4615*/      OPC_MorphNodeTo, TARGET_VAL(Mips::SUBQH_R_PH), 0,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v2i16 1159:iPTR, DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (SUBQH_R_PH:v2i16 DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt)
/*4624*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 13|128,1/*141*/,  TARGET_VAL(ISD::INTRINSIC_VOID),// ->4770
/*4629*/    OPC_RecordNode,   // #0 = 'intrinsic_void' chained node
/*4630*/    OPC_MoveChild, 1,
/*4632*/    OPC_Scope, 27, /*->4661*/ // 7 children in Scope
/*4634*/      OPC_CheckInteger, 16|128,9/*1168*/, 
/*4637*/      OPC_MoveParent,
/*4638*/      OPC_RecordChild2, // #1 = $rs
/*4639*/      OPC_RecordChild3, // #2 = $mask
/*4640*/      OPC_MoveChild, 3,
/*4642*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4645*/      OPC_CheckPredicate, 22, // Predicate_immZExt10
/*4647*/      OPC_MoveParent,
/*4648*/      OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*4650*/      OPC_EmitMergeInputChains1_0,
/*4651*/      OPC_EmitConvertToTarget, 2,
/*4653*/      OPC_MorphNodeTo, TARGET_VAL(Mips::WRDSP), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 1, 3, 
              // Src: (intrinsic_void 1168:iPTR, CPURegs:i32:$rs, (imm:i32)<<P:Predicate_immZExt10>>:$mask) - Complexity = 12
              // Dst: (WRDSP CPURegs:i32:$rs, (imm:i32):$mask)
/*4661*/    /*Scope*/ 17, /*->4679*/
/*4662*/      OPC_CheckInteger, 41|128,8/*1065*/, 
/*4665*/      OPC_MoveParent,
/*4666*/      OPC_RecordChild2, // #1 = $rs
/*4667*/      OPC_RecordChild3, // #2 = $rt
/*4668*/      OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*4670*/      OPC_EmitMergeInputChains1_0,
/*4671*/      OPC_MorphNodeTo, TARGET_VAL(Mips::CMPU_EQ_QB), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_void 1065:iPTR, DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt) - Complexity = 8
              // Dst: (CMPU_EQ_QB DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt)
/*4679*/    /*Scope*/ 17, /*->4697*/
/*4680*/      OPC_CheckInteger, 43|128,8/*1067*/, 
/*4683*/      OPC_MoveParent,
/*4684*/      OPC_RecordChild2, // #1 = $rs
/*4685*/      OPC_RecordChild3, // #2 = $rt
/*4686*/      OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*4688*/      OPC_EmitMergeInputChains1_0,
/*4689*/      OPC_MorphNodeTo, TARGET_VAL(Mips::CMPU_LT_QB), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_void 1067:iPTR, DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt) - Complexity = 8
              // Dst: (CMPU_LT_QB DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt)
/*4697*/    /*Scope*/ 17, /*->4715*/
/*4698*/      OPC_CheckInteger, 42|128,8/*1066*/, 
/*4701*/      OPC_MoveParent,
/*4702*/      OPC_RecordChild2, // #1 = $rs
/*4703*/      OPC_RecordChild3, // #2 = $rt
/*4704*/      OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*4706*/      OPC_EmitMergeInputChains1_0,
/*4707*/      OPC_MorphNodeTo, TARGET_VAL(Mips::CMPU_LE_QB), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_void 1066:iPTR, DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt) - Complexity = 8
              // Dst: (CMPU_LE_QB DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt)
/*4715*/    /*Scope*/ 17, /*->4733*/
/*4716*/      OPC_CheckInteger, 32|128,8/*1056*/, 
/*4719*/      OPC_MoveParent,
/*4720*/      OPC_RecordChild2, // #1 = $rs
/*4721*/      OPC_RecordChild3, // #2 = $rt
/*4722*/      OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*4724*/      OPC_EmitMergeInputChains1_0,
/*4725*/      OPC_MorphNodeTo, TARGET_VAL(Mips::CMP_EQ_PH), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_void 1056:iPTR, DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (CMP_EQ_PH DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt)
/*4733*/    /*Scope*/ 17, /*->4751*/
/*4734*/      OPC_CheckInteger, 34|128,8/*1058*/, 
/*4737*/      OPC_MoveParent,
/*4738*/      OPC_RecordChild2, // #1 = $rs
/*4739*/      OPC_RecordChild3, // #2 = $rt
/*4740*/      OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*4742*/      OPC_EmitMergeInputChains1_0,
/*4743*/      OPC_MorphNodeTo, TARGET_VAL(Mips::CMP_LT_PH), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_void 1058:iPTR, DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (CMP_LT_PH DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt)
/*4751*/    /*Scope*/ 17, /*->4769*/
/*4752*/      OPC_CheckInteger, 33|128,8/*1057*/, 
/*4755*/      OPC_MoveParent,
/*4756*/      OPC_RecordChild2, // #1 = $rs
/*4757*/      OPC_RecordChild3, // #2 = $rt
/*4758*/      OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*4760*/      OPC_EmitMergeInputChains1_0,
/*4761*/      OPC_MorphNodeTo, TARGET_VAL(Mips::CMP_LE_PH), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_void 1057:iPTR, DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (CMP_LE_PH DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt)
/*4769*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 69|128,1/*197*/,  TARGET_VAL(ISD::XOR),// ->4971
/*4774*/    OPC_Scope, 50, /*->4826*/ // 2 children in Scope
/*4776*/      OPC_MoveChild, 0,
/*4778*/      OPC_CheckOpcode, TARGET_VAL(ISD::OR),
/*4781*/      OPC_RecordChild0, // #0 = $rs
/*4782*/      OPC_RecordChild1, // #1 = $rt
/*4783*/      OPC_MoveParent,
/*4784*/      OPC_MoveChild, 1,
/*4786*/      OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*4797*/      OPC_MoveParent,
/*4798*/      OPC_SwitchType /*2 cases */, 11,  MVT::i32,// ->4812
/*4801*/        OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*4803*/        OPC_MorphNodeTo, TARGET_VAL(Mips::NOR), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (xor:i32 (or:i32 CPURegs:i32:$rs, CPURegs:i32:$rt), -1:i32) - Complexity = 11
                // Dst: (NOR:i32 CPURegs:i32:$rs, CPURegs:i32:$rt)
              /*SwitchType*/ 11,  MVT::i64,// ->4825
/*4814*/        OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*4816*/        OPC_MorphNodeTo, TARGET_VAL(Mips::NOR64), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (xor:i64 (or:i64 CPU64Regs:i64:$rs, CPU64Regs:i64:$rt), -1:i64) - Complexity = 11
                // Dst: (NOR64:i64 CPU64Regs:i64:$rs, CPU64Regs:i64:$rt)
              0, // EndSwitchType
/*4826*/    /*Scope*/ 14|128,1/*142*/, /*->4970*/
/*4828*/      OPC_RecordChild0, // #0 = $in
/*4829*/      OPC_Scope, 44, /*->4875*/ // 2 children in Scope
/*4831*/        OPC_MoveChild, 1,
/*4833*/        OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*4844*/        OPC_MoveParent,
/*4845*/        OPC_CheckType, MVT::i32,
/*4847*/        OPC_Scope, 14, /*->4863*/ // 2 children in Scope
/*4849*/          OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*4851*/          OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*4854*/          OPC_MorphNodeTo, TARGET_VAL(Mips::NOR), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (xor:i32 CPURegs:i32:$in, -1:i32) - Complexity = 8
                  // Dst: (NOR:i32 CPURegs:i32:$in, ZERO:i32)
/*4863*/        /*Scope*/ 10, /*->4874*/
/*4864*/          OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*4866*/          OPC_MorphNodeTo, TARGET_VAL(Mips::NotRxRy16), 0,
                      1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                  // Src: (xor:i32 CPU16Regs:i32:$r, -1:i32) - Complexity = 8
                  // Dst: (NotRxRy16:i32 CPU16Regs:i32:$r)
/*4874*/        0, /*End of Scope*/
/*4875*/      /*Scope*/ 93, /*->4969*/
/*4876*/        OPC_RecordChild1, // #1 = $imm16
/*4877*/        OPC_Scope, 46, /*->4925*/ // 3 children in Scope
/*4879*/          OPC_MoveChild, 1,
/*4881*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4884*/          OPC_CheckPredicate, 27, // Predicate_immZExt16
/*4886*/          OPC_MoveParent,
/*4887*/          OPC_SwitchType /*2 cases */, 16,  MVT::i32,// ->4906
/*4890*/            OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*4892*/            OPC_EmitConvertToTarget, 1,
/*4894*/            OPC_EmitNodeXForm, 0, 2, // LO16
/*4897*/            OPC_MorphNodeTo, TARGET_VAL(Mips::XORi), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (xor:i32 CPURegs:i32:$rs, (imm:i32)<<P:Predicate_immZExt16>><<X:LO16>>:$imm16) - Complexity = 7
                    // Dst: (XORi:i32 CPURegs:i32:$rs, (LO16:i32 (imm:i32):$imm16))
                  /*SwitchType*/ 16,  MVT::i64,// ->4924
/*4908*/            OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*4910*/            OPC_EmitConvertToTarget, 1,
/*4912*/            OPC_EmitNodeXForm, 0, 2, // LO16
/*4915*/            OPC_MorphNodeTo, TARGET_VAL(Mips::XORi64), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                    // Src: (xor:i64 CPU64Regs:i64:$rs, (imm:i64)<<P:Predicate_immZExt16>><<X:LO16>>:$imm16) - Complexity = 7
                    // Dst: (XORi64:i64 CPU64Regs:i64:$rs, (LO16:i64 (imm:i64):$imm16))
                  0, // EndSwitchType
/*4925*/        /*Scope*/ 28, /*->4954*/
/*4926*/          OPC_CheckType, MVT::i32,
/*4928*/          OPC_Scope, 11, /*->4941*/ // 2 children in Scope
/*4930*/            OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*4932*/            OPC_MorphNodeTo, TARGET_VAL(Mips::XOR), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (xor:i32 CPURegs:i32:$rs, CPURegs:i32:$rt) - Complexity = 3
                    // Dst: (XOR:i32 CPURegs:i32:$rs, CPURegs:i32:$rt)
/*4941*/          /*Scope*/ 11, /*->4953*/
/*4942*/            OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*4944*/            OPC_MorphNodeTo, TARGET_VAL(Mips::XorRxRxRy16), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (xor:i32 CPU16Regs:i32:$l, CPU16Regs:i32:$r) - Complexity = 3
                    // Dst: (XorRxRxRy16:i32 CPU16Regs:i32:$l, CPU16Regs:i32:$r)
/*4953*/          0, /*End of Scope*/
/*4954*/        /*Scope*/ 13, /*->4968*/
/*4955*/          OPC_CheckType, MVT::i64,
/*4957*/          OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*4959*/          OPC_MorphNodeTo, TARGET_VAL(Mips::XOR64), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                  // Src: (xor:i64 CPU64Regs:i64:$rs, CPU64Regs:i64:$rt) - Complexity = 3
                  // Dst: (XOR64:i64 CPU64Regs:i64:$rs, CPU64Regs:i64:$rt)
/*4968*/        0, /*End of Scope*/
/*4969*/      0, /*End of Scope*/
/*4970*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 78,  TARGET_VAL(ISD::CTLZ),// ->5052
/*4974*/    OPC_Scope, 47, /*->5023*/ // 2 children in Scope
/*4976*/      OPC_MoveChild, 0,
/*4978*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*4981*/      OPC_RecordChild0, // #0 = $rs
/*4982*/      OPC_MoveChild, 1,
/*4984*/      OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*4995*/      OPC_MoveParent,
/*4996*/      OPC_MoveParent,
/*4997*/      OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->5010
/*5000*/        OPC_CheckPatternPredicate, 11, // (Subtarget.hasBitCount()) && (Subtarget.hasStandardEncoding())
/*5002*/        OPC_MorphNodeTo, TARGET_VAL(Mips::CLO), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (ctlz:i32 (xor:i32 CPURegs:i32:$rs, -1:i32)) - Complexity = 11
                // Dst: (CLO:i32 CPURegs:i32:$rs)
              /*SwitchType*/ 10,  MVT::i64,// ->5022
/*5012*/        OPC_CheckPatternPredicate, 11, // (Subtarget.hasBitCount()) && (Subtarget.hasStandardEncoding())
/*5014*/        OPC_MorphNodeTo, TARGET_VAL(Mips::DCLO), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (ctlz:i64 (xor:i64 CPU64Regs:i64:$rs, -1:i64)) - Complexity = 11
                // Dst: (DCLO:i64 CPU64Regs:i64:$rs)
              0, // EndSwitchType
/*5023*/    /*Scope*/ 27, /*->5051*/
/*5024*/      OPC_RecordChild0, // #0 = $rs
/*5025*/      OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->5038
/*5028*/        OPC_CheckPatternPredicate, 11, // (Subtarget.hasBitCount()) && (Subtarget.hasStandardEncoding())
/*5030*/        OPC_MorphNodeTo, TARGET_VAL(Mips::CLZ), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (ctlz:i32 CPURegs:i32:$rs) - Complexity = 3
                // Dst: (CLZ:i32 CPURegs:i32:$rs)
              /*SwitchType*/ 10,  MVT::i64,// ->5050
/*5040*/        OPC_CheckPatternPredicate, 11, // (Subtarget.hasBitCount()) && (Subtarget.hasStandardEncoding())
/*5042*/        OPC_MorphNodeTo, TARGET_VAL(Mips::DCLZ), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (ctlz:i64 CPU64Regs:i64:$rs) - Complexity = 3
                // Dst: (DCLZ:i64 CPU64Regs:i64:$rs)
              0, // EndSwitchType
/*5051*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 111|128,27/*3567*/,  TARGET_VAL(ISD::SELECT),// ->8623
/*5056*/    OPC_Scope, 96|128,13/*1760*/, /*->6819*/ // 4 children in Scope
/*5059*/      OPC_MoveChild, 0,
/*5061*/      OPC_CheckOpcode, TARGET_VAL(ISD::SETCC),
/*5064*/      OPC_RecordChild0, // #0 = $lhs
/*5065*/      OPC_Scope, 31|128,8/*1055*/, /*->6123*/ // 2 children in Scope
/*5068*/        OPC_CheckChild0Type, MVT::i32,
/*5070*/        OPC_Scope, 5|128,1/*133*/, /*->5206*/ // 2 children in Scope
/*5073*/          OPC_MoveChild, 1,
/*5075*/          OPC_CheckInteger, 0, 
/*5077*/          OPC_MoveParent,
/*5078*/          OPC_MoveChild, 2,
/*5080*/          OPC_Scope, 38, /*->5120*/ // 4 children in Scope
/*5082*/            OPC_CheckCondCode, ISD::SETEQ,
/*5084*/            OPC_MoveParent,
/*5085*/            OPC_CheckType, MVT::i32,
/*5087*/            OPC_MoveParent,
/*5088*/            OPC_RecordChild1, // #1 = $T
/*5089*/            OPC_RecordChild2, // #2 = $F
/*5090*/            OPC_SwitchType /*2 cases */, 12,  MVT::i32,// ->5105
/*5093*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*5095*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I), 0,
                          1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 0, 2, 
                      // Src: (select:i32 (setcc:i32 CPURegs:i32:$lhs, 0:i32, SETEQ:Other), CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 11
                      // Dst: (MOVZ_I_I:i32 CPURegs:i32:$T, CPURegs:i32:$lhs, CPURegs:i32:$F)
                    /*SwitchType*/ 12,  MVT::i64,// ->5119
/*5107*/              OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*5109*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I64), 0,
                          1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 0, 2, 
                      // Src: (select:i64 (setcc:i32 CPURegs:i32:$lhs, 0:i32, SETEQ:Other), CPU64Regs:i64:$T, CPU64Regs:i64:$F) - Complexity = 11
                      // Dst: (MOVZ_I_I64:i64 CPU64Regs:i64:$T, CPURegs:i32:$lhs, CPU64Regs:i64:$F)
                    0, // EndSwitchType
/*5120*/          /*Scope*/ 38, /*->5159*/
/*5121*/            OPC_CheckCondCode, ISD::SETNE,
/*5123*/            OPC_MoveParent,
/*5124*/            OPC_CheckType, MVT::i32,
/*5126*/            OPC_MoveParent,
/*5127*/            OPC_RecordChild1, // #1 = $T
/*5128*/            OPC_RecordChild2, // #2 = $F
/*5129*/            OPC_SwitchType /*2 cases */, 12,  MVT::i32,// ->5144
/*5132*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*5134*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I_I), 0,
                          1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 0, 2, 
                      // Src: (select:i32 (setcc:i32 CPURegs:i32:$lhs, 0:i32, SETNE:Other), CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 11
                      // Dst: (MOVN_I_I:i32 CPURegs:i32:$T, CPURegs:i32:$lhs, CPURegs:i32:$F)
                    /*SwitchType*/ 12,  MVT::i64,// ->5158
/*5146*/              OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*5148*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I_I64), 0,
                          1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 0, 2, 
                      // Src: (select:i64 (setcc:i32 CPURegs:i32:$lhs, 0:i32, SETNE:Other), CPU64Regs:i64:$T, CPU64Regs:i64:$F) - Complexity = 11
                      // Dst: (MOVN_I_I64:i64 CPU64Regs:i64:$T, CPURegs:i32:$lhs, CPU64Regs:i64:$F)
                    0, // EndSwitchType
/*5159*/          /*Scope*/ 22, /*->5182*/
/*5160*/            OPC_CheckCondCode, ISD::SETEQ,
/*5162*/            OPC_MoveParent,
/*5163*/            OPC_CheckType, MVT::i32,
/*5165*/            OPC_MoveParent,
/*5166*/            OPC_RecordChild1, // #1 = $x
/*5167*/            OPC_RecordChild2, // #2 = $y
/*5168*/            OPC_CheckType, MVT::i32,
/*5170*/            OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*5172*/            OPC_MorphNodeTo, TARGET_VAL(Mips::SelBeqZ), 0,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 2, 0, 
                    // Src: (select:i32 (setcc:i32 CPU16Regs:i32:$a, 0:i32, SETEQ:Other), CPU16Regs:i32:$x, CPU16Regs:i32:$y) - Complexity = 11
                    // Dst: (SelBeqZ:i32 CPU16Regs:i32:$x, CPU16Regs:i32:$y, CPU16Regs:i32:$a)
/*5182*/          /*Scope*/ 22, /*->5205*/
/*5183*/            OPC_CheckCondCode, ISD::SETNE,
/*5185*/            OPC_MoveParent,
/*5186*/            OPC_CheckType, MVT::i32,
/*5188*/            OPC_MoveParent,
/*5189*/            OPC_RecordChild1, // #1 = $x
/*5190*/            OPC_RecordChild2, // #2 = $y
/*5191*/            OPC_CheckType, MVT::i32,
/*5193*/            OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*5195*/            OPC_MorphNodeTo, TARGET_VAL(Mips::SelBneZ), 0,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 2, 0, 
                    // Src: (select:i32 (setcc:i32 CPU16Regs:i32:$a, 0:i32, SETNE:Other), CPU16Regs:i32:$x, CPU16Regs:i32:$y) - Complexity = 11
                    // Dst: (SelBneZ:i32 CPU16Regs:i32:$x, CPU16Regs:i32:$y, CPU16Regs:i32:$a)
/*5205*/          0, /*End of Scope*/
/*5206*/        /*Scope*/ 18|128,7/*914*/, /*->6122*/
/*5208*/          OPC_RecordChild1, // #1 = $b
/*5209*/          OPC_Scope, 78|128,2/*334*/, /*->5546*/ // 2 children in Scope
/*5212*/            OPC_MoveChild, 1,
/*5214*/            OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*5217*/            OPC_Scope, 30, /*->5249*/ // 6 children in Scope
/*5219*/              OPC_CheckPredicate, 28, // Predicate_immSExt16
/*5221*/              OPC_MoveParent,
/*5222*/              OPC_MoveChild, 2,
/*5224*/              OPC_CheckCondCode, ISD::SETLT,
/*5226*/              OPC_MoveParent,
/*5227*/              OPC_CheckType, MVT::i32,
/*5229*/              OPC_MoveParent,
/*5230*/              OPC_RecordChild1, // #2 = $x
/*5231*/              OPC_RecordChild2, // #3 = $y
/*5232*/              OPC_CheckType, MVT::i32,
/*5234*/              OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*5236*/              OPC_EmitConvertToTarget, 1,
/*5238*/              OPC_MorphNodeTo, TARGET_VAL(Mips::SelTBtneZSlti), 0,
                          1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 0, 4, 
                      // Src: (select:i32 (setcc:i32 CPU16Regs:i32:$a, (imm:i32)<<P:Predicate_immSExt16>>:$b, SETLT:Other), CPU16Regs:i32:$x, CPU16Regs:i32:$y) - Complexity = 10
                      // Dst: (SelTBtneZSlti:i32 CPU16Regs:i32:$x, CPU16Regs:i32:$y, CPU16Regs:i32:$a, (imm:i32)<<P:Predicate_immSExt16>>:$b)
/*5249*/            /*Scope*/ 65, /*->5315*/
/*5250*/              OPC_CheckPredicate, 27, // Predicate_immZExt16
/*5252*/              OPC_MoveParent,
/*5253*/              OPC_MoveChild, 2,
/*5255*/              OPC_Scope, 28, /*->5285*/ // 2 children in Scope
/*5257*/                OPC_CheckCondCode, ISD::SETEQ,
/*5259*/                OPC_MoveParent,
/*5260*/                OPC_CheckType, MVT::i32,
/*5262*/                OPC_MoveParent,
/*5263*/                OPC_RecordChild1, // #2 = $x
/*5264*/                OPC_RecordChild2, // #3 = $y
/*5265*/                OPC_CheckType, MVT::i32,
/*5267*/                OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*5269*/                OPC_EmitConvertToTarget, 1,
/*5271*/                OPC_EmitNodeXForm, 0, 4, // LO16
/*5274*/                OPC_MorphNodeTo, TARGET_VAL(Mips::SelTBteqZCmpi), 0,
                            1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 0, 5, 
                        // Src: (select:i32 (setcc:i32 CPU16Regs:i32:$a, (imm:i32)<<P:Predicate_immZExt16>><<X:LO16>>:$k, SETEQ:Other), CPU16Regs:i32:$x, CPU16Regs:i32:$y) - Complexity = 10
                        // Dst: (SelTBteqZCmpi:i32 CPU16Regs:i32:$x, CPU16Regs:i32:$y, CPU16Regs:i32:$a, (LO16:i32 (imm:i32)<<P:Predicate_immZExt16>>:$k))
/*5285*/              /*Scope*/ 28, /*->5314*/
/*5286*/                OPC_CheckCondCode, ISD::SETNE,
/*5288*/                OPC_MoveParent,
/*5289*/                OPC_CheckType, MVT::i32,
/*5291*/                OPC_MoveParent,
/*5292*/                OPC_RecordChild1, // #2 = $x
/*5293*/                OPC_RecordChild2, // #3 = $y
/*5294*/                OPC_CheckType, MVT::i32,
/*5296*/                OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*5298*/                OPC_EmitConvertToTarget, 1,
/*5300*/                OPC_EmitNodeXForm, 0, 4, // LO16
/*5303*/                OPC_MorphNodeTo, TARGET_VAL(Mips::SelTBtneZCmpi), 0,
                            1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 0, 5, 
                        // Src: (select:i32 (setcc:i32 CPU16Regs:i32:$a, (imm:i32)<<P:Predicate_immZExt16>><<X:LO16>>:$k, SETNE:Other), CPU16Regs:i32:$x, CPU16Regs:i32:$y) - Complexity = 10
                        // Dst: (SelTBtneZCmpi:i32 CPU16Regs:i32:$x, CPU16Regs:i32:$y, CPU16Regs:i32:$a, (LO16:i32 (imm:i32)<<P:Predicate_immZExt16>>:$k))
/*5314*/              0, /*End of Scope*/
/*5315*/            /*Scope*/ 75, /*->5391*/
/*5316*/              OPC_CheckPredicate, 28, // Predicate_immSExt16
/*5318*/              OPC_MoveParent,
/*5319*/              OPC_MoveChild, 2,
/*5321*/              OPC_Scope, 33, /*->5356*/ // 2 children in Scope
/*5323*/                OPC_CheckCondCode, ISD::SETGE,
/*5325*/                OPC_MoveParent,
/*5326*/                OPC_CheckType, MVT::i32,
/*5328*/                OPC_MoveParent,
/*5329*/                OPC_RecordChild1, // #2 = $T
/*5330*/                OPC_RecordChild2, // #3 = $F
/*5331*/                OPC_CheckType, MVT::i32,
/*5333*/                OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*5335*/                OPC_EmitConvertToTarget, 1,
/*5337*/                OPC_EmitNode, TARGET_VAL(Mips::SLTi), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5
/*5346*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I), 0,
                            1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 5, 3, 
                        // Src: (select:i32 (setcc:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs, SETGE:Other), CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 10
                        // Dst: (MOVZ_I_I:i32 CPURegs:i32:$T, (SLTi:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs), CPURegs:i32:$F)
/*5356*/              /*Scope*/ 33, /*->5390*/
/*5357*/                OPC_CheckCondCode, ISD::SETUGE,
/*5359*/                OPC_MoveParent,
/*5360*/                OPC_CheckType, MVT::i32,
/*5362*/                OPC_MoveParent,
/*5363*/                OPC_RecordChild1, // #2 = $T
/*5364*/                OPC_RecordChild2, // #3 = $F
/*5365*/                OPC_CheckType, MVT::i32,
/*5367*/                OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*5369*/                OPC_EmitConvertToTarget, 1,
/*5371*/                OPC_EmitNode, TARGET_VAL(Mips::SLTiu), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5
/*5380*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I), 0,
                            1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 5, 3, 
                        // Src: (select:i32 (setcc:i32 CPURegs:i32:$lh, (imm:i32)<<P:Predicate_immSExt16>>:$rh, SETUGE:Other), CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 10
                        // Dst: (MOVZ_I_I:i32 CPURegs:i32:$T, (SLTiu:i32 CPURegs:i32:$lh, (imm:i32)<<P:Predicate_immSExt16>>:$rh), CPURegs:i32:$F)
/*5390*/              0, /*End of Scope*/
/*5391*/            /*Scope*/ 38, /*->5430*/
/*5392*/              OPC_CheckPredicate, 27, // Predicate_immZExt16
/*5394*/              OPC_MoveParent,
/*5395*/              OPC_MoveChild, 2,
/*5397*/              OPC_CheckCondCode, ISD::SETEQ,
/*5399*/              OPC_MoveParent,
/*5400*/              OPC_CheckType, MVT::i32,
/*5402*/              OPC_MoveParent,
/*5403*/              OPC_RecordChild1, // #2 = $T
/*5404*/              OPC_RecordChild2, // #3 = $F
/*5405*/              OPC_CheckType, MVT::i32,
/*5407*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*5409*/              OPC_EmitConvertToTarget, 1,
/*5411*/              OPC_EmitNode, TARGET_VAL(Mips::XORi), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5
/*5420*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I), 0,
                          1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 5, 3, 
                      // Src: (select:i32 (setcc:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immZExt16>><<X:LO16>>:$uimm16, SETEQ:Other), CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 10
                      // Dst: (MOVZ_I_I:i32 CPURegs:i32:$T, (XORi:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immZExt16>><<X:LO16>>:$uimm16), CPURegs:i32:$F)
/*5430*/            /*Scope*/ 75, /*->5506*/
/*5431*/              OPC_CheckPredicate, 28, // Predicate_immSExt16
/*5433*/              OPC_MoveParent,
/*5434*/              OPC_MoveChild, 2,
/*5436*/              OPC_Scope, 33, /*->5471*/ // 2 children in Scope
/*5438*/                OPC_CheckCondCode, ISD::SETGE,
/*5440*/                OPC_MoveParent,
/*5441*/                OPC_CheckType, MVT::i32,
/*5443*/                OPC_MoveParent,
/*5444*/                OPC_RecordChild1, // #2 = $T
/*5445*/                OPC_RecordChild2, // #3 = $F
/*5446*/                OPC_CheckType, MVT::i64,
/*5448*/                OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*5450*/                OPC_EmitConvertToTarget, 1,
/*5452*/                OPC_EmitNode, TARGET_VAL(Mips::SLTi), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5
/*5461*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I64), 0,
                            1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 5, 3, 
                        // Src: (select:i64 (setcc:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs, SETGE:Other), CPU64Regs:i64:$T, CPU64Regs:i64:$F) - Complexity = 10
                        // Dst: (MOVZ_I_I64:i64 CPU64Regs:i64:$T, (SLTi:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs), CPU64Regs:i64:$F)
/*5471*/              /*Scope*/ 33, /*->5505*/
/*5472*/                OPC_CheckCondCode, ISD::SETUGE,
/*5474*/                OPC_MoveParent,
/*5475*/                OPC_CheckType, MVT::i32,
/*5477*/                OPC_MoveParent,
/*5478*/                OPC_RecordChild1, // #2 = $T
/*5479*/                OPC_RecordChild2, // #3 = $F
/*5480*/                OPC_CheckType, MVT::i64,
/*5482*/                OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*5484*/                OPC_EmitConvertToTarget, 1,
/*5486*/                OPC_EmitNode, TARGET_VAL(Mips::SLTiu), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5
/*5495*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I64), 0,
                            1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 5, 3, 
                        // Src: (select:i64 (setcc:i32 CPURegs:i32:$lh, (imm:i32)<<P:Predicate_immSExt16>>:$rh, SETUGE:Other), CPU64Regs:i64:$T, CPU64Regs:i64:$F) - Complexity = 10
                        // Dst: (MOVZ_I_I64:i64 CPU64Regs:i64:$T, (SLTiu:i32 CPURegs:i32:$lh, (imm:i32)<<P:Predicate_immSExt16>>:$rh), CPU64Regs:i64:$F)
/*5505*/              0, /*End of Scope*/
/*5506*/            /*Scope*/ 38, /*->5545*/
/*5507*/              OPC_CheckPredicate, 27, // Predicate_immZExt16
/*5509*/              OPC_MoveParent,
/*5510*/              OPC_MoveChild, 2,
/*5512*/              OPC_CheckCondCode, ISD::SETEQ,
/*5514*/              OPC_MoveParent,
/*5515*/              OPC_CheckType, MVT::i32,
/*5517*/              OPC_MoveParent,
/*5518*/              OPC_RecordChild1, // #2 = $T
/*5519*/              OPC_RecordChild2, // #3 = $F
/*5520*/              OPC_CheckType, MVT::i64,
/*5522*/              OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*5524*/              OPC_EmitConvertToTarget, 1,
/*5526*/              OPC_EmitNode, TARGET_VAL(Mips::XORi), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5
/*5535*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I64), 0,
                          1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 5, 3, 
                      // Src: (select:i64 (setcc:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immZExt16>><<X:LO16>>:$uimm16, SETEQ:Other), CPU64Regs:i64:$T, CPU64Regs:i64:$F) - Complexity = 10
                      // Dst: (MOVZ_I_I64:i64 CPU64Regs:i64:$T, (XORi:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immZExt16>><<X:LO16>>:$uimm16), CPU64Regs:i64:$F)
/*5545*/            0, /*End of Scope*/
/*5546*/          /*Scope*/ 61|128,4/*573*/, /*->6121*/
/*5548*/            OPC_MoveChild, 2,
/*5550*/            OPC_Scope, 23, /*->5575*/ // 19 children in Scope
/*5552*/              OPC_CheckCondCode, ISD::SETGE,
/*5554*/              OPC_MoveParent,
/*5555*/              OPC_CheckType, MVT::i32,
/*5557*/              OPC_MoveParent,
/*5558*/              OPC_RecordChild1, // #2 = $x
/*5559*/              OPC_RecordChild2, // #3 = $y
/*5560*/              OPC_CheckType, MVT::i32,
/*5562*/              OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*5564*/              OPC_MorphNodeTo, TARGET_VAL(Mips::SelTBteqZSlt), 0,
                          1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 0, 1, 
                      // Src: (select:i32 (setcc:i32 CPU16Regs:i32:$a, CPU16Regs:i32:$b, SETGE:Other), CPU16Regs:i32:$x, CPU16Regs:i32:$y) - Complexity = 6
                      // Dst: (SelTBteqZSlt:i32 CPU16Regs:i32:$x, CPU16Regs:i32:$y, CPU16Regs:i32:$a, CPU16Regs:i32:$b)
/*5575*/            /*Scope*/ 23, /*->5599*/
/*5576*/              OPC_CheckCondCode, ISD::SETGT,
/*5578*/              OPC_MoveParent,
/*5579*/              OPC_CheckType, MVT::i32,
/*5581*/              OPC_MoveParent,
/*5582*/              OPC_RecordChild1, // #2 = $x
/*5583*/              OPC_RecordChild2, // #3 = $y
/*5584*/              OPC_CheckType, MVT::i32,
/*5586*/              OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*5588*/              OPC_MorphNodeTo, TARGET_VAL(Mips::SelTBtneZSlt), 0,
                          1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 1, 0, 
                      // Src: (select:i32 (setcc:i32 CPU16Regs:i32:$a, CPU16Regs:i32:$b, SETGT:Other), CPU16Regs:i32:$x, CPU16Regs:i32:$y) - Complexity = 6
                      // Dst: (SelTBtneZSlt:i32 CPU16Regs:i32:$x, CPU16Regs:i32:$y, CPU16Regs:i32:$b, CPU16Regs:i32:$a)
/*5599*/            /*Scope*/ 23, /*->5623*/
/*5600*/              OPC_CheckCondCode, ISD::SETUGE,
/*5602*/              OPC_MoveParent,
/*5603*/              OPC_CheckType, MVT::i32,
/*5605*/              OPC_MoveParent,
/*5606*/              OPC_RecordChild1, // #2 = $x
/*5607*/              OPC_RecordChild2, // #3 = $y
/*5608*/              OPC_CheckType, MVT::i32,
/*5610*/              OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*5612*/              OPC_MorphNodeTo, TARGET_VAL(Mips::SelTBteqZSltu), 0,
                          1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 0, 1, 
                      // Src: (select:i32 (setcc:i32 CPU16Regs:i32:$a, CPU16Regs:i32:$b, SETUGE:Other), CPU16Regs:i32:$x, CPU16Regs:i32:$y) - Complexity = 6
                      // Dst: (SelTBteqZSltu:i32 CPU16Regs:i32:$x, CPU16Regs:i32:$y, CPU16Regs:i32:$a, CPU16Regs:i32:$b)
/*5623*/            /*Scope*/ 23, /*->5647*/
/*5624*/              OPC_CheckCondCode, ISD::SETUGT,
/*5626*/              OPC_MoveParent,
/*5627*/              OPC_CheckType, MVT::i32,
/*5629*/              OPC_MoveParent,
/*5630*/              OPC_RecordChild1, // #2 = $x
/*5631*/              OPC_RecordChild2, // #3 = $y
/*5632*/              OPC_CheckType, MVT::i32,
/*5634*/              OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*5636*/              OPC_MorphNodeTo, TARGET_VAL(Mips::SelTBtneZSltu), 0,
                          1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 1, 0, 
                      // Src: (select:i32 (setcc:i32 CPU16Regs:i32:$a, CPU16Regs:i32:$b, SETUGT:Other), CPU16Regs:i32:$x, CPU16Regs:i32:$y) - Complexity = 6
                      // Dst: (SelTBtneZSltu:i32 CPU16Regs:i32:$x, CPU16Regs:i32:$y, CPU16Regs:i32:$b, CPU16Regs:i32:$a)
/*5647*/            /*Scope*/ 23, /*->5671*/
/*5648*/              OPC_CheckCondCode, ISD::SETLE,
/*5650*/              OPC_MoveParent,
/*5651*/              OPC_CheckType, MVT::i32,
/*5653*/              OPC_MoveParent,
/*5654*/              OPC_RecordChild1, // #2 = $x
/*5655*/              OPC_RecordChild2, // #3 = $y
/*5656*/              OPC_CheckType, MVT::i32,
/*5658*/              OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*5660*/              OPC_MorphNodeTo, TARGET_VAL(Mips::SelTBteqZSlt), 0,
                          1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 1, 0, 
                      // Src: (select:i32 (setcc:i32 CPU16Regs:i32:$a, CPU16Regs:i32:$b, SETLE:Other), CPU16Regs:i32:$x, CPU16Regs:i32:$y) - Complexity = 6
                      // Dst: (SelTBteqZSlt:i32 CPU16Regs:i32:$x, CPU16Regs:i32:$y, CPU16Regs:i32:$b, CPU16Regs:i32:$a)
/*5671*/            /*Scope*/ 23, /*->5695*/
/*5672*/              OPC_CheckCondCode, ISD::SETULE,
/*5674*/              OPC_MoveParent,
/*5675*/              OPC_CheckType, MVT::i32,
/*5677*/              OPC_MoveParent,
/*5678*/              OPC_RecordChild1, // #2 = $x
/*5679*/              OPC_RecordChild2, // #3 = $y
/*5680*/              OPC_CheckType, MVT::i32,
/*5682*/              OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*5684*/              OPC_MorphNodeTo, TARGET_VAL(Mips::SelTBteqZSltu), 0,
                          1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 1, 0, 
                      // Src: (select:i32 (setcc:i32 CPU16Regs:i32:$a, CPU16Regs:i32:$b, SETULE:Other), CPU16Regs:i32:$x, CPU16Regs:i32:$y) - Complexity = 6
                      // Dst: (SelTBteqZSltu:i32 CPU16Regs:i32:$x, CPU16Regs:i32:$y, CPU16Regs:i32:$b, CPU16Regs:i32:$a)
/*5695*/            /*Scope*/ 23, /*->5719*/
/*5696*/              OPC_CheckCondCode, ISD::SETEQ,
/*5698*/              OPC_MoveParent,
/*5699*/              OPC_CheckType, MVT::i32,
/*5701*/              OPC_MoveParent,
/*5702*/              OPC_RecordChild1, // #2 = $x
/*5703*/              OPC_RecordChild2, // #3 = $y
/*5704*/              OPC_CheckType, MVT::i32,
/*5706*/              OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*5708*/              OPC_MorphNodeTo, TARGET_VAL(Mips::SelTBteqZCmp), 0,
                          1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 1, 0, 
                      // Src: (select:i32 (setcc:i32 CPU16Regs:i32:$a, CPU16Regs:i32:$b, SETEQ:Other), CPU16Regs:i32:$x, CPU16Regs:i32:$y) - Complexity = 6
                      // Dst: (SelTBteqZCmp:i32 CPU16Regs:i32:$x, CPU16Regs:i32:$y, CPU16Regs:i32:$b, CPU16Regs:i32:$a)
/*5719*/            /*Scope*/ 23, /*->5743*/
/*5720*/              OPC_CheckCondCode, ISD::SETNE,
/*5722*/              OPC_MoveParent,
/*5723*/              OPC_CheckType, MVT::i32,
/*5725*/              OPC_MoveParent,
/*5726*/              OPC_RecordChild1, // #2 = $x
/*5727*/              OPC_RecordChild2, // #3 = $y
/*5728*/              OPC_CheckType, MVT::i32,
/*5730*/              OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*5732*/              OPC_MorphNodeTo, TARGET_VAL(Mips::SelTBtneZCmp), 0,
                          1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 1, 0, 
                      // Src: (select:i32 (setcc:i32 CPU16Regs:i32:$a, CPU16Regs:i32:$b, SETNE:Other), CPU16Regs:i32:$x, CPU16Regs:i32:$y) - Complexity = 6
                      // Dst: (SelTBtneZCmp:i32 CPU16Regs:i32:$x, CPU16Regs:i32:$y, CPU16Regs:i32:$b, CPU16Regs:i32:$a)
/*5743*/            /*Scope*/ 31, /*->5775*/
/*5744*/              OPC_CheckCondCode, ISD::SETGE,
/*5746*/              OPC_MoveParent,
/*5747*/              OPC_CheckType, MVT::i32,
/*5749*/              OPC_MoveParent,
/*5750*/              OPC_RecordChild1, // #2 = $T
/*5751*/              OPC_RecordChild2, // #3 = $F
/*5752*/              OPC_CheckType, MVT::i32,
/*5754*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*5756*/              OPC_EmitNode, TARGET_VAL(Mips::SLT), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*5765*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I), 0,
                          1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:i32 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETGE:Other), CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 6
                      // Dst: (MOVZ_I_I:i32 CPURegs:i32:$T, (SLT:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), CPURegs:i32:$F)
/*5775*/            /*Scope*/ 31, /*->5807*/
/*5776*/              OPC_CheckCondCode, ISD::SETUGE,
/*5778*/              OPC_MoveParent,
/*5779*/              OPC_CheckType, MVT::i32,
/*5781*/              OPC_MoveParent,
/*5782*/              OPC_RecordChild1, // #2 = $T
/*5783*/              OPC_RecordChild2, // #3 = $F
/*5784*/              OPC_CheckType, MVT::i32,
/*5786*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*5788*/              OPC_EmitNode, TARGET_VAL(Mips::SLTu), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*5797*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I), 0,
                          1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:i32 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETUGE:Other), CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 6
                      // Dst: (MOVZ_I_I:i32 CPURegs:i32:$T, (SLTu:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), CPURegs:i32:$F)
/*5807*/            /*Scope*/ 31, /*->5839*/
/*5808*/              OPC_CheckCondCode, ISD::SETLE,
/*5810*/              OPC_MoveParent,
/*5811*/              OPC_CheckType, MVT::i32,
/*5813*/              OPC_MoveParent,
/*5814*/              OPC_RecordChild1, // #2 = $T
/*5815*/              OPC_RecordChild2, // #3 = $F
/*5816*/              OPC_CheckType, MVT::i32,
/*5818*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*5820*/              OPC_EmitNode, TARGET_VAL(Mips::SLT), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4
/*5829*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I), 0,
                          1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:i32 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETLE:Other), CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 6
                      // Dst: (MOVZ_I_I:i32 CPURegs:i32:$T, (SLT:i32 CPURegs:i32:$rhs, CPURegs:i32:$lhs), CPURegs:i32:$F)
/*5839*/            /*Scope*/ 31, /*->5871*/
/*5840*/              OPC_CheckCondCode, ISD::SETULE,
/*5842*/              OPC_MoveParent,
/*5843*/              OPC_CheckType, MVT::i32,
/*5845*/              OPC_MoveParent,
/*5846*/              OPC_RecordChild1, // #2 = $T
/*5847*/              OPC_RecordChild2, // #3 = $F
/*5848*/              OPC_CheckType, MVT::i32,
/*5850*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*5852*/              OPC_EmitNode, TARGET_VAL(Mips::SLTu), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4
/*5861*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I), 0,
                          1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:i32 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETULE:Other), CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 6
                      // Dst: (MOVZ_I_I:i32 CPURegs:i32:$T, (SLTu:i32 CPURegs:i32:$rhs, CPURegs:i32:$lhs), CPURegs:i32:$F)
/*5871*/            /*Scope*/ 31, /*->5903*/
/*5872*/              OPC_CheckCondCode, ISD::SETEQ,
/*5874*/              OPC_MoveParent,
/*5875*/              OPC_CheckType, MVT::i32,
/*5877*/              OPC_MoveParent,
/*5878*/              OPC_RecordChild1, // #2 = $T
/*5879*/              OPC_RecordChild2, // #3 = $F
/*5880*/              OPC_CheckType, MVT::i32,
/*5882*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*5884*/              OPC_EmitNode, TARGET_VAL(Mips::XOR), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*5893*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I), 0,
                          1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:i32 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETEQ:Other), CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 6
                      // Dst: (MOVZ_I_I:i32 CPURegs:i32:$T, (XOR:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), CPURegs:i32:$F)
/*5903*/            /*Scope*/ 31, /*->5935*/
/*5904*/              OPC_CheckCondCode, ISD::SETGE,
/*5906*/              OPC_MoveParent,
/*5907*/              OPC_CheckType, MVT::i32,
/*5909*/              OPC_MoveParent,
/*5910*/              OPC_RecordChild1, // #2 = $T
/*5911*/              OPC_RecordChild2, // #3 = $F
/*5912*/              OPC_CheckType, MVT::i64,
/*5914*/              OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*5916*/              OPC_EmitNode, TARGET_VAL(Mips::SLT), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*5925*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I64), 0,
                          1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:i64 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETGE:Other), CPU64Regs:i64:$T, CPU64Regs:i64:$F) - Complexity = 6
                      // Dst: (MOVZ_I_I64:i64 CPU64Regs:i64:$T, (SLT:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), CPU64Regs:i64:$F)
/*5935*/            /*Scope*/ 31, /*->5967*/
/*5936*/              OPC_CheckCondCode, ISD::SETUGE,
/*5938*/              OPC_MoveParent,
/*5939*/              OPC_CheckType, MVT::i32,
/*5941*/              OPC_MoveParent,
/*5942*/              OPC_RecordChild1, // #2 = $T
/*5943*/              OPC_RecordChild2, // #3 = $F
/*5944*/              OPC_CheckType, MVT::i64,
/*5946*/              OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*5948*/              OPC_EmitNode, TARGET_VAL(Mips::SLTu), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*5957*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I64), 0,
                          1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:i64 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETUGE:Other), CPU64Regs:i64:$T, CPU64Regs:i64:$F) - Complexity = 6
                      // Dst: (MOVZ_I_I64:i64 CPU64Regs:i64:$T, (SLTu:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), CPU64Regs:i64:$F)
/*5967*/            /*Scope*/ 31, /*->5999*/
/*5968*/              OPC_CheckCondCode, ISD::SETLE,
/*5970*/              OPC_MoveParent,
/*5971*/              OPC_CheckType, MVT::i32,
/*5973*/              OPC_MoveParent,
/*5974*/              OPC_RecordChild1, // #2 = $T
/*5975*/              OPC_RecordChild2, // #3 = $F
/*5976*/              OPC_CheckType, MVT::i64,
/*5978*/              OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*5980*/              OPC_EmitNode, TARGET_VAL(Mips::SLT), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4
/*5989*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I64), 0,
                          1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:i64 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETLE:Other), CPU64Regs:i64:$T, CPU64Regs:i64:$F) - Complexity = 6
                      // Dst: (MOVZ_I_I64:i64 CPU64Regs:i64:$T, (SLT:i32 CPURegs:i32:$rhs, CPURegs:i32:$lhs), CPU64Regs:i64:$F)
/*5999*/            /*Scope*/ 31, /*->6031*/
/*6000*/              OPC_CheckCondCode, ISD::SETULE,
/*6002*/              OPC_MoveParent,
/*6003*/              OPC_CheckType, MVT::i32,
/*6005*/              OPC_MoveParent,
/*6006*/              OPC_RecordChild1, // #2 = $T
/*6007*/              OPC_RecordChild2, // #3 = $F
/*6008*/              OPC_CheckType, MVT::i64,
/*6010*/              OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*6012*/              OPC_EmitNode, TARGET_VAL(Mips::SLTu), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4
/*6021*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I64), 0,
                          1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:i64 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETULE:Other), CPU64Regs:i64:$T, CPU64Regs:i64:$F) - Complexity = 6
                      // Dst: (MOVZ_I_I64:i64 CPU64Regs:i64:$T, (SLTu:i32 CPURegs:i32:$rhs, CPURegs:i32:$lhs), CPU64Regs:i64:$F)
/*6031*/            /*Scope*/ 31, /*->6063*/
/*6032*/              OPC_CheckCondCode, ISD::SETEQ,
/*6034*/              OPC_MoveParent,
/*6035*/              OPC_CheckType, MVT::i32,
/*6037*/              OPC_MoveParent,
/*6038*/              OPC_RecordChild1, // #2 = $T
/*6039*/              OPC_RecordChild2, // #3 = $F
/*6040*/              OPC_CheckType, MVT::i64,
/*6042*/              OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*6044*/              OPC_EmitNode, TARGET_VAL(Mips::XOR), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*6053*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I64), 0,
                          1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:i64 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETEQ:Other), CPU64Regs:i64:$T, CPU64Regs:i64:$F) - Complexity = 6
                      // Dst: (MOVZ_I_I64:i64 CPU64Regs:i64:$T, (XOR:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), CPU64Regs:i64:$F)
/*6063*/            /*Scope*/ 56, /*->6120*/
/*6064*/              OPC_CheckCondCode, ISD::SETNE,
/*6066*/              OPC_MoveParent,
/*6067*/              OPC_CheckType, MVT::i32,
/*6069*/              OPC_MoveParent,
/*6070*/              OPC_RecordChild1, // #2 = $T
/*6071*/              OPC_RecordChild2, // #3 = $F
/*6072*/              OPC_SwitchType /*2 cases */, 21,  MVT::i32,// ->6096
/*6075*/                OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*6077*/                OPC_EmitNode, TARGET_VAL(Mips::XOR), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*6086*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I_I), 0,
                            1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 4, 3, 
                        // Src: (select:i32 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETNE:Other), CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 6
                        // Dst: (MOVN_I_I:i32 CPURegs:i32:$T, (XOR:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), CPURegs:i32:$F)
                      /*SwitchType*/ 21,  MVT::i64,// ->6119
/*6098*/                OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*6100*/                OPC_EmitNode, TARGET_VAL(Mips::XOR), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*6109*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I_I64), 0,
                            1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 4, 3, 
                        // Src: (select:i64 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETNE:Other), CPU64Regs:i64:$T, CPU64Regs:i64:$F) - Complexity = 6
                        // Dst: (MOVN_I_I64:i64 CPU64Regs:i64:$T, (XOR:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), CPU64Regs:i64:$F)
                      0, // EndSwitchType
/*6120*/            0, /*End of Scope*/
/*6121*/          0, /*End of Scope*/
/*6122*/        0, /*End of Scope*/
/*6123*/      /*Scope*/ 53|128,5/*693*/, /*->6818*/
/*6125*/        OPC_CheckChild0Type, MVT::i64,
/*6127*/        OPC_Scope, 87, /*->6216*/ // 2 children in Scope
/*6129*/          OPC_MoveChild, 1,
/*6131*/          OPC_CheckInteger, 0, 
/*6133*/          OPC_MoveParent,
/*6134*/          OPC_MoveChild, 2,
/*6136*/          OPC_Scope, 38, /*->6176*/ // 2 children in Scope
/*6138*/            OPC_CheckCondCode, ISD::SETEQ,
/*6140*/            OPC_MoveParent,
/*6141*/            OPC_CheckType, MVT::i32,
/*6143*/            OPC_MoveParent,
/*6144*/            OPC_RecordChild1, // #1 = $T
/*6145*/            OPC_RecordChild2, // #2 = $F
/*6146*/            OPC_SwitchType /*2 cases */, 12,  MVT::i32,// ->6161
/*6149*/              OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*6151*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I64_I), 0,
                          1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 0, 2, 
                      // Src: (select:i32 (setcc:i32 CPU64Regs:i64:$lhs, 0:i64, SETEQ:Other), CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 11
                      // Dst: (MOVZ_I64_I:i32 CPURegs:i32:$T, CPU64Regs:i64:$lhs, CPURegs:i32:$F)
                    /*SwitchType*/ 12,  MVT::i64,// ->6175
/*6163*/              OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*6165*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I64_I64), 0,
                          1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 0, 2, 
                      // Src: (select:i64 (setcc:i32 CPU64Regs:i64:$lhs, 0:i64, SETEQ:Other), CPU64Regs:i64:$T, CPU64Regs:i64:$F) - Complexity = 11
                      // Dst: (MOVZ_I64_I64:i64 CPU64Regs:i64:$T, CPU64Regs:i64:$lhs, CPU64Regs:i64:$F)
                    0, // EndSwitchType
/*6176*/          /*Scope*/ 38, /*->6215*/
/*6177*/            OPC_CheckCondCode, ISD::SETNE,
/*6179*/            OPC_MoveParent,
/*6180*/            OPC_CheckType, MVT::i32,
/*6182*/            OPC_MoveParent,
/*6183*/            OPC_RecordChild1, // #1 = $T
/*6184*/            OPC_RecordChild2, // #2 = $F
/*6185*/            OPC_SwitchType /*2 cases */, 12,  MVT::i32,// ->6200
/*6188*/              OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*6190*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I64_I), 0,
                          1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 0, 2, 
                      // Src: (select:i32 (setcc:i32 CPU64Regs:i64:$lhs, 0:i64, SETNE:Other), CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 11
                      // Dst: (MOVN_I64_I:i32 CPURegs:i32:$T, CPU64Regs:i64:$lhs, CPURegs:i32:$F)
                    /*SwitchType*/ 12,  MVT::i64,// ->6214
/*6202*/              OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*6204*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I64_I64), 0,
                          1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 0, 2, 
                      // Src: (select:i64 (setcc:i32 CPU64Regs:i64:$lhs, 0:i64, SETNE:Other), CPU64Regs:i64:$T, CPU64Regs:i64:$F) - Complexity = 11
                      // Dst: (MOVN_I64_I64:i64 CPU64Regs:i64:$T, CPU64Regs:i64:$lhs, CPU64Regs:i64:$F)
                    0, // EndSwitchType
/*6215*/          0, /*End of Scope*/
/*6216*/        /*Scope*/ 87|128,4/*599*/, /*->6817*/
/*6218*/          OPC_RecordChild1, // #1 = $rhs
/*6219*/          OPC_Scope, 90|128,1/*218*/, /*->6440*/ // 2 children in Scope
/*6222*/            OPC_MoveChild, 1,
/*6224*/            OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*6227*/            OPC_Scope, 15|128,1/*143*/, /*->6373*/ // 2 children in Scope
/*6230*/              OPC_CheckPredicate, 28, // Predicate_immSExt16
/*6232*/              OPC_MoveParent,
/*6233*/              OPC_MoveChild, 2,
/*6235*/              OPC_Scope, 33, /*->6270*/ // 4 children in Scope
/*6237*/                OPC_CheckCondCode, ISD::SETGE,
/*6239*/                OPC_MoveParent,
/*6240*/                OPC_CheckType, MVT::i32,
/*6242*/                OPC_MoveParent,
/*6243*/                OPC_RecordChild1, // #2 = $T
/*6244*/                OPC_RecordChild2, // #3 = $F
/*6245*/                OPC_CheckType, MVT::i32,
/*6247*/                OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*6249*/                OPC_EmitConvertToTarget, 1,
/*6251*/                OPC_EmitNode, TARGET_VAL(Mips::SLTi64), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5
/*6260*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I), 0,
                            1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 5, 3, 
                        // Src: (select:i32 (setcc:i32 CPU64Regs:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16>>:$rhs, SETGE:Other), CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 10
                        // Dst: (MOVZ_I_I:i32 CPURegs:i32:$T, (SLTi64:i32 CPU64Regs:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16>>:$rhs), CPURegs:i32:$F)
/*6270*/              /*Scope*/ 33, /*->6304*/
/*6271*/                OPC_CheckCondCode, ISD::SETUGE,
/*6273*/                OPC_MoveParent,
/*6274*/                OPC_CheckType, MVT::i32,
/*6276*/                OPC_MoveParent,
/*6277*/                OPC_RecordChild1, // #2 = $T
/*6278*/                OPC_RecordChild2, // #3 = $F
/*6279*/                OPC_CheckType, MVT::i32,
/*6281*/                OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*6283*/                OPC_EmitConvertToTarget, 1,
/*6285*/                OPC_EmitNode, TARGET_VAL(Mips::SLTiu64), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5
/*6294*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I), 0,
                            1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 5, 3, 
                        // Src: (select:i32 (setcc:i32 CPU64Regs:i64:$lh, (imm:i64)<<P:Predicate_immSExt16>>:$rh, SETUGE:Other), CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 10
                        // Dst: (MOVZ_I_I:i32 CPURegs:i32:$T, (SLTiu64:i32 CPU64Regs:i64:$lh, (imm:i64)<<P:Predicate_immSExt16>>:$rh), CPURegs:i32:$F)
/*6304*/              /*Scope*/ 33, /*->6338*/
/*6305*/                OPC_CheckCondCode, ISD::SETGE,
/*6307*/                OPC_MoveParent,
/*6308*/                OPC_CheckType, MVT::i32,
/*6310*/                OPC_MoveParent,
/*6311*/                OPC_RecordChild1, // #2 = $T
/*6312*/                OPC_RecordChild2, // #3 = $F
/*6313*/                OPC_CheckType, MVT::i64,
/*6315*/                OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*6317*/                OPC_EmitConvertToTarget, 1,
/*6319*/                OPC_EmitNode, TARGET_VAL(Mips::SLTi64), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5
/*6328*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I64), 0,
                            1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 5, 3, 
                        // Src: (select:i64 (setcc:i32 CPU64Regs:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16>>:$rhs, SETGE:Other), CPU64Regs:i64:$T, CPU64Regs:i64:$F) - Complexity = 10
                        // Dst: (MOVZ_I_I64:i64 CPU64Regs:i64:$T, (SLTi64:i32 CPU64Regs:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16>>:$rhs), CPU64Regs:i64:$F)
/*6338*/              /*Scope*/ 33, /*->6372*/
/*6339*/                OPC_CheckCondCode, ISD::SETUGE,
/*6341*/                OPC_MoveParent,
/*6342*/                OPC_CheckType, MVT::i32,
/*6344*/                OPC_MoveParent,
/*6345*/                OPC_RecordChild1, // #2 = $T
/*6346*/                OPC_RecordChild2, // #3 = $F
/*6347*/                OPC_CheckType, MVT::i64,
/*6349*/                OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*6351*/                OPC_EmitConvertToTarget, 1,
/*6353*/                OPC_EmitNode, TARGET_VAL(Mips::SLTiu64), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5
/*6362*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I64), 0,
                            1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 5, 3, 
                        // Src: (select:i64 (setcc:i32 CPU64Regs:i64:$lh, (imm:i64)<<P:Predicate_immSExt16>>:$rh, SETUGE:Other), CPU64Regs:i64:$T, CPU64Regs:i64:$F) - Complexity = 10
                        // Dst: (MOVZ_I_I64:i64 CPU64Regs:i64:$T, (SLTiu64:i32 CPU64Regs:i64:$lh, (imm:i64)<<P:Predicate_immSExt16>>:$rh), CPU64Regs:i64:$F)
/*6372*/              0, /*End of Scope*/
/*6373*/            /*Scope*/ 65, /*->6439*/
/*6374*/              OPC_CheckPredicate, 27, // Predicate_immZExt16
/*6376*/              OPC_MoveParent,
/*6377*/              OPC_MoveChild, 2,
/*6379*/              OPC_CheckCondCode, ISD::SETEQ,
/*6381*/              OPC_MoveParent,
/*6382*/              OPC_CheckType, MVT::i32,
/*6384*/              OPC_MoveParent,
/*6385*/              OPC_RecordChild1, // #2 = $T
/*6386*/              OPC_RecordChild2, // #3 = $F
/*6387*/              OPC_SwitchType /*2 cases */, 23,  MVT::i32,// ->6413
/*6390*/                OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*6392*/                OPC_EmitConvertToTarget, 1,
/*6394*/                OPC_EmitNode, TARGET_VAL(Mips::XORi64), 0,
                            1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 4,  // Results = #5
/*6403*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I64_I), 0,
                            1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 5, 3, 
                        // Src: (select:i32 (setcc:i32 CPU64Regs:i64:$lhs, (imm:i64)<<P:Predicate_immZExt16>><<X:LO16>>:$uimm16, SETEQ:Other), CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 10
                        // Dst: (MOVZ_I64_I:i32 CPURegs:i32:$T, (XORi64:i64 CPU64Regs:i64:$lhs, (imm:i64)<<P:Predicate_immZExt16>><<X:LO16>>:$uimm16), CPURegs:i32:$F)
                      /*SwitchType*/ 23,  MVT::i64,// ->6438
/*6415*/                OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*6417*/                OPC_EmitConvertToTarget, 1,
/*6419*/                OPC_EmitNode, TARGET_VAL(Mips::XORi64), 0,
                            1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 4,  // Results = #5
/*6428*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I64_I64), 0,
                            1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 5, 3, 
                        // Src: (select:i64 (setcc:i32 CPU64Regs:i64:$lhs, (imm:i64)<<P:Predicate_immZExt16>><<X:LO16>>:$uimm16, SETEQ:Other), CPU64Regs:i64:$T, CPU64Regs:i64:$F) - Complexity = 10
                        // Dst: (MOVZ_I64_I64:i64 CPU64Regs:i64:$T, (XORi64:i64 CPU64Regs:i64:$lhs, (imm:i64)<<P:Predicate_immZExt16>><<X:LO16>>:$uimm16), CPU64Regs:i64:$F)
                      0, // EndSwitchType
/*6439*/            0, /*End of Scope*/
/*6440*/          /*Scope*/ 118|128,2/*374*/, /*->6816*/
/*6442*/            OPC_MoveChild, 2,
/*6444*/            OPC_Scope, 31, /*->6477*/ // 10 children in Scope
/*6446*/              OPC_CheckCondCode, ISD::SETGE,
/*6448*/              OPC_MoveParent,
/*6449*/              OPC_CheckType, MVT::i32,
/*6451*/              OPC_MoveParent,
/*6452*/              OPC_RecordChild1, // #2 = $T
/*6453*/              OPC_RecordChild2, // #3 = $F
/*6454*/              OPC_CheckType, MVT::i32,
/*6456*/              OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*6458*/              OPC_EmitNode, TARGET_VAL(Mips::SLT64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*6467*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I), 0,
                          1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:i32 (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETGE:Other), CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 6
                      // Dst: (MOVZ_I_I:i32 CPURegs:i32:$T, (SLT64:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs), CPURegs:i32:$F)
/*6477*/            /*Scope*/ 31, /*->6509*/
/*6478*/              OPC_CheckCondCode, ISD::SETUGE,
/*6480*/              OPC_MoveParent,
/*6481*/              OPC_CheckType, MVT::i32,
/*6483*/              OPC_MoveParent,
/*6484*/              OPC_RecordChild1, // #2 = $T
/*6485*/              OPC_RecordChild2, // #3 = $F
/*6486*/              OPC_CheckType, MVT::i32,
/*6488*/              OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*6490*/              OPC_EmitNode, TARGET_VAL(Mips::SLTu64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*6499*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I), 0,
                          1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:i32 (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETUGE:Other), CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 6
                      // Dst: (MOVZ_I_I:i32 CPURegs:i32:$T, (SLTu64:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs), CPURegs:i32:$F)
/*6509*/            /*Scope*/ 31, /*->6541*/
/*6510*/              OPC_CheckCondCode, ISD::SETLE,
/*6512*/              OPC_MoveParent,
/*6513*/              OPC_CheckType, MVT::i32,
/*6515*/              OPC_MoveParent,
/*6516*/              OPC_RecordChild1, // #2 = $T
/*6517*/              OPC_RecordChild2, // #3 = $F
/*6518*/              OPC_CheckType, MVT::i32,
/*6520*/              OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*6522*/              OPC_EmitNode, TARGET_VAL(Mips::SLT64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4
/*6531*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I), 0,
                          1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:i32 (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETLE:Other), CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 6
                      // Dst: (MOVZ_I_I:i32 CPURegs:i32:$T, (SLT64:i32 CPU64Regs:i64:$rhs, CPU64Regs:i64:$lhs), CPURegs:i32:$F)
/*6541*/            /*Scope*/ 31, /*->6573*/
/*6542*/              OPC_CheckCondCode, ISD::SETULE,
/*6544*/              OPC_MoveParent,
/*6545*/              OPC_CheckType, MVT::i32,
/*6547*/              OPC_MoveParent,
/*6548*/              OPC_RecordChild1, // #2 = $T
/*6549*/              OPC_RecordChild2, // #3 = $F
/*6550*/              OPC_CheckType, MVT::i32,
/*6552*/              OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*6554*/              OPC_EmitNode, TARGET_VAL(Mips::SLTu64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4
/*6563*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I), 0,
                          1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:i32 (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETULE:Other), CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 6
                      // Dst: (MOVZ_I_I:i32 CPURegs:i32:$T, (SLTu64:i32 CPU64Regs:i64:$rhs, CPU64Regs:i64:$lhs), CPURegs:i32:$F)
/*6573*/            /*Scope*/ 31, /*->6605*/
/*6574*/              OPC_CheckCondCode, ISD::SETGE,
/*6576*/              OPC_MoveParent,
/*6577*/              OPC_CheckType, MVT::i32,
/*6579*/              OPC_MoveParent,
/*6580*/              OPC_RecordChild1, // #2 = $T
/*6581*/              OPC_RecordChild2, // #3 = $F
/*6582*/              OPC_CheckType, MVT::i64,
/*6584*/              OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*6586*/              OPC_EmitNode, TARGET_VAL(Mips::SLT64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*6595*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I64), 0,
                          1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:i64 (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETGE:Other), CPU64Regs:i64:$T, CPU64Regs:i64:$F) - Complexity = 6
                      // Dst: (MOVZ_I_I64:i64 CPU64Regs:i64:$T, (SLT64:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs), CPU64Regs:i64:$F)
/*6605*/            /*Scope*/ 31, /*->6637*/
/*6606*/              OPC_CheckCondCode, ISD::SETUGE,
/*6608*/              OPC_MoveParent,
/*6609*/              OPC_CheckType, MVT::i32,
/*6611*/              OPC_MoveParent,
/*6612*/              OPC_RecordChild1, // #2 = $T
/*6613*/              OPC_RecordChild2, // #3 = $F
/*6614*/              OPC_CheckType, MVT::i64,
/*6616*/              OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*6618*/              OPC_EmitNode, TARGET_VAL(Mips::SLTu64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*6627*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I64), 0,
                          1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:i64 (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETUGE:Other), CPU64Regs:i64:$T, CPU64Regs:i64:$F) - Complexity = 6
                      // Dst: (MOVZ_I_I64:i64 CPU64Regs:i64:$T, (SLTu64:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs), CPU64Regs:i64:$F)
/*6637*/            /*Scope*/ 31, /*->6669*/
/*6638*/              OPC_CheckCondCode, ISD::SETLE,
/*6640*/              OPC_MoveParent,
/*6641*/              OPC_CheckType, MVT::i32,
/*6643*/              OPC_MoveParent,
/*6644*/              OPC_RecordChild1, // #2 = $T
/*6645*/              OPC_RecordChild2, // #3 = $F
/*6646*/              OPC_CheckType, MVT::i64,
/*6648*/              OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*6650*/              OPC_EmitNode, TARGET_VAL(Mips::SLT64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4
/*6659*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I64), 0,
                          1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:i64 (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETLE:Other), CPU64Regs:i64:$T, CPU64Regs:i64:$F) - Complexity = 6
                      // Dst: (MOVZ_I_I64:i64 CPU64Regs:i64:$T, (SLT64:i32 CPU64Regs:i64:$rhs, CPU64Regs:i64:$lhs), CPU64Regs:i64:$F)
/*6669*/            /*Scope*/ 31, /*->6701*/
/*6670*/              OPC_CheckCondCode, ISD::SETULE,
/*6672*/              OPC_MoveParent,
/*6673*/              OPC_CheckType, MVT::i32,
/*6675*/              OPC_MoveParent,
/*6676*/              OPC_RecordChild1, // #2 = $T
/*6677*/              OPC_RecordChild2, // #3 = $F
/*6678*/              OPC_CheckType, MVT::i64,
/*6680*/              OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*6682*/              OPC_EmitNode, TARGET_VAL(Mips::SLTu64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4
/*6691*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I64), 0,
                          1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:i64 (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETULE:Other), CPU64Regs:i64:$T, CPU64Regs:i64:$F) - Complexity = 6
                      // Dst: (MOVZ_I_I64:i64 CPU64Regs:i64:$T, (SLTu64:i32 CPU64Regs:i64:$rhs, CPU64Regs:i64:$lhs), CPU64Regs:i64:$F)
/*6701*/            /*Scope*/ 56, /*->6758*/
/*6702*/              OPC_CheckCondCode, ISD::SETEQ,
/*6704*/              OPC_MoveParent,
/*6705*/              OPC_CheckType, MVT::i32,
/*6707*/              OPC_MoveParent,
/*6708*/              OPC_RecordChild1, // #2 = $T
/*6709*/              OPC_RecordChild2, // #3 = $F
/*6710*/              OPC_SwitchType /*2 cases */, 21,  MVT::i32,// ->6734
/*6713*/                OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*6715*/                OPC_EmitNode, TARGET_VAL(Mips::XOR64), 0,
                            1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1,  // Results = #4
/*6724*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I64_I), 0,
                            1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 4, 3, 
                        // Src: (select:i32 (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETEQ:Other), CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 6
                        // Dst: (MOVZ_I64_I:i32 CPURegs:i32:$T, (XOR64:i64 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs), CPURegs:i32:$F)
                      /*SwitchType*/ 21,  MVT::i64,// ->6757
/*6736*/                OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*6738*/                OPC_EmitNode, TARGET_VAL(Mips::XOR64), 0,
                            1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1,  // Results = #4
/*6747*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I64_I64), 0,
                            1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 4, 3, 
                        // Src: (select:i64 (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETEQ:Other), CPU64Regs:i64:$T, CPU64Regs:i64:$F) - Complexity = 6
                        // Dst: (MOVZ_I64_I64:i64 CPU64Regs:i64:$T, (XOR64:i64 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs), CPU64Regs:i64:$F)
                      0, // EndSwitchType
/*6758*/            /*Scope*/ 56, /*->6815*/
/*6759*/              OPC_CheckCondCode, ISD::SETNE,
/*6761*/              OPC_MoveParent,
/*6762*/              OPC_CheckType, MVT::i32,
/*6764*/              OPC_MoveParent,
/*6765*/              OPC_RecordChild1, // #2 = $T
/*6766*/              OPC_RecordChild2, // #3 = $F
/*6767*/              OPC_SwitchType /*2 cases */, 21,  MVT::i32,// ->6791
/*6770*/                OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*6772*/                OPC_EmitNode, TARGET_VAL(Mips::XOR64), 0,
                            1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1,  // Results = #4
/*6781*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I64_I), 0,
                            1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 4, 3, 
                        // Src: (select:i32 (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETNE:Other), CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 6
                        // Dst: (MOVN_I64_I:i32 CPURegs:i32:$T, (XOR64:i64 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs), CPURegs:i32:$F)
                      /*SwitchType*/ 21,  MVT::i64,// ->6814
/*6793*/                OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*6795*/                OPC_EmitNode, TARGET_VAL(Mips::XOR64), 0,
                            1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1,  // Results = #4
/*6804*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I64_I64), 0,
                            1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 4, 3, 
                        // Src: (select:i64 (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETNE:Other), CPU64Regs:i64:$T, CPU64Regs:i64:$F) - Complexity = 6
                        // Dst: (MOVN_I64_I64:i64 CPU64Regs:i64:$T, (XOR64:i64 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs), CPU64Regs:i64:$F)
                      0, // EndSwitchType
/*6815*/            0, /*End of Scope*/
/*6816*/          0, /*End of Scope*/
/*6817*/        0, /*End of Scope*/
/*6818*/      0, /*End of Scope*/
/*6819*/    /*Scope*/ 89, /*->6909*/
/*6820*/      OPC_RecordChild0, // #0 = $cond
/*6821*/      OPC_Scope, 50, /*->6873*/ // 2 children in Scope
/*6823*/        OPC_CheckChild0Type, MVT::i32,
/*6825*/        OPC_RecordChild1, // #1 = $T
/*6826*/        OPC_RecordChild2, // #2 = $F
/*6827*/        OPC_SwitchType /*2 cases */, 28,  MVT::i32,// ->6858
/*6830*/          OPC_Scope, 12, /*->6844*/ // 2 children in Scope
/*6832*/            OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*6834*/            OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I_I), 0,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 0, 2, 
                    // Src: (select:i32 CPURegs:i32:$cond, CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 3
                    // Dst: (MOVN_I_I:i32 CPURegs:i32:$T, CPURegs:i32:$cond, CPURegs:i32:$F)
/*6844*/          /*Scope*/ 12, /*->6857*/
/*6845*/            OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*6847*/            OPC_MorphNodeTo, TARGET_VAL(Mips::SelBneZ), 0,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 2, 0, 
                    // Src: (select:i32 CPU16Regs:i32:$a, CPU16Regs:i32:$x, CPU16Regs:i32:$y) - Complexity = 3
                    // Dst: (SelBneZ:i32 CPU16Regs:i32:$x, CPU16Regs:i32:$y, CPU16Regs:i32:$a)
/*6857*/          0, /*End of Scope*/
                /*SwitchType*/ 12,  MVT::i64,// ->6872
/*6860*/          OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*6862*/          OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I_I64), 0,
                      1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 0, 2, 
                  // Src: (select:i64 CPURegs:i32:$cond, CPU64Regs:i64:$T, CPU64Regs:i64:$F) - Complexity = 3
                  // Dst: (MOVN_I_I64:i64 CPU64Regs:i64:$T, CPURegs:i32:$cond, CPU64Regs:i64:$F)
                0, // EndSwitchType
/*6873*/      /*Scope*/ 34, /*->6908*/
/*6874*/        OPC_CheckChild0Type, MVT::i64,
/*6876*/        OPC_RecordChild1, // #1 = $T
/*6877*/        OPC_RecordChild2, // #2 = $F
/*6878*/        OPC_SwitchType /*2 cases */, 12,  MVT::i32,// ->6893
/*6881*/          OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*6883*/          OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I64_I), 0,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 0, 2, 
                  // Src: (select:i32 CPU64Regs:i64:$cond, CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 3
                  // Dst: (MOVN_I64_I:i32 CPURegs:i32:$T, CPU64Regs:i64:$cond, CPURegs:i32:$F)
                /*SwitchType*/ 12,  MVT::i64,// ->6907
/*6895*/          OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*6897*/          OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I64_I64), 0,
                      1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 0, 2, 
                  // Src: (select:i64 CPU64Regs:i64:$cond, CPU64Regs:i64:$T, CPU64Regs:i64:$F) - Complexity = 3
                  // Dst: (MOVN_I64_I64:i64 CPU64Regs:i64:$T, CPU64Regs:i64:$cond, CPU64Regs:i64:$F)
                0, // EndSwitchType
/*6908*/      0, /*End of Scope*/
/*6909*/    /*Scope*/ 85|128,12/*1621*/, /*->8532*/
/*6911*/      OPC_MoveChild, 0,
/*6913*/      OPC_CheckOpcode, TARGET_VAL(ISD::SETCC),
/*6916*/      OPC_RecordChild0, // #0 = $lhs
/*6917*/      OPC_Scope, 62|128,7/*958*/, /*->7878*/ // 2 children in Scope
/*6920*/        OPC_CheckChild0Type, MVT::i32,
/*6922*/        OPC_Scope, 19|128,1/*147*/, /*->7072*/ // 2 children in Scope
/*6925*/          OPC_MoveChild, 1,
/*6927*/          OPC_CheckInteger, 0, 
/*6929*/          OPC_MoveParent,
/*6930*/          OPC_MoveChild, 2,
/*6932*/          OPC_Scope, 22, /*->6956*/ // 6 children in Scope
/*6934*/            OPC_CheckCondCode, ISD::SETEQ,
/*6936*/            OPC_MoveParent,
/*6937*/            OPC_CheckType, MVT::i32,
/*6939*/            OPC_MoveParent,
/*6940*/            OPC_RecordChild1, // #1 = $T
/*6941*/            OPC_RecordChild2, // #2 = $F
/*6942*/            OPC_CheckType, MVT::f32,
/*6944*/            OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*6946*/            OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_S), 0,
                        1/*#VTs*/, MVT::f32, 3/*#Ops*/, 1, 0, 2, 
                    // Src: (select:f32 (setcc:i32 CPURegs:i32:$lhs, 0:i32, SETEQ:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 11
                    // Dst: (MOVZ_I_S:f32 FGR32:f32:$T, CPURegs:i32:$lhs, FGR32:f32:$F)
/*6956*/          /*Scope*/ 22, /*->6979*/
/*6957*/            OPC_CheckCondCode, ISD::SETNE,
/*6959*/            OPC_MoveParent,
/*6960*/            OPC_CheckType, MVT::i32,
/*6962*/            OPC_MoveParent,
/*6963*/            OPC_RecordChild1, // #1 = $T
/*6964*/            OPC_RecordChild2, // #2 = $F
/*6965*/            OPC_CheckType, MVT::f32,
/*6967*/            OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*6969*/            OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I_S), 0,
                        1/*#VTs*/, MVT::f32, 3/*#Ops*/, 1, 0, 2, 
                    // Src: (select:f32 (setcc:i32 CPURegs:i32:$lhs, 0:i32, SETNE:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 11
                    // Dst: (MOVN_I_S:f32 FGR32:f32:$T, CPURegs:i32:$lhs, FGR32:f32:$F)
/*6979*/          /*Scope*/ 22, /*->7002*/
/*6980*/            OPC_CheckCondCode, ISD::SETEQ,
/*6982*/            OPC_MoveParent,
/*6983*/            OPC_CheckType, MVT::i32,
/*6985*/            OPC_MoveParent,
/*6986*/            OPC_RecordChild1, // #1 = $T
/*6987*/            OPC_RecordChild2, // #2 = $F
/*6988*/            OPC_CheckType, MVT::f64,
/*6990*/            OPC_CheckPatternPredicate, 13, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*6992*/            OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D32), 0,
                        1/*#VTs*/, MVT::f64, 3/*#Ops*/, 1, 0, 2, 
                    // Src: (select:f64 (setcc:i32 CPURegs:i32:$lhs, 0:i32, SETEQ:Other), AFGR64:f64:$T, AFGR64:f64:$F) - Complexity = 11
                    // Dst: (MOVZ_I_D32:f64 AFGR64:f64:$T, CPURegs:i32:$lhs, AFGR64:f64:$F)
/*7002*/          /*Scope*/ 22, /*->7025*/
/*7003*/            OPC_CheckCondCode, ISD::SETNE,
/*7005*/            OPC_MoveParent,
/*7006*/            OPC_CheckType, MVT::i32,
/*7008*/            OPC_MoveParent,
/*7009*/            OPC_RecordChild1, // #1 = $T
/*7010*/            OPC_RecordChild2, // #2 = $F
/*7011*/            OPC_CheckType, MVT::f64,
/*7013*/            OPC_CheckPatternPredicate, 13, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*7015*/            OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I_D32), 0,
                        1/*#VTs*/, MVT::f64, 3/*#Ops*/, 1, 0, 2, 
                    // Src: (select:f64 (setcc:i32 CPURegs:i32:$lhs, 0:i32, SETNE:Other), AFGR64:f64:$T, AFGR64:f64:$F) - Complexity = 11
                    // Dst: (MOVN_I_D32:f64 AFGR64:f64:$T, CPURegs:i32:$lhs, AFGR64:f64:$F)
/*7025*/          /*Scope*/ 22, /*->7048*/
/*7026*/            OPC_CheckCondCode, ISD::SETEQ,
/*7028*/            OPC_MoveParent,
/*7029*/            OPC_CheckType, MVT::i32,
/*7031*/            OPC_MoveParent,
/*7032*/            OPC_RecordChild1, // #1 = $T
/*7033*/            OPC_RecordChild2, // #2 = $F
/*7034*/            OPC_CheckType, MVT::f64,
/*7036*/            OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*7038*/            OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D64), 0,
                        1/*#VTs*/, MVT::f64, 3/*#Ops*/, 1, 0, 2, 
                    // Src: (select:f64 (setcc:i32 CPURegs:i32:$lhs, 0:i32, SETEQ:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 11
                    // Dst: (MOVZ_I_D64:f64 FGR64:f64:$T, CPURegs:i32:$lhs, FGR64:f64:$F)
/*7048*/          /*Scope*/ 22, /*->7071*/
/*7049*/            OPC_CheckCondCode, ISD::SETNE,
/*7051*/            OPC_MoveParent,
/*7052*/            OPC_CheckType, MVT::i32,
/*7054*/            OPC_MoveParent,
/*7055*/            OPC_RecordChild1, // #1 = $T
/*7056*/            OPC_RecordChild2, // #2 = $F
/*7057*/            OPC_CheckType, MVT::f64,
/*7059*/            OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*7061*/            OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I_D64), 0,
                        1/*#VTs*/, MVT::f64, 3/*#Ops*/, 1, 0, 2, 
                    // Src: (select:f64 (setcc:i32 CPURegs:i32:$lhs, 0:i32, SETNE:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 11
                    // Dst: (MOVN_I_D64:f64 FGR64:f64:$T, CPURegs:i32:$lhs, FGR64:f64:$F)
/*7071*/          0, /*End of Scope*/
/*7072*/        /*Scope*/ 35|128,6/*803*/, /*->7877*/
/*7074*/          OPC_RecordChild1, // #1 = $rhs
/*7075*/          OPC_Scope, 88|128,1/*216*/, /*->7294*/ // 2 children in Scope
/*7078*/            OPC_MoveChild, 1,
/*7080*/            OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*7083*/            OPC_CheckPredicate, 28, // Predicate_immSExt16
/*7085*/            OPC_MoveParent,
/*7086*/            OPC_MoveChild, 2,
/*7088*/            OPC_Scope, 33, /*->7123*/ // 6 children in Scope
/*7090*/              OPC_CheckCondCode, ISD::SETGE,
/*7092*/              OPC_MoveParent,
/*7093*/              OPC_CheckType, MVT::i32,
/*7095*/              OPC_MoveParent,
/*7096*/              OPC_RecordChild1, // #2 = $T
/*7097*/              OPC_RecordChild2, // #3 = $F
/*7098*/              OPC_CheckType, MVT::f32,
/*7100*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*7102*/              OPC_EmitConvertToTarget, 1,
/*7104*/              OPC_EmitNode, TARGET_VAL(Mips::SLTi), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5
/*7113*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_S), 0,
                          1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 5, 3, 
                      // Src: (select:f32 (setcc:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs, SETGE:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 10
                      // Dst: (MOVZ_I_S:f32 FGR32:f32:$T, (SLTi:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs), FGR32:f32:$F)
/*7123*/            /*Scope*/ 33, /*->7157*/
/*7124*/              OPC_CheckCondCode, ISD::SETUGE,
/*7126*/              OPC_MoveParent,
/*7127*/              OPC_CheckType, MVT::i32,
/*7129*/              OPC_MoveParent,
/*7130*/              OPC_RecordChild1, // #2 = $T
/*7131*/              OPC_RecordChild2, // #3 = $F
/*7132*/              OPC_CheckType, MVT::f32,
/*7134*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*7136*/              OPC_EmitConvertToTarget, 1,
/*7138*/              OPC_EmitNode, TARGET_VAL(Mips::SLTiu), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5
/*7147*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_S), 0,
                          1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 5, 3, 
                      // Src: (select:f32 (setcc:i32 CPURegs:i32:$lh, (imm:i32)<<P:Predicate_immSExt16>>:$rh, SETUGE:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 10
                      // Dst: (MOVZ_I_S:f32 FGR32:f32:$T, (SLTiu:i32 CPURegs:i32:$lh, (imm:i32)<<P:Predicate_immSExt16>>:$rh), FGR32:f32:$F)
/*7157*/            /*Scope*/ 33, /*->7191*/
/*7158*/              OPC_CheckCondCode, ISD::SETGE,
/*7160*/              OPC_MoveParent,
/*7161*/              OPC_CheckType, MVT::i32,
/*7163*/              OPC_MoveParent,
/*7164*/              OPC_RecordChild1, // #2 = $T
/*7165*/              OPC_RecordChild2, // #3 = $F
/*7166*/              OPC_CheckType, MVT::f64,
/*7168*/              OPC_CheckPatternPredicate, 13, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*7170*/              OPC_EmitConvertToTarget, 1,
/*7172*/              OPC_EmitNode, TARGET_VAL(Mips::SLTi), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5
/*7181*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D32), 0,
                          1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 5, 3, 
                      // Src: (select:f64 (setcc:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs, SETGE:Other), AFGR64:f64:$T, AFGR64:f64:$F) - Complexity = 10
                      // Dst: (MOVZ_I_D32:f64 AFGR64:f64:$T, (SLTi:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs), AFGR64:f64:$F)
/*7191*/            /*Scope*/ 33, /*->7225*/
/*7192*/              OPC_CheckCondCode, ISD::SETUGE,
/*7194*/              OPC_MoveParent,
/*7195*/              OPC_CheckType, MVT::i32,
/*7197*/              OPC_MoveParent,
/*7198*/              OPC_RecordChild1, // #2 = $T
/*7199*/              OPC_RecordChild2, // #3 = $F
/*7200*/              OPC_CheckType, MVT::f64,
/*7202*/              OPC_CheckPatternPredicate, 13, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*7204*/              OPC_EmitConvertToTarget, 1,
/*7206*/              OPC_EmitNode, TARGET_VAL(Mips::SLTiu), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5
/*7215*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D32), 0,
                          1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 5, 3, 
                      // Src: (select:f64 (setcc:i32 CPURegs:i32:$lh, (imm:i32)<<P:Predicate_immSExt16>>:$rh, SETUGE:Other), AFGR64:f64:$T, AFGR64:f64:$F) - Complexity = 10
                      // Dst: (MOVZ_I_D32:f64 AFGR64:f64:$T, (SLTiu:i32 CPURegs:i32:$lh, (imm:i32)<<P:Predicate_immSExt16>>:$rh), AFGR64:f64:$F)
/*7225*/            /*Scope*/ 33, /*->7259*/
/*7226*/              OPC_CheckCondCode, ISD::SETGE,
/*7228*/              OPC_MoveParent,
/*7229*/              OPC_CheckType, MVT::i32,
/*7231*/              OPC_MoveParent,
/*7232*/              OPC_RecordChild1, // #2 = $T
/*7233*/              OPC_RecordChild2, // #3 = $F
/*7234*/              OPC_CheckType, MVT::f64,
/*7236*/              OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*7238*/              OPC_EmitConvertToTarget, 1,
/*7240*/              OPC_EmitNode, TARGET_VAL(Mips::SLTi), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5
/*7249*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D64), 0,
                          1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 5, 3, 
                      // Src: (select:f64 (setcc:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs, SETGE:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 10
                      // Dst: (MOVZ_I_D64:f64 FGR64:f64:$T, (SLTi:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs), FGR64:f64:$F)
/*7259*/            /*Scope*/ 33, /*->7293*/
/*7260*/              OPC_CheckCondCode, ISD::SETUGE,
/*7262*/              OPC_MoveParent,
/*7263*/              OPC_CheckType, MVT::i32,
/*7265*/              OPC_MoveParent,
/*7266*/              OPC_RecordChild1, // #2 = $T
/*7267*/              OPC_RecordChild2, // #3 = $F
/*7268*/              OPC_CheckType, MVT::f64,
/*7270*/              OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*7272*/              OPC_EmitConvertToTarget, 1,
/*7274*/              OPC_EmitNode, TARGET_VAL(Mips::SLTiu), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5
/*7283*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D64), 0,
                          1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 5, 3, 
                      // Src: (select:f64 (setcc:i32 CPURegs:i32:$lh, (imm:i32)<<P:Predicate_immSExt16>>:$rh, SETUGE:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 10
                      // Dst: (MOVZ_I_D64:f64 FGR64:f64:$T, (SLTiu:i32 CPURegs:i32:$lh, (imm:i32)<<P:Predicate_immSExt16>>:$rh), FGR64:f64:$F)
/*7293*/            0, /*End of Scope*/
/*7294*/          /*Scope*/ 68|128,4/*580*/, /*->7876*/
/*7296*/            OPC_MoveChild, 2,
/*7298*/            OPC_Scope, 31, /*->7331*/ // 18 children in Scope
/*7300*/              OPC_CheckCondCode, ISD::SETGE,
/*7302*/              OPC_MoveParent,
/*7303*/              OPC_CheckType, MVT::i32,
/*7305*/              OPC_MoveParent,
/*7306*/              OPC_RecordChild1, // #2 = $T
/*7307*/              OPC_RecordChild2, // #3 = $F
/*7308*/              OPC_CheckType, MVT::f32,
/*7310*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*7312*/              OPC_EmitNode, TARGET_VAL(Mips::SLT), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*7321*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_S), 0,
                          1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f32 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETGE:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 6
                      // Dst: (MOVZ_I_S:f32 FGR32:f32:$T, (SLT:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), FGR32:f32:$F)
/*7331*/            /*Scope*/ 31, /*->7363*/
/*7332*/              OPC_CheckCondCode, ISD::SETUGE,
/*7334*/              OPC_MoveParent,
/*7335*/              OPC_CheckType, MVT::i32,
/*7337*/              OPC_MoveParent,
/*7338*/              OPC_RecordChild1, // #2 = $T
/*7339*/              OPC_RecordChild2, // #3 = $F
/*7340*/              OPC_CheckType, MVT::f32,
/*7342*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*7344*/              OPC_EmitNode, TARGET_VAL(Mips::SLTu), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*7353*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_S), 0,
                          1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f32 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETUGE:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 6
                      // Dst: (MOVZ_I_S:f32 FGR32:f32:$T, (SLTu:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), FGR32:f32:$F)
/*7363*/            /*Scope*/ 31, /*->7395*/
/*7364*/              OPC_CheckCondCode, ISD::SETLE,
/*7366*/              OPC_MoveParent,
/*7367*/              OPC_CheckType, MVT::i32,
/*7369*/              OPC_MoveParent,
/*7370*/              OPC_RecordChild1, // #2 = $T
/*7371*/              OPC_RecordChild2, // #3 = $F
/*7372*/              OPC_CheckType, MVT::f32,
/*7374*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*7376*/              OPC_EmitNode, TARGET_VAL(Mips::SLT), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4
/*7385*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_S), 0,
                          1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f32 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETLE:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 6
                      // Dst: (MOVZ_I_S:f32 FGR32:f32:$T, (SLT:i32 CPURegs:i32:$rhs, CPURegs:i32:$lhs), FGR32:f32:$F)
/*7395*/            /*Scope*/ 31, /*->7427*/
/*7396*/              OPC_CheckCondCode, ISD::SETULE,
/*7398*/              OPC_MoveParent,
/*7399*/              OPC_CheckType, MVT::i32,
/*7401*/              OPC_MoveParent,
/*7402*/              OPC_RecordChild1, // #2 = $T
/*7403*/              OPC_RecordChild2, // #3 = $F
/*7404*/              OPC_CheckType, MVT::f32,
/*7406*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*7408*/              OPC_EmitNode, TARGET_VAL(Mips::SLTu), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4
/*7417*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_S), 0,
                          1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f32 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETULE:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 6
                      // Dst: (MOVZ_I_S:f32 FGR32:f32:$T, (SLTu:i32 CPURegs:i32:$rhs, CPURegs:i32:$lhs), FGR32:f32:$F)
/*7427*/            /*Scope*/ 31, /*->7459*/
/*7428*/              OPC_CheckCondCode, ISD::SETEQ,
/*7430*/              OPC_MoveParent,
/*7431*/              OPC_CheckType, MVT::i32,
/*7433*/              OPC_MoveParent,
/*7434*/              OPC_RecordChild1, // #2 = $T
/*7435*/              OPC_RecordChild2, // #3 = $F
/*7436*/              OPC_CheckType, MVT::f32,
/*7438*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*7440*/              OPC_EmitNode, TARGET_VAL(Mips::XOR), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*7449*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_S), 0,
                          1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f32 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETEQ:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 6
                      // Dst: (MOVZ_I_S:f32 FGR32:f32:$T, (XOR:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), FGR32:f32:$F)
/*7459*/            /*Scope*/ 31, /*->7491*/
/*7460*/              OPC_CheckCondCode, ISD::SETNE,
/*7462*/              OPC_MoveParent,
/*7463*/              OPC_CheckType, MVT::i32,
/*7465*/              OPC_MoveParent,
/*7466*/              OPC_RecordChild1, // #2 = $T
/*7467*/              OPC_RecordChild2, // #3 = $F
/*7468*/              OPC_CheckType, MVT::f32,
/*7470*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*7472*/              OPC_EmitNode, TARGET_VAL(Mips::XOR), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*7481*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I_S), 0,
                          1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f32 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETNE:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 6
                      // Dst: (MOVN_I_S:f32 FGR32:f32:$T, (XOR:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), FGR32:f32:$F)
/*7491*/            /*Scope*/ 31, /*->7523*/
/*7492*/              OPC_CheckCondCode, ISD::SETGE,
/*7494*/              OPC_MoveParent,
/*7495*/              OPC_CheckType, MVT::i32,
/*7497*/              OPC_MoveParent,
/*7498*/              OPC_RecordChild1, // #2 = $T
/*7499*/              OPC_RecordChild2, // #3 = $F
/*7500*/              OPC_CheckType, MVT::f64,
/*7502*/              OPC_CheckPatternPredicate, 13, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*7504*/              OPC_EmitNode, TARGET_VAL(Mips::SLT), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*7513*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D32), 0,
                          1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f64 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETGE:Other), AFGR64:f64:$T, AFGR64:f64:$F) - Complexity = 6
                      // Dst: (MOVZ_I_D32:f64 AFGR64:f64:$T, (SLT:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), AFGR64:f64:$F)
/*7523*/            /*Scope*/ 31, /*->7555*/
/*7524*/              OPC_CheckCondCode, ISD::SETUGE,
/*7526*/              OPC_MoveParent,
/*7527*/              OPC_CheckType, MVT::i32,
/*7529*/              OPC_MoveParent,
/*7530*/              OPC_RecordChild1, // #2 = $T
/*7531*/              OPC_RecordChild2, // #3 = $F
/*7532*/              OPC_CheckType, MVT::f64,
/*7534*/              OPC_CheckPatternPredicate, 13, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*7536*/              OPC_EmitNode, TARGET_VAL(Mips::SLTu), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*7545*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D32), 0,
                          1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f64 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETUGE:Other), AFGR64:f64:$T, AFGR64:f64:$F) - Complexity = 6
                      // Dst: (MOVZ_I_D32:f64 AFGR64:f64:$T, (SLTu:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), AFGR64:f64:$F)
/*7555*/            /*Scope*/ 31, /*->7587*/
/*7556*/              OPC_CheckCondCode, ISD::SETLE,
/*7558*/              OPC_MoveParent,
/*7559*/              OPC_CheckType, MVT::i32,
/*7561*/              OPC_MoveParent,
/*7562*/              OPC_RecordChild1, // #2 = $T
/*7563*/              OPC_RecordChild2, // #3 = $F
/*7564*/              OPC_CheckType, MVT::f64,
/*7566*/              OPC_CheckPatternPredicate, 13, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*7568*/              OPC_EmitNode, TARGET_VAL(Mips::SLT), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4
/*7577*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D32), 0,
                          1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f64 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETLE:Other), AFGR64:f64:$T, AFGR64:f64:$F) - Complexity = 6
                      // Dst: (MOVZ_I_D32:f64 AFGR64:f64:$T, (SLT:i32 CPURegs:i32:$rhs, CPURegs:i32:$lhs), AFGR64:f64:$F)
/*7587*/            /*Scope*/ 31, /*->7619*/
/*7588*/              OPC_CheckCondCode, ISD::SETULE,
/*7590*/              OPC_MoveParent,
/*7591*/              OPC_CheckType, MVT::i32,
/*7593*/              OPC_MoveParent,
/*7594*/              OPC_RecordChild1, // #2 = $T
/*7595*/              OPC_RecordChild2, // #3 = $F
/*7596*/              OPC_CheckType, MVT::f64,
/*7598*/              OPC_CheckPatternPredicate, 13, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*7600*/              OPC_EmitNode, TARGET_VAL(Mips::SLTu), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4
/*7609*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D32), 0,
                          1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f64 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETULE:Other), AFGR64:f64:$T, AFGR64:f64:$F) - Complexity = 6
                      // Dst: (MOVZ_I_D32:f64 AFGR64:f64:$T, (SLTu:i32 CPURegs:i32:$rhs, CPURegs:i32:$lhs), AFGR64:f64:$F)
/*7619*/            /*Scope*/ 31, /*->7651*/
/*7620*/              OPC_CheckCondCode, ISD::SETEQ,
/*7622*/              OPC_MoveParent,
/*7623*/              OPC_CheckType, MVT::i32,
/*7625*/              OPC_MoveParent,
/*7626*/              OPC_RecordChild1, // #2 = $T
/*7627*/              OPC_RecordChild2, // #3 = $F
/*7628*/              OPC_CheckType, MVT::f64,
/*7630*/              OPC_CheckPatternPredicate, 13, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*7632*/              OPC_EmitNode, TARGET_VAL(Mips::XOR), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*7641*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D32), 0,
                          1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f64 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETEQ:Other), AFGR64:f64:$T, AFGR64:f64:$F) - Complexity = 6
                      // Dst: (MOVZ_I_D32:f64 AFGR64:f64:$T, (XOR:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), AFGR64:f64:$F)
/*7651*/            /*Scope*/ 31, /*->7683*/
/*7652*/              OPC_CheckCondCode, ISD::SETNE,
/*7654*/              OPC_MoveParent,
/*7655*/              OPC_CheckType, MVT::i32,
/*7657*/              OPC_MoveParent,
/*7658*/              OPC_RecordChild1, // #2 = $T
/*7659*/              OPC_RecordChild2, // #3 = $F
/*7660*/              OPC_CheckType, MVT::f64,
/*7662*/              OPC_CheckPatternPredicate, 13, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*7664*/              OPC_EmitNode, TARGET_VAL(Mips::XOR), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*7673*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I_D32), 0,
                          1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f64 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETNE:Other), AFGR64:f64:$T, AFGR64:f64:$F) - Complexity = 6
                      // Dst: (MOVN_I_D32:f64 AFGR64:f64:$T, (XOR:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), AFGR64:f64:$F)
/*7683*/            /*Scope*/ 31, /*->7715*/
/*7684*/              OPC_CheckCondCode, ISD::SETGE,
/*7686*/              OPC_MoveParent,
/*7687*/              OPC_CheckType, MVT::i32,
/*7689*/              OPC_MoveParent,
/*7690*/              OPC_RecordChild1, // #2 = $T
/*7691*/              OPC_RecordChild2, // #3 = $F
/*7692*/              OPC_CheckType, MVT::f64,
/*7694*/              OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*7696*/              OPC_EmitNode, TARGET_VAL(Mips::SLT), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*7705*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D64), 0,
                          1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f64 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETGE:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 6
                      // Dst: (MOVZ_I_D64:f64 FGR64:f64:$T, (SLT:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), FGR64:f64:$F)
/*7715*/            /*Scope*/ 31, /*->7747*/
/*7716*/              OPC_CheckCondCode, ISD::SETUGE,
/*7718*/              OPC_MoveParent,
/*7719*/              OPC_CheckType, MVT::i32,
/*7721*/              OPC_MoveParent,
/*7722*/              OPC_RecordChild1, // #2 = $T
/*7723*/              OPC_RecordChild2, // #3 = $F
/*7724*/              OPC_CheckType, MVT::f64,
/*7726*/              OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*7728*/              OPC_EmitNode, TARGET_VAL(Mips::SLTu), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*7737*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D64), 0,
                          1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f64 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETUGE:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 6
                      // Dst: (MOVZ_I_D64:f64 FGR64:f64:$T, (SLTu:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), FGR64:f64:$F)
/*7747*/            /*Scope*/ 31, /*->7779*/
/*7748*/              OPC_CheckCondCode, ISD::SETLE,
/*7750*/              OPC_MoveParent,
/*7751*/              OPC_CheckType, MVT::i32,
/*7753*/              OPC_MoveParent,
/*7754*/              OPC_RecordChild1, // #2 = $T
/*7755*/              OPC_RecordChild2, // #3 = $F
/*7756*/              OPC_CheckType, MVT::f64,
/*7758*/              OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*7760*/              OPC_EmitNode, TARGET_VAL(Mips::SLT), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4
/*7769*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D64), 0,
                          1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f64 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETLE:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 6
                      // Dst: (MOVZ_I_D64:f64 FGR64:f64:$T, (SLT:i32 CPURegs:i32:$rhs, CPURegs:i32:$lhs), FGR64:f64:$F)
/*7779*/            /*Scope*/ 31, /*->7811*/
/*7780*/              OPC_CheckCondCode, ISD::SETULE,
/*7782*/              OPC_MoveParent,
/*7783*/              OPC_CheckType, MVT::i32,
/*7785*/              OPC_MoveParent,
/*7786*/              OPC_RecordChild1, // #2 = $T
/*7787*/              OPC_RecordChild2, // #3 = $F
/*7788*/              OPC_CheckType, MVT::f64,
/*7790*/              OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*7792*/              OPC_EmitNode, TARGET_VAL(Mips::SLTu), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4
/*7801*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D64), 0,
                          1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f64 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETULE:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 6
                      // Dst: (MOVZ_I_D64:f64 FGR64:f64:$T, (SLTu:i32 CPURegs:i32:$rhs, CPURegs:i32:$lhs), FGR64:f64:$F)
/*7811*/            /*Scope*/ 31, /*->7843*/
/*7812*/              OPC_CheckCondCode, ISD::SETEQ,
/*7814*/              OPC_MoveParent,
/*7815*/              OPC_CheckType, MVT::i32,
/*7817*/              OPC_MoveParent,
/*7818*/              OPC_RecordChild1, // #2 = $T
/*7819*/              OPC_RecordChild2, // #3 = $F
/*7820*/              OPC_CheckType, MVT::f64,
/*7822*/              OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*7824*/              OPC_EmitNode, TARGET_VAL(Mips::XOR), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*7833*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D64), 0,
                          1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f64 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETEQ:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 6
                      // Dst: (MOVZ_I_D64:f64 FGR64:f64:$T, (XOR:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), FGR64:f64:$F)
/*7843*/            /*Scope*/ 31, /*->7875*/
/*7844*/              OPC_CheckCondCode, ISD::SETNE,
/*7846*/              OPC_MoveParent,
/*7847*/              OPC_CheckType, MVT::i32,
/*7849*/              OPC_MoveParent,
/*7850*/              OPC_RecordChild1, // #2 = $T
/*7851*/              OPC_RecordChild2, // #3 = $F
/*7852*/              OPC_CheckType, MVT::f64,
/*7854*/              OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*7856*/              OPC_EmitNode, TARGET_VAL(Mips::XOR), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*7865*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I_D64), 0,
                          1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f64 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETNE:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 6
                      // Dst: (MOVN_I_D64:f64 FGR64:f64:$T, (XOR:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), FGR64:f64:$F)
/*7875*/            0, /*End of Scope*/
/*7876*/          0, /*End of Scope*/
/*7877*/        0, /*End of Scope*/
/*7878*/      /*Scope*/ 11|128,5/*651*/, /*->8531*/
/*7880*/        OPC_CheckChild0Type, MVT::i64,
/*7882*/        OPC_Scope, 101, /*->7985*/ // 2 children in Scope
/*7884*/          OPC_MoveChild, 1,
/*7886*/          OPC_CheckInteger, 0, 
/*7888*/          OPC_MoveParent,
/*7889*/          OPC_MoveChild, 2,
/*7891*/          OPC_Scope, 22, /*->7915*/ // 4 children in Scope
/*7893*/            OPC_CheckCondCode, ISD::SETEQ,
/*7895*/            OPC_MoveParent,
/*7896*/            OPC_CheckType, MVT::i32,
/*7898*/            OPC_MoveParent,
/*7899*/            OPC_RecordChild1, // #1 = $T
/*7900*/            OPC_RecordChild2, // #2 = $F
/*7901*/            OPC_CheckType, MVT::f32,
/*7903*/            OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*7905*/            OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I64_S), 0,
                        1/*#VTs*/, MVT::f32, 3/*#Ops*/, 1, 0, 2, 
                    // Src: (select:f32 (setcc:i32 CPU64Regs:i64:$lhs, 0:i64, SETEQ:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 11
                    // Dst: (MOVZ_I64_S:f32 FGR32:f32:$T, CPU64Regs:i64:$lhs, FGR32:f32:$F)
/*7915*/          /*Scope*/ 22, /*->7938*/
/*7916*/            OPC_CheckCondCode, ISD::SETNE,
/*7918*/            OPC_MoveParent,
/*7919*/            OPC_CheckType, MVT::i32,
/*7921*/            OPC_MoveParent,
/*7922*/            OPC_RecordChild1, // #1 = $T
/*7923*/            OPC_RecordChild2, // #2 = $F
/*7924*/            OPC_CheckType, MVT::f32,
/*7926*/            OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*7928*/            OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I64_S), 0,
                        1/*#VTs*/, MVT::f32, 3/*#Ops*/, 1, 0, 2, 
                    // Src: (select:f32 (setcc:i32 CPU64Regs:i64:$lhs, 0:i64, SETNE:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 11
                    // Dst: (MOVN_I64_S:f32 FGR32:f32:$T, CPU64Regs:i64:$lhs, FGR32:f32:$F)
/*7938*/          /*Scope*/ 22, /*->7961*/
/*7939*/            OPC_CheckCondCode, ISD::SETEQ,
/*7941*/            OPC_MoveParent,
/*7942*/            OPC_CheckType, MVT::i32,
/*7944*/            OPC_MoveParent,
/*7945*/            OPC_RecordChild1, // #1 = $T
/*7946*/            OPC_RecordChild2, // #2 = $F
/*7947*/            OPC_CheckType, MVT::f64,
/*7949*/            OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*7951*/            OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I64_D64), 0,
                        1/*#VTs*/, MVT::f64, 3/*#Ops*/, 1, 0, 2, 
                    // Src: (select:f64 (setcc:i32 CPU64Regs:i64:$lhs, 0:i64, SETEQ:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 11
                    // Dst: (MOVZ_I64_D64:f64 FGR64:f64:$T, CPU64Regs:i64:$lhs, FGR64:f64:$F)
/*7961*/          /*Scope*/ 22, /*->7984*/
/*7962*/            OPC_CheckCondCode, ISD::SETNE,
/*7964*/            OPC_MoveParent,
/*7965*/            OPC_CheckType, MVT::i32,
/*7967*/            OPC_MoveParent,
/*7968*/            OPC_RecordChild1, // #1 = $T
/*7969*/            OPC_RecordChild2, // #2 = $F
/*7970*/            OPC_CheckType, MVT::f64,
/*7972*/            OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*7974*/            OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I64_D64), 0,
                        1/*#VTs*/, MVT::f64, 3/*#Ops*/, 1, 0, 2, 
                    // Src: (select:f64 (setcc:i32 CPU64Regs:i64:$lhs, 0:i64, SETNE:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 11
                    // Dst: (MOVN_I64_D64:f64 FGR64:f64:$T, CPU64Regs:i64:$lhs, FGR64:f64:$F)
/*7984*/          0, /*End of Scope*/
/*7985*/        /*Scope*/ 31|128,4/*543*/, /*->8530*/
/*7987*/          OPC_RecordChild1, // #1 = $rhs
/*7988*/          OPC_Scope, 20|128,1/*148*/, /*->8139*/ // 2 children in Scope
/*7991*/            OPC_MoveChild, 1,
/*7993*/            OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*7996*/            OPC_CheckPredicate, 28, // Predicate_immSExt16
/*7998*/            OPC_MoveParent,
/*7999*/            OPC_MoveChild, 2,
/*8001*/            OPC_Scope, 33, /*->8036*/ // 4 children in Scope
/*8003*/              OPC_CheckCondCode, ISD::SETGE,
/*8005*/              OPC_MoveParent,
/*8006*/              OPC_CheckType, MVT::i32,
/*8008*/              OPC_MoveParent,
/*8009*/              OPC_RecordChild1, // #2 = $T
/*8010*/              OPC_RecordChild2, // #3 = $F
/*8011*/              OPC_CheckType, MVT::f32,
/*8013*/              OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*8015*/              OPC_EmitConvertToTarget, 1,
/*8017*/              OPC_EmitNode, TARGET_VAL(Mips::SLTi64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5
/*8026*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_S), 0,
                          1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 5, 3, 
                      // Src: (select:f32 (setcc:i32 CPU64Regs:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16>>:$rhs, SETGE:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 10
                      // Dst: (MOVZ_I_S:f32 FGR32:f32:$T, (SLTi64:i32 CPU64Regs:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16>>:$rhs), FGR32:f32:$F)
/*8036*/            /*Scope*/ 33, /*->8070*/
/*8037*/              OPC_CheckCondCode, ISD::SETUGE,
/*8039*/              OPC_MoveParent,
/*8040*/              OPC_CheckType, MVT::i32,
/*8042*/              OPC_MoveParent,
/*8043*/              OPC_RecordChild1, // #2 = $T
/*8044*/              OPC_RecordChild2, // #3 = $F
/*8045*/              OPC_CheckType, MVT::f32,
/*8047*/              OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*8049*/              OPC_EmitConvertToTarget, 1,
/*8051*/              OPC_EmitNode, TARGET_VAL(Mips::SLTiu64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5
/*8060*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_S), 0,
                          1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 5, 3, 
                      // Src: (select:f32 (setcc:i32 CPU64Regs:i64:$lh, (imm:i64)<<P:Predicate_immSExt16>>:$rh, SETUGE:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 10
                      // Dst: (MOVZ_I_S:f32 FGR32:f32:$T, (SLTiu64:i32 CPU64Regs:i64:$lh, (imm:i64)<<P:Predicate_immSExt16>>:$rh), FGR32:f32:$F)
/*8070*/            /*Scope*/ 33, /*->8104*/
/*8071*/              OPC_CheckCondCode, ISD::SETGE,
/*8073*/              OPC_MoveParent,
/*8074*/              OPC_CheckType, MVT::i32,
/*8076*/              OPC_MoveParent,
/*8077*/              OPC_RecordChild1, // #2 = $T
/*8078*/              OPC_RecordChild2, // #3 = $F
/*8079*/              OPC_CheckType, MVT::f64,
/*8081*/              OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*8083*/              OPC_EmitConvertToTarget, 1,
/*8085*/              OPC_EmitNode, TARGET_VAL(Mips::SLTi64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5
/*8094*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D64), 0,
                          1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 5, 3, 
                      // Src: (select:f64 (setcc:i32 CPU64Regs:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16>>:$rhs, SETGE:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 10
                      // Dst: (MOVZ_I_D64:f64 FGR64:f64:$T, (SLTi64:i32 CPU64Regs:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16>>:$rhs), FGR64:f64:$F)
/*8104*/            /*Scope*/ 33, /*->8138*/
/*8105*/              OPC_CheckCondCode, ISD::SETUGE,
/*8107*/              OPC_MoveParent,
/*8108*/              OPC_CheckType, MVT::i32,
/*8110*/              OPC_MoveParent,
/*8111*/              OPC_RecordChild1, // #2 = $T
/*8112*/              OPC_RecordChild2, // #3 = $F
/*8113*/              OPC_CheckType, MVT::f64,
/*8115*/              OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*8117*/              OPC_EmitConvertToTarget, 1,
/*8119*/              OPC_EmitNode, TARGET_VAL(Mips::SLTiu64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5
/*8128*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D64), 0,
                          1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 5, 3, 
                      // Src: (select:f64 (setcc:i32 CPU64Regs:i64:$lh, (imm:i64)<<P:Predicate_immSExt16>>:$rh, SETUGE:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 10
                      // Dst: (MOVZ_I_D64:f64 FGR64:f64:$T, (SLTiu64:i32 CPU64Regs:i64:$lh, (imm:i64)<<P:Predicate_immSExt16>>:$rh), FGR64:f64:$F)
/*8138*/            0, /*End of Scope*/
/*8139*/          /*Scope*/ 4|128,3/*388*/, /*->8529*/
/*8141*/            OPC_MoveChild, 2,
/*8143*/            OPC_Scope, 31, /*->8176*/ // 12 children in Scope
/*8145*/              OPC_CheckCondCode, ISD::SETGE,
/*8147*/              OPC_MoveParent,
/*8148*/              OPC_CheckType, MVT::i32,
/*8150*/              OPC_MoveParent,
/*8151*/              OPC_RecordChild1, // #2 = $T
/*8152*/              OPC_RecordChild2, // #3 = $F
/*8153*/              OPC_CheckType, MVT::f32,
/*8155*/              OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*8157*/              OPC_EmitNode, TARGET_VAL(Mips::SLT64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*8166*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_S), 0,
                          1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f32 (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETGE:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 6
                      // Dst: (MOVZ_I_S:f32 FGR32:f32:$T, (SLT64:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs), FGR32:f32:$F)
/*8176*/            /*Scope*/ 31, /*->8208*/
/*8177*/              OPC_CheckCondCode, ISD::SETUGE,
/*8179*/              OPC_MoveParent,
/*8180*/              OPC_CheckType, MVT::i32,
/*8182*/              OPC_MoveParent,
/*8183*/              OPC_RecordChild1, // #2 = $T
/*8184*/              OPC_RecordChild2, // #3 = $F
/*8185*/              OPC_CheckType, MVT::f32,
/*8187*/              OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*8189*/              OPC_EmitNode, TARGET_VAL(Mips::SLTu64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*8198*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_S), 0,
                          1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f32 (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETUGE:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 6
                      // Dst: (MOVZ_I_S:f32 FGR32:f32:$T, (SLTu64:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs), FGR32:f32:$F)
/*8208*/            /*Scope*/ 31, /*->8240*/
/*8209*/              OPC_CheckCondCode, ISD::SETLE,
/*8211*/              OPC_MoveParent,
/*8212*/              OPC_CheckType, MVT::i32,
/*8214*/              OPC_MoveParent,
/*8215*/              OPC_RecordChild1, // #2 = $T
/*8216*/              OPC_RecordChild2, // #3 = $F
/*8217*/              OPC_CheckType, MVT::f32,
/*8219*/              OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*8221*/              OPC_EmitNode, TARGET_VAL(Mips::SLT64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4
/*8230*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_S), 0,
                          1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f32 (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETLE:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 6
                      // Dst: (MOVZ_I_S:f32 FGR32:f32:$T, (SLT64:i32 CPU64Regs:i64:$rhs, CPU64Regs:i64:$lhs), FGR32:f32:$F)
/*8240*/            /*Scope*/ 31, /*->8272*/
/*8241*/              OPC_CheckCondCode, ISD::SETULE,
/*8243*/              OPC_MoveParent,
/*8244*/              OPC_CheckType, MVT::i32,
/*8246*/              OPC_MoveParent,
/*8247*/              OPC_RecordChild1, // #2 = $T
/*8248*/              OPC_RecordChild2, // #3 = $F
/*8249*/              OPC_CheckType, MVT::f32,
/*8251*/              OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*8253*/              OPC_EmitNode, TARGET_VAL(Mips::SLTu64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4
/*8262*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_S), 0,
                          1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f32 (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETULE:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 6
                      // Dst: (MOVZ_I_S:f32 FGR32:f32:$T, (SLTu64:i32 CPU64Regs:i64:$rhs, CPU64Regs:i64:$lhs), FGR32:f32:$F)
/*8272*/            /*Scope*/ 31, /*->8304*/
/*8273*/              OPC_CheckCondCode, ISD::SETEQ,
/*8275*/              OPC_MoveParent,
/*8276*/              OPC_CheckType, MVT::i32,
/*8278*/              OPC_MoveParent,
/*8279*/              OPC_RecordChild1, // #2 = $T
/*8280*/              OPC_RecordChild2, // #3 = $F
/*8281*/              OPC_CheckType, MVT::f32,
/*8283*/              OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*8285*/              OPC_EmitNode, TARGET_VAL(Mips::XOR64), 0,
                          1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1,  // Results = #4
/*8294*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I64_S), 0,
                          1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f32 (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETEQ:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 6
                      // Dst: (MOVZ_I64_S:f32 FGR32:f32:$T, (XOR64:i64 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs), FGR32:f32:$F)
/*8304*/            /*Scope*/ 31, /*->8336*/
/*8305*/              OPC_CheckCondCode, ISD::SETNE,
/*8307*/              OPC_MoveParent,
/*8308*/              OPC_CheckType, MVT::i32,
/*8310*/              OPC_MoveParent,
/*8311*/              OPC_RecordChild1, // #2 = $T
/*8312*/              OPC_RecordChild2, // #3 = $F
/*8313*/              OPC_CheckType, MVT::f32,
/*8315*/              OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*8317*/              OPC_EmitNode, TARGET_VAL(Mips::XOR64), 0,
                          1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1,  // Results = #4
/*8326*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I64_S), 0,
                          1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f32 (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETNE:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 6
                      // Dst: (MOVN_I64_S:f32 FGR32:f32:$T, (XOR64:i64 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs), FGR32:f32:$F)
/*8336*/            /*Scope*/ 31, /*->8368*/
/*8337*/              OPC_CheckCondCode, ISD::SETGE,
/*8339*/              OPC_MoveParent,
/*8340*/              OPC_CheckType, MVT::i32,
/*8342*/              OPC_MoveParent,
/*8343*/              OPC_RecordChild1, // #2 = $T
/*8344*/              OPC_RecordChild2, // #3 = $F
/*8345*/              OPC_CheckType, MVT::f64,
/*8347*/              OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*8349*/              OPC_EmitNode, TARGET_VAL(Mips::SLT64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*8358*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D64), 0,
                          1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f64 (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETGE:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 6
                      // Dst: (MOVZ_I_D64:f64 FGR64:f64:$T, (SLT64:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs), FGR64:f64:$F)
/*8368*/            /*Scope*/ 31, /*->8400*/
/*8369*/              OPC_CheckCondCode, ISD::SETUGE,
/*8371*/              OPC_MoveParent,
/*8372*/              OPC_CheckType, MVT::i32,
/*8374*/              OPC_MoveParent,
/*8375*/              OPC_RecordChild1, // #2 = $T
/*8376*/              OPC_RecordChild2, // #3 = $F
/*8377*/              OPC_CheckType, MVT::f64,
/*8379*/              OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*8381*/              OPC_EmitNode, TARGET_VAL(Mips::SLTu64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*8390*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D64), 0,
                          1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f64 (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETUGE:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 6
                      // Dst: (MOVZ_I_D64:f64 FGR64:f64:$T, (SLTu64:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs), FGR64:f64:$F)
/*8400*/            /*Scope*/ 31, /*->8432*/
/*8401*/              OPC_CheckCondCode, ISD::SETLE,
/*8403*/              OPC_MoveParent,
/*8404*/              OPC_CheckType, MVT::i32,
/*8406*/              OPC_MoveParent,
/*8407*/              OPC_RecordChild1, // #2 = $T
/*8408*/              OPC_RecordChild2, // #3 = $F
/*8409*/              OPC_CheckType, MVT::f64,
/*8411*/              OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*8413*/              OPC_EmitNode, TARGET_VAL(Mips::SLT64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4
/*8422*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D64), 0,
                          1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f64 (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETLE:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 6
                      // Dst: (MOVZ_I_D64:f64 FGR64:f64:$T, (SLT64:i32 CPU64Regs:i64:$rhs, CPU64Regs:i64:$lhs), FGR64:f64:$F)
/*8432*/            /*Scope*/ 31, /*->8464*/
/*8433*/              OPC_CheckCondCode, ISD::SETULE,
/*8435*/              OPC_MoveParent,
/*8436*/              OPC_CheckType, MVT::i32,
/*8438*/              OPC_MoveParent,
/*8439*/              OPC_RecordChild1, // #2 = $T
/*8440*/              OPC_RecordChild2, // #3 = $F
/*8441*/              OPC_CheckType, MVT::f64,
/*8443*/              OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*8445*/              OPC_EmitNode, TARGET_VAL(Mips::SLTu64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4
/*8454*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D64), 0,
                          1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f64 (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETULE:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 6
                      // Dst: (MOVZ_I_D64:f64 FGR64:f64:$T, (SLTu64:i32 CPU64Regs:i64:$rhs, CPU64Regs:i64:$lhs), FGR64:f64:$F)
/*8464*/            /*Scope*/ 31, /*->8496*/
/*8465*/              OPC_CheckCondCode, ISD::SETEQ,
/*8467*/              OPC_MoveParent,
/*8468*/              OPC_CheckType, MVT::i32,
/*8470*/              OPC_MoveParent,
/*8471*/              OPC_RecordChild1, // #2 = $T
/*8472*/              OPC_RecordChild2, // #3 = $F
/*8473*/              OPC_CheckType, MVT::f64,
/*8475*/              OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*8477*/              OPC_EmitNode, TARGET_VAL(Mips::XOR64), 0,
                          1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1,  // Results = #4
/*8486*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I64_D64), 0,
                          1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f64 (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETEQ:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 6
                      // Dst: (MOVZ_I64_D64:f64 FGR64:f64:$T, (XOR64:i64 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs), FGR64:f64:$F)
/*8496*/            /*Scope*/ 31, /*->8528*/
/*8497*/              OPC_CheckCondCode, ISD::SETNE,
/*8499*/              OPC_MoveParent,
/*8500*/              OPC_CheckType, MVT::i32,
/*8502*/              OPC_MoveParent,
/*8503*/              OPC_RecordChild1, // #2 = $T
/*8504*/              OPC_RecordChild2, // #3 = $F
/*8505*/              OPC_CheckType, MVT::f64,
/*8507*/              OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*8509*/              OPC_EmitNode, TARGET_VAL(Mips::XOR64), 0,
                          1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1,  // Results = #4
/*8518*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I64_D64), 0,
                          1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f64 (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETNE:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 6
                      // Dst: (MOVN_I64_D64:f64 FGR64:f64:$T, (XOR64:i64 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs), FGR64:f64:$F)
/*8528*/            0, /*End of Scope*/
/*8529*/          0, /*End of Scope*/
/*8530*/        0, /*End of Scope*/
/*8531*/      0, /*End of Scope*/
/*8532*/    /*Scope*/ 89, /*->8622*/
/*8533*/      OPC_RecordChild0, // #0 = $cond
/*8534*/      OPC_Scope, 50, /*->8586*/ // 2 children in Scope
/*8536*/        OPC_CheckChild0Type, MVT::i32,
/*8538*/        OPC_RecordChild1, // #1 = $T
/*8539*/        OPC_RecordChild2, // #2 = $F
/*8540*/        OPC_SwitchType /*2 cases */, 12,  MVT::f32,// ->8555
/*8543*/          OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*8545*/          OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I_S), 0,
                      1/*#VTs*/, MVT::f32, 3/*#Ops*/, 1, 0, 2, 
                  // Src: (select:f32 CPURegs:i32:$cond, FGR32:f32:$T, FGR32:f32:$F) - Complexity = 3
                  // Dst: (MOVN_I_S:f32 FGR32:f32:$T, CPURegs:i32:$cond, FGR32:f32:$F)
                /*SwitchType*/ 28,  MVT::f64,// ->8585
/*8557*/          OPC_Scope, 12, /*->8571*/ // 2 children in Scope
/*8559*/            OPC_CheckPatternPredicate, 13, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*8561*/            OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I_D32), 0,
                        1/*#VTs*/, MVT::f64, 3/*#Ops*/, 1, 0, 2, 
                    // Src: (select:f64 CPURegs:i32:$cond, AFGR64:f64:$T, AFGR64:f64:$F) - Complexity = 3
                    // Dst: (MOVN_I_D32:f64 AFGR64:f64:$T, CPURegs:i32:$cond, AFGR64:f64:$F)
/*8571*/          /*Scope*/ 12, /*->8584*/
/*8572*/            OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*8574*/            OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I_D64), 0,
                        1/*#VTs*/, MVT::f64, 3/*#Ops*/, 1, 0, 2, 
                    // Src: (select:f64 CPURegs:i32:$cond, FGR64:f64:$T, FGR64:f64:$F) - Complexity = 3
                    // Dst: (MOVN_I_D64:f64 FGR64:f64:$T, CPURegs:i32:$cond, FGR64:f64:$F)
/*8584*/          0, /*End of Scope*/
                0, // EndSwitchType
/*8586*/      /*Scope*/ 34, /*->8621*/
/*8587*/        OPC_CheckChild0Type, MVT::i64,
/*8589*/        OPC_RecordChild1, // #1 = $T
/*8590*/        OPC_RecordChild2, // #2 = $F
/*8591*/        OPC_SwitchType /*2 cases */, 12,  MVT::f32,// ->8606
/*8594*/          OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*8596*/          OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I64_S), 0,
                      1/*#VTs*/, MVT::f32, 3/*#Ops*/, 1, 0, 2, 
                  // Src: (select:f32 CPU64Regs:i64:$cond, FGR32:f32:$T, FGR32:f32:$F) - Complexity = 3
                  // Dst: (MOVN_I64_S:f32 FGR32:f32:$T, CPU64Regs:i64:$cond, FGR32:f32:$F)
                /*SwitchType*/ 12,  MVT::f64,// ->8620
/*8608*/          OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*8610*/          OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I64_D64), 0,
                      1/*#VTs*/, MVT::f64, 3/*#Ops*/, 1, 0, 2, 
                  // Src: (select:f64 CPU64Regs:i64:$cond, FGR64:f64:$T, FGR64:f64:$F) - Complexity = 3
                  // Dst: (MOVN_I64_D64:f64 FGR64:f64:$T, CPU64Regs:i64:$cond, FGR64:f64:$F)
                0, // EndSwitchType
/*8621*/      0, /*End of Scope*/
/*8622*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 53,  TARGET_VAL(MipsISD::Ext),// ->8679
/*8626*/    OPC_RecordChild0, // #0 = $rs
/*8627*/    OPC_RecordChild1, // #1 = $pos
/*8628*/    OPC_MoveChild, 1,
/*8630*/    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*8633*/    OPC_MoveParent,
/*8634*/    OPC_RecordChild2, // #2 = $sz
/*8635*/    OPC_MoveChild, 2,
/*8637*/    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*8640*/    OPC_MoveParent,
/*8641*/    OPC_SwitchType /*2 cases */, 16,  MVT::i32,// ->8660
/*8644*/      OPC_CheckPatternPredicate, 15, // (Subtarget.hasMips32r2()) && (Subtarget.hasStandardEncoding())
/*8646*/      OPC_EmitConvertToTarget, 1,
/*8648*/      OPC_EmitConvertToTarget, 2,
/*8650*/      OPC_MorphNodeTo, TARGET_VAL(Mips::EXT), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 3, 4, 
              // Src: (MipsExt:i32 CPURegs:i32:$rs, (imm:i32):$pos, (imm:i32):$sz) - Complexity = 9
              // Dst: (EXT:i32 CPURegs:i32:$rs, (imm:i32):$pos, (imm:i32):$sz)
            /*SwitchType*/ 16,  MVT::i64,// ->8678
/*8662*/      OPC_CheckPatternPredicate, 15, // (Subtarget.hasMips32r2()) && (Subtarget.hasStandardEncoding())
/*8664*/      OPC_EmitConvertToTarget, 1,
/*8666*/      OPC_EmitConvertToTarget, 2,
/*8668*/      OPC_MorphNodeTo, TARGET_VAL(Mips::DEXT), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 3, 4, 
              // Src: (MipsExt:i64 CPU64Regs:i64:$rs, (imm:i32):$pos, (imm:i32):$sz) - Complexity = 9
              // Dst: (DEXT:i64 CPU64Regs:i64:$rs, (imm:i32):$pos, (imm:i32):$sz)
            0, // EndSwitchType
          /*SwitchOpcode*/ 56,  TARGET_VAL(MipsISD::Ins),// ->8738
/*8682*/    OPC_RecordChild0, // #0 = $rs
/*8683*/    OPC_RecordChild1, // #1 = $pos
/*8684*/    OPC_MoveChild, 1,
/*8686*/    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*8689*/    OPC_MoveParent,
/*8690*/    OPC_RecordChild2, // #2 = $sz
/*8691*/    OPC_MoveChild, 2,
/*8693*/    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*8696*/    OPC_MoveParent,
/*8697*/    OPC_RecordChild3, // #3 = $src
/*8698*/    OPC_SwitchType /*2 cases */, 17,  MVT::i32,// ->8718
/*8701*/      OPC_CheckPatternPredicate, 15, // (Subtarget.hasMips32r2()) && (Subtarget.hasStandardEncoding())
/*8703*/      OPC_EmitConvertToTarget, 1,
/*8705*/      OPC_EmitConvertToTarget, 2,
/*8707*/      OPC_MorphNodeTo, TARGET_VAL(Mips::INS), 0,
                  1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 4, 5, 3, 
              // Src: (MipsIns:i32 CPURegs:i32:$rs, (imm:i32):$pos, (imm:i32):$sz, CPURegs:i32:$src) - Complexity = 9
              // Dst: (INS:i32 CPURegs:i32:$rs, (imm:i32):$pos, (imm:i32):$sz, CPURegs:i32:$src)
            /*SwitchType*/ 17,  MVT::i64,// ->8737
/*8720*/      OPC_CheckPatternPredicate, 15, // (Subtarget.hasMips32r2()) && (Subtarget.hasStandardEncoding())
/*8722*/      OPC_EmitConvertToTarget, 1,
/*8724*/      OPC_EmitConvertToTarget, 2,
/*8726*/      OPC_MorphNodeTo, TARGET_VAL(Mips::DINS), 0,
                  1/*#VTs*/, MVT::i64, 4/*#Ops*/, 0, 4, 5, 3, 
              // Src: (MipsIns:i64 CPU64Regs:i64:$rs, (imm:i32):$pos, (imm:i32):$sz, CPU64Regs:i64:$src) - Complexity = 9
              // Dst: (DINS:i64 CPU64Regs:i64:$rs, (imm:i32):$pos, (imm:i32):$sz, CPU64Regs:i64:$src)
            0, // EndSwitchType
          /*SwitchOpcode*/ 82|128,4/*594*/,  TARGET_VAL(ISD::ADD),// ->9336
/*8742*/    OPC_Scope, 110|128,1/*238*/, /*->8983*/ // 3 children in Scope
/*8745*/      OPC_RecordChild0, // #0 = $hi
/*8746*/      OPC_MoveChild, 1,
/*8748*/      OPC_SwitchOpcode /*2 cases */, 57|128,1/*185*/,  TARGET_VAL(MipsISD::Lo),// ->8938
/*8753*/        OPC_RecordChild0, // #1 = $lo
/*8754*/        OPC_MoveChild, 0,
/*8756*/        OPC_SwitchOpcode /*5 cases */, 45,  TARGET_VAL(ISD::TargetGlobalAddress),// ->8805
/*8760*/          OPC_MoveParent,
/*8761*/          OPC_MoveParent,
/*8762*/          OPC_SwitchType /*2 cases */, 26,  MVT::i32,// ->8791
/*8765*/            OPC_Scope, 11, /*->8778*/ // 2 children in Scope
/*8767*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*8769*/              OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                      // Src: (add:i32 CPURegs:i32:$hi, (MipsLo:i32 (tglobaladdr:i32):$lo)) - Complexity = 9
                      // Dst: (ADDiu:i32 CPURegs:i32:$hi, (tglobaladdr:i32):$lo)
/*8778*/            /*Scope*/ 11, /*->8790*/
/*8779*/              OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*8781*/              OPC_MorphNodeTo, TARGET_VAL(Mips::AddiuRxRxImmX16), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                      // Src: (add:i32 CPU16Regs:i32:$hi, (MipsLo:i32 (tglobaladdr:i32):$lo)) - Complexity = 9
                      // Dst: (AddiuRxRxImmX16:i32 CPU16Regs:i32:$hi, (tglobaladdr:i32):$lo)
/*8790*/            0, /*End of Scope*/
                  /*SwitchType*/ 11,  MVT::i64,// ->8804
/*8793*/            OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*8795*/            OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i64 CPU64Regs:i64:$hi, (MipsLo:i64 (tglobaladdr:i64):$lo)) - Complexity = 9
                    // Dst: (DADDiu:i64 CPU64Regs:i64:$hi, (tglobaladdr:i64):$lo)
                  0, // EndSwitchType
                /*SwitchOpcode*/ 30,  TARGET_VAL(ISD::TargetBlockAddress),// ->8838
/*8808*/          OPC_MoveParent,
/*8809*/          OPC_MoveParent,
/*8810*/          OPC_SwitchType /*2 cases */, 11,  MVT::i32,// ->8824
/*8813*/            OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*8815*/            OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i32 CPURegs:i32:$hi, (MipsLo:i32 (tblockaddress:i32):$lo)) - Complexity = 9
                    // Dst: (ADDiu:i32 CPURegs:i32:$hi, (tblockaddress:i32):$lo)
                  /*SwitchType*/ 11,  MVT::i64,// ->8837
/*8826*/            OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*8828*/            OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i64 CPU64Regs:i64:$hi, (MipsLo:i64 (tblockaddress:i64):$lo)) - Complexity = 9
                    // Dst: (DADDiu:i64 CPU64Regs:i64:$hi, (tblockaddress:i64):$lo)
                  0, // EndSwitchType
                /*SwitchOpcode*/ 30,  TARGET_VAL(ISD::TargetJumpTable),// ->8871
/*8841*/          OPC_MoveParent,
/*8842*/          OPC_MoveParent,
/*8843*/          OPC_SwitchType /*2 cases */, 11,  MVT::i32,// ->8857
/*8846*/            OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*8848*/            OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i32 CPURegs:i32:$hi, (MipsLo:i32 (tjumptable:i32):$lo)) - Complexity = 9
                    // Dst: (ADDiu:i32 CPURegs:i32:$hi, (tjumptable:i32):$lo)
                  /*SwitchType*/ 11,  MVT::i64,// ->8870
/*8859*/            OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*8861*/            OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i64 CPU64Regs:i64:$hi, (MipsLo:i64 (tjumptable:i64):$lo)) - Complexity = 9
                    // Dst: (DADDiu:i64 CPU64Regs:i64:$hi, (tjumptable:i64):$lo)
                  0, // EndSwitchType
                /*SwitchOpcode*/ 30,  TARGET_VAL(ISD::TargetConstantPool),// ->8904
/*8874*/          OPC_MoveParent,
/*8875*/          OPC_MoveParent,
/*8876*/          OPC_SwitchType /*2 cases */, 11,  MVT::i32,// ->8890
/*8879*/            OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*8881*/            OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i32 CPURegs:i32:$hi, (MipsLo:i32 (tconstpool:i32):$lo)) - Complexity = 9
                    // Dst: (ADDiu:i32 CPURegs:i32:$hi, (tconstpool:i32):$lo)
                  /*SwitchType*/ 11,  MVT::i64,// ->8903
/*8892*/            OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*8894*/            OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i64 CPU64Regs:i64:$hi, (MipsLo:i64 (tconstpool:i64):$lo)) - Complexity = 9
                    // Dst: (DADDiu:i64 CPU64Regs:i64:$hi, (tconstpool:i64):$lo)
                  0, // EndSwitchType
                /*SwitchOpcode*/ 30,  TARGET_VAL(ISD::TargetGlobalTLSAddress),// ->8937
/*8907*/          OPC_MoveParent,
/*8908*/          OPC_MoveParent,
/*8909*/          OPC_SwitchType /*2 cases */, 11,  MVT::i32,// ->8923
/*8912*/            OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*8914*/            OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i32 CPURegs:i32:$hi, (MipsLo:i32 (tglobaltlsaddr:i32):$lo)) - Complexity = 9
                    // Dst: (ADDiu:i32 CPURegs:i32:$hi, (tglobaltlsaddr:i32):$lo)
                  /*SwitchType*/ 11,  MVT::i64,// ->8936
/*8925*/            OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*8927*/            OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i64 CPU64Regs:i64:$hi, (MipsLo:i64 (tglobaltlsaddr:i64):$lo)) - Complexity = 9
                    // Dst: (DADDiu:i64 CPU64Regs:i64:$hi, (tglobaltlsaddr:i64):$lo)
                  0, // EndSwitchType
                0, // EndSwitchOpcode
              /*SwitchOpcode*/ 41,  TARGET_VAL(MipsISD::GPRel),// ->8982
/*8941*/        OPC_RecordChild0, // #1 = $in
/*8942*/        OPC_MoveChild, 0,
/*8944*/        OPC_SwitchOpcode /*2 cases */, 15,  TARGET_VAL(ISD::TargetGlobalAddress),// ->8963
/*8948*/          OPC_MoveParent,
/*8949*/          OPC_MoveParent,
/*8950*/          OPC_CheckType, MVT::i32,
/*8952*/          OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*8954*/          OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (add:i32 CPURegs:i32:$gp, (MipsGPRel:i32 (tglobaladdr:i32):$in)) - Complexity = 9
                  // Dst: (ADDiu:i32 CPURegs:i32:$gp, (tglobaladdr:i32):$in)
                /*SwitchOpcode*/ 15,  TARGET_VAL(ISD::TargetConstantPool),// ->8981
/*8966*/          OPC_MoveParent,
/*8967*/          OPC_MoveParent,
/*8968*/          OPC_CheckType, MVT::i32,
/*8970*/          OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*8972*/          OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (add:i32 CPURegs:i32:$gp, (MipsGPRel:i32 (tconstpool:i32):$in)) - Complexity = 9
                  // Dst: (ADDiu:i32 CPURegs:i32:$gp, (tconstpool:i32):$in)
                0, // EndSwitchOpcode
              0, // EndSwitchOpcode
/*8983*/    /*Scope*/ 116|128,1/*244*/, /*->9229*/
/*8985*/      OPC_MoveChild, 0,
/*8987*/      OPC_SwitchOpcode /*2 cases */, 62|128,1/*190*/,  TARGET_VAL(MipsISD::Lo),// ->9182
/*8992*/        OPC_RecordChild0, // #0 = $lo
/*8993*/        OPC_MoveChild, 0,
/*8995*/        OPC_SwitchOpcode /*5 cases */, 46,  TARGET_VAL(ISD::TargetGlobalAddress),// ->9045
/*8999*/          OPC_MoveParent,
/*9000*/          OPC_MoveParent,
/*9001*/          OPC_RecordChild1, // #1 = $hi
/*9002*/          OPC_SwitchType /*2 cases */, 11,  MVT::i64,// ->9016
/*9005*/            OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*9007*/            OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i64 (MipsLo:i64 (tglobaladdr:i64):$lo), CPU64Regs:i64:$hi) - Complexity = 9
                    // Dst: (DADDiu:i64 CPU64Regs:i64:$hi, (tglobaladdr:i64):$lo)
                  /*SwitchType*/ 26,  MVT::i32,// ->9044
/*9018*/            OPC_Scope, 11, /*->9031*/ // 2 children in Scope
/*9020*/              OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*9022*/              OPC_MorphNodeTo, TARGET_VAL(Mips::AddiuRxRxImmX16), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                      // Src: (add:i32 (MipsLo:i32 (tglobaladdr:i32):$lo), CPU16Regs:i32:$hi) - Complexity = 9
                      // Dst: (AddiuRxRxImmX16:i32 CPU16Regs:i32:$hi, (tglobaladdr:i32):$lo)
/*9031*/            /*Scope*/ 11, /*->9043*/
/*9032*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*9034*/              OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                      // Src: (add:i32 (MipsLo:i32 (tglobaladdr:i32):$lo), CPURegs:i32:$hi) - Complexity = 9
                      // Dst: (ADDiu:i32 CPURegs:i32:$hi, (tglobaladdr:i32):$lo)
/*9043*/            0, /*End of Scope*/
                  0, // EndSwitchType
                /*SwitchOpcode*/ 31,  TARGET_VAL(ISD::TargetBlockAddress),// ->9079
/*9048*/          OPC_MoveParent,
/*9049*/          OPC_MoveParent,
/*9050*/          OPC_RecordChild1, // #1 = $hi
/*9051*/          OPC_SwitchType /*2 cases */, 11,  MVT::i64,// ->9065
/*9054*/            OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*9056*/            OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i64 (MipsLo:i64 (tblockaddress:i64):$lo), CPU64Regs:i64:$hi) - Complexity = 9
                    // Dst: (DADDiu:i64 CPU64Regs:i64:$hi, (tblockaddress:i64):$lo)
                  /*SwitchType*/ 11,  MVT::i32,// ->9078
/*9067*/            OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*9069*/            OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i32 (MipsLo:i32 (tblockaddress:i32):$lo), CPURegs:i32:$hi) - Complexity = 9
                    // Dst: (ADDiu:i32 CPURegs:i32:$hi, (tblockaddress:i32):$lo)
                  0, // EndSwitchType
                /*SwitchOpcode*/ 31,  TARGET_VAL(ISD::TargetJumpTable),// ->9113
/*9082*/          OPC_MoveParent,
/*9083*/          OPC_MoveParent,
/*9084*/          OPC_RecordChild1, // #1 = $hi
/*9085*/          OPC_SwitchType /*2 cases */, 11,  MVT::i64,// ->9099
/*9088*/            OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*9090*/            OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i64 (MipsLo:i64 (tjumptable:i64):$lo), CPU64Regs:i64:$hi) - Complexity = 9
                    // Dst: (DADDiu:i64 CPU64Regs:i64:$hi, (tjumptable:i64):$lo)
                  /*SwitchType*/ 11,  MVT::i32,// ->9112
/*9101*/            OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*9103*/            OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i32 (MipsLo:i32 (tjumptable:i32):$lo), CPURegs:i32:$hi) - Complexity = 9
                    // Dst: (ADDiu:i32 CPURegs:i32:$hi, (tjumptable:i32):$lo)
                  0, // EndSwitchType
                /*SwitchOpcode*/ 31,  TARGET_VAL(ISD::TargetConstantPool),// ->9147
/*9116*/          OPC_MoveParent,
/*9117*/          OPC_MoveParent,
/*9118*/          OPC_RecordChild1, // #1 = $hi
/*9119*/          OPC_SwitchType /*2 cases */, 11,  MVT::i64,// ->9133
/*9122*/            OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*9124*/            OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i64 (MipsLo:i64 (tconstpool:i64):$lo), CPU64Regs:i64:$hi) - Complexity = 9
                    // Dst: (DADDiu:i64 CPU64Regs:i64:$hi, (tconstpool:i64):$lo)
                  /*SwitchType*/ 11,  MVT::i32,// ->9146
/*9135*/            OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*9137*/            OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i32 (MipsLo:i32 (tconstpool:i32):$lo), CPURegs:i32:$hi) - Complexity = 9
                    // Dst: (ADDiu:i32 CPURegs:i32:$hi, (tconstpool:i32):$lo)
                  0, // EndSwitchType
                /*SwitchOpcode*/ 31,  TARGET_VAL(ISD::TargetGlobalTLSAddress),// ->9181
/*9150*/          OPC_MoveParent,
/*9151*/          OPC_MoveParent,
/*9152*/          OPC_RecordChild1, // #1 = $hi
/*9153*/          OPC_SwitchType /*2 cases */, 11,  MVT::i64,// ->9167
/*9156*/            OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*9158*/            OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i64 (MipsLo:i64 (tglobaltlsaddr:i64):$lo), CPU64Regs:i64:$hi) - Complexity = 9
                    // Dst: (DADDiu:i64 CPU64Regs:i64:$hi, (tglobaltlsaddr:i64):$lo)
                  /*SwitchType*/ 11,  MVT::i32,// ->9180
/*9169*/            OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*9171*/            OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i32 (MipsLo:i32 (tglobaltlsaddr:i32):$lo), CPURegs:i32:$hi) - Complexity = 9
                    // Dst: (ADDiu:i32 CPURegs:i32:$hi, (tglobaltlsaddr:i32):$lo)
                  0, // EndSwitchType
                0, // EndSwitchOpcode
              /*SwitchOpcode*/ 43,  TARGET_VAL(MipsISD::GPRel),// ->9228
/*9185*/        OPC_RecordChild0, // #0 = $in
/*9186*/        OPC_MoveChild, 0,
/*9188*/        OPC_SwitchOpcode /*2 cases */, 16,  TARGET_VAL(ISD::TargetGlobalAddress),// ->9208
/*9192*/          OPC_MoveParent,
/*9193*/          OPC_MoveParent,
/*9194*/          OPC_RecordChild1, // #1 = $gp
/*9195*/          OPC_CheckType, MVT::i32,
/*9197*/          OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*9199*/          OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                  // Src: (add:i32 (MipsGPRel:i32 (tglobaladdr:i32):$in), CPURegs:i32:$gp) - Complexity = 9
                  // Dst: (ADDiu:i32 CPURegs:i32:$gp, (tglobaladdr:i32):$in)
                /*SwitchOpcode*/ 16,  TARGET_VAL(ISD::TargetConstantPool),// ->9227
/*9211*/          OPC_MoveParent,
/*9212*/          OPC_MoveParent,
/*9213*/          OPC_RecordChild1, // #1 = $gp
/*9214*/          OPC_CheckType, MVT::i32,
/*9216*/          OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*9218*/          OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                  // Src: (add:i32 (MipsGPRel:i32 (tconstpool:i32):$in), CPURegs:i32:$gp) - Complexity = 9
                  // Dst: (ADDiu:i32 CPURegs:i32:$gp, (tconstpool:i32):$in)
                0, // EndSwitchOpcode
              0, // EndSwitchOpcode
/*9229*/    /*Scope*/ 105, /*->9335*/
/*9230*/      OPC_RecordChild0, // #0 = $rs
/*9231*/      OPC_RecordChild1, // #1 = $imm16
/*9232*/      OPC_Scope, 57, /*->9291*/ // 3 children in Scope
/*9234*/        OPC_MoveChild, 1,
/*9236*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*9239*/        OPC_CheckPredicate, 28, // Predicate_immSExt16
/*9241*/        OPC_MoveParent,
/*9242*/        OPC_SwitchType /*2 cases */, 30,  MVT::i32,// ->9275
/*9245*/          OPC_Scope, 13, /*->9260*/ // 2 children in Scope
/*9247*/            OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*9249*/            OPC_EmitConvertToTarget, 1,
/*9251*/            OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                    // Src: (add:i32 CPURegs:i32:$rs, (imm:i32)<<P:Predicate_immSExt16>>:$imm16) - Complexity = 7
                    // Dst: (ADDiu:i32 CPURegs:i32:$rs, (imm:i32):$imm16)
/*9260*/          /*Scope*/ 13, /*->9274*/
/*9261*/            OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*9263*/            OPC_EmitConvertToTarget, 1,
/*9265*/            OPC_MorphNodeTo, TARGET_VAL(Mips::AddiuRxRxImmX16), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                    // Src: (add:i32 CPU16Regs:i32:$in, (imm:i32)<<P:Predicate_immSExt16>>:$imm) - Complexity = 7
                    // Dst: (AddiuRxRxImmX16:i32 CPU16Regs:i32:$in, (imm:i32)<<P:Predicate_immSExt16>>:$imm)
/*9274*/          0, /*End of Scope*/
                /*SwitchType*/ 13,  MVT::i64,// ->9290
/*9277*/          OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*9279*/          OPC_EmitConvertToTarget, 1,
/*9281*/          OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 2, 
                  // Src: (add:i64 CPU64Regs:i64:$rs, (imm:i64)<<P:Predicate_immSExt16>>:$imm16) - Complexity = 7
                  // Dst: (DADDiu:i64 CPU64Regs:i64:$rs, (imm:i64):$imm16)
                0, // EndSwitchType
/*9291*/      /*Scope*/ 28, /*->9320*/
/*9292*/        OPC_CheckType, MVT::i32,
/*9294*/        OPC_Scope, 11, /*->9307*/ // 2 children in Scope
/*9296*/          OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*9298*/          OPC_MorphNodeTo, TARGET_VAL(Mips::ADDu), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (add:i32 CPURegs:i32:$rs, CPURegs:i32:$rt) - Complexity = 3
                  // Dst: (ADDu:i32 CPURegs:i32:$rs, CPURegs:i32:$rt)
/*9307*/        /*Scope*/ 11, /*->9319*/
/*9308*/          OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*9310*/          OPC_MorphNodeTo, TARGET_VAL(Mips::AdduRxRyRz16), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (add:i32 CPU16Regs:i32:$l, CPU16Regs:i32:$r) - Complexity = 3
                  // Dst: (AdduRxRyRz16:i32 CPU16Regs:i32:$l, CPU16Regs:i32:$r)
/*9319*/        0, /*End of Scope*/
/*9320*/      /*Scope*/ 13, /*->9334*/
/*9321*/        OPC_CheckType, MVT::i64,
/*9323*/        OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*9325*/        OPC_MorphNodeTo, TARGET_VAL(Mips::DADDu), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (add:i64 CPU64Regs:i64:$rs, CPU64Regs:i64:$rt) - Complexity = 3
                // Dst: (DADDu:i64 CPU64Regs:i64:$rs, CPU64Regs:i64:$rt)
/*9334*/      0, /*End of Scope*/
/*9335*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 67,  TARGET_VAL(ISD::SUB),// ->9406
/*9339*/    OPC_Scope, 18, /*->9359*/ // 2 children in Scope
/*9341*/      OPC_MoveChild, 0,
/*9343*/      OPC_CheckInteger, 0, 
/*9345*/      OPC_MoveParent,
/*9346*/      OPC_RecordChild1, // #0 = $r
/*9347*/      OPC_CheckType, MVT::i32,
/*9349*/      OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*9351*/      OPC_MorphNodeTo, TARGET_VAL(Mips::NegRxRy16), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (sub:i32 0:i32, CPU16Regs:i32:$r) - Complexity = 8
              // Dst: (NegRxRy16:i32 CPU16Regs:i32:$r)
/*9359*/    /*Scope*/ 45, /*->9405*/
/*9360*/      OPC_RecordChild0, // #0 = $rs
/*9361*/      OPC_RecordChild1, // #1 = $rt
/*9362*/      OPC_SwitchType /*2 cases */, 26,  MVT::i32,// ->9391
/*9365*/        OPC_Scope, 11, /*->9378*/ // 2 children in Scope
/*9367*/          OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*9369*/          OPC_MorphNodeTo, TARGET_VAL(Mips::SUBu), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (sub:i32 CPURegs:i32:$rs, CPURegs:i32:$rt) - Complexity = 3
                  // Dst: (SUBu:i32 CPURegs:i32:$rs, CPURegs:i32:$rt)
/*9378*/        /*Scope*/ 11, /*->9390*/
/*9379*/          OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*9381*/          OPC_MorphNodeTo, TARGET_VAL(Mips::SubuRxRyRz16), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (sub:i32 CPU16Regs:i32:$l, CPU16Regs:i32:$r) - Complexity = 3
                  // Dst: (SubuRxRyRz16:i32 CPU16Regs:i32:$l, CPU16Regs:i32:$r)
/*9390*/        0, /*End of Scope*/
              /*SwitchType*/ 11,  MVT::i64,// ->9404
/*9393*/        OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*9395*/        OPC_MorphNodeTo, TARGET_VAL(Mips::DSUBu), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (sub:i64 CPU64Regs:i64:$rs, CPU64Regs:i64:$rt) - Complexity = 3
                // Dst: (DSUBu:i64 CPU64Regs:i64:$rs, CPU64Regs:i64:$rt)
              0, // EndSwitchType
/*9405*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 5|128,9/*1157*/,  TARGET_VAL(ISD::SETCC),// ->10567
/*9410*/    OPC_RecordChild0, // #0 = $lhs
/*9411*/    OPC_Scope, 16|128,6/*784*/, /*->10198*/ // 2 children in Scope
/*9414*/      OPC_CheckChild0Type, MVT::i32,
/*9416*/      OPC_Scope, 92, /*->9510*/ // 2 children in Scope
/*9418*/        OPC_MoveChild, 1,
/*9420*/        OPC_Scope, 24, /*->9446*/ // 2 children in Scope
/*9422*/          OPC_CheckInteger, 0, 
/*9424*/          OPC_MoveParent,
/*9425*/          OPC_MoveChild, 2,
/*9427*/          OPC_CheckCondCode, ISD::SETEQ,
/*9429*/          OPC_MoveParent,
/*9430*/          OPC_CheckType, MVT::i32,
/*9432*/          OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*9434*/          OPC_EmitInteger, MVT::i32, 1, 
/*9437*/          OPC_MorphNodeTo, TARGET_VAL(Mips::SltiuCCRxImmX16), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (setcc:i32 CPU16Regs:i32:$lhs, 0:i32, SETEQ:Other) - Complexity = 8
                  // Dst: (SltiuCCRxImmX16:i32 CPU16Regs:i32:$lhs, 1:i32)
/*9446*/        /*Scope*/ 62, /*->9509*/
/*9447*/          OPC_CheckInteger, 127|128,127|128,125|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709518847*/, 
/*9458*/          OPC_MoveParent,
/*9459*/          OPC_MoveChild, 2,
/*9461*/          OPC_CheckCondCode, ISD::SETGT,
/*9463*/          OPC_MoveParent,
/*9464*/          OPC_CheckType, MVT::i32,
/*9466*/          OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*9468*/          OPC_EmitInteger, MVT::i32, 0|128,0|128,126|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709518848*/, 
/*9480*/          OPC_EmitNode, TARGET_VAL(Mips::SltiCCRxImmX16), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2
/*9489*/          OPC_EmitInteger, MVT::i32, 1, 
/*9492*/          OPC_EmitNode, TARGET_VAL(Mips::LiRxImmX16), 0,
                      1/*#VTs*/, MVT::i32, 1/*#Ops*/, 3,  // Results = #4
/*9500*/          OPC_MorphNodeTo, TARGET_VAL(Mips::XorRxRxRy16), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 4, 
                  // Src: (setcc:i32 CPU16Regs:i32:$lhs, -32769:i32, SETGT:Other) - Complexity = 8
                  // Dst: (XorRxRxRy16:i32 (SltiCCRxImmX16:i32 CPU16Regs:i32:$lhs, -32768:i32), (LiRxImmX16:i32 1:i32))
/*9509*/        0, /*End of Scope*/
/*9510*/      /*Scope*/ 45|128,5/*685*/, /*->10197*/
/*9512*/        OPC_RecordChild1, // #1 = $imm16
/*9513*/        OPC_Scope, 22|128,1/*150*/, /*->9666*/ // 2 children in Scope
/*9516*/          OPC_MoveChild, 1,
/*9518*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*9521*/          OPC_CheckPredicate, 28, // Predicate_immSExt16
/*9523*/          OPC_MoveParent,
/*9524*/          OPC_MoveChild, 2,
/*9526*/          OPC_Scope, 18, /*->9546*/ // 6 children in Scope
/*9528*/            OPC_CheckCondCode, ISD::SETLT,
/*9530*/            OPC_MoveParent,
/*9531*/            OPC_CheckType, MVT::i32,
/*9533*/            OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*9535*/            OPC_EmitConvertToTarget, 1,
/*9537*/            OPC_MorphNodeTo, TARGET_VAL(Mips::SLTi), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                    // Src: (setcc:i32 CPURegs:i32:$rs, (imm:i32)<<P:Predicate_immSExt16>>:$imm16, SETLT:Other) - Complexity = 7
                    // Dst: (SLTi:i32 CPURegs:i32:$rs, (imm:i32):$imm16)
/*9546*/          /*Scope*/ 18, /*->9565*/
/*9547*/            OPC_CheckCondCode, ISD::SETULT,
/*9549*/            OPC_MoveParent,
/*9550*/            OPC_CheckType, MVT::i32,
/*9552*/            OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*9554*/            OPC_EmitConvertToTarget, 1,
/*9556*/            OPC_MorphNodeTo, TARGET_VAL(Mips::SLTiu), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                    // Src: (setcc:i32 CPURegs:i32:$rs, (imm:i32)<<P:Predicate_immSExt16>>:$imm16, SETULT:Other) - Complexity = 7
                    // Dst: (SLTiu:i32 CPURegs:i32:$rs, (imm:i32):$imm16)
/*9565*/          /*Scope*/ 18, /*->9584*/
/*9566*/            OPC_CheckCondCode, ISD::SETLT,
/*9568*/            OPC_MoveParent,
/*9569*/            OPC_CheckType, MVT::i32,
/*9571*/            OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*9573*/            OPC_EmitConvertToTarget, 1,
/*9575*/            OPC_MorphNodeTo, TARGET_VAL(Mips::SltiCCRxImmX16), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                    // Src: (setcc:i32 CPU16Regs:i32:$rx, (imm:i32)<<P:Predicate_immSExt16>>:$imm16, SETLT:Other) - Complexity = 7
                    // Dst: (SltiCCRxImmX16:i32 CPU16Regs:i32:$rx, (imm:i32)<<P:Predicate_immSExt16>>:$imm16)
/*9584*/          /*Scope*/ 18, /*->9603*/
/*9585*/            OPC_CheckCondCode, ISD::SETULT,
/*9587*/            OPC_MoveParent,
/*9588*/            OPC_CheckType, MVT::i32,
/*9590*/            OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*9592*/            OPC_EmitConvertToTarget, 1,
/*9594*/            OPC_MorphNodeTo, TARGET_VAL(Mips::SltiuCCRxImmX16), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                    // Src: (setcc:i32 CPU16Regs:i32:$rx, (imm:i32)<<P:Predicate_immSExt16>>:$imm16, SETULT:Other) - Complexity = 7
                    // Dst: (SltiuCCRxImmX16:i32 CPU16Regs:i32:$rx, (imm:i32)<<P:Predicate_immSExt16>>:$imm16)
/*9603*/          /*Scope*/ 30, /*->9634*/
/*9604*/            OPC_CheckCondCode, ISD::SETGE,
/*9606*/            OPC_MoveParent,
/*9607*/            OPC_CheckType, MVT::i32,
/*9609*/            OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*9611*/            OPC_EmitConvertToTarget, 1,
/*9613*/            OPC_EmitNode, TARGET_VAL(Mips::SLTi), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2,  // Results = #3
/*9622*/            OPC_EmitInteger, MVT::i32, 1, 
/*9625*/            OPC_MorphNodeTo, TARGET_VAL(Mips::XORi), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 3, 4, 
                    // Src: (setcc:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs, SETGE:Other) - Complexity = 7
                    // Dst: (XORi:i32 (SLTi:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs), 1:i32)
/*9634*/          /*Scope*/ 30, /*->9665*/
/*9635*/            OPC_CheckCondCode, ISD::SETUGE,
/*9637*/            OPC_MoveParent,
/*9638*/            OPC_CheckType, MVT::i32,
/*9640*/            OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*9642*/            OPC_EmitConvertToTarget, 1,
/*9644*/            OPC_EmitNode, TARGET_VAL(Mips::SLTiu), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2,  // Results = #3
/*9653*/            OPC_EmitInteger, MVT::i32, 1, 
/*9656*/            OPC_MorphNodeTo, TARGET_VAL(Mips::XORi), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 3, 4, 
                    // Src: (setcc:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs, SETUGE:Other) - Complexity = 7
                    // Dst: (XORi:i32 (SLTiu:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs), 1:i32)
/*9665*/          0, /*End of Scope*/
/*9666*/        /*Scope*/ 16|128,4/*528*/, /*->10196*/
/*9668*/          OPC_MoveChild, 2,
/*9670*/          OPC_Scope, 16, /*->9688*/ // 20 children in Scope
/*9672*/            OPC_CheckCondCode, ISD::SETLT,
/*9674*/            OPC_MoveParent,
/*9675*/            OPC_CheckType, MVT::i32,
/*9677*/            OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*9679*/            OPC_MorphNodeTo, TARGET_VAL(Mips::SLT), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (setcc:i32 CPURegs:i32:$rs, CPURegs:i32:$rt, SETLT:Other) - Complexity = 3
                    // Dst: (SLT:i32 CPURegs:i32:$rs, CPURegs:i32:$rt)
/*9688*/          /*Scope*/ 16, /*->9705*/
/*9689*/            OPC_CheckCondCode, ISD::SETULT,
/*9691*/            OPC_MoveParent,
/*9692*/            OPC_CheckType, MVT::i32,
/*9694*/            OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*9696*/            OPC_MorphNodeTo, TARGET_VAL(Mips::SLTu), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (setcc:i32 CPURegs:i32:$rs, CPURegs:i32:$rt, SETULT:Other) - Complexity = 3
                    // Dst: (SLTu:i32 CPURegs:i32:$rs, CPURegs:i32:$rt)
/*9705*/          /*Scope*/ 16, /*->9722*/
/*9706*/            OPC_CheckCondCode, ISD::SETGT,
/*9708*/            OPC_MoveParent,
/*9709*/            OPC_CheckType, MVT::i32,
/*9711*/            OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*9713*/            OPC_MorphNodeTo, TARGET_VAL(Mips::SLT), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                    // Src: (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETGT:Other) - Complexity = 3
                    // Dst: (SLT:i32 CPURegs:i32:$rhs, CPURegs:i32:$lhs)
/*9722*/          /*Scope*/ 16, /*->9739*/
/*9723*/            OPC_CheckCondCode, ISD::SETUGT,
/*9725*/            OPC_MoveParent,
/*9726*/            OPC_CheckType, MVT::i32,
/*9728*/            OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*9730*/            OPC_MorphNodeTo, TARGET_VAL(Mips::SLTu), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                    // Src: (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETUGT:Other) - Complexity = 3
                    // Dst: (SLTu:i32 CPURegs:i32:$rhs, CPURegs:i32:$lhs)
/*9739*/          /*Scope*/ 16, /*->9756*/
/*9740*/            OPC_CheckCondCode, ISD::SETGT,
/*9742*/            OPC_MoveParent,
/*9743*/            OPC_CheckType, MVT::i32,
/*9745*/            OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*9747*/            OPC_MorphNodeTo, TARGET_VAL(Mips::SltCCRxRy16), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                    // Src: (setcc:i32 CPU16Regs:i32:$lhs, CPU16Regs:i32:$rhs, SETGT:Other) - Complexity = 3
                    // Dst: (SltCCRxRy16:i32 CPU16Regs:i32:$rhs, CPU16Regs:i32:$lhs)
/*9756*/          /*Scope*/ 16, /*->9773*/
/*9757*/            OPC_CheckCondCode, ISD::SETLT,
/*9759*/            OPC_MoveParent,
/*9760*/            OPC_CheckType, MVT::i32,
/*9762*/            OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*9764*/            OPC_MorphNodeTo, TARGET_VAL(Mips::SltCCRxRy16), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (setcc:i32 CPU16Regs:i32:$rx, CPU16Regs:i32:$ry, SETLT:Other) - Complexity = 3
                    // Dst: (SltCCRxRy16:i32 CPU16Regs:i32:$rx, CPU16Regs:i32:$ry)
/*9773*/          /*Scope*/ 16, /*->9790*/
/*9774*/            OPC_CheckCondCode, ISD::SETUGT,
/*9776*/            OPC_MoveParent,
/*9777*/            OPC_CheckType, MVT::i32,
/*9779*/            OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*9781*/            OPC_MorphNodeTo, TARGET_VAL(Mips::SltuCCRxRy16), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                    // Src: (setcc:i32 CPU16Regs:i32:$lhs, CPU16Regs:i32:$rhs, SETUGT:Other) - Complexity = 3
                    // Dst: (SltuCCRxRy16:i32 CPU16Regs:i32:$rhs, CPU16Regs:i32:$lhs)
/*9790*/          /*Scope*/ 16, /*->9807*/
/*9791*/            OPC_CheckCondCode, ISD::SETULT,
/*9793*/            OPC_MoveParent,
/*9794*/            OPC_CheckType, MVT::i32,
/*9796*/            OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*9798*/            OPC_MorphNodeTo, TARGET_VAL(Mips::SltuCCRxRy16), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (setcc:i32 CPU16Regs:i32:$rx, CPU16Regs:i32:$ry, SETULT:Other) - Complexity = 3
                    // Dst: (SltuCCRxRy16:i32 CPU16Regs:i32:$rx, CPU16Regs:i32:$ry)
/*9807*/          /*Scope*/ 28, /*->9836*/
/*9808*/            OPC_CheckCondCode, ISD::SETEQ,
/*9810*/            OPC_MoveParent,
/*9811*/            OPC_CheckType, MVT::i32,
/*9813*/            OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*9815*/            OPC_EmitNode, TARGET_VAL(Mips::XOR), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2
/*9824*/            OPC_EmitInteger, MVT::i32, 1, 
/*9827*/            OPC_MorphNodeTo, TARGET_VAL(Mips::SLTiu), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                    // Src: (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETEQ:Other) - Complexity = 3
                    // Dst: (SLTiu:i32 (XOR:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), 1:i32)
/*9836*/          /*Scope*/ 28, /*->9865*/
/*9837*/            OPC_CheckCondCode, ISD::SETNE,
/*9839*/            OPC_MoveParent,
/*9840*/            OPC_CheckType, MVT::i32,
/*9842*/            OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*9844*/            OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*9847*/            OPC_EmitNode, TARGET_VAL(Mips::XOR), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #3
/*9856*/            OPC_MorphNodeTo, TARGET_VAL(Mips::SLTu), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                    // Src: (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETNE:Other) - Complexity = 3
                    // Dst: (SLTu:i32 ZERO:i32, (XOR:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs))
/*9865*/          /*Scope*/ 28, /*->9894*/
/*9866*/            OPC_CheckCondCode, ISD::SETLE,
/*9868*/            OPC_MoveParent,
/*9869*/            OPC_CheckType, MVT::i32,
/*9871*/            OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*9873*/            OPC_EmitNode, TARGET_VAL(Mips::SLT), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #2
/*9882*/            OPC_EmitInteger, MVT::i32, 1, 
/*9885*/            OPC_MorphNodeTo, TARGET_VAL(Mips::XORi), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                    // Src: (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETLE:Other) - Complexity = 3
                    // Dst: (XORi:i32 (SLT:i32 CPURegs:i32:$rhs, CPURegs:i32:$lhs), 1:i32)
/*9894*/          /*Scope*/ 28, /*->9923*/
/*9895*/            OPC_CheckCondCode, ISD::SETULE,
/*9897*/            OPC_MoveParent,
/*9898*/            OPC_CheckType, MVT::i32,
/*9900*/            OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*9902*/            OPC_EmitNode, TARGET_VAL(Mips::SLTu), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #2
/*9911*/            OPC_EmitInteger, MVT::i32, 1, 
/*9914*/            OPC_MorphNodeTo, TARGET_VAL(Mips::XORi), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                    // Src: (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETULE:Other) - Complexity = 3
                    // Dst: (XORi:i32 (SLTu:i32 CPURegs:i32:$rhs, CPURegs:i32:$lhs), 1:i32)
/*9923*/          /*Scope*/ 28, /*->9952*/
/*9924*/            OPC_CheckCondCode, ISD::SETGE,
/*9926*/            OPC_MoveParent,
/*9927*/            OPC_CheckType, MVT::i32,
/*9929*/            OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*9931*/            OPC_EmitNode, TARGET_VAL(Mips::SLT), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2
/*9940*/            OPC_EmitInteger, MVT::i32, 1, 
/*9943*/            OPC_MorphNodeTo, TARGET_VAL(Mips::XORi), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                    // Src: (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETGE:Other) - Complexity = 3
                    // Dst: (XORi:i32 (SLT:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), 1:i32)
/*9952*/          /*Scope*/ 28, /*->9981*/
/*9953*/            OPC_CheckCondCode, ISD::SETUGE,
/*9955*/            OPC_MoveParent,
/*9956*/            OPC_CheckType, MVT::i32,
/*9958*/            OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*9960*/            OPC_EmitNode, TARGET_VAL(Mips::SLTu), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2
/*9969*/            OPC_EmitInteger, MVT::i32, 1, 
/*9972*/            OPC_MorphNodeTo, TARGET_VAL(Mips::XORi), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                    // Src: (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETUGE:Other) - Complexity = 3
                    // Dst: (XORi:i32 (SLTu:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), 1:i32)
/*9981*/          /*Scope*/ 28, /*->10010*/
/*9982*/            OPC_CheckCondCode, ISD::SETEQ,
/*9984*/            OPC_MoveParent,
/*9985*/            OPC_CheckType, MVT::i32,
/*9987*/            OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*9989*/            OPC_EmitNode, TARGET_VAL(Mips::XorRxRxRy16), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2
/*9998*/            OPC_EmitInteger, MVT::i32, 1, 
/*10001*/           OPC_MorphNodeTo, TARGET_VAL(Mips::SltiuCCRxImmX16), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                    // Src: (setcc:i32 CPU16Regs:i32:$lhs, CPU16Regs:i32:$rhs, SETEQ:Other) - Complexity = 3
                    // Dst: (SltiuCCRxImmX16:i32 (XorRxRxRy16:i32 CPU16Regs:i32:$lhs, CPU16Regs:i32:$rhs), 1:i32)
/*10010*/         /*Scope*/ 36, /*->10047*/
/*10011*/           OPC_CheckCondCode, ISD::SETGE,
/*10013*/           OPC_MoveParent,
/*10014*/           OPC_CheckType, MVT::i32,
/*10016*/           OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*10018*/           OPC_EmitNode, TARGET_VAL(Mips::SltCCRxRy16), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2
/*10027*/           OPC_EmitInteger, MVT::i32, 1, 
/*10030*/           OPC_EmitNode, TARGET_VAL(Mips::LiRxImmX16), 0,
                        1/*#VTs*/, MVT::i32, 1/*#Ops*/, 3,  // Results = #4
/*10038*/           OPC_MorphNodeTo, TARGET_VAL(Mips::XorRxRxRy16), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 4, 
                    // Src: (setcc:i32 CPU16Regs:i32:$lhs, CPU16Regs:i32:$rhs, SETGE:Other) - Complexity = 3
                    // Dst: (XorRxRxRy16:i32 (SltCCRxRy16:i32 CPU16Regs:i32:$lhs, CPU16Regs:i32:$rhs), (LiRxImmX16:i32 1:i32))
/*10047*/         /*Scope*/ 36, /*->10084*/
/*10048*/           OPC_CheckCondCode, ISD::SETLE,
/*10050*/           OPC_MoveParent,
/*10051*/           OPC_CheckType, MVT::i32,
/*10053*/           OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*10055*/           OPC_EmitNode, TARGET_VAL(Mips::SltCCRxRy16), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #2
/*10064*/           OPC_EmitInteger, MVT::i32, 1, 
/*10067*/           OPC_EmitNode, TARGET_VAL(Mips::LiRxImmX16), 0,
                        1/*#VTs*/, MVT::i32, 1/*#Ops*/, 3,  // Results = #4
/*10075*/           OPC_MorphNodeTo, TARGET_VAL(Mips::XorRxRxRy16), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 4, 
                    // Src: (setcc:i32 CPU16Regs:i32:$lhs, CPU16Regs:i32:$rhs, SETLE:Other) - Complexity = 3
                    // Dst: (XorRxRxRy16:i32 (SltCCRxRy16:i32 CPU16Regs:i32:$rhs, CPU16Regs:i32:$lhs), (LiRxImmX16:i32 1:i32))
/*10084*/         /*Scope*/ 36, /*->10121*/
/*10085*/           OPC_CheckCondCode, ISD::SETNE,
/*10087*/           OPC_MoveParent,
/*10088*/           OPC_CheckType, MVT::i32,
/*10090*/           OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*10092*/           OPC_EmitInteger, MVT::i32, 0, 
/*10095*/           OPC_EmitNode, TARGET_VAL(Mips::LiRxImmX16), 0,
                        1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2,  // Results = #3
/*10103*/           OPC_EmitNode, TARGET_VAL(Mips::XorRxRxRy16), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*10112*/           OPC_MorphNodeTo, TARGET_VAL(Mips::SltuCCRxRy16), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 3, 4, 
                    // Src: (setcc:i32 CPU16Regs:i32:$lhs, CPU16Regs:i32:$rhs, SETNE:Other) - Complexity = 3
                    // Dst: (SltuCCRxRy16:i32 (LiRxImmX16:i32 0:i32), (XorRxRxRy16:i32 CPU16Regs:i32:$lhs, CPU16Regs:i32:$rhs))
/*10121*/         /*Scope*/ 36, /*->10158*/
/*10122*/           OPC_CheckCondCode, ISD::SETUGE,
/*10124*/           OPC_MoveParent,
/*10125*/           OPC_CheckType, MVT::i32,
/*10127*/           OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*10129*/           OPC_EmitNode, TARGET_VAL(Mips::SltuCCRxRy16), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2
/*10138*/           OPC_EmitInteger, MVT::i32, 1, 
/*10141*/           OPC_EmitNode, TARGET_VAL(Mips::LiRxImmX16), 0,
                        1/*#VTs*/, MVT::i32, 1/*#Ops*/, 3,  // Results = #4
/*10149*/           OPC_MorphNodeTo, TARGET_VAL(Mips::XorRxRxRy16), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 4, 
                    // Src: (setcc:i32 CPU16Regs:i32:$lhs, CPU16Regs:i32:$rhs, SETUGE:Other) - Complexity = 3
                    // Dst: (XorRxRxRy16:i32 (SltuCCRxRy16:i32 CPU16Regs:i32:$lhs, CPU16Regs:i32:$rhs), (LiRxImmX16:i32 1:i32))
/*10158*/         /*Scope*/ 36, /*->10195*/
/*10159*/           OPC_CheckCondCode, ISD::SETULE,
/*10161*/           OPC_MoveParent,
/*10162*/           OPC_CheckType, MVT::i32,
/*10164*/           OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*10166*/           OPC_EmitNode, TARGET_VAL(Mips::SltuCCRxRy16), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #2
/*10175*/           OPC_EmitInteger, MVT::i32, 1, 
/*10178*/           OPC_EmitNode, TARGET_VAL(Mips::LiRxImmX16), 0,
                        1/*#VTs*/, MVT::i32, 1/*#Ops*/, 3,  // Results = #4
/*10186*/           OPC_MorphNodeTo, TARGET_VAL(Mips::XorRxRxRy16), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 4, 
                    // Src: (setcc:i32 CPU16Regs:i32:$lhs, CPU16Regs:i32:$rhs, SETULE:Other) - Complexity = 3
                    // Dst: (XorRxRxRy16:i32 (SltuCCRxRy16:i32 CPU16Regs:i32:$rhs, CPU16Regs:i32:$lhs), (LiRxImmX16:i32 1:i32))
/*10195*/         0, /*End of Scope*/
/*10196*/       0, /*End of Scope*/
/*10197*/     0, /*End of Scope*/
/*10198*/   /*Scope*/ 110|128,2/*366*/, /*->10566*/
/*10200*/     OPC_CheckChild0Type, MVT::i64,
/*10202*/     OPC_RecordChild1, // #1 = $imm16
/*10203*/     OPC_Scope, 112, /*->10317*/ // 2 children in Scope
/*10205*/       OPC_MoveChild, 1,
/*10207*/       OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*10210*/       OPC_CheckPredicate, 28, // Predicate_immSExt16
/*10212*/       OPC_MoveParent,
/*10213*/       OPC_MoveChild, 2,
/*10215*/       OPC_Scope, 18, /*->10235*/ // 4 children in Scope
/*10217*/         OPC_CheckCondCode, ISD::SETLT,
/*10219*/         OPC_MoveParent,
/*10220*/         OPC_CheckType, MVT::i32,
/*10222*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*10224*/         OPC_EmitConvertToTarget, 1,
/*10226*/         OPC_MorphNodeTo, TARGET_VAL(Mips::SLTi64), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                  // Src: (setcc:i32 CPU64Regs:i64:$rs, (imm:i64)<<P:Predicate_immSExt16>>:$imm16, SETLT:Other) - Complexity = 7
                  // Dst: (SLTi64:i32 CPU64Regs:i64:$rs, (imm:i64):$imm16)
/*10235*/       /*Scope*/ 18, /*->10254*/
/*10236*/         OPC_CheckCondCode, ISD::SETULT,
/*10238*/         OPC_MoveParent,
/*10239*/         OPC_CheckType, MVT::i32,
/*10241*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*10243*/         OPC_EmitConvertToTarget, 1,
/*10245*/         OPC_MorphNodeTo, TARGET_VAL(Mips::SLTiu64), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                  // Src: (setcc:i32 CPU64Regs:i64:$rs, (imm:i64)<<P:Predicate_immSExt16>>:$imm16, SETULT:Other) - Complexity = 7
                  // Dst: (SLTiu64:i32 CPU64Regs:i64:$rs, (imm:i64):$imm16)
/*10254*/       /*Scope*/ 30, /*->10285*/
/*10255*/         OPC_CheckCondCode, ISD::SETGE,
/*10257*/         OPC_MoveParent,
/*10258*/         OPC_CheckType, MVT::i32,
/*10260*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*10262*/         OPC_EmitConvertToTarget, 1,
/*10264*/         OPC_EmitNode, TARGET_VAL(Mips::SLTi64), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2,  // Results = #3
/*10273*/         OPC_EmitInteger, MVT::i32, 1, 
/*10276*/         OPC_MorphNodeTo, TARGET_VAL(Mips::XORi), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 3, 4, 
                  // Src: (setcc:i32 CPU64Regs:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16>>:$rhs, SETGE:Other) - Complexity = 7
                  // Dst: (XORi:i32 (SLTi64:i32 CPU64Regs:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16>>:$rhs), 1:i32)
/*10285*/       /*Scope*/ 30, /*->10316*/
/*10286*/         OPC_CheckCondCode, ISD::SETUGE,
/*10288*/         OPC_MoveParent,
/*10289*/         OPC_CheckType, MVT::i32,
/*10291*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*10293*/         OPC_EmitConvertToTarget, 1,
/*10295*/         OPC_EmitNode, TARGET_VAL(Mips::SLTiu64), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2,  // Results = #3
/*10304*/         OPC_EmitInteger, MVT::i32, 1, 
/*10307*/         OPC_MorphNodeTo, TARGET_VAL(Mips::XORi), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 3, 4, 
                  // Src: (setcc:i32 CPU64Regs:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16>>:$rhs, SETUGE:Other) - Complexity = 7
                  // Dst: (XORi:i32 (SLTiu64:i32 CPU64Regs:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16>>:$rhs), 1:i32)
/*10316*/       0, /*End of Scope*/
/*10317*/     /*Scope*/ 118|128,1/*246*/, /*->10565*/
/*10319*/       OPC_MoveChild, 2,
/*10321*/       OPC_Scope, 16, /*->10339*/ // 10 children in Scope
/*10323*/         OPC_CheckCondCode, ISD::SETLT,
/*10325*/         OPC_MoveParent,
/*10326*/         OPC_CheckType, MVT::i32,
/*10328*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*10330*/         OPC_MorphNodeTo, TARGET_VAL(Mips::SLT64), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (setcc:i32 CPU64Regs:i64:$rs, CPU64Regs:i64:$rt, SETLT:Other) - Complexity = 3
                  // Dst: (SLT64:i32 CPU64Regs:i64:$rs, CPU64Regs:i64:$rt)
/*10339*/       /*Scope*/ 16, /*->10356*/
/*10340*/         OPC_CheckCondCode, ISD::SETULT,
/*10342*/         OPC_MoveParent,
/*10343*/         OPC_CheckType, MVT::i32,
/*10345*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*10347*/         OPC_MorphNodeTo, TARGET_VAL(Mips::SLTu64), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (setcc:i32 CPU64Regs:i64:$rs, CPU64Regs:i64:$rt, SETULT:Other) - Complexity = 3
                  // Dst: (SLTu64:i32 CPU64Regs:i64:$rs, CPU64Regs:i64:$rt)
/*10356*/       /*Scope*/ 16, /*->10373*/
/*10357*/         OPC_CheckCondCode, ISD::SETGT,
/*10359*/         OPC_MoveParent,
/*10360*/         OPC_CheckType, MVT::i32,
/*10362*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*10364*/         OPC_MorphNodeTo, TARGET_VAL(Mips::SLT64), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                  // Src: (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETGT:Other) - Complexity = 3
                  // Dst: (SLT64:i32 CPU64Regs:i64:$rhs, CPU64Regs:i64:$lhs)
/*10373*/       /*Scope*/ 16, /*->10390*/
/*10374*/         OPC_CheckCondCode, ISD::SETUGT,
/*10376*/         OPC_MoveParent,
/*10377*/         OPC_CheckType, MVT::i32,
/*10379*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*10381*/         OPC_MorphNodeTo, TARGET_VAL(Mips::SLTu64), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                  // Src: (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETUGT:Other) - Complexity = 3
                  // Dst: (SLTu64:i32 CPU64Regs:i64:$rhs, CPU64Regs:i64:$lhs)
/*10390*/       /*Scope*/ 28, /*->10419*/
/*10391*/         OPC_CheckCondCode, ISD::SETEQ,
/*10393*/         OPC_MoveParent,
/*10394*/         OPC_CheckType, MVT::i32,
/*10396*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*10398*/         OPC_EmitNode, TARGET_VAL(Mips::XOR64), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1,  // Results = #2
/*10407*/         OPC_EmitInteger, MVT::i64, 1, 
/*10410*/         OPC_MorphNodeTo, TARGET_VAL(Mips::SLTiu64), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETEQ:Other) - Complexity = 3
                  // Dst: (SLTiu64:i32 (XOR64:i64 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs), 1:i64)
/*10419*/       /*Scope*/ 28, /*->10448*/
/*10420*/         OPC_CheckCondCode, ISD::SETNE,
/*10422*/         OPC_MoveParent,
/*10423*/         OPC_CheckType, MVT::i32,
/*10425*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*10427*/         OPC_EmitRegister, MVT::i64, Mips::ZERO_64,
/*10430*/         OPC_EmitNode, TARGET_VAL(Mips::XOR64), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1,  // Results = #3
/*10439*/         OPC_MorphNodeTo, TARGET_VAL(Mips::SLTu64), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETNE:Other) - Complexity = 3
                  // Dst: (SLTu64:i32 ZERO_64:i64, (XOR64:i64 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs))
/*10448*/       /*Scope*/ 28, /*->10477*/
/*10449*/         OPC_CheckCondCode, ISD::SETLE,
/*10451*/         OPC_MoveParent,
/*10452*/         OPC_CheckType, MVT::i32,
/*10454*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*10456*/         OPC_EmitNode, TARGET_VAL(Mips::SLT64), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #2
/*10465*/         OPC_EmitInteger, MVT::i32, 1, 
/*10468*/         OPC_MorphNodeTo, TARGET_VAL(Mips::XORi), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETLE:Other) - Complexity = 3
                  // Dst: (XORi:i32 (SLT64:i32 CPU64Regs:i64:$rhs, CPU64Regs:i64:$lhs), 1:i32)
/*10477*/       /*Scope*/ 28, /*->10506*/
/*10478*/         OPC_CheckCondCode, ISD::SETULE,
/*10480*/         OPC_MoveParent,
/*10481*/         OPC_CheckType, MVT::i32,
/*10483*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*10485*/         OPC_EmitNode, TARGET_VAL(Mips::SLTu64), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #2
/*10494*/         OPC_EmitInteger, MVT::i32, 1, 
/*10497*/         OPC_MorphNodeTo, TARGET_VAL(Mips::XORi), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETULE:Other) - Complexity = 3
                  // Dst: (XORi:i32 (SLTu64:i32 CPU64Regs:i64:$rhs, CPU64Regs:i64:$lhs), 1:i32)
/*10506*/       /*Scope*/ 28, /*->10535*/
/*10507*/         OPC_CheckCondCode, ISD::SETGE,
/*10509*/         OPC_MoveParent,
/*10510*/         OPC_CheckType, MVT::i32,
/*10512*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*10514*/         OPC_EmitNode, TARGET_VAL(Mips::SLT64), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2
/*10523*/         OPC_EmitInteger, MVT::i32, 1, 
/*10526*/         OPC_MorphNodeTo, TARGET_VAL(Mips::XORi), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETGE:Other) - Complexity = 3
                  // Dst: (XORi:i32 (SLT64:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs), 1:i32)
/*10535*/       /*Scope*/ 28, /*->10564*/
/*10536*/         OPC_CheckCondCode, ISD::SETUGE,
/*10538*/         OPC_MoveParent,
/*10539*/         OPC_CheckType, MVT::i32,
/*10541*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*10543*/         OPC_EmitNode, TARGET_VAL(Mips::SLTu64), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2
/*10552*/         OPC_EmitInteger, MVT::i32, 1, 
/*10555*/         OPC_MorphNodeTo, TARGET_VAL(Mips::XORi), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETUGE:Other) - Complexity = 3
                  // Dst: (XORi:i32 (SLTu64:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs), 1:i32)
/*10564*/       0, /*End of Scope*/
/*10565*/     0, /*End of Scope*/
/*10566*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 94,  TARGET_VAL(ISD::AND),// ->10664
/*10570*/   OPC_RecordChild0, // #0 = $rs
/*10571*/   OPC_RecordChild1, // #1 = $imm16
/*10572*/   OPC_Scope, 46, /*->10620*/ // 3 children in Scope
/*10574*/     OPC_MoveChild, 1,
/*10576*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*10579*/     OPC_CheckPredicate, 27, // Predicate_immZExt16
/*10581*/     OPC_MoveParent,
/*10582*/     OPC_SwitchType /*2 cases */, 16,  MVT::i32,// ->10601
/*10585*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*10587*/       OPC_EmitConvertToTarget, 1,
/*10589*/       OPC_EmitNodeXForm, 0, 2, // LO16
/*10592*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ANDi), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                // Src: (and:i32 CPURegs:i32:$rs, (imm:i32)<<P:Predicate_immZExt16>><<X:LO16>>:$imm16) - Complexity = 7
                // Dst: (ANDi:i32 CPURegs:i32:$rs, (LO16:i32 (imm:i32):$imm16))
              /*SwitchType*/ 16,  MVT::i64,// ->10619
/*10603*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*10605*/       OPC_EmitConvertToTarget, 1,
/*10607*/       OPC_EmitNodeXForm, 0, 2, // LO16
/*10610*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DANDi), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                // Src: (and:i64 CPU64Regs:i64:$rs, (imm:i64)<<P:Predicate_immZExt16>><<X:LO16>>:$imm16) - Complexity = 7
                // Dst: (DANDi:i64 CPU64Regs:i64:$rs, (LO16:i64 (imm:i64):$imm16))
              0, // EndSwitchType
/*10620*/   /*Scope*/ 28, /*->10649*/
/*10621*/     OPC_CheckType, MVT::i32,
/*10623*/     OPC_Scope, 11, /*->10636*/ // 2 children in Scope
/*10625*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*10627*/       OPC_MorphNodeTo, TARGET_VAL(Mips::AND), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (and:i32 CPURegs:i32:$rs, CPURegs:i32:$rt) - Complexity = 3
                // Dst: (AND:i32 CPURegs:i32:$rs, CPURegs:i32:$rt)
/*10636*/     /*Scope*/ 11, /*->10648*/
/*10637*/       OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*10639*/       OPC_MorphNodeTo, TARGET_VAL(Mips::AndRxRxRy16), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (and:i32 CPU16Regs:i32:$l, CPU16Regs:i32:$r) - Complexity = 3
                // Dst: (AndRxRxRy16:i32 CPU16Regs:i32:$l, CPU16Regs:i32:$r)
/*10648*/     0, /*End of Scope*/
/*10649*/   /*Scope*/ 13, /*->10663*/
/*10650*/     OPC_CheckType, MVT::i64,
/*10652*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*10654*/     OPC_MorphNodeTo, TARGET_VAL(Mips::AND64), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (and:i64 CPU64Regs:i64:$rs, CPU64Regs:i64:$rt) - Complexity = 3
              // Dst: (AND64:i64 CPU64Regs:i64:$rs, CPU64Regs:i64:$rt)
/*10663*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 94,  TARGET_VAL(ISD::OR),// ->10761
/*10667*/   OPC_RecordChild0, // #0 = $rs
/*10668*/   OPC_RecordChild1, // #1 = $imm16
/*10669*/   OPC_Scope, 46, /*->10717*/ // 3 children in Scope
/*10671*/     OPC_MoveChild, 1,
/*10673*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*10676*/     OPC_CheckPredicate, 27, // Predicate_immZExt16
/*10678*/     OPC_MoveParent,
/*10679*/     OPC_SwitchType /*2 cases */, 16,  MVT::i32,// ->10698
/*10682*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*10684*/       OPC_EmitConvertToTarget, 1,
/*10686*/       OPC_EmitNodeXForm, 0, 2, // LO16
/*10689*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ORi), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                // Src: (or:i32 CPURegs:i32:$rs, (imm:i32)<<P:Predicate_immZExt16>><<X:LO16>>:$imm16) - Complexity = 7
                // Dst: (ORi:i32 CPURegs:i32:$rs, (LO16:i32 (imm:i32):$imm16))
              /*SwitchType*/ 16,  MVT::i64,// ->10716
/*10700*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*10702*/       OPC_EmitConvertToTarget, 1,
/*10704*/       OPC_EmitNodeXForm, 0, 2, // LO16
/*10707*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ORi64), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                // Src: (or:i64 CPU64Regs:i64:$rs, (imm:i64)<<P:Predicate_immZExt16>><<X:LO16>>:$imm16) - Complexity = 7
                // Dst: (ORi64:i64 CPU64Regs:i64:$rs, (LO16:i64 (imm:i64):$imm16))
              0, // EndSwitchType
/*10717*/   /*Scope*/ 28, /*->10746*/
/*10718*/     OPC_CheckType, MVT::i32,
/*10720*/     OPC_Scope, 11, /*->10733*/ // 2 children in Scope
/*10722*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*10724*/       OPC_MorphNodeTo, TARGET_VAL(Mips::OR), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (or:i32 CPURegs:i32:$rs, CPURegs:i32:$rt) - Complexity = 3
                // Dst: (OR:i32 CPURegs:i32:$rs, CPURegs:i32:$rt)
/*10733*/     /*Scope*/ 11, /*->10745*/
/*10734*/       OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*10736*/       OPC_MorphNodeTo, TARGET_VAL(Mips::OrRxRxRy16), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (or:i32 CPU16Regs:i32:$l, CPU16Regs:i32:$r) - Complexity = 3
                // Dst: (OrRxRxRy16:i32 CPU16Regs:i32:$l, CPU16Regs:i32:$r)
/*10745*/     0, /*End of Scope*/
/*10746*/   /*Scope*/ 13, /*->10760*/
/*10747*/     OPC_CheckType, MVT::i64,
/*10749*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*10751*/     OPC_MorphNodeTo, TARGET_VAL(Mips::OR64), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (or:i64 CPU64Regs:i64:$rs, CPU64Regs:i64:$rt) - Complexity = 3
              // Dst: (OR64:i64 CPU64Regs:i64:$rs, CPU64Regs:i64:$rt)
/*10760*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 117,  TARGET_VAL(ISD::SHL),// ->10881
/*10764*/   OPC_RecordChild0, // #0 = $rt
/*10765*/   OPC_RecordChild1, // #1 = $shamt
/*10766*/   OPC_Scope, 66, /*->10834*/ // 2 children in Scope
/*10768*/     OPC_MoveChild, 1,
/*10770*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*10773*/     OPC_CheckType, MVT::i32,
/*10775*/     OPC_Scope, 18, /*->10795*/ // 3 children in Scope
/*10777*/       OPC_CheckPredicate, 21, // Predicate_immZExt5
/*10779*/       OPC_MoveParent,
/*10780*/       OPC_CheckType, MVT::i32,
/*10782*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*10784*/       OPC_EmitConvertToTarget, 1,
/*10786*/       OPC_MorphNodeTo, TARGET_VAL(Mips::SLL), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (shl:i32 CPURegs:i32:$rt, (imm:i32)<<P:Predicate_immZExt5>>:$shamt) - Complexity = 7
                // Dst: (SLL:i32 CPURegs:i32:$rt, (imm:i32):$shamt)
/*10795*/     /*Scope*/ 18, /*->10814*/
/*10796*/       OPC_CheckPredicate, 29, // Predicate_immZExt6
/*10798*/       OPC_MoveParent,
/*10799*/       OPC_CheckType, MVT::i64,
/*10801*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*10803*/       OPC_EmitConvertToTarget, 1,
/*10805*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DSLL), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 2, 
                // Src: (shl:i64 CPU64Regs:i64:$rt, (imm:i32)<<P:Predicate_immZExt6>>:$shamt) - Complexity = 7
                // Dst: (DSLL:i64 CPU64Regs:i64:$rt, (imm:i32):$shamt)
/*10814*/     /*Scope*/ 18, /*->10833*/
/*10815*/       OPC_CheckPredicate, 21, // Predicate_immZExt5
/*10817*/       OPC_MoveParent,
/*10818*/       OPC_CheckType, MVT::i32,
/*10820*/       OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*10822*/       OPC_EmitConvertToTarget, 1,
/*10824*/       OPC_MorphNodeTo, TARGET_VAL(Mips::SllX16), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (shl:i32 CPU16Regs:i32:$in, (imm:i32)<<P:Predicate_immZExt5>>:$imm) - Complexity = 7
                // Dst: (SllX16:i32 CPU16Regs:i32:$in, (imm:i32)<<P:Predicate_immZExt5>>:$imm)
/*10833*/     0, /*End of Scope*/
/*10834*/   /*Scope*/ 45, /*->10880*/
/*10835*/     OPC_CheckChild1Type, MVT::i32,
/*10837*/     OPC_SwitchType /*2 cases */, 26,  MVT::i32,// ->10866
/*10840*/       OPC_Scope, 11, /*->10853*/ // 2 children in Scope
/*10842*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*10844*/         OPC_MorphNodeTo, TARGET_VAL(Mips::SLLV), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                  // Src: (shl:i32 CPURegs:i32:$rt, CPURegs:i32:$rs) - Complexity = 3
                  // Dst: (SLLV:i32 CPURegs:i32:$rs, CPURegs:i32:$rt)
/*10853*/       /*Scope*/ 11, /*->10865*/
/*10854*/         OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*10856*/         OPC_MorphNodeTo, TARGET_VAL(Mips::SllvRxRy16), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (shl:i32 CPU16Regs:i32:$r, CPU16Regs:i32:$ra) - Complexity = 3
                  // Dst: (SllvRxRy16:i32 CPU16Regs:i32:$r, CPU16Regs:i32:$ra)
/*10865*/       0, /*End of Scope*/
              /*SwitchType*/ 11,  MVT::i64,// ->10879
/*10868*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*10870*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DSLLV), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                // Src: (shl:i64 CPU64Regs:i64:$rt, CPURegs:i32:$rs) - Complexity = 3
                // Dst: (DSLLV:i64 CPURegs:i32:$rs, CPU64Regs:i64:$rt)
              0, // EndSwitchType
/*10880*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 117,  TARGET_VAL(ISD::SRL),// ->11001
/*10884*/   OPC_RecordChild0, // #0 = $rt
/*10885*/   OPC_RecordChild1, // #1 = $shamt
/*10886*/   OPC_Scope, 66, /*->10954*/ // 2 children in Scope
/*10888*/     OPC_MoveChild, 1,
/*10890*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*10893*/     OPC_CheckType, MVT::i32,
/*10895*/     OPC_Scope, 18, /*->10915*/ // 3 children in Scope
/*10897*/       OPC_CheckPredicate, 21, // Predicate_immZExt5
/*10899*/       OPC_MoveParent,
/*10900*/       OPC_CheckType, MVT::i32,
/*10902*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*10904*/       OPC_EmitConvertToTarget, 1,
/*10906*/       OPC_MorphNodeTo, TARGET_VAL(Mips::SRL), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (srl:i32 CPURegs:i32:$rt, (imm:i32)<<P:Predicate_immZExt5>>:$shamt) - Complexity = 7
                // Dst: (SRL:i32 CPURegs:i32:$rt, (imm:i32):$shamt)
/*10915*/     /*Scope*/ 18, /*->10934*/
/*10916*/       OPC_CheckPredicate, 29, // Predicate_immZExt6
/*10918*/       OPC_MoveParent,
/*10919*/       OPC_CheckType, MVT::i64,
/*10921*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*10923*/       OPC_EmitConvertToTarget, 1,
/*10925*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DSRL), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 2, 
                // Src: (srl:i64 CPU64Regs:i64:$rt, (imm:i32)<<P:Predicate_immZExt6>>:$shamt) - Complexity = 7
                // Dst: (DSRL:i64 CPU64Regs:i64:$rt, (imm:i32):$shamt)
/*10934*/     /*Scope*/ 18, /*->10953*/
/*10935*/       OPC_CheckPredicate, 21, // Predicate_immZExt5
/*10937*/       OPC_MoveParent,
/*10938*/       OPC_CheckType, MVT::i32,
/*10940*/       OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*10942*/       OPC_EmitConvertToTarget, 1,
/*10944*/       OPC_MorphNodeTo, TARGET_VAL(Mips::SrlX16), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (srl:i32 CPU16Regs:i32:$in, (imm:i32)<<P:Predicate_immZExt5>>:$imm) - Complexity = 7
                // Dst: (SrlX16:i32 CPU16Regs:i32:$in, (imm:i32)<<P:Predicate_immZExt5>>:$imm)
/*10953*/     0, /*End of Scope*/
/*10954*/   /*Scope*/ 45, /*->11000*/
/*10955*/     OPC_CheckChild1Type, MVT::i32,
/*10957*/     OPC_SwitchType /*2 cases */, 26,  MVT::i32,// ->10986
/*10960*/       OPC_Scope, 11, /*->10973*/ // 2 children in Scope
/*10962*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*10964*/         OPC_MorphNodeTo, TARGET_VAL(Mips::SRLV), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                  // Src: (srl:i32 CPURegs:i32:$rt, CPURegs:i32:$rs) - Complexity = 3
                  // Dst: (SRLV:i32 CPURegs:i32:$rs, CPURegs:i32:$rt)
/*10973*/       /*Scope*/ 11, /*->10985*/
/*10974*/         OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*10976*/         OPC_MorphNodeTo, TARGET_VAL(Mips::SrlvRxRy16), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (srl:i32 CPU16Regs:i32:$r, CPU16Regs:i32:$ra) - Complexity = 3
                  // Dst: (SrlvRxRy16:i32 CPU16Regs:i32:$r, CPU16Regs:i32:$ra)
/*10985*/       0, /*End of Scope*/
              /*SwitchType*/ 11,  MVT::i64,// ->10999
/*10988*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*10990*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DSRLV), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                // Src: (srl:i64 CPU64Regs:i64:$rt, CPURegs:i32:$rs) - Complexity = 3
                // Dst: (DSRLV:i64 CPURegs:i32:$rs, CPU64Regs:i64:$rt)
              0, // EndSwitchType
/*11000*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 117,  TARGET_VAL(ISD::SRA),// ->11121
/*11004*/   OPC_RecordChild0, // #0 = $rt
/*11005*/   OPC_RecordChild1, // #1 = $shamt
/*11006*/   OPC_Scope, 66, /*->11074*/ // 2 children in Scope
/*11008*/     OPC_MoveChild, 1,
/*11010*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*11013*/     OPC_CheckType, MVT::i32,
/*11015*/     OPC_Scope, 18, /*->11035*/ // 3 children in Scope
/*11017*/       OPC_CheckPredicate, 21, // Predicate_immZExt5
/*11019*/       OPC_MoveParent,
/*11020*/       OPC_CheckType, MVT::i32,
/*11022*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*11024*/       OPC_EmitConvertToTarget, 1,
/*11026*/       OPC_MorphNodeTo, TARGET_VAL(Mips::SRA), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (sra:i32 CPURegs:i32:$rt, (imm:i32)<<P:Predicate_immZExt5>>:$shamt) - Complexity = 7
                // Dst: (SRA:i32 CPURegs:i32:$rt, (imm:i32):$shamt)
/*11035*/     /*Scope*/ 18, /*->11054*/
/*11036*/       OPC_CheckPredicate, 29, // Predicate_immZExt6
/*11038*/       OPC_MoveParent,
/*11039*/       OPC_CheckType, MVT::i64,
/*11041*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*11043*/       OPC_EmitConvertToTarget, 1,
/*11045*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DSRA), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 2, 
                // Src: (sra:i64 CPU64Regs:i64:$rt, (imm:i32)<<P:Predicate_immZExt6>>:$shamt) - Complexity = 7
                // Dst: (DSRA:i64 CPU64Regs:i64:$rt, (imm:i32):$shamt)
/*11054*/     /*Scope*/ 18, /*->11073*/
/*11055*/       OPC_CheckPredicate, 21, // Predicate_immZExt5
/*11057*/       OPC_MoveParent,
/*11058*/       OPC_CheckType, MVT::i32,
/*11060*/       OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*11062*/       OPC_EmitConvertToTarget, 1,
/*11064*/       OPC_MorphNodeTo, TARGET_VAL(Mips::SraX16), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (sra:i32 CPU16Regs:i32:$in, (imm:i32)<<P:Predicate_immZExt5>>:$imm) - Complexity = 7
                // Dst: (SraX16:i32 CPU16Regs:i32:$in, (imm:i32)<<P:Predicate_immZExt5>>:$imm)
/*11073*/     0, /*End of Scope*/
/*11074*/   /*Scope*/ 45, /*->11120*/
/*11075*/     OPC_CheckChild1Type, MVT::i32,
/*11077*/     OPC_SwitchType /*2 cases */, 26,  MVT::i32,// ->11106
/*11080*/       OPC_Scope, 11, /*->11093*/ // 2 children in Scope
/*11082*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*11084*/         OPC_MorphNodeTo, TARGET_VAL(Mips::SRAV), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                  // Src: (sra:i32 CPURegs:i32:$rt, CPURegs:i32:$rs) - Complexity = 3
                  // Dst: (SRAV:i32 CPURegs:i32:$rs, CPURegs:i32:$rt)
/*11093*/       /*Scope*/ 11, /*->11105*/
/*11094*/         OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*11096*/         OPC_MorphNodeTo, TARGET_VAL(Mips::SravRxRy16), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (sra:i32 CPU16Regs:i32:$r, CPU16Regs:i32:$ra) - Complexity = 3
                  // Dst: (SravRxRy16:i32 CPU16Regs:i32:$r, CPU16Regs:i32:$ra)
/*11105*/       0, /*End of Scope*/
              /*SwitchType*/ 11,  MVT::i64,// ->11119
/*11108*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*11110*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DSRAV), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                // Src: (sra:i64 CPU64Regs:i64:$rt, CPURegs:i32:$rs) - Complexity = 3
                // Dst: (DSRAV:i64 CPURegs:i32:$rs, CPU64Regs:i64:$rt)
              0, // EndSwitchType
/*11120*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 83,  TARGET_VAL(ISD::ROTR),// ->11207
/*11124*/   OPC_RecordChild0, // #0 = $rt
/*11125*/   OPC_RecordChild1, // #1 = $shamt
/*11126*/   OPC_Scope, 47, /*->11175*/ // 2 children in Scope
/*11128*/     OPC_MoveChild, 1,
/*11130*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*11133*/     OPC_CheckType, MVT::i32,
/*11135*/     OPC_Scope, 18, /*->11155*/ // 2 children in Scope
/*11137*/       OPC_CheckPredicate, 21, // Predicate_immZExt5
/*11139*/       OPC_MoveParent,
/*11140*/       OPC_CheckType, MVT::i32,
/*11142*/       OPC_CheckPatternPredicate, 15, // (Subtarget.hasMips32r2()) && (Subtarget.hasStandardEncoding())
/*11144*/       OPC_EmitConvertToTarget, 1,
/*11146*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ROTR), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (rotr:i32 CPURegs:i32:$rt, (imm:i32)<<P:Predicate_immZExt5>>:$shamt) - Complexity = 7
                // Dst: (ROTR:i32 CPURegs:i32:$rt, (imm:i32):$shamt)
/*11155*/     /*Scope*/ 18, /*->11174*/
/*11156*/       OPC_CheckPredicate, 29, // Predicate_immZExt6
/*11158*/       OPC_MoveParent,
/*11159*/       OPC_CheckType, MVT::i64,
/*11161*/       OPC_CheckPatternPredicate, 16, // (Subtarget.hasMips64r2()) && (Subtarget.hasStandardEncoding())
/*11163*/       OPC_EmitConvertToTarget, 1,
/*11165*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DROTR), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 2, 
                // Src: (rotr:i64 CPU64Regs:i64:$rt, (imm:i32)<<P:Predicate_immZExt6>>:$shamt) - Complexity = 7
                // Dst: (DROTR:i64 CPU64Regs:i64:$rt, (imm:i32):$shamt)
/*11174*/     0, /*End of Scope*/
/*11175*/   /*Scope*/ 30, /*->11206*/
/*11176*/     OPC_CheckChild1Type, MVT::i32,
/*11178*/     OPC_SwitchType /*2 cases */, 11,  MVT::i32,// ->11192
/*11181*/       OPC_CheckPatternPredicate, 15, // (Subtarget.hasMips32r2()) && (Subtarget.hasStandardEncoding())
/*11183*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ROTRV), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (rotr:i32 CPURegs:i32:$rt, CPURegs:i32:$rs) - Complexity = 3
                // Dst: (ROTRV:i32 CPURegs:i32:$rs, CPURegs:i32:$rt)
              /*SwitchType*/ 11,  MVT::i64,// ->11205
/*11194*/       OPC_CheckPatternPredicate, 16, // (Subtarget.hasMips64r2()) && (Subtarget.hasStandardEncoding())
/*11196*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DROTRV), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                // Src: (rotr:i64 CPU64Regs:i64:$rt, CPURegs:i32:$rs) - Complexity = 3
                // Dst: (DROTRV:i64 CPURegs:i32:$rs, CPU64Regs:i64:$rt)
              0, // EndSwitchType
/*11206*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 74,  TARGET_VAL(ISD::ADDC),// ->11284
/*11210*/   OPC_RecordChild0, // #0 = $src
/*11211*/   OPC_RecordChild1, // #1 = $imm
/*11212*/   OPC_Scope, 40, /*->11254*/ // 2 children in Scope
/*11214*/     OPC_MoveChild, 1,
/*11216*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*11219*/     OPC_CheckPredicate, 28, // Predicate_immSExt16
/*11221*/     OPC_MoveParent,
/*11222*/     OPC_CheckType, MVT::i32,
/*11224*/     OPC_Scope, 13, /*->11239*/ // 2 children in Scope
/*11226*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*11228*/       OPC_EmitConvertToTarget, 1,
/*11230*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0|OPFL_GlueOutput,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (addc:i32 CPURegs:i32:$src, (imm:i32)<<P:Predicate_immSExt16>>:$imm) - Complexity = 7
                // Dst: (ADDiu:i32 CPURegs:i32:$src, (imm:i32):$imm)
/*11239*/     /*Scope*/ 13, /*->11253*/
/*11240*/       OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*11242*/       OPC_EmitConvertToTarget, 1,
/*11244*/       OPC_MorphNodeTo, TARGET_VAL(Mips::AddiuRxRxImmX16), 0|OPFL_GlueOutput,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (addc:i32 CPU16Regs:i32:$src, (imm:i32)<<P:Predicate_immSExt16>>:$imm) - Complexity = 7
                // Dst: (AddiuRxRxImmX16:i32 CPU16Regs:i32:$src, (imm:i32):$imm)
/*11253*/     0, /*End of Scope*/
/*11254*/   /*Scope*/ 28, /*->11283*/
/*11255*/     OPC_CheckType, MVT::i32,
/*11257*/     OPC_Scope, 11, /*->11270*/ // 2 children in Scope
/*11259*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*11261*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ADDu), 0|OPFL_GlueOutput,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (addc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs) - Complexity = 3
                // Dst: (ADDu:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs)
/*11270*/     /*Scope*/ 11, /*->11282*/
/*11271*/       OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*11273*/       OPC_MorphNodeTo, TARGET_VAL(Mips::AdduRxRyRz16), 0|OPFL_GlueOutput,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (addc:i32 CPU16Regs:i32:$lhs, CPU16Regs:i32:$rhs) - Complexity = 3
                // Dst: (AdduRxRyRz16:i32 CPU16Regs:i32:$lhs, CPU16Regs:i32:$rhs)
/*11282*/     0, /*End of Scope*/
/*11283*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 47,  TARGET_VAL(MipsISD::EXTP),// ->11334
/*11287*/   OPC_RecordNode,   // #0 = 'MipsEXTP' chained node
/*11288*/   OPC_CaptureGlueInput,
/*11289*/   OPC_RecordChild1, // #1 = $shift
/*11290*/   OPC_Scope, 25, /*->11317*/ // 2 children in Scope
/*11292*/     OPC_MoveChild, 1,
/*11294*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*11297*/     OPC_CheckPredicate, 21, // Predicate_immZExt5
/*11299*/     OPC_MoveParent,
/*11300*/     OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*11302*/     OPC_EmitMergeInputChains1_0,
/*11303*/     OPC_EmitRegister, MVT::i64, Mips::AC0,
/*11306*/     OPC_EmitConvertToTarget, 1,
/*11308*/     OPC_MorphNodeTo, TARGET_VAL(Mips::EXTP), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (MipsEXTP:i32 (imm:i32)<<P:Predicate_immZExt5>>:$shift) - Complexity = 7
              // Dst: (EXTP:i32 AC0:i64, (imm:i32)<<P:Predicate_immZExt5>>:$shift)
/*11317*/   /*Scope*/ 15, /*->11333*/
/*11318*/     OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*11320*/     OPC_EmitMergeInputChains1_0,
/*11321*/     OPC_EmitRegister, MVT::i64, Mips::AC0,
/*11324*/     OPC_MorphNodeTo, TARGET_VAL(Mips::EXTPV), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 1, 
              // Src: (MipsEXTP:i32 CPURegs:i32:$rs) - Complexity = 3
              // Dst: (EXTPV:i32 AC0:i64, CPURegs:i32:$rs)
/*11333*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 47,  TARGET_VAL(MipsISD::EXTPDP),// ->11384
/*11337*/   OPC_RecordNode,   // #0 = 'MipsEXTPDP' chained node
/*11338*/   OPC_CaptureGlueInput,
/*11339*/   OPC_RecordChild1, // #1 = $shift
/*11340*/   OPC_Scope, 25, /*->11367*/ // 2 children in Scope
/*11342*/     OPC_MoveChild, 1,
/*11344*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*11347*/     OPC_CheckPredicate, 21, // Predicate_immZExt5
/*11349*/     OPC_MoveParent,
/*11350*/     OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*11352*/     OPC_EmitMergeInputChains1_0,
/*11353*/     OPC_EmitRegister, MVT::i64, Mips::AC0,
/*11356*/     OPC_EmitConvertToTarget, 1,
/*11358*/     OPC_MorphNodeTo, TARGET_VAL(Mips::EXTPDP), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (MipsEXTPDP:i32 (imm:i32)<<P:Predicate_immZExt5>>:$shift) - Complexity = 7
              // Dst: (EXTPDP:i32 AC0:i64, (imm:i32)<<P:Predicate_immZExt5>>:$shift)
/*11367*/   /*Scope*/ 15, /*->11383*/
/*11368*/     OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*11370*/     OPC_EmitMergeInputChains1_0,
/*11371*/     OPC_EmitRegister, MVT::i64, Mips::AC0,
/*11374*/     OPC_MorphNodeTo, TARGET_VAL(Mips::EXTPDPV), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 1, 
              // Src: (MipsEXTPDP:i32 CPURegs:i32:$rs) - Complexity = 3
              // Dst: (EXTPDPV:i32 AC0:i64, CPURegs:i32:$rs)
/*11383*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 47,  TARGET_VAL(MipsISD::EXTR_W),// ->11434
/*11387*/   OPC_RecordNode,   // #0 = 'MipsEXTR_W' chained node
/*11388*/   OPC_CaptureGlueInput,
/*11389*/   OPC_RecordChild1, // #1 = $shift
/*11390*/   OPC_Scope, 25, /*->11417*/ // 2 children in Scope
/*11392*/     OPC_MoveChild, 1,
/*11394*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*11397*/     OPC_CheckPredicate, 21, // Predicate_immZExt5
/*11399*/     OPC_MoveParent,
/*11400*/     OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*11402*/     OPC_EmitMergeInputChains1_0,
/*11403*/     OPC_EmitRegister, MVT::i64, Mips::AC0,
/*11406*/     OPC_EmitConvertToTarget, 1,
/*11408*/     OPC_MorphNodeTo, TARGET_VAL(Mips::EXTR_W), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (MipsEXTR_W:i32 (imm:i32)<<P:Predicate_immZExt5>>:$shift) - Complexity = 7
              // Dst: (EXTR_W:i32 AC0:i64, (imm:i32)<<P:Predicate_immZExt5>>:$shift)
/*11417*/   /*Scope*/ 15, /*->11433*/
/*11418*/     OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*11420*/     OPC_EmitMergeInputChains1_0,
/*11421*/     OPC_EmitRegister, MVT::i64, Mips::AC0,
/*11424*/     OPC_MorphNodeTo, TARGET_VAL(Mips::EXTRV_W), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 1, 
              // Src: (MipsEXTR_W:i32 CPURegs:i32:$rs) - Complexity = 3
              // Dst: (EXTRV_W:i32 AC0:i64, CPURegs:i32:$rs)
/*11433*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 47,  TARGET_VAL(MipsISD::EXTR_R_W),// ->11484
/*11437*/   OPC_RecordNode,   // #0 = 'MipsEXTR_R_W' chained node
/*11438*/   OPC_CaptureGlueInput,
/*11439*/   OPC_RecordChild1, // #1 = $shift
/*11440*/   OPC_Scope, 25, /*->11467*/ // 2 children in Scope
/*11442*/     OPC_MoveChild, 1,
/*11444*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*11447*/     OPC_CheckPredicate, 21, // Predicate_immZExt5
/*11449*/     OPC_MoveParent,
/*11450*/     OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*11452*/     OPC_EmitMergeInputChains1_0,
/*11453*/     OPC_EmitRegister, MVT::i64, Mips::AC0,
/*11456*/     OPC_EmitConvertToTarget, 1,
/*11458*/     OPC_MorphNodeTo, TARGET_VAL(Mips::EXTR_R_W), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (MipsEXTR_R_W:i32 (imm:i32)<<P:Predicate_immZExt5>>:$shift) - Complexity = 7
              // Dst: (EXTR_R_W:i32 AC0:i64, (imm:i32)<<P:Predicate_immZExt5>>:$shift)
/*11467*/   /*Scope*/ 15, /*->11483*/
/*11468*/     OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*11470*/     OPC_EmitMergeInputChains1_0,
/*11471*/     OPC_EmitRegister, MVT::i64, Mips::AC0,
/*11474*/     OPC_MorphNodeTo, TARGET_VAL(Mips::EXTRV_R_W), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 1, 
              // Src: (MipsEXTR_R_W:i32 CPURegs:i32:$rs) - Complexity = 3
              // Dst: (EXTRV_R_W:i32 AC0:i64, CPURegs:i32:$rs)
/*11483*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 47,  TARGET_VAL(MipsISD::EXTR_RS_W),// ->11534
/*11487*/   OPC_RecordNode,   // #0 = 'MipsEXTR_RS_W' chained node
/*11488*/   OPC_CaptureGlueInput,
/*11489*/   OPC_RecordChild1, // #1 = $shift
/*11490*/   OPC_Scope, 25, /*->11517*/ // 2 children in Scope
/*11492*/     OPC_MoveChild, 1,
/*11494*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*11497*/     OPC_CheckPredicate, 21, // Predicate_immZExt5
/*11499*/     OPC_MoveParent,
/*11500*/     OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*11502*/     OPC_EmitMergeInputChains1_0,
/*11503*/     OPC_EmitRegister, MVT::i64, Mips::AC0,
/*11506*/     OPC_EmitConvertToTarget, 1,
/*11508*/     OPC_MorphNodeTo, TARGET_VAL(Mips::EXTR_RS_W), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (MipsEXTR_RS_W:i32 (imm:i32)<<P:Predicate_immZExt5>>:$shift) - Complexity = 7
              // Dst: (EXTR_RS_W:i32 AC0:i64, (imm:i32)<<P:Predicate_immZExt5>>:$shift)
/*11517*/   /*Scope*/ 15, /*->11533*/
/*11518*/     OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*11520*/     OPC_EmitMergeInputChains1_0,
/*11521*/     OPC_EmitRegister, MVT::i64, Mips::AC0,
/*11524*/     OPC_MorphNodeTo, TARGET_VAL(Mips::EXTRV_RS_W), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 1, 
              // Src: (MipsEXTR_RS_W:i32 CPURegs:i32:$rs) - Complexity = 3
              // Dst: (EXTRV_RS_W:i32 AC0:i64, CPURegs:i32:$rs)
/*11533*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 47,  TARGET_VAL(MipsISD::EXTR_S_H),// ->11584
/*11537*/   OPC_RecordNode,   // #0 = 'MipsEXTR_S_H' chained node
/*11538*/   OPC_CaptureGlueInput,
/*11539*/   OPC_RecordChild1, // #1 = $shift
/*11540*/   OPC_Scope, 25, /*->11567*/ // 2 children in Scope
/*11542*/     OPC_MoveChild, 1,
/*11544*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*11547*/     OPC_CheckPredicate, 21, // Predicate_immZExt5
/*11549*/     OPC_MoveParent,
/*11550*/     OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*11552*/     OPC_EmitMergeInputChains1_0,
/*11553*/     OPC_EmitRegister, MVT::i64, Mips::AC0,
/*11556*/     OPC_EmitConvertToTarget, 1,
/*11558*/     OPC_MorphNodeTo, TARGET_VAL(Mips::EXTR_S_H), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (MipsEXTR_S_H:i32 (imm:i32)<<P:Predicate_immZExt5>>:$shift) - Complexity = 7
              // Dst: (EXTR_S_H:i32 AC0:i64, (imm:i32)<<P:Predicate_immZExt5>>:$shift)
/*11567*/   /*Scope*/ 15, /*->11583*/
/*11568*/     OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*11570*/     OPC_EmitMergeInputChains1_0,
/*11571*/     OPC_EmitRegister, MVT::i64, Mips::AC0,
/*11574*/     OPC_MorphNodeTo, TARGET_VAL(Mips::EXTRV_S_H), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 1, 
              // Src: (MipsEXTR_S_H:i32 CPURegs:i32:$rs) - Complexity = 3
              // Dst: (EXTRV_S_H:i32 AC0:i64, CPURegs:i32:$rs)
/*11583*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 83|128,1/*211*/,  TARGET_VAL(MipsISD::Hi),// ->11799
/*11588*/   OPC_RecordChild0, // #0 = $in
/*11589*/   OPC_MoveChild, 0,
/*11591*/   OPC_SwitchOpcode /*6 cases */, 27,  TARGET_VAL(ISD::TargetGlobalAddress),// ->11622
/*11595*/     OPC_MoveParent,
/*11596*/     OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->11609
/*11599*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*11601*/       OPC_MorphNodeTo, TARGET_VAL(Mips::LUi), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (MipsHi:i32 (tglobaladdr:i32):$in) - Complexity = 6
                // Dst: (LUi:i32 (tglobaladdr:i32):$in)
              /*SwitchType*/ 10,  MVT::i64,// ->11621
/*11611*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*11613*/       OPC_MorphNodeTo, TARGET_VAL(Mips::LUi64), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (MipsHi:i64 (tglobaladdr:i64):$in) - Complexity = 6
                // Dst: (LUi64:i64 (tglobaladdr:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 27,  TARGET_VAL(ISD::TargetBlockAddress),// ->11652
/*11625*/     OPC_MoveParent,
/*11626*/     OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->11639
/*11629*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*11631*/       OPC_MorphNodeTo, TARGET_VAL(Mips::LUi), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (MipsHi:i32 (tblockaddress:i32):$in) - Complexity = 6
                // Dst: (LUi:i32 (tblockaddress:i32):$in)
              /*SwitchType*/ 10,  MVT::i64,// ->11651
/*11641*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*11643*/       OPC_MorphNodeTo, TARGET_VAL(Mips::LUi64), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (MipsHi:i64 (tblockaddress:i64):$in) - Complexity = 6
                // Dst: (LUi64:i64 (tblockaddress:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 27,  TARGET_VAL(ISD::TargetJumpTable),// ->11682
/*11655*/     OPC_MoveParent,
/*11656*/     OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->11669
/*11659*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*11661*/       OPC_MorphNodeTo, TARGET_VAL(Mips::LUi), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (MipsHi:i32 (tjumptable:i32):$in) - Complexity = 6
                // Dst: (LUi:i32 (tjumptable:i32):$in)
              /*SwitchType*/ 10,  MVT::i64,// ->11681
/*11671*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*11673*/       OPC_MorphNodeTo, TARGET_VAL(Mips::LUi64), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (MipsHi:i64 (tjumptable:i64):$in) - Complexity = 6
                // Dst: (LUi64:i64 (tjumptable:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 27,  TARGET_VAL(ISD::TargetConstantPool),// ->11712
/*11685*/     OPC_MoveParent,
/*11686*/     OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->11699
/*11689*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*11691*/       OPC_MorphNodeTo, TARGET_VAL(Mips::LUi), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (MipsHi:i32 (tconstpool:i32):$in) - Complexity = 6
                // Dst: (LUi:i32 (tconstpool:i32):$in)
              /*SwitchType*/ 10,  MVT::i64,// ->11711
/*11701*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*11703*/       OPC_MorphNodeTo, TARGET_VAL(Mips::LUi64), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (MipsHi:i64 (tconstpool:i64):$in) - Complexity = 6
                // Dst: (LUi64:i64 (tconstpool:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 53,  TARGET_VAL(ISD::TargetGlobalTLSAddress),// ->11768
/*11715*/     OPC_MoveParent,
/*11716*/     OPC_SwitchType /*2 cases */, 36,  MVT::i32,// ->11755
/*11719*/       OPC_Scope, 10, /*->11731*/ // 2 children in Scope
/*11721*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*11723*/         OPC_MorphNodeTo, TARGET_VAL(Mips::LUi), 0,
                      1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                  // Src: (MipsHi:i32 (tglobaltlsaddr:i32):$in) - Complexity = 6
                  // Dst: (LUi:i32 (tglobaltlsaddr:i32):$in)
/*11731*/       /*Scope*/ 22, /*->11754*/
/*11732*/         OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*11734*/         OPC_EmitNode, TARGET_VAL(Mips::LiRxImmX16), 0,
                      1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0,  // Results = #1
/*11742*/         OPC_EmitInteger, MVT::i32, 16, 
/*11745*/         OPC_MorphNodeTo, TARGET_VAL(Mips::SllX16), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (MipsHi:i32 (tglobaltlsaddr:i32):$in) - Complexity = 6
                  // Dst: (SllX16:i32 (LiRxImmX16:i32 (tglobaltlsaddr:i32):$in), 16:i32)
/*11754*/       0, /*End of Scope*/
              /*SwitchType*/ 10,  MVT::i64,// ->11767
/*11757*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*11759*/       OPC_MorphNodeTo, TARGET_VAL(Mips::LUi64), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (MipsHi:i64 (tglobaltlsaddr:i64):$in) - Complexity = 6
                // Dst: (LUi64:i64 (tglobaltlsaddr:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 27,  TARGET_VAL(ISD::TargetExternalSymbol),// ->11798
/*11771*/     OPC_MoveParent,
/*11772*/     OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->11785
/*11775*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*11777*/       OPC_MorphNodeTo, TARGET_VAL(Mips::LUi), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (MipsHi:i32 (texternalsym:i32):$in) - Complexity = 6
                // Dst: (LUi:i32 (texternalsym:i32):$in)
              /*SwitchType*/ 10,  MVT::i64,// ->11797
/*11787*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*11789*/       OPC_MorphNodeTo, TARGET_VAL(Mips::LUi64), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (MipsHi:i64 (texternalsym:i64):$in) - Complexity = 6
                // Dst: (LUi64:i64 (texternalsym:i64):$in)
              0, // EndSwitchType
            0, // EndSwitchOpcode
          /*SwitchOpcode*/ 105|128,1/*233*/,  TARGET_VAL(MipsISD::Lo),// ->12036
/*11803*/   OPC_RecordChild0, // #0 = $in
/*11804*/   OPC_MoveChild, 0,
/*11806*/   OPC_SwitchOpcode /*6 cases */, 35,  TARGET_VAL(ISD::TargetGlobalAddress),// ->11845
/*11810*/     OPC_MoveParent,
/*11811*/     OPC_SwitchType /*2 cases */, 14,  MVT::i32,// ->11828
/*11814*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*11816*/       OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*11819*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (MipsLo:i32 (tglobaladdr:i32):$in) - Complexity = 6
                // Dst: (ADDiu:i32 ZERO:i32, (tglobaladdr:i32):$in)
              /*SwitchType*/ 14,  MVT::i64,// ->11844
/*11830*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*11832*/       OPC_EmitRegister, MVT::i64, Mips::ZERO_64,
/*11835*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                // Src: (MipsLo:i64 (tglobaladdr:i64):$in) - Complexity = 6
                // Dst: (DADDiu:i64 ZERO_64:i64, (tglobaladdr:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 35,  TARGET_VAL(ISD::TargetBlockAddress),// ->11883
/*11848*/     OPC_MoveParent,
/*11849*/     OPC_SwitchType /*2 cases */, 14,  MVT::i32,// ->11866
/*11852*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*11854*/       OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*11857*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (MipsLo:i32 (tblockaddress:i32):$in) - Complexity = 6
                // Dst: (ADDiu:i32 ZERO:i32, (tblockaddress:i32):$in)
              /*SwitchType*/ 14,  MVT::i64,// ->11882
/*11868*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*11870*/       OPC_EmitRegister, MVT::i64, Mips::ZERO_64,
/*11873*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                // Src: (MipsLo:i64 (tblockaddress:i64):$in) - Complexity = 6
                // Dst: (DADDiu:i64 ZERO_64:i64, (tblockaddress:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 35,  TARGET_VAL(ISD::TargetJumpTable),// ->11921
/*11886*/     OPC_MoveParent,
/*11887*/     OPC_SwitchType /*2 cases */, 14,  MVT::i32,// ->11904
/*11890*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*11892*/       OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*11895*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (MipsLo:i32 (tjumptable:i32):$in) - Complexity = 6
                // Dst: (ADDiu:i32 ZERO:i32, (tjumptable:i32):$in)
              /*SwitchType*/ 14,  MVT::i64,// ->11920
/*11906*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*11908*/       OPC_EmitRegister, MVT::i64, Mips::ZERO_64,
/*11911*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                // Src: (MipsLo:i64 (tjumptable:i64):$in) - Complexity = 6
                // Dst: (DADDiu:i64 ZERO_64:i64, (tjumptable:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 35,  TARGET_VAL(ISD::TargetConstantPool),// ->11959
/*11924*/     OPC_MoveParent,
/*11925*/     OPC_SwitchType /*2 cases */, 14,  MVT::i32,// ->11942
/*11928*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*11930*/       OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*11933*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (MipsLo:i32 (tconstpool:i32):$in) - Complexity = 6
                // Dst: (ADDiu:i32 ZERO:i32, (tconstpool:i32):$in)
              /*SwitchType*/ 14,  MVT::i64,// ->11958
/*11944*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*11946*/       OPC_EmitRegister, MVT::i64, Mips::ZERO_64,
/*11949*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                // Src: (MipsLo:i64 (tconstpool:i64):$in) - Complexity = 6
                // Dst: (DADDiu:i64 ZERO_64:i64, (tconstpool:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 35,  TARGET_VAL(ISD::TargetGlobalTLSAddress),// ->11997
/*11962*/     OPC_MoveParent,
/*11963*/     OPC_SwitchType /*2 cases */, 14,  MVT::i32,// ->11980
/*11966*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*11968*/       OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*11971*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (MipsLo:i32 (tglobaltlsaddr:i32):$in) - Complexity = 6
                // Dst: (ADDiu:i32 ZERO:i32, (tglobaltlsaddr:i32):$in)
              /*SwitchType*/ 14,  MVT::i64,// ->11996
/*11982*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*11984*/       OPC_EmitRegister, MVT::i64, Mips::ZERO_64,
/*11987*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                // Src: (MipsLo:i64 (tglobaltlsaddr:i64):$in) - Complexity = 6
                // Dst: (DADDiu:i64 ZERO_64:i64, (tglobaltlsaddr:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 35,  TARGET_VAL(ISD::TargetExternalSymbol),// ->12035
/*12000*/     OPC_MoveParent,
/*12001*/     OPC_SwitchType /*2 cases */, 14,  MVT::i32,// ->12018
/*12004*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*12006*/       OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*12009*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (MipsLo:i32 (texternalsym:i32):$in) - Complexity = 6
                // Dst: (ADDiu:i32 ZERO:i32, (texternalsym:i32):$in)
              /*SwitchType*/ 14,  MVT::i64,// ->12034
/*12020*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*12022*/       OPC_EmitRegister, MVT::i64, Mips::ZERO_64,
/*12025*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                // Src: (MipsLo:i64 (texternalsym:i64):$in) - Complexity = 6
                // Dst: (DADDiu:i64 ZERO_64:i64, (texternalsym:i64):$in)
              0, // EndSwitchType
            0, // EndSwitchOpcode
          /*SwitchOpcode*/ 100|128,1/*228*/,  TARGET_VAL(MipsISD::Wrapper),// ->12268
/*12040*/   OPC_RecordChild0, // #0 = $gp
/*12041*/   OPC_RecordChild1, // #1 = $in
/*12042*/   OPC_MoveChild, 1,
/*12044*/   OPC_SwitchOpcode /*6 cases */, 44,  TARGET_VAL(ISD::TargetGlobalAddress),// ->12092
/*12048*/     OPC_MoveParent,
/*12049*/     OPC_SwitchType /*2 cases */, 26,  MVT::i32,// ->12078
/*12052*/       OPC_Scope, 11, /*->12065*/ // 2 children in Scope
/*12054*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*12056*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (MipsWrapper:i32 CPURegs:i32:$gp, (tglobaladdr:i32):$in) - Complexity = 6
                  // Dst: (ADDiu:i32 CPURegs:i32:$gp, (tglobaladdr:i32):$in)
/*12065*/       /*Scope*/ 11, /*->12077*/
/*12066*/         OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*12068*/         OPC_MorphNodeTo, TARGET_VAL(Mips::AddiuRxRxImmX16), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (MipsWrapper:i32 CPU16Regs:i32:$gp, (tglobaladdr:i32):$in) - Complexity = 6
                  // Dst: (AddiuRxRxImmX16:i32 CPU16Regs:i32:$gp, (tglobaladdr:i32):$in)
/*12077*/       0, /*End of Scope*/
              /*SwitchType*/ 11,  MVT::i64,// ->12091
/*12080*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*12082*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (MipsWrapper:i64 CPU64Regs:i64:$gp, (tglobaladdr:i64):$in) - Complexity = 6
                // Dst: (DADDiu:i64 CPU64Regs:i64:$gp, (tglobaladdr:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 29,  TARGET_VAL(ISD::TargetConstantPool),// ->12124
/*12095*/     OPC_MoveParent,
/*12096*/     OPC_SwitchType /*2 cases */, 11,  MVT::i32,// ->12110
/*12099*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*12101*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (MipsWrapper:i32 CPURegs:i32:$gp, (tconstpool:i32):$in) - Complexity = 6
                // Dst: (ADDiu:i32 CPURegs:i32:$gp, (tconstpool:i32):$in)
              /*SwitchType*/ 11,  MVT::i64,// ->12123
/*12112*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*12114*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (MipsWrapper:i64 CPU64Regs:i64:$gp, (tconstpool:i64):$in) - Complexity = 6
                // Dst: (DADDiu:i64 CPU64Regs:i64:$gp, (tconstpool:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 29,  TARGET_VAL(ISD::TargetExternalSymbol),// ->12156
/*12127*/     OPC_MoveParent,
/*12128*/     OPC_SwitchType /*2 cases */, 11,  MVT::i32,// ->12142
/*12131*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*12133*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (MipsWrapper:i32 CPURegs:i32:$gp, (texternalsym:i32):$in) - Complexity = 6
                // Dst: (ADDiu:i32 CPURegs:i32:$gp, (texternalsym:i32):$in)
              /*SwitchType*/ 11,  MVT::i64,// ->12155
/*12144*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*12146*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (MipsWrapper:i64 CPU64Regs:i64:$gp, (texternalsym:i64):$in) - Complexity = 6
                // Dst: (DADDiu:i64 CPU64Regs:i64:$gp, (texternalsym:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 29,  TARGET_VAL(ISD::TargetBlockAddress),// ->12188
/*12159*/     OPC_MoveParent,
/*12160*/     OPC_SwitchType /*2 cases */, 11,  MVT::i32,// ->12174
/*12163*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*12165*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (MipsWrapper:i32 CPURegs:i32:$gp, (tblockaddress:i32):$in) - Complexity = 6
                // Dst: (ADDiu:i32 CPURegs:i32:$gp, (tblockaddress:i32):$in)
              /*SwitchType*/ 11,  MVT::i64,// ->12187
/*12176*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*12178*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (MipsWrapper:i64 CPU64Regs:i64:$gp, (tblockaddress:i64):$in) - Complexity = 6
                // Dst: (DADDiu:i64 CPU64Regs:i64:$gp, (tblockaddress:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 29,  TARGET_VAL(ISD::TargetJumpTable),// ->12220
/*12191*/     OPC_MoveParent,
/*12192*/     OPC_SwitchType /*2 cases */, 11,  MVT::i32,// ->12206
/*12195*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*12197*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (MipsWrapper:i32 CPURegs:i32:$gp, (tjumptable:i32):$in) - Complexity = 6
                // Dst: (ADDiu:i32 CPURegs:i32:$gp, (tjumptable:i32):$in)
              /*SwitchType*/ 11,  MVT::i64,// ->12219
/*12208*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*12210*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (MipsWrapper:i64 CPU64Regs:i64:$gp, (tjumptable:i64):$in) - Complexity = 6
                // Dst: (DADDiu:i64 CPU64Regs:i64:$gp, (tjumptable:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 44,  TARGET_VAL(ISD::TargetGlobalTLSAddress),// ->12267
/*12223*/     OPC_MoveParent,
/*12224*/     OPC_SwitchType /*2 cases */, 26,  MVT::i32,// ->12253
/*12227*/       OPC_Scope, 11, /*->12240*/ // 2 children in Scope
/*12229*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*12231*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (MipsWrapper:i32 CPURegs:i32:$gp, (tglobaltlsaddr:i32):$in) - Complexity = 6
                  // Dst: (ADDiu:i32 CPURegs:i32:$gp, (tglobaltlsaddr:i32):$in)
/*12240*/       /*Scope*/ 11, /*->12252*/
/*12241*/         OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*12243*/         OPC_MorphNodeTo, TARGET_VAL(Mips::AddiuRxRxImmX16), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (MipsWrapper:i32 CPU16Regs:i32:$gp, (tglobaltlsaddr:i32):$in) - Complexity = 6
                  // Dst: (AddiuRxRxImmX16:i32 CPU16Regs:i32:$gp, (tglobaltlsaddr:i32):$in)
/*12252*/       0, /*End of Scope*/
              /*SwitchType*/ 11,  MVT::i64,// ->12266
/*12255*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*12257*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (MipsWrapper:i64 CPU64Regs:i64:$gp, (tglobaltlsaddr:i64):$in) - Complexity = 6
                // Dst: (DADDiu:i64 CPU64Regs:i64:$gp, (tglobaltlsaddr:i64):$in)
              0, // EndSwitchType
            0, // EndSwitchOpcode
          /*SwitchOpcode*/ 21,  TARGET_VAL(MipsISD::ExtractElementF64),// ->12292
/*12271*/   OPC_RecordChild0, // #0 = $src
/*12272*/   OPC_RecordChild1, // #1 = $n
/*12273*/   OPC_MoveChild, 1,
/*12275*/   OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*12278*/   OPC_MoveParent,
/*12279*/   OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*12281*/   OPC_EmitConvertToTarget, 1,
/*12283*/   OPC_MorphNodeTo, TARGET_VAL(Mips::ExtractElementF64), 0,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
            // Src: (MipsExtractElementF64:i32 AFGR64:f64:$src, (imm:i32):$n) - Complexity = 6
            // Dst: (ExtractElementF64:i32 AFGR64:f64:$src, (imm:i32):$n)
          /*SwitchOpcode*/ 61|128,1/*189*/,  TARGET_VAL(ISD::Constant),// ->12485
/*12296*/   OPC_RecordNode,   // #0 = $in
/*12297*/   OPC_CheckType, MVT::i32,
/*12299*/   OPC_Scope, 18, /*->12319*/ // 6 children in Scope
/*12301*/     OPC_CheckPredicate, 28, // Predicate_immSExt16
/*12303*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*12305*/     OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*12308*/     OPC_EmitConvertToTarget, 0,
/*12310*/     OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (imm:i32)<<P:Predicate_immSExt16>>:$in - Complexity = 4
              // Dst: (ADDiu:i32 ZERO:i32, (imm:i32):$in)
/*12319*/   /*Scope*/ 18, /*->12338*/
/*12320*/     OPC_CheckPredicate, 27, // Predicate_immZExt16
/*12322*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*12324*/     OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*12327*/     OPC_EmitConvertToTarget, 0,
/*12329*/     OPC_MorphNodeTo, TARGET_VAL(Mips::ORi), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (imm:i32)<<P:Predicate_immZExt16>><<X:LO16>>:$in - Complexity = 4
              // Dst: (ORi:i32 ZERO:i32, (imm:i32):$in)
/*12338*/   /*Scope*/ 17, /*->12356*/
/*12339*/     OPC_CheckPredicate, 30, // Predicate_immLow16Zero
/*12341*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*12343*/     OPC_EmitConvertToTarget, 0,
/*12345*/     OPC_EmitNodeXForm, 1, 1, // HI16
/*12348*/     OPC_MorphNodeTo, TARGET_VAL(Mips::LUi), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
              // Src: (imm:i32)<<P:Predicate_immLow16Zero>>:$in - Complexity = 4
              // Dst: (LUi:i32 (HI16:i32 (imm:i32):$in))
/*12356*/   /*Scope*/ 17, /*->12374*/
/*12357*/     OPC_CheckPredicate, 27, // Predicate_immZExt16
/*12359*/     OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*12361*/     OPC_EmitConvertToTarget, 0,
/*12363*/     OPC_EmitNodeXForm, 0, 1, // LO16
/*12366*/     OPC_MorphNodeTo, TARGET_VAL(Mips::LiRxImmX16), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
              // Src: (imm:i32)<<P:Predicate_immZExt16>><<X:LO16>>:$in - Complexity = 4
              // Dst: (LiRxImmX16:i32 (LO16:i32 (imm:i32)<<P:Predicate_immZExt16>>:$in))
/*12374*/   /*Scope*/ 26, /*->12401*/
/*12375*/     OPC_CheckPredicate, 28, // Predicate_immSExt16
/*12377*/     OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*12379*/     OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*12382*/     OPC_EmitNode, TARGET_VAL(Mips::Move32R16), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1,  // Results = #2
/*12390*/     OPC_EmitConvertToTarget, 0,
/*12392*/     OPC_MorphNodeTo, TARGET_VAL(Mips::AddiuRxRxImmX16), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (imm:i32)<<P:Predicate_immSExt16>>:$in - Complexity = 4
              // Dst: (AddiuRxRxImmX16:i32 (Move32R16:i32 ZERO:i32), (imm:i32)<<P:Predicate_immSExt16>>:$in)
/*12401*/   /*Scope*/ 82, /*->12484*/
/*12402*/     OPC_Scope, 29, /*->12433*/ // 2 children in Scope
/*12404*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*12406*/       OPC_EmitConvertToTarget, 0,
/*12408*/       OPC_EmitNodeXForm, 1, 1, // HI16
/*12411*/       OPC_EmitNode, TARGET_VAL(Mips::LUi), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2,  // Results = #3
/*12419*/       OPC_EmitConvertToTarget, 0,
/*12421*/       OPC_EmitNodeXForm, 0, 4, // LO16
/*12424*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ORi), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 3, 5, 
                // Src: (imm:i32):$imm - Complexity = 3
                // Dst: (ORi:i32 (LUi:i32 (HI16:i32 (imm:i32):$imm)), (LO16:i32 (imm:i32):$imm))
/*12433*/     /*Scope*/ 49, /*->12483*/
/*12434*/       OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*12436*/       OPC_EmitConvertToTarget, 0,
/*12438*/       OPC_EmitNodeXForm, 1, 1, // HI16
/*12441*/       OPC_EmitNode, TARGET_VAL(Mips::LiRxImmX16), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2,  // Results = #3
/*12449*/       OPC_EmitInteger, MVT::i32, 16, 
/*12452*/       OPC_EmitNode, TARGET_VAL(Mips::SllX16), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 3, 4,  // Results = #5
/*12461*/       OPC_EmitConvertToTarget, 0,
/*12463*/       OPC_EmitNodeXForm, 0, 6, // LO16
/*12466*/       OPC_EmitNode, TARGET_VAL(Mips::LiRxImmX16), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 7,  // Results = #8
/*12474*/       OPC_MorphNodeTo, TARGET_VAL(Mips::OrRxRxRy16), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 5, 8, 
                // Src: (imm:i32):$imm - Complexity = 3
                // Dst: (OrRxRxRy16:i32 (SllX16:i32 (LiRxImmX16:i32 (HI16:i32 (imm:i32):$imm)), 16:i32), (LiRxImmX16:i32 (LO16:i32 (imm:i32):$imm)))
/*12483*/     0, /*End of Scope*/
/*12484*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 19|128,1/*147*/,  TARGET_VAL(ISD::ATOMIC_LOAD_ADD),// ->12636
/*12489*/   OPC_RecordMemRef,
/*12490*/   OPC_RecordNode,   // #0 = 'atomic_load_add' chained node
/*12491*/   OPC_RecordChild1, // #1 = $ptr
/*12492*/   OPC_Scope, 70, /*->12564*/ // 2 children in Scope
/*12494*/     OPC_CheckChild1Type, MVT::i32,
/*12496*/     OPC_RecordChild2, // #2 = $incr
/*12497*/     OPC_SwitchType /*2 cases */, 47,  MVT::i32,// ->12547
/*12500*/       OPC_Scope, 14, /*->12516*/ // 3 children in Scope
/*12502*/         OPC_CheckPredicate, 31, // Predicate_atomic_load_add_8
/*12504*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*12506*/         OPC_EmitMergeInputChains1_0,
/*12507*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_ADD_I8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_add:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_add_8>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_ADD_I8:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)
/*12516*/       /*Scope*/ 14, /*->12531*/
/*12517*/         OPC_CheckPredicate, 32, // Predicate_atomic_load_add_16
/*12519*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*12521*/         OPC_EmitMergeInputChains1_0,
/*12522*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_ADD_I16), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_add:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_add_16>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_ADD_I16:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)
/*12531*/       /*Scope*/ 14, /*->12546*/
/*12532*/         OPC_CheckPredicate, 33, // Predicate_atomic_load_add_32
/*12534*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*12536*/         OPC_EmitMergeInputChains1_0,
/*12537*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_ADD_I32), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_add:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_add_32>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_ADD_I32:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)
/*12546*/       0, /*End of Scope*/
              /*SwitchType*/ 14,  MVT::i64,// ->12563
/*12549*/       OPC_CheckPredicate, 34, // Predicate_atomic_load_add_64
/*12551*/       OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*12553*/       OPC_EmitMergeInputChains1_0,
/*12554*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_ADD_I64), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
                // Src: (atomic_load_add:i64 CPURegs:i32:$ptr, CPU64Regs:i64:$incr)<<P:Predicate_atomic_load_add_64>> - Complexity = 4
                // Dst: (ATOMIC_LOAD_ADD_I64:i64 CPURegs:i32:$ptr, CPU64Regs:i64:$incr)
              0, // EndSwitchType
/*12564*/   /*Scope*/ 70, /*->12635*/
/*12565*/     OPC_CheckChild1Type, MVT::i64,
/*12567*/     OPC_RecordChild2, // #2 = $incr
/*12568*/     OPC_SwitchType /*2 cases */, 47,  MVT::i32,// ->12618
/*12571*/       OPC_Scope, 14, /*->12587*/ // 3 children in Scope
/*12573*/         OPC_CheckPredicate, 31, // Predicate_atomic_load_add_8
/*12575*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*12577*/         OPC_EmitMergeInputChains1_0,
/*12578*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_ADD_I8_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_add:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_add_8>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_ADD_I8_P8:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)
/*12587*/       /*Scope*/ 14, /*->12602*/
/*12588*/         OPC_CheckPredicate, 32, // Predicate_atomic_load_add_16
/*12590*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*12592*/         OPC_EmitMergeInputChains1_0,
/*12593*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_ADD_I16_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_add:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_add_16>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_ADD_I16_P8:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)
/*12602*/       /*Scope*/ 14, /*->12617*/
/*12603*/         OPC_CheckPredicate, 33, // Predicate_atomic_load_add_32
/*12605*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*12607*/         OPC_EmitMergeInputChains1_0,
/*12608*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_ADD_I32_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_add:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_add_32>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_ADD_I32_P8:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)
/*12617*/       0, /*End of Scope*/
              /*SwitchType*/ 14,  MVT::i64,// ->12634
/*12620*/       OPC_CheckPredicate, 34, // Predicate_atomic_load_add_64
/*12622*/       OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*12624*/       OPC_EmitMergeInputChains1_0,
/*12625*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_ADD_I64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
                // Src: (atomic_load_add:i64 CPU64Regs:i64:$ptr, CPU64Regs:i64:$incr)<<P:Predicate_atomic_load_add_64>> - Complexity = 4
                // Dst: (ATOMIC_LOAD_ADD_I64_P8:i64 CPU64Regs:i64:$ptr, CPU64Regs:i64:$incr)
              0, // EndSwitchType
/*12635*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 19|128,1/*147*/,  TARGET_VAL(ISD::ATOMIC_LOAD_SUB),// ->12787
/*12640*/   OPC_RecordMemRef,
/*12641*/   OPC_RecordNode,   // #0 = 'atomic_load_sub' chained node
/*12642*/   OPC_RecordChild1, // #1 = $ptr
/*12643*/   OPC_Scope, 70, /*->12715*/ // 2 children in Scope
/*12645*/     OPC_CheckChild1Type, MVT::i32,
/*12647*/     OPC_RecordChild2, // #2 = $incr
/*12648*/     OPC_SwitchType /*2 cases */, 47,  MVT::i32,// ->12698
/*12651*/       OPC_Scope, 14, /*->12667*/ // 3 children in Scope
/*12653*/         OPC_CheckPredicate, 35, // Predicate_atomic_load_sub_8
/*12655*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*12657*/         OPC_EmitMergeInputChains1_0,
/*12658*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_SUB_I8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_sub:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_sub_8>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_SUB_I8:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)
/*12667*/       /*Scope*/ 14, /*->12682*/
/*12668*/         OPC_CheckPredicate, 36, // Predicate_atomic_load_sub_16
/*12670*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*12672*/         OPC_EmitMergeInputChains1_0,
/*12673*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_SUB_I16), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_sub:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_sub_16>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_SUB_I16:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)
/*12682*/       /*Scope*/ 14, /*->12697*/
/*12683*/         OPC_CheckPredicate, 37, // Predicate_atomic_load_sub_32
/*12685*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*12687*/         OPC_EmitMergeInputChains1_0,
/*12688*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_SUB_I32), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_sub:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_sub_32>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_SUB_I32:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)
/*12697*/       0, /*End of Scope*/
              /*SwitchType*/ 14,  MVT::i64,// ->12714
/*12700*/       OPC_CheckPredicate, 38, // Predicate_atomic_load_sub_64
/*12702*/       OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*12704*/       OPC_EmitMergeInputChains1_0,
/*12705*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_SUB_I64), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
                // Src: (atomic_load_sub:i64 CPURegs:i32:$ptr, CPU64Regs:i64:$incr)<<P:Predicate_atomic_load_sub_64>> - Complexity = 4
                // Dst: (ATOMIC_LOAD_SUB_I64:i64 CPURegs:i32:$ptr, CPU64Regs:i64:$incr)
              0, // EndSwitchType
/*12715*/   /*Scope*/ 70, /*->12786*/
/*12716*/     OPC_CheckChild1Type, MVT::i64,
/*12718*/     OPC_RecordChild2, // #2 = $incr
/*12719*/     OPC_SwitchType /*2 cases */, 47,  MVT::i32,// ->12769
/*12722*/       OPC_Scope, 14, /*->12738*/ // 3 children in Scope
/*12724*/         OPC_CheckPredicate, 35, // Predicate_atomic_load_sub_8
/*12726*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*12728*/         OPC_EmitMergeInputChains1_0,
/*12729*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_SUB_I8_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_sub:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_sub_8>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_SUB_I8_P8:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)
/*12738*/       /*Scope*/ 14, /*->12753*/
/*12739*/         OPC_CheckPredicate, 36, // Predicate_atomic_load_sub_16
/*12741*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*12743*/         OPC_EmitMergeInputChains1_0,
/*12744*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_SUB_I16_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_sub:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_sub_16>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_SUB_I16_P8:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)
/*12753*/       /*Scope*/ 14, /*->12768*/
/*12754*/         OPC_CheckPredicate, 37, // Predicate_atomic_load_sub_32
/*12756*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*12758*/         OPC_EmitMergeInputChains1_0,
/*12759*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_SUB_I32_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_sub:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_sub_32>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_SUB_I32_P8:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)
/*12768*/       0, /*End of Scope*/
              /*SwitchType*/ 14,  MVT::i64,// ->12785
/*12771*/       OPC_CheckPredicate, 38, // Predicate_atomic_load_sub_64
/*12773*/       OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*12775*/       OPC_EmitMergeInputChains1_0,
/*12776*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_SUB_I64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
                // Src: (atomic_load_sub:i64 CPU64Regs:i64:$ptr, CPU64Regs:i64:$incr)<<P:Predicate_atomic_load_sub_64>> - Complexity = 4
                // Dst: (ATOMIC_LOAD_SUB_I64_P8:i64 CPU64Regs:i64:$ptr, CPU64Regs:i64:$incr)
              0, // EndSwitchType
/*12786*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 19|128,1/*147*/,  TARGET_VAL(ISD::ATOMIC_LOAD_AND),// ->12938
/*12791*/   OPC_RecordMemRef,
/*12792*/   OPC_RecordNode,   // #0 = 'atomic_load_and' chained node
/*12793*/   OPC_RecordChild1, // #1 = $ptr
/*12794*/   OPC_Scope, 70, /*->12866*/ // 2 children in Scope
/*12796*/     OPC_CheckChild1Type, MVT::i32,
/*12798*/     OPC_RecordChild2, // #2 = $incr
/*12799*/     OPC_SwitchType /*2 cases */, 47,  MVT::i32,// ->12849
/*12802*/       OPC_Scope, 14, /*->12818*/ // 3 children in Scope
/*12804*/         OPC_CheckPredicate, 39, // Predicate_atomic_load_and_8
/*12806*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*12808*/         OPC_EmitMergeInputChains1_0,
/*12809*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_AND_I8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_and:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_and_8>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_AND_I8:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)
/*12818*/       /*Scope*/ 14, /*->12833*/
/*12819*/         OPC_CheckPredicate, 40, // Predicate_atomic_load_and_16
/*12821*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*12823*/         OPC_EmitMergeInputChains1_0,
/*12824*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_AND_I16), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_and:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_and_16>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_AND_I16:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)
/*12833*/       /*Scope*/ 14, /*->12848*/
/*12834*/         OPC_CheckPredicate, 41, // Predicate_atomic_load_and_32
/*12836*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*12838*/         OPC_EmitMergeInputChains1_0,
/*12839*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_AND_I32), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_and:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_and_32>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_AND_I32:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)
/*12848*/       0, /*End of Scope*/
              /*SwitchType*/ 14,  MVT::i64,// ->12865
/*12851*/       OPC_CheckPredicate, 42, // Predicate_atomic_load_and_64
/*12853*/       OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*12855*/       OPC_EmitMergeInputChains1_0,
/*12856*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_AND_I64), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
                // Src: (atomic_load_and:i64 CPURegs:i32:$ptr, CPU64Regs:i64:$incr)<<P:Predicate_atomic_load_and_64>> - Complexity = 4
                // Dst: (ATOMIC_LOAD_AND_I64:i64 CPURegs:i32:$ptr, CPU64Regs:i64:$incr)
              0, // EndSwitchType
/*12866*/   /*Scope*/ 70, /*->12937*/
/*12867*/     OPC_CheckChild1Type, MVT::i64,
/*12869*/     OPC_RecordChild2, // #2 = $incr
/*12870*/     OPC_SwitchType /*2 cases */, 47,  MVT::i32,// ->12920
/*12873*/       OPC_Scope, 14, /*->12889*/ // 3 children in Scope
/*12875*/         OPC_CheckPredicate, 39, // Predicate_atomic_load_and_8
/*12877*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*12879*/         OPC_EmitMergeInputChains1_0,
/*12880*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_AND_I8_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_and:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_and_8>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_AND_I8_P8:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)
/*12889*/       /*Scope*/ 14, /*->12904*/
/*12890*/         OPC_CheckPredicate, 40, // Predicate_atomic_load_and_16
/*12892*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*12894*/         OPC_EmitMergeInputChains1_0,
/*12895*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_AND_I16_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_and:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_and_16>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_AND_I16_P8:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)
/*12904*/       /*Scope*/ 14, /*->12919*/
/*12905*/         OPC_CheckPredicate, 41, // Predicate_atomic_load_and_32
/*12907*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*12909*/         OPC_EmitMergeInputChains1_0,
/*12910*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_AND_I32_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_and:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_and_32>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_AND_I32_P8:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)
/*12919*/       0, /*End of Scope*/
              /*SwitchType*/ 14,  MVT::i64,// ->12936
/*12922*/       OPC_CheckPredicate, 42, // Predicate_atomic_load_and_64
/*12924*/       OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*12926*/       OPC_EmitMergeInputChains1_0,
/*12927*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_AND_I64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
                // Src: (atomic_load_and:i64 CPU64Regs:i64:$ptr, CPU64Regs:i64:$incr)<<P:Predicate_atomic_load_and_64>> - Complexity = 4
                // Dst: (ATOMIC_LOAD_AND_I64_P8:i64 CPU64Regs:i64:$ptr, CPU64Regs:i64:$incr)
              0, // EndSwitchType
/*12937*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 19|128,1/*147*/,  TARGET_VAL(ISD::ATOMIC_LOAD_OR),// ->13089
/*12942*/   OPC_RecordMemRef,
/*12943*/   OPC_RecordNode,   // #0 = 'atomic_load_or' chained node
/*12944*/   OPC_RecordChild1, // #1 = $ptr
/*12945*/   OPC_Scope, 70, /*->13017*/ // 2 children in Scope
/*12947*/     OPC_CheckChild1Type, MVT::i32,
/*12949*/     OPC_RecordChild2, // #2 = $incr
/*12950*/     OPC_SwitchType /*2 cases */, 47,  MVT::i32,// ->13000
/*12953*/       OPC_Scope, 14, /*->12969*/ // 3 children in Scope
/*12955*/         OPC_CheckPredicate, 43, // Predicate_atomic_load_or_8
/*12957*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*12959*/         OPC_EmitMergeInputChains1_0,
/*12960*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_OR_I8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_or:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_or_8>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_OR_I8:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)
/*12969*/       /*Scope*/ 14, /*->12984*/
/*12970*/         OPC_CheckPredicate, 44, // Predicate_atomic_load_or_16
/*12972*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*12974*/         OPC_EmitMergeInputChains1_0,
/*12975*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_OR_I16), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_or:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_or_16>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_OR_I16:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)
/*12984*/       /*Scope*/ 14, /*->12999*/
/*12985*/         OPC_CheckPredicate, 45, // Predicate_atomic_load_or_32
/*12987*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*12989*/         OPC_EmitMergeInputChains1_0,
/*12990*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_OR_I32), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_or:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_or_32>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_OR_I32:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)
/*12999*/       0, /*End of Scope*/
              /*SwitchType*/ 14,  MVT::i64,// ->13016
/*13002*/       OPC_CheckPredicate, 46, // Predicate_atomic_load_or_64
/*13004*/       OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*13006*/       OPC_EmitMergeInputChains1_0,
/*13007*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_OR_I64), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
                // Src: (atomic_load_or:i64 CPURegs:i32:$ptr, CPU64Regs:i64:$incr)<<P:Predicate_atomic_load_or_64>> - Complexity = 4
                // Dst: (ATOMIC_LOAD_OR_I64:i64 CPURegs:i32:$ptr, CPU64Regs:i64:$incr)
              0, // EndSwitchType
/*13017*/   /*Scope*/ 70, /*->13088*/
/*13018*/     OPC_CheckChild1Type, MVT::i64,
/*13020*/     OPC_RecordChild2, // #2 = $incr
/*13021*/     OPC_SwitchType /*2 cases */, 47,  MVT::i32,// ->13071
/*13024*/       OPC_Scope, 14, /*->13040*/ // 3 children in Scope
/*13026*/         OPC_CheckPredicate, 43, // Predicate_atomic_load_or_8
/*13028*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*13030*/         OPC_EmitMergeInputChains1_0,
/*13031*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_OR_I8_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_or:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_or_8>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_OR_I8_P8:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)
/*13040*/       /*Scope*/ 14, /*->13055*/
/*13041*/         OPC_CheckPredicate, 44, // Predicate_atomic_load_or_16
/*13043*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*13045*/         OPC_EmitMergeInputChains1_0,
/*13046*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_OR_I16_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_or:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_or_16>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_OR_I16_P8:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)
/*13055*/       /*Scope*/ 14, /*->13070*/
/*13056*/         OPC_CheckPredicate, 45, // Predicate_atomic_load_or_32
/*13058*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*13060*/         OPC_EmitMergeInputChains1_0,
/*13061*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_OR_I32_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_or:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_or_32>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_OR_I32_P8:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)
/*13070*/       0, /*End of Scope*/
              /*SwitchType*/ 14,  MVT::i64,// ->13087
/*13073*/       OPC_CheckPredicate, 46, // Predicate_atomic_load_or_64
/*13075*/       OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*13077*/       OPC_EmitMergeInputChains1_0,
/*13078*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_OR_I64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
                // Src: (atomic_load_or:i64 CPU64Regs:i64:$ptr, CPU64Regs:i64:$incr)<<P:Predicate_atomic_load_or_64>> - Complexity = 4
                // Dst: (ATOMIC_LOAD_OR_I64_P8:i64 CPU64Regs:i64:$ptr, CPU64Regs:i64:$incr)
              0, // EndSwitchType
/*13088*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 19|128,1/*147*/,  TARGET_VAL(ISD::ATOMIC_LOAD_XOR),// ->13240
/*13093*/   OPC_RecordMemRef,
/*13094*/   OPC_RecordNode,   // #0 = 'atomic_load_xor' chained node
/*13095*/   OPC_RecordChild1, // #1 = $ptr
/*13096*/   OPC_Scope, 70, /*->13168*/ // 2 children in Scope
/*13098*/     OPC_CheckChild1Type, MVT::i32,
/*13100*/     OPC_RecordChild2, // #2 = $incr
/*13101*/     OPC_SwitchType /*2 cases */, 47,  MVT::i32,// ->13151
/*13104*/       OPC_Scope, 14, /*->13120*/ // 3 children in Scope
/*13106*/         OPC_CheckPredicate, 47, // Predicate_atomic_load_xor_8
/*13108*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*13110*/         OPC_EmitMergeInputChains1_0,
/*13111*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_XOR_I8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_xor:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_xor_8>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_XOR_I8:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)
/*13120*/       /*Scope*/ 14, /*->13135*/
/*13121*/         OPC_CheckPredicate, 48, // Predicate_atomic_load_xor_16
/*13123*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*13125*/         OPC_EmitMergeInputChains1_0,
/*13126*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_XOR_I16), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_xor:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_xor_16>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_XOR_I16:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)
/*13135*/       /*Scope*/ 14, /*->13150*/
/*13136*/         OPC_CheckPredicate, 49, // Predicate_atomic_load_xor_32
/*13138*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*13140*/         OPC_EmitMergeInputChains1_0,
/*13141*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_XOR_I32), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_xor:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_xor_32>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_XOR_I32:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)
/*13150*/       0, /*End of Scope*/
              /*SwitchType*/ 14,  MVT::i64,// ->13167
/*13153*/       OPC_CheckPredicate, 50, // Predicate_atomic_load_xor_64
/*13155*/       OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*13157*/       OPC_EmitMergeInputChains1_0,
/*13158*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_XOR_I64), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
                // Src: (atomic_load_xor:i64 CPURegs:i32:$ptr, CPU64Regs:i64:$incr)<<P:Predicate_atomic_load_xor_64>> - Complexity = 4
                // Dst: (ATOMIC_LOAD_XOR_I64:i64 CPURegs:i32:$ptr, CPU64Regs:i64:$incr)
              0, // EndSwitchType
/*13168*/   /*Scope*/ 70, /*->13239*/
/*13169*/     OPC_CheckChild1Type, MVT::i64,
/*13171*/     OPC_RecordChild2, // #2 = $incr
/*13172*/     OPC_SwitchType /*2 cases */, 47,  MVT::i32,// ->13222
/*13175*/       OPC_Scope, 14, /*->13191*/ // 3 children in Scope
/*13177*/         OPC_CheckPredicate, 47, // Predicate_atomic_load_xor_8
/*13179*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*13181*/         OPC_EmitMergeInputChains1_0,
/*13182*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_XOR_I8_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_xor:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_xor_8>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_XOR_I8_P8:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)
/*13191*/       /*Scope*/ 14, /*->13206*/
/*13192*/         OPC_CheckPredicate, 48, // Predicate_atomic_load_xor_16
/*13194*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*13196*/         OPC_EmitMergeInputChains1_0,
/*13197*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_XOR_I16_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_xor:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_xor_16>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_XOR_I16_P8:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)
/*13206*/       /*Scope*/ 14, /*->13221*/
/*13207*/         OPC_CheckPredicate, 49, // Predicate_atomic_load_xor_32
/*13209*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*13211*/         OPC_EmitMergeInputChains1_0,
/*13212*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_XOR_I32_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_xor:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_xor_32>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_XOR_I32_P8:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)
/*13221*/       0, /*End of Scope*/
              /*SwitchType*/ 14,  MVT::i64,// ->13238
/*13224*/       OPC_CheckPredicate, 50, // Predicate_atomic_load_xor_64
/*13226*/       OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*13228*/       OPC_EmitMergeInputChains1_0,
/*13229*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_XOR_I64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
                // Src: (atomic_load_xor:i64 CPU64Regs:i64:$ptr, CPU64Regs:i64:$incr)<<P:Predicate_atomic_load_xor_64>> - Complexity = 4
                // Dst: (ATOMIC_LOAD_XOR_I64_P8:i64 CPU64Regs:i64:$ptr, CPU64Regs:i64:$incr)
              0, // EndSwitchType
/*13239*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 19|128,1/*147*/,  TARGET_VAL(ISD::ATOMIC_LOAD_NAND),// ->13391
/*13244*/   OPC_RecordMemRef,
/*13245*/   OPC_RecordNode,   // #0 = 'atomic_load_nand' chained node
/*13246*/   OPC_RecordChild1, // #1 = $ptr
/*13247*/   OPC_Scope, 70, /*->13319*/ // 2 children in Scope
/*13249*/     OPC_CheckChild1Type, MVT::i32,
/*13251*/     OPC_RecordChild2, // #2 = $incr
/*13252*/     OPC_SwitchType /*2 cases */, 47,  MVT::i32,// ->13302
/*13255*/       OPC_Scope, 14, /*->13271*/ // 3 children in Scope
/*13257*/         OPC_CheckPredicate, 51, // Predicate_atomic_load_nand_8
/*13259*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*13261*/         OPC_EmitMergeInputChains1_0,
/*13262*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_NAND_I8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_nand:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_nand_8>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_NAND_I8:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)
/*13271*/       /*Scope*/ 14, /*->13286*/
/*13272*/         OPC_CheckPredicate, 52, // Predicate_atomic_load_nand_16
/*13274*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*13276*/         OPC_EmitMergeInputChains1_0,
/*13277*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_NAND_I16), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_nand:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_nand_16>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_NAND_I16:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)
/*13286*/       /*Scope*/ 14, /*->13301*/
/*13287*/         OPC_CheckPredicate, 53, // Predicate_atomic_load_nand_32
/*13289*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*13291*/         OPC_EmitMergeInputChains1_0,
/*13292*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_NAND_I32), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_nand:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_nand_32>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_NAND_I32:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)
/*13301*/       0, /*End of Scope*/
              /*SwitchType*/ 14,  MVT::i64,// ->13318
/*13304*/       OPC_CheckPredicate, 54, // Predicate_atomic_load_nand_64
/*13306*/       OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*13308*/       OPC_EmitMergeInputChains1_0,
/*13309*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_NAND_I64), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
                // Src: (atomic_load_nand:i64 CPURegs:i32:$ptr, CPU64Regs:i64:$incr)<<P:Predicate_atomic_load_nand_64>> - Complexity = 4
                // Dst: (ATOMIC_LOAD_NAND_I64:i64 CPURegs:i32:$ptr, CPU64Regs:i64:$incr)
              0, // EndSwitchType
/*13319*/   /*Scope*/ 70, /*->13390*/
/*13320*/     OPC_CheckChild1Type, MVT::i64,
/*13322*/     OPC_RecordChild2, // #2 = $incr
/*13323*/     OPC_SwitchType /*2 cases */, 47,  MVT::i32,// ->13373
/*13326*/       OPC_Scope, 14, /*->13342*/ // 3 children in Scope
/*13328*/         OPC_CheckPredicate, 51, // Predicate_atomic_load_nand_8
/*13330*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*13332*/         OPC_EmitMergeInputChains1_0,
/*13333*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_NAND_I8_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_nand:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_nand_8>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_NAND_I8_P8:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)
/*13342*/       /*Scope*/ 14, /*->13357*/
/*13343*/         OPC_CheckPredicate, 52, // Predicate_atomic_load_nand_16
/*13345*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*13347*/         OPC_EmitMergeInputChains1_0,
/*13348*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_NAND_I16_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_nand:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_nand_16>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_NAND_I16_P8:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)
/*13357*/       /*Scope*/ 14, /*->13372*/
/*13358*/         OPC_CheckPredicate, 53, // Predicate_atomic_load_nand_32
/*13360*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*13362*/         OPC_EmitMergeInputChains1_0,
/*13363*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_NAND_I32_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_nand:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_nand_32>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_NAND_I32_P8:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)
/*13372*/       0, /*End of Scope*/
              /*SwitchType*/ 14,  MVT::i64,// ->13389
/*13375*/       OPC_CheckPredicate, 54, // Predicate_atomic_load_nand_64
/*13377*/       OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*13379*/       OPC_EmitMergeInputChains1_0,
/*13380*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_NAND_I64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
                // Src: (atomic_load_nand:i64 CPU64Regs:i64:$ptr, CPU64Regs:i64:$incr)<<P:Predicate_atomic_load_nand_64>> - Complexity = 4
                // Dst: (ATOMIC_LOAD_NAND_I64_P8:i64 CPU64Regs:i64:$ptr, CPU64Regs:i64:$incr)
              0, // EndSwitchType
/*13390*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 19|128,1/*147*/,  TARGET_VAL(ISD::ATOMIC_SWAP),// ->13542
/*13395*/   OPC_RecordMemRef,
/*13396*/   OPC_RecordNode,   // #0 = 'atomic_swap' chained node
/*13397*/   OPC_RecordChild1, // #1 = $ptr
/*13398*/   OPC_Scope, 70, /*->13470*/ // 2 children in Scope
/*13400*/     OPC_CheckChild1Type, MVT::i32,
/*13402*/     OPC_RecordChild2, // #2 = $incr
/*13403*/     OPC_SwitchType /*2 cases */, 47,  MVT::i32,// ->13453
/*13406*/       OPC_Scope, 14, /*->13422*/ // 3 children in Scope
/*13408*/         OPC_CheckPredicate, 55, // Predicate_atomic_swap_8
/*13410*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*13412*/         OPC_EmitMergeInputChains1_0,
/*13413*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_SWAP_I8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_swap:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_swap_8>> - Complexity = 4
                  // Dst: (ATOMIC_SWAP_I8:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)
/*13422*/       /*Scope*/ 14, /*->13437*/
/*13423*/         OPC_CheckPredicate, 56, // Predicate_atomic_swap_16
/*13425*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*13427*/         OPC_EmitMergeInputChains1_0,
/*13428*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_SWAP_I16), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_swap:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_swap_16>> - Complexity = 4
                  // Dst: (ATOMIC_SWAP_I16:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)
/*13437*/       /*Scope*/ 14, /*->13452*/
/*13438*/         OPC_CheckPredicate, 57, // Predicate_atomic_swap_32
/*13440*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*13442*/         OPC_EmitMergeInputChains1_0,
/*13443*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_SWAP_I32), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_swap:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_swap_32>> - Complexity = 4
                  // Dst: (ATOMIC_SWAP_I32:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)
/*13452*/       0, /*End of Scope*/
              /*SwitchType*/ 14,  MVT::i64,// ->13469
/*13455*/       OPC_CheckPredicate, 58, // Predicate_atomic_swap_64
/*13457*/       OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*13459*/       OPC_EmitMergeInputChains1_0,
/*13460*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_SWAP_I64), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
                // Src: (atomic_swap:i64 CPURegs:i32:$ptr, CPU64Regs:i64:$incr)<<P:Predicate_atomic_swap_64>> - Complexity = 4
                // Dst: (ATOMIC_SWAP_I64:i64 CPURegs:i32:$ptr, CPU64Regs:i64:$incr)
              0, // EndSwitchType
/*13470*/   /*Scope*/ 70, /*->13541*/
/*13471*/     OPC_CheckChild1Type, MVT::i64,
/*13473*/     OPC_RecordChild2, // #2 = $incr
/*13474*/     OPC_SwitchType /*2 cases */, 47,  MVT::i32,// ->13524
/*13477*/       OPC_Scope, 14, /*->13493*/ // 3 children in Scope
/*13479*/         OPC_CheckPredicate, 55, // Predicate_atomic_swap_8
/*13481*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*13483*/         OPC_EmitMergeInputChains1_0,
/*13484*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_SWAP_I8_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_swap:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_swap_8>> - Complexity = 4
                  // Dst: (ATOMIC_SWAP_I8_P8:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)
/*13493*/       /*Scope*/ 14, /*->13508*/
/*13494*/         OPC_CheckPredicate, 56, // Predicate_atomic_swap_16
/*13496*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*13498*/         OPC_EmitMergeInputChains1_0,
/*13499*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_SWAP_I16_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_swap:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_swap_16>> - Complexity = 4
                  // Dst: (ATOMIC_SWAP_I16_P8:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)
/*13508*/       /*Scope*/ 14, /*->13523*/
/*13509*/         OPC_CheckPredicate, 57, // Predicate_atomic_swap_32
/*13511*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*13513*/         OPC_EmitMergeInputChains1_0,
/*13514*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_SWAP_I32_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_swap:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_swap_32>> - Complexity = 4
                  // Dst: (ATOMIC_SWAP_I32_P8:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)
/*13523*/       0, /*End of Scope*/
              /*SwitchType*/ 14,  MVT::i64,// ->13540
/*13526*/       OPC_CheckPredicate, 58, // Predicate_atomic_swap_64
/*13528*/       OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*13530*/       OPC_EmitMergeInputChains1_0,
/*13531*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_SWAP_I64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
                // Src: (atomic_swap:i64 CPU64Regs:i64:$ptr, CPU64Regs:i64:$incr)<<P:Predicate_atomic_swap_64>> - Complexity = 4
                // Dst: (ATOMIC_SWAP_I64_P8:i64 CPU64Regs:i64:$ptr, CPU64Regs:i64:$incr)
              0, // EndSwitchType
/*13541*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 29|128,1/*157*/,  TARGET_VAL(ISD::ATOMIC_CMP_SWAP),// ->13703
/*13546*/   OPC_RecordMemRef,
/*13547*/   OPC_RecordNode,   // #0 = 'atomic_cmp_swap' chained node
/*13548*/   OPC_RecordChild1, // #1 = $ptr
/*13549*/   OPC_Scope, 75, /*->13626*/ // 2 children in Scope
/*13551*/     OPC_CheckChild1Type, MVT::i32,
/*13553*/     OPC_RecordChild2, // #2 = $cmp
/*13554*/     OPC_RecordChild3, // #3 = $swap
/*13555*/     OPC_SwitchType /*2 cases */, 50,  MVT::i32,// ->13608
/*13558*/       OPC_Scope, 15, /*->13575*/ // 3 children in Scope
/*13560*/         OPC_CheckPredicate, 59, // Predicate_atomic_cmp_swap_8
/*13562*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*13564*/         OPC_EmitMergeInputChains1_0,
/*13565*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_CMP_SWAP_I8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 2, 3, 
                  // Src: (atomic_cmp_swap:i32 CPURegs:i32:$ptr, CPURegs:i32:$cmp, CPURegs:i32:$swap)<<P:Predicate_atomic_cmp_swap_8>> - Complexity = 4
                  // Dst: (ATOMIC_CMP_SWAP_I8:i32 CPURegs:i32:$ptr, CPURegs:i32:$cmp, CPURegs:i32:$swap)
/*13575*/       /*Scope*/ 15, /*->13591*/
/*13576*/         OPC_CheckPredicate, 60, // Predicate_atomic_cmp_swap_16
/*13578*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*13580*/         OPC_EmitMergeInputChains1_0,
/*13581*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_CMP_SWAP_I16), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 2, 3, 
                  // Src: (atomic_cmp_swap:i32 CPURegs:i32:$ptr, CPURegs:i32:$cmp, CPURegs:i32:$swap)<<P:Predicate_atomic_cmp_swap_16>> - Complexity = 4
                  // Dst: (ATOMIC_CMP_SWAP_I16:i32 CPURegs:i32:$ptr, CPURegs:i32:$cmp, CPURegs:i32:$swap)
/*13591*/       /*Scope*/ 15, /*->13607*/
/*13592*/         OPC_CheckPredicate, 61, // Predicate_atomic_cmp_swap_32
/*13594*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*13596*/         OPC_EmitMergeInputChains1_0,
/*13597*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_CMP_SWAP_I32), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 2, 3, 
                  // Src: (atomic_cmp_swap:i32 CPURegs:i32:$ptr, CPURegs:i32:$cmp, CPURegs:i32:$swap)<<P:Predicate_atomic_cmp_swap_32>> - Complexity = 4
                  // Dst: (ATOMIC_CMP_SWAP_I32:i32 CPURegs:i32:$ptr, CPURegs:i32:$cmp, CPURegs:i32:$swap)
/*13607*/       0, /*End of Scope*/
              /*SwitchType*/ 15,  MVT::i64,// ->13625
/*13610*/       OPC_CheckPredicate, 62, // Predicate_atomic_cmp_swap_64
/*13612*/       OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*13614*/       OPC_EmitMergeInputChains1_0,
/*13615*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_CMP_SWAP_I64), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 2, 3, 
                // Src: (atomic_cmp_swap:i64 CPURegs:i32:$ptr, CPU64Regs:i64:$cmp, CPU64Regs:i64:$swap)<<P:Predicate_atomic_cmp_swap_64>> - Complexity = 4
                // Dst: (ATOMIC_CMP_SWAP_I64:i64 CPURegs:i32:$ptr, CPU64Regs:i64:$cmp, CPU64Regs:i64:$swap)
              0, // EndSwitchType
/*13626*/   /*Scope*/ 75, /*->13702*/
/*13627*/     OPC_CheckChild1Type, MVT::i64,
/*13629*/     OPC_RecordChild2, // #2 = $cmp
/*13630*/     OPC_RecordChild3, // #3 = $swap
/*13631*/     OPC_SwitchType /*2 cases */, 50,  MVT::i32,// ->13684
/*13634*/       OPC_Scope, 15, /*->13651*/ // 3 children in Scope
/*13636*/         OPC_CheckPredicate, 59, // Predicate_atomic_cmp_swap_8
/*13638*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*13640*/         OPC_EmitMergeInputChains1_0,
/*13641*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_CMP_SWAP_I8_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 2, 3, 
                  // Src: (atomic_cmp_swap:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$cmp, CPURegs:i32:$swap)<<P:Predicate_atomic_cmp_swap_8>> - Complexity = 4
                  // Dst: (ATOMIC_CMP_SWAP_I8_P8:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$cmp, CPURegs:i32:$swap)
/*13651*/       /*Scope*/ 15, /*->13667*/
/*13652*/         OPC_CheckPredicate, 60, // Predicate_atomic_cmp_swap_16
/*13654*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*13656*/         OPC_EmitMergeInputChains1_0,
/*13657*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_CMP_SWAP_I16_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 2, 3, 
                  // Src: (atomic_cmp_swap:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$cmp, CPURegs:i32:$swap)<<P:Predicate_atomic_cmp_swap_16>> - Complexity = 4
                  // Dst: (ATOMIC_CMP_SWAP_I16_P8:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$cmp, CPURegs:i32:$swap)
/*13667*/       /*Scope*/ 15, /*->13683*/
/*13668*/         OPC_CheckPredicate, 61, // Predicate_atomic_cmp_swap_32
/*13670*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*13672*/         OPC_EmitMergeInputChains1_0,
/*13673*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_CMP_SWAP_I32_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 2, 3, 
                  // Src: (atomic_cmp_swap:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$cmp, CPURegs:i32:$swap)<<P:Predicate_atomic_cmp_swap_32>> - Complexity = 4
                  // Dst: (ATOMIC_CMP_SWAP_I32_P8:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$cmp, CPURegs:i32:$swap)
/*13683*/       0, /*End of Scope*/
              /*SwitchType*/ 15,  MVT::i64,// ->13701
/*13686*/       OPC_CheckPredicate, 62, // Predicate_atomic_cmp_swap_64
/*13688*/       OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*13690*/       OPC_EmitMergeInputChains1_0,
/*13691*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_CMP_SWAP_I64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 2, 3, 
                // Src: (atomic_cmp_swap:i64 CPU64Regs:i64:$ptr, CPU64Regs:i64:$cmp, CPU64Regs:i64:$swap)<<P:Predicate_atomic_cmp_swap_64>> - Complexity = 4
                // Dst: (ATOMIC_CMP_SWAP_I64_P8:i64 CPU64Regs:i64:$ptr, CPU64Regs:i64:$cmp, CPU64Regs:i64:$swap)
              0, // EndSwitchType
/*13702*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 79,  TARGET_VAL(ISD::SIGN_EXTEND_INREG),// ->13785
/*13706*/   OPC_RecordChild0, // #0 = $rt
/*13707*/   OPC_MoveChild, 1,
/*13709*/   OPC_Scope, 29, /*->13740*/ // 3 children in Scope
/*13711*/     OPC_CheckValueType, MVT::i8,
/*13713*/     OPC_MoveParent,
/*13714*/     OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->13727
/*13717*/       OPC_CheckPatternPredicate, 17, // (Subtarget.hasSEInReg()) && (Subtarget.hasStandardEncoding())
/*13719*/       OPC_MorphNodeTo, TARGET_VAL(Mips::SEB), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (sext_inreg:i32 CPURegs:i32:$rt, i8:Other) - Complexity = 3
                // Dst: (SEB:i32 CPURegs:i32:$rt)
              /*SwitchType*/ 10,  MVT::i64,// ->13739
/*13729*/       OPC_CheckPatternPredicate, 17, // (Subtarget.hasSEInReg()) && (Subtarget.hasStandardEncoding())
/*13731*/       OPC_MorphNodeTo, TARGET_VAL(Mips::SEB64), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (sext_inreg:i64 CPU64Regs:i64:$rt, i8:Other) - Complexity = 3
                // Dst: (SEB64:i64 CPU64Regs:i64:$rt)
              0, // EndSwitchType
/*13740*/   /*Scope*/ 29, /*->13770*/
/*13741*/     OPC_CheckValueType, MVT::i16,
/*13743*/     OPC_MoveParent,
/*13744*/     OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->13757
/*13747*/       OPC_CheckPatternPredicate, 17, // (Subtarget.hasSEInReg()) && (Subtarget.hasStandardEncoding())
/*13749*/       OPC_MorphNodeTo, TARGET_VAL(Mips::SEH), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (sext_inreg:i32 CPURegs:i32:$rt, i16:Other) - Complexity = 3
                // Dst: (SEH:i32 CPURegs:i32:$rt)
              /*SwitchType*/ 10,  MVT::i64,// ->13769
/*13759*/       OPC_CheckPatternPredicate, 17, // (Subtarget.hasSEInReg()) && (Subtarget.hasStandardEncoding())
/*13761*/       OPC_MorphNodeTo, TARGET_VAL(Mips::SEH64), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (sext_inreg:i64 CPU64Regs:i64:$rt, i16:Other) - Complexity = 3
                // Dst: (SEH64:i64 CPU64Regs:i64:$rt)
              0, // EndSwitchType
/*13770*/   /*Scope*/ 13, /*->13784*/
/*13771*/     OPC_CheckValueType, MVT::i32,
/*13773*/     OPC_MoveParent,
/*13774*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13776*/     OPC_MorphNodeTo, TARGET_VAL(Mips::SLL64_64), 0,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
              // Src: (sext_inreg:i64 CPU64Regs:i64:$src, i32:Other) - Complexity = 3
              // Dst: (SLL64_64:i64 CPU64Regs:i64:$src)
/*13784*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 31,  TARGET_VAL(ISD::MUL),// ->13819
/*13788*/   OPC_RecordChild0, // #0 = $rs
/*13789*/   OPC_RecordChild1, // #1 = $rt
/*13790*/   OPC_CheckType, MVT::i32,
/*13792*/   OPC_Scope, 11, /*->13805*/ // 2 children in Scope
/*13794*/     OPC_CheckPatternPredicate, 18, // (Subtarget.hasMips32()) && (Subtarget.hasStandardEncoding())
/*13796*/     OPC_MorphNodeTo, TARGET_VAL(Mips::MUL), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (mul:i32 CPURegs:i32:$rs, CPURegs:i32:$rt) - Complexity = 3
              // Dst: (MUL:i32 CPURegs:i32:$rs, CPURegs:i32:$rt)
/*13805*/   /*Scope*/ 12, /*->13818*/
/*13806*/     OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*13808*/     OPC_MorphNodeTo, TARGET_VAL(Mips::MultRxRyRz16), 0,
                  2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (mul:i32 CPU16Regs:i32:$l, CPU16Regs:i32:$r) - Complexity = 3
              // Dst: (MultRxRyRz16:i32:i32 CPU16Regs:i32:$l, CPU16Regs:i32:$r)
/*13818*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 30,  TARGET_VAL(ISD::SUBC),// ->13852
/*13822*/   OPC_RecordChild0, // #0 = $lhs
/*13823*/   OPC_RecordChild1, // #1 = $rhs
/*13824*/   OPC_CheckType, MVT::i32,
/*13826*/   OPC_Scope, 11, /*->13839*/ // 2 children in Scope
/*13828*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13830*/     OPC_MorphNodeTo, TARGET_VAL(Mips::SUBu), 0|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (subc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs) - Complexity = 3
              // Dst: (SUBu:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs)
/*13839*/   /*Scope*/ 11, /*->13851*/
/*13840*/     OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*13842*/     OPC_MorphNodeTo, TARGET_VAL(Mips::SubuRxRyRz16), 0|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (subc:i32 CPU16Regs:i32:$lhs, CPU16Regs:i32:$rhs) - Complexity = 3
              // Dst: (SubuRxRyRz16:i32 CPU16Regs:i32:$lhs, CPU16Regs:i32:$rhs)
/*13851*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 7|128,1/*135*/,  TARGET_VAL(ISD::BITCAST),// ->13991
/*13856*/   OPC_RecordChild0, // #0 = $fs
/*13857*/   OPC_Scope, 14, /*->13873*/ // 6 children in Scope
/*13859*/     OPC_CheckChild0Type, MVT::f32,
/*13861*/     OPC_CheckType, MVT::i32,
/*13863*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13865*/     OPC_MorphNodeTo, TARGET_VAL(Mips::MFC1), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (bitconvert:i32 FGR32:f32:$fs) - Complexity = 3
              // Dst: (MFC1:i32 FGR32:f32:$fs)
/*13873*/   /*Scope*/ 14, /*->13888*/
/*13874*/     OPC_CheckChild0Type, MVT::f64,
/*13876*/     OPC_CheckType, MVT::i64,
/*13878*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13880*/     OPC_MorphNodeTo, TARGET_VAL(Mips::DMFC1), 0,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
              // Src: (bitconvert:i64 FGR64:f64:$fs) - Complexity = 3
              // Dst: (DMFC1:i64 FGR64:f64:$fs)
/*13888*/   /*Scope*/ 18, /*->13907*/
/*13889*/     OPC_CheckChild0Type, MVT::v2i16,
/*13891*/     OPC_CheckType, MVT::i32,
/*13893*/     OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*13895*/     OPC_EmitInteger, MVT::i32, Mips::CPURegsRegClassID,
/*13898*/     OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (bitconvert:i32 DSPRegs:v2i16:$src) - Complexity = 3
              // Dst: (COPY_TO_REGCLASS:i32 DSPRegs:v2i16:$src, CPURegs:i32)
/*13907*/   /*Scope*/ 18, /*->13926*/
/*13908*/     OPC_CheckChild0Type, MVT::v4i8,
/*13910*/     OPC_CheckType, MVT::i32,
/*13912*/     OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*13914*/     OPC_EmitInteger, MVT::i32, Mips::CPURegsRegClassID,
/*13917*/     OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (bitconvert:i32 DSPRegs:v4i8:$src) - Complexity = 3
              // Dst: (COPY_TO_REGCLASS:i32 DSPRegs:v4i8:$src, CPURegs:i32)
/*13926*/   /*Scope*/ 48, /*->13975*/
/*13927*/     OPC_CheckChild0Type, MVT::i32,
/*13929*/     OPC_SwitchType /*3 cases */, 10,  MVT::f32,// ->13942
/*13932*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13934*/       OPC_MorphNodeTo, TARGET_VAL(Mips::MTC1), 0,
                    1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
                // Src: (bitconvert:f32 CPURegs:i32:$rt) - Complexity = 3
                // Dst: (MTC1:f32 CPURegs:i32:$rt)
              /*SwitchType*/ 14,  MVT::v2i16,// ->13958
/*13944*/       OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*13946*/       OPC_EmitInteger, MVT::i32, Mips::DSPRegsRegClassID,
/*13949*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 1, 
                // Src: (bitconvert:v2i16 CPURegs:i32:$src) - Complexity = 3
                // Dst: (COPY_TO_REGCLASS:v2i16 CPURegs:i32:$src, DSPRegs:v4i8)
              /*SwitchType*/ 14,  MVT::v4i8,// ->13974
/*13960*/       OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*13962*/       OPC_EmitInteger, MVT::i32, Mips::DSPRegsRegClassID,
/*13965*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 1, 
                // Src: (bitconvert:v4i8 CPURegs:i32:$src) - Complexity = 3
                // Dst: (COPY_TO_REGCLASS:v4i8 CPURegs:i32:$src, DSPRegs:v4i8)
              0, // EndSwitchType
/*13975*/   /*Scope*/ 14, /*->13990*/
/*13976*/     OPC_CheckChild0Type, MVT::i64,
/*13978*/     OPC_CheckType, MVT::f64,
/*13980*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13982*/     OPC_MorphNodeTo, TARGET_VAL(Mips::DMTC1), 0,
                  1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
              // Src: (bitconvert:f64 CPU64Regs:i64:$rt) - Complexity = 3
              // Dst: (DMTC1:f64 CPU64Regs:i64:$rt)
/*13990*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 15,  TARGET_VAL(ISD::ANY_EXTEND),// ->14009
/*13994*/   OPC_RecordChild0, // #0 = $src
/*13995*/   OPC_CheckChild0Type, MVT::i32,
/*13997*/   OPC_CheckType, MVT::i64,
/*13999*/   OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*14001*/   OPC_MorphNodeTo, TARGET_VAL(Mips::SLL64_32), 0,
                1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
            // Src: (anyext:i64 CPURegs:i32:$src) - Complexity = 3
            // Dst: (SLL64_32:i64 CPURegs:i32:$src)
          /*SwitchOpcode*/ 15,  TARGET_VAL(ISD::SIGN_EXTEND),// ->14027
/*14012*/   OPC_RecordChild0, // #0 = $src
/*14013*/   OPC_CheckChild0Type, MVT::i32,
/*14015*/   OPC_CheckType, MVT::i64,
/*14017*/   OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*14019*/   OPC_MorphNodeTo, TARGET_VAL(Mips::SLL64_32), 0,
                1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
            // Src: (sext:i64 CPURegs:i32:$src) - Complexity = 3
            // Dst: (SLL64_32:i64 CPURegs:i32:$src)
          /*SwitchOpcode*/ 72,  TARGET_VAL(MipsISD::CMovFP_T),// ->14102
/*14030*/   OPC_CaptureGlueInput,
/*14031*/   OPC_RecordChild0, // #0 = $rs
/*14032*/   OPC_RecordChild1, // #1 = $F
/*14033*/   OPC_SwitchType /*4 cases */, 11,  MVT::i32,// ->14047
/*14036*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*14038*/     OPC_MorphNodeTo, TARGET_VAL(Mips::MOVT_I), 0|OPFL_GlueInput,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (MipsCMovFP_T:i32 CPURegs:i32:$rs, CPURegs:i32:$F) - Complexity = 3
              // Dst: (MOVT_I:i32 CPURegs:i32:$rs, CPURegs:i32:$F)
            /*SwitchType*/ 11,  MVT::i64,// ->14060
/*14049*/     OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*14051*/     OPC_MorphNodeTo, TARGET_VAL(Mips::MOVT_I64), 0|OPFL_GlueInput,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (MipsCMovFP_T:i64 CPU64Regs:i64:$rs, CPU64Regs:i64:$F) - Complexity = 3
              // Dst: (MOVT_I64:i64 CPU64Regs:i64:$rs, CPU64Regs:i64:$F)
            /*SwitchType*/ 11,  MVT::f32,// ->14073
/*14062*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*14064*/     OPC_MorphNodeTo, TARGET_VAL(Mips::MOVT_S), 0|OPFL_GlueInput,
                  1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
              // Src: (MipsCMovFP_T:f32 FGR32:f32:$fs, FGR32:f32:$F) - Complexity = 3
              // Dst: (MOVT_S:f32 FGR32:f32:$fs, FGR32:f32:$F)
            /*SwitchType*/ 26,  MVT::f64,// ->14101
/*14075*/     OPC_Scope, 11, /*->14088*/ // 2 children in Scope
/*14077*/       OPC_CheckPatternPredicate, 13, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*14079*/       OPC_MorphNodeTo, TARGET_VAL(Mips::MOVT_D32), 0|OPFL_GlueInput,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
                // Src: (MipsCMovFP_T:f64 AFGR64:f64:$fs, AFGR64:f64:$F) - Complexity = 3
                // Dst: (MOVT_D32:f64 AFGR64:f64:$fs, AFGR64:f64:$F)
/*14088*/     /*Scope*/ 11, /*->14100*/
/*14089*/       OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*14091*/       OPC_MorphNodeTo, TARGET_VAL(Mips::MOVT_D64), 0|OPFL_GlueInput,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
                // Src: (MipsCMovFP_T:f64 FGR64:f64:$fs, FGR64:f64:$F) - Complexity = 3
                // Dst: (MOVT_D64:f64 FGR64:f64:$fs, FGR64:f64:$F)
/*14100*/     0, /*End of Scope*/
            0, // EndSwitchType
          /*SwitchOpcode*/ 72,  TARGET_VAL(MipsISD::CMovFP_F),// ->14177
/*14105*/   OPC_CaptureGlueInput,
/*14106*/   OPC_RecordChild0, // #0 = $rs
/*14107*/   OPC_RecordChild1, // #1 = $F
/*14108*/   OPC_SwitchType /*4 cases */, 11,  MVT::i32,// ->14122
/*14111*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*14113*/     OPC_MorphNodeTo, TARGET_VAL(Mips::MOVF_I), 0|OPFL_GlueInput,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (MipsCMovFP_F:i32 CPURegs:i32:$rs, CPURegs:i32:$F) - Complexity = 3
              // Dst: (MOVF_I:i32 CPURegs:i32:$rs, CPURegs:i32:$F)
            /*SwitchType*/ 11,  MVT::i64,// ->14135
/*14124*/     OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*14126*/     OPC_MorphNodeTo, TARGET_VAL(Mips::MOVF_I64), 0|OPFL_GlueInput,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (MipsCMovFP_F:i64 CPU64Regs:i64:$rs, CPU64Regs:i64:$F) - Complexity = 3
              // Dst: (MOVF_I64:i64 CPU64Regs:i64:$rs, CPU64Regs:i64:$F)
            /*SwitchType*/ 11,  MVT::f32,// ->14148
/*14137*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*14139*/     OPC_MorphNodeTo, TARGET_VAL(Mips::MOVF_S), 0|OPFL_GlueInput,
                  1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
              // Src: (MipsCMovFP_F:f32 FGR32:f32:$fs, FGR32:f32:$F) - Complexity = 3
              // Dst: (MOVF_S:f32 FGR32:f32:$fs, FGR32:f32:$F)
            /*SwitchType*/ 26,  MVT::f64,// ->14176
/*14150*/     OPC_Scope, 11, /*->14163*/ // 2 children in Scope
/*14152*/       OPC_CheckPatternPredicate, 13, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*14154*/       OPC_MorphNodeTo, TARGET_VAL(Mips::MOVF_D32), 0|OPFL_GlueInput,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
                // Src: (MipsCMovFP_F:f64 AFGR64:f64:$fs, AFGR64:f64:$F) - Complexity = 3
                // Dst: (MOVF_D32:f64 AFGR64:f64:$fs, AFGR64:f64:$F)
/*14163*/     /*Scope*/ 11, /*->14175*/
/*14164*/       OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*14166*/       OPC_MorphNodeTo, TARGET_VAL(Mips::MOVF_D64), 0|OPFL_GlueInput,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
                // Src: (MipsCMovFP_F:f64 FGR64:f64:$fs, FGR64:f64:$F) - Complexity = 3
                // Dst: (MOVF_D64:f64 FGR64:f64:$fs, FGR64:f64:$F)
/*14175*/     0, /*End of Scope*/
            0, // EndSwitchType
          /*SwitchOpcode*/ 47,  TARGET_VAL(ISD::BSWAP),// ->14227
/*14180*/   OPC_RecordChild0, // #0 = $rt
/*14181*/   OPC_SwitchType /*2 cases */, 22,  MVT::i32,// ->14206
/*14184*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*14186*/     OPC_EmitNode, TARGET_VAL(Mips::WSBH), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0,  // Results = #1
/*14194*/     OPC_EmitInteger, MVT::i32, 16, 
/*14197*/     OPC_MorphNodeTo, TARGET_VAL(Mips::ROTR), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (bswap:i32 CPURegs:i32:$rt) - Complexity = 3
              // Dst: (ROTR:i32 (WSBH:i32 CPURegs:i32:$rt), 16:i32)
            /*SwitchType*/ 18,  MVT::i64,// ->14226
/*14208*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*14210*/     OPC_EmitNode, TARGET_VAL(Mips::DSBH), 0,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0,  // Results = #1
/*14218*/     OPC_MorphNodeTo, TARGET_VAL(Mips::DSHD), 0,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 1, 
              // Src: (bswap:i64 CPU64Regs:i64:$rt) - Complexity = 3
              // Dst: (DSHD:i64 (DSBH:i64 CPU64Regs:i64:$rt))
            0, // EndSwitchType
          /*SwitchOpcode*/ 115,  TARGET_VAL(ISD::FP_TO_SINT),// ->14345
/*14230*/   OPC_RecordChild0, // #0 = $src
/*14231*/   OPC_Scope, 44, /*->14277*/ // 2 children in Scope
/*14233*/     OPC_CheckChild0Type, MVT::f32,
/*14235*/     OPC_SwitchType /*2 cases */, 18,  MVT::i32,// ->14256
/*14238*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*14240*/       OPC_EmitNode, TARGET_VAL(Mips::TRUNC_W_S), 0,
                    1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0,  // Results = #1
/*14248*/       OPC_MorphNodeTo, TARGET_VAL(Mips::MFC1), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (fp_to_sint:i32 FGR32:f32:$src) - Complexity = 3
                // Dst: (MFC1:i32 (TRUNC_W_S:f32 FGR32:f32:$src))
              /*SwitchType*/ 18,  MVT::i64,// ->14276
/*14258*/       OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*14260*/       OPC_EmitNode, TARGET_VAL(Mips::TRUNC_L_S), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0,  // Results = #1
/*14268*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DMFC1), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 1, 
                // Src: (fp_to_sint:i64 FGR32:f32:$src) - Complexity = 3
                // Dst: (DMFC1:i64 (TRUNC_L_S:f64 FGR32:f32:$src))
              0, // EndSwitchType
/*14277*/   /*Scope*/ 66, /*->14344*/
/*14278*/     OPC_CheckChild0Type, MVT::f64,
/*14280*/     OPC_SwitchType /*2 cases */, 40,  MVT::i32,// ->14323
/*14283*/       OPC_Scope, 18, /*->14303*/ // 2 children in Scope
/*14285*/         OPC_CheckPatternPredicate, 13, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*14287*/         OPC_EmitNode, TARGET_VAL(Mips::TRUNC_W_D32), 0,
                      1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0,  // Results = #1
/*14295*/         OPC_MorphNodeTo, TARGET_VAL(Mips::MFC1), 0,
                      1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
                  // Src: (fp_to_sint:i32 AFGR64:f64:$src) - Complexity = 3
                  // Dst: (MFC1:i32 (TRUNC_W_D32:f32 AFGR64:f64:$src))
/*14303*/       /*Scope*/ 18, /*->14322*/
/*14304*/         OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*14306*/         OPC_EmitNode, TARGET_VAL(Mips::TRUNC_W_D64), 0,
                      1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0,  // Results = #1
/*14314*/         OPC_MorphNodeTo, TARGET_VAL(Mips::MFC1), 0,
                      1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
                  // Src: (fp_to_sint:i32 FGR64:f64:$src) - Complexity = 3
                  // Dst: (MFC1:i32 (TRUNC_W_D64:f32 FGR64:f64:$src))
/*14322*/       0, /*End of Scope*/
              /*SwitchType*/ 18,  MVT::i64,// ->14343
/*14325*/       OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*14327*/       OPC_EmitNode, TARGET_VAL(Mips::TRUNC_L_D64), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0,  // Results = #1
/*14335*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DMFC1), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 1, 
                // Src: (fp_to_sint:i64 FGR64:f64:$src) - Complexity = 3
                // Dst: (DMFC1:i64 (TRUNC_L_D64:f64 FGR64:f64:$src))
              0, // EndSwitchType
/*14344*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 29,  TARGET_VAL(ISD::TRUNCATE),// ->14377
/*14348*/   OPC_RecordChild0, // #0 = $src
/*14349*/   OPC_CheckType, MVT::i32,
/*14351*/   OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*14353*/   OPC_EmitInteger, MVT::i32, Mips::sub_32,
/*14356*/   OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2
/*14365*/   OPC_EmitInteger, MVT::i32, 0, 
/*14368*/   OPC_MorphNodeTo, TARGET_VAL(Mips::SLL), 0,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
            // Src: (trunc:i32 CPU64Regs:i64:$src) - Complexity = 3
            // Dst: (SLL:i32 (EXTRACT_SUBREG:i32 CPU64Regs:i64:$src, sub_32:i32), 0:i32)
          /*SwitchOpcode*/ 27,  TARGET_VAL(ISD::ZERO_EXTEND),// ->14407
/*14380*/   OPC_RecordChild0, // #0 = $src
/*14381*/   OPC_CheckChild0Type, MVT::i32,
/*14383*/   OPC_CheckType, MVT::i64,
/*14385*/   OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*14387*/   OPC_EmitNode, TARGET_VAL(Mips::DSLL64_32), 0,
                1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0,  // Results = #1
/*14395*/   OPC_EmitInteger, MVT::i32, 32, 
/*14398*/   OPC_MorphNodeTo, TARGET_VAL(Mips::DSRL), 0,
                1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
            // Src: (zext:i64 CPURegs:i32:$src) - Complexity = 3
            // Dst: (DSRL:i64 (DSLL64_32:i64 CPURegs:i32:$src), 32:i32)
          /*SwitchOpcode*/ 40|128,2/*296*/,  TARGET_VAL(ISD::FSUB),// ->14707
/*14411*/   OPC_Scope, 118|128,1/*246*/, /*->14660*/ // 2 children in Scope
/*14414*/     OPC_MoveChild, 0,
/*14416*/     OPC_SwitchOpcode /*2 cases */, 57|128,1/*185*/,  TARGET_VAL(ISD::ConstantFP),// ->14606
/*14421*/       OPC_CheckPredicate, 63, // Predicate_fpimm0
/*14423*/       OPC_MoveParent,
/*14424*/       OPC_MoveChild, 1,
/*14426*/       OPC_SwitchOpcode /*2 cases */, 116,  TARGET_VAL(ISD::FADD),// ->14546
/*14430*/         OPC_Scope, 56, /*->14488*/ // 2 children in Scope
/*14432*/           OPC_MoveChild, 0,
/*14434*/           OPC_CheckOpcode, TARGET_VAL(ISD::FMUL),
/*14437*/           OPC_RecordChild0, // #0 = $fs
/*14438*/           OPC_RecordChild1, // #1 = $ft
/*14439*/           OPC_MoveParent,
/*14440*/           OPC_RecordChild1, // #2 = $fr
/*14441*/           OPC_MoveParent,
/*14442*/           OPC_SwitchType /*2 cases */, 12,  MVT::f32,// ->14457
/*14445*/             OPC_CheckPatternPredicate, 19, // (Subtarget.hasMips32r2()) && (TM.Options.NoNaNsFPMath) && (Subtarget.hasStandardEncoding())
/*14447*/             OPC_MorphNodeTo, TARGET_VAL(Mips::NMADD_S), 0,
                          1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 0, 1, 
                      // Src: (fsub:f32 (fpimm:f32)<<P:Predicate_fpimm0>>, (fadd:f32 (fmul:f32 FGR32:f32:$fs, FGR32:f32:$ft), FGR32:f32:$fr)) - Complexity = 13
                      // Dst: (NMADD_S:f32 FGR32:f32:$fr, FGR32:f32:$fs, FGR32:f32:$ft)
                    /*SwitchType*/ 28,  MVT::f64,// ->14487
/*14459*/             OPC_Scope, 12, /*->14473*/ // 2 children in Scope
/*14461*/               OPC_CheckPatternPredicate, 20, // (Subtarget.hasMips32r2()) && (!Subtarget.isFP64bit()) && (TM.Options.NoNaNsFPMath) && (Subtarget.hasStandardEncoding())
/*14463*/               OPC_MorphNodeTo, TARGET_VAL(Mips::NMADD_D32), 0,
                            1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 0, 1, 
                        // Src: (fsub:f64 (fpimm:f64)<<P:Predicate_fpimm0>>, (fadd:f64 (fmul:f64 AFGR64:f64:$fs, AFGR64:f64:$ft), AFGR64:f64:$fr)) - Complexity = 13
                        // Dst: (NMADD_D32:f64 AFGR64:f64:$fr, AFGR64:f64:$fs, AFGR64:f64:$ft)
/*14473*/             /*Scope*/ 12, /*->14486*/
/*14474*/               OPC_CheckPatternPredicate, 21, // (Subtarget.hasMips32r2()) && (Subtarget.isFP64bit()) && (TM.Options.NoNaNsFPMath) && (Subtarget.hasStandardEncoding())
/*14476*/               OPC_MorphNodeTo, TARGET_VAL(Mips::NMADD_D64), 0,
                            1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 0, 1, 
                        // Src: (fsub:f64 (fpimm:f64)<<P:Predicate_fpimm0>>, (fadd:f64 (fmul:f64 FGR64:f64:$fs, FGR64:f64:$ft), FGR64:f64:$fr)) - Complexity = 13
                        // Dst: (NMADD_D64:f64 FGR64:f64:$fr, FGR64:f64:$fs, FGR64:f64:$ft)
/*14486*/             0, /*End of Scope*/
                    0, // EndSwitchType
/*14488*/         /*Scope*/ 56, /*->14545*/
/*14489*/           OPC_RecordChild0, // #0 = $fr
/*14490*/           OPC_MoveChild, 1,
/*14492*/           OPC_CheckOpcode, TARGET_VAL(ISD::FMUL),
/*14495*/           OPC_RecordChild0, // #1 = $fs
/*14496*/           OPC_RecordChild1, // #2 = $ft
/*14497*/           OPC_MoveParent,
/*14498*/           OPC_MoveParent,
/*14499*/           OPC_SwitchType /*2 cases */, 12,  MVT::f32,// ->14514
/*14502*/             OPC_CheckPatternPredicate, 19, // (Subtarget.hasMips32r2()) && (TM.Options.NoNaNsFPMath) && (Subtarget.hasStandardEncoding())
/*14504*/             OPC_MorphNodeTo, TARGET_VAL(Mips::NMADD_S), 0,
                          1/*#VTs*/, MVT::f32, 3/*#Ops*/, 0, 1, 2, 
                      // Src: (fsub:f32 (fpimm:f32)<<P:Predicate_fpimm0>>, (fadd:f32 FGR32:f32:$fr, (fmul:f32 FGR32:f32:$fs, FGR32:f32:$ft))) - Complexity = 13
                      // Dst: (NMADD_S:f32 FGR32:f32:$fr, FGR32:f32:$fs, FGR32:f32:$ft)
                    /*SwitchType*/ 28,  MVT::f64,// ->14544
/*14516*/             OPC_Scope, 12, /*->14530*/ // 2 children in Scope
/*14518*/               OPC_CheckPatternPredicate, 20, // (Subtarget.hasMips32r2()) && (!Subtarget.isFP64bit()) && (TM.Options.NoNaNsFPMath) && (Subtarget.hasStandardEncoding())
/*14520*/               OPC_MorphNodeTo, TARGET_VAL(Mips::NMADD_D32), 0,
                            1/*#VTs*/, MVT::f64, 3/*#Ops*/, 0, 1, 2, 
                        // Src: (fsub:f64 (fpimm:f64)<<P:Predicate_fpimm0>>, (fadd:f64 AFGR64:f64:$fr, (fmul:f64 AFGR64:f64:$fs, AFGR64:f64:$ft))) - Complexity = 13
                        // Dst: (NMADD_D32:f64 AFGR64:f64:$fr, AFGR64:f64:$fs, AFGR64:f64:$ft)
/*14530*/             /*Scope*/ 12, /*->14543*/
/*14531*/               OPC_CheckPatternPredicate, 21, // (Subtarget.hasMips32r2()) && (Subtarget.isFP64bit()) && (TM.Options.NoNaNsFPMath) && (Subtarget.hasStandardEncoding())
/*14533*/               OPC_MorphNodeTo, TARGET_VAL(Mips::NMADD_D64), 0,
                            1/*#VTs*/, MVT::f64, 3/*#Ops*/, 0, 1, 2, 
                        // Src: (fsub:f64 (fpimm:f64)<<P:Predicate_fpimm0>>, (fadd:f64 FGR64:f64:$fr, (fmul:f64 FGR64:f64:$fs, FGR64:f64:$ft))) - Complexity = 13
                        // Dst: (NMADD_D64:f64 FGR64:f64:$fr, FGR64:f64:$fs, FGR64:f64:$ft)
/*14543*/             0, /*End of Scope*/
                    0, // EndSwitchType
/*14545*/         0, /*End of Scope*/
                /*SwitchOpcode*/ 56,  TARGET_VAL(ISD::FSUB),// ->14605
/*14549*/         OPC_MoveChild, 0,
/*14551*/         OPC_CheckOpcode, TARGET_VAL(ISD::FMUL),
/*14554*/         OPC_RecordChild0, // #0 = $fs
/*14555*/         OPC_RecordChild1, // #1 = $ft
/*14556*/         OPC_MoveParent,
/*14557*/         OPC_RecordChild1, // #2 = $fr
/*14558*/         OPC_MoveParent,
/*14559*/         OPC_SwitchType /*2 cases */, 12,  MVT::f32,// ->14574
/*14562*/           OPC_CheckPatternPredicate, 19, // (Subtarget.hasMips32r2()) && (TM.Options.NoNaNsFPMath) && (Subtarget.hasStandardEncoding())
/*14564*/           OPC_MorphNodeTo, TARGET_VAL(Mips::NMSUB_S), 0,
                        1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 0, 1, 
                    // Src: (fsub:f32 (fpimm:f32)<<P:Predicate_fpimm0>>, (fsub:f32 (fmul:f32 FGR32:f32:$fs, FGR32:f32:$ft), FGR32:f32:$fr)) - Complexity = 13
                    // Dst: (NMSUB_S:f32 FGR32:f32:$fr, FGR32:f32:$fs, FGR32:f32:$ft)
                  /*SwitchType*/ 28,  MVT::f64,// ->14604
/*14576*/           OPC_Scope, 12, /*->14590*/ // 2 children in Scope
/*14578*/             OPC_CheckPatternPredicate, 20, // (Subtarget.hasMips32r2()) && (!Subtarget.isFP64bit()) && (TM.Options.NoNaNsFPMath) && (Subtarget.hasStandardEncoding())
/*14580*/             OPC_MorphNodeTo, TARGET_VAL(Mips::NMSUB_D32), 0,
                          1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 0, 1, 
                      // Src: (fsub:f64 (fpimm:f64)<<P:Predicate_fpimm0>>, (fsub:f64 (fmul:f64 AFGR64:f64:$fs, AFGR64:f64:$ft), AFGR64:f64:$fr)) - Complexity = 13
                      // Dst: (NMSUB_D32:f64 AFGR64:f64:$fr, AFGR64:f64:$fs, AFGR64:f64:$ft)
/*14590*/           /*Scope*/ 12, /*->14603*/
/*14591*/             OPC_CheckPatternPredicate, 21, // (Subtarget.hasMips32r2()) && (Subtarget.isFP64bit()) && (TM.Options.NoNaNsFPMath) && (Subtarget.hasStandardEncoding())
/*14593*/             OPC_MorphNodeTo, TARGET_VAL(Mips::NMSUB_D64), 0,
                          1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 0, 1, 
                      // Src: (fsub:f64 (fpimm:f64)<<P:Predicate_fpimm0>>, (fsub:f64 (fmul:f64 FGR64:f64:$fs, FGR64:f64:$ft), FGR64:f64:$fr)) - Complexity = 13
                      // Dst: (NMSUB_D64:f64 FGR64:f64:$fr, FGR64:f64:$fs, FGR64:f64:$ft)
/*14603*/           0, /*End of Scope*/
                  0, // EndSwitchType
                0, // EndSwitchOpcode
              /*SwitchOpcode*/ 50,  TARGET_VAL(ISD::FMUL),// ->14659
/*14609*/       OPC_RecordChild0, // #0 = $fs
/*14610*/       OPC_RecordChild1, // #1 = $ft
/*14611*/       OPC_MoveParent,
/*14612*/       OPC_RecordChild1, // #2 = $fr
/*14613*/       OPC_SwitchType /*2 cases */, 12,  MVT::f32,// ->14628
/*14616*/         OPC_CheckPatternPredicate, 15, // (Subtarget.hasMips32r2()) && (Subtarget.hasStandardEncoding())
/*14618*/         OPC_MorphNodeTo, TARGET_VAL(Mips::MSUB_S), 0,
                      1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 0, 1, 
                  // Src: (fsub:f32 (fmul:f32 FGR32:f32:$fs, FGR32:f32:$ft), FGR32:f32:$fr) - Complexity = 6
                  // Dst: (MSUB_S:f32 FGR32:f32:$fr, FGR32:f32:$fs, FGR32:f32:$ft)
                /*SwitchType*/ 28,  MVT::f64,// ->14658
/*14630*/         OPC_Scope, 12, /*->14644*/ // 2 children in Scope
/*14632*/           OPC_CheckPatternPredicate, 22, // (Subtarget.hasMips32r2()) && (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*14634*/           OPC_MorphNodeTo, TARGET_VAL(Mips::MSUB_D32), 0,
                        1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 0, 1, 
                    // Src: (fsub:f64 (fmul:f64 AFGR64:f64:$fs, AFGR64:f64:$ft), AFGR64:f64:$fr) - Complexity = 6
                    // Dst: (MSUB_D32:f64 AFGR64:f64:$fr, AFGR64:f64:$fs, AFGR64:f64:$ft)
/*14644*/         /*Scope*/ 12, /*->14657*/
/*14645*/           OPC_CheckPatternPredicate, 23, // (Subtarget.hasMips32r2()) && (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*14647*/           OPC_MorphNodeTo, TARGET_VAL(Mips::MSUB_D64), 0,
                        1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 0, 1, 
                    // Src: (fsub:f64 (fmul:f64 FGR64:f64:$fs, FGR64:f64:$ft), FGR64:f64:$fr) - Complexity = 6
                    // Dst: (MSUB_D64:f64 FGR64:f64:$fr, FGR64:f64:$fs, FGR64:f64:$ft)
/*14657*/         0, /*End of Scope*/
                0, // EndSwitchType
              0, // EndSwitchOpcode
/*14660*/   /*Scope*/ 45, /*->14706*/
/*14661*/     OPC_RecordChild0, // #0 = $fs
/*14662*/     OPC_RecordChild1, // #1 = $ft
/*14663*/     OPC_SwitchType /*2 cases */, 11,  MVT::f32,// ->14677
/*14666*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*14668*/       OPC_MorphNodeTo, TARGET_VAL(Mips::FSUB_S), 0,
                    1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                // Src: (fsub:f32 FGR32:f32:$fs, FGR32:f32:$ft) - Complexity = 3
                // Dst: (FSUB_S:f32 FGR32:f32:$fs, FGR32:f32:$ft)
              /*SwitchType*/ 26,  MVT::f64,// ->14705
/*14679*/       OPC_Scope, 11, /*->14692*/ // 2 children in Scope
/*14681*/         OPC_CheckPatternPredicate, 13, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*14683*/         OPC_MorphNodeTo, TARGET_VAL(Mips::FSUB_D32), 0,
                      1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
                  // Src: (fsub:f64 AFGR64:f64:$fs, AFGR64:f64:$ft) - Complexity = 3
                  // Dst: (FSUB_D32:f64 AFGR64:f64:$fs, AFGR64:f64:$ft)
/*14692*/       /*Scope*/ 11, /*->14704*/
/*14693*/         OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*14695*/         OPC_MorphNodeTo, TARGET_VAL(Mips::FSUB_D64), 0,
                      1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
                  // Src: (fsub:f64 FGR64:f64:$fs, FGR64:f64:$ft) - Complexity = 3
                  // Dst: (FSUB_D64:f64 FGR64:f64:$fs, FGR64:f64:$ft)
/*14704*/       0, /*End of Scope*/
              0, // EndSwitchType
/*14706*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 34|128,1/*162*/,  TARGET_VAL(ISD::FADD),// ->14873
/*14711*/   OPC_Scope, 55, /*->14768*/ // 2 children in Scope
/*14713*/     OPC_MoveChild, 0,
/*14715*/     OPC_CheckOpcode, TARGET_VAL(ISD::FMUL),
/*14718*/     OPC_RecordChild0, // #0 = $fs
/*14719*/     OPC_RecordChild1, // #1 = $ft
/*14720*/     OPC_MoveParent,
/*14721*/     OPC_RecordChild1, // #2 = $fr
/*14722*/     OPC_SwitchType /*2 cases */, 12,  MVT::f32,// ->14737
/*14725*/       OPC_CheckPatternPredicate, 15, // (Subtarget.hasMips32r2()) && (Subtarget.hasStandardEncoding())
/*14727*/       OPC_MorphNodeTo, TARGET_VAL(Mips::MADD_S), 0,
                    1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 0, 1, 
                // Src: (fadd:f32 (fmul:f32 FGR32:f32:$fs, FGR32:f32:$ft), FGR32:f32:$fr) - Complexity = 6
                // Dst: (MADD_S:f32 FGR32:f32:$fr, FGR32:f32:$fs, FGR32:f32:$ft)
              /*SwitchType*/ 28,  MVT::f64,// ->14767
/*14739*/       OPC_Scope, 12, /*->14753*/ // 2 children in Scope
/*14741*/         OPC_CheckPatternPredicate, 22, // (Subtarget.hasMips32r2()) && (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*14743*/         OPC_MorphNodeTo, TARGET_VAL(Mips::MADD_D32), 0,
                      1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 0, 1, 
                  // Src: (fadd:f64 (fmul:f64 AFGR64:f64:$fs, AFGR64:f64:$ft), AFGR64:f64:$fr) - Complexity = 6
                  // Dst: (MADD_D32:f64 AFGR64:f64:$fr, AFGR64:f64:$fs, AFGR64:f64:$ft)
/*14753*/       /*Scope*/ 12, /*->14766*/
/*14754*/         OPC_CheckPatternPredicate, 23, // (Subtarget.hasMips32r2()) && (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*14756*/         OPC_MorphNodeTo, TARGET_VAL(Mips::MADD_D64), 0,
                      1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 0, 1, 
                  // Src: (fadd:f64 (fmul:f64 FGR64:f64:$fs, FGR64:f64:$ft), FGR64:f64:$fr) - Complexity = 6
                  // Dst: (MADD_D64:f64 FGR64:f64:$fr, FGR64:f64:$fs, FGR64:f64:$ft)
/*14766*/       0, /*End of Scope*/
              0, // EndSwitchType
/*14768*/   /*Scope*/ 103, /*->14872*/
/*14769*/     OPC_RecordChild0, // #0 = $fr
/*14770*/     OPC_Scope, 54, /*->14826*/ // 2 children in Scope
/*14772*/       OPC_MoveChild, 1,
/*14774*/       OPC_CheckOpcode, TARGET_VAL(ISD::FMUL),
/*14777*/       OPC_RecordChild0, // #1 = $fs
/*14778*/       OPC_RecordChild1, // #2 = $ft
/*14779*/       OPC_MoveParent,
/*14780*/       OPC_SwitchType /*2 cases */, 12,  MVT::f32,// ->14795
/*14783*/         OPC_CheckPatternPredicate, 15, // (Subtarget.hasMips32r2()) && (Subtarget.hasStandardEncoding())
/*14785*/         OPC_MorphNodeTo, TARGET_VAL(Mips::MADD_S), 0,
                      1/*#VTs*/, MVT::f32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (fadd:f32 FGR32:f32:$fr, (fmul:f32 FGR32:f32:$fs, FGR32:f32:$ft)) - Complexity = 6
                  // Dst: (MADD_S:f32 FGR32:f32:$fr, FGR32:f32:$fs, FGR32:f32:$ft)
                /*SwitchType*/ 28,  MVT::f64,// ->14825
/*14797*/         OPC_Scope, 12, /*->14811*/ // 2 children in Scope
/*14799*/           OPC_CheckPatternPredicate, 22, // (Subtarget.hasMips32r2()) && (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*14801*/           OPC_MorphNodeTo, TARGET_VAL(Mips::MADD_D32), 0,
                        1/*#VTs*/, MVT::f64, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (fadd:f64 AFGR64:f64:$fr, (fmul:f64 AFGR64:f64:$fs, AFGR64:f64:$ft)) - Complexity = 6
                    // Dst: (MADD_D32:f64 AFGR64:f64:$fr, AFGR64:f64:$fs, AFGR64:f64:$ft)
/*14811*/         /*Scope*/ 12, /*->14824*/
/*14812*/           OPC_CheckPatternPredicate, 23, // (Subtarget.hasMips32r2()) && (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*14814*/           OPC_MorphNodeTo, TARGET_VAL(Mips::MADD_D64), 0,
                        1/*#VTs*/, MVT::f64, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (fadd:f64 FGR64:f64:$fr, (fmul:f64 FGR64:f64:$fs, FGR64:f64:$ft)) - Complexity = 6
                    // Dst: (MADD_D64:f64 FGR64:f64:$fr, FGR64:f64:$fs, FGR64:f64:$ft)
/*14824*/         0, /*End of Scope*/
                0, // EndSwitchType
/*14826*/     /*Scope*/ 44, /*->14871*/
/*14827*/       OPC_RecordChild1, // #1 = $ft
/*14828*/       OPC_SwitchType /*2 cases */, 11,  MVT::f32,// ->14842
/*14831*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*14833*/         OPC_MorphNodeTo, TARGET_VAL(Mips::FADD_S), 0,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                  // Src: (fadd:f32 FGR32:f32:$fs, FGR32:f32:$ft) - Complexity = 3
                  // Dst: (FADD_S:f32 FGR32:f32:$fs, FGR32:f32:$ft)
                /*SwitchType*/ 26,  MVT::f64,// ->14870
/*14844*/         OPC_Scope, 11, /*->14857*/ // 2 children in Scope
/*14846*/           OPC_CheckPatternPredicate, 13, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*14848*/           OPC_MorphNodeTo, TARGET_VAL(Mips::FADD_D32), 0,
                        1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
                    // Src: (fadd:f64 AFGR64:f64:$fs, AFGR64:f64:$ft) - Complexity = 3
                    // Dst: (FADD_D32:f64 AFGR64:f64:$fs, AFGR64:f64:$ft)
/*14857*/         /*Scope*/ 11, /*->14869*/
/*14858*/           OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*14860*/           OPC_MorphNodeTo, TARGET_VAL(Mips::FADD_D64), 0,
                        1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
                    // Src: (fadd:f64 FGR64:f64:$fs, FGR64:f64:$ft) - Complexity = 3
                    // Dst: (FADD_D64:f64 FGR64:f64:$fs, FGR64:f64:$ft)
/*14869*/         0, /*End of Scope*/
                0, // EndSwitchType
/*14871*/     0, /*End of Scope*/
/*14872*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 88,  TARGET_VAL(ISD::ConstantFP),// ->14964
/*14876*/   OPC_Scope, 34, /*->14912*/ // 2 children in Scope
/*14878*/     OPC_CheckPredicate, 63, // Predicate_fpimm0
/*14880*/     OPC_SwitchType /*2 cases */, 13,  MVT::f32,// ->14896
/*14883*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*14885*/       OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*14888*/       OPC_MorphNodeTo, TARGET_VAL(Mips::MTC1), 0,
                    1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
                // Src: (fpimm:f32)<<P:Predicate_fpimm0>> - Complexity = 4
                // Dst: (MTC1:f32 ZERO:i32)
              /*SwitchType*/ 13,  MVT::f64,// ->14911
/*14898*/       OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*14900*/       OPC_EmitRegister, MVT::i64, Mips::ZERO_64,
/*14903*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DMTC1), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
                // Src: (fpimm:f64)<<P:Predicate_fpimm0>> - Complexity = 4
                // Dst: (DMTC1:f64 ZERO_64:i64)
              0, // EndSwitchType
/*14912*/   /*Scope*/ 50, /*->14963*/
/*14913*/     OPC_CheckPredicate, 64, // Predicate_fpimm0neg
/*14915*/     OPC_SwitchType /*2 cases */, 21,  MVT::f32,// ->14939
/*14918*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*14920*/       OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*14923*/       OPC_EmitNode, TARGET_VAL(Mips::MTC1), 0,
                    1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0,  // Results = #1
/*14931*/       OPC_MorphNodeTo, TARGET_VAL(Mips::FNEG_S), 0,
                    1/*#VTs*/, MVT::f32, 1/*#Ops*/, 1, 
                // Src: (fpimm:f32)<<P:Predicate_fpimm0neg>> - Complexity = 4
                // Dst: (FNEG_S:f32 (MTC1:f32 ZERO:i32))
              /*SwitchType*/ 21,  MVT::f64,// ->14962
/*14941*/       OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*14943*/       OPC_EmitRegister, MVT::i64, Mips::ZERO_64,
/*14946*/       OPC_EmitNode, TARGET_VAL(Mips::DMTC1), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0,  // Results = #1
/*14954*/       OPC_MorphNodeTo, TARGET_VAL(Mips::FNEG_D64), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 1, 
                // Src: (fpimm:f64)<<P:Predicate_fpimm0neg>> - Complexity = 4
                // Dst: (FNEG_D64:f64 (DMTC1:f64 ZERO_64:i64))
              0, // EndSwitchType
/*14963*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 39,  TARGET_VAL(ISD::FABS),// ->15006
/*14967*/   OPC_RecordChild0, // #0 = $fs
/*14968*/   OPC_SwitchType /*2 cases */, 10,  MVT::f32,// ->14981
/*14971*/     OPC_CheckPatternPredicate, 24, // (TM.Options.NoNaNsFPMath) && (Subtarget.hasStandardEncoding())
/*14973*/     OPC_MorphNodeTo, TARGET_VAL(Mips::FABS_S), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (fabs:f32 FGR32:f32:$fs) - Complexity = 3
              // Dst: (FABS_S:f32 FGR32:f32:$fs)
            /*SwitchType*/ 22,  MVT::f64,// ->15005
/*14983*/     OPC_CheckPatternPredicate, 24, // (TM.Options.NoNaNsFPMath) && (Subtarget.hasStandardEncoding())
/*14985*/     OPC_Scope, 8, /*->14995*/ // 2 children in Scope
/*14987*/       OPC_MorphNodeTo, TARGET_VAL(Mips::FABS_D32), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
                // Src: (fabs:f64 AFGR64:f64:$fs) - Complexity = 3
                // Dst: (FABS_D32:f64 AFGR64:f64:$fs)
/*14995*/     /*Scope*/ 8, /*->15004*/
/*14996*/       OPC_MorphNodeTo, TARGET_VAL(Mips::FABS_D64), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
                // Src: (fabs:f64 FGR64:f64:$fs) - Complexity = 3
                // Dst: (FABS_D64:f64 FGR64:f64:$fs)
/*15004*/     0, /*End of Scope*/
            0, // EndSwitchType
          /*SwitchOpcode*/ 39,  TARGET_VAL(ISD::FNEG),// ->15048
/*15009*/   OPC_RecordChild0, // #0 = $fs
/*15010*/   OPC_SwitchType /*2 cases */, 10,  MVT::f32,// ->15023
/*15013*/     OPC_CheckPatternPredicate, 24, // (TM.Options.NoNaNsFPMath) && (Subtarget.hasStandardEncoding())
/*15015*/     OPC_MorphNodeTo, TARGET_VAL(Mips::FNEG_S), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (fneg:f32 FGR32:f32:$fs) - Complexity = 3
              // Dst: (FNEG_S:f32 FGR32:f32:$fs)
            /*SwitchType*/ 22,  MVT::f64,// ->15047
/*15025*/     OPC_CheckPatternPredicate, 24, // (TM.Options.NoNaNsFPMath) && (Subtarget.hasStandardEncoding())
/*15027*/     OPC_Scope, 8, /*->15037*/ // 2 children in Scope
/*15029*/       OPC_MorphNodeTo, TARGET_VAL(Mips::FNEG_D32), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
                // Src: (fneg:f64 AFGR64:f64:$fs) - Complexity = 3
                // Dst: (FNEG_D32:f64 AFGR64:f64:$fs)
/*15037*/     /*Scope*/ 8, /*->15046*/
/*15038*/       OPC_MorphNodeTo, TARGET_VAL(Mips::FNEG_D64), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
                // Src: (fneg:f64 FGR64:f64:$fs) - Complexity = 3
                // Dst: (FNEG_D64:f64 FGR64:f64:$fs)
/*15046*/     0, /*End of Scope*/
            0, // EndSwitchType
          /*SwitchOpcode*/ 41,  TARGET_VAL(ISD::FSQRT),// ->15092
/*15051*/   OPC_RecordChild0, // #0 = $fs
/*15052*/   OPC_SwitchType /*2 cases */, 10,  MVT::f32,// ->15065
/*15055*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15057*/     OPC_MorphNodeTo, TARGET_VAL(Mips::FSQRT_S), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (fsqrt:f32 FGR32:f32:$fs) - Complexity = 3
              // Dst: (FSQRT_S:f32 FGR32:f32:$fs)
            /*SwitchType*/ 24,  MVT::f64,// ->15091
/*15067*/     OPC_Scope, 10, /*->15079*/ // 2 children in Scope
/*15069*/       OPC_CheckPatternPredicate, 13, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*15071*/       OPC_MorphNodeTo, TARGET_VAL(Mips::FSQRT_D32), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
                // Src: (fsqrt:f64 AFGR64:f64:$fs) - Complexity = 3
                // Dst: (FSQRT_D32:f64 AFGR64:f64:$fs)
/*15079*/     /*Scope*/ 10, /*->15090*/
/*15080*/       OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*15082*/       OPC_MorphNodeTo, TARGET_VAL(Mips::FSQRT_D64), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
                // Src: (fsqrt:f64 FGR64:f64:$fs) - Complexity = 3
                // Dst: (FSQRT_D64:f64 FGR64:f64:$fs)
/*15090*/     0, /*End of Scope*/
            0, // EndSwitchType
          /*SwitchOpcode*/ 45,  TARGET_VAL(ISD::FDIV),// ->15140
/*15095*/   OPC_RecordChild0, // #0 = $fs
/*15096*/   OPC_RecordChild1, // #1 = $ft
/*15097*/   OPC_SwitchType /*2 cases */, 11,  MVT::f32,// ->15111
/*15100*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15102*/     OPC_MorphNodeTo, TARGET_VAL(Mips::FDIV_S), 0,
                  1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
              // Src: (fdiv:f32 FGR32:f32:$fs, FGR32:f32:$ft) - Complexity = 3
              // Dst: (FDIV_S:f32 FGR32:f32:$fs, FGR32:f32:$ft)
            /*SwitchType*/ 26,  MVT::f64,// ->15139
/*15113*/     OPC_Scope, 11, /*->15126*/ // 2 children in Scope
/*15115*/       OPC_CheckPatternPredicate, 13, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*15117*/       OPC_MorphNodeTo, TARGET_VAL(Mips::FDIV_D32), 0,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
                // Src: (fdiv:f64 AFGR64:f64:$fs, AFGR64:f64:$ft) - Complexity = 3
                // Dst: (FDIV_D32:f64 AFGR64:f64:$fs, AFGR64:f64:$ft)
/*15126*/     /*Scope*/ 11, /*->15138*/
/*15127*/       OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*15129*/       OPC_MorphNodeTo, TARGET_VAL(Mips::FDIV_D64), 0,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
                // Src: (fdiv:f64 FGR64:f64:$fs, FGR64:f64:$ft) - Complexity = 3
                // Dst: (FDIV_D64:f64 FGR64:f64:$fs, FGR64:f64:$ft)
/*15138*/     0, /*End of Scope*/
            0, // EndSwitchType
          /*SwitchOpcode*/ 45,  TARGET_VAL(ISD::FMUL),// ->15188
/*15143*/   OPC_RecordChild0, // #0 = $fs
/*15144*/   OPC_RecordChild1, // #1 = $ft
/*15145*/   OPC_SwitchType /*2 cases */, 11,  MVT::f32,// ->15159
/*15148*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15150*/     OPC_MorphNodeTo, TARGET_VAL(Mips::FMUL_S), 0,
                  1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
              // Src: (fmul:f32 FGR32:f32:$fs, FGR32:f32:$ft) - Complexity = 3
              // Dst: (FMUL_S:f32 FGR32:f32:$fs, FGR32:f32:$ft)
            /*SwitchType*/ 26,  MVT::f64,// ->15187
/*15161*/     OPC_Scope, 11, /*->15174*/ // 2 children in Scope
/*15163*/       OPC_CheckPatternPredicate, 13, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*15165*/       OPC_MorphNodeTo, TARGET_VAL(Mips::FMUL_D32), 0,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
                // Src: (fmul:f64 AFGR64:f64:$fs, AFGR64:f64:$ft) - Complexity = 3
                // Dst: (FMUL_D32:f64 AFGR64:f64:$fs, AFGR64:f64:$ft)
/*15174*/     /*Scope*/ 11, /*->15186*/
/*15175*/       OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*15177*/       OPC_MorphNodeTo, TARGET_VAL(Mips::FMUL_D64), 0,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
                // Src: (fmul:f64 FGR64:f64:$fs, FGR64:f64:$ft) - Complexity = 3
                // Dst: (FMUL_D64:f64 FGR64:f64:$fs, FGR64:f64:$ft)
/*15186*/     0, /*End of Scope*/
            0, // EndSwitchType
          /*SwitchOpcode*/ 13,  TARGET_VAL(MipsISD::BuildPairF64),// ->15204
/*15191*/   OPC_RecordChild0, // #0 = $lo
/*15192*/   OPC_RecordChild1, // #1 = $hi
/*15193*/   OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15195*/   OPC_MorphNodeTo, TARGET_VAL(Mips::BuildPairF64), 0,
                1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
            // Src: (MipsBuildPairF64:f64 CPURegs:i32:$lo, CPURegs:i32:$hi) - Complexity = 3
            // Dst: (BuildPairF64:f64 CPURegs:i32:$lo, CPURegs:i32:$hi)
          /*SwitchOpcode*/ 25,  TARGET_VAL(ISD::FP_ROUND),// ->15232
/*15207*/   OPC_RecordChild0, // #0 = $src
/*15208*/   OPC_Scope, 10, /*->15220*/ // 2 children in Scope
/*15210*/     OPC_CheckPatternPredicate, 13, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*15212*/     OPC_MorphNodeTo, TARGET_VAL(Mips::CVT_S_D32), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (fround:f32 AFGR64:f64:$src) - Complexity = 3
              // Dst: (CVT_S_D32:f32 AFGR64:f64:$src)
/*15220*/   /*Scope*/ 10, /*->15231*/
/*15221*/     OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*15223*/     OPC_MorphNodeTo, TARGET_VAL(Mips::CVT_S_D64), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (fround:f32 FGR64:f64:$src) - Complexity = 3
              // Dst: (CVT_S_D64:f32 FGR64:f64:$src)
/*15231*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 25,  TARGET_VAL(ISD::FP_EXTEND),// ->15260
/*15235*/   OPC_RecordChild0, // #0 = $src
/*15236*/   OPC_Scope, 10, /*->15248*/ // 2 children in Scope
/*15238*/     OPC_CheckPatternPredicate, 13, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*15240*/     OPC_MorphNodeTo, TARGET_VAL(Mips::CVT_D32_S), 0,
                  1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
              // Src: (fextend:f64 FGR32:f32:$src) - Complexity = 3
              // Dst: (CVT_D32_S:f64 FGR32:f32:$src)
/*15248*/   /*Scope*/ 10, /*->15259*/
/*15249*/     OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*15251*/     OPC_MorphNodeTo, TARGET_VAL(Mips::CVT_D64_S), 0,
                  1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
              // Src: (fextend:f64 FGR32:f32:$src) - Complexity = 3
              // Dst: (CVT_D64_S:f64 FGR32:f32:$src)
/*15259*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 115,  TARGET_VAL(ISD::SINT_TO_FP),// ->15378
/*15263*/   OPC_RecordChild0, // #0 = $src
/*15264*/   OPC_Scope, 66, /*->15332*/ // 2 children in Scope
/*15266*/     OPC_CheckChild0Type, MVT::i32,
/*15268*/     OPC_SwitchType /*2 cases */, 18,  MVT::f32,// ->15289
/*15271*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15273*/       OPC_EmitNode, TARGET_VAL(Mips::MTC1), 0,
                    1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0,  // Results = #1
/*15281*/       OPC_MorphNodeTo, TARGET_VAL(Mips::CVT_S_W), 0,
                    1/*#VTs*/, MVT::f32, 1/*#Ops*/, 1, 
                // Src: (sint_to_fp:f32 CPURegs:i32:$src) - Complexity = 3
                // Dst: (CVT_S_W:f32 (MTC1:f32 CPURegs:i32:$src))
              /*SwitchType*/ 40,  MVT::f64,// ->15331
/*15291*/       OPC_Scope, 18, /*->15311*/ // 2 children in Scope
/*15293*/         OPC_CheckPatternPredicate, 13, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*15295*/         OPC_EmitNode, TARGET_VAL(Mips::MTC1), 0,
                      1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0,  // Results = #1
/*15303*/         OPC_MorphNodeTo, TARGET_VAL(Mips::CVT_D32_W), 0,
                      1/*#VTs*/, MVT::f64, 1/*#Ops*/, 1, 
                  // Src: (sint_to_fp:f64 CPURegs:i32:$src) - Complexity = 3
                  // Dst: (CVT_D32_W:f64 (MTC1:f32 CPURegs:i32:$src))
/*15311*/       /*Scope*/ 18, /*->15330*/
/*15312*/         OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*15314*/         OPC_EmitNode, TARGET_VAL(Mips::MTC1), 0,
                      1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0,  // Results = #1
/*15322*/         OPC_MorphNodeTo, TARGET_VAL(Mips::CVT_D64_W), 0,
                      1/*#VTs*/, MVT::f64, 1/*#Ops*/, 1, 
                  // Src: (sint_to_fp:f64 CPURegs:i32:$src) - Complexity = 3
                  // Dst: (CVT_D64_W:f64 (MTC1:f32 CPURegs:i32:$src))
/*15330*/       0, /*End of Scope*/
              0, // EndSwitchType
/*15332*/   /*Scope*/ 44, /*->15377*/
/*15333*/     OPC_CheckChild0Type, MVT::i64,
/*15335*/     OPC_SwitchType /*2 cases */, 18,  MVT::f32,// ->15356
/*15338*/       OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*15340*/       OPC_EmitNode, TARGET_VAL(Mips::DMTC1), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0,  // Results = #1
/*15348*/       OPC_MorphNodeTo, TARGET_VAL(Mips::CVT_S_L), 0,
                    1/*#VTs*/, MVT::f32, 1/*#Ops*/, 1, 
                // Src: (sint_to_fp:f32 CPU64Regs:i64:$src) - Complexity = 3
                // Dst: (CVT_S_L:f32 (DMTC1:f64 CPU64Regs:i64:$src))
              /*SwitchType*/ 18,  MVT::f64,// ->15376
/*15358*/       OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*15360*/       OPC_EmitNode, TARGET_VAL(Mips::DMTC1), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0,  // Results = #1
/*15368*/       OPC_MorphNodeTo, TARGET_VAL(Mips::CVT_D64_L), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 1, 
                // Src: (sint_to_fp:f64 CPU64Regs:i64:$src) - Complexity = 3
                // Dst: (CVT_D64_L:f64 (DMTC1:f64 CPU64Regs:i64:$src))
              0, // EndSwitchType
/*15377*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 98|128,10/*1378*/,  TARGET_VAL(ISD::BRCOND),// ->16760
/*15382*/   OPC_RecordNode,   // #0 = 'brcond' chained node
/*15383*/   OPC_Scope, 24|128,10/*1304*/, /*->16690*/ // 2 children in Scope
/*15386*/     OPC_MoveChild, 1,
/*15388*/     OPC_CheckOpcode, TARGET_VAL(ISD::SETCC),
/*15391*/     OPC_RecordChild0, // #1 = $rs
/*15392*/     OPC_Scope, 43|128,6/*811*/, /*->16206*/ // 2 children in Scope
/*15395*/       OPC_CheckChild0Type, MVT::i32,
/*15397*/       OPC_Scope, 79|128,1/*207*/, /*->15607*/ // 2 children in Scope
/*15400*/         OPC_MoveChild, 1,
/*15402*/         OPC_CheckInteger, 0, 
/*15404*/         OPC_MoveParent,
/*15405*/         OPC_MoveChild, 2,
/*15407*/         OPC_Scope, 24, /*->15433*/ // 7 children in Scope
/*15409*/           OPC_CheckCondCode, ISD::SETGE,
/*15411*/           OPC_MoveParent,
/*15412*/           OPC_CheckType, MVT::i32,
/*15414*/           OPC_MoveParent,
/*15415*/           OPC_RecordChild2, // #2 = $imm16
/*15416*/           OPC_MoveChild, 2,
/*15418*/           OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*15421*/           OPC_MoveParent,
/*15422*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15424*/           OPC_EmitMergeInputChains1_0,
/*15425*/           OPC_MorphNodeTo, TARGET_VAL(Mips::BGEZ), 0|OPFL_Chain,
                        0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                    // Src: (brcond (setcc:i32 CPURegs:i32:$rs, 0:i32, SETGE:Other), (bb:Other):$imm16) - Complexity = 11
                    // Dst: (BGEZ CPURegs:i32:$rs, (bb:Other):$imm16)
/*15433*/         /*Scope*/ 24, /*->15458*/
/*15434*/           OPC_CheckCondCode, ISD::SETGT,
/*15436*/           OPC_MoveParent,
/*15437*/           OPC_CheckType, MVT::i32,
/*15439*/           OPC_MoveParent,
/*15440*/           OPC_RecordChild2, // #2 = $imm16
/*15441*/           OPC_MoveChild, 2,
/*15443*/           OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*15446*/           OPC_MoveParent,
/*15447*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15449*/           OPC_EmitMergeInputChains1_0,
/*15450*/           OPC_MorphNodeTo, TARGET_VAL(Mips::BGTZ), 0|OPFL_Chain,
                        0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                    // Src: (brcond (setcc:i32 CPURegs:i32:$rs, 0:i32, SETGT:Other), (bb:Other):$imm16) - Complexity = 11
                    // Dst: (BGTZ CPURegs:i32:$rs, (bb:Other):$imm16)
/*15458*/         /*Scope*/ 24, /*->15483*/
/*15459*/           OPC_CheckCondCode, ISD::SETLE,
/*15461*/           OPC_MoveParent,
/*15462*/           OPC_CheckType, MVT::i32,
/*15464*/           OPC_MoveParent,
/*15465*/           OPC_RecordChild2, // #2 = $imm16
/*15466*/           OPC_MoveChild, 2,
/*15468*/           OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*15471*/           OPC_MoveParent,
/*15472*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15474*/           OPC_EmitMergeInputChains1_0,
/*15475*/           OPC_MorphNodeTo, TARGET_VAL(Mips::BLEZ), 0|OPFL_Chain,
                        0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                    // Src: (brcond (setcc:i32 CPURegs:i32:$rs, 0:i32, SETLE:Other), (bb:Other):$imm16) - Complexity = 11
                    // Dst: (BLEZ CPURegs:i32:$rs, (bb:Other):$imm16)
/*15483*/         /*Scope*/ 24, /*->15508*/
/*15484*/           OPC_CheckCondCode, ISD::SETLT,
/*15486*/           OPC_MoveParent,
/*15487*/           OPC_CheckType, MVT::i32,
/*15489*/           OPC_MoveParent,
/*15490*/           OPC_RecordChild2, // #2 = $imm16
/*15491*/           OPC_MoveChild, 2,
/*15493*/           OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*15496*/           OPC_MoveParent,
/*15497*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15499*/           OPC_EmitMergeInputChains1_0,
/*15500*/           OPC_MorphNodeTo, TARGET_VAL(Mips::BLTZ), 0|OPFL_Chain,
                        0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                    // Src: (brcond (setcc:i32 CPURegs:i32:$rs, 0:i32, SETLT:Other), (bb:Other):$imm16) - Complexity = 11
                    // Dst: (BLTZ CPURegs:i32:$rs, (bb:Other):$imm16)
/*15508*/         /*Scope*/ 28, /*->15537*/
/*15509*/           OPC_CheckCondCode, ISD::SETNE,
/*15511*/           OPC_MoveParent,
/*15512*/           OPC_CheckType, MVT::i32,
/*15514*/           OPC_MoveParent,
/*15515*/           OPC_RecordChild2, // #2 = $dst
/*15516*/           OPC_MoveChild, 2,
/*15518*/           OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*15521*/           OPC_MoveParent,
/*15522*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15524*/           OPC_EmitMergeInputChains1_0,
/*15525*/           OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*15528*/           OPC_MorphNodeTo, TARGET_VAL(Mips::BNE), 0|OPFL_Chain,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 2, 
                    // Src: (brcond (setcc:i32 CPURegs:i32:$lhs, 0:i32, SETNE:Other), (bb:Other):$dst) - Complexity = 11
                    // Dst: (BNE CPURegs:i32:$lhs, ZERO:i32, (bb:Other):$dst)
/*15537*/         /*Scope*/ 43, /*->15581*/
/*15538*/           OPC_CheckCondCode, ISD::SETEQ,
/*15540*/           OPC_MoveParent,
/*15541*/           OPC_CheckType, MVT::i32,
/*15543*/           OPC_MoveParent,
/*15544*/           OPC_RecordChild2, // #2 = $dst
/*15545*/           OPC_MoveChild, 2,
/*15547*/           OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*15550*/           OPC_MoveParent,
/*15551*/           OPC_Scope, 15, /*->15568*/ // 2 children in Scope
/*15553*/             OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15555*/             OPC_EmitMergeInputChains1_0,
/*15556*/             OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*15559*/             OPC_MorphNodeTo, TARGET_VAL(Mips::BEQ), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 1, 3, 2, 
                      // Src: (brcond (setcc:i32 CPURegs:i32:$lhs, 0:i32, SETEQ:Other), (bb:Other):$dst) - Complexity = 11
                      // Dst: (BEQ CPURegs:i32:$lhs, ZERO:i32, (bb:Other):$dst)
/*15568*/           /*Scope*/ 11, /*->15580*/
/*15569*/             OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*15571*/             OPC_EmitMergeInputChains1_0,
/*15572*/             OPC_MorphNodeTo, TARGET_VAL(Mips::BeqzRxImmX16), 0|OPFL_Chain,
                          0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                      // Src: (brcond (setcc:i32 CPU16Regs:i32:$rx, 0:i32, SETEQ:Other), (bb:Other):$targ16) - Complexity = 11
                      // Dst: (BeqzRxImmX16 CPU16Regs:i32:$rx, (bb:Other):$targ16)
/*15580*/           0, /*End of Scope*/
/*15581*/         /*Scope*/ 24, /*->15606*/
/*15582*/           OPC_CheckCondCode, ISD::SETNE,
/*15584*/           OPC_MoveParent,
/*15585*/           OPC_CheckType, MVT::i32,
/*15587*/           OPC_MoveParent,
/*15588*/           OPC_RecordChild2, // #2 = $targ16
/*15589*/           OPC_MoveChild, 2,
/*15591*/           OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*15594*/           OPC_MoveParent,
/*15595*/           OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*15597*/           OPC_EmitMergeInputChains1_0,
/*15598*/           OPC_MorphNodeTo, TARGET_VAL(Mips::BnezRxImmX16), 0|OPFL_Chain,
                        0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                    // Src: (brcond (setcc:i32 CPU16Regs:i32:$rx, 0:i32, SETNE:Other), (bb:Other):$targ16) - Complexity = 11
                    // Dst: (BnezRxImmX16 CPU16Regs:i32:$rx, (bb:Other):$targ16)
/*15606*/         0, /*End of Scope*/
/*15607*/       /*Scope*/ 84|128,4/*596*/, /*->16205*/
/*15609*/         OPC_RecordChild1, // #2 = $imm
/*15610*/         OPC_Scope, 97|128,1/*225*/, /*->15838*/ // 2 children in Scope
/*15613*/           OPC_MoveChild, 1,
/*15615*/           OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*15618*/           OPC_Scope, 32, /*->15652*/ // 4 children in Scope
/*15620*/             OPC_CheckPredicate, 27, // Predicate_immZExt16
/*15622*/             OPC_MoveParent,
/*15623*/             OPC_MoveChild, 2,
/*15625*/             OPC_CheckCondCode, ISD::SETEQ,
/*15627*/             OPC_MoveParent,
/*15628*/             OPC_CheckType, MVT::i32,
/*15630*/             OPC_MoveParent,
/*15631*/             OPC_RecordChild2, // #3 = $targ16
/*15632*/             OPC_MoveChild, 2,
/*15634*/             OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*15637*/             OPC_MoveParent,
/*15638*/             OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*15640*/             OPC_EmitMergeInputChains1_0,
/*15641*/             OPC_EmitConvertToTarget, 2,
/*15643*/             OPC_MorphNodeTo, TARGET_VAL(Mips::BteqzT8CmpiX16), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 1, 4, 3, 
                      // Src: (brcond (setcc:i32 CPU16Regs:i32:$rx, (imm:i32)<<P:Predicate_immZExt16>><<X:LO16>>:$imm, SETEQ:Other), (bb:Other):$targ16) - Complexity = 10
                      // Dst: (BteqzT8CmpiX16 CPU16Regs:i32:$rx, (imm:i32)<<P:Predicate_immSExt16>>:$imm, (bb:Other):$targ16)
/*15652*/           /*Scope*/ 63, /*->15716*/
/*15653*/             OPC_CheckPredicate, 28, // Predicate_immSExt16
/*15655*/             OPC_MoveParent,
/*15656*/             OPC_MoveChild, 2,
/*15658*/             OPC_Scope, 27, /*->15687*/ // 2 children in Scope
/*15660*/               OPC_CheckCondCode, ISD::SETGE,
/*15662*/               OPC_MoveParent,
/*15663*/               OPC_CheckType, MVT::i32,
/*15665*/               OPC_MoveParent,
/*15666*/               OPC_RecordChild2, // #3 = $imm16
/*15667*/               OPC_MoveChild, 2,
/*15669*/               OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*15672*/               OPC_MoveParent,
/*15673*/               OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*15675*/               OPC_EmitMergeInputChains1_0,
/*15676*/               OPC_EmitConvertToTarget, 2,
/*15678*/               OPC_MorphNodeTo, TARGET_VAL(Mips::BteqzT8SltiX16), 0|OPFL_Chain,
                            0/*#VTs*/, 3/*#Ops*/, 1, 4, 3, 
                        // Src: (brcond (setcc:i32 CPU16Regs:i32:$rx, (imm:i32)<<P:Predicate_immSExt16>>:$imm, SETGE:Other), (bb:Other):$imm16) - Complexity = 10
                        // Dst: (BteqzT8SltiX16 CPU16Regs:i32:$rx, (imm:i32)<<P:Predicate_immSExt16>>:$imm, (bb:Other):$imm16)
/*15687*/             /*Scope*/ 27, /*->15715*/
/*15688*/               OPC_CheckCondCode, ISD::SETLT,
/*15690*/               OPC_MoveParent,
/*15691*/               OPC_CheckType, MVT::i32,
/*15693*/               OPC_MoveParent,
/*15694*/               OPC_RecordChild2, // #3 = $imm16
/*15695*/               OPC_MoveChild, 2,
/*15697*/               OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*15700*/               OPC_MoveParent,
/*15701*/               OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*15703*/               OPC_EmitMergeInputChains1_0,
/*15704*/               OPC_EmitConvertToTarget, 2,
/*15706*/               OPC_MorphNodeTo, TARGET_VAL(Mips::BtnezT8SltiX16), 0|OPFL_Chain,
                            0/*#VTs*/, 3/*#Ops*/, 1, 4, 3, 
                        // Src: (brcond (setcc:i32 CPU16Regs:i32:$rx, (imm:i32)<<P:Predicate_immSExt16>>:$imm, SETLT:Other), (bb:Other):$imm16) - Complexity = 10
                        // Dst: (BtnezT8SltiX16 CPU16Regs:i32:$rx, (imm:i32)<<P:Predicate_immSExt16>>:$imm, (bb:Other):$imm16)
/*15715*/             0, /*End of Scope*/
/*15716*/           /*Scope*/ 32, /*->15749*/
/*15717*/             OPC_CheckPredicate, 27, // Predicate_immZExt16
/*15719*/             OPC_MoveParent,
/*15720*/             OPC_MoveChild, 2,
/*15722*/             OPC_CheckCondCode, ISD::SETNE,
/*15724*/             OPC_MoveParent,
/*15725*/             OPC_CheckType, MVT::i32,
/*15727*/             OPC_MoveParent,
/*15728*/             OPC_RecordChild2, // #3 = $targ16
/*15729*/             OPC_MoveChild, 2,
/*15731*/             OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*15734*/             OPC_MoveParent,
/*15735*/             OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*15737*/             OPC_EmitMergeInputChains1_0,
/*15738*/             OPC_EmitConvertToTarget, 2,
/*15740*/             OPC_MorphNodeTo, TARGET_VAL(Mips::BtnezT8CmpiX16), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 1, 4, 3, 
                      // Src: (brcond (setcc:i32 CPU16Regs:i32:$rx, (imm:i32)<<P:Predicate_immZExt16>><<X:LO16>>:$imm, SETNE:Other), (bb:Other):$targ16) - Complexity = 10
                      // Dst: (BtnezT8CmpiX16 CPU16Regs:i32:$rx, (imm:i32)<<P:Predicate_immSExt16>>:$imm, (bb:Other):$targ16)
/*15749*/           /*Scope*/ 87, /*->15837*/
/*15750*/             OPC_CheckPredicate, 28, // Predicate_immSExt16
/*15752*/             OPC_MoveParent,
/*15753*/             OPC_MoveChild, 2,
/*15755*/             OPC_Scope, 39, /*->15796*/ // 2 children in Scope
/*15757*/               OPC_CheckCondCode, ISD::SETGE,
/*15759*/               OPC_MoveParent,
/*15760*/               OPC_CheckType, MVT::i32,
/*15762*/               OPC_MoveParent,
/*15763*/               OPC_RecordChild2, // #3 = $dst
/*15764*/               OPC_MoveChild, 2,
/*15766*/               OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*15769*/               OPC_MoveParent,
/*15770*/               OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15772*/               OPC_EmitMergeInputChains1_0,
/*15773*/               OPC_EmitConvertToTarget, 2,
/*15775*/               OPC_EmitNode, TARGET_VAL(Mips::SLTi), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 4,  // Results = #5
/*15784*/               OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*15787*/               OPC_MorphNodeTo, TARGET_VAL(Mips::BEQ), 0|OPFL_Chain,
                            0/*#VTs*/, 3/*#Ops*/, 5, 6, 3, 
                        // Src: (brcond (setcc:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs, SETGE:Other), (bb:Other):$dst) - Complexity = 10
                        // Dst: (BEQ (SLTi:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs), ZERO:i32, (bb:Other):$dst)
/*15796*/             /*Scope*/ 39, /*->15836*/
/*15797*/               OPC_CheckCondCode, ISD::SETUGE,
/*15799*/               OPC_MoveParent,
/*15800*/               OPC_CheckType, MVT::i32,
/*15802*/               OPC_MoveParent,
/*15803*/               OPC_RecordChild2, // #3 = $dst
/*15804*/               OPC_MoveChild, 2,
/*15806*/               OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*15809*/               OPC_MoveParent,
/*15810*/               OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15812*/               OPC_EmitMergeInputChains1_0,
/*15813*/               OPC_EmitConvertToTarget, 2,
/*15815*/               OPC_EmitNode, TARGET_VAL(Mips::SLTiu), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 4,  // Results = #5
/*15824*/               OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*15827*/               OPC_MorphNodeTo, TARGET_VAL(Mips::BEQ), 0|OPFL_Chain,
                            0/*#VTs*/, 3/*#Ops*/, 5, 6, 3, 
                        // Src: (brcond (setcc:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs, SETUGE:Other), (bb:Other):$dst) - Complexity = 10
                        // Dst: (BEQ (SLTiu:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs), ZERO:i32, (bb:Other):$dst)
/*15836*/             0, /*End of Scope*/
/*15837*/           0, /*End of Scope*/
/*15838*/         /*Scope*/ 108|128,2/*364*/, /*->16204*/
/*15840*/           OPC_MoveChild, 2,
/*15842*/           OPC_Scope, 25, /*->15869*/ // 12 children in Scope
/*15844*/             OPC_CheckCondCode, ISD::SETEQ,
/*15846*/             OPC_MoveParent,
/*15847*/             OPC_CheckType, MVT::i32,
/*15849*/             OPC_MoveParent,
/*15850*/             OPC_RecordChild2, // #3 = $imm16
/*15851*/             OPC_MoveChild, 2,
/*15853*/             OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*15856*/             OPC_MoveParent,
/*15857*/             OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15859*/             OPC_EmitMergeInputChains1_0,
/*15860*/             OPC_MorphNodeTo, TARGET_VAL(Mips::BEQ), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 1, 2, 3, 
                      // Src: (brcond (setcc:i32 CPURegs:i32:$rs, CPURegs:i32:$rt, SETEQ:Other), (bb:Other):$imm16) - Complexity = 6
                      // Dst: (BEQ CPURegs:i32:$rs, CPURegs:i32:$rt, (bb:Other):$imm16)
/*15869*/           /*Scope*/ 25, /*->15895*/
/*15870*/             OPC_CheckCondCode, ISD::SETNE,
/*15872*/             OPC_MoveParent,
/*15873*/             OPC_CheckType, MVT::i32,
/*15875*/             OPC_MoveParent,
/*15876*/             OPC_RecordChild2, // #3 = $imm16
/*15877*/             OPC_MoveChild, 2,
/*15879*/             OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*15882*/             OPC_MoveParent,
/*15883*/             OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15885*/             OPC_EmitMergeInputChains1_0,
/*15886*/             OPC_MorphNodeTo, TARGET_VAL(Mips::BNE), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 1, 2, 3, 
                      // Src: (brcond (setcc:i32 CPURegs:i32:$rs, CPURegs:i32:$rt, SETNE:Other), (bb:Other):$imm16) - Complexity = 6
                      // Dst: (BNE CPURegs:i32:$rs, CPURegs:i32:$rt, (bb:Other):$imm16)
/*15895*/           /*Scope*/ 25, /*->15921*/
/*15896*/             OPC_CheckCondCode, ISD::SETEQ,
/*15898*/             OPC_MoveParent,
/*15899*/             OPC_CheckType, MVT::i32,
/*15901*/             OPC_MoveParent,
/*15902*/             OPC_RecordChild2, // #3 = $imm16
/*15903*/             OPC_MoveChild, 2,
/*15905*/             OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*15908*/             OPC_MoveParent,
/*15909*/             OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*15911*/             OPC_EmitMergeInputChains1_0,
/*15912*/             OPC_MorphNodeTo, TARGET_VAL(Mips::BteqzT8CmpX16), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 1, 2, 3, 
                      // Src: (brcond (setcc:i32 CPU16Regs:i32:$rx, CPU16Regs:i32:$ry, SETEQ:Other), (bb:Other):$imm16) - Complexity = 6
                      // Dst: (BteqzT8CmpX16 CPU16Regs:i32:$rx, CPU16Regs:i32:$ry, (bb:Other):$imm16)
/*15921*/           /*Scope*/ 25, /*->15947*/
/*15922*/             OPC_CheckCondCode, ISD::SETGT,
/*15924*/             OPC_MoveParent,
/*15925*/             OPC_CheckType, MVT::i32,
/*15927*/             OPC_MoveParent,
/*15928*/             OPC_RecordChild2, // #3 = $imm16
/*15929*/             OPC_MoveChild, 2,
/*15931*/             OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*15934*/             OPC_MoveParent,
/*15935*/             OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*15937*/             OPC_EmitMergeInputChains1_0,
/*15938*/             OPC_MorphNodeTo, TARGET_VAL(Mips::BtnezT8SltX16), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 2, 1, 3, 
                      // Src: (brcond (setcc:i32 CPU16Regs:i32:$rx, CPU16Regs:i32:$ry, SETGT:Other), (bb:Other):$imm16) - Complexity = 6
                      // Dst: (BtnezT8SltX16 CPU16Regs:i32:$ry, CPU16Regs:i32:$rx, (bb:Other):$imm16)
/*15947*/           /*Scope*/ 25, /*->15973*/
/*15948*/             OPC_CheckCondCode, ISD::SETGE,
/*15950*/             OPC_MoveParent,
/*15951*/             OPC_CheckType, MVT::i32,
/*15953*/             OPC_MoveParent,
/*15954*/             OPC_RecordChild2, // #3 = $imm16
/*15955*/             OPC_MoveChild, 2,
/*15957*/             OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*15960*/             OPC_MoveParent,
/*15961*/             OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*15963*/             OPC_EmitMergeInputChains1_0,
/*15964*/             OPC_MorphNodeTo, TARGET_VAL(Mips::BteqzT8SltX16), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 1, 2, 3, 
                      // Src: (brcond (setcc:i32 CPU16Regs:i32:$rx, CPU16Regs:i32:$ry, SETGE:Other), (bb:Other):$imm16) - Complexity = 6
                      // Dst: (BteqzT8SltX16 CPU16Regs:i32:$rx, CPU16Regs:i32:$ry, (bb:Other):$imm16)
/*15973*/           /*Scope*/ 25, /*->15999*/
/*15974*/             OPC_CheckCondCode, ISD::SETLT,
/*15976*/             OPC_MoveParent,
/*15977*/             OPC_CheckType, MVT::i32,
/*15979*/             OPC_MoveParent,
/*15980*/             OPC_RecordChild2, // #3 = $imm16
/*15981*/             OPC_MoveChild, 2,
/*15983*/             OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*15986*/             OPC_MoveParent,
/*15987*/             OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*15989*/             OPC_EmitMergeInputChains1_0,
/*15990*/             OPC_MorphNodeTo, TARGET_VAL(Mips::BtnezT8SltX16), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 1, 2, 3, 
                      // Src: (brcond (setcc:i32 CPU16Regs:i32:$rx, CPU16Regs:i32:$ry, SETLT:Other), (bb:Other):$imm16) - Complexity = 6
                      // Dst: (BtnezT8SltX16 CPU16Regs:i32:$rx, CPU16Regs:i32:$ry, (bb:Other):$imm16)
/*15999*/           /*Scope*/ 25, /*->16025*/
/*16000*/             OPC_CheckCondCode, ISD::SETLE,
/*16002*/             OPC_MoveParent,
/*16003*/             OPC_CheckType, MVT::i32,
/*16005*/             OPC_MoveParent,
/*16006*/             OPC_RecordChild2, // #3 = $imm16
/*16007*/             OPC_MoveChild, 2,
/*16009*/             OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*16012*/             OPC_MoveParent,
/*16013*/             OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*16015*/             OPC_EmitMergeInputChains1_0,
/*16016*/             OPC_MorphNodeTo, TARGET_VAL(Mips::BteqzT8SltX16), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 2, 1, 3, 
                      // Src: (brcond (setcc:i32 CPU16Regs:i32:$rx, CPU16Regs:i32:$ry, SETLE:Other), (bb:Other):$imm16) - Complexity = 6
                      // Dst: (BteqzT8SltX16 CPU16Regs:i32:$ry, CPU16Regs:i32:$rx, (bb:Other):$imm16)
/*16025*/           /*Scope*/ 25, /*->16051*/
/*16026*/             OPC_CheckCondCode, ISD::SETNE,
/*16028*/             OPC_MoveParent,
/*16029*/             OPC_CheckType, MVT::i32,
/*16031*/             OPC_MoveParent,
/*16032*/             OPC_RecordChild2, // #3 = $imm16
/*16033*/             OPC_MoveChild, 2,
/*16035*/             OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*16038*/             OPC_MoveParent,
/*16039*/             OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*16041*/             OPC_EmitMergeInputChains1_0,
/*16042*/             OPC_MorphNodeTo, TARGET_VAL(Mips::BtnezT8CmpX16), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 1, 2, 3, 
                      // Src: (brcond (setcc:i32 CPU16Regs:i32:$rx, CPU16Regs:i32:$ry, SETNE:Other), (bb:Other):$imm16) - Complexity = 6
                      // Dst: (BtnezT8CmpX16 CPU16Regs:i32:$rx, CPU16Regs:i32:$ry, (bb:Other):$imm16)
/*16051*/           /*Scope*/ 37, /*->16089*/
/*16052*/             OPC_CheckCondCode, ISD::SETGE,
/*16054*/             OPC_MoveParent,
/*16055*/             OPC_CheckType, MVT::i32,
/*16057*/             OPC_MoveParent,
/*16058*/             OPC_RecordChild2, // #3 = $dst
/*16059*/             OPC_MoveChild, 2,
/*16061*/             OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*16064*/             OPC_MoveParent,
/*16065*/             OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*16067*/             OPC_EmitMergeInputChains1_0,
/*16068*/             OPC_EmitNode, TARGET_VAL(Mips::SLT), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #4
/*16077*/             OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*16080*/             OPC_MorphNodeTo, TARGET_VAL(Mips::BEQ), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 4, 5, 3, 
                      // Src: (brcond (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETGE:Other), (bb:Other):$dst) - Complexity = 6
                      // Dst: (BEQ (SLT:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), ZERO:i32, (bb:Other):$dst)
/*16089*/           /*Scope*/ 37, /*->16127*/
/*16090*/             OPC_CheckCondCode, ISD::SETUGE,
/*16092*/             OPC_MoveParent,
/*16093*/             OPC_CheckType, MVT::i32,
/*16095*/             OPC_MoveParent,
/*16096*/             OPC_RecordChild2, // #3 = $dst
/*16097*/             OPC_MoveChild, 2,
/*16099*/             OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*16102*/             OPC_MoveParent,
/*16103*/             OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*16105*/             OPC_EmitMergeInputChains1_0,
/*16106*/             OPC_EmitNode, TARGET_VAL(Mips::SLTu), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #4
/*16115*/             OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*16118*/             OPC_MorphNodeTo, TARGET_VAL(Mips::BEQ), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 4, 5, 3, 
                      // Src: (brcond (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETUGE:Other), (bb:Other):$dst) - Complexity = 6
                      // Dst: (BEQ (SLTu:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), ZERO:i32, (bb:Other):$dst)
/*16127*/           /*Scope*/ 37, /*->16165*/
/*16128*/             OPC_CheckCondCode, ISD::SETLE,
/*16130*/             OPC_MoveParent,
/*16131*/             OPC_CheckType, MVT::i32,
/*16133*/             OPC_MoveParent,
/*16134*/             OPC_RecordChild2, // #3 = $dst
/*16135*/             OPC_MoveChild, 2,
/*16137*/             OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*16140*/             OPC_MoveParent,
/*16141*/             OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*16143*/             OPC_EmitMergeInputChains1_0,
/*16144*/             OPC_EmitNode, TARGET_VAL(Mips::SLT), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 1,  // Results = #4
/*16153*/             OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*16156*/             OPC_MorphNodeTo, TARGET_VAL(Mips::BEQ), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 4, 5, 3, 
                      // Src: (brcond (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETLE:Other), (bb:Other):$dst) - Complexity = 6
                      // Dst: (BEQ (SLT:i32 CPURegs:i32:$rhs, CPURegs:i32:$lhs), ZERO:i32, (bb:Other):$dst)
/*16165*/           /*Scope*/ 37, /*->16203*/
/*16166*/             OPC_CheckCondCode, ISD::SETULE,
/*16168*/             OPC_MoveParent,
/*16169*/             OPC_CheckType, MVT::i32,
/*16171*/             OPC_MoveParent,
/*16172*/             OPC_RecordChild2, // #3 = $dst
/*16173*/             OPC_MoveChild, 2,
/*16175*/             OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*16178*/             OPC_MoveParent,
/*16179*/             OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*16181*/             OPC_EmitMergeInputChains1_0,
/*16182*/             OPC_EmitNode, TARGET_VAL(Mips::SLTu), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 1,  // Results = #4
/*16191*/             OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*16194*/             OPC_MorphNodeTo, TARGET_VAL(Mips::BEQ), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 4, 5, 3, 
                      // Src: (brcond (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETULE:Other), (bb:Other):$dst) - Complexity = 6
                      // Dst: (BEQ (SLTu:i32 CPURegs:i32:$rhs, CPURegs:i32:$lhs), ZERO:i32, (bb:Other):$dst)
/*16203*/           0, /*End of Scope*/
/*16204*/         0, /*End of Scope*/
/*16205*/       0, /*End of Scope*/
/*16206*/     /*Scope*/ 97|128,3/*481*/, /*->16689*/
/*16208*/       OPC_CheckChild0Type, MVT::i64,
/*16210*/       OPC_Scope, 39|128,1/*167*/, /*->16380*/ // 2 children in Scope
/*16213*/         OPC_MoveChild, 1,
/*16215*/         OPC_CheckInteger, 0, 
/*16217*/         OPC_MoveParent,
/*16218*/         OPC_MoveChild, 2,
/*16220*/         OPC_Scope, 24, /*->16246*/ // 6 children in Scope
/*16222*/           OPC_CheckCondCode, ISD::SETGE,
/*16224*/           OPC_MoveParent,
/*16225*/           OPC_CheckType, MVT::i32,
/*16227*/           OPC_MoveParent,
/*16228*/           OPC_RecordChild2, // #2 = $imm16
/*16229*/           OPC_MoveChild, 2,
/*16231*/           OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*16234*/           OPC_MoveParent,
/*16235*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*16237*/           OPC_EmitMergeInputChains1_0,
/*16238*/           OPC_MorphNodeTo, TARGET_VAL(Mips::BGEZ64), 0|OPFL_Chain,
                        0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                    // Src: (brcond (setcc:i32 CPU64Regs:i64:$rs, 0:i64, SETGE:Other), (bb:Other):$imm16) - Complexity = 11
                    // Dst: (BGEZ64 CPU64Regs:i64:$rs, (bb:Other):$imm16)
/*16246*/         /*Scope*/ 24, /*->16271*/
/*16247*/           OPC_CheckCondCode, ISD::SETGT,
/*16249*/           OPC_MoveParent,
/*16250*/           OPC_CheckType, MVT::i32,
/*16252*/           OPC_MoveParent,
/*16253*/           OPC_RecordChild2, // #2 = $imm16
/*16254*/           OPC_MoveChild, 2,
/*16256*/           OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*16259*/           OPC_MoveParent,
/*16260*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*16262*/           OPC_EmitMergeInputChains1_0,
/*16263*/           OPC_MorphNodeTo, TARGET_VAL(Mips::BGTZ64), 0|OPFL_Chain,
                        0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                    // Src: (brcond (setcc:i32 CPU64Regs:i64:$rs, 0:i64, SETGT:Other), (bb:Other):$imm16) - Complexity = 11
                    // Dst: (BGTZ64 CPU64Regs:i64:$rs, (bb:Other):$imm16)
/*16271*/         /*Scope*/ 24, /*->16296*/
/*16272*/           OPC_CheckCondCode, ISD::SETLE,
/*16274*/           OPC_MoveParent,
/*16275*/           OPC_CheckType, MVT::i32,
/*16277*/           OPC_MoveParent,
/*16278*/           OPC_RecordChild2, // #2 = $imm16
/*16279*/           OPC_MoveChild, 2,
/*16281*/           OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*16284*/           OPC_MoveParent,
/*16285*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*16287*/           OPC_EmitMergeInputChains1_0,
/*16288*/           OPC_MorphNodeTo, TARGET_VAL(Mips::BLEZ64), 0|OPFL_Chain,
                        0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                    // Src: (brcond (setcc:i32 CPU64Regs:i64:$rs, 0:i64, SETLE:Other), (bb:Other):$imm16) - Complexity = 11
                    // Dst: (BLEZ64 CPU64Regs:i64:$rs, (bb:Other):$imm16)
/*16296*/         /*Scope*/ 24, /*->16321*/
/*16297*/           OPC_CheckCondCode, ISD::SETLT,
/*16299*/           OPC_MoveParent,
/*16300*/           OPC_CheckType, MVT::i32,
/*16302*/           OPC_MoveParent,
/*16303*/           OPC_RecordChild2, // #2 = $imm16
/*16304*/           OPC_MoveChild, 2,
/*16306*/           OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*16309*/           OPC_MoveParent,
/*16310*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*16312*/           OPC_EmitMergeInputChains1_0,
/*16313*/           OPC_MorphNodeTo, TARGET_VAL(Mips::BLTZ64), 0|OPFL_Chain,
                        0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                    // Src: (brcond (setcc:i32 CPU64Regs:i64:$rs, 0:i64, SETLT:Other), (bb:Other):$imm16) - Complexity = 11
                    // Dst: (BLTZ64 CPU64Regs:i64:$rs, (bb:Other):$imm16)
/*16321*/         /*Scope*/ 28, /*->16350*/
/*16322*/           OPC_CheckCondCode, ISD::SETNE,
/*16324*/           OPC_MoveParent,
/*16325*/           OPC_CheckType, MVT::i32,
/*16327*/           OPC_MoveParent,
/*16328*/           OPC_RecordChild2, // #2 = $dst
/*16329*/           OPC_MoveChild, 2,
/*16331*/           OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*16334*/           OPC_MoveParent,
/*16335*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*16337*/           OPC_EmitMergeInputChains1_0,
/*16338*/           OPC_EmitRegister, MVT::i64, Mips::ZERO_64,
/*16341*/           OPC_MorphNodeTo, TARGET_VAL(Mips::BNE64), 0|OPFL_Chain,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 2, 
                    // Src: (brcond (setcc:i32 CPU64Regs:i64:$lhs, 0:i64, SETNE:Other), (bb:Other):$dst) - Complexity = 11
                    // Dst: (BNE64 CPU64Regs:i64:$lhs, ZERO_64:i64, (bb:Other):$dst)
/*16350*/         /*Scope*/ 28, /*->16379*/
/*16351*/           OPC_CheckCondCode, ISD::SETEQ,
/*16353*/           OPC_MoveParent,
/*16354*/           OPC_CheckType, MVT::i32,
/*16356*/           OPC_MoveParent,
/*16357*/           OPC_RecordChild2, // #2 = $dst
/*16358*/           OPC_MoveChild, 2,
/*16360*/           OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*16363*/           OPC_MoveParent,
/*16364*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*16366*/           OPC_EmitMergeInputChains1_0,
/*16367*/           OPC_EmitRegister, MVT::i64, Mips::ZERO_64,
/*16370*/           OPC_MorphNodeTo, TARGET_VAL(Mips::BEQ64), 0|OPFL_Chain,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 2, 
                    // Src: (brcond (setcc:i32 CPU64Regs:i64:$lhs, 0:i64, SETEQ:Other), (bb:Other):$dst) - Complexity = 11
                    // Dst: (BEQ64 CPU64Regs:i64:$lhs, ZERO_64:i64, (bb:Other):$dst)
/*16379*/         0, /*End of Scope*/
/*16380*/       /*Scope*/ 50|128,2/*306*/, /*->16688*/
/*16382*/         OPC_RecordChild1, // #2 = $rhs
/*16383*/         OPC_Scope, 92, /*->16477*/ // 2 children in Scope
/*16385*/           OPC_MoveChild, 1,
/*16387*/           OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*16390*/           OPC_CheckPredicate, 28, // Predicate_immSExt16
/*16392*/           OPC_MoveParent,
/*16393*/           OPC_MoveChild, 2,
/*16395*/           OPC_Scope, 39, /*->16436*/ // 2 children in Scope
/*16397*/             OPC_CheckCondCode, ISD::SETGE,
/*16399*/             OPC_MoveParent,
/*16400*/             OPC_CheckType, MVT::i32,
/*16402*/             OPC_MoveParent,
/*16403*/             OPC_RecordChild2, // #3 = $dst
/*16404*/             OPC_MoveChild, 2,
/*16406*/             OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*16409*/             OPC_MoveParent,
/*16410*/             OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*16412*/             OPC_EmitMergeInputChains1_0,
/*16413*/             OPC_EmitConvertToTarget, 2,
/*16415*/             OPC_EmitNode, TARGET_VAL(Mips::SLTi64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 4,  // Results = #5
/*16424*/             OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*16427*/             OPC_MorphNodeTo, TARGET_VAL(Mips::BEQ), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 5, 6, 3, 
                      // Src: (brcond (setcc:i32 CPU64Regs:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16>>:$rhs, SETGE:Other), (bb:Other):$dst) - Complexity = 10
                      // Dst: (BEQ (SLTi64:i32 CPU64Regs:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16>>:$rhs), ZERO:i32, (bb:Other):$dst)
/*16436*/           /*Scope*/ 39, /*->16476*/
/*16437*/             OPC_CheckCondCode, ISD::SETUGE,
/*16439*/             OPC_MoveParent,
/*16440*/             OPC_CheckType, MVT::i32,
/*16442*/             OPC_MoveParent,
/*16443*/             OPC_RecordChild2, // #3 = $dst
/*16444*/             OPC_MoveChild, 2,
/*16446*/             OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*16449*/             OPC_MoveParent,
/*16450*/             OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*16452*/             OPC_EmitMergeInputChains1_0,
/*16453*/             OPC_EmitConvertToTarget, 2,
/*16455*/             OPC_EmitNode, TARGET_VAL(Mips::SLTiu64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 4,  // Results = #5
/*16464*/             OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*16467*/             OPC_MorphNodeTo, TARGET_VAL(Mips::BEQ), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 5, 6, 3, 
                      // Src: (brcond (setcc:i32 CPU64Regs:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16>>:$rhs, SETUGE:Other), (bb:Other):$dst) - Complexity = 10
                      // Dst: (BEQ (SLTiu64:i32 CPU64Regs:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16>>:$rhs), ZERO:i32, (bb:Other):$dst)
/*16476*/           0, /*End of Scope*/
/*16477*/         /*Scope*/ 80|128,1/*208*/, /*->16687*/
/*16479*/           OPC_MoveChild, 2,
/*16481*/           OPC_Scope, 25, /*->16508*/ // 6 children in Scope
/*16483*/             OPC_CheckCondCode, ISD::SETEQ,
/*16485*/             OPC_MoveParent,
/*16486*/             OPC_CheckType, MVT::i32,
/*16488*/             OPC_MoveParent,
/*16489*/             OPC_RecordChild2, // #3 = $imm16
/*16490*/             OPC_MoveChild, 2,
/*16492*/             OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*16495*/             OPC_MoveParent,
/*16496*/             OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*16498*/             OPC_EmitMergeInputChains1_0,
/*16499*/             OPC_MorphNodeTo, TARGET_VAL(Mips::BEQ64), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 1, 2, 3, 
                      // Src: (brcond (setcc:i32 CPU64Regs:i64:$rs, CPU64Regs:i64:$rt, SETEQ:Other), (bb:Other):$imm16) - Complexity = 6
                      // Dst: (BEQ64 CPU64Regs:i64:$rs, CPU64Regs:i64:$rt, (bb:Other):$imm16)
/*16508*/           /*Scope*/ 25, /*->16534*/
/*16509*/             OPC_CheckCondCode, ISD::SETNE,
/*16511*/             OPC_MoveParent,
/*16512*/             OPC_CheckType, MVT::i32,
/*16514*/             OPC_MoveParent,
/*16515*/             OPC_RecordChild2, // #3 = $imm16
/*16516*/             OPC_MoveChild, 2,
/*16518*/             OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*16521*/             OPC_MoveParent,
/*16522*/             OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*16524*/             OPC_EmitMergeInputChains1_0,
/*16525*/             OPC_MorphNodeTo, TARGET_VAL(Mips::BNE64), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 1, 2, 3, 
                      // Src: (brcond (setcc:i32 CPU64Regs:i64:$rs, CPU64Regs:i64:$rt, SETNE:Other), (bb:Other):$imm16) - Complexity = 6
                      // Dst: (BNE64 CPU64Regs:i64:$rs, CPU64Regs:i64:$rt, (bb:Other):$imm16)
/*16534*/           /*Scope*/ 37, /*->16572*/
/*16535*/             OPC_CheckCondCode, ISD::SETGE,
/*16537*/             OPC_MoveParent,
/*16538*/             OPC_CheckType, MVT::i32,
/*16540*/             OPC_MoveParent,
/*16541*/             OPC_RecordChild2, // #3 = $dst
/*16542*/             OPC_MoveChild, 2,
/*16544*/             OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*16547*/             OPC_MoveParent,
/*16548*/             OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*16550*/             OPC_EmitMergeInputChains1_0,
/*16551*/             OPC_EmitNode, TARGET_VAL(Mips::SLT64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #4
/*16560*/             OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*16563*/             OPC_MorphNodeTo, TARGET_VAL(Mips::BEQ), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 4, 5, 3, 
                      // Src: (brcond (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETGE:Other), (bb:Other):$dst) - Complexity = 6
                      // Dst: (BEQ (SLT64:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs), ZERO:i32, (bb:Other):$dst)
/*16572*/           /*Scope*/ 37, /*->16610*/
/*16573*/             OPC_CheckCondCode, ISD::SETUGE,
/*16575*/             OPC_MoveParent,
/*16576*/             OPC_CheckType, MVT::i32,
/*16578*/             OPC_MoveParent,
/*16579*/             OPC_RecordChild2, // #3 = $dst
/*16580*/             OPC_MoveChild, 2,
/*16582*/             OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*16585*/             OPC_MoveParent,
/*16586*/             OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*16588*/             OPC_EmitMergeInputChains1_0,
/*16589*/             OPC_EmitNode, TARGET_VAL(Mips::SLTu64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #4
/*16598*/             OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*16601*/             OPC_MorphNodeTo, TARGET_VAL(Mips::BEQ), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 4, 5, 3, 
                      // Src: (brcond (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETUGE:Other), (bb:Other):$dst) - Complexity = 6
                      // Dst: (BEQ (SLTu64:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs), ZERO:i32, (bb:Other):$dst)
/*16610*/           /*Scope*/ 37, /*->16648*/
/*16611*/             OPC_CheckCondCode, ISD::SETLE,
/*16613*/             OPC_MoveParent,
/*16614*/             OPC_CheckType, MVT::i32,
/*16616*/             OPC_MoveParent,
/*16617*/             OPC_RecordChild2, // #3 = $dst
/*16618*/             OPC_MoveChild, 2,
/*16620*/             OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*16623*/             OPC_MoveParent,
/*16624*/             OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*16626*/             OPC_EmitMergeInputChains1_0,
/*16627*/             OPC_EmitNode, TARGET_VAL(Mips::SLT64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 1,  // Results = #4
/*16636*/             OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*16639*/             OPC_MorphNodeTo, TARGET_VAL(Mips::BEQ), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 4, 5, 3, 
                      // Src: (brcond (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETLE:Other), (bb:Other):$dst) - Complexity = 6
                      // Dst: (BEQ (SLT64:i32 CPU64Regs:i64:$rhs, CPU64Regs:i64:$lhs), ZERO:i32, (bb:Other):$dst)
/*16648*/           /*Scope*/ 37, /*->16686*/
/*16649*/             OPC_CheckCondCode, ISD::SETULE,
/*16651*/             OPC_MoveParent,
/*16652*/             OPC_CheckType, MVT::i32,
/*16654*/             OPC_MoveParent,
/*16655*/             OPC_RecordChild2, // #3 = $dst
/*16656*/             OPC_MoveChild, 2,
/*16658*/             OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*16661*/             OPC_MoveParent,
/*16662*/             OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*16664*/             OPC_EmitMergeInputChains1_0,
/*16665*/             OPC_EmitNode, TARGET_VAL(Mips::SLTu64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 1,  // Results = #4
/*16674*/             OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*16677*/             OPC_MorphNodeTo, TARGET_VAL(Mips::BEQ), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 4, 5, 3, 
                      // Src: (brcond (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETULE:Other), (bb:Other):$dst) - Complexity = 6
                      // Dst: (BEQ (SLTu64:i32 CPU64Regs:i64:$rhs, CPU64Regs:i64:$lhs), ZERO:i32, (bb:Other):$dst)
/*16686*/           0, /*End of Scope*/
/*16687*/         0, /*End of Scope*/
/*16688*/       0, /*End of Scope*/
/*16689*/     0, /*End of Scope*/
/*16690*/   /*Scope*/ 68, /*->16759*/
/*16691*/     OPC_RecordChild1, // #1 = $cond
/*16692*/     OPC_Scope, 39, /*->16733*/ // 2 children in Scope
/*16694*/       OPC_CheckChild1Type, MVT::i32,
/*16696*/       OPC_RecordChild2, // #2 = $dst
/*16697*/       OPC_MoveChild, 2,
/*16699*/       OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*16702*/       OPC_MoveParent,
/*16703*/       OPC_Scope, 15, /*->16720*/ // 2 children in Scope
/*16705*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*16707*/         OPC_EmitMergeInputChains1_0,
/*16708*/         OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*16711*/         OPC_MorphNodeTo, TARGET_VAL(Mips::BNE), 0|OPFL_Chain,
                      0/*#VTs*/, 3/*#Ops*/, 1, 3, 2, 
                  // Src: (brcond CPURegs:i32:$cond, (bb:Other):$dst) - Complexity = 3
                  // Dst: (BNE CPURegs:i32:$cond, ZERO:i32, (bb:Other):$dst)
/*16720*/       /*Scope*/ 11, /*->16732*/
/*16721*/         OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*16723*/         OPC_EmitMergeInputChains1_0,
/*16724*/         OPC_MorphNodeTo, TARGET_VAL(Mips::BnezRxImmX16), 0|OPFL_Chain,
                      0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                  // Src: (brcond CPU16Regs:i32:$rx, (bb:Other):$targ16) - Complexity = 3
                  // Dst: (BnezRxImmX16 CPU16Regs:i32:$rx, (bb:Other):$targ16)
/*16732*/       0, /*End of Scope*/
/*16733*/     /*Scope*/ 24, /*->16758*/
/*16734*/       OPC_CheckChild1Type, MVT::i64,
/*16736*/       OPC_RecordChild2, // #2 = $dst
/*16737*/       OPC_MoveChild, 2,
/*16739*/       OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*16742*/       OPC_MoveParent,
/*16743*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*16745*/       OPC_EmitMergeInputChains1_0,
/*16746*/       OPC_EmitRegister, MVT::i64, Mips::ZERO_64,
/*16749*/       OPC_MorphNodeTo, TARGET_VAL(Mips::BNE64), 0|OPFL_Chain,
                    0/*#VTs*/, 3/*#Ops*/, 1, 3, 2, 
                // Src: (brcond CPU64Regs:i64:$cond, (bb:Other):$dst) - Complexity = 3
                // Dst: (BNE64 CPU64Regs:i64:$cond, ZERO_64:i64, (bb:Other):$dst)
/*16758*/     0, /*End of Scope*/
/*16759*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 25,  TARGET_VAL(ISD::CALLSEQ_END),// ->16788
/*16763*/   OPC_RecordNode,   // #0 = 'callseq_end' chained node
/*16764*/   OPC_CaptureGlueInput,
/*16765*/   OPC_RecordChild1, // #1 = $amt1
/*16766*/   OPC_MoveChild, 1,
/*16768*/   OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*16771*/   OPC_MoveParent,
/*16772*/   OPC_RecordChild2, // #2 = $amt2
/*16773*/   OPC_MoveChild, 2,
/*16775*/   OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*16778*/   OPC_MoveParent,
/*16779*/   OPC_EmitMergeInputChains1_0,
/*16780*/   OPC_MorphNodeTo, TARGET_VAL(Mips::ADJCALLSTACKUP), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                0/*#VTs*/, 2/*#Ops*/, 1, 2, 
            // Src: (callseq_end (timm:i32):$amt1, (timm:i32):$amt2) - Complexity = 9
            // Dst: (ADJCALLSTACKUP (timm:i32):$amt1, (timm:i32):$amt2)
          /*SwitchOpcode*/ 50,  TARGET_VAL(MipsISD::FPBrcond),// ->16841
/*16791*/   OPC_RecordNode,   // #0 = 'MipsFPBrcond' chained node
/*16792*/   OPC_CaptureGlueInput,
/*16793*/   OPC_MoveChild, 1,
/*16795*/   OPC_CheckType, MVT::i32,
/*16797*/   OPC_Scope, 20, /*->16819*/ // 2 children in Scope
/*16799*/     OPC_CheckInteger, 0, 
/*16801*/     OPC_MoveParent,
/*16802*/     OPC_RecordChild2, // #1 = $dst
/*16803*/     OPC_MoveChild, 2,
/*16805*/     OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*16808*/     OPC_MoveParent,
/*16809*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*16811*/     OPC_EmitMergeInputChains1_0,
/*16812*/     OPC_MorphNodeTo, TARGET_VAL(Mips::BC1F), 0|OPFL_Chain|OPFL_GlueInput,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (MipsFPBrcond 0:i32, (bb:Other):$dst) - Complexity = 8
              // Dst: (BC1F (bb:Other):$dst)
/*16819*/   /*Scope*/ 20, /*->16840*/
/*16820*/     OPC_CheckInteger, 1, 
/*16822*/     OPC_MoveParent,
/*16823*/     OPC_RecordChild2, // #1 = $dst
/*16824*/     OPC_MoveChild, 2,
/*16826*/     OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*16829*/     OPC_MoveParent,
/*16830*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*16832*/     OPC_EmitMergeInputChains1_0,
/*16833*/     OPC_MorphNodeTo, TARGET_VAL(Mips::BC1T), 0|OPFL_Chain|OPFL_GlueInput,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (MipsFPBrcond 1:i32, (bb:Other):$dst) - Complexity = 8
              // Dst: (BC1T (bb:Other):$dst)
/*16840*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 37,  TARGET_VAL(MipsISD::SHILO),// ->16881
/*16844*/   OPC_RecordNode,   // #0 = 'MipsSHILO' chained node
/*16845*/   OPC_CaptureGlueInput,
/*16846*/   OPC_RecordChild1, // #1 = $shift
/*16847*/   OPC_Scope, 20, /*->16869*/ // 2 children in Scope
/*16849*/     OPC_MoveChild, 1,
/*16851*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*16854*/     OPC_CheckPredicate, 65, // Predicate_immSExt6
/*16856*/     OPC_MoveParent,
/*16857*/     OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*16859*/     OPC_EmitMergeInputChains1_0,
/*16860*/     OPC_EmitConvertToTarget, 1,
/*16862*/     OPC_MorphNodeTo, TARGET_VAL(Mips::SHILO_PSEUDO), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                  0/*#VTs*/, 1/*#Ops*/, 2, 
              // Src: (MipsSHILO (imm:i32)<<P:Predicate_immSExt6>>:$shift) - Complexity = 7
              // Dst: (SHILO_PSEUDO (imm:i32):$shift)
/*16869*/   /*Scope*/ 10, /*->16880*/
/*16870*/     OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*16872*/     OPC_EmitMergeInputChains1_0,
/*16873*/     OPC_MorphNodeTo, TARGET_VAL(Mips::SHILOV_PSEUDO), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (MipsSHILO CPURegs:i32:$rs) - Complexity = 3
              // Dst: (SHILOV_PSEUDO CPURegs:i32:$rs)
/*16880*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 16,  TARGET_VAL(ISD::CALLSEQ_START),// ->16900
/*16884*/   OPC_RecordNode,   // #0 = 'callseq_start' chained node
/*16885*/   OPC_RecordChild1, // #1 = $amt
/*16886*/   OPC_MoveChild, 1,
/*16888*/   OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*16891*/   OPC_MoveParent,
/*16892*/   OPC_EmitMergeInputChains1_0,
/*16893*/   OPC_MorphNodeTo, TARGET_VAL(Mips::ADJCALLSTACKDOWN), 0|OPFL_Chain|OPFL_GlueOutput,
                0/*#VTs*/, 1/*#Ops*/, 1, 
            // Src: (callseq_start (timm:i32):$amt) - Complexity = 6
            // Dst: (ADJCALLSTACKDOWN (timm:i32):$amt)
          /*SwitchOpcode*/ 20,  TARGET_VAL(MipsISD::Sync),// ->16923
/*16903*/   OPC_RecordNode,   // #0 = 'MipsSync' chained node
/*16904*/   OPC_RecordChild1, // #1 = $stype
/*16905*/   OPC_MoveChild, 1,
/*16907*/   OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*16910*/   OPC_MoveParent,
/*16911*/   OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*16913*/   OPC_EmitMergeInputChains1_0,
/*16914*/   OPC_EmitConvertToTarget, 1,
/*16916*/   OPC_MorphNodeTo, TARGET_VAL(Mips::SYNC), 0|OPFL_Chain,
                0/*#VTs*/, 1/*#Ops*/, 2, 
            // Src: (MipsSync (imm:i32):$stype) - Complexity = 6
            // Dst: (SYNC (imm:i32):$stype)
          /*SwitchOpcode*/ 98,  TARGET_VAL(MipsISD::JmpLink),// ->17024
/*16926*/   OPC_RecordNode,   // #0 = 'MipsJmpLink' chained node
/*16927*/   OPC_CaptureGlueInput,
/*16928*/   OPC_RecordChild1, // #1 = $target
/*16929*/   OPC_Scope, 52, /*->16983*/ // 3 children in Scope
/*16931*/     OPC_MoveChild, 1,
/*16933*/     OPC_SwitchOpcode /*3 cases */, 13,  TARGET_VAL(ISD::Constant),// ->16950
/*16937*/       OPC_MoveParent,
/*16938*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*16940*/       OPC_EmitMergeInputChains1_0,
/*16941*/       OPC_EmitConvertToTarget, 1,
/*16943*/       OPC_MorphNodeTo, TARGET_VAL(Mips::JAL), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    0/*#VTs*/, 1/*#Ops*/, 2, 
                // Src: (MipsJmpLink (imm:iPTR):$target) - Complexity = 6
                // Dst: (JAL (imm:iPTR):$target)
              /*SwitchOpcode*/ 13,  TARGET_VAL(ISD::TargetGlobalAddress),// ->16966
/*16953*/       OPC_CheckType, MVT::i32,
/*16955*/       OPC_MoveParent,
/*16956*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*16958*/       OPC_EmitMergeInputChains1_0,
/*16959*/       OPC_MorphNodeTo, TARGET_VAL(Mips::JAL), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    0/*#VTs*/, 1/*#Ops*/, 1, 
                // Src: (MipsJmpLink (tglobaladdr:i32):$dst) - Complexity = 6
                // Dst: (JAL (tglobaladdr:i32):$dst)
              /*SwitchOpcode*/ 13,  TARGET_VAL(ISD::TargetExternalSymbol),// ->16982
/*16969*/       OPC_CheckType, MVT::i32,
/*16971*/       OPC_MoveParent,
/*16972*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*16974*/       OPC_EmitMergeInputChains1_0,
/*16975*/       OPC_MorphNodeTo, TARGET_VAL(Mips::JAL), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    0/*#VTs*/, 1/*#Ops*/, 1, 
                // Src: (MipsJmpLink (texternalsym:i32):$dst) - Complexity = 6
                // Dst: (JAL (texternalsym:i32):$dst)
              0, // EndSwitchOpcode
/*16983*/   /*Scope*/ 26, /*->17010*/
/*16984*/     OPC_CheckChild1Type, MVT::i32,
/*16986*/     OPC_Scope, 10, /*->16998*/ // 2 children in Scope
/*16988*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*16990*/       OPC_EmitMergeInputChains1_0,
/*16991*/       OPC_MorphNodeTo, TARGET_VAL(Mips::JALR), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    0/*#VTs*/, 1/*#Ops*/, 1, 
                // Src: (MipsJmpLink CPURegs:i32:$rs) - Complexity = 3
                // Dst: (JALR CPURegs:i32:$rs)
/*16998*/     /*Scope*/ 10, /*->17009*/
/*16999*/       OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*17001*/       OPC_EmitMergeInputChains1_0,
/*17002*/       OPC_MorphNodeTo, TARGET_VAL(Mips::JumpLinkReg16), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    0/*#VTs*/, 1/*#Ops*/, 1, 
                // Src: (MipsJmpLink CPU16Regs:i32:$rs) - Complexity = 3
                // Dst: (JumpLinkReg16 CPU16Regs:i32:$rs)
/*17009*/     0, /*End of Scope*/
/*17010*/   /*Scope*/ 12, /*->17023*/
/*17011*/     OPC_CheckChild1Type, MVT::i64,
/*17013*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*17015*/     OPC_EmitMergeInputChains1_0,
/*17016*/     OPC_MorphNodeTo, TARGET_VAL(Mips::JALR64), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (MipsJmpLink CPU64Regs:i64:$rs) - Complexity = 3
              // Dst: (JALR64 CPU64Regs:i64:$rs)
/*17023*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 80,  TARGET_VAL(MipsISD::TailCall),// ->17107
/*17027*/   OPC_RecordNode,   // #0 = 'MipsTailCall' chained node
/*17028*/   OPC_CaptureGlueInput,
/*17029*/   OPC_RecordChild1, // #1 = $target
/*17030*/   OPC_Scope, 48, /*->17080*/ // 3 children in Scope
/*17032*/     OPC_MoveChild, 1,
/*17034*/     OPC_SwitchOpcode /*3 cases */, 13,  TARGET_VAL(ISD::Constant),// ->17051
/*17038*/       OPC_MoveParent,
/*17039*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*17041*/       OPC_EmitMergeInputChains1_0,
/*17042*/       OPC_EmitConvertToTarget, 1,
/*17044*/       OPC_MorphNodeTo, TARGET_VAL(Mips::TAILCALL), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic1,
                    0/*#VTs*/, 1/*#Ops*/, 2, 
                // Src: (MipsTailCall (imm:iPTR):$target) - Complexity = 6
                // Dst: (TAILCALL (imm:iPTR):$target)
              /*SwitchOpcode*/ 11,  TARGET_VAL(ISD::TargetGlobalAddress),// ->17065
/*17054*/       OPC_MoveParent,
/*17055*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*17057*/       OPC_EmitMergeInputChains1_0,
/*17058*/       OPC_MorphNodeTo, TARGET_VAL(Mips::TAILCALL), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic1,
                    0/*#VTs*/, 1/*#Ops*/, 1, 
                // Src: (MipsTailCall (tglobaladdr:iPTR):$dst) - Complexity = 6
                // Dst: (TAILCALL (tglobaladdr:iPTR):$dst)
              /*SwitchOpcode*/ 11,  TARGET_VAL(ISD::TargetExternalSymbol),// ->17079
/*17068*/       OPC_MoveParent,
/*17069*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*17071*/       OPC_EmitMergeInputChains1_0,
/*17072*/       OPC_MorphNodeTo, TARGET_VAL(Mips::TAILCALL), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic1,
                    0/*#VTs*/, 1/*#Ops*/, 1, 
                // Src: (MipsTailCall (texternalsym:iPTR):$dst) - Complexity = 6
                // Dst: (TAILCALL (texternalsym:iPTR):$dst)
              0, // EndSwitchOpcode
/*17080*/   /*Scope*/ 12, /*->17093*/
/*17081*/     OPC_CheckChild1Type, MVT::i32,
/*17083*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*17085*/     OPC_EmitMergeInputChains1_0,
/*17086*/     OPC_MorphNodeTo, TARGET_VAL(Mips::TAILCALL_R), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic1,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (MipsTailCall CPURegs:i32:$rs) - Complexity = 3
              // Dst: (TAILCALL_R CPURegs:i32:$rs)
/*17093*/   /*Scope*/ 12, /*->17106*/
/*17094*/     OPC_CheckChild1Type, MVT::i64,
/*17096*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*17098*/     OPC_EmitMergeInputChains1_0,
/*17099*/     OPC_MorphNodeTo, TARGET_VAL(Mips::TAILCALL64_R), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic1,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (MipsTailCall CPU64Regs:i64:$rs) - Complexity = 3
              // Dst: (TAILCALL64_R CPU64Regs:i64:$rs)
/*17106*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 71,  TARGET_VAL(MipsISD::FPCmp),// ->17181
/*17110*/   OPC_RecordChild0, // #0 = $fs
/*17111*/   OPC_Scope, 24, /*->17137*/ // 2 children in Scope
/*17113*/     OPC_CheckChild0Type, MVT::f32,
/*17115*/     OPC_RecordChild1, // #1 = $ft
/*17116*/     OPC_RecordChild2, // #2 = $cc
/*17117*/     OPC_MoveChild, 2,
/*17119*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*17122*/     OPC_MoveParent,
/*17123*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*17125*/     OPC_EmitConvertToTarget, 2,
/*17127*/     OPC_MorphNodeTo, TARGET_VAL(Mips::FCMP_S32), 0|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 3, 
              // Src: (MipsFPCmp FGR32:f32:$fs, FGR32:f32:$ft, (imm:i32):$cc) - Complexity = 6
              // Dst: (FCMP_S32:i32 FGR32:f32:$fs, FGR32:f32:$ft, (imm:i32):$cc)
/*17137*/   /*Scope*/ 42, /*->17180*/
/*17138*/     OPC_CheckChild0Type, MVT::f64,
/*17140*/     OPC_RecordChild1, // #1 = $ft
/*17141*/     OPC_RecordChild2, // #2 = $cc
/*17142*/     OPC_MoveChild, 2,
/*17144*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*17147*/     OPC_MoveParent,
/*17148*/     OPC_Scope, 14, /*->17164*/ // 2 children in Scope
/*17150*/       OPC_CheckPatternPredicate, 13, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*17152*/       OPC_EmitConvertToTarget, 2,
/*17154*/       OPC_MorphNodeTo, TARGET_VAL(Mips::FCMP_D32), 0|OPFL_GlueOutput,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 3, 
                // Src: (MipsFPCmp AFGR64:f64:$fs, AFGR64:f64:$ft, (imm:i32):$cc) - Complexity = 6
                // Dst: (FCMP_D32:i32 AFGR64:f64:$fs, AFGR64:f64:$ft, (imm:i32):$cc)
/*17164*/     /*Scope*/ 14, /*->17179*/
/*17165*/       OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*17167*/       OPC_EmitConvertToTarget, 2,
/*17169*/       OPC_MorphNodeTo, TARGET_VAL(Mips::FCMP_D64), 0|OPFL_GlueOutput,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 3, 
                // Src: (MipsFPCmp FGR64:f64:$fs, FGR64:f64:$ft, (imm:i32):$cc) - Complexity = 6
                // Dst: (FCMP_D64:i32 FGR64:f64:$fs, FGR64:f64:$ft, (imm:i32):$cc)
/*17179*/     0, /*End of Scope*/
/*17180*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 24,  TARGET_VAL(MipsISD::Ret),// ->17208
/*17184*/   OPC_RecordNode,   // #0 = 'MipsRet' chained node
/*17185*/   OPC_CaptureGlueInput,
/*17186*/   OPC_Scope, 9, /*->17197*/ // 2 children in Scope
/*17188*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*17190*/     OPC_EmitMergeInputChains1_0,
/*17191*/     OPC_MorphNodeTo, TARGET_VAL(Mips::RetRA), 0|OPFL_Chain|OPFL_GlueInput,
                  0/*#VTs*/, 0/*#Ops*/, 
              // Src: (MipsRet) - Complexity = 3
              // Dst: (RetRA)
/*17197*/   /*Scope*/ 9, /*->17207*/
/*17198*/     OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*17200*/     OPC_EmitMergeInputChains1_0,
/*17201*/     OPC_MorphNodeTo, TARGET_VAL(Mips::RetRA16), 0|OPFL_Chain|OPFL_GlueInput,
                  0/*#VTs*/, 0/*#Ops*/, 
              // Src: (MipsRet) - Complexity = 3
              // Dst: (RetRA16)
/*17207*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 43,  TARGET_VAL(ISD::BR),// ->17254
/*17211*/   OPC_RecordNode,   // #0 = 'br' chained node
/*17212*/   OPC_RecordChild1, // #1 = $target
/*17213*/   OPC_MoveChild, 1,
/*17215*/   OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*17218*/   OPC_MoveParent,
/*17219*/   OPC_Scope, 10, /*->17231*/ // 3 children in Scope
/*17221*/     OPC_CheckPatternPredicate, 25, // (TM.getRelocationModel() == Reloc::Static) && (Subtarget.hasStandardEncoding())
/*17223*/     OPC_EmitMergeInputChains1_0,
/*17224*/     OPC_MorphNodeTo, TARGET_VAL(Mips::J), 0|OPFL_Chain,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (br (bb:Other):$target) - Complexity = 3
              // Dst: (J (bb:Other):$target)
/*17231*/   /*Scope*/ 10, /*->17242*/
/*17232*/     OPC_CheckPatternPredicate, 26, // (TM.getRelocationModel() == Reloc::PIC_) && (Subtarget.hasStandardEncoding())
/*17234*/     OPC_EmitMergeInputChains1_0,
/*17235*/     OPC_MorphNodeTo, TARGET_VAL(Mips::B), 0|OPFL_Chain,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (br (bb:Other):$imm16) - Complexity = 3
              // Dst: (B (bb:Other):$imm16)
/*17242*/   /*Scope*/ 10, /*->17253*/
/*17243*/     OPC_CheckPatternPredicate, 27, // (TM.getRelocationModel() == Reloc::PIC_) && (Subtarget.inMips16Mode())
/*17245*/     OPC_EmitMergeInputChains1_0,
/*17246*/     OPC_MorphNodeTo, TARGET_VAL(Mips::BimmX16), 0|OPFL_Chain,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (br (bb:Other):$imm16) - Complexity = 3
              // Dst: (BimmX16 (bb:Other):$imm16)
/*17253*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 44,  TARGET_VAL(ISD::BRIND),// ->17301
/*17257*/   OPC_RecordNode,   // #0 = 'brind' chained node
/*17258*/   OPC_RecordChild1, // #1 = $rs
/*17259*/   OPC_Scope, 26, /*->17287*/ // 2 children in Scope
/*17261*/     OPC_CheckChild1Type, MVT::i32,
/*17263*/     OPC_Scope, 10, /*->17275*/ // 2 children in Scope
/*17265*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*17267*/       OPC_EmitMergeInputChains1_0,
/*17268*/       OPC_MorphNodeTo, TARGET_VAL(Mips::JR), 0|OPFL_Chain,
                    0/*#VTs*/, 1/*#Ops*/, 1, 
                // Src: (brind CPURegs:i32:$rs) - Complexity = 3
                // Dst: (JR CPURegs:i32:$rs)
/*17275*/     /*Scope*/ 10, /*->17286*/
/*17276*/       OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*17278*/       OPC_EmitMergeInputChains1_0,
/*17279*/       OPC_MorphNodeTo, TARGET_VAL(Mips::JrcRx16), 0|OPFL_Chain,
                    0/*#VTs*/, 1/*#Ops*/, 1, 
                // Src: (brind CPU16Regs:i32:$rs) - Complexity = 3
                // Dst: (JrcRx16 CPU16Regs:i32:$rs)
/*17286*/     0, /*End of Scope*/
/*17287*/   /*Scope*/ 12, /*->17300*/
/*17288*/     OPC_CheckChild1Type, MVT::i64,
/*17290*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*17292*/     OPC_EmitMergeInputChains1_0,
/*17293*/     OPC_MorphNodeTo, TARGET_VAL(Mips::JR64), 0|OPFL_Chain,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (brind CPU64Regs:i64:$rs) - Complexity = 3
              // Dst: (JR64 CPU64Regs:i64:$rs)
/*17300*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 48,  TARGET_VAL(MipsISD::DivRem),// ->17352
/*17304*/   OPC_RecordChild0, // #0 = $rs
/*17305*/   OPC_Scope, 29, /*->17336*/ // 2 children in Scope
/*17307*/     OPC_CheckChild0Type, MVT::i32,
/*17309*/     OPC_RecordChild1, // #1 = $rt
/*17310*/     OPC_Scope, 11, /*->17323*/ // 2 children in Scope
/*17312*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*17314*/       OPC_MorphNodeTo, TARGET_VAL(Mips::SDIV), 0|OPFL_GlueOutput,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (MipsDivRem CPURegs:i32:$rs, CPURegs:i32:$rt) - Complexity = 3
                // Dst: (SDIV:i32 CPURegs:i32:$rs, CPURegs:i32:$rt)
/*17323*/     /*Scope*/ 11, /*->17335*/
/*17324*/       OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*17326*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DivRxRy16), 0|OPFL_GlueOutput,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (MipsDivRem CPU16Regs:i32:$rx, CPU16Regs:i32:$ry) - Complexity = 3
                // Dst: (DivRxRy16:i32 CPU16Regs:i32:$rx, CPU16Regs:i32:$ry)
/*17335*/     0, /*End of Scope*/
/*17336*/   /*Scope*/ 14, /*->17351*/
/*17337*/     OPC_CheckChild0Type, MVT::i64,
/*17339*/     OPC_RecordChild1, // #1 = $rt
/*17340*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*17342*/     OPC_MorphNodeTo, TARGET_VAL(Mips::DSDIV), 0|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (MipsDivRem CPU64Regs:i64:$rs, CPU64Regs:i64:$rt) - Complexity = 3
              // Dst: (DSDIV:i64 CPU64Regs:i64:$rs, CPU64Regs:i64:$rt)
/*17351*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 48,  TARGET_VAL(MipsISD::DivRemU),// ->17403
/*17355*/   OPC_RecordChild0, // #0 = $rs
/*17356*/   OPC_Scope, 29, /*->17387*/ // 2 children in Scope
/*17358*/     OPC_CheckChild0Type, MVT::i32,
/*17360*/     OPC_RecordChild1, // #1 = $rt
/*17361*/     OPC_Scope, 11, /*->17374*/ // 2 children in Scope
/*17363*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*17365*/       OPC_MorphNodeTo, TARGET_VAL(Mips::UDIV), 0|OPFL_GlueOutput,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (MipsDivRemU CPURegs:i32:$rs, CPURegs:i32:$rt) - Complexity = 3
                // Dst: (UDIV:i32 CPURegs:i32:$rs, CPURegs:i32:$rt)
/*17374*/     /*Scope*/ 11, /*->17386*/
/*17375*/       OPC_CheckPatternPredicate, 2, // (Subtarget.inMips16Mode())
/*17377*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DivuRxRy16), 0|OPFL_GlueOutput,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (MipsDivRemU CPU16Regs:i32:$rx, CPU16Regs:i32:$ry) - Complexity = 3
                // Dst: (DivuRxRy16:i32 CPU16Regs:i32:$rx, CPU16Regs:i32:$ry)
/*17386*/     0, /*End of Scope*/
/*17387*/   /*Scope*/ 14, /*->17402*/
/*17388*/     OPC_CheckChild0Type, MVT::i64,
/*17390*/     OPC_RecordChild1, // #1 = $rt
/*17391*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*17393*/     OPC_MorphNodeTo, TARGET_VAL(Mips::DUDIV), 0|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (MipsDivRemU CPU64Regs:i64:$rs, CPU64Regs:i64:$rt) - Complexity = 3
              // Dst: (DUDIV:i64 CPU64Regs:i64:$rs, CPU64Regs:i64:$rt)
/*17402*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 22,  TARGET_VAL(MipsISD::MAdd),// ->17428
/*17406*/   OPC_CaptureGlueInput,
/*17407*/   OPC_RecordChild0, // #0 = $rs
/*17408*/   OPC_RecordChild1, // #1 = $rt
/*17409*/   OPC_RecordChild2, // #2 = physreg input LO
/*17410*/   OPC_RecordChild3, // #3 = physreg input HI
/*17411*/   OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*17413*/   OPC_EmitCopyToReg, 2, Mips::LO,
/*17416*/   OPC_EmitCopyToReg, 3, Mips::HI,
/*17419*/   OPC_MorphNodeTo, TARGET_VAL(Mips::MADD), 0|OPFL_GlueInput|OPFL_GlueOutput,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
            // Src: (MipsMAdd CPURegs:i32:$rs, CPURegs:i32:$rt, LO:i32, HI:i32) - Complexity = 3
            // Dst: (MADD:i32 CPURegs:i32:$rs, CPURegs:i32:$rt)
          /*SwitchOpcode*/ 22,  TARGET_VAL(MipsISD::MAddu),// ->17453
/*17431*/   OPC_CaptureGlueInput,
/*17432*/   OPC_RecordChild0, // #0 = $rs
/*17433*/   OPC_RecordChild1, // #1 = $rt
/*17434*/   OPC_RecordChild2, // #2 = physreg input LO
/*17435*/   OPC_RecordChild3, // #3 = physreg input HI
/*17436*/   OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*17438*/   OPC_EmitCopyToReg, 2, Mips::LO,
/*17441*/   OPC_EmitCopyToReg, 3, Mips::HI,
/*17444*/   OPC_MorphNodeTo, TARGET_VAL(Mips::MADDU), 0|OPFL_GlueInput|OPFL_GlueOutput,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
            // Src: (MipsMAddu CPURegs:i32:$rs, CPURegs:i32:$rt, LO:i32, HI:i32) - Complexity = 3
            // Dst: (MADDU:i32 CPURegs:i32:$rs, CPURegs:i32:$rt)
          /*SwitchOpcode*/ 22,  TARGET_VAL(MipsISD::MSub),// ->17478
/*17456*/   OPC_CaptureGlueInput,
/*17457*/   OPC_RecordChild0, // #0 = $rs
/*17458*/   OPC_RecordChild1, // #1 = $rt
/*17459*/   OPC_RecordChild2, // #2 = physreg input LO
/*17460*/   OPC_RecordChild3, // #3 = physreg input HI
/*17461*/   OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*17463*/   OPC_EmitCopyToReg, 2, Mips::LO,
/*17466*/   OPC_EmitCopyToReg, 3, Mips::HI,
/*17469*/   OPC_MorphNodeTo, TARGET_VAL(Mips::MSUB), 0|OPFL_GlueInput|OPFL_GlueOutput,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
            // Src: (MipsMSub CPURegs:i32:$rs, CPURegs:i32:$rt, LO:i32, HI:i32) - Complexity = 3
            // Dst: (MSUB:i32 CPURegs:i32:$rs, CPURegs:i32:$rt)
          /*SwitchOpcode*/ 22,  TARGET_VAL(MipsISD::MSubu),// ->17503
/*17481*/   OPC_CaptureGlueInput,
/*17482*/   OPC_RecordChild0, // #0 = $rs
/*17483*/   OPC_RecordChild1, // #1 = $rt
/*17484*/   OPC_RecordChild2, // #2 = physreg input LO
/*17485*/   OPC_RecordChild3, // #3 = physreg input HI
/*17486*/   OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*17488*/   OPC_EmitCopyToReg, 2, Mips::LO,
/*17491*/   OPC_EmitCopyToReg, 3, Mips::HI,
/*17494*/   OPC_MorphNodeTo, TARGET_VAL(Mips::MSUBU), 0|OPFL_GlueInput|OPFL_GlueOutput,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
            // Src: (MipsMSubu CPURegs:i32:$rs, CPURegs:i32:$rt, LO:i32, HI:i32) - Complexity = 3
            // Dst: (MSUBU:i32 CPURegs:i32:$rs, CPURegs:i32:$rt)
          /*SwitchOpcode*/ 15,  TARGET_VAL(MipsISD::MULSAQ_S_W_PH),// ->17521
/*17506*/   OPC_RecordNode,   // #0 = 'MipsMULSAQ_S_W_PH' chained node
/*17507*/   OPC_CaptureGlueInput,
/*17508*/   OPC_RecordChild1, // #1 = $rs
/*17509*/   OPC_RecordChild2, // #2 = $rt
/*17510*/   OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*17512*/   OPC_EmitMergeInputChains1_0,
/*17513*/   OPC_MorphNodeTo, TARGET_VAL(Mips::MULSAQ_S_W_PH_PSEUDO), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                0/*#VTs*/, 2/*#Ops*/, 1, 2, 
            // Src: (MipsMULSAQ_S_W_PH CPURegs:i32:$rs, CPURegs:i32:$rt) - Complexity = 3
            // Dst: (MULSAQ_S_W_PH_PSEUDO CPURegs:i32:$rs, CPURegs:i32:$rt)
          /*SwitchOpcode*/ 15,  TARGET_VAL(MipsISD::MAQ_S_W_PHL),// ->17539
/*17524*/   OPC_RecordNode,   // #0 = 'MipsMAQ_S_W_PHL' chained node
/*17525*/   OPC_CaptureGlueInput,
/*17526*/   OPC_RecordChild1, // #1 = $rs
/*17527*/   OPC_RecordChild2, // #2 = $rt
/*17528*/   OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*17530*/   OPC_EmitMergeInputChains1_0,
/*17531*/   OPC_MorphNodeTo, TARGET_VAL(Mips::MAQ_S_W_PHL_PSEUDO), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                0/*#VTs*/, 2/*#Ops*/, 1, 2, 
            // Src: (MipsMAQ_S_W_PHL CPURegs:i32:$rs, CPURegs:i32:$rt) - Complexity = 3
            // Dst: (MAQ_S_W_PHL_PSEUDO CPURegs:i32:$rs, CPURegs:i32:$rt)
          /*SwitchOpcode*/ 15,  TARGET_VAL(MipsISD::MAQ_S_W_PHR),// ->17557
/*17542*/   OPC_RecordNode,   // #0 = 'MipsMAQ_S_W_PHR' chained node
/*17543*/   OPC_CaptureGlueInput,
/*17544*/   OPC_RecordChild1, // #1 = $rs
/*17545*/   OPC_RecordChild2, // #2 = $rt
/*17546*/   OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*17548*/   OPC_EmitMergeInputChains1_0,
/*17549*/   OPC_MorphNodeTo, TARGET_VAL(Mips::MAQ_S_W_PHR_PSEUDO), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                0/*#VTs*/, 2/*#Ops*/, 1, 2, 
            // Src: (MipsMAQ_S_W_PHR CPURegs:i32:$rs, CPURegs:i32:$rt) - Complexity = 3
            // Dst: (MAQ_S_W_PHR_PSEUDO CPURegs:i32:$rs, CPURegs:i32:$rt)
          /*SwitchOpcode*/ 15,  TARGET_VAL(MipsISD::MAQ_SA_W_PHL),// ->17575
/*17560*/   OPC_RecordNode,   // #0 = 'MipsMAQ_SA_W_PHL' chained node
/*17561*/   OPC_CaptureGlueInput,
/*17562*/   OPC_RecordChild1, // #1 = $rs
/*17563*/   OPC_RecordChild2, // #2 = $rt
/*17564*/   OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*17566*/   OPC_EmitMergeInputChains1_0,
/*17567*/   OPC_MorphNodeTo, TARGET_VAL(Mips::MAQ_SA_W_PHL_PSEUDO), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                0/*#VTs*/, 2/*#Ops*/, 1, 2, 
            // Src: (MipsMAQ_SA_W_PHL CPURegs:i32:$rs, CPURegs:i32:$rt) - Complexity = 3
            // Dst: (MAQ_SA_W_PHL_PSEUDO CPURegs:i32:$rs, CPURegs:i32:$rt)
          /*SwitchOpcode*/ 15,  TARGET_VAL(MipsISD::MAQ_SA_W_PHR),// ->17593
/*17578*/   OPC_RecordNode,   // #0 = 'MipsMAQ_SA_W_PHR' chained node
/*17579*/   OPC_CaptureGlueInput,
/*17580*/   OPC_RecordChild1, // #1 = $rs
/*17581*/   OPC_RecordChild2, // #2 = $rt
/*17582*/   OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*17584*/   OPC_EmitMergeInputChains1_0,
/*17585*/   OPC_MorphNodeTo, TARGET_VAL(Mips::MAQ_SA_W_PHR_PSEUDO), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                0/*#VTs*/, 2/*#Ops*/, 1, 2, 
            // Src: (MipsMAQ_SA_W_PHR CPURegs:i32:$rs, CPURegs:i32:$rt) - Complexity = 3
            // Dst: (MAQ_SA_W_PHR_PSEUDO CPURegs:i32:$rs, CPURegs:i32:$rt)
          /*SwitchOpcode*/ 15,  TARGET_VAL(MipsISD::DPAU_H_QBL),// ->17611
/*17596*/   OPC_RecordNode,   // #0 = 'MipsDPAU_H_QBL' chained node
/*17597*/   OPC_CaptureGlueInput,
/*17598*/   OPC_RecordChild1, // #1 = $rs
/*17599*/   OPC_RecordChild2, // #2 = $rt
/*17600*/   OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*17602*/   OPC_EmitMergeInputChains1_0,
/*17603*/   OPC_MorphNodeTo, TARGET_VAL(Mips::DPAU_H_QBL_PSEUDO), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                0/*#VTs*/, 2/*#Ops*/, 1, 2, 
            // Src: (MipsDPAU_H_QBL CPURegs:i32:$rs, CPURegs:i32:$rt) - Complexity = 3
            // Dst: (DPAU_H_QBL_PSEUDO CPURegs:i32:$rs, CPURegs:i32:$rt)
          /*SwitchOpcode*/ 15,  TARGET_VAL(MipsISD::DPAU_H_QBR),// ->17629
/*17614*/   OPC_RecordNode,   // #0 = 'MipsDPAU_H_QBR' chained node
/*17615*/   OPC_CaptureGlueInput,
/*17616*/   OPC_RecordChild1, // #1 = $rs
/*17617*/   OPC_RecordChild2, // #2 = $rt
/*17618*/   OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*17620*/   OPC_EmitMergeInputChains1_0,
/*17621*/   OPC_MorphNodeTo, TARGET_VAL(Mips::DPAU_H_QBR_PSEUDO), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                0/*#VTs*/, 2/*#Ops*/, 1, 2, 
            // Src: (MipsDPAU_H_QBR CPURegs:i32:$rs, CPURegs:i32:$rt) - Complexity = 3
            // Dst: (DPAU_H_QBR_PSEUDO CPURegs:i32:$rs, CPURegs:i32:$rt)
          /*SwitchOpcode*/ 15,  TARGET_VAL(MipsISD::DPSU_H_QBL),// ->17647
/*17632*/   OPC_RecordNode,   // #0 = 'MipsDPSU_H_QBL' chained node
/*17633*/   OPC_CaptureGlueInput,
/*17634*/   OPC_RecordChild1, // #1 = $rs
/*17635*/   OPC_RecordChild2, // #2 = $rt
/*17636*/   OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*17638*/   OPC_EmitMergeInputChains1_0,
/*17639*/   OPC_MorphNodeTo, TARGET_VAL(Mips::DPSU_H_QBL_PSEUDO), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                0/*#VTs*/, 2/*#Ops*/, 1, 2, 
            // Src: (MipsDPSU_H_QBL CPURegs:i32:$rs, CPURegs:i32:$rt) - Complexity = 3
            // Dst: (DPSU_H_QBL_PSEUDO CPURegs:i32:$rs, CPURegs:i32:$rt)
          /*SwitchOpcode*/ 15,  TARGET_VAL(MipsISD::DPSU_H_QBR),// ->17665
/*17650*/   OPC_RecordNode,   // #0 = 'MipsDPSU_H_QBR' chained node
/*17651*/   OPC_CaptureGlueInput,
/*17652*/   OPC_RecordChild1, // #1 = $rs
/*17653*/   OPC_RecordChild2, // #2 = $rt
/*17654*/   OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*17656*/   OPC_EmitMergeInputChains1_0,
/*17657*/   OPC_MorphNodeTo, TARGET_VAL(Mips::DPSU_H_QBR_PSEUDO), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                0/*#VTs*/, 2/*#Ops*/, 1, 2, 
            // Src: (MipsDPSU_H_QBR CPURegs:i32:$rs, CPURegs:i32:$rt) - Complexity = 3
            // Dst: (DPSU_H_QBR_PSEUDO CPURegs:i32:$rs, CPURegs:i32:$rt)
          /*SwitchOpcode*/ 15,  TARGET_VAL(MipsISD::DPAQ_S_W_PH),// ->17683
/*17668*/   OPC_RecordNode,   // #0 = 'MipsDPAQ_S_W_PH' chained node
/*17669*/   OPC_CaptureGlueInput,
/*17670*/   OPC_RecordChild1, // #1 = $rs
/*17671*/   OPC_RecordChild2, // #2 = $rt
/*17672*/   OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*17674*/   OPC_EmitMergeInputChains1_0,
/*17675*/   OPC_MorphNodeTo, TARGET_VAL(Mips::DPAQ_S_W_PH_PSEUDO), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                0/*#VTs*/, 2/*#Ops*/, 1, 2, 
            // Src: (MipsDPAQ_S_W_PH CPURegs:i32:$rs, CPURegs:i32:$rt) - Complexity = 3
            // Dst: (DPAQ_S_W_PH_PSEUDO CPURegs:i32:$rs, CPURegs:i32:$rt)
          /*SwitchOpcode*/ 15,  TARGET_VAL(MipsISD::DPSQ_S_W_PH),// ->17701
/*17686*/   OPC_RecordNode,   // #0 = 'MipsDPSQ_S_W_PH' chained node
/*17687*/   OPC_CaptureGlueInput,
/*17688*/   OPC_RecordChild1, // #1 = $rs
/*17689*/   OPC_RecordChild2, // #2 = $rt
/*17690*/   OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*17692*/   OPC_EmitMergeInputChains1_0,
/*17693*/   OPC_MorphNodeTo, TARGET_VAL(Mips::DPSQ_S_W_PH_PSEUDO), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                0/*#VTs*/, 2/*#Ops*/, 1, 2, 
            // Src: (MipsDPSQ_S_W_PH CPURegs:i32:$rs, CPURegs:i32:$rt) - Complexity = 3
            // Dst: (DPSQ_S_W_PH_PSEUDO CPURegs:i32:$rs, CPURegs:i32:$rt)
          /*SwitchOpcode*/ 15,  TARGET_VAL(MipsISD::DPAQ_SA_L_W),// ->17719
/*17704*/   OPC_RecordNode,   // #0 = 'MipsDPAQ_SA_L_W' chained node
/*17705*/   OPC_CaptureGlueInput,
/*17706*/   OPC_RecordChild1, // #1 = $rs
/*17707*/   OPC_RecordChild2, // #2 = $rt
/*17708*/   OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*17710*/   OPC_EmitMergeInputChains1_0,
/*17711*/   OPC_MorphNodeTo, TARGET_VAL(Mips::DPAQ_SA_L_W_PSEUDO), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                0/*#VTs*/, 2/*#Ops*/, 1, 2, 
            // Src: (MipsDPAQ_SA_L_W CPURegs:i32:$rs, CPURegs:i32:$rt) - Complexity = 3
            // Dst: (DPAQ_SA_L_W_PSEUDO CPURegs:i32:$rs, CPURegs:i32:$rt)
          /*SwitchOpcode*/ 15,  TARGET_VAL(MipsISD::DPSQ_SA_L_W),// ->17737
/*17722*/   OPC_RecordNode,   // #0 = 'MipsDPSQ_SA_L_W' chained node
/*17723*/   OPC_CaptureGlueInput,
/*17724*/   OPC_RecordChild1, // #1 = $rs
/*17725*/   OPC_RecordChild2, // #2 = $rt
/*17726*/   OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*17728*/   OPC_EmitMergeInputChains1_0,
/*17729*/   OPC_MorphNodeTo, TARGET_VAL(Mips::DPSQ_SA_L_W_PSEUDO), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                0/*#VTs*/, 2/*#Ops*/, 1, 2, 
            // Src: (MipsDPSQ_SA_L_W CPURegs:i32:$rs, CPURegs:i32:$rt) - Complexity = 3
            // Dst: (DPSQ_SA_L_W_PSEUDO CPURegs:i32:$rs, CPURegs:i32:$rt)
          /*SwitchOpcode*/ 15,  TARGET_VAL(MipsISD::MULT),// ->17755
/*17740*/   OPC_RecordNode,   // #0 = 'MipsMULT' chained node
/*17741*/   OPC_CaptureGlueInput,
/*17742*/   OPC_RecordChild1, // #1 = $rs
/*17743*/   OPC_RecordChild2, // #2 = $rt
/*17744*/   OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*17746*/   OPC_EmitMergeInputChains1_0,
/*17747*/   OPC_MorphNodeTo, TARGET_VAL(Mips::MULT_DSP_PSEUDO), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                0/*#VTs*/, 2/*#Ops*/, 1, 2, 
            // Src: (MipsMULT CPURegs:i32:$rs, CPURegs:i32:$rt) - Complexity = 3
            // Dst: (MULT_DSP_PSEUDO CPURegs:i32:$rs, CPURegs:i32:$rt)
          /*SwitchOpcode*/ 15,  TARGET_VAL(MipsISD::MULTU),// ->17773
/*17758*/   OPC_RecordNode,   // #0 = 'MipsMULTU' chained node
/*17759*/   OPC_CaptureGlueInput,
/*17760*/   OPC_RecordChild1, // #1 = $rs
/*17761*/   OPC_RecordChild2, // #2 = $rt
/*17762*/   OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*17764*/   OPC_EmitMergeInputChains1_0,
/*17765*/   OPC_MorphNodeTo, TARGET_VAL(Mips::MULTU_DSP_PSEUDO), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                0/*#VTs*/, 2/*#Ops*/, 1, 2, 
            // Src: (MipsMULTU CPURegs:i32:$rs, CPURegs:i32:$rt) - Complexity = 3
            // Dst: (MULTU_DSP_PSEUDO CPURegs:i32:$rs, CPURegs:i32:$rt)
          /*SwitchOpcode*/ 15,  TARGET_VAL(MipsISD::MADD_DSP),// ->17791
/*17776*/   OPC_RecordNode,   // #0 = 'MipsMADD_DSP' chained node
/*17777*/   OPC_CaptureGlueInput,
/*17778*/   OPC_RecordChild1, // #1 = $rs
/*17779*/   OPC_RecordChild2, // #2 = $rt
/*17780*/   OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*17782*/   OPC_EmitMergeInputChains1_0,
/*17783*/   OPC_MorphNodeTo, TARGET_VAL(Mips::MADD_DSP_PSEUDO), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                0/*#VTs*/, 2/*#Ops*/, 1, 2, 
            // Src: (MipsMADD_DSP CPURegs:i32:$rs, CPURegs:i32:$rt) - Complexity = 3
            // Dst: (MADD_DSP_PSEUDO CPURegs:i32:$rs, CPURegs:i32:$rt)
          /*SwitchOpcode*/ 15,  TARGET_VAL(MipsISD::MADDU_DSP),// ->17809
/*17794*/   OPC_RecordNode,   // #0 = 'MipsMADDU_DSP' chained node
/*17795*/   OPC_CaptureGlueInput,
/*17796*/   OPC_RecordChild1, // #1 = $rs
/*17797*/   OPC_RecordChild2, // #2 = $rt
/*17798*/   OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*17800*/   OPC_EmitMergeInputChains1_0,
/*17801*/   OPC_MorphNodeTo, TARGET_VAL(Mips::MADDU_DSP_PSEUDO), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                0/*#VTs*/, 2/*#Ops*/, 1, 2, 
            // Src: (MipsMADDU_DSP CPURegs:i32:$rs, CPURegs:i32:$rt) - Complexity = 3
            // Dst: (MADDU_DSP_PSEUDO CPURegs:i32:$rs, CPURegs:i32:$rt)
          /*SwitchOpcode*/ 15,  TARGET_VAL(MipsISD::MSUB_DSP),// ->17827
/*17812*/   OPC_RecordNode,   // #0 = 'MipsMSUB_DSP' chained node
/*17813*/   OPC_CaptureGlueInput,
/*17814*/   OPC_RecordChild1, // #1 = $rs
/*17815*/   OPC_RecordChild2, // #2 = $rt
/*17816*/   OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*17818*/   OPC_EmitMergeInputChains1_0,
/*17819*/   OPC_MorphNodeTo, TARGET_VAL(Mips::MSUB_DSP_PSEUDO), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                0/*#VTs*/, 2/*#Ops*/, 1, 2, 
            // Src: (MipsMSUB_DSP CPURegs:i32:$rs, CPURegs:i32:$rt) - Complexity = 3
            // Dst: (MSUB_DSP_PSEUDO CPURegs:i32:$rs, CPURegs:i32:$rt)
          /*SwitchOpcode*/ 15,  TARGET_VAL(MipsISD::MSUBU_DSP),// ->17845
/*17830*/   OPC_RecordNode,   // #0 = 'MipsMSUBU_DSP' chained node
/*17831*/   OPC_CaptureGlueInput,
/*17832*/   OPC_RecordChild1, // #1 = $rs
/*17833*/   OPC_RecordChild2, // #2 = $rt
/*17834*/   OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*17836*/   OPC_EmitMergeInputChains1_0,
/*17837*/   OPC_MorphNodeTo, TARGET_VAL(Mips::MSUBU_DSP_PSEUDO), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                0/*#VTs*/, 2/*#Ops*/, 1, 2, 
            // Src: (MipsMSUBU_DSP CPURegs:i32:$rs, CPURegs:i32:$rt) - Complexity = 3
            // Dst: (MSUBU_DSP_PSEUDO CPURegs:i32:$rs, CPURegs:i32:$rt)
          /*SwitchOpcode*/ 13,  TARGET_VAL(MipsISD::MTHLIP),// ->17861
/*17848*/   OPC_RecordNode,   // #0 = 'MipsMTHLIP' chained node
/*17849*/   OPC_CaptureGlueInput,
/*17850*/   OPC_RecordChild1, // #1 = $rs
/*17851*/   OPC_CheckPatternPredicate, 8, // (Subtarget.hasDSP())
/*17853*/   OPC_EmitMergeInputChains1_0,
/*17854*/   OPC_MorphNodeTo, TARGET_VAL(Mips::MTHLIP_PSEUDO), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                0/*#VTs*/, 1/*#Ops*/, 1, 
            // Src: (MipsMTHLIP CPURegs:i32:$rs) - Complexity = 3
            // Dst: (MTHLIP_PSEUDO CPURegs:i32:$rs)
          /*SwitchOpcode*/ 15,  TARGET_VAL(MipsISD::DPA_W_PH),// ->17879
/*17864*/   OPC_RecordNode,   // #0 = 'MipsDPA_W_PH' chained node
/*17865*/   OPC_CaptureGlueInput,
/*17866*/   OPC_RecordChild1, // #1 = $rs
/*17867*/   OPC_RecordChild2, // #2 = $rt
/*17868*/   OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*17870*/   OPC_EmitMergeInputChains1_0,
/*17871*/   OPC_MorphNodeTo, TARGET_VAL(Mips::DPA_W_PH_PSEUDO), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                0/*#VTs*/, 2/*#Ops*/, 1, 2, 
            // Src: (MipsDPA_W_PH CPURegs:i32:$rs, CPURegs:i32:$rt) - Complexity = 3
            // Dst: (DPA_W_PH_PSEUDO CPURegs:i32:$rs, CPURegs:i32:$rt)
          /*SwitchOpcode*/ 15,  TARGET_VAL(MipsISD::DPS_W_PH),// ->17897
/*17882*/   OPC_RecordNode,   // #0 = 'MipsDPS_W_PH' chained node
/*17883*/   OPC_CaptureGlueInput,
/*17884*/   OPC_RecordChild1, // #1 = $rs
/*17885*/   OPC_RecordChild2, // #2 = $rt
/*17886*/   OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*17888*/   OPC_EmitMergeInputChains1_0,
/*17889*/   OPC_MorphNodeTo, TARGET_VAL(Mips::DPS_W_PH_PSEUDO), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                0/*#VTs*/, 2/*#Ops*/, 1, 2, 
            // Src: (MipsDPS_W_PH CPURegs:i32:$rs, CPURegs:i32:$rt) - Complexity = 3
            // Dst: (DPS_W_PH_PSEUDO CPURegs:i32:$rs, CPURegs:i32:$rt)
          /*SwitchOpcode*/ 15,  TARGET_VAL(MipsISD::DPAQX_S_W_PH),// ->17915
/*17900*/   OPC_RecordNode,   // #0 = 'MipsDPAQX_S_W_PH' chained node
/*17901*/   OPC_CaptureGlueInput,
/*17902*/   OPC_RecordChild1, // #1 = $rs
/*17903*/   OPC_RecordChild2, // #2 = $rt
/*17904*/   OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*17906*/   OPC_EmitMergeInputChains1_0,
/*17907*/   OPC_MorphNodeTo, TARGET_VAL(Mips::DPAQX_S_W_PH_PSEUDO), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                0/*#VTs*/, 2/*#Ops*/, 1, 2, 
            // Src: (MipsDPAQX_S_W_PH CPURegs:i32:$rs, CPURegs:i32:$rt) - Complexity = 3
            // Dst: (DPAQX_S_W_PH_PSEUDO CPURegs:i32:$rs, CPURegs:i32:$rt)
          /*SwitchOpcode*/ 15,  TARGET_VAL(MipsISD::DPAQX_SA_W_PH),// ->17933
/*17918*/   OPC_RecordNode,   // #0 = 'MipsDPAQX_SA_W_PH' chained node
/*17919*/   OPC_CaptureGlueInput,
/*17920*/   OPC_RecordChild1, // #1 = $rs
/*17921*/   OPC_RecordChild2, // #2 = $rt
/*17922*/   OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*17924*/   OPC_EmitMergeInputChains1_0,
/*17925*/   OPC_MorphNodeTo, TARGET_VAL(Mips::DPAQX_SA_W_PH_PSEUDO), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                0/*#VTs*/, 2/*#Ops*/, 1, 2, 
            // Src: (MipsDPAQX_SA_W_PH CPURegs:i32:$rs, CPURegs:i32:$rt) - Complexity = 3
            // Dst: (DPAQX_SA_W_PH_PSEUDO CPURegs:i32:$rs, CPURegs:i32:$rt)
          /*SwitchOpcode*/ 15,  TARGET_VAL(MipsISD::DPAX_W_PH),// ->17951
/*17936*/   OPC_RecordNode,   // #0 = 'MipsDPAX_W_PH' chained node
/*17937*/   OPC_CaptureGlueInput,
/*17938*/   OPC_RecordChild1, // #1 = $rs
/*17939*/   OPC_RecordChild2, // #2 = $rt
/*17940*/   OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*17942*/   OPC_EmitMergeInputChains1_0,
/*17943*/   OPC_MorphNodeTo, TARGET_VAL(Mips::DPAX_W_PH_PSEUDO), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                0/*#VTs*/, 2/*#Ops*/, 1, 2, 
            // Src: (MipsDPAX_W_PH CPURegs:i32:$rs, CPURegs:i32:$rt) - Complexity = 3
            // Dst: (DPAX_W_PH_PSEUDO CPURegs:i32:$rs, CPURegs:i32:$rt)
          /*SwitchOpcode*/ 15,  TARGET_VAL(MipsISD::DPSX_W_PH),// ->17969
/*17954*/   OPC_RecordNode,   // #0 = 'MipsDPSX_W_PH' chained node
/*17955*/   OPC_CaptureGlueInput,
/*17956*/   OPC_RecordChild1, // #1 = $rs
/*17957*/   OPC_RecordChild2, // #2 = $rt
/*17958*/   OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*17960*/   OPC_EmitMergeInputChains1_0,
/*17961*/   OPC_MorphNodeTo, TARGET_VAL(Mips::DPSX_W_PH_PSEUDO), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                0/*#VTs*/, 2/*#Ops*/, 1, 2, 
            // Src: (MipsDPSX_W_PH CPURegs:i32:$rs, CPURegs:i32:$rt) - Complexity = 3
            // Dst: (DPSX_W_PH_PSEUDO CPURegs:i32:$rs, CPURegs:i32:$rt)
          /*SwitchOpcode*/ 15,  TARGET_VAL(MipsISD::DPSQX_S_W_PH),// ->17987
/*17972*/   OPC_RecordNode,   // #0 = 'MipsDPSQX_S_W_PH' chained node
/*17973*/   OPC_CaptureGlueInput,
/*17974*/   OPC_RecordChild1, // #1 = $rs
/*17975*/   OPC_RecordChild2, // #2 = $rt
/*17976*/   OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*17978*/   OPC_EmitMergeInputChains1_0,
/*17979*/   OPC_MorphNodeTo, TARGET_VAL(Mips::DPSQX_S_W_PH_PSEUDO), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                0/*#VTs*/, 2/*#Ops*/, 1, 2, 
            // Src: (MipsDPSQX_S_W_PH CPURegs:i32:$rs, CPURegs:i32:$rt) - Complexity = 3
            // Dst: (DPSQX_S_W_PH_PSEUDO CPURegs:i32:$rs, CPURegs:i32:$rt)
          /*SwitchOpcode*/ 15,  TARGET_VAL(MipsISD::DPSQX_SA_W_PH),// ->18005
/*17990*/   OPC_RecordNode,   // #0 = 'MipsDPSQX_SA_W_PH' chained node
/*17991*/   OPC_CaptureGlueInput,
/*17992*/   OPC_RecordChild1, // #1 = $rs
/*17993*/   OPC_RecordChild2, // #2 = $rt
/*17994*/   OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*17996*/   OPC_EmitMergeInputChains1_0,
/*17997*/   OPC_MorphNodeTo, TARGET_VAL(Mips::DPSQX_SA_W_PH_PSEUDO), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                0/*#VTs*/, 2/*#Ops*/, 1, 2, 
            // Src: (MipsDPSQX_SA_W_PH CPURegs:i32:$rs, CPURegs:i32:$rt) - Complexity = 3
            // Dst: (DPSQX_SA_W_PH_PSEUDO CPURegs:i32:$rs, CPURegs:i32:$rt)
          /*SwitchOpcode*/ 15,  TARGET_VAL(MipsISD::MULSA_W_PH),// ->18023
/*18008*/   OPC_RecordNode,   // #0 = 'MipsMULSA_W_PH' chained node
/*18009*/   OPC_CaptureGlueInput,
/*18010*/   OPC_RecordChild1, // #1 = $rs
/*18011*/   OPC_RecordChild2, // #2 = $rt
/*18012*/   OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*18014*/   OPC_EmitMergeInputChains1_0,
/*18015*/   OPC_MorphNodeTo, TARGET_VAL(Mips::MULSA_W_PH_PSEUDO), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                0/*#VTs*/, 2/*#Ops*/, 1, 2, 
            // Src: (MipsMULSA_W_PH CPURegs:i32:$rs, CPURegs:i32:$rt) - Complexity = 3
            // Dst: (MULSA_W_PH_PSEUDO CPURegs:i32:$rs, CPURegs:i32:$rt)
          0, // EndSwitchOpcode
    0
  }; // Total Array size is 18025 bytes

  // Opcode Histogram:
  // #OPC_Scope                          = 242
  // #OPC_RecordNode                     = 69
  // #OPC_RecordChild                    = 706
  // #OPC_RecordMemRef                   = 18
  // #OPC_CaptureGlueInput               = 48
  // #OPC_MoveChild                      = 175
  // #OPC_MoveParent                     = 620
  // #OPC_CheckSame                      = 0
  // #OPC_CheckPatternPredicate          = 798
  // #OPC_CheckPredicate                 = 223
  // #OPC_CheckOpcode                    = 112
  // #OPC_SwitchOpcode                   = 14
  // #OPC_CheckType                      = 340
  // #OPC_SwitchType                     = 106
  // #OPC_CheckChildType                 = 74
  // #OPC_CheckInteger                   = 114
  // #OPC_CheckCondCode                  = 180
  // #OPC_CheckValueType                 = 3
  // #OPC_CheckComplexPat                = 108
  // #OPC_CheckAndImm                    = 0
  // #OPC_CheckOrImm                     = 0
  // #OPC_CheckFoldableChainNode         = 0
  // #OPC_EmitInteger                    = 28
  // #OPC_EmitStringInteger              = 9
  // #OPC_EmitRegister                   = 54
  // #OPC_EmitConvertToTarget            = 116
  // #OPC_EmitMergeInputChains           = 349
  // #OPC_EmitCopyToReg                  = 8
  // #OPC_EmitNode                       = 145
  // #OPC_EmitNodeXForm                  = 14
  // #OPC_MarkGlueResults                = 0
  // #OPC_CompleteMatch                  = 2
  // #OPC_MorphNodeTo                    = 802

  #undef TARGET_VAL
  return SelectCodeCommon(N, MatcherTable,sizeof(MatcherTable));
}

virtual bool CheckPatternPredicate(unsigned PredNo) const {
  switch (PredNo) {
  default: llvm_unreachable("Invalid predicate in table?");
  case 0: return (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding());
  case 1: return (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding());
  case 2: return (Subtarget.inMips16Mode());
  case 3: return (Subtarget.hasMips32r2Or64()) && (Subtarget.hasStandardEncoding());
  case 4: return (!Subtarget.isABI_N64()) && (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding());
  case 5: return (!Subtarget.isABI_N64()) && (!Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding());
  case 6: return (Subtarget.hasMips32r2()) && (!Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding());
  case 7: return (Subtarget.hasMips64()) && (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding());
  case 8: return (Subtarget.hasDSP());
  case 9: return (Subtarget.hasStandardEncoding());
  case 10: return (Subtarget.hasDSPR2());
  case 11: return (Subtarget.hasBitCount()) && (Subtarget.hasStandardEncoding());
  case 12: return (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding());
  case 13: return (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding());
  case 14: return (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding());
  case 15: return (Subtarget.hasMips32r2()) && (Subtarget.hasStandardEncoding());
  case 16: return (Subtarget.hasMips64r2()) && (Subtarget.hasStandardEncoding());
  case 17: return (Subtarget.hasSEInReg()) && (Subtarget.hasStandardEncoding());
  case 18: return (Subtarget.hasMips32()) && (Subtarget.hasStandardEncoding());
  case 19: return (Subtarget.hasMips32r2()) && (TM.Options.NoNaNsFPMath) && (Subtarget.hasStandardEncoding());
  case 20: return (Subtarget.hasMips32r2()) && (!Subtarget.isFP64bit()) && (TM.Options.NoNaNsFPMath) && (Subtarget.hasStandardEncoding());
  case 21: return (Subtarget.hasMips32r2()) && (Subtarget.isFP64bit()) && (TM.Options.NoNaNsFPMath) && (Subtarget.hasStandardEncoding());
  case 22: return (Subtarget.hasMips32r2()) && (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding());
  case 23: return (Subtarget.hasMips32r2()) && (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding());
  case 24: return (TM.Options.NoNaNsFPMath) && (Subtarget.hasStandardEncoding());
  case 25: return (TM.getRelocationModel() == Reloc::Static) && (Subtarget.hasStandardEncoding());
  case 26: return (TM.getRelocationModel() == Reloc::PIC_) && (Subtarget.hasStandardEncoding());
  case 27: return (TM.getRelocationModel() == Reloc::PIC_) && (Subtarget.inMips16Mode());
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
  case 5: { // Predicate_truncstorei32
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 6: { // Predicate_unindexedload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getAddressingMode() == ISD::UNINDEXED;

  }
  case 7: { // Predicate_sextload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::SEXTLOAD;

  }
  case 8: { // Predicate_sextloadi8
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 9: { // Predicate_zextload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::ZEXTLOAD;

  }
  case 10: { // Predicate_zextloadi8
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 11: { // Predicate_sextloadi16
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 12: { // Predicate_zextloadi16
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 13: { // Predicate_load
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::NON_EXTLOAD;

  }
  case 14: { // Predicate_extload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::EXTLOAD;

  }
  case 15: { // Predicate_extloadi8
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 16: { // Predicate_extloadi16
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 17: { // Predicate_extloadi1
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i1;

  }
  case 18: { // Predicate_sextloadi32
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 19: { // Predicate_zextloadi32
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 20: { // Predicate_extloadi32
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 21: { // Predicate_immZExt5
    int64_t Imm = cast<ConstantSDNode>(Node)->getSExtValue();
return Imm == (Imm & 0x1f);
  }
  case 22: { // Predicate_immZExt10
    int64_t Imm = cast<ConstantSDNode>(Node)->getSExtValue();
return isUInt<10>(Imm);
  }
  case 23: { // Predicate_immZExt3
    int64_t Imm = cast<ConstantSDNode>(Node)->getSExtValue();
return isUInt<3>(Imm);
  }
  case 24: { // Predicate_immZExt4
    int64_t Imm = cast<ConstantSDNode>(Node)->getSExtValue();
return isUInt<4>(Imm);
  }
  case 25: { // Predicate_immZExt2
    int64_t Imm = cast<ConstantSDNode>(Node)->getSExtValue();
return isUInt<2>(Imm);
  }
  case 26: { // Predicate_immZExt8
    int64_t Imm = cast<ConstantSDNode>(Node)->getSExtValue();
return isUInt<8>(Imm);
  }
  case 27: { // Predicate_immZExt16
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  if (N->getValueType(0) == MVT::i32)
    return (uint32_t)N->getZExtValue() == (unsigned short)N->getZExtValue();
  else
    return (uint64_t)N->getZExtValue() == (unsigned short)N->getZExtValue();

  }
  case 28: { // Predicate_immSExt16
    ConstantSDNode*N = cast<ConstantSDNode>(Node);
 return isInt<16>(N->getSExtValue()); 
  }
  case 29: { // Predicate_immZExt6
    int64_t Imm = cast<ConstantSDNode>(Node)->getSExtValue();
return Imm == (Imm & 0x3f);
  }
  case 30: { // Predicate_immLow16Zero
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  int64_t Val = N->getSExtValue();
  return isInt<32>(Val) && !(Val & 0xffff);

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
  case 55: { // Predicate_atomic_swap_8
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
  }
  case 56: { // Predicate_atomic_swap_16
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
  }
  case 57: { // Predicate_atomic_swap_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 58: { // Predicate_atomic_swap_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 59: { // Predicate_atomic_cmp_swap_8
    SDNode *N = Node;

  return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 60: { // Predicate_atomic_cmp_swap_16
    SDNode *N = Node;

  return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 61: { // Predicate_atomic_cmp_swap_32
    SDNode *N = Node;

  return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 62: { // Predicate_atomic_cmp_swap_64
    SDNode *N = Node;

  return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;

  }
  case 63: { // Predicate_fpimm0
    ConstantFPSDNode*N = cast<ConstantFPSDNode>(Node);

  return N->isExactlyValue(+0.0);

  }
  case 64: { // Predicate_fpimm0neg
    ConstantFPSDNode*N = cast<ConstantFPSDNode>(Node);

  return N->isExactlyValue(-0.0);

  }
  case 65: { // Predicate_immSExt6
    int64_t Imm = cast<ConstantSDNode>(Node)->getSExtValue();
return isInt<6>(Imm);
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
    return SelectAddr(Parent, N, Result[NextRes+0].first, Result[NextRes+1].first);
  case 1:
    Result.resize(NextRes+3);
    return SelectAddr16(Parent, N, Result[NextRes+0].first, Result[NextRes+1].first, Result[NextRes+2].first);
  }
}

virtual SDValue RunSDNodeXForm(SDValue V, unsigned XFormNo) {
  switch (XFormNo) {
  default: llvm_unreachable("Invalid xform # in table?");
  case 0: {  // LO16
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  return getImm(N, N->getZExtValue() & 0xFFFF);

  }
  case 1: {  // HI16
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  return getImm(N, (N->getZExtValue() >> 16) & 0xFFFF);

  }
  }
}

