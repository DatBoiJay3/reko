// test.h
// Generated by decompiling test
// using Reko decompiler version 0.7.2.0.

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (FFFFFFFF code tFFFFFFFF) (10000 Eq_64 t10000) (10A60 word32 dw10A60) (10AA4 word32 dw10AA4) (10AA8 (ptr Eq_64) ptr10AA8) (10AB0 int32 dw10AB0) (10ABC (ptr word32) ptr10ABC) (10AD4 (ptr code) ptr10AD4) (10AE0 (ptr code) ptr10AE0) (10AE4 (ptr code) ptr10AE4) (10AE8 (ptr code) ptr10AE8))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (struct "Eq_2" (104F4 ptr32 ptr104F4))
	T_2 (in ra : (ptr Eq_2))
	T_243 (in ra : (ptr Eq_2))
Eq_21: (struct "Eq_21" (104D0 ptr32 ptr104D0))
	T_21 (in ra_28 : (ptr Eq_21))
Eq_41: (struct "Eq_41" (104C0 (ptr code) ptr104C0))
	T_41 (in ra : (ptr Eq_41))
Eq_64: (struct "Eq_64" 0001 (A60 (ptr code) ptr0A60) (AF0 byte b0AF0) (AF4 word32 dw0AF4))
	T_64 (in Mem0[0x00010AA8:word32] : word32)
	T_83 (in Mem0[0x00010AA8:word32] : word32)
	T_109 (in r19_10 : (ptr Eq_64))
	T_111 (in Mem0[0x00010AA8:word32] : word32)
	T_123 (in r17_52 : (ptr Eq_64))
	T_125 (in Mem0[0x00010AA8:word32] : word32)
	T_126 (in r2_50 : (ptr Eq_64))
	T_128 (in Mem0[0x00010AA8:word32] : word32)
	T_278 (in r3_7 : (ptr Eq_64))
	T_280 (in Mem0[0x00010AA8:word32] : word32)
Eq_87: (union "Eq_87" (int32 u0) (uint32 u1))
	T_87 (in r2_12 : Eq_87)
	T_91 (in r5_10 >> 0x02 >> 0x1F : word32)
Eq_89: (union "Eq_89" (int32 u0) (uint32 u1))
	T_89 (in r5_10 >> 0x02 : word32)
Eq_129: (union "Eq_129" (int32 u0) (uint32 u1))
	T_129 (in r2_56 : Eq_129)
	T_132 (in Mem0[r17_52 + 0x00000AF4:word32] : word32)
	T_133 (in r16_58 : Eq_129)
	T_142 (in (globals->dw10AB0 - (r2_50 + 2664) >> 0x02) + -1 : word32)
	T_182 (in r16_90 : Eq_129)
	T_188 (in Mem80[r17_52 + 0x00000AF4:word32] : word32)
Eq_193: (fn void ())
	T_193 (in deregister_tm_clones : ptr32)
	T_194 (in signature of deregister_tm_clones : void)
Eq_200: (fn void ())
	T_200 (in register_tm_clones : ptr32)
	T_201 (in signature of register_tm_clones : void)
Eq_205: (fn (ptr void) ((ptr void), int32, Eq_209))
	T_205 (in memset : ptr32)
	T_206 (in signature of memset : void)
Eq_209: size_t
	T_209 (in num : size_t)
	T_212 (in r6_18 : word32)
	T_216 (in num : size_t)
	T_217 (in size : size_t)
	T_218 (in r4_35 : word32)
	T_219 (in r5_34 : word32)
Eq_214: (fn (ptr void) (Eq_209, Eq_209))
	T_214 (in calloc : ptr32)
	T_215 (in signature of calloc : void)
Eq_221: (union "Eq_221" (byte u0) (word32 u1))
	T_221 (in dwLoc14 : word32)
	T_225 (in Mem54[r2_45 + 0x00000000:word32] : word32)
	T_232 (in 0x0C : byte)
	T_235 (in Mem61[r2_45 + 0x00000000:byte] : byte)
	T_241 (in r3_52 : Eq_221)
Eq_222: (struct "Eq_222" (0 Eq_221 t0000) (1 word32 dw0001) (4 byte b0004))
	T_222 (in r2_45 : word32)
	T_240 (in r2_50 : (ptr Eq_222))
	T_242 (in r2_62 : (ptr Eq_222))
Eq_245: (fn void ((ptr Eq_2)))
	T_245 (in _init : ptr32)
	T_246 (in signature of _init : void)
Eq_300: (struct "Eq_300" (10084 ptr32 ptr10084))
	T_300 (in ra : (ptr Eq_300))
// Type Variables ////////////
globals_t: (in globals : (ptr (struct "Globals")))
  Class: Eq_1
  DataType: (ptr Eq_1)
  OrigDataType: (ptr (struct "Globals"))
T_2: (in ra : (ptr Eq_2))
  Class: Eq_2
  DataType: (ptr Eq_2)
  OrigDataType: (ptr (struct (104F4 T_26 t104F4)))
T_3: (in r2_11 : (ptr code))
  Class: Eq_3
  DataType: (ptr code)
  OrigDataType: word32
T_4: (in 0x00010AE0 : word32)
  Class: Eq_4
  DataType: (ptr (ptr code))
  OrigDataType: (ptr (struct (0 T_5 t0000)))
T_5: (in Mem0[0x00010AE0:word32] : word32)
  Class: Eq_3
  DataType: (ptr code)
  OrigDataType: word32
T_6: (in 0x00000000 : word32)
  Class: Eq_3
  DataType: (ptr code)
  OrigDataType: word32
T_7: (in r2_11 == null : bool)
  Class: Eq_7
  DataType: bool
  OrigDataType: bool
T_8: (in true : bool)
  Class: Eq_8
  DataType: bool
  OrigDataType: bool
T_9: (in r25_12 : (ptr code))
  Class: Eq_3
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_10: (in 0x00010AE0 : word32)
  Class: Eq_10
  DataType: (ptr (ptr code))
  OrigDataType: (ptr (struct (0 T_11 t0000)))
