// retpoline_stripped.h
// Generated by decompiling retpoline_stripped.elf
// using Reko decompiler version 0.7.2.0.

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (400660 Eq_27 t400660) (400710 Eq_30 t400710) (400780 Eq_31 t400780) (600FF8 word64 qw600FF8))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_16: (fn void ())
	T_16 (in rdx : (ptr Eq_16))
	T_32 (in rtld_fini : (ptr (fn void ())))
Eq_17: (union "Eq_17" (int32 u0) (word64 u1))
	T_17 (in qwArg00 : Eq_17)
	T_28 (in argc : int32)
Eq_18: (fn void (ptr64))
	T_18 (in __align : ptr64)
	T_19 (in signature of __align : void)
Eq_25: (fn int32 ((ptr Eq_27), Eq_17, (ptr (ptr char)), (ptr Eq_30), (ptr Eq_31), (ptr Eq_16), (ptr void)))
	T_25 (in __libc_start_main : ptr64)
	T_26 (in signature of __libc_start_main : void)
Eq_27: (fn int32 (int32, (ptr (ptr char)), (ptr (ptr char))))
	T_27 (in main : (ptr (fn int32 (int32, (ptr (ptr char)), (ptr (ptr char))))))
	T_34 (in 0x0000000000400660 : word64)
Eq_30: (fn void ())
	T_30 (in init : (ptr (fn void ())))
	T_36 (in 0x0000000000400710 : word64)
Eq_31: (fn void ())
	T_31 (in fini : (ptr (fn void ())))
	T_37 (in 0x0000000000400780 : word64)
Eq_39: (fn void ())
	T_39 (in __hlt : ptr64)
	T_40 (in signature of __hlt : void)
Eq_62: (fn (ptr void) (Eq_64, Eq_64))
	T_62 (in calloc : ptr64)
	T_63 (in signature of calloc : void)
Eq_64: (union "Eq_64" (int64 u0) (size_t u1))
	T_64 (in num : size_t)
	T_65 (in size : size_t)
	T_66 (in (int64) edi : int64)
	T_67 (in (int64) esi : int64)
Eq_69: (fn void (word64))
	T_69 (in fn0000000000400700 : ptr64)
	T_70 (in signature of fn0000000000400700 : void)
Eq_74: (fn void ())
	T_74 (in __pause : ptr64)
	T_75 (in signature of __pause : void)
// Type Variables ////////////
globals_t: (in globals : (ptr (struct "Globals")))
  Class: Eq_1
  DataType: (ptr Eq_1)
  OrigDataType: (ptr (struct "Globals"))
T_2: (in rax_4 : word64)
  Class: Eq_2
  DataType: word64
  OrigDataType: word64
T_3: (in 0000000000600FF8 : ptr64)
  Class: Eq_3
  DataType: (ptr word64)
  OrigDataType: (ptr (struct (0 T_6 t0000)))
T_4: (in 0x0000000000000000 : word64)
  Class: Eq_4
  DataType: word64
  OrigDataType: word64
T_5: (in 0x0000000000600FF8 + 0x0000000000000000 : word64)
  Class: Eq_5
  DataType: ptr64
  OrigDataType: ptr64
T_6: (in Mem0[0x0000000000600FF8 + 0x0000000000000000:word64] : word64)
  Class: Eq_2
  DataType: word64
  OrigDataType: word64
T_7: (in 0x0000000000000000 : word64)
  Class: Eq_2
  DataType: word64
  OrigDataType: word64
T_8: (in rax_4 == 0x0000000000000000 : bool)
  Class: Eq_8
  DataType: bool
  OrigDataType: bool
T_9: (in rsp_15 : word64)
  Class: Eq_9
  DataType: word64
  OrigDataType: word64
T_10: (in SCZO_16 : byte)
  Class: Eq_10
  DataType: byte
  OrigDataType: byte
T_11: (in rax_17 : word64)
  Class: Eq_11
  DataType: word64
  OrigDataType: word64
T_12: (in SZO_18 : byte)
  Class: Eq_12
  DataType: byte
  OrigDataType: byte
T_13: (in C_19 : byte)
  Class: Eq_13
  DataType: byte
  OrigDataType: byte
T_14: (in Z_20 : byte)
  Class: Eq_14
  DataType: byte
  OrigDataType: byte
T_15: (in __gmon_start__ : ptr64)
  Class: Eq_15
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_16: (in rdx : (ptr Eq_16))
  Class: Eq_16
  DataType: (ptr Eq_16)
  OrigDataType: (ptr (fn void ()))
