// pySample.c
// Generated by decompiling pySample.dll
// using Reko decompiler version 0.6.1.0.

#include "pySample.h"

PyObject * fn10001000(PyObject * ptrArg04, PyObject * ptrArg08)
{
	PyObject * eax_21 = PyArg_ParseTuple(ptrArg08, "ii:sum", SLICE(0x10002144, <unknown>, 32));
	if (eax_21 != null)
		return Py_BuildValue("i", dwLoc04 + dwLoc08);
	else
		return eax_21;
}

PyObject * fn10001050(PyObject * ptrArg04, PyObject * ptrArg08)
{
	PyObject * eax_21 = PyArg_ParseTuple(ptrArg08, "ii:dif", SLICE(0x10002150, <unknown>, 32));
	if (eax_21 != null)
		return Py_BuildValue("i", dwLoc08 - dwLoc04);
	else
		return eax_21;
}

PyObject * fn100010A0(PyObject * ptrArg04, PyObject * ptrArg08)
{
	PyObject * eax_21 = PyArg_ParseTuple(ptrArg08, "ii:div", SLICE(0x10002158, <unknown>, 32));
	if (eax_21 != null)
		return Py_BuildValue("i", SEQ((int64) dwLoc08 % dwLoc04, dwLoc08) / dwLoc04);
	else
		return eax_21;
}

PyObject * fn100010F0(PyObject * ptrArg04, PyObject * ptrArg08)
{
	PyObject * eax_21 = PyArg_ParseTuple(ptrArg08, "ff:fdiv", SLICE(0x10002160, <unknown>, 32));
	if (eax_21 != null)
		return Py_BuildValue("f", (real64) rLoc08 / rLoc04);
	else
		return eax_21;
}

PyObject * py_unused(PyObject * self, PyObject * args)
{
	PyObject * eax_16 = PyArg_ParseTuple(args, ":unused", tArg00);
	if (eax_16 != null)
	{
		PyObject * eax_25 = &_Py_NoneStruct;
		eax_25->ob_refcnt = eax_25->ob_refcnt + 0x01;
		return &_Py_NoneStruct;
	}
	else
		return eax_16;
}

void initpySample()
{
	Py_InitModule4("pySample", globals->methods, null, null, 1007);
	return;
}