T_11: (in Mem0[0x00010AE0:word32] : word32)
  Class: Eq_3
  DataType: (ptr code)
  OrigDataType: word32
T_12: (in sp_13 : word32)
  Class: Eq_12
  DataType: word32
  OrigDataType: word32
T_13: (in r28_14 : word32)
  Class: Eq_13
  DataType: word32
  OrigDataType: word32
T_14: (in r25_15 : word32)
  Class: Eq_14
  DataType: word32
  OrigDataType: word32
T_15: (in ra_16 : word32)
  Class: Eq_15
  DataType: word32
  OrigDataType: word32
T_16: (in r2_17 : word32)
  Class: Eq_16
  DataType: word32
  OrigDataType: word32
T_17: (in None_18 : bcuiposr0)
  Class: Eq_17
  DataType: bcuiposr0
  OrigDataType: bcuiposr0
T_18: (in sp_25 : word32)
  Class: Eq_18
  DataType: word32
  OrigDataType: word32
T_19: (in r28_26 : word32)
  Class: Eq_19
  DataType: word32
  OrigDataType: word32
T_20: (in r25_27 : word32)
  Class: Eq_20
  DataType: word32
  OrigDataType: word32
T_21: (in ra_28 : (ptr Eq_21))
  Class: Eq_21
  DataType: (ptr Eq_21)
  OrigDataType: (ptr (struct (104D0 T_38 t104D0)))
T_22: (in r2_29 : word32)
  Class: Eq_22
  DataType: word32
  OrigDataType: word32
T_23: (in None_30 : bcuiposr0)
  Class: Eq_23
  DataType: bcuiposr0
  OrigDataType: bcuiposr0
T_24: (in 0x000104F4 : word32)
  Class: Eq_24
  DataType: word32
  OrigDataType: word32
T_25: (in ra + 0x000104F4 : word32)
  Class: Eq_25
  DataType: word32
  OrigDataType: word32
T_26: (in Mem0[ra + 0x000104F4:word32] : word32)
  Class: Eq_26
  DataType: ptr32
  OrigDataType: ptr32
T_27: (in 2004 : int32)
  Class: Eq_27
  DataType: int32
  OrigDataType: int32
T_28: (in ra->ptr104F4 + 2004 : word32)
  Class: Eq_28
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_29: (in true : bool)
  Class: Eq_29
  DataType: bool
  OrigDataType: bool
T_30: (in sp_36 : word32)
  Class: Eq_30
  DataType: word32
  OrigDataType: word32
T_31: (in r28_37 : word32)
  Class: Eq_31
  DataType: word32
  OrigDataType: word32
T_32: (in r25_38 : word32)
  Class: Eq_32
  DataType: word32
  OrigDataType: word32
T_33: (in ra_39 : word32)
  Class: Eq_33
  DataType: word32
  OrigDataType: word32
T_34: (in r2_40 : word32)
  Class: Eq_34
  DataType: word32
  OrigDataType: word32
T_35: (in None_41 : bcuiposr0)
  Class: Eq_35
  DataType: bcuiposr0
  OrigDataType: bcuiposr0
T_36: (in 0x000104D0 : word32)
  Class: Eq_36
  DataType: word32
  OrigDataType: word32
T_37: (in ra_28 + 0x000104D0 : word32)
  Class: Eq_37
  DataType: word32
  OrigDataType: word32
T_38: (in Mem0[ra_28 + 0x000104D0:word32] : word32)
  Class: Eq_38
  DataType: ptr32
  OrigDataType: ptr32
T_39: (in 2416 : int32)
  Class: Eq_39
  DataType: int32
  OrigDataType: int32
T_40: (in ra_28->ptr104D0 + 2416 : word32)
  Class: Eq_40
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_41: (in ra : (ptr Eq_41))
  Class: Eq_41
  DataType: (ptr Eq_41)
  OrigDataType: (ptr (struct (104C0 T_47 t104C0)))
T_42: (in dwArg00 : word32)
  Class: Eq_42
  DataType: word32
  OrigDataType: word32
T_43: (in true : bool)
  Class: Eq_43
  DataType: bool
  OrigDataType: bool
T_44: (in r25_23 : (ptr code))
  Class: Eq_44
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_45: (in 0x000104C0 : word32)
  Class: Eq_45
  DataType: word32
  OrigDataType: word32
T_46: (in ra + 0x000104C0 : word32)
  Class: Eq_46
  DataType: word32
  OrigDataType: word32
T_47: (in Mem0[ra + 0x000104C0:word32] : word32)
  Class: Eq_44
  DataType: (ptr code)
  OrigDataType: word32
T_48: (in sp_24 : word32)
  Class: Eq_48
  DataType: word32
  OrigDataType: word32
T_49: (in ra_25 : word32)
  Class: Eq_49
  DataType: word32
  OrigDataType: word32
T_50: (in r0_26 : word32)
  Class: Eq_50
  DataType: word32
  OrigDataType: word32
T_51: (in r28_27 : word32)
  Class: Eq_51
  DataType: word32
  OrigDataType: word32
T_52: (in r4_28 : word32)
  Class: Eq_52
  DataType: word32
  OrigDataType: word32
T_53: (in r5_29 : word32)
  Class: Eq_53
  DataType: word32
  OrigDataType: word32
T_54: (in r6_30 : word32)
  Class: Eq_54
  DataType: word32
  OrigDataType: word32
T_55: (in r1_31 : word32)
  Class: Eq_55
  DataType: word32
  OrigDataType: word32
T_56: (in r7_32 : word32)
  Class: Eq_56
  DataType: word32
  OrigDataType: word32
T_57: (in r8_33 : word32)
  Class: Eq_57
  DataType: word32
  OrigDataType: word32
T_58: (in r2_34 : word32)
  Class: Eq_58
  DataType: word32
  OrigDataType: word32
T_59: (in r25_35 : word32)
  Class: Eq_59
  DataType: word32
  OrigDataType: word32
T_60: (in r2_8 : word32)
  Class: Eq_60
  DataType: word32
  OrigDataType: word32
