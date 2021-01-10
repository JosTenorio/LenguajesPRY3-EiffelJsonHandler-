/*
 * Code for class SYSTEM_ENCODINGS_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F24_573(EIF_REFERENCE);
extern EIF_TYPED_VALUE F24_574(EIF_REFERENCE);
extern EIF_TYPED_VALUE F24_575(EIF_REFERENCE);
extern EIF_TYPED_VALUE F24_576(EIF_REFERENCE);
extern EIF_TYPED_VALUE F24_577(EIF_REFERENCE);
extern EIF_TYPED_VALUE F24_578(EIF_REFERENCE);
extern EIF_TYPED_VALUE F24_579(EIF_REFERENCE);
extern EIF_TYPED_VALUE F24_580(EIF_REFERENCE);
extern EIF_TYPED_VALUE F24_581(EIF_REFERENCE);
extern EIF_TYPED_VALUE F24_582(EIF_REFERENCE);
extern EIF_TYPED_VALUE F24_583(EIF_REFERENCE);
extern EIF_TYPED_VALUE F24_584(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F24_585(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F24_586(EIF_REFERENCE);
extern EIF_TYPED_VALUE F24_587(EIF_REFERENCE);
extern EIF_TYPED_VALUE F24_588(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F24_589(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F24_590(EIF_REFERENCE);
extern EIF_TYPED_VALUE F24_591(EIF_REFERENCE);
extern EIF_TYPED_VALUE F24_592(EIF_REFERENCE);
extern void F24_5039(EIF_REFERENCE, int);
extern void EIF_Minit24(void);

#ifdef __cplusplus
}
#endif

#include <Winnls.h>
#include <windows.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F24_582
static EIF_NATURAL_32 inline_F24_582 (void)
{
	return (EIF_NATURAL_32) GetConsoleCP ();
	;
}
#define INLINE_F24_582
#endif
#ifndef INLINE_F24_583
static EIF_NATURAL_32 inline_F24_583 (void)
{
	return (EIF_NATURAL_32) GetConsoleOutputCP ();
	;
}
#define INLINE_F24_583
#endif
#ifndef INLINE_F24_584
static int inline_F24_584 (EIF_NATURAL_32 arg1)
{
	return EIF_TEST (SetConsoleCP ((UINT) arg1));
	;
}
#define INLINE_F24_584
#endif
#ifndef INLINE_F24_585
static int inline_F24_585 (EIF_NATURAL_32 arg1)
{
	return EIF_TEST (SetConsoleOutputCP ((UINT) arg1));
	;
}
#define INLINE_F24_585
#endif
#ifndef INLINE_F24_586
static EIF_NATURAL_32 inline_F24_586 (void)
{
	return (EIF_NATURAL_32) GetOEMCP ();
	;
}
#define INLINE_F24_586
#endif
#ifndef INLINE_F24_587
static EIF_NATURAL_32 inline_F24_587 (void)
{
	return (EIF_NATURAL_32) GetACP ();
	;
}
#define INLINE_F24_587
#endif
#ifndef INLINE_F24_589
static EIF_INTEGER_32 inline_F24_589 (EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_POINTER arg3, EIF_INTEGER_32 arg4)
{
	return GetLocaleInfo((LCID) arg1, (LCTYPE) arg2, arg3, (int) arg4);
	;
}
#define INLINE_F24_589
#endif
#ifndef INLINE_F24_590
static EIF_INTEGER_32 inline_F24_590 (void)
{
	return sizeof(TCHAR);
	;
}
#define INLINE_F24_590
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {SYSTEM_ENCODINGS_IMP}.system_code_page */
EIF_TYPED_VALUE F24_573 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "system_code_page";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLR(4,ur1);
	RTLIU(5);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 23, Current, 1, 0, 649);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(23, Current, 649);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF80000B3, 0, 0); /* loc1 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(591, dtype))(Current)).it_i4);
	ui4_1 = ti4_1;
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(578, dtype))(Current)).it_i4);
	ui4_2 = ti4_2;
	ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(579, dtype))(Current)).it_i4);
	ui4_3 = ti4_3;
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(588, dtype))(Current, ui4_1x, ui4_2x, ui4_3x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	if (RTAL & CK_CHECK) {
		RTHOOK(2);
		RTCT("valid_string_8", EX_CHECK);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3254, "is_valid_as_string_8", loc1))(loc1)).it_b);
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTHOOK(3);
	RTDBGAL(0, 0xF80000B6, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(182, 0x01).id);
	ti4_1 = *(EIF_INTEGER_32 *)(loc1 + RTVA(3396, "count", loc1));
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(3238, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(3,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	ur1 = RTCCL(loc1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3348, "append_string_general", Result))(Result, ur1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
#undef ui4_2
#undef ui4_3
}

/* {SYSTEM_ENCODINGS_IMP}.console_code_page */
EIF_TYPED_VALUE F24_574 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "console_code_page";
	RTEX;
	EIF_NATURAL_32 loc1 = (EIF_NATURAL_32) 0;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_32 tu4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLIU(3);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_UINT32, &loc1);
	
	RTEAA(l_feature_name, 23, Current, 1, 0, 650);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(23, Current, 650);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0x38000000, 1, 0); /* loc1 */
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(583, dtype))(Current)).it_n4);
	loc1 = (EIF_NATURAL_32) tu4_1;
	RTHOOK(2);
	if ((EIF_BOOLEAN)(loc1 == (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L))) {
		RTHOOK(3);
		RTDBGAL(1, 0x38000000, 1, 0); /* loc1 */
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(582, dtype))(Current)).it_n4);
		loc1 = (EIF_NATURAL_32) tu4_1;
		RTHOOK(4);
		if ((EIF_BOOLEAN)(loc1 == (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L))) {
			RTHOOK(5);
			RTDBGAL(1, 0x38000000, 1, 0); /* loc1 */
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(586, dtype))(Current)).it_n4);
			loc1 = (EIF_NATURAL_32) tu4_1;
		}
	}
	RTHOOK(6);
	RTDBGAL(0, 0xF80000B6, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(182, 0x01).id);
	ui4_1 = ((EIF_INTEGER_32) 5L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(3238, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(6,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(7);
	uu4_1 = loc1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3344, "append_natural_32", Result))(Result, uu4_1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ui4_1
#undef uu4_1
}

/* {SYSTEM_ENCODINGS_IMP}.iso_8859_1_code_page */
RTOID (F24_575)


EIF_TYPED_VALUE F24_575 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F24_575,652,RTMS_EX_H("28591",5,943396145));
}