T_17: (in qwArg00 : Eq_17)
  Class: Eq_17
  DataType: Eq_17
  OrigDataType: (union (int32 u1) (word64 u0))
T_18: (in __align : ptr64)
  Class: Eq_18
  DataType: (ptr Eq_18)
  OrigDataType: (ptr (fn T_24 (T_23)))
T_19: (in signature of __align : void)
  Class: Eq_18
  DataType: (ptr Eq_18)
  OrigDataType: 
T_20: (in  : word64)
  Class: Eq_20
  DataType: ptr64
  OrigDataType: 
T_21: (in fp : ptr64)
  Class: Eq_21
  DataType: (ptr void)
  OrigDataType: (ptr void)
T_22: (in 0x0000000000000008 : word64)
  Class: Eq_22
  DataType: int64
  OrigDataType: int64
T_23: (in fp + 0x0000000000000008 : word64)
  Class: Eq_20
  DataType: ptr64
  OrigDataType: ptr64
T_24: (in __align((char *) fp + 8) : void)
  Class: Eq_24
  DataType: void
  OrigDataType: void
T_25: (in __libc_start_main : ptr64)
  Class: Eq_25
  DataType: (ptr Eq_25)
  OrigDataType: (ptr (fn T_38 (T_34, T_17, T_35, T_36, T_37, T_16, T_21)))
T_26: (in signature of __libc_start_main : void)
  Class: Eq_25
  DataType: (ptr Eq_25)
  OrigDataType: 
T_27: (in main : (ptr (fn int32 (int32, (ptr (ptr char)), (ptr (ptr char))))))
  Class: Eq_27
  DataType: (ptr Eq_27)
  OrigDataType: 
T_28: (in argc : int32)
  Class: Eq_17
  DataType: Eq_17
  OrigDataType: 
T_29: (in ubp_av : (ptr (ptr char)))
  Class: Eq_29
  DataType: (ptr (ptr char))
  OrigDataType: 
T_30: (in init : (ptr (fn void ())))
  Class: Eq_30
  DataType: (ptr Eq_30)
  OrigDataType: 
T_31: (in fini : (ptr (fn void ())))
  Class: Eq_31
  DataType: (ptr Eq_31)
  OrigDataType: 
T_32: (in rtld_fini : (ptr (fn void ())))
  Class: Eq_16
  DataType: (ptr Eq_16)
  OrigDataType: 
T_33: (in stack_end : (ptr void))
  Class: Eq_21
  DataType: (ptr void)
  OrigDataType: 
T_34: (in 0x0000000000400660 : word64)
  Class: Eq_27
  DataType: (ptr Eq_27)
  OrigDataType: (ptr (fn int32 (int32, (ptr (ptr char)), (ptr (ptr char)))))
T_35: (in fp + 0x0000000000000008 : word64)
  Class: Eq_29
  DataType: (ptr (ptr char))
  OrigDataType: (ptr (ptr char))
T_36: (in 0x0000000000400710 : word64)
  Class: Eq_30
  DataType: (ptr Eq_30)
  OrigDataType: (ptr (fn void ()))
T_37: (in 0x0000000000400780 : word64)
  Class: Eq_31
  DataType: (ptr Eq_31)
  OrigDataType: (ptr (fn void ()))
T_38: (in __libc_start_main(&globals->t400660, qwArg00, (char *) fp + 8, &globals->t400710, &globals->t400780, rdx, fp) : int32)
  Class: Eq_38
  DataType: int32
  OrigDataType: int32
T_39: (in __hlt : ptr64)
  Class: Eq_39
  DataType: (ptr Eq_39)
  OrigDataType: (ptr (fn T_41 ()))
T_40: (in signature of __hlt : void)
  Class: Eq_39
  DataType: (ptr Eq_39)
  OrigDataType: 
T_41: (in __hlt() : void)
  Class: Eq_41
  DataType: void
  OrigDataType: void
T_42: (in r8 : word64)
  Class: Eq_42
  DataType: word64
  OrigDataType: word64
T_43: (in 0x0000000000601040 : word64)
  Class: Eq_42
  DataType: word64
  OrigDataType: word64
T_44: (in r8 == 0x0000000000601040 : bool)
  Class: Eq_44
  DataType: bool
  OrigDataType: bool
T_45: (in 0x0000000000000000 : uint64)
  Class: Eq_45
  DataType: uint64
  OrigDataType: uint64
T_46: (in 0x0000000000000000 : word64)
  Class: Eq_45
  DataType: uint64
  OrigDataType: word64
T_47: (in 0x0000000000000000 == 0x0000000000000000 : bool)
  Class: Eq_47
  DataType: bool
  OrigDataType: bool