word32 fn100011E9(word32 dwArg08)
{
	word32 eax_215;
	if (dwArg08 == 0x00)
	{
		if (globals->dw10003070 <= 0x00)
		{
			eax_215 = 0x00;
			return eax_215;
		}
		globals->dw10003070 = globals->dw10003070 - 0x01;
	}
	word32 ecx_35 = *adjust_fdiv;
	globals->dw100033A4 = ecx_35;
	if (dwArg08 == 0x01)
	{
		Eq_143 edi_82 = fs->ptr0018->t0004;
		while (true)
		{
			Eq_143 eax_93 = InterlockedCompareExchange(&globals->t100033AC, edi_82, 0x00);
			if (eax_93 == 0x00)
				break;
			if (eax_93 == edi_82)
				break;
			Sleep(1000);
		}
		ptr32 esp_118;
		Eq_143 ebp_117;
		ui32 ebx_116;
		ui32 esi_115;
		ui32 edi_114;
		word32 eax_100 = globals->dw100033A8;
		if (eax_100 != 0x00)
		{
			word32 esp_177;
			word32 eax_178;
			byte SZO_180;
			byte C_181;
			byte SCZO_182;
			byte Z_183;
			word32 ecx_184;
			struct Eq_250 * fs_188;
			amsg_exit();
			esp_118 = fp + ~0x17;
		}
		else
		{
			globals->dw100033A8 = 0x01;
			word32 esp_195;
			word32 eax_196;
			word32 ebp_197;
			byte SZO_198;
			byte C_199;
			byte SCZO_200;
			byte Z_201;
			word32 ecx_202;
			word32 ebx_203;
			word32 esi_204;
			word32 edi_205;
			struct Eq_238 * fs_206;
			initterm_e();
			if (eax_196 != 0x00)
			{
				eax_215 = 0x00;
				return eax_215;
			}
			word32 esp_222;
			word32 eax_223;
			byte SZO_225;
			byte C_226;
			byte SCZO_227;
			byte Z_228;
			word32 ecx_229;
			struct Eq_438 * fs_233;
			initterm();
			globals->dw100033A8 = 0x02;
			esp_118 = fp + ~0x1B;
		}
		LONG * esp_123 = esp_118 + 0x04;
		if (ebp_117 == 0x00)
		{
			*(esp_123 - 0x04) = (int32) ebp_117;
			*(esp_123 - 0x08) = (int32) 268448684;
			InterlockedExchange(*(esp_123 - 0x08), *(esp_123 - 0x04));
		}
		if (globals->ptr100033B8 != null)
		{
			struct Eq_369 * esp_142 = esp_123 - 0x04;
			esp_142->t0000 = 0x100033B8;
			Eq_143 edi_144;
			word32 eax_145 = fn10001742(ebx_116, esi_115, edi_114, out edi_144);
			if (eax_145 != 0x00)
			{
				esp_142->t0000 = esp_142->t001C;
				(esp_142 - 0x04)->t0000 = edi_144;
				(esp_142 - 0x08)->t0000 = esp_142->t0014;
				word32 esp_157;
				word32 eax_158;
				word32 ebp_159;
				byte SZO_160;
				byte C_161;
				byte SCZO_162;
				byte Z_163;
				word32 ecx_164;
				word32 ebx_165;
				word32 esi_166;
				word32 edi_167;
				struct Eq_418 * fs_168;
				globals->ptr100033B8();
			}
		}
		globals->dw10003070 = globals->dw10003070 + 0x01;
	}
	else if (dwArg08 == 0x00)
	{
		while (InterlockedCompareExchange(&globals->t100033AC, 0x01, 0x00) != 0x00)
			Sleep(1000);
		word32 eax_268 = globals->dw100033A8;
		if (eax_268 != 0x02)
		{
			word32 esp_273;
			word32 eax_274;
			word32 ebp_275;
			byte SZO_276;
			byte C_277;
			byte SCZO_278;
			byte Z_279;
			word32 ecx_280;
			word32 ebx_281;
			word32 esi_282;
			word32 edi_283;
			struct Eq_221 * fs_284;
			amsg_exit();
		}
		else
		{
			word32 esp_291;
			word32 eax_292;
			word32 ebp_293;
			byte SZO_294;
			byte C_295;
			byte SCZO_296;
			byte Z_297;
			word32 ecx_298;
			word32 ebx_299;
			word32 esi_300;
			word32 edi_301;
			struct Eq_201 * fs_302;
			decode_pointer();
			ptr32 esp_309 = fp + ~0x13;
			if (eax_292 != 0x00)
			{
				word32 esp_332;
				<anonymous> ** eax_333;
				word32 ebp_334;
				byte SZO_335;
				byte C_336;
				byte SCZO_337;
				byte Z_338;
				word32 ecx_339;
				word32 esi_341;
				word32 edi_342;
				struct Eq_301 * fs_343;
				<anonymous> ** ebx_340;
				decode_pointer();
				<anonymous> ** edi_347 = eax_333;
				while (true)
				{
					edi_347 = edi_347 - 0x04;
					if (edi_347 < ebx_340)
						break;
					<anonymous> * eax_380 = *edi_347;
					if (eax_380 != null)
					{
						word32 esp_384;
						word32 eax_385;
						word32 ebp_386;
						byte SZO_387;
						byte C_388;
						byte SCZO_389;
						byte Z_390;
						word32 ecx_391;
						word32 esi_393;
						struct Eq_430 * fs_395;
						eax_380();
					}
				}
				free(ebx_340);
				word32 esp_365;
				word32 eax_366;
				word32 ebp_367;
				byte SZO_368;
				byte C_369;
				byte SCZO_370;
				byte Z_371;
				word32 ecx_372;
				word32 ebx_373;
				word32 esi_374;
				word32 edi_375;
				struct Eq_355 * fs_376;
				encoded_null();
				globals->dw100033B0 = eax_366;
				globals->dw100033B4 = eax_366;
				esp_309 = fp + ~0x1B;
			}
			LONG * esp_323 = esp_309 - 0x04;
			*esp_323 = (int32) 0x00;
			*(esp_323 - 0x04) = (int32) 268448684;
			globals->dw100033A8 = 0x00;
			InterlockedExchange(*(esp_323 - 0x04), *esp_323);
		}
	}
	eax_215 = 0x01;
	return eax_215;
}