T_61: (in 0x00010AA4 : word32)
  Class: Eq_61
  DataType: (ptr word32)
  OrigDataType: (ptr (struct (0 T_62 t0000)))
T_62: (in Mem0[0x00010AA4:word32] : word32)
  Class: Eq_60
  DataType: word32
  OrigDataType: word32
T_63: (in 0x00010AA8 : word32)
  Class: Eq_63
  DataType: (ptr (ptr Eq_64))
  OrigDataType: (ptr (struct (0 T_64 t0000)))
T_64: (in Mem0[0x00010AA8:word32] : word32)
  Class: Eq_64
  DataType: (ptr Eq_64)
  OrigDataType: word32
T_65: (in 2692 : int32)
  Class: Eq_65
  DataType: int32
  OrigDataType: int32
T_66: (in Mem0[0x00010AA8:word32] + 2692 : word32)
  Class: Eq_60
  DataType: word32
  OrigDataType: word32
T_67: (in r2_8 == globals->ptr10AA8 + 2692 : bool)
  Class: Eq_67
  DataType: bool
  OrigDataType: bool
T_68: (in r25_18 : (ptr code))
  Class: Eq_68
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_69: (in 0x00000000 : word32)
  Class: Eq_68
  DataType: (ptr code)
  OrigDataType: word32
T_70: (in r25_18 == null : bool)
  Class: Eq_70
  DataType: bool
  OrigDataType: bool
T_71: (in 0x00010AE4 : word32)
  Class: Eq_71
  DataType: (ptr (ptr code))
  OrigDataType: (ptr (struct (0 T_72 t0000)))
T_72: (in Mem0[0x00010AE4:word32] : word32)
  Class: Eq_68
  DataType: (ptr code)
  OrigDataType: word32
T_73: (in sp_19 : word32)
  Class: Eq_73
  DataType: word32
  OrigDataType: word32
T_74: (in r28_20 : word32)
  Class: Eq_74
  DataType: word32
  OrigDataType: word32
T_75: (in r25_21 : word32)
  Class: Eq_75
  DataType: word32
  OrigDataType: word32
T_76: (in r4_22 : word32)
  Class: Eq_76
  DataType: word32
  OrigDataType: word32
T_77: (in r2_23 : word32)
  Class: Eq_77
  DataType: word32
  OrigDataType: word32
T_78: (in ra_24 : word32)
  Class: Eq_78
  DataType: word32
  OrigDataType: word32
T_79: (in r5_10 : int32)
  Class: Eq_79
  DataType: int32
  OrigDataType: int32
T_80: (in 0x00010AA4 : word32)
  Class: Eq_80
  DataType: (ptr word32)
  OrigDataType: (ptr (struct (0 T_81 t0000)))
T_81: (in Mem0[0x00010AA4:word32] : word32)
  Class: Eq_60
  DataType: word32
  OrigDataType: word32
T_82: (in 0x00010AA8 : word32)
  Class: Eq_82
  DataType: (ptr (ptr Eq_64))
  OrigDataType: (ptr (struct (0 T_83 t0000)))
T_83: (in Mem0[0x00010AA8:word32] : word32)
  Class: Eq_64
  DataType: (ptr Eq_64)
  OrigDataType: word32
T_84: (in 2692 : int32)
  Class: Eq_84
  DataType: int32
  OrigDataType: int32
T_85: (in Mem0[0x00010AA8:word32] + 2692 : word32)
  Class: Eq_85
  DataType: word32
  OrigDataType: word32
T_86: (in globals->dw10AA4 - (globals->ptr10AA8 + 2692) : word32)
  Class: Eq_79
  DataType: int32
  OrigDataType: word32
T_87: (in r2_12 : Eq_87)
  Class: Eq_87
  DataType: Eq_87
  OrigDataType: (union (int32 u1) (uint32 u0))
T_88: (in 0x02 : byte)
  Class: Eq_88
  DataType: byte
  OrigDataType: byte
T_89: (in r5_10 >> 0x02 : word32)
  Class: Eq_89
  DataType: Eq_89
  OrigDataType: (union (int32 u0) (uint32 u1))
T_90: (in 0x1F : byte)
  Class: Eq_90
  DataType: byte
  OrigDataType: byte
T_91: (in r5_10 >> 0x02 >> 0x1F : word32)
  Class: Eq_87
  DataType: Eq_87
  OrigDataType: uint32
T_92: (in r5_10 >> 0x02 : word32)
  Class: Eq_92
  DataType: int32
  OrigDataType: int32
T_93: (in r2_12 + (r5_10 >> 0x02) : word32)
  Class: Eq_93
  DataType: int32
  OrigDataType: int32
T_94: (in 0x01 : byte)
  Class: Eq_94
  DataType: byte
  OrigDataType: byte
T_95: (in (word32) r2_12 + (r5_10 >> 0x02) >> 0x01 : word32)
  Class: Eq_95
  DataType: int32
  OrigDataType: int32
T_96: (in 0x00000000 : word32)
  Class: Eq_95
  DataType: int32
  OrigDataType: word32
T_97: (in (word32) r2_12 + (r5_10 >> 0x02) >> 0x01 == 0x00000000 : bool)
  Class: Eq_97
  DataType: bool
  OrigDataType: bool
T_98: (in r25_22 : (ptr code))
  Class: Eq_98
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_99: (in 0x00010AD4 : word32)
  Class: Eq_99
  DataType: (ptr (ptr code))
  OrigDataType: (ptr (struct (0 T_100 t0000)))
T_100: (in Mem0[0x00010AD4:word32] : word32)
  Class: Eq_98
  DataType: (ptr code)
  OrigDataType: word32
T_101: (in 0x00000000 : word32)
  Class: Eq_98
  DataType: (ptr code)
  OrigDataType: word32
T_102: (in r25_22 == null : bool)
  Class: Eq_102
  DataType: bool
  OrigDataType: bool
T_103: (in sp_23 : word32)
  Class: Eq_103
  DataType: word32
  OrigDataType: word32