/* {SYSTEM_ENCODINGS_IMP}.locale_idefaultcodepage */
EIF_TYPED_VALUE F24_576 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 11L);
	return r;
}

/* {SYSTEM_ENCODINGS_IMP}.locale_idefaultcodepage_maxlen */
EIF_TYPED_VALUE F24_577 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 6L);
	return r;
}

/* {SYSTEM_ENCODINGS_IMP}.locale_idefaultansicodepage */
EIF_TYPED_VALUE F24_578 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4100L);
	return r;
}

/* {SYSTEM_ENCODINGS_IMP}.locale_idefaultansicodepage_maxlen */
EIF_TYPED_VALUE F24_579 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 6L);
	return r;
}

/* {SYSTEM_ENCODINGS_IMP}.locale_idefaultmaccodepage */
EIF_TYPED_VALUE F24_580 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4113L);
	return r;
}

/* {SYSTEM_ENCODINGS_IMP}.locale_idefaultmaccodepage_maxlen */
EIF_TYPED_VALUE F24_581 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 6L);
	return r;
}

/* {SYSTEM_ENCODINGS_IMP}.console_input_code_page */
EIF_TYPED_VALUE F24_582 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "console_input_code_page";
	RTEX;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_UINT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 23, Current, 0, 0, 658);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(23, Current, 658);
	RTIV(Current, RTAL);
	Result = inline_F24_582 ();
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_UINT32; r.it_n4 = Result; return r; }
}