Eq_182 fn10001388(Eq_182 ecx, Eq_182 edx, ui32 ebx, ui32 esi, ui32 edi)
{
	struct Eq_453 * ebp_10 = fn100017E8(ebx, esi, edi, dwLoc0C, 0x100021E8, 0x10);
	Eq_182 ebx_158 = ebp_10->t0008;
	(ebp_10 - 0x1C)->t0000.u0 = 0x01;
	(ebp_10 - 0x04)->t0000.u0 = 0x00;
	globals->t10003008 = edx;
	(ebp_10 - 0x04)->t0000.u0 = 0x01;
	ptr32 esp_175 = fp - 0x08;
	Eq_182 edi_12 = ecx;
	Eq_182 esi_14 = edx;
	if (edx == 0x00 && globals->dw10003070 == 0x00)
	{
		(ebp_10 - 0x1C)->t0000.u0 = 0x00;
		goto l1000147A;
	}
	if (edx == 0x01 || edx == 0x02)
	{
		<anonymous> * eax_165 = globals->ptr100020CC;
		if (eax_165 != null)
		{
			*(fp - 0x0C) = (union Eq_182 *) ecx;
			*(fp - 0x10) = (union Eq_182 *) edx;
			*(fp - 0x14) = (union Eq_182 *) ebx_158;
			word32 ecx_202;
			word32 edx_204;
			Eq_182 eax_207;
			byte SZO_208;
			byte C_209;
			byte SCZO_210;
			byte Z_211;
			eax_165();
			(ebp_10 - 0x1C)->t0000 = eax_207;
		}
		if ((ebp_10 - 0x1C)->t0000 == 0x00)
		{
l1000147A:
			(ebp_10 - 0x04)->t0000 = (ebp_10 - 0x04)->t0000 & 0x00;
			(ebp_10 - 0x04)->t0000.u0 = ~0x01;
			fn10001493();
			Eq_182 eax_39 = (ebp_10 - 0x1C)->t0000;
			fn1000182D(ebp_10, 0x10, dwArg00, dwArg04, dwArg08, dwArg0C);
			return eax_39;
		}
		union Eq_182 * esp_182 = esp_175 - 0x04;
		*esp_182 = (union Eq_182 *) edi_12;
		*(esp_182 - 0x04) = (union Eq_182 *) esi_14;
		*(esp_182 - 0x08) = (union Eq_182 *) ebx_158;
		Eq_182 eax_188 = fn100011E9(dwArg04);
		(ebp_10 - 0x1C)->t0000 = eax_188;
		esp_175 = esp_182;
		if (eax_188 == 0x00)
			goto l1000147A;
	}
	union Eq_182 * esp_56 = esp_175 - 0x04;
	*esp_56 = (union Eq_182 *) edi_12;
	*(esp_56 - 0x04) = (union Eq_182 *) esi_14;
	*(esp_56 - 0x08) = (union Eq_182 *) ebx_158;
	Eq_182 eax_62 = fn100017C6(0x10, dwArg04);
	(ebp_10 - 0x1C)->t0000 = eax_62;
	ptr32 esp_142 = esp_56;
	if (esi_14 == 0x01 && eax_62 == 0x00)
	{
		*esp_56 = (union Eq_182 *) edi_12;
		*(esp_56 - 0x04) = (union Eq_182 *) eax_62;
		*(esp_56 - 0x08) = (union Eq_182 *) ebx_158;
		fn100017C6(0x10, dwArg04);
		*esp_56 = (union Eq_182 *) edi_12;
		*(esp_56 - 0x04) = 0x00;
		*(esp_56 - 0x08) = (union Eq_182 *) ebx_158;
		fn100011E9(dwArg04);
		esp_142 = esp_56;
		<anonymous> * eax_143 = globals->ptr100020CC;
		if (eax_143 != null)
		{
			*esp_56 = (union Eq_182 *) edi_12;
			*(esp_56 - 0x04) = 0x00;
			*(esp_56 - 0x08) = (union Eq_182 *) ebx_158;
			word32 ecx_155;
			word32 edx_157;
			word32 eax_160;
			byte SZO_161;
			byte C_162;
			byte SCZO_163;
			byte Z_164;
			eax_143();
		}
	}
	if (esi_14 == 0x00 || esi_14 == 0x03)
	{
		union Eq_182 * esp_80 = esp_142 - 0x04;
		*esp_80 = (union Eq_182 *) edi_12;
		*(esp_80 - 0x04) = (union Eq_182 *) esi_14;
		*(esp_80 - 0x08) = (union Eq_182 *) ebx_158;
		Eq_182 eax_86 = fn100011E9(dwArg04);
		if (eax_86 == 0x00)
			(ebp_10 - 0x1C)->t0000 = (ebp_10 - 0x1C)->t0000 & eax_86;
		if ((ebp_10 - 0x1C)->t0000 != 0x00)
		{
			<anonymous> * eax_95 = globals->ptr100020CC;
			if (eax_95 != null)
			{
				*esp_80 = (union Eq_182 *) edi_12;
				*(esp_80 - 0x04) = (union Eq_182 *) esi_14;
				*(esp_80 - 0x08) = (union Eq_182 *) ebx_158;
				word32 esp_105;
				word32 edi_106;
				word32 ecx_107;
				word32 esi_108;
				word32 edx_109;
				word32 ebx_110;
				Eq_182 eax_112;
				byte SZO_113;
				byte C_114;
				byte SCZO_115;
				byte Z_116;
				eax_95();
				(ebp_10 - 0x1C)->t0000 = eax_112;
			}
		}
	}
	goto l1000147A;
}

void fn10001493()
{
	globals->t10003008.u0 = ~0x00;
	return;
}