T_104: (in r28_24 : word32)
  Class: Eq_104
  DataType: word32
  OrigDataType: word32
T_105: (in r25_25 : word32)
  Class: Eq_105
  DataType: word32
  OrigDataType: word32
T_106: (in r4_26 : word32)
  Class: Eq_106
  DataType: word32
  OrigDataType: word32
T_107: (in r5_27 : word32)
  Class: Eq_107
  DataType: word32
  OrigDataType: word32
T_108: (in r2_28 : word32)
  Class: Eq_108
  DataType: word32
  OrigDataType: word32
T_109: (in r19_10 : (ptr Eq_64))
  Class: Eq_64
  DataType: (ptr Eq_64)
  OrigDataType: (ptr (struct (AF0 T_114 t0AF0)))
T_110: (in 0x00010AA8 : word32)
  Class: Eq_110
  DataType: (ptr (ptr Eq_64))
  OrigDataType: (ptr (struct (0 T_111 t0000)))
T_111: (in Mem0[0x00010AA8:word32] : word32)
  Class: Eq_64
  DataType: (ptr Eq_64)
  OrigDataType: word32
T_112: (in 0x00000AF0 : word32)
  Class: Eq_112
  DataType: word32
  OrigDataType: word32
T_113: (in r19_10 + 0x00000AF0 : word32)
  Class: Eq_113
  DataType: word32
  OrigDataType: word32
T_114: (in Mem0[r19_10 + 0x00000AF0:byte] : byte)
  Class: Eq_114
  DataType: byte
  OrigDataType: byte
T_115: (in (word32) r19_10[2800] : word32)
  Class: Eq_115
  DataType: word32
  OrigDataType: word32
T_116: (in 0x00000000 : word32)
  Class: Eq_115
  DataType: word32
  OrigDataType: word32
T_117: (in (word32) r19_10[2800] != 0x00000000 : bool)
  Class: Eq_117
  DataType: bool
  OrigDataType: bool
T_118: (in r2_43 : (ptr code))
  Class: Eq_118
  DataType: (ptr code)
  OrigDataType: word32
T_119: (in 0x00000000 : word32)
  Class: Eq_118
  DataType: (ptr code)
  OrigDataType: word32
T_120: (in r2_43 == null : bool)
  Class: Eq_120
  DataType: bool
  OrigDataType: bool
T_121: (in 0x00010AE8 : word32)
  Class: Eq_121
  DataType: (ptr (ptr code))
  OrigDataType: (ptr (struct (0 T_122 t0000)))
T_122: (in Mem0[0x00010AE8:word32] : word32)
  Class: Eq_118
  DataType: (ptr code)
  OrigDataType: word32
T_123: (in r17_52 : (ptr Eq_64))
  Class: Eq_64
  DataType: (ptr Eq_64)
  OrigDataType: (ptr (struct 0001 (AF4 word32 dw0AF4)))
T_124: (in 0x00010AA8 : word32)
  Class: Eq_124
  DataType: (ptr (ptr Eq_64))
  OrigDataType: (ptr (struct (0 T_125 t0000)))
T_125: (in Mem0[0x00010AA8:word32] : word32)
  Class: Eq_64
  DataType: (ptr Eq_64)
  OrigDataType: word32
T_126: (in r2_50 : (ptr Eq_64))
  Class: Eq_64
  DataType: (ptr Eq_64)
  OrigDataType: int32
T_127: (in 0x00010AA8 : word32)
  Class: Eq_127
  DataType: (ptr (ptr Eq_64))
  OrigDataType: (ptr (struct (0 T_128 t0000)))
T_128: (in Mem0[0x00010AA8:word32] : word32)
  Class: Eq_64
  DataType: (ptr Eq_64)
  OrigDataType: word32
T_129: (in r2_56 : Eq_129)
  Class: Eq_129
  DataType: Eq_129
  OrigDataType: (struct "Eq_64" 0001 (A60 (ptr code) ptr0A60) (AF0 byte b0AF0) (AF4 word32 dw0AF4))
T_130: (in 0x00000AF4 : word32)
  Class: Eq_130
  DataType: word32
  OrigDataType: word32
T_131: (in r17_52 + 0x00000AF4 : word32)
  Class: Eq_131
  DataType: word32
  OrigDataType: word32
T_132: (in Mem0[r17_52 + 0x00000AF4:word32] : word32)
  Class: Eq_129
  DataType: Eq_129
  OrigDataType: word32
T_133: (in r16_58 : Eq_129)
  Class: Eq_129
  DataType: Eq_129
  OrigDataType: (union (int32 u0) (uint32 u1))
T_134: (in 0x00010AB0 : word32)
  Class: Eq_134
  DataType: (ptr int32)
  OrigDataType: (ptr (struct (0 T_135 t0000)))
T_135: (in Mem0[0x00010AB0:word32] : word32)
  Class: Eq_135
  DataType: int32
  OrigDataType: int32
T_136: (in 2664 : int32)
  Class: Eq_136
  DataType: int32
  OrigDataType: int32
T_137: (in r2_50 + 2664 : word32)
  Class: Eq_137
  DataType: int32
  OrigDataType: int32
T_138: (in globals->dw10AB0 - (r2_50 + 2664) : word32)
  Class: Eq_138
  DataType: int32
  OrigDataType: int32
T_139: (in 0x02 : byte)
  Class: Eq_139
  DataType: byte
  OrigDataType: byte
T_140: (in globals->dw10AB0 - (r2_50 + 2664) >> 0x02 : word32)
  Class: Eq_140
  DataType: int32
  OrigDataType: int32
T_141: (in -1 : int32)
  Class: Eq_141
  DataType: int32
  OrigDataType: int32
T_142: (in (globals->dw10AB0 - (r2_50 + 2664) >> 0x02) + -1 : word32)
  Class: Eq_129
  DataType: Eq_129
  OrigDataType: int32
T_143: (in r18_54 : int32)
  Class: Eq_143
  DataType: int32
  OrigDataType: int32
T_144: (in 2664 : int32)
  Class: Eq_144
  DataType: int32
  OrigDataType: int32