/* {SYSTEM_ENCODINGS_IMP}.console_output_code_page */
EIF_TYPED_VALUE F24_583 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "console_output_code_page";
	RTEX;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_UINT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 23, Current, 0, 0, 659);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(23, Current, 659);
	RTIV(Current, RTAL);
	Result = inline_F24_583 ();
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_UINT32; r.it_n4 = Result; return r; }
}

/* {SYSTEM_ENCODINGS_IMP}.set_console_input_code_page */
EIF_TYPED_VALUE F24_584 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_console_input_code_page";
	RTEX;
#define arg1 arg1x.it_n4
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n4 = * (EIF_NATURAL_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_UINT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 23, Current, 0, 1, 660);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(23, Current, 660);
	RTIV(Current, RTAL);
	Result = EIF_TEST(inline_F24_584 ((EIF_NATURAL_32) arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef arg1
}

/* {SYSTEM_ENCODINGS_IMP}.set_console_output_code_page */
EIF_TYPED_VALUE F24_585 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_console_output_code_page";
	RTEX;
#define arg1 arg1x.it_n4
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n4 = * (EIF_NATURAL_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_UINT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 23, Current, 0, 1, 661);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(23, Current, 661);
	RTIV(Current, RTAL);
	Result = EIF_TEST(inline_F24_585 ((EIF_NATURAL_32) arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef arg1
}

/* {SYSTEM_ENCODINGS_IMP}.oem_code_page */
EIF_TYPED_VALUE F24_586 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "oem_code_page";
	RTEX;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_UINT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 23, Current, 0, 0, 662);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(23, Current, 662);
	RTIV(Current, RTAL);
	Result = inline_F24_586 ();
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_UINT32; r.it_n4 = Result; return r; }
}

/* {SYSTEM_ENCODINGS_IMP}.ansi_code_page */
EIF_TYPED_VALUE F24_587 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "ansi_code_page";
	RTEX;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_UINT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 23, Current, 0, 0, 663);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(23, Current, 663);
	RTIV(Current, RTAL);
	Result = inline_F24_587 ();
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_UINT32; r.it_n4 = Result; return r; }
}

/* {SYSTEM_ENCODINGS_IMP}.extract_locale_string */
EIF_TYPED_VALUE F24_588 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "extract_locale_string";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_32 tw1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLR(4,Result);
	RTLIU(5);
	RTLU (SK_REF, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_INT32, &loc2);
	
	RTEAA(l_feature_name, 23, Current, 2, 3, 664);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(23, Current, 664);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF800005A, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(90, 0x01).id);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(590, dtype))(Current)).it_i4);
	ui4_1 = (EIF_INTEGER_32) (ti4_1 * arg3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(1001, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
	ui4_1 = arg1;
	ui4_2 = arg2;
	tp1 = *(EIF_POINTER *)(loc1 + RTVA(1007, "item", loc1));
	up1 = tp1;
	ti4_1 = *(EIF_INTEGER_32 *)(loc1 + RTVA(1008, "count", loc1));
	ui4_3 = ti4_1;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(589, dtype))(Current, ui4_1x, ui4_2x, up1x, ui4_3x)).it_i4);
	loc2 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(3);
	RTDBGAL(0, 0xF80000B3, 0,0); /* Result */
	tp1 = *(EIF_POINTER *)(loc1 + RTVA(1007, "item", loc1));
	up1 = tp1;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(590, dtype))(Current)).it_i4);
	ui4_1 = (EIF_INTEGER_32) (loc2 * ti4_1);
	tr1 = RTLN(eif_new_type(19, 0x01).id);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(536, 19))(tr1, up1x, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	Result = (EIF_REFERENCE) RTCCL(tr2);
	RTHOOK(4);
	ti4_1 = *(EIF_INTEGER_32 *)(Result + RTVA(3396, "count", Result));
	ui4_1 = ti4_1;
	tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3241, "item", Result))(Result, ui4_1x)).it_c4);
	ti4_1 = (EIF_INTEGER_32) (tw1);
	if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) {
		RTHOOK(5);
		ti4_1 = *(EIF_INTEGER_32 *)(Result + RTVA(3396, "count", Result));
		ui4_1 = ti4_1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3361, "remove", Result))(Result, ui4_1x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(7);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef arg3
#undef arg2
#undef arg1
}