BOOL DllMain(HANDLE hModule, Eq_182 dwReason, Eq_182 lpReserved)
{
	if (dwReason == 0x01)
		fn10001864();
	return fn10001388(lpReserved, dwReason, ebx, esi, edi);
}

word32 fn100016D0(word32 dwArg04)
{
	if (dwArg04->w0000 == 23117)
	{
		struct Eq_819 * eax_21 = dwArg04 + dwArg04->dw003C / 0x0040;
		if (eax_21->dw0000 == 0x4550)
			return (word32) (eax_21->w0018 == 0x010B);
	}
	return 0x00;
}

Eq_836 * fn10001700(word32 dwArg04, word32 dwArg08)
{
	struct Eq_839 * ecx_6 = dwArg04 + dwArg04->dw003C / 0x0040;
	uint32 esi_14 = (word32) ecx_6->w0006;
	uint32 edx_15 = 0x00;
	struct Eq_836 * eax_22 = (ecx_6 + ((word32) ecx_6->w0014 + 0x18) / 22)->w0006 + 0x03;
	if (true)
		do
		{
			uint32 ecx_49 = eax_22->dw0000;
			if (dwArg08 >= ecx_49 && dwArg08 < eax_22->dw0008 + ecx_49)
				return eax_22;
			edx_15 = edx_15 + 0x01;
			eax_22 = eax_22 + 0x01;
		} while (edx_15 < esi_14);
	eax_22 = null;
	return eax_22;
}

ui32 fn10001742(ui32 ebx, ui32 esi, ui32 edi, ptr32 & ediOut)
{
	ui32 eax_31;
	struct Eq_453 * ebp_10 = fn100017E8(ebx, esi, edi, dwLoc0C, 0x10002230, 0x08);
	*(ebp_10 - 0x04) = (union Eq_182 *) (*(ebp_10 - 0x04) & 0x00);
	*(fp - 0x0C) = 0x10000000;
	if (fn100016D0(dwArg00) != 0x00)
	{
		*(fp - 0x0C) = (union Eq_900 *) (ebp_10->t0008 - 0x10000000);
		*(fp - 0x10) = 0x10000000;
		struct Eq_936 * eax_54 = fn10001700(dwArg00, dwArg04);
		if (eax_54 != null)
		{
			eax_31 = ~(eax_54->dw0024 >> 0x1F) & 0x01;
			(ebp_10 - 0x04)->t0000.u0 = ~0x01;
l100017A8:
			word32 edi_37;
			*ediOut = fn1000182D(ebp_10, 0x08, dwArg00, dwArg04, dwArg08, dwArg0C);
			return eax_31;
		}
	}
	*(ebp_10 - 0x04) = ~0x01;
	eax_31 = 0x00;
	goto l100017A8;
}

word32 fn100017C6(word32 dwArg00, word32 dwArg08)
{
	if (dwArg08 == 0x01 && globals->ptr100020CC == null)
		DisableThreadLibraryCalls(dwArg00);
	return 0x01;
}

ptr32 fn100017E8(ui32 ebx, ui32 esi, ui32 edi, word32 dwArg00, word32 dwArg04, word32 dwArg08)
{
	ui32 * esp_13 = fp - 0x08 - dwArg08;
	*(esp_13 - 0x04) = ebx;
	*(esp_13 - 0x08) = esi;
	*(esp_13 - 0x0C) = edi;
	*(esp_13 - 0x10) = globals->dw10003000 ^ fp + 0x08;
	*(esp_13 - 0x14) = dwArg00;
	fs->ptr0000 = fp - 0x08;
	return fp + 0x08;
}

word32 fn1000182D(Eq_453 * ebp, word32 dwArg00, word32 dwArg04, word32 dwArg08, word32 dwArg0C, word32 dwArg10)
{
	fs->t0000 = *(ebp - 0x10);
	ebp->t0000 = dwArg00;
	return dwArg08;
}

void fn10001864()
{
	ui32 eax_8 = globals->dw10003000;
	if (eax_8 != 0xBB40E64E && (eax_8 & 0xFFFF0000) != 0x00)
		globals->dw10003004 = ~eax_8;
	else
	{
		GetSystemTimeAsFileTime(fp - 0x0C);
		ui32 esi_58 = dwLoc08 & 0x00 ^ dwLoc0C & 0x00 ^ GetCurrentProcessId() ^ GetCurrentThreadId() ^ GetTickCount();
		QueryPerformanceCounter(fp - 0x14);
		ui32 esi_68 = esi_58 ^ (dwLoc10 ^ dwLoc14);
		if (esi_68 == 0xBB40E64E)
			esi_68 = ~0x44BF19B0;
		else if ((esi_68 & 0xFFFF0000) == 0x00)
			esi_68 = esi_68 | esi_68 << 0x10;
		globals->dw10003000 = esi_68;
		globals->dw10003004 = ~esi_68;
	}
	return;
}