T_145: (in r2_50 + 2664 : word32)
  Class: Eq_143
  DataType: int32
  OrigDataType: int32
T_146: (in r2_56 < r16_58 : bool)
  Class: Eq_146
  DataType: bool
  OrigDataType: bool
T_147: (in (word32) (r2_56 < r16_58) : word32)
  Class: Eq_147
  DataType: word32
  OrigDataType: word32
T_148: (in 0x00000000 : word32)
  Class: Eq_147
  DataType: word32
  OrigDataType: word32
T_149: (in (word32) (r2_56 < r16_58) == 0x00000000 : bool)
  Class: Eq_149
  DataType: bool
  OrigDataType: bool
T_150: (in r25_101 : (ptr code))
  Class: Eq_118
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_151: (in 0x00010AE8 : word32)
  Class: Eq_151
  DataType: (ptr (ptr code))
  OrigDataType: (ptr (struct (0 T_152 t0000)))
T_152: (in Mem0[0x00010AE8:word32] : word32)
  Class: Eq_118
  DataType: (ptr code)
  OrigDataType: word32
T_153: (in sp_104 : word32)
  Class: Eq_153
  DataType: word32
  OrigDataType: word32
T_154: (in r28_105 : word32)
  Class: Eq_154
  DataType: word32
  OrigDataType: word32
T_155: (in r25_106 : word32)
  Class: Eq_155
  DataType: word32
  OrigDataType: word32
T_156: (in ra_108 : word32)
  Class: Eq_156
  DataType: word32
  OrigDataType: word32
T_157: (in r18_109 : word32)
  Class: Eq_157
  DataType: word32
  OrigDataType: word32
T_158: (in r17_110 : word32)
  Class: Eq_158
  DataType: word32
  OrigDataType: word32
T_159: (in r16_111 : word32)
  Class: Eq_159
  DataType: word32
  OrigDataType: word32
T_160: (in r2_112 : word32)
  Class: Eq_160
  DataType: word32
  OrigDataType: word32
T_161: (in r4_113 : word32)
  Class: Eq_161
  DataType: word32
  OrigDataType: word32
T_162: (in r3_114 : word32)
  Class: Eq_162
  DataType: word32
  OrigDataType: word32
T_163: (in true : bool)
  Class: Eq_163
  DataType: bool
  OrigDataType: bool
T_164: (in r2_78 : int32)
  Class: Eq_164
  DataType: int32
  OrigDataType: int32
T_165: (in 1 : int32)
  Class: Eq_165
  DataType: int32
  OrigDataType: int32
T_166: (in r2_56 + 1 : word32)
  Class: Eq_164
  DataType: int32
  OrigDataType: int32
T_167: (in 0x00000AF4 : word32)
  Class: Eq_167
  DataType: word32
  OrigDataType: word32
T_168: (in r17_52 + 0x00000AF4 : word32)
  Class: Eq_168
  DataType: (ptr word32)
  OrigDataType: (ptr word32)
T_169: (in Mem80[r17_52 + 0x00000AF4:word32] : word32)
  Class: Eq_164
  DataType: int32
  OrigDataType: word32
T_170: (in r2_81 : (ptr (ptr code)))
  Class: Eq_170
  DataType: (ptr (ptr code))
  OrigDataType: (ptr (struct (0 T_177 t0000)))
T_171: (in 0x02 : byte)
  Class: Eq_171
  DataType: byte
  OrigDataType: byte
T_172: (in r2_78 << 0x02 : word32)
  Class: Eq_172
  DataType: ui32
  OrigDataType: ui32
T_173: (in r18_54 + (r2_78 << 0x02) : word32)
  Class: Eq_170
  DataType: (ptr (ptr code))
  OrigDataType: ui32
T_174: (in r25_82 : (ptr code))
  Class: Eq_174
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_175: (in 0x00000000 : word32)
  Class: Eq_175
  DataType: word32
  OrigDataType: word32
T_176: (in r2_81 + 0x00000000 : word32)
  Class: Eq_176
  DataType: word32
  OrigDataType: word32
T_177: (in Mem80[r2_81 + 0x00000000:word32] : word32)
  Class: Eq_174
  DataType: (ptr code)
  OrigDataType: word32
T_178: (in sp_83 : word32)
  Class: Eq_178
  DataType: word32
  OrigDataType: word32
T_179: (in r28_84 : word32)
  Class: Eq_179
  DataType: word32
  OrigDataType: word32
T_180: (in r25_85 : word32)
  Class: Eq_180
  DataType: word32
  OrigDataType: word32
T_181: (in ra_87 : word32)
  Class: Eq_181
  DataType: word32
  OrigDataType: word32
T_182: (in r16_90 : Eq_129)
  Class: Eq_129
  DataType: Eq_129
  OrigDataType: uint32
T_183: (in r2_91 : word32)
  Class: Eq_183
  DataType: word32
  OrigDataType: word32
T_184: (in r4_92 : word32)
  Class: Eq_184
  DataType: word32
  OrigDataType: word32
T_185: (in r3_93 : word32)
  Class: Eq_185
  DataType: word32
  OrigDataType: word32
T_186: (in 0x00000AF4 : word32)
  Class: Eq_186
  DataType: word32
  OrigDataType: word32
T_187: (in r17_52 + 0x00000AF4 : word32)
  Class: Eq_187
  DataType: (ptr word32)
  OrigDataType: (ptr word32)
T_188: (in Mem80[r17_52 + 0x00000AF4:word32] : word32)
  Class: Eq_129
  DataType: Eq_129
  OrigDataType: word32
T_189: (in r2_56 < r16_90 : bool)
  Class: Eq_189
  DataType: bool
  OrigDataType: bool
T_190: (in (word32) (r2_56 < r16_90) : word32)
  Class: Eq_190
  DataType: word32
  OrigDataType: word32
T_191: (in 0x00000000 : word32)
  Class: Eq_190
  DataType: word32
  OrigDataType: word32