/* {SYSTEM_ENCODINGS_IMP}.c_extract_locale_string */
EIF_TYPED_VALUE F24_589 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x)
{
	GTCX
	char *l_feature_name = "c_extract_locale_string";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_p
#define arg4 arg4x.it_i4
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_i4 = * (EIF_INTEGER_32 *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_p = * (EIF_POINTER *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_POINTER,&arg3);
	RTLU(SK_INT32,&arg4);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 23, Current, 0, 4, 644);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(23, Current, 644);
	RTIV(Current, RTAL);
	Result = inline_F24_589 ((EIF_INTEGER_32) arg1, (EIF_INTEGER_32) arg2, (EIF_POINTER) arg3, (EIF_INTEGER_32) arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {SYSTEM_ENCODINGS_IMP}.c_tchar_length */
EIF_TYPED_VALUE F24_590 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "c_tchar_length";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 23, Current, 0, 0, 645);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(23, Current, 645);
	RTIV(Current, RTAL);
	Result = inline_F24_590 ();
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SYSTEM_ENCODINGS_IMP}.system_locale */
EIF_TYPED_VALUE F24_591 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "system_locale";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 23, Current, 0, 0, 646);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(23, Current, 646);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) GetSystemDefaultLCID();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SYSTEM_ENCODINGS_IMP}.user_locale */
EIF_TYPED_VALUE F24_592 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "user_locale";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 23, Current, 0, 0, 647);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(23, Current, 647);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) GetUserDefaultLCID();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {SYSTEM_ENCODINGS_IMP}._invariant */
void F24_5039 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTCDT;
	RTLD;
	RTDA;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAINV(l_feature_name, 23, Current, 0, 5038);
	RTSA(dtype);
	RTME(dtype, 0);
	RTIT("correct_locale_idefaultcodepage_maxlen", Current);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(591, dtype))(Current)).it_i4);
	ui4_1 = ti4_1;
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(576, dtype))(Current)).it_i4);
	ui4_2 = ti4_2;
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(36, dtype))(Current)).it_p);
	up1 = tp1;
	ui4_3 = ((EIF_INTEGER_32) 0L);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(589, dtype))(Current, ui4_1x, ui4_2x, up1x, ui4_3x)).it_i4);
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(577, dtype))(Current)).it_i4);
	if ((EIF_BOOLEAN) (ti4_1 <= ti4_2)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("correct_locale_idefaultansicodepage_maxlen", Current);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(591, dtype))(Current)).it_i4);
	ui4_1 = ti4_1;
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(578, dtype))(Current)).it_i4);
	ui4_2 = ti4_2;
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(36, dtype))(Current)).it_p);
	up1 = tp1;
	ui4_3 = ((EIF_INTEGER_32) 0L);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(589, dtype))(Current, ui4_1x, ui4_2x, up1x, ui4_3x)).it_i4);
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(579, dtype))(Current)).it_i4);
	if ((EIF_BOOLEAN) (ti4_1 <= ti4_2)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("correct_locale_idefaultmaccodepage_maxlen", Current);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(591, dtype))(Current)).it_i4);
	ui4_1 = ti4_1;
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(580, dtype))(Current)).it_i4);
	ui4_2 = ti4_2;
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(36, dtype))(Current)).it_p);
	up1 = tp1;
	ui4_3 = ((EIF_INTEGER_32) 0L);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(589, dtype))(Current, ui4_1x, ui4_2x, up1x, ui4_3x)).it_i4);
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(581, dtype))(Current)).it_i4);
	if ((EIF_BOOLEAN) (ti4_1 <= ti4_2)) {
		RTCK;
	} else {
		RTCF;
	}
	RTLO(2);
	RTMD(0);
	RTLE;
	RTEE;
#undef up1
#undef ui4_1
#undef ui4_2
#undef ui4_3
}

void EIF_Minit24 (void)
{
	GTCX
	RTOTS (575,F24_575)
}


#ifdef __cplusplus
}
#endif