T_48: (in rsp_39 : word64)
  Class: Eq_48
  DataType: word64
  OrigDataType: word64
T_49: (in rbp_40 : word64)
  Class: Eq_49
  DataType: word64
  OrigDataType: word64
T_50: (in eax_41 : word32)
  Class: Eq_50
  DataType: word32
  OrigDataType: word32
T_51: (in rax_42 : word64)
  Class: Eq_51
  DataType: word64
  OrigDataType: word64
T_52: (in r8_43 : word64)
  Class: Eq_52
  DataType: word64
  OrigDataType: word64
T_53: (in SCZO_44 : byte)
  Class: Eq_53
  DataType: byte
  OrigDataType: byte
T_54: (in Z_45 : byte)
  Class: Eq_54
  DataType: byte
  OrigDataType: byte
T_55: (in SZO_46 : byte)
  Class: Eq_55
  DataType: byte
  OrigDataType: byte
T_56: (in C_47 : byte)
  Class: Eq_56
  DataType: byte
  OrigDataType: byte
T_57: (in edi_48 : word32)
  Class: Eq_57
  DataType: word32
  OrigDataType: word32
T_58: (in rdi_49 : word64)
  Class: Eq_58
  DataType: word64
  OrigDataType: word64
T_59: (in 0x0000000000000000 : uint64)
  Class: Eq_59
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_60: (in esi : word32)
  Class: Eq_60
  DataType: word32
  OrigDataType: word32
T_61: (in edi : word32)
  Class: Eq_61
  DataType: word32
  OrigDataType: word32
T_62: (in calloc : ptr64)
  Class: Eq_62
  DataType: (ptr Eq_62)
  OrigDataType: (ptr (fn T_68 (T_66, T_67)))
T_63: (in signature of calloc : void)
  Class: Eq_62
  DataType: (ptr Eq_62)
  OrigDataType: 
T_64: (in num : size_t)
  Class: Eq_64
  DataType: Eq_64
  OrigDataType: 
T_65: (in size : size_t)
  Class: Eq_64
  DataType: Eq_64
  OrigDataType: 
T_66: (in (int64) edi : int64)
  Class: Eq_64
  DataType: Eq_64
  OrigDataType: (union (int64 u0) (size_t u1))
T_67: (in (int64) esi : int64)
  Class: Eq_64
  DataType: Eq_64
  OrigDataType: (union (int64 u0) (size_t u1))
T_68: (in calloc((int64) edi, (int64) esi) : (ptr void))
  Class: Eq_68
  DataType: (ptr void)
  OrigDataType: (ptr void)
T_69: (in fn0000000000400700 : ptr64)
  Class: Eq_69
  DataType: (ptr Eq_69)
  OrigDataType: (ptr (fn T_73 (T_72)))
T_70: (in signature of fn0000000000400700 : void)
  Class: Eq_69
  DataType: (ptr Eq_69)
  OrigDataType: 
T_71: (in qwArg00 : word64)
  Class: Eq_71
  DataType: word64
  OrigDataType: word64
T_72: (in qwLoc08 : word64)
  Class: Eq_71
  DataType: word64
  OrigDataType: word64
T_73: (in fn0000000000400700(qwLoc08) : void)
  Class: Eq_73
  DataType: void
  OrigDataType: void
T_74: (in __pause : ptr64)
  Class: Eq_74
  DataType: (ptr Eq_74)
  OrigDataType: (ptr (fn T_76 ()))
T_75: (in signature of __pause : void)
  Class: Eq_74
  DataType: (ptr Eq_74)
  OrigDataType: 
T_76: (in __pause() : void)
  Class: Eq_76
  DataType: void
  OrigDataType: void
*/
typedef struct Globals {
	Eq_27 t400660;	// 400660
	Eq_30 t400710;	// 400710
	Eq_31 t400780;	// 400780
	word64 qw600FF8;	// 600FF8
} Eq_1;

typedef void (Eq_16)();

typedef union Eq_17 {
	int32 u0;
	word64 u1;
} Eq_17;

typedef void (Eq_18)(ptr64);

typedef int32 (Eq_25)( *, Eq_17, char * *,  *,  *,  *, void);

typedef int32 (Eq_27)(int32 rdi, char * * rsi, char * * rdx);

typedef void (Eq_30)();

typedef void (Eq_31)();

typedef void (Eq_39)();

typedef void (Eq_62)(Eq_64, Eq_64);

typedef union Eq_64 {
	int64 u0;
	size_t u1;
} Eq_64;

typedef void (Eq_69)(word64);

typedef void (Eq_74)();