T_192: (in (word32) (r2_56 < r16_90) != 0x00000000 : bool)
  Class: Eq_192
  DataType: bool
  OrigDataType: bool
T_193: (in deregister_tm_clones : ptr32)
  Class: Eq_193
  DataType: (ptr Eq_193)
  OrigDataType: (ptr (fn T_195 ()))
T_194: (in signature of deregister_tm_clones : void)
  Class: Eq_193
  DataType: (ptr Eq_193)
  OrigDataType: 
T_195: (in deregister_tm_clones() : void)
  Class: Eq_195
  DataType: void
  OrigDataType: void
T_196: (in 0x01 : byte)
  Class: Eq_114
  DataType: byte
  OrigDataType: byte
T_197: (in 0x00000AF0 : word32)
  Class: Eq_197
  DataType: word32
  OrigDataType: word32
T_198: (in r19_10 + 0x00000AF0 : word32)
  Class: Eq_198
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_199: (in Mem73[r19_10 + 0x00000AF0:byte] : byte)
  Class: Eq_114
  DataType: byte
  OrigDataType: byte
T_200: (in register_tm_clones : ptr32)
  Class: Eq_200
  DataType: (ptr Eq_200)
  OrigDataType: (ptr (fn T_202 ()))
T_201: (in signature of register_tm_clones : void)
  Class: Eq_200
  DataType: (ptr Eq_200)
  OrigDataType: 
T_202: (in register_tm_clones() : void)
  Class: Eq_202
  DataType: void
  OrigDataType: void
T_203: (in dwArg00 : word32)
  Class: Eq_203
  DataType: word32
  OrigDataType: word32
T_204: (in dwArg04 : word32)
  Class: Eq_204
  DataType: word32
  OrigDataType: word32
T_205: (in memset : ptr32)
  Class: Eq_205
  DataType: (ptr Eq_205)
  OrigDataType: (ptr (fn T_213 (T_210, T_211, T_212)))
T_206: (in signature of memset : void)
  Class: Eq_205
  DataType: (ptr Eq_205)
  OrigDataType: 
T_207: (in r4 : (ptr void))
  Class: Eq_207
  DataType: (ptr void)
  OrigDataType: 
T_208: (in value : int32)
  Class: Eq_208
  DataType: int32
  OrigDataType: 
T_209: (in num : size_t)
  Class: Eq_209
  DataType: Eq_209
  OrigDataType: 
T_210: (in r4_20 : word32)
  Class: Eq_207
  DataType: (ptr void)
  OrigDataType: (ptr void)
T_211: (in r5_19 : word32)
  Class: Eq_208
  DataType: int32
  OrigDataType: int32
T_212: (in r6_18 : word32)
  Class: Eq_209
  DataType: Eq_209
  OrigDataType: size_t
T_213: (in memset(r4_20, r5_19, r6_18) : (ptr void))
  Class: Eq_213
  DataType: (ptr void)
  OrigDataType: (ptr void)
T_214: (in calloc : ptr32)
  Class: Eq_214
  DataType: (ptr Eq_214)
  OrigDataType: (ptr (fn T_220 (T_218, T_219)))
T_215: (in signature of calloc : void)
  Class: Eq_214
  DataType: (ptr Eq_214)
  OrigDataType: 
T_216: (in num : size_t)
  Class: Eq_209
  DataType: Eq_209
  OrigDataType: 
T_217: (in size : size_t)
  Class: Eq_209
  DataType: Eq_209
  OrigDataType: 
T_218: (in r4_35 : word32)
  Class: Eq_209
  DataType: Eq_209
  OrigDataType: size_t
T_219: (in r5_34 : word32)
  Class: Eq_209
  DataType: Eq_209
  OrigDataType: size_t
T_220: (in calloc(r4_35, r5_34) : (ptr void))
  Class: Eq_220
  DataType: (ptr void)
  OrigDataType: (ptr void)
T_221: (in dwLoc14 : word32)
  Class: Eq_221
  DataType: Eq_221
  OrigDataType: word32
T_222: (in r2_45 : word32)
  Class: Eq_222
  DataType: (ptr Eq_222)
  OrigDataType: (ptr (struct (0 T_221 t0000) (1 T_239 t0001) (4 T_231 t0004)))
T_223: (in 0x00000000 : word32)
  Class: Eq_223
  DataType: word32
  OrigDataType: word32
T_224: (in r2_45 + 0x00000000 : word32)
  Class: Eq_224
  DataType: word32
  OrigDataType: word32
T_225: (in Mem54[r2_45 + 0x00000000:word32] : word32)
  Class: Eq_221
  DataType: Eq_221
  OrigDataType: word32
T_226: (in bLoc10 : byte)
  Class: Eq_226
  DataType: byte
  OrigDataType: byte
T_227: (in (word32) bLoc10 : word32)
  Class: Eq_227
  DataType: word32
  OrigDataType: word32
T_228: (in (byte) (word32) bLoc10 : byte)
  Class: Eq_228
  DataType: byte
  OrigDataType: byte
T_229: (in 0x00000004 : word32)
  Class: Eq_229
  DataType: word32
  OrigDataType: word32
T_230: (in r2_45 + 0x00000004 : word32)
  Class: Eq_230
  DataType: ptr32
  OrigDataType: ptr32
T_231: (in Mem58[r2_45 + 0x00000004:byte] : byte)
  Class: Eq_228
  DataType: byte
  OrigDataType: byte
T_232: (in 0x0C : byte)
  Class: Eq_221
  DataType: byte
  OrigDataType: byte
T_233: (in 0x00000000 : word32)
  Class: Eq_233
  DataType: word32
  OrigDataType: word32
T_234: (in r2_45 + 0x00000000 : word32)
  Class: Eq_234
  DataType: (ptr word32)
  OrigDataType: (ptr word32)
T_235: (in Mem61[r2_45 + 0x00000000:byte] : byte)
  Class: Eq_221
  DataType: Eq_221
  OrigDataType: byte
T_236: (in 0x00000000 : word32)
  Class: Eq_236
  DataType: word32
  OrigDataType: word32
