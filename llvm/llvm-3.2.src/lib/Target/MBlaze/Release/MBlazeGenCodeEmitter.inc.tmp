/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Machine Code Emitter                                                       *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

uint64_t MBlazeCodeEmitter::getBinaryCodeForInstr(const MachineInstr &MI) const {
  static const uint64_t InstBits[] = {
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),	// ADD
    UINT64_C(16),	// ADDC
    UINT64_C(4),	// ADDI
    UINT64_C(20),	// ADDIC
    UINT64_C(12),	// ADDIK
    UINT64_C(4),	// ADDIK32
    UINT64_C(28),	// ADDIKC
    UINT64_C(8),	// ADDK
    UINT64_C(24),	// ADDKC
    UINT64_C(0),	// ADJCALLSTACKDOWN
    UINT64_C(0),	// ADJCALLSTACKUP
    UINT64_C(1048630),	// AGET
    UINT64_C(33554482),	// AGETD
    UINT64_C(33),	// AND
    UINT64_C(37),	// ANDI
    UINT64_C(49),	// ANDN
    UINT64_C(53),	// ANDNI
    UINT64_C(1114166),	// APUT
    UINT64_C(35651634),	// APUTD
    UINT64_C(57),	// BEQ
    UINT64_C(121),	// BEQD
    UINT64_C(61),	// BEQI
    UINT64_C(125),	// BEQID
    UINT64_C(1337),	// BGE
    UINT64_C(1401),	// BGED
    UINT64_C(1341),	// BGEI
    UINT64_C(1405),	// BGEID
    UINT64_C(313),	// BGT
    UINT64_C(377),	// BGTD
    UINT64_C(317),	// BGTI
    UINT64_C(381),	// BGTID
    UINT64_C(1593),	// BLE
    UINT64_C(1657),	// BLED
    UINT64_C(1597),	// BLEI
    UINT64_C(1661),	// BLEID
    UINT64_C(569),	// BLT
    UINT64_C(633),	// BLTD
    UINT64_C(573),	// BLTI
    UINT64_C(637),	// BLTID
    UINT64_C(1081),	// BNE
    UINT64_C(1145),	// BNED
    UINT64_C(1085),	// BNEI
    UINT64_C(1149),	// BNEID
    UINT64_C(25),	// BR
    UINT64_C(4121),	// BRA
    UINT64_C(6169),	// BRAD
    UINT64_C(4125),	// BRAI
    UINT64_C(6173),	// BRAID
    UINT64_C(14361),	// BRALD
    UINT64_C(14365),	// BRALID
    UINT64_C(2073),	// BRD
    UINT64_C(29),	// BRI
    UINT64_C(2077),	// BRID
    UINT64_C(12313),	// BRK
    UINT64_C(12317),	// BRKI
    UINT64_C(10265),	// BRLD
    UINT64_C(10269),	// BRLID
    UINT64_C(10269),	// BRLID32
    UINT64_C(2097186),	// BSLL
    UINT64_C(2097190),	// BSLLI
    UINT64_C(4194338),	// BSRA
    UINT64_C(4194342),	// BSRAI
    UINT64_C(34),	// BSRL
    UINT64_C(38),	// BSRLI
    UINT64_C(1310774),	// CAGET
    UINT64_C(41943090),	// CAGETD
    UINT64_C(1376310),	// CAPUT
    UINT64_C(44040242),	// CAPUTD
    UINT64_C(0),	// CAS32
    UINT64_C(262198),	// CGET
    UINT64_C(8388658),	// CGETD
    UINT64_C(117440521),	// CLZ
    UINT64_C(2147483688),	// CMP
    UINT64_C(3221225512),	// CMPU
    UINT64_C(327734),	// CPUT
    UINT64_C(10485810),	// CPUTD
    UINT64_C(536888349),	// DMEMBAR
    UINT64_C(3145782),	// EAGET
    UINT64_C(100663346),	// EAGETD
    UINT64_C(3407926),	// ECAGET
    UINT64_C(109051954),	// ECAGETD
    UINT64_C(2359350),	// ECGET
    UINT64_C(75497522),	// ECGETD
    UINT64_C(2097206),	// EGET
    UINT64_C(67108914),	// EGETD
    UINT64_C(26),	// FADD
    UINT64_C(71303194),	// FCMP_EQ
    UINT64_C(104857626),	// FCMP_GE
    UINT64_C(37748762),	// FCMP_GT
    UINT64_C(205520922),	// FCMP_LE
    UINT64_C(138412058),	// FCMP_LT
    UINT64_C(171966490),	// FCMP_NE
    UINT64_C(4194330),	// FCMP_UN
    UINT64_C(25165850),	// FDIV
    UINT64_C(12582938),	// FINT
    UINT64_C(20971546),	// FLT
    UINT64_C(8388634),	// FMUL
    UINT64_C(5),	// FORI
    UINT64_C(16777242),	// FRSUB
    UINT64_C(29360154),	// FSQRT
    UINT64_C(54),	// GET
    UINT64_C(50),	// GETD
    UINT64_C(18),	// IDIV
    UINT64_C(1073741842),	// IDIVU
    UINT64_C(536887325),	// IDMEMBAR
    UINT64_C(536887837),	// IMEMBAR
    UINT64_C(13),	// IMM
    UINT64_C(0),	// LAA32
    UINT64_C(0),	// LAD32
    UINT64_C(0),	// LAN32
    UINT64_C(0),	// LAO32
    UINT64_C(0),	// LAS32
    UINT64_C(0),	// LAX32
    UINT64_C(3),	// LBU
    UINT64_C(7),	// LBUI
    UINT64_C(4194307),	// LBUR
    UINT64_C(35),	// LHU
    UINT64_C(39),	// LHUI
    UINT64_C(4194339),	// LHUR
    UINT64_C(19),	// LW
    UINT64_C(19),	// LWF
    UINT64_C(23),	// LWFI
    UINT64_C(23),	// LWI
    UINT64_C(4194323),	// LWR
    UINT64_C(2097171),	// LWX
    UINT64_C(0),	// MEMBARRIER
    UINT64_C(65577),	// MFS
    UINT64_C(34857),	// MSRCLR
    UINT64_C(2089),	// MSRSET
    UINT64_C(196649),	// MTS
    UINT64_C(2),	// MUL
    UINT64_C(2147483650),	// MULH
    UINT64_C(1073741826),	// MULHSU
    UINT64_C(3221225474),	// MULHU
    UINT64_C(6),	// MULI
    UINT64_C(1179702),	// NAGET
    UINT64_C(37748786),	// NAGETD
    UINT64_C(1245238),	// NAPUT
    UINT64_C(39845938),	// NAPUTD
    UINT64_C(1441846),	// NCAGET
    UINT64_C(46137394),	// NCAGETD
    UINT64_C(1507382),	// NCAPUT
    UINT64_C(48234546),	// NCAPUTD
    UINT64_C(393270),	// NCGET
    UINT64_C(12582962),	// NCGETD
    UINT64_C(458806),	// NCPUT
    UINT64_C(14680114),	// NCPUTD
    UINT64_C(3276854),	// NEAGET
    UINT64_C(104857650),	// NEAGETD
    UINT64_C(3538998),	// NECAGET
    UINT64_C(113246258),	// NECAGETD
    UINT64_C(2490422),	// NECGET
    UINT64_C(79691826),	// NECGETD
    UINT64_C(2228278),	// NEGET
    UINT64_C(71303218),	// NEGETD
    UINT64_C(131126),	// NGET
    UINT64_C(4194354),	// NGETD
    UINT64_C(1),	// NOP
    UINT64_C(196662),	// NPUT
    UINT64_C(6291506),	// NPUTD
    UINT64_C(1),	// OR
    UINT64_C(5),	// ORI
    UINT64_C(5),	// ORI32
    UINT64_C(2097153),	// PCMPBF
    UINT64_C(2097169),	// PCMPEQ
    UINT64_C(2097201),	// PCMPNE
    UINT64_C(65590),	// PUT
    UINT64_C(2097202),	// PUTD
    UINT64_C(32),	// RSUB
    UINT64_C(48),	// RSUBC
    UINT64_C(36),	// RSUBI
    UINT64_C(52),	// RSUBIC
    UINT64_C(44),	// RSUBIK
    UINT64_C(60),	// RSUBIKC
    UINT64_C(40),	// RSUBK
    UINT64_C(56),	// RSUBKC
    UINT64_C(621),	// RTBD
    UINT64_C(365),	// RTED
    UINT64_C(1133),	// RTID
    UINT64_C(109),	// RTSD
    UINT64_C(11),	// SB
    UINT64_C(15),	// SBI
    UINT64_C(4194315),	// SBR
    UINT64_C(2248146953),	// SEXT16
    UINT64_C(100663305),	// SEXT8
    UINT64_C(43),	// SH
    UINT64_C(47),	// SHI
    UINT64_C(4194347),	// SHR
    UINT64_C(2147483657),	// SRA
    UINT64_C(2214592521),	// SRC
    UINT64_C(2181038089),	// SRL
    UINT64_C(27),	// SW
    UINT64_C(27),	// SWF
    UINT64_C(31),	// SWFI
    UINT64_C(31),	// SWI
    UINT64_C(0),	// SWP32
    UINT64_C(4194331),	// SWR
    UINT64_C(2097179),	// SWX
    UINT64_C(0),	// Select_CC
    UINT64_C(0),	// Select_FCC
    UINT64_C(0),	// ShiftL
    UINT64_C(0),	// ShiftRA
    UINT64_C(0),	// ShiftRL
    UINT64_C(1572918),	// TAGET
    UINT64_C(50331698),	// TAGETD
    UINT64_C(1638454),	// TAPUT
    UINT64_C(52428850),	// TAPUTD
    UINT64_C(1835062),	// TCAGET
    UINT64_C(58720306),	// TCAGETD
    UINT64_C(1900598),	// TCAPUT
    UINT64_C(60817458),	// TCAPUTD
    UINT64_C(786486),	// TCGET
    UINT64_C(25165874),	// TCGETD
    UINT64_C(852022),	// TCPUT
    UINT64_C(27263026),	// TCPUTD
    UINT64_C(3670070),	// TEAGET
    UINT64_C(117440562),	// TEAGETD
    UINT64_C(3932214),	// TECAGET
    UINT64_C(125829170),	// TECAGETD
    UINT64_C(2883638),	// TECGET
    UINT64_C(92274738),	// TECGETD
    UINT64_C(2621494),	// TEGET
    UINT64_C(83886130),	// TEGETD
    UINT64_C(524342),	// TGET
    UINT64_C(16777266),	// TGETD
    UINT64_C(1703990),	// TNAGET
    UINT64_C(54526002),	// TNAGETD
    UINT64_C(1769526),	// TNAPUT
    UINT64_C(56623154),	// TNAPUTD
    UINT64_C(1966134),	// TNCAGET
    UINT64_C(62914610),	// TNCAGETD
    UINT64_C(2031670),	// TNCAPUT
    UINT64_C(65011762),	// TNCAPUTD
    UINT64_C(917558),	// TNCGET
    UINT64_C(29360178),	// TNCGETD
    UINT64_C(983094),	// TNCPUT
    UINT64_C(31457330),	// TNCPUTD
    UINT64_C(3801142),	// TNEAGET
    UINT64_C(121634866),	// TNEAGETD
    UINT64_C(4063286),	// TNECAGET
    UINT64_C(130023474),	// TNECAGETD
    UINT64_C(3014710),	// TNECGET
    UINT64_C(96469042),	// TNECGETD
    UINT64_C(2752566),	// TNEGET
    UINT64_C(88080434),	// TNEGETD
    UINT64_C(655414),	// TNGET
    UINT64_C(20971570),	// TNGETD
    UINT64_C(720950),	// TNPUT
    UINT64_C(23068722),	// TNPUTD
    UINT64_C(589878),	// TPUT
    UINT64_C(18874418),	// TPUTD
    UINT64_C(637534217),	// WDC
    UINT64_C(1711276041),	// WDCC
    UINT64_C(771751945),	// WDCF
    UINT64_C(369098761),	// WIC
    UINT64_C(17),	// XOR
    UINT64_C(21),	// XORI
    UINT64_C(0)
  };
  const unsigned opcode = MI.getOpcode();
  uint64_t Value = InstBits[opcode];
  uint64_t op = 0;
  (void)op;  // suppress warning
  switch (opcode) {
    case MBlaze::ADJCALLSTACKDOWN:
    case MBlaze::ADJCALLSTACKUP:
    case MBlaze::CAS32:
    case MBlaze::DMEMBAR:
    case MBlaze::IDMEMBAR:
    case MBlaze::IMEMBAR:
    case MBlaze::IMM:
    case MBlaze::LAA32:
    case MBlaze::LAD32:
    case MBlaze::LAN32:
    case MBlaze::LAO32:
    case MBlaze::LAS32:
    case MBlaze::LAX32:
    case MBlaze::MEMBARRIER:
    case MBlaze::NOP:
    case MBlaze::SWP32:
    case MBlaze::Select_CC:
    case MBlaze::Select_FCC:
    case MBlaze::ShiftL:
    case MBlaze::ShiftRA:
    case MBlaze::ShiftRL: {
      break;
    }
    case MBlaze::TAPUT:
    case MBlaze::TCAPUT:
    case MBlaze::TCPUT:
    case MBlaze::TNAPUT:
    case MBlaze::TNCAPUT:
    case MBlaze::TNCPUT:
    case MBlaze::TNPUT:
    case MBlaze::TPUT: {
      // op: fslno
      op = getMachineOpValue(MI, MI.getOperand(0));
      Value |= (op & UINT64_C(1)) << 31;
      Value |= (op & UINT64_C(2)) << 29;
      Value |= (op & UINT64_C(4)) << 27;
      Value |= (op & UINT64_C(8)) << 25;
      break;
    }
    case MBlaze::BRAI:
    case MBlaze::BRAID:
    case MBlaze::BRI:
    case MBlaze::BRID: {
      // op: imm16
      op = getMachineOpValue(MI, MI.getOperand(0));
      Value |= (op & UINT64_C(1)) << 31;
      Value |= (op & UINT64_C(2)) << 29;
      Value |= (op & UINT64_C(4)) << 27;
      Value |= (op & UINT64_C(8)) << 25;
      Value |= (op & UINT64_C(16)) << 23;
      Value |= (op & UINT64_C(32)) << 21;
      Value |= (op & UINT64_C(64)) << 19;
      Value |= (op & UINT64_C(128)) << 17;
      Value |= (op & UINT64_C(256)) << 15;
      Value |= (op & UINT64_C(512)) << 13;
      Value |= (op & UINT64_C(1024)) << 11;
      Value |= (op & UINT64_C(2048)) << 9;
      Value |= (op & UINT64_C(4096)) << 7;
      Value |= (op & UINT64_C(8192)) << 5;
      Value |= (op & UINT64_C(16384)) << 3;
      Value |= (op & UINT64_C(32768)) << 1;
      break;
    }
    case MBlaze::APUT:
    case MBlaze::CAPUT:
    case MBlaze::CPUT:
    case MBlaze::NAPUT:
    case MBlaze::NCAPUT:
    case MBlaze::NCPUT:
    case MBlaze::NPUT:
    case MBlaze::PUT: {
      // op: ra
      op = getMachineOpValue(MI, MI.getOperand(0));
      Value |= (op & UINT64_C(1)) << 15;
      Value |= (op & UINT64_C(2)) << 13;
      Value |= (op & UINT64_C(4)) << 11;
      Value |= (op & UINT64_C(8)) << 9;
      Value |= (op & UINT64_C(16)) << 7;
      // op: fslno
      op = getMachineOpValue(MI, MI.getOperand(1));
      Value |= (op & UINT64_C(1)) << 31;
      Value |= (op & UINT64_C(2)) << 29;
      Value |= (op & UINT64_C(4)) << 27;
      Value |= (op & UINT64_C(8)) << 25;
      break;
    }
    case MBlaze::BEQI:
    case MBlaze::BEQID:
    case MBlaze::BGEI:
    case MBlaze::BGEID:
    case MBlaze::BGTI:
    case MBlaze::BGTID:
    case MBlaze::BLEI:
    case MBlaze::BLEID:
    case MBlaze::BLTI:
    case MBlaze::BLTID:
    case MBlaze::BNEI:
    case MBlaze::BNEID:
    case MBlaze::RTBD:
    case MBlaze::RTED:
    case MBlaze::RTID:
    case MBlaze::RTSD: {
      // op: ra
      op = getMachineOpValue(MI, MI.getOperand(0));
      Value |= (op & UINT64_C(1)) << 15;
      Value |= (op & UINT64_C(2)) << 13;
      Value |= (op & UINT64_C(4)) << 11;
      Value |= (op & UINT64_C(8)) << 9;
      Value |= (op & UINT64_C(16)) << 7;
      // op: imm16
      op = getMachineOpValue(MI, MI.getOperand(1));
      Value |= (op & UINT64_C(1)) << 31;
      Value |= (op & UINT64_C(2)) << 29;
      Value |= (op & UINT64_C(4)) << 27;
      Value |= (op & UINT64_C(8)) << 25;
      Value |= (op & UINT64_C(16)) << 23;
      Value |= (op & UINT64_C(32)) << 21;
      Value |= (op & UINT64_C(64)) << 19;
      Value |= (op & UINT64_C(128)) << 17;
      Value |= (op & UINT64_C(256)) << 15;
      Value |= (op & UINT64_C(512)) << 13;
      Value |= (op & UINT64_C(1024)) << 11;
      Value |= (op & UINT64_C(2048)) << 9;
      Value |= (op & UINT64_C(4096)) << 7;
      Value |= (op & UINT64_C(8192)) << 5;
      Value |= (op & UINT64_C(16384)) << 3;
      Value |= (op & UINT64_C(32768)) << 1;
      break;
    }
    case MBlaze::APUTD:
    case MBlaze::BEQ:
    case MBlaze::BEQD:
    case MBlaze::BGE:
    case MBlaze::BGED:
    case MBlaze::BGT:
    case MBlaze::BGTD:
    case MBlaze::BLE:
    case MBlaze::BLED:
    case MBlaze::BLT:
    case MBlaze::BLTD:
    case MBlaze::BNE:
    case MBlaze::BNED:
    case MBlaze::CAPUTD:
    case MBlaze::CPUTD:
    case MBlaze::NAPUTD:
    case MBlaze::NCAPUTD:
    case MBlaze::NCPUTD:
    case MBlaze::NPUTD:
    case MBlaze::PUTD:
    case MBlaze::WDC:
    case MBlaze::WDCC:
    case MBlaze::WDCF:
    case MBlaze::WIC: {
      // op: ra
      op = getMachineOpValue(MI, MI.getOperand(0));
      Value |= (op & UINT64_C(1)) << 15;
      Value |= (op & UINT64_C(2)) << 13;
      Value |= (op & UINT64_C(4)) << 11;
      Value |= (op & UINT64_C(8)) << 9;
      Value |= (op & UINT64_C(16)) << 7;
      // op: rb
      op = getMachineOpValue(MI, MI.getOperand(1));
      Value |= (op & UINT64_C(1)) << 20;
      Value |= (op & UINT64_C(2)) << 18;
      Value |= (op & UINT64_C(4)) << 16;
      Value |= (op & UINT64_C(8)) << 14;
      Value |= (op & UINT64_C(16)) << 12;
      break;
    }
    case MBlaze::BR:
    case MBlaze::BRA:
    case MBlaze::BRAD:
    case MBlaze::BRD:
    case MBlaze::TAPUTD:
    case MBlaze::TCAPUTD:
    case MBlaze::TCPUTD:
    case MBlaze::TNAPUTD:
    case MBlaze::TNCAPUTD:
    case MBlaze::TNCPUTD:
    case MBlaze::TNPUTD:
    case MBlaze::TPUTD: {
      // op: rb
      op = getMachineOpValue(MI, MI.getOperand(0));
      Value |= (op & UINT64_C(1)) << 20;
      Value |= (op & UINT64_C(2)) << 18;
      Value |= (op & UINT64_C(4)) << 16;
      Value |= (op & UINT64_C(8)) << 14;
      Value |= (op & UINT64_C(16)) << 12;
      break;
    }
    case MBlaze::AGET:
    case MBlaze::CAGET:
    case MBlaze::CGET:
    case MBlaze::EAGET:
    case MBlaze::ECAGET:
    case MBlaze::ECGET:
    case MBlaze::EGET:
    case MBlaze::GET:
    case MBlaze::NAGET:
    case MBlaze::NCAGET:
    case MBlaze::NCGET:
    case MBlaze::NEAGET:
    case MBlaze::NECAGET:
    case MBlaze::NECGET:
    case MBlaze::NEGET:
    case MBlaze::NGET:
    case MBlaze::TAGET:
    case MBlaze::TCAGET:
    case MBlaze::TCGET:
    case MBlaze::TEAGET:
    case MBlaze::TECAGET:
    case MBlaze::TECGET:
    case MBlaze::TEGET:
    case MBlaze::TGET:
    case MBlaze::TNAGET:
    case MBlaze::TNCAGET:
    case MBlaze::TNCGET:
    case MBlaze::TNEAGET:
    case MBlaze::TNECAGET:
    case MBlaze::TNECGET:
    case MBlaze::TNEGET:
    case MBlaze::TNGET: {
      // op: rd
      op = getMachineOpValue(MI, MI.getOperand(0));
      Value |= (op & UINT64_C(1)) << 10;
      Value |= (op & UINT64_C(2)) << 8;
      Value |= (op & UINT64_C(4)) << 6;
      Value |= (op & UINT64_C(8)) << 4;
      Value |= (op & UINT64_C(16)) << 2;
      // op: fslno
      op = getMachineOpValue(MI, MI.getOperand(1));
      Value |= (op & UINT64_C(1)) << 31;
      Value |= (op & UINT64_C(2)) << 29;
      Value |= (op & UINT64_C(4)) << 27;
      Value |= (op & UINT64_C(8)) << 25;
      break;
    }
    case MBlaze::MFS:
    case MBlaze::MTS: {
      // op: rd
      op = getMachineOpValue(MI, MI.getOperand(0));
      Value |= (op & UINT64_C(1)) << 10;
      Value |= (op & UINT64_C(2)) << 8;
      Value |= (op & UINT64_C(4)) << 6;
      Value |= (op & UINT64_C(8)) << 4;
      Value |= (op & UINT64_C(16)) << 2;
      // op: imm14
      op = getMachineOpValue(MI, MI.getOperand(1));
      Value |= (op & UINT64_C(1)) << 31;
      Value |= (op & UINT64_C(2)) << 29;
      Value |= (op & UINT64_C(4)) << 27;
      Value |= (op & UINT64_C(8)) << 25;
      Value |= (op & UINT64_C(16)) << 23;
      Value |= (op & UINT64_C(32)) << 21;
      Value |= (op & UINT64_C(64)) << 19;
      Value |= (op & UINT64_C(128)) << 17;
      Value |= (op & UINT64_C(256)) << 15;
      Value |= (op & UINT64_C(512)) << 13;
      Value |= (op & UINT64_C(1024)) << 11;
      Value |= (op & UINT64_C(2048)) << 9;
      Value |= (op & UINT64_C(4096)) << 7;
      Value |= (op & UINT64_C(8192)) << 5;
      break;
    }
    case MBlaze::MSRCLR:
    case MBlaze::MSRSET: {
      // op: rd
      op = getMachineOpValue(MI, MI.getOperand(0));
      Value |= (op & UINT64_C(1)) << 10;
      Value |= (op & UINT64_C(2)) << 8;
      Value |= (op & UINT64_C(4)) << 6;
      Value |= (op & UINT64_C(8)) << 4;
      Value |= (op & UINT64_C(16)) << 2;
      // op: imm15
      op = getMachineOpValue(MI, MI.getOperand(1));
      Value |= (op & UINT64_C(1)) << 31;
      Value |= (op & UINT64_C(2)) << 29;
      Value |= (op & UINT64_C(4)) << 27;
      Value |= (op & UINT64_C(8)) << 25;
      Value |= (op & UINT64_C(16)) << 23;
      Value |= (op & UINT64_C(32)) << 21;
      Value |= (op & UINT64_C(64)) << 19;
      Value |= (op & UINT64_C(128)) << 17;
      Value |= (op & UINT64_C(256)) << 15;
      Value |= (op & UINT64_C(512)) << 13;
      Value |= (op & UINT64_C(1024)) << 11;
      Value |= (op & UINT64_C(2048)) << 9;
      Value |= (op & UINT64_C(4096)) << 7;
      Value |= (op & UINT64_C(8192)) << 5;
      Value |= (op & UINT64_C(16384)) << 3;
      break;
    }
    case MBlaze::BRALID:
    case MBlaze::BRKI:
    case MBlaze::BRLID:
    case MBlaze::BRLID32: {
      // op: rd
      op = getMachineOpValue(MI, MI.getOperand(0));
      Value |= (op & UINT64_C(1)) << 10;
      Value |= (op & UINT64_C(2)) << 8;
      Value |= (op & UINT64_C(4)) << 6;
      Value |= (op & UINT64_C(8)) << 4;
      Value |= (op & UINT64_C(16)) << 2;
      // op: imm16
      op = getMachineOpValue(MI, MI.getOperand(1));
      Value |= (op & UINT64_C(1)) << 31;
      Value |= (op & UINT64_C(2)) << 29;
      Value |= (op & UINT64_C(4)) << 27;
      Value |= (op & UINT64_C(8)) << 25;
      Value |= (op & UINT64_C(16)) << 23;
      Value |= (op & UINT64_C(32)) << 21;
      Value |= (op & UINT64_C(64)) << 19;
      Value |= (op & UINT64_C(128)) << 17;
      Value |= (op & UINT64_C(256)) << 15;
      Value |= (op & UINT64_C(512)) << 13;
      Value |= (op & UINT64_C(1024)) << 11;
      Value |= (op & UINT64_C(2048)) << 9;
      Value |= (op & UINT64_C(4096)) << 7;
      Value |= (op & UINT64_C(8192)) << 5;
      Value |= (op & UINT64_C(16384)) << 3;
      Value |= (op & UINT64_C(32768)) << 1;
      break;
    }
    case MBlaze::CLZ:
    case MBlaze::FINT:
    case MBlaze::FLT:
    case MBlaze::FSQRT:
    case MBlaze::SEXT16:
    case MBlaze::SEXT8:
    case MBlaze::SRA:
    case MBlaze::SRC:
    case MBlaze::SRL: {
      // op: rd
      op = getMachineOpValue(MI, MI.getOperand(0));
      Value |= (op & UINT64_C(1)) << 10;
      Value |= (op & UINT64_C(2)) << 8;
      Value |= (op & UINT64_C(4)) << 6;
      Value |= (op & UINT64_C(8)) << 4;
      Value |= (op & UINT64_C(16)) << 2;
      // op: ra
      op = getMachineOpValue(MI, MI.getOperand(1));
      Value |= (op & UINT64_C(1)) << 15;
      Value |= (op & UINT64_C(2)) << 13;
      Value |= (op & UINT64_C(4)) << 11;
      Value |= (op & UINT64_C(8)) << 9;
      Value |= (op & UINT64_C(16)) << 7;
      break;
    }
    case MBlaze::ADDI:
    case MBlaze::ADDIC:
    case MBlaze::ADDIK:
    case MBlaze::ADDIK32:
    case MBlaze::ADDIKC:
    case MBlaze::ANDI:
    case MBlaze::ANDNI:
    case MBlaze::FORI:
    case MBlaze::LBUI:
    case MBlaze::LHUI:
    case MBlaze::LWFI:
    case MBlaze::LWI:
    case MBlaze::MULI:
    case MBlaze::ORI:
    case MBlaze::ORI32:
    case MBlaze::SBI:
    case MBlaze::SHI:
    case MBlaze::SWFI:
    case MBlaze::SWI:
    case MBlaze::XORI: {
      // op: rd
      op = getMachineOpValue(MI, MI.getOperand(0));
      Value |= (op & UINT64_C(1)) << 10;
      Value |= (op & UINT64_C(2)) << 8;
      Value |= (op & UINT64_C(4)) << 6;
      Value |= (op & UINT64_C(8)) << 4;
      Value |= (op & UINT64_C(16)) << 2;
      // op: ra
      op = getMachineOpValue(MI, MI.getOperand(1));
      Value |= (op & UINT64_C(1)) << 15;
      Value |= (op & UINT64_C(2)) << 13;
      Value |= (op & UINT64_C(4)) << 11;
      Value |= (op & UINT64_C(8)) << 9;
      Value |= (op & UINT64_C(16)) << 7;
      // op: imm16
      op = getMachineOpValue(MI, MI.getOperand(2));
      Value |= (op & UINT64_C(1)) << 31;
      Value |= (op & UINT64_C(2)) << 29;
      Value |= (op & UINT64_C(4)) << 27;
      Value |= (op & UINT64_C(8)) << 25;
      Value |= (op & UINT64_C(16)) << 23;
      Value |= (op & UINT64_C(32)) << 21;
      Value |= (op & UINT64_C(64)) << 19;
      Value |= (op & UINT64_C(128)) << 17;
      Value |= (op & UINT64_C(256)) << 15;
      Value |= (op & UINT64_C(512)) << 13;
      Value |= (op & UINT64_C(1024)) << 11;
      Value |= (op & UINT64_C(2048)) << 9;
      Value |= (op & UINT64_C(4096)) << 7;
      Value |= (op & UINT64_C(8192)) << 5;
      Value |= (op & UINT64_C(16384)) << 3;
      Value |= (op & UINT64_C(32768)) << 1;
      break;
    }
    case MBlaze::BSLLI:
    case MBlaze::BSRAI:
    case MBlaze::BSRLI: {
      // op: rd
      op = getMachineOpValue(MI, MI.getOperand(0));
      Value |= (op & UINT64_C(1)) << 10;
      Value |= (op & UINT64_C(2)) << 8;
      Value |= (op & UINT64_C(4)) << 6;
      Value |= (op & UINT64_C(8)) << 4;
      Value |= (op & UINT64_C(16)) << 2;
      // op: ra
      op = getMachineOpValue(MI, MI.getOperand(1));
      Value |= (op & UINT64_C(1)) << 15;
      Value |= (op & UINT64_C(2)) << 13;
      Value |= (op & UINT64_C(4)) << 11;
      Value |= (op & UINT64_C(8)) << 9;
      Value |= (op & UINT64_C(16)) << 7;
      // op: imm5
      op = getMachineOpValue(MI, MI.getOperand(2));
      Value |= (op & UINT64_C(1)) << 31;
      Value |= (op & UINT64_C(2)) << 29;
      Value |= (op & UINT64_C(4)) << 27;
      Value |= (op & UINT64_C(8)) << 25;
      Value |= (op & UINT64_C(16)) << 23;
      break;
    }
    case MBlaze::ADD:
    case MBlaze::ADDC:
    case MBlaze::ADDK:
    case MBlaze::ADDKC:
    case MBlaze::AND:
    case MBlaze::ANDN:
    case MBlaze::BSLL:
    case MBlaze::BSRA:
    case MBlaze::BSRL:
    case MBlaze::CMP:
    case MBlaze::CMPU:
    case MBlaze::FADD:
    case MBlaze::FCMP_EQ:
    case MBlaze::FCMP_GE:
    case MBlaze::FCMP_GT:
    case MBlaze::FCMP_LE:
    case MBlaze::FCMP_LT:
    case MBlaze::FCMP_NE:
    case MBlaze::FCMP_UN:
    case MBlaze::FDIV:
    case MBlaze::FMUL:
    case MBlaze::LBU:
    case MBlaze::LBUR:
    case MBlaze::LHU:
    case MBlaze::LHUR:
    case MBlaze::LW:
    case MBlaze::LWF:
    case MBlaze::LWR:
    case MBlaze::LWX:
    case MBlaze::MUL:
    case MBlaze::MULH:
    case MBlaze::MULHSU:
    case MBlaze::MULHU:
    case MBlaze::OR:
    case MBlaze::PCMPBF:
    case MBlaze::PCMPEQ:
    case MBlaze::PCMPNE:
    case MBlaze::SB:
    case MBlaze::SBR:
    case MBlaze::SH:
    case MBlaze::SHR:
    case MBlaze::SW:
    case MBlaze::SWF:
    case MBlaze::SWR:
    case MBlaze::SWX:
    case MBlaze::XOR: {
      // op: rd
      op = getMachineOpValue(MI, MI.getOperand(0));
      Value |= (op & UINT64_C(1)) << 10;
      Value |= (op & UINT64_C(2)) << 8;
      Value |= (op & UINT64_C(4)) << 6;
      Value |= (op & UINT64_C(8)) << 4;
      Value |= (op & UINT64_C(16)) << 2;
      // op: ra
      op = getMachineOpValue(MI, MI.getOperand(1));
      Value |= (op & UINT64_C(1)) << 15;
      Value |= (op & UINT64_C(2)) << 13;
      Value |= (op & UINT64_C(4)) << 11;
      Value |= (op & UINT64_C(8)) << 9;
      Value |= (op & UINT64_C(16)) << 7;
      // op: rb
      op = getMachineOpValue(MI, MI.getOperand(2));
      Value |= (op & UINT64_C(1)) << 20;
      Value |= (op & UINT64_C(2)) << 18;
      Value |= (op & UINT64_C(4)) << 16;
      Value |= (op & UINT64_C(8)) << 14;
      Value |= (op & UINT64_C(16)) << 12;
      break;
    }
    case MBlaze::AGETD:
    case MBlaze::BRALD:
    case MBlaze::BRK:
    case MBlaze::BRLD:
    case MBlaze::CAGETD:
    case MBlaze::CGETD:
    case MBlaze::EAGETD:
    case MBlaze::ECAGETD:
    case MBlaze::ECGETD:
    case MBlaze::EGETD:
    case MBlaze::GETD:
    case MBlaze::NAGETD:
    case MBlaze::NCAGETD:
    case MBlaze::NCGETD:
    case MBlaze::NEAGETD:
    case MBlaze::NECAGETD:
    case MBlaze::NECGETD:
    case MBlaze::NEGETD:
    case MBlaze::NGETD:
    case MBlaze::TAGETD:
    case MBlaze::TCAGETD:
    case MBlaze::TCGETD:
    case MBlaze::TEAGETD:
    case MBlaze::TECAGETD:
    case MBlaze::TECGETD:
    case MBlaze::TEGETD:
    case MBlaze::TGETD:
    case MBlaze::TNAGETD:
    case MBlaze::TNCAGETD:
    case MBlaze::TNCGETD:
    case MBlaze::TNEAGETD:
    case MBlaze::TNECAGETD:
    case MBlaze::TNECGETD:
    case MBlaze::TNEGETD:
    case MBlaze::TNGETD: {
      // op: rd
      op = getMachineOpValue(MI, MI.getOperand(0));
      Value |= (op & UINT64_C(1)) << 10;
      Value |= (op & UINT64_C(2)) << 8;
      Value |= (op & UINT64_C(4)) << 6;
      Value |= (op & UINT64_C(8)) << 4;
      Value |= (op & UINT64_C(16)) << 2;
      // op: rb
      op = getMachineOpValue(MI, MI.getOperand(1));
      Value |= (op & UINT64_C(1)) << 20;
      Value |= (op & UINT64_C(2)) << 18;
      Value |= (op & UINT64_C(4)) << 16;
      Value |= (op & UINT64_C(8)) << 14;
      Value |= (op & UINT64_C(16)) << 12;
      break;
    }
    case MBlaze::RSUBI:
    case MBlaze::RSUBIC:
    case MBlaze::RSUBIK:
    case MBlaze::RSUBIKC: {
      // op: rrd
      op = getMachineOpValue(MI, MI.getOperand(0));
      Value |= (op & UINT64_C(1)) << 10;
      Value |= (op & UINT64_C(2)) << 8;
      Value |= (op & UINT64_C(4)) << 6;
      Value |= (op & UINT64_C(8)) << 4;
      Value |= (op & UINT64_C(16)) << 2;
      // op: rimm16
      op = getMachineOpValue(MI, MI.getOperand(1));
      Value |= (op & UINT64_C(1)) << 31;
      Value |= (op & UINT64_C(2)) << 29;
      Value |= (op & UINT64_C(4)) << 27;
      Value |= (op & UINT64_C(8)) << 25;
      Value |= (op & UINT64_C(16)) << 23;
      Value |= (op & UINT64_C(32)) << 21;
      Value |= (op & UINT64_C(64)) << 19;
      Value |= (op & UINT64_C(128)) << 17;
      Value |= (op & UINT64_C(256)) << 15;
      Value |= (op & UINT64_C(512)) << 13;
      Value |= (op & UINT64_C(1024)) << 11;
      Value |= (op & UINT64_C(2048)) << 9;
      Value |= (op & UINT64_C(4096)) << 7;
      Value |= (op & UINT64_C(8192)) << 5;
      Value |= (op & UINT64_C(16384)) << 3;
      Value |= (op & UINT64_C(32768)) << 1;
      // op: rra
      op = getMachineOpValue(MI, MI.getOperand(2));
      Value |= (op & UINT64_C(1)) << 15;
      Value |= (op & UINT64_C(2)) << 13;
      Value |= (op & UINT64_C(4)) << 11;
      Value |= (op & UINT64_C(8)) << 9;
      Value |= (op & UINT64_C(16)) << 7;
      break;
    }
    case MBlaze::FRSUB:
    case MBlaze::IDIV:
    case MBlaze::IDIVU:
    case MBlaze::RSUB:
    case MBlaze::RSUBC:
    case MBlaze::RSUBK:
    case MBlaze::RSUBKC: {
      // op: rrd
      op = getMachineOpValue(MI, MI.getOperand(0));
      Value |= (op & UINT64_C(1)) << 10;
      Value |= (op & UINT64_C(2)) << 8;
      Value |= (op & UINT64_C(4)) << 6;
      Value |= (op & UINT64_C(8)) << 4;
      Value |= (op & UINT64_C(16)) << 2;
      // op: rrb
      op = getMachineOpValue(MI, MI.getOperand(1));
      Value |= (op & UINT64_C(1)) << 20;
      Value |= (op & UINT64_C(2)) << 18;
      Value |= (op & UINT64_C(4)) << 16;
      Value |= (op & UINT64_C(8)) << 14;
      Value |= (op & UINT64_C(16)) << 12;
      // op: rra
      op = getMachineOpValue(MI, MI.getOperand(2));
      Value |= (op & UINT64_C(1)) << 15;
      Value |= (op & UINT64_C(2)) << 13;
      Value |= (op & UINT64_C(4)) << 11;
      Value |= (op & UINT64_C(8)) << 9;
      Value |= (op & UINT64_C(16)) << 7;
      break;
    }
  default:
    std::string msg;
    raw_string_ostream Msg(msg);
    Msg << "Not supported instr: " << MI;
    report_fatal_error(Msg.str());
  }
  return Value;
}