T_237: (in 0x00000001 : word32)
  Class: Eq_237
  DataType: word32
  OrigDataType: word32
T_238: (in r2_45 + 0x00000001 : word32)
  Class: Eq_238
  DataType: (ptr word32)
  OrigDataType: (ptr word32)
T_239: (in Mem63[r2_45 + 0x00000001:word32] : word32)
  Class: Eq_236
  DataType: word32
  OrigDataType: word32
T_240: (in r2_50 : (ptr Eq_222))
  Class: Eq_222
  DataType: (ptr Eq_222)
  OrigDataType: (ptr (struct (0 T_221 t0000) (1 T_239 t0001) (4 T_231 t0004)))
T_241: (in r3_52 : Eq_221)
  Class: Eq_221
  DataType: Eq_221
  OrigDataType: word32
T_242: (in r2_62 : (ptr Eq_222))
  Class: Eq_222
  DataType: (ptr Eq_222)
  OrigDataType: (ptr (struct (0 T_221 t0000) (1 T_239 t0001) (4 T_231 t0004)))
T_243: (in ra : (ptr Eq_2))
  Class: Eq_2
  DataType: (ptr Eq_2)
  OrigDataType: word32
T_244: (in true : bool)
  Class: Eq_244
  DataType: bool
  OrigDataType: bool
T_245: (in _init : ptr32)
  Class: Eq_245
  DataType: (ptr Eq_245)
  OrigDataType: (ptr (fn T_247 (T_243)))
T_246: (in signature of _init : void)
  Class: Eq_245
  DataType: (ptr Eq_245)
  OrigDataType: 
T_247: (in _init(ra) : void)
  Class: Eq_247
  DataType: void
  OrigDataType: void
T_248: (in r16_45 : (ptr word32))
  Class: Eq_248
  DataType: (ptr word32)
  OrigDataType: (ptr (struct 0004 (0 word32 dw0000)))
T_249: (in 0x00010ABC : word32)
  Class: Eq_249
  DataType: (ptr (ptr word32))
  OrigDataType: (ptr (struct (0 T_250 t0000)))
T_250: (in Mem0[0x00010ABC:word32] : word32)
  Class: Eq_248
  DataType: (ptr word32)
  OrigDataType: word32
T_251: (in 0x00010ABC : word32)
  Class: Eq_251
  DataType: (ptr (ptr word32))
  OrigDataType: (ptr (struct (0 T_252 t0000)))
T_252: (in Mem0[0x00010ABC:word32] : word32)
  Class: Eq_248
  DataType: (ptr word32)
  OrigDataType: int32
T_253: (in globals->ptr10ABC - r16_45 : word32)
  Class: Eq_253
  DataType: int32
  OrigDataType: int32
T_254: (in 0x02 : byte)
  Class: Eq_254
  DataType: byte
  OrigDataType: byte
T_255: (in globals->ptr10ABC - r16_45 >> 0x02 : word32)
  Class: Eq_255
  DataType: int32
  OrigDataType: int32
T_256: (in 0x00000000 : word32)
  Class: Eq_255
  DataType: int32
  OrigDataType: word32
T_257: (in globals->ptr10ABC - r16_45 >> 0x02 == 0x00000000 : bool)
  Class: Eq_257
  DataType: bool
  OrigDataType: bool
T_258: (in r25_68 : (ptr code))
  Class: Eq_258
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_259: (in 0x00000000 : word32)
  Class: Eq_259
  DataType: word32
  OrigDataType: word32
T_260: (in r16_45 + 0x00000000 : word32)
  Class: Eq_260
  DataType: word32
  OrigDataType: word32
T_261: (in Mem0[r16_45 + 0x00000000:word32] : word32)
  Class: Eq_258
  DataType: (ptr code)
  OrigDataType: word32
T_262: (in sp_73 : word32)
  Class: Eq_262
  DataType: word32
  OrigDataType: word32
T_263: (in r28_74 : word32)
  Class: Eq_263
  DataType: word32
  OrigDataType: word32
T_264: (in r25_75 : word32)
  Class: Eq_264
  DataType: word32
  OrigDataType: word32
T_265: (in r21_76 : word32)
  Class: Eq_265
  DataType: word32
  OrigDataType: word32
T_266: (in r6_77 : word32)
  Class: Eq_266
  DataType: word32
  OrigDataType: word32
T_267: (in r20_78 : word32)
  Class: Eq_267
  DataType: word32
  OrigDataType: word32
T_268: (in r5_79 : word32)
  Class: Eq_268
  DataType: word32
  OrigDataType: word32
T_269: (in r19_80 : word32)
  Class: Eq_269
  DataType: word32
  OrigDataType: word32
T_270: (in r4_81 : word32)
  Class: Eq_270
  DataType: word32
  OrigDataType: word32
T_271: (in r18_82 : word32)
  Class: Eq_271
  DataType: word32
  OrigDataType: word32
T_272: (in r16_83 : word32)
  Class: Eq_272
  DataType: word32
  OrigDataType: word32
T_273: (in ra_84 : word32)
  Class: Eq_273
  DataType: word32
  OrigDataType: word32
T_274: (in r17_85 : word32)
  Class: Eq_271
  DataType: word32
  OrigDataType: word32
T_275: (in r18_82 != r17_85 : bool)
  Class: Eq_275
  DataType: bool
  OrigDataType: bool
T_276: (in 4 : int32)
  Class: Eq_276
  DataType: int32
  OrigDataType: int32
T_277: (in r16_83 + 4 : word32)
  Class: Eq_248
  DataType: (ptr word32)
  OrigDataType: word32
T_278: (in r3_7 : (ptr Eq_64))
  Class: Eq_64
  DataType: (ptr Eq_64)
  OrigDataType: (ptr (struct (A60 T_284 t0A60)))
T_279: (in 0x00010AA8 : word32)
  Class: Eq_279
  DataType: (ptr (ptr Eq_64))
  OrigDataType: (ptr (struct (0 T_280 t0000)))
T_280: (in Mem0[0x00010AA8:word32] : word32)
  Class: Eq_64
  DataType: (ptr Eq_64)
  OrigDataType: word32
T_281: (in r25_17 : (ptr code))
  Class: Eq_281
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_282: (in 0x00000A60 : word32)
  Class: Eq_282
  DataType: word32
  OrigDataType: word32
T_283: (in r3_7 + 0x00000A60 : word32)
  Class: Eq_283
  DataType: word32
  OrigDataType: word32
T_284: (in Mem0[r3_7 + 0x00000A60:word32] : word32)
  Class: Eq_281
  DataType: (ptr code)
  OrigDataType: word32
T_285: (in -1 : int32)
  Class: Eq_281
  DataType: (ptr code)
  OrigDataType: int32
T_286: (in r25_17 == (<anonymous> *) -1 : bool)
  Class: Eq_286
  DataType: bool
  OrigDataType: bool
T_287: (in sp_30 : word32)
  Class: Eq_287
  DataType: word32
  OrigDataType: word32
T_288: (in r28_31 : word32)
  Class: Eq_288
  DataType: word32
  OrigDataType: word32
T_289: (in r25_32 : word32)
  Class: Eq_289
  DataType: word32
  OrigDataType: word32
T_290: (in r3_33 : word32)
  Class: Eq_290
  DataType: word32
  OrigDataType: word32
T_291: (in r2_34 : word32)
  Class: Eq_291
  DataType: word32
  OrigDataType: word32
T_292: (in ra_35 : word32)
  Class: Eq_292
  DataType: word32
  OrigDataType: word32
T_293: (in r17_36 : word32)
  Class: Eq_293
  DataType: word32
  OrigDataType: word32
T_294: (in r16_37 : (ptr int32))
  Class: Eq_294
  DataType: (ptr int32)
  OrigDataType: (ptr (struct (0 T_297 t0000)))
T_295: (in 0x00000000 : word32)
  Class: Eq_295
  DataType: word32
  OrigDataType: word32
T_296: (in r16_37 + 0x00000000 : word32)
  Class: Eq_296
  DataType: word32
  OrigDataType: word32
T_297: (in Mem0[r16_37 + 0x00000000:word32] : word32)
  Class: Eq_297
  DataType: int32
  OrigDataType: word32
T_298: (in -1 : int32)
  Class: Eq_297
  DataType: int32
  OrigDataType: int32
T_299: (in *r16_37 != -1 : bool)
  Class: Eq_299
  DataType: bool
  OrigDataType: bool
T_300: (in ra : (ptr Eq_300))
  Class: Eq_300
  DataType: (ptr Eq_300)
  OrigDataType: (ptr (struct (10084 T_309 t10084)))
T_301: (in true : bool)
  Class: Eq_301
  DataType: bool
  OrigDataType: bool
T_302: (in sp_16 : word32)
  Class: Eq_302
  DataType: word32
  OrigDataType: word32
T_303: (in r28_17 : word32)
  Class: Eq_303
  DataType: word32
  OrigDataType: word32
T_304: (in r25_18 : word32)
  Class: Eq_304
  DataType: word32
  OrigDataType: word32
T_305: (in ra_19 : word32)
  Class: Eq_305
  DataType: word32
  OrigDataType: word32
T_306: (in None_20 : bcuiposr0)
  Class: Eq_306
  DataType: bcuiposr0
  OrigDataType: bcuiposr0
T_307: (in 0x00010084 : word32)
  Class: Eq_307
  DataType: word32
  OrigDataType: word32
T_308: (in ra + 0x00010084 : word32)
  Class: Eq_308
  DataType: word32
  OrigDataType: word32
T_309: (in Mem0[ra + 0x00010084:word32] : word32)
  Class: Eq_309
  DataType: ptr32
  OrigDataType: ptr32
T_310: (in 1780 : int32)
  Class: Eq_310
  DataType: int32
  OrigDataType: int32
T_311: (in ra->ptr10084 + 1780 : word32)
  Class: Eq_311
  DataType: (ptr code)
  OrigDataType: (ptr code)
*/
typedef struct Globals {
	<anonymous> tFFFFFFFF;	// FFFFFFFF
	Eq_64 t10000;	// 10000
	word32 dw10A60;	// 10A60
	word32 dw10AA4;	// 10AA4
	struct Eq_64 * ptr10AA8;	// 10AA8
	int32 dw10AB0;	// 10AB0
	word32 * ptr10ABC;	// 10ABC
	<anonymous> * ptr10AD4;	// 10AD4
	<anonymous> * ptr10AE0;	// 10AE0
	<anonymous> * ptr10AE4;	// 10AE4
	<anonymous> * ptr10AE8;	// 10AE8
} Eq_1;

typedef struct Eq_2 {
	ptr32 ptr104F4;	// 104F4
} Eq_2;

typedef struct Eq_21 {
	ptr32 ptr104D0;	// 104D0
} Eq_21;

typedef struct Eq_41 {
	<anonymous> * ptr104C0;	// 104C0
} Eq_41;

typedef struct Eq_64 {	// size: 1 1
	<anonymous> * ptr0A60;	// A60
	byte b0AF0;	// AF0
	word32 dw0AF4;	// AF4
} Eq_64;

typedef union Eq_87 {
	int32 u0;
	uint32 u1;
} Eq_87;

typedef union Eq_89 {
	int32 u0;
	uint32 u1;
} Eq_89;

typedef union Eq_129 {
	int32 u0;
	uint32 u1;
} Eq_129;

typedef void (Eq_193)();

typedef void (Eq_200)();

typedef void (Eq_205)(void, int32, size_t);

typedef size_t Eq_209;

typedef void (Eq_214)(size_t, size_t);

typedef union Eq_221 {
	byte u0;
	word32 u1;
} Eq_221;

typedef struct Eq_222 {
	Eq_221 t0000;	// 0
	word32 dw0001;	// 1
	byte b0004;	// 4
} Eq_222;

typedef void (Eq_245)(Eq_2 *);

typedef struct Eq_300 {
	ptr32 ptr10084;	// 10084
} Eq_300;

