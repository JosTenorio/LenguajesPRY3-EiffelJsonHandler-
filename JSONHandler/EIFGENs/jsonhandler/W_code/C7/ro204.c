/*
 * Code for class ROUTINE [G#1]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F204_4277(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F204_4278(EIF_REFERENCE);
extern EIF_TYPED_VALUE F204_4279(EIF_REFERENCE);
extern EIF_TYPED_VALUE F204_4280(EIF_REFERENCE);
extern EIF_TYPED_VALUE F204_4281(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F204_4282(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F204_4283(EIF_REFERENCE);
extern EIF_TYPED_VALUE F204_4284(EIF_REFERENCE);
extern EIF_TYPED_VALUE F204_4285(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F204_4286(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F204_4287(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F204_4288(EIF_REFERENCE);
extern EIF_TYPED_VALUE F204_4289(EIF_REFERENCE);
extern void F204_4290(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F204_4291(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F204_4292(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F204_4295(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F204_4296(EIF_REFERENCE);
extern EIF_TYPED_VALUE F204_4297(EIF_REFERENCE);
extern EIF_TYPED_VALUE F204_4298(EIF_REFERENCE);
extern EIF_TYPED_VALUE F204_4299(EIF_REFERENCE);
extern EIF_TYPED_VALUE F204_4300(EIF_REFERENCE);
extern EIF_TYPED_VALUE F204_4301(EIF_REFERENCE);
extern EIF_TYPED_VALUE F204_4302(EIF_REFERENCE);
extern EIF_TYPED_VALUE F204_4303(EIF_REFERENCE);
extern EIF_TYPED_VALUE F204_4304(EIF_REFERENCE);
extern EIF_TYPED_VALUE F204_4305(EIF_REFERENCE);
extern void F204_4306(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F204_4307(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F204_4308(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F204_4309(EIF_REFERENCE);
extern EIF_TYPED_VALUE F204_4310(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F204_4311(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F204_4312(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F204_4313(EIF_REFERENCE);
extern void F204_4314(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F204_4315(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void EIF_Minit204(void);

#ifdef __cplusplus
}
#endif

#include "eif_misc.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {ROUTINE}.adapt */
void F204_4277 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "adapt";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 203, Current, 0, 1, 10162);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(203, Current, 10162);
	RTCC(arg1, 203, l_feature_name, 1, eif_new_type(Dftype(Current), 1), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("other_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("conforming", EX_PRE);
		ur1 = RTCCL(arg1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(9, dtype))(Current, ur1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTDBGAA(Current, dtype, 3212, 0x40000000, 1); /* rout_disp */
	tp1 = *(EIF_POINTER *)(arg1 + RTVA(3212, "rout_disp", arg1));
	*(EIF_POINTER *)(Current + RTWA(3212, dtype)) = (EIF_POINTER) tp1;
	RTHOOK(4);
	RTDBGAA(Current, dtype, 3215, 0x40000000, 1); /* encaps_rout_disp */
	tp1 = *(EIF_POINTER *)(arg1 + RTVA(3215, "encaps_rout_disp", arg1));
	*(EIF_POINTER *)(Current + RTWA(3215, dtype)) = (EIF_POINTER) tp1;
	RTHOOK(5);
	RTDBGAA(Current, dtype, 3213, 0x40000000, 1); /* calc_rout_addr */
	tp1 = *(EIF_POINTER *)(arg1 + RTVA(3213, "calc_rout_addr", arg1));
	*(EIF_POINTER *)(Current + RTWA(3213, dtype)) = (EIF_POINTER) tp1;
	RTHOOK(6);
	RTDBGAA(Current, dtype, 3210, 0xF8000083, 0); /* closed_operands */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3210, "closed_operands", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr1 = RTCCL(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(3210, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(7);
	RTDBGAA(Current, dtype, 3195, 0xF8000083, 0); /* operands */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3195, "operands", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr1 = RTCCL(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(3195, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(8);
	RTDBGAA(Current, dtype, 3216, 0x10000000, 1); /* routine_id */
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(3216, "routine_id", arg1));
	*(EIF_INTEGER_32 *)(Current + RTWA(3216, dtype)) = (EIF_INTEGER_32) ti4_1;
	RTHOOK(9);
	RTDBGAA(Current, dtype, 3217, 0x04000000, 1); /* is_basic */
	tb1 = *(EIF_BOOLEAN *)(arg1 + RTVA(3217, "is_basic", arg1));
	*(EIF_BOOLEAN *)(Current + RTWA(3217, dtype)) = (EIF_BOOLEAN) tb1;
	RTHOOK(10);
	RTDBGAA(Current, dtype, 3203, 0x04000000, 1); /* is_target_closed */
	tb1 = *(EIF_BOOLEAN *)(arg1 + RTVA(3203, "is_target_closed", arg1));
	*(EIF_BOOLEAN *)(Current + RTWA(3203, dtype)) = (EIF_BOOLEAN) tb1;
	RTHOOK(11);
	RTDBGAA(Current, dtype, 3218, 0x10000000, 1); /* written_type_id_inline_agent */
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(3218, "written_type_id_inline_agent", arg1));
	*(EIF_INTEGER_32 *)(Current + RTWA(3218, dtype)) = (EIF_INTEGER_32) ti4_1;
	RTHOOK(12);
	RTDBGAA(Current, dtype, 3204, 0x10000000, 1); /* open_count */
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(3204, "open_count", arg1));
	*(EIF_INTEGER_32 *)(Current + RTWA(3204, dtype)) = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(13);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef ur1
#undef arg1
}

/* {ROUTINE}.operands */
EIF_TYPED_VALUE F204_4278 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(3195,Dtype(Current)));
	return r;
}


/* {ROUTINE}.target */
EIF_TYPED_VALUE F204_4279 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "target";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,loc2);
	RTLR(4,Result);
	RTLR(5,loc3);
	RTLR(6,loc4);
	RTLIU(7);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	
	RTEAA(l_feature_name, 203, Current, 4, 0, 10164);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(203, Current, 10164);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = *(EIF_BOOLEAN *)(Current + RTWA(3203, dtype));
	if (tb1) {
		RTHOOK(2);
		RTDBGAL(1, 0xF8000083, 0, 0); /* loc1 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3210, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc1 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(3);
		tb1 = '\0';
		tb2 = '\0';
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2033, "count", loc1))(loc1)).it_i4);
			tb2 = (EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L));
		}
		if (tb2) {
			ui4_1 = ((EIF_INTEGER_32) 1L);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2031, "item", loc1))(loc1, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc2 = RTCCL(tr1);
			loc2 = RTRV(eif_new_type(0, 0x01),loc2);
			if ((loc2) && RTS_OS (Current, loc2)) loc2 = (EIF_REFERENCE) 0;
			tb1 = EIF_TEST(loc2);
		}
		if (tb1) {
			RTHOOK(4);
			RTDBGAL(0, 0xF8000000, 0,0); /* Result */
			Result = (EIF_REFERENCE) RTCCL(loc2);
		}
	} else {
		RTHOOK(5);
		tb1 = '\0';
		tb2 = '\0';
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3195, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc3 = RTCCL(tr1);
		if (EIF_TEST(loc3)) {
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2033, "count", loc3))(loc3)).it_i4);
			tb2 = (EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L));
		}
		if (tb2) {
			ui4_1 = ((EIF_INTEGER_32) 1L);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2031, "item", loc3))(loc3, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc4 = RTCCL(tr1);
			loc4 = RTRV(eif_new_type(0, 0x01),loc4);
			if ((loc4) && RTS_OS (Current, loc4)) loc4 = (EIF_REFERENCE) 0;
			tb1 = EIF_TEST(loc4);
		}
		if (tb1) {
			RTHOOK(6);
			RTDBGAL(0, 0xF8000000, 0,0); /* Result */
			Result = (EIF_REFERENCE) RTCCL(loc4);
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ui4_1
}

/* {ROUTINE}.hash_code */
EIF_TYPED_VALUE F204_4280 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "hash_code";
	RTEX;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
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
	
	RTEAA(l_feature_name, 203, Current, 0, 0, 10165);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(203, Current, 10165);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x10000000, 1,0); /* Result */
	tp1 = *(EIF_POINTER *)(Current + RTWA(3212, dtype));
	ti4_1 = (EIF_INTEGER_32) (0x7FFFFFFF & (EIF_INTEGER_32) ((rt_int_ptr) (tp1)));
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(3216, dtype));
	ti4_3 = (EIF_INTEGER_32) (0x7FFFFFFF & (EIF_INTEGER_32) ((rt_int_ptr) (ti4_2)));
	ui4_1 = ti4_3;
	ti4_2 = eif_bit_xor(ti4_1,ui4_1);
	Result = (EIF_INTEGER_32) ti4_2;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("good_hash_value", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef ui4_1
}

/* {ROUTINE}.precondition */
EIF_TYPED_VALUE F204_4281 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "precondition";
	RTEX;
#define arg1 arg1x.it_r
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 203, Current, 0, 1, 10166);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(203, Current, 10166);
	RTCC(arg1, 203, l_feature_name, 1, RTWCT(3195, dtype, Dftype(Current)), 0x00);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef arg1
}

/* {ROUTINE}.postcondition */
EIF_TYPED_VALUE F204_4282 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "postcondition";
	RTEX;
#define arg1 arg1x.it_r
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 203, Current, 0, 1, 10167);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(203, Current, 10167);
	RTCC(arg1, 203, l_feature_name, 1, RTWCT(3195, dtype, Dftype(Current)), 0x00);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef arg1
}

/* {ROUTINE}.empty_operands */
EIF_TYPED_VALUE F204_4283 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "empty_operands";
	RTEX;
	EIF_REFERENCE tr1 = NULL;
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
	
	RTEAA(l_feature_name, 203, Current, 0, 0, 10168);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(203, Current, 10168);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0xF8000083, 0,0); /* Result */
	tr1 = RTLNSMART(RTWCT(3229, dtype, Dftype(Current)).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("empty_operands_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
}

/* {ROUTINE}.callable */
EIF_TYPED_VALUE F204_4284 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = (EIF_BOOLEAN) EIF_TRUE;
	return r;
}

/* {ROUTINE}.is_equal */
EIF_TYPED_VALUE F204_4285 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_equal";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_BOOLEAN tb5;
	EIF_BOOLEAN tb6;
	EIF_BOOLEAN tb7;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,ur1);
	RTLIU(5);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 203, Current, 0, 1, 10170);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(203, Current, 10170);
	RTCC(arg1, 203, l_feature_name, 1, eif_new_type(Dftype(Current), 1), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("other_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tb1 = '\0';
	tb2 = '\0';
	tb3 = '\0';
	tb4 = '\0';
	tb5 = '\0';
	tb6 = '\0';
	tb7 = '\0';
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3210, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3210, "closed_operands", arg1))(arg1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	if (RTEQ(tr1, tr2)) {
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3195, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3195, "operands", arg1))(arg1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		tb7 = RTEQ(tr1, tr2);
	}
	if (tb7) {
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3214, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3214, "open_map", arg1))(arg1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		tb6 = RTEQ(tr1, tr2);
	}
	if (tb6) {
		tp1 = *(EIF_POINTER *)(Current + RTWA(3212, dtype));
		tp2 = *(EIF_POINTER *)(arg1 + RTVA(3212, "rout_disp", arg1));
		tb5 = (EIF_BOOLEAN)(tp1 == tp2);
	}
	if (tb5) {
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(3216, dtype));
		ti4_2 = *(EIF_INTEGER_32 *)(arg1 + RTVA(3216, "routine_id", arg1));
		tb4 = (EIF_BOOLEAN)(ti4_1 == ti4_2);
	}
	if (tb4) {
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(3218, dtype));
		ti4_2 = *(EIF_INTEGER_32 *)(arg1 + RTVA(3218, "written_type_id_inline_agent", arg1));
		tb3 = (EIF_BOOLEAN)(ti4_1 == ti4_2);
	}
	if (tb3) {
		tp1 = *(EIF_POINTER *)(Current + RTWA(3215, dtype));
		tp2 = *(EIF_POINTER *)(arg1 + RTVA(3215, "encaps_rout_disp", arg1));
		tb2 = (EIF_BOOLEAN)(tp1 == tp2);
	}
	if (tb2) {
		tp1 = *(EIF_POINTER *)(Current + RTWA(3213, dtype));
		tp2 = *(EIF_POINTER *)(arg1 + RTVA(3213, "calc_rout_addr", arg1));
		tb1 = (EIF_BOOLEAN)(tp1 == tp2);
	}
	Result = (EIF_BOOLEAN) tb1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("symmetric", EX_POST);
		if ((!(Result) || (RTEQ(arg1, Current)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("consistent", EX_POST);
		tb1 = '\01';
		ur1 = RTCCL(arg1);
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(12, dtype))(Current, ur1x)).it_b);
		if (tb2) {
			tb1 = Result;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef up2
#undef ur1
#undef arg1
}

/* {ROUTINE}.valid_operands */
EIF_TYPED_VALUE F204_4286 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "valid_operands";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_r
	EIF_BOOLEAN uarg1;
	EIF_BOOLEAN uarg;
	RTS_SD;
	RTS_SDC;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_NATURAL_8 tu1_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,loc3);
	RTLR(4,ur1);
	RTLIU(5);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_INT32, &loc4);
	
	RTEAA(l_feature_name, 203, Current, 4, 1, 10171);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(203, Current, 10171);
	if (arg1) {
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF04,0xFFF9,0,131,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			RTCC(arg1, 203, l_feature_name, 1, typres0, 0x04);
		}
	}
	uarg1 = (EIF_BOOLEAN) RTS_OU (arg1);
	uarg = uarg1;
	if (uarg) {
		RTS_RC;
		RTS_RS (arg1);
		RTS_RW;
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN)(arg1 == NULL)) {
		RTHOOK(2);
		RTDBGAL(0, 0x04000000, 1,0); /* Result */
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(3204, dtype));
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L));
	} else {
		RTHOOK(3);
		if (RTS_CI (EIF_TRUE, arg1)) {
			RTS_BI (arg1);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2033, "count", arg1))(arg1)).it_i4);
			RTS_EI;
		} else {
			RTS_AC (0, arg1);
			RTS_CALL (2033, SK_INT32);
			ti4_1 = l_scoop_result.it_i4;
		}
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(3204, dtype));
		if ((EIF_BOOLEAN) (ti4_1 >= ti4_2)) {
			RTHOOK(4);
			RTDBGAL(0, 0x04000000, 1,0); /* Result */
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			RTHOOK(5);
			RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
			loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
			for (;;) {
				RTHOOK(6);
				ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(3204, dtype));
				if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc1 > ti4_1) || (EIF_BOOLEAN) !Result)) break;
				RTHOOK(7);
				RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
				ui4_1 = loc1;
				if (RTS_CI (EIF_TRUE, arg1)) {
					RTS_BI (arg1);
					tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2591, "item_code", arg1))(arg1, ui4_1x)).it_n1);
					RTS_EI;
				} else {
					RTS_AC (1, arg1);
					RTS_AA (ui4_1x, it_i4, SK_INT32, 1);
					RTS_CALL (2591, SK_UINT8);
					tu1_1 = l_scoop_result.it_n1;
				}
				ti4_2 = (EIF_INTEGER_32) tu1_1;
				loc2 = (EIF_INTEGER_32) ti4_2;
				RTHOOK(8);
				RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
				ui4_1 = loc1;
				ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(3223, dtype))(Current, ui4_1x)).it_i4);
				loc4 = (EIF_INTEGER_32) ti4_2;
				RTHOOK(9);
				switch (loc2) {
					case 1L:
						RTHOOK(10);
						RTDBGAL(0, 0x04000000, 1,0); /* Result */
						tr1 = RTLNTY2(eif_new_type(169, 0x00), 0x00);
						ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2467, "type_id", tr1))(tr1)).it_i4);
						Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(loc4 == ti4_2);
						break;
					case 2L:
						RTHOOK(11);
						RTDBGAL(0, 0x04000000, 1,0); /* Result */
						tr1 = RTLNTY2(eif_new_type(166, 0x00), 0x00);
						ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2467, "type_id", tr1))(tr1)).it_i4);
						Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(loc4 == ti4_2);
						break;
					case 14L:
						RTHOOK(12);
						RTDBGAL(0, 0x04000000, 1,0); /* Result */
						tr1 = RTLNTY2(eif_new_type(163, 0x00), 0x00);
						ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2467, "type_id", tr1))(tr1)).it_i4);
						Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(loc4 == ti4_2);
						break;
					case 6L:
						RTHOOK(13);
						RTDBGAL(0, 0x04000000, 1,0); /* Result */
						tr1 = RTLNTY2(eif_new_type(142, 0x00), 0x00);
						ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2467, "type_id", tr1))(tr1)).it_i4);
						Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(loc4 == ti4_2);
						break;
					case 7L:
						RTHOOK(14);
						RTDBGAL(0, 0x04000000, 1,0); /* Result */
						tr1 = RTLNTY2(eif_new_type(139, 0x00), 0x00);
						ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2467, "type_id", tr1))(tr1)).it_i4);
						Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(loc4 == ti4_2);
						break;
					case 8L:
						RTHOOK(15);
						RTDBGAL(0, 0x04000000, 1,0); /* Result */
						tr1 = RTLNTY2(eif_new_type(136, 0x00), 0x00);
						ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2467, "type_id", tr1))(tr1)).it_i4);
						Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(loc4 == ti4_2);
						break;
					case 9L:
						RTHOOK(16);
						RTDBGAL(0, 0x04000000, 1,0); /* Result */
						tr1 = RTLNTY2(eif_new_type(133, 0x00), 0x00);
						ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2467, "type_id", tr1))(tr1)).it_i4);
						Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(loc4 == ti4_2);
						break;
					case 10L:
						RTHOOK(17);
						RTDBGAL(0, 0x04000000, 1,0); /* Result */
						tr1 = RTLNTY2(eif_new_type(154, 0x00), 0x00);
						ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2467, "type_id", tr1))(tr1)).it_i4);
						Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(loc4 == ti4_2);
						break;
					case 11L:
						RTHOOK(18);
						RTDBGAL(0, 0x04000000, 1,0); /* Result */
						tr1 = RTLNTY2(eif_new_type(151, 0x00), 0x00);
						ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2467, "type_id", tr1))(tr1)).it_i4);
						Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(loc4 == ti4_2);
						break;
					case 12L:
						RTHOOK(19);
						RTDBGAL(0, 0x04000000, 1,0); /* Result */
						tr1 = RTLNTY2(eif_new_type(148, 0x00), 0x00);
						ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2467, "type_id", tr1))(tr1)).it_i4);
						Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(loc4 == ti4_2);
						break;
					case 13L:
						RTHOOK(20);
						RTDBGAL(0, 0x04000000, 1,0); /* Result */
						tr1 = RTLNTY2(eif_new_type(145, 0x00), 0x00);
						ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2467, "type_id", tr1))(tr1)).it_i4);
						Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(loc4 == ti4_2);
						break;
					case 5L:
						RTHOOK(21);
						RTDBGAL(0, 0x04000000, 1,0); /* Result */
						tr1 = RTLNTY2(eif_new_type(172, 0x00), 0x00);
						ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2467, "type_id", tr1))(tr1)).it_i4);
						Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(loc4 == ti4_2);
						break;
					case 4L:
						RTHOOK(22);
						RTDBGAL(0, 0x04000000, 1,0); /* Result */
						tr1 = RTLNTY2(eif_new_type(157, 0x00), 0x00);
						ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2467, "type_id", tr1))(tr1)).it_i4);
						Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(loc4 == ti4_2);
						break;
					case 3L:
						RTHOOK(23);
						RTDBGAL(0, 0x04000000, 1,0); /* Result */
						tr1 = RTLNTY2(eif_new_type(160, 0x00), 0x00);
						ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2467, "type_id", tr1))(tr1)).it_i4);
						Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(loc4 == ti4_2);
						break;
					case 0L:
						RTHOOK(24);
						RTDBGAL(3, 0xF8000000, 0, 0); /* loc3 */
						ui4_1 = loc1;
						if (RTS_CI (EIF_TRUE, arg1)) {
							RTS_BI (arg1);
							tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2031, "item", arg1))(arg1, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							RTS_EI;
						} else {
							RTS_AC (1, arg1);
							RTS_AA (ui4_1x, it_i4, SK_INT32, 1);
							RTS_CALL (2031, SK_REF);
							if ((l_scoop_result.type & SK_HEAD) != SK_REF) l_scoop_result.it_r = RTBU(l_scoop_result);
							tr1 = l_scoop_result.it_r;
						}
						loc3 = (EIF_REFERENCE) RTCCL(tr1);
						RTHOOK(25);
						ui4_1 = loc4;
						tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1391, dtype))(Current, ui4_1x)).it_b);
						if (tb1) {
							RTHOOK(26);
							RTDBGAL(0, 0x04000000, 1,0); /* Result */
							tb1 = '\0';
							if ((EIF_BOOLEAN)(loc3 != NULL)) {
								ur1 = RTCCL(loc3);
								ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(327, 14))(Current, ur1x)).it_i4);
								ui4_1 = ti4_2;
								ui4_2 = loc4;
								tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1381, dtype))(Current, ui4_1x, ui4_2x)).it_b);
								tb1 = tb2;
							}
							Result = (EIF_BOOLEAN) tb1;
						} else {
							RTHOOK(27);
							RTDBGAL(0, 0x04000000, 1,0); /* Result */
							tb1 = '\01';
							if (!(EIF_BOOLEAN)(loc3 == NULL)) {
								ur1 = RTCCL(loc3);
								ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(327, 14))(Current, ur1x)).it_i4);
								ui4_1 = ti4_2;
								ui4_2 = loc4;
								tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1381, dtype))(Current, ui4_1x, ui4_2x)).it_b);
								tb1 = tb2;
							}
							Result = (EIF_BOOLEAN) tb1;
						}
						break;
					default:
						RTHOOK(28);
						RTDBGAL(0, 0x04000000, 1,0); /* Result */
						Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
						break;
				}
				RTHOOK(29);
				RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
				loc1++;
			}
		}
	}
	RTHOOK(30);
	tb1 = *(EIF_BOOLEAN *)(Current + RTWA(3203, dtype));
	if ((EIF_BOOLEAN) (Result && (EIF_BOOLEAN) !tb1)) {
		RTHOOK(31);
		RTDBGAL(0, 0x04000000, 1,0); /* Result */
		tb1 = '\0';
		tb2 = '\0';
		if ((EIF_BOOLEAN)(arg1 != NULL)) {
			if (RTS_CI (EIF_TRUE, arg1)) {
				RTS_BI (arg1);
				tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2515, "is_empty", arg1))(arg1)).it_b);
				RTS_EI;
			} else {
				RTS_AC (0, arg1);
				RTS_CALL (2515, SK_BOOL);
				tb3 = l_scoop_result.it_b;
			}
			tb2 = (EIF_BOOLEAN) !tb3;
		}
		if (tb2) {
			ui4_1 = ((EIF_INTEGER_32) 1L);
			if (RTS_CI (EIF_TRUE, arg1)) {
				RTS_BI (arg1);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2031, "item", arg1))(arg1, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTS_EI;
			} else {
				RTS_AC (1, arg1);
				RTS_AA (ui4_1x, it_i4, SK_INT32, 1);
				RTS_CALL (2031, SK_REF);
				if ((l_scoop_result.type & SK_HEAD) != SK_REF) l_scoop_result.it_r = RTBU(l_scoop_result);
				tr1 = l_scoop_result.it_r;
			}
			tb1 = (EIF_BOOLEAN)(tr1 != NULL);
		}
		Result = (EIF_BOOLEAN) tb1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(32);
	RTDBGLE;
	RTMD(0);
	if (uarg) {
		RTS_RD;
	}
	RTLE;
	RTLO(7);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
#undef ui4_2
#undef arg1
}

/* {ROUTINE}.valid_target */
EIF_TYPED_VALUE F204_4287 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "valid_target";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLIU(3);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 203, Current, 0, 1, 10172);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(203, Current, 10172);
	if (arg1) {
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFFF9,0,131,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			RTCC(arg1, 203, l_feature_name, 1, typres0, 0x00);
		}
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = '\0';
	if ((EIF_BOOLEAN)(arg1 != NULL)) {
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2033, "count", arg1))(arg1)).it_i4);
		tb1 = (EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L));
	}
	if (tb1) {
		RTHOOK(2);
		ui4_1 = ((EIF_INTEGER_32) 1L);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2556, "is_reference_item", arg1))(arg1, ui4_1x)).it_b);
		if (tb1) {
			RTHOOK(3);
			RTDBGAL(0, 0x04000000, 1,0); /* Result */
			ui4_1 = ((EIF_INTEGER_32) 1L);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2490, "reference_item", arg1))(arg1, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tr1 != NULL);
		} else {
			RTHOOK(4);
			RTDBGAL(0, 0x04000000, 1,0); /* Result */
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef ui4_1
#undef arg1
}

/* {ROUTINE}.is_target_closed */
EIF_TYPED_VALUE F204_4288 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(3203,Dtype(Current)));
	return r;
}


/* {ROUTINE}.open_count */
EIF_TYPED_VALUE F204_4289 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(3204,Dtype(Current)));
	return r;
}


/* {ROUTINE}.set_operands */
void F204_4290 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_operands";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 203, Current, 0, 1, 10175);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(203, Current, 10175);
	RTCC(arg1, 203, l_feature_name, 1, RTWCT(3229, dtype, Dftype(Current)), 0x02);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_operands", EX_PRE);
		ur1 = RTCCL(arg1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(3201, dtype))(Current, ur1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 3195, 0xF8000083, 0); /* operands */
	tr1 = RTCCL(arg1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(3195, dtype)) = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("operands_set", EX_POST);
		tb1 = '\01';
		tb2 = '\01';
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3195, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if ((EIF_BOOLEAN)(tr1 != NULL)) {
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3195, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			tb2 = RTEQ(tr1, arg1);
		}
		if (!tb2) {
			tb2 = '\01';
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3195, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			if ((EIF_BOOLEAN)(tr1 == NULL)) {
				tb3 = '\01';
				if (!(EIF_BOOLEAN)(arg1 == NULL)) {
					tb4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2515, "is_empty", arg1))(arg1)).it_b);
					tb3 = tb4;
				}
				tb2 = tb3;
			}
			tb1 = tb2;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef ur1
#undef arg1
}

/* {ROUTINE}.set_target */
void F204_4291 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_target";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc2);
	RTLR(4,ur1);
	RTLR(5,loc1);
	RTLIU(6);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 203, Current, 2, 1, 10176);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(203, Current, 10176);
	RTCC(arg1, 203, l_feature_name, 1, RTWCT(3196, dtype, Dftype(Current)), 0x00);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_target_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("is_target_closed", EX_PRE);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(3203, dtype));
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("target_not_void", EX_PRE);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3196, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTTE((EIF_BOOLEAN)(tr1 != NULL), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("same_target_type", EX_PRE);
		tb1 = '\0';
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3196, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc2 = RTCCL(tr1);
		if (EIF_TEST(loc2)) {
			ur1 = RTCCL(arg1);
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(10, "same_type", loc2))(loc2, ur1x)).it_b);
			tb1 = tb2;
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	RTDBGAL(1, 0xF8000083, 0, 0); /* loc1 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3210, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(6);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTHOOK(7);
		ur1 = RTCCL(arg1);
		ui4_1 = ((EIF_INTEGER_32) 1L);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2516, "put", loc1))(loc1, ur1x, ui4_1x);
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("target_set", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3196, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if (RTCEQ(tr1, arg1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
#undef up1
#undef ur1
#undef ui4_1
#undef arg1
}

/* {ROUTINE}.copy */
void F204_4292 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "copy";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLR(3,loc1);
	RTLR(4,tr1);
	RTLIU(5);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 203, Current, 1, 1, 10177);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(203, Current, 10177);
	RTCC(arg1, 203, l_feature_name, 1, eif_new_type(Dftype(Current), 1), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("other_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("type_identity", EX_PRE);
		ur1 = RTCCL(arg1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(10, dtype))(Current, ur1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	if (!RTCEQ(arg1, Current)) {
		RTHOOK(4);
		ur1 = RTCCL(arg1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(19, dtype))(Current, ur1x);
		RTHOOK(5);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3195, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc1 = RTCCL(tr1);
		if (EIF_TEST(loc1)) {
			RTHOOK(6);
			RTDBGAA(Current, dtype, 3195, 0xF8000083, 0); /* operands */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(17, "twin", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			tr1 = RTCCL(tr1);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + RTWA(3195, dtype)) = (EIF_REFERENCE) tr1;
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("is_equal", EX_POST);
		if (RTEQ(Current, arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("same_call_status", EX_POST);
		tb1 = '\01';
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3200, "callable", arg1))(arg1)).it_b);
		if (tb2) {
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3200, dtype))(Current)).it_b);
			tb1 = tb2;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef up1
#undef ur1
#undef arg1
}

/* {ROUTINE}.flexible_call */
void F204_4295 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "flexible_call";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_BOOLEAN uarg1;
	EIF_BOOLEAN uarg;
	RTS_SD;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,ur1);
	RTLR(3,loc1);
	RTLR(4,loc2);
	RTLR(5,tr1);
	RTLIU(6);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 203, Current, 2, 1, 10178);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(203, Current, 10178);
	if (arg1) {
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF04,0xFFF9,0,131,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			RTCC(arg1, 203, l_feature_name, 1, typres0, 0x04);
		}
	}
	uarg1 = (EIF_BOOLEAN) RTS_OU (arg1);
	uarg = uarg1;
	if (uarg) {
		RTS_RC;
		RTS_RS (arg1);
		RTS_RW;
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_operands", EX_PRE);
		ur1 = RTCCL(arg1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(3201, dtype))(Current, ur1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	if ((EIF_BOOLEAN) !(EIF_BOOLEAN)(arg1 != NULL)) {
		RTHOOK(3);
		ur1 = RTCCL(loc1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(3207, dtype))(Current, ur1x);
	} else {
		RTHOOK(4);
		RTCT0("from_precondition", EX_CHECK);
		tr1 = RTLNTY2(RTWCT(3229, dtype, Dftype(Current)), 0x00);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2467, "type_id", tr1))(tr1)).it_i4);
		ui4_1 = ti4_1;
		ur1 = RTCCL(arg1);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1386, dtype))(Current, ui4_1x, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc2 = RTCCL(tr1);
		loc2 = RTRV(RTWCT(3229, dtype, Dftype(Current)),loc2);
		if (EIF_TEST(loc2)) {
			RTCK0;
		} else {
			RTCF0;
		}
		RTHOOK(5);
		ur1 = RTCCL(loc2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(3207, dtype))(Current, ur1x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	if (uarg) {
		RTS_RD;
	}
	RTLE;
	RTLO(5);
	RTEE;
#undef up1
#undef ur1
#undef ui4_1
#undef arg1
}

/* {ROUTINE}.correct_mismatch */
void F204_4296 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "correct_mismatch";
	RTEX;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 203, Current, 0, 0, 10179);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(203, Current, 10179);
	RTIV(Current, RTAL);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {ROUTINE}.closed_operands */
EIF_TYPED_VALUE F204_4297 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(3210,Dtype(Current)));
	return r;
}


/* {ROUTINE}.closed_count */
EIF_TYPED_VALUE F204_4298 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "closed_count";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 203, Current, 1, 0, 10181);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(203, Current, 10181);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF8000083, 0, 0); /* loc1 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3210, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTHOOK(3);
		RTDBGAL(0, 0x10000000, 1,0); /* Result */
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2033, "count", loc1))(loc1)).it_i4);
		Result = (EIF_INTEGER_32) ti4_1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef up1
}

/* {ROUTINE}.rout_disp */
EIF_TYPED_VALUE F204_4299 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_POINTER;
	r.it_p = *(EIF_POINTER *)(Current + RTWA(3212,Dtype(Current)));
	return r;
}


/* {ROUTINE}.calc_rout_addr */
EIF_TYPED_VALUE F204_4300 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_POINTER;
	r.it_p = *(EIF_POINTER *)(Current + RTWA(3213,Dtype(Current)));
	return r;
}


/* {ROUTINE}.open_map */
EIF_TYPED_VALUE F204_4301 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(3214,Dtype(Current)));
	return r;
}


/* {ROUTINE}.encaps_rout_disp */
EIF_TYPED_VALUE F204_4302 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_POINTER;
	r.it_p = *(EIF_POINTER *)(Current + RTWA(3215,Dtype(Current)));
	return r;
}


/* {ROUTINE}.routine_id */
EIF_TYPED_VALUE F204_4303 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(3216,Dtype(Current)));
	return r;
}


/* {ROUTINE}.is_basic */
EIF_TYPED_VALUE F204_4304 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(3217,Dtype(Current)));
	return r;
}


/* {ROUTINE}.written_type_id_inline_agent */
EIF_TYPED_VALUE F204_4305 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(3218,Dtype(Current)));
	return r;
}


/* {ROUTINE}.set_rout_disp */
void F204_4306 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x, EIF_TYPED_VALUE arg6x, EIF_TYPED_VALUE arg7x, EIF_TYPED_VALUE arg8x, EIF_TYPED_VALUE arg9x, EIF_TYPED_VALUE arg10x)
{
	GTCX
	char *l_feature_name = "set_rout_disp";
	RTEX;
#define arg1 arg1x.it_p
#define arg2 arg2x.it_p
#define arg3 arg3x.it_p
#define arg4 arg4x.it_i4
#define arg5 arg5x.it_r
#define arg6 arg6x.it_b
#define arg7 arg7x.it_b
#define arg8 arg8x.it_i4
#define arg9 arg9x.it_r
#define arg10 arg10x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE up3x = {{0}, SK_POINTER};
#define up3 up3x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_TYPED_VALUE ub2x = {{0}, SK_BOOL};
#define ub2 ub2x.it_b
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg10x.type & SK_HEAD) == SK_REF) arg10x.it_i4 = * (EIF_INTEGER_32 *) arg10x.it_r;
	if ((arg8x.type & SK_HEAD) == SK_REF) arg8x.it_i4 = * (EIF_INTEGER_32 *) arg8x.it_r;
	if ((arg7x.type & SK_HEAD) == SK_REF) arg7x.it_b = * (EIF_BOOLEAN *) arg7x.it_r;
	if ((arg6x.type & SK_HEAD) == SK_REF) arg6x.it_b = * (EIF_BOOLEAN *) arg6x.it_r;
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_i4 = * (EIF_INTEGER_32 *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_p = * (EIF_POINTER *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_p = * (EIF_POINTER *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(5);
	RTLR(0,arg5);
	RTLR(1,arg9);
	RTLR(2,ur1);
	RTLR(3,Current);
	RTLR(4,ur2);
	RTLIU(5);
	RTLU (SK_VOID, NULL);
	RTLU(SK_POINTER,&arg1);
	RTLU(SK_POINTER,&arg2);
	RTLU(SK_POINTER,&arg3);
	RTLU(SK_INT32,&arg4);
	RTLU(SK_REF,&arg5);
	RTLU(SK_BOOL,&arg6);
	RTLU(SK_BOOL,&arg7);
	RTLU(SK_INT32,&arg8);
	RTLU(SK_REF,&arg9);
	RTLU(SK_INT32,&arg10);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 203, Current, 0, 10, 10189);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(203, Current, 10189);
	RTCC(arg5, 203, l_feature_name, 5, RTWCT(3214, dtype, Dftype(Current)), 0x00);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,0,131,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg9, 203, l_feature_name, 9, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_routine_id_valid", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg4 > ((EIF_INTEGER_32) -1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("target_valid", EX_PRE);
		tb1 = '\01';
		if (arg7) {
			ur1 = RTCCL(arg9);
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(3202, dtype))(Current, ur1x)).it_b);
			tb1 = tb2;
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	up1 = arg1;
	up2 = arg2;
	up3 = arg3;
	ui4_1 = arg4;
	ur1 = RTCCL(arg5);
	ub1 = arg6;
	ub2 = arg7;
	ui4_2 = arg8;
	ur2 = RTCCL(arg9);
	ui4_3 = arg10;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3221, dtype))(Current, up1x, up2x, up3x, ui4_1x, ur1x, ub1x, ub2x, ui4_2x, ur2x, ui4_3x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(12);
	RTEE;
#undef up1
#undef up2
#undef up3
#undef ur1
#undef ur2
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ub1
#undef ub2
#undef arg10
#undef arg9
#undef arg8
#undef arg7
#undef arg6
#undef arg5
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {ROUTINE}.set_rout_disp_final */
void F204_4307 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x, EIF_TYPED_VALUE arg6x)
{
	GTCX
	char *l_feature_name = "set_rout_disp_final";
	RTEX;
#define arg1 arg1x.it_p
#define arg2 arg2x.it_p
#define arg3 arg3x.it_p
#define arg4 arg4x.it_r
#define arg5 arg5x.it_b
#define arg6 arg6x.it_i4
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg6x.type & SK_HEAD) == SK_REF) arg6x.it_i4 = * (EIF_INTEGER_32 *) arg6x.it_r;
	if ((arg5x.type & SK_HEAD) == SK_REF) arg5x.it_b = * (EIF_BOOLEAN *) arg5x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_p = * (EIF_POINTER *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_p = * (EIF_POINTER *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(4);
	RTLR(0,arg4);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU(SK_POINTER,&arg1);
	RTLU(SK_POINTER,&arg2);
	RTLU(SK_POINTER,&arg3);
	RTLU(SK_REF,&arg4);
	RTLU(SK_BOOL,&arg5);
	RTLU(SK_INT32,&arg6);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 203, Current, 0, 6, 10190);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(203, Current, 10190);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,0,131,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg4, 203, l_feature_name, 4, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("target_valid", EX_PRE);
		tb1 = '\01';
		if (arg5) {
			ur1 = RTCCL(arg4);
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(3202, dtype))(Current, ur1x)).it_b);
			tb1 = tb2;
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 3212, 0x40000000, 1); /* rout_disp */
	*(EIF_POINTER *)(Current + RTWA(3212, dtype)) = (EIF_POINTER) arg1;
	RTHOOK(3);
	RTDBGAA(Current, dtype, 3215, 0x40000000, 1); /* encaps_rout_disp */
	*(EIF_POINTER *)(Current + RTWA(3215, dtype)) = (EIF_POINTER) arg2;
	RTHOOK(4);
	RTDBGAA(Current, dtype, 3213, 0x40000000, 1); /* calc_rout_addr */
	*(EIF_POINTER *)(Current + RTWA(3213, dtype)) = (EIF_POINTER) arg3;
	RTHOOK(5);
	RTDBGAA(Current, dtype, 3210, 0xF8000083, 0); /* closed_operands */
	tr1 = RTCCL(arg4);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(3210, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(6);
	RTDBGAA(Current, dtype, 3203, 0x04000000, 1); /* is_target_closed */
	*(EIF_BOOLEAN *)(Current + RTWA(3203, dtype)) = (EIF_BOOLEAN) arg5;
	RTHOOK(7);
	RTDBGAA(Current, dtype, 3204, 0x10000000, 1); /* open_count */
	*(EIF_INTEGER_32 *)(Current + RTWA(3204, dtype)) = (EIF_INTEGER_32) arg6;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(8);
	RTEE;
#undef ur1
#undef arg6
#undef arg5
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {ROUTINE}.set_rout_disp_int */
void F204_4308 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x, EIF_TYPED_VALUE arg6x, EIF_TYPED_VALUE arg7x, EIF_TYPED_VALUE arg8x, EIF_TYPED_VALUE arg9x, EIF_TYPED_VALUE arg10x)
{
	GTCX
	char *l_feature_name = "set_rout_disp_int";
	RTEX;
#define arg1 arg1x.it_p
#define arg2 arg2x.it_p
#define arg3 arg3x.it_p
#define arg4 arg4x.it_i4
#define arg5 arg5x.it_r
#define arg6 arg6x.it_b
#define arg7 arg7x.it_b
#define arg8 arg8x.it_i4
#define arg9 arg9x.it_r
#define arg10 arg10x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg10x.type & SK_HEAD) == SK_REF) arg10x.it_i4 = * (EIF_INTEGER_32 *) arg10x.it_r;
	if ((arg8x.type & SK_HEAD) == SK_REF) arg8x.it_i4 = * (EIF_INTEGER_32 *) arg8x.it_r;
	if ((arg7x.type & SK_HEAD) == SK_REF) arg7x.it_b = * (EIF_BOOLEAN *) arg7x.it_r;
	if ((arg6x.type & SK_HEAD) == SK_REF) arg6x.it_b = * (EIF_BOOLEAN *) arg6x.it_r;
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_i4 = * (EIF_INTEGER_32 *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_p = * (EIF_POINTER *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_p = * (EIF_POINTER *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(5);
	RTLR(0,arg5);
	RTLR(1,arg9);
	RTLR(2,ur1);
	RTLR(3,Current);
	RTLR(4,tr1);
	RTLIU(5);
	RTLU (SK_VOID, NULL);
	RTLU(SK_POINTER,&arg1);
	RTLU(SK_POINTER,&arg2);
	RTLU(SK_POINTER,&arg3);
	RTLU(SK_INT32,&arg4);
	RTLU(SK_REF,&arg5);
	RTLU(SK_BOOL,&arg6);
	RTLU(SK_BOOL,&arg7);
	RTLU(SK_INT32,&arg8);
	RTLU(SK_REF,&arg9);
	RTLU(SK_INT32,&arg10);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 203, Current, 0, 10, 10191);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(203, Current, 10191);
	RTCC(arg5, 203, l_feature_name, 5, RTWCT(3214, dtype, Dftype(Current)), 0x00);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,0,131,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg9, 203, l_feature_name, 9, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_routine_id_valid", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg4 > ((EIF_INTEGER_32) -1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("target_valid", EX_PRE);
		tb1 = '\01';
		if (arg7) {
			ur1 = RTCCL(arg9);
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(3202, dtype))(Current, ur1x)).it_b);
			tb1 = tb2;
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTDBGAA(Current, dtype, 3212, 0x40000000, 1); /* rout_disp */
	*(EIF_POINTER *)(Current + RTWA(3212, dtype)) = (EIF_POINTER) arg1;
	RTHOOK(4);
	RTDBGAA(Current, dtype, 3215, 0x40000000, 1); /* encaps_rout_disp */
	*(EIF_POINTER *)(Current + RTWA(3215, dtype)) = (EIF_POINTER) arg2;
	RTHOOK(5);
	RTDBGAA(Current, dtype, 3213, 0x40000000, 1); /* calc_rout_addr */
	*(EIF_POINTER *)(Current + RTWA(3213, dtype)) = (EIF_POINTER) arg3;
	RTHOOK(6);
	RTDBGAA(Current, dtype, 3216, 0x10000000, 1); /* routine_id */
	*(EIF_INTEGER_32 *)(Current + RTWA(3216, dtype)) = (EIF_INTEGER_32) arg4;
	RTHOOK(7);
	RTDBGAA(Current, dtype, 3214, 0xF80001CB, 0); /* open_map */
	tr1 = RTCCL(arg5);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(3214, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(8);
	RTDBGAA(Current, dtype, 3217, 0x04000000, 1); /* is_basic */
	*(EIF_BOOLEAN *)(Current + RTWA(3217, dtype)) = (EIF_BOOLEAN) arg6;
	RTHOOK(9);
	RTDBGAA(Current, dtype, 3203, 0x04000000, 1); /* is_target_closed */
	*(EIF_BOOLEAN *)(Current + RTWA(3203, dtype)) = (EIF_BOOLEAN) arg7;
	RTHOOK(10);
	RTDBGAA(Current, dtype, 3218, 0x10000000, 1); /* written_type_id_inline_agent */
	*(EIF_INTEGER_32 *)(Current + RTWA(3218, dtype)) = (EIF_INTEGER_32) arg8;
	RTHOOK(11);
	RTDBGAA(Current, dtype, 3210, 0xF8000083, 0); /* closed_operands */
	tr1 = RTCCL(arg9);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(3210, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(12);
	RTDBGAA(Current, dtype, 3204, 0x10000000, 1); /* open_count */
	*(EIF_INTEGER_32 *)(Current + RTWA(3204, dtype)) = (EIF_INTEGER_32) arg10;
	if (RTAL & CK_ENSURE) {
		RTHOOK(13);
		RTCT("rout_disp_set", EX_POST);
		tp1 = *(EIF_POINTER *)(Current + RTWA(3212, dtype));
		if ((EIF_BOOLEAN)(tp1 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(14);
		RTCT("encaps_rout_disp_set", EX_POST);
		tp1 = *(EIF_POINTER *)(Current + RTWA(3215, dtype));
		if ((EIF_BOOLEAN)(tp1 == arg2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(15);
		RTCT("calc_rout_addr_set", EX_POST);
		tp1 = *(EIF_POINTER *)(Current + RTWA(3213, dtype));
		if ((EIF_BOOLEAN)(tp1 == arg3)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(16);
		RTCT("routine_id_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(3216, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == arg4)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(17);
		RTCT("open_map_set", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3214, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if (RTCEQ(tr1, arg5)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(18);
		RTCT("is_target_closed_set", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(3203, dtype));
		if ((EIF_BOOLEAN)(tb1 == arg7)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(19);
		RTCT("is_basic_set", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(3217, dtype));
		if ((EIF_BOOLEAN)(tb1 == arg6)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(20);
		RTCT("written_type_id_inline_agent_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(3218, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == arg8)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(21);
		RTCT("closed_operands_set", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3210, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if (RTCEQ(tr1, arg9)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(22);
		RTCT("open_count_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(3204, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == arg10)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(23);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(12);
	RTEE;
#undef up1
#undef ur1
#undef arg10
#undef arg9
#undef arg8
#undef arg7
#undef arg6
#undef arg5
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {ROUTINE}.open_types */
EIF_TYPED_VALUE F204_4309 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(3222,Dtype(Current)));
	return r;
}


/* {ROUTINE}.open_operand_type */
EIF_TYPED_VALUE F204_4310 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "open_operand_type";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	RTLU (SK_INT32, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 203, Current, 1, 1, 10193);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(203, Current, 10193);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("positive", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("within_bounds", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(3204, dtype));
		RTTE((EIF_BOOLEAN) (arg1 <= ti4_1), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTDBGAL(1, 0xF80001CB, 0, 0); /* loc1 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3222, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	if ((EIF_BOOLEAN)(loc1 == NULL)) {
		RTHOOK(5);
		RTDBGAL(1, 0xF80001CB, 0, 0); /* loc1 */
		tr1 = RTLNSMART(RTWCT(3222, dtype, Dftype(Current)).id);
		ui4_1 = ((EIF_INTEGER_32) -1L);
		ui4_2 = ((EIF_INTEGER_32) 1L);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(3204, dtype));
		ui4_3 = ti4_1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(2056, Dtype(tr1)))(tr1, ui4_1x, ui4_2x, ui4_3x);
		RTNHOOK(5,1);
		loc1 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(6);
		RTDBGAA(Current, dtype, 3222, 0xF80001CB, 0); /* open_types */
		tr1 = RTCCL(loc1);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(3222, dtype)) = (EIF_REFERENCE) tr1;
	}
	RTHOOK(7);
	RTDBGAL(0, 0x10000000, 1,0); /* Result */
	ui4_1 = arg1;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1805, "item", loc1))(loc1, ui4_1x)).it_i4);
	Result = (EIF_INTEGER_32) ti4_1;
	RTHOOK(8);
	if ((EIF_BOOLEAN)(Result == ((EIF_INTEGER_32) -1L))) {
		RTHOOK(9);
		RTDBGAL(0, 0x10000000, 1,0); /* Result */
		tr1 = RTLNTY2(RTWCT(3229, dtype, Dftype(Current)), 0x00);
		ui4_1 = arg1;
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2466, "generic_parameter_type", tr1))(tr1, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2467, "type_id", tr2))(tr2)).it_i4);
		Result = (EIF_INTEGER_32) ti4_1;
		RTHOOK(10);
		ui4_1 = Result;
		ui4_2 = arg1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1808, "put", loc1))(loc1, ui4_1x, ui4_2x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef up1
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef arg1
}

/* {ROUTINE}.type_id_of */
EIF_TYPED_VALUE F204_4311 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "type_id_of";
	RTEX;
#define arg1 arg1x.it_r
	EIF_BOOLEAN uarg1;
	EIF_BOOLEAN uarg;
	RTS_SD;
	RTS_SDC;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLIU(3);
	RTLU (SK_INT32, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 203, Current, 0, 1, 10194);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(203, Current, 10194);
	uarg1 = (EIF_BOOLEAN) RTS_OU (arg1);
	uarg = uarg1;
	if (uarg) {
		RTS_RC;
		RTS_RS (arg1);
		RTS_RW;
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("False", EX_PRE);
		RTTE((EIF_BOOLEAN) 0, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0x10000000, 1,0); /* Result */
	if (RTS_CI (EIF_TRUE, arg1)) {
		RTS_BI (arg1);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(8, "generating_type", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTS_EI;
	} else {
		RTS_AC (0, arg1);
		RTS_CALL (8, SK_REF);
		if ((l_scoop_result.type & SK_HEAD) != SK_REF) l_scoop_result.it_r = RTBU(l_scoop_result);
		tr1 = l_scoop_result.it_r;
	}
	if (RTS_CI (EIF_TRUE, tr1)) {
		RTS_BI (tr1);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2467, "type_id", tr1))(tr1)).it_i4);
		RTS_EI;
	} else {
		RTS_AC (0, tr1);
		RTS_CALL (2467, SK_INT32);
		ti4_1 = l_scoop_result.it_i4;
	}
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	if (uarg) {
		RTS_RD;
	}
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef up1
#undef arg1
}

/* {ROUTINE}.adapt_from */
void F204_4312 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "adapt_from";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 203, Current, 0, 1, 10195);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(203, Current, 10195);
	RTCC(arg1, 203, l_feature_name, 1, eif_new_type(Dftype(Current), 1), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("other_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("conforming", EX_PRE);
		ur1 = RTCCL(arg1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(9, dtype))(Current, ur1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(3194, dtype))(Current, ur1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef ur1
#undef arg1
}

/* {ROUTINE}.arguments */
EIF_TYPED_VALUE F204_4313 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "arguments";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
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
	
	RTEAA(l_feature_name, 203, Current, 0, 0, 10196);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(203, Current, 10196);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0xF8000083, 0,0); /* Result */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3195, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
}

/* {ROUTINE}.set_arguments */
void F204_4314 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_arguments";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 203, Current, 0, 1, 10197);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(203, Current, 10197);
	RTCC(arg1, 203, l_feature_name, 1, RTWCT(3229, dtype, Dftype(Current)), 0x02);
	RTIV(Current, RTAL);
	RTHOOK(1);
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(3205, dtype))(Current, ur1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef ur1
#undef arg1
}

/* {ROUTINE}.valid_arguments */
EIF_TYPED_VALUE F204_4315 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "valid_arguments";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLIU(3);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 203, Current, 0, 1, 10198);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(203, Current, 10198);
	RTCC(arg1, 203, l_feature_name, 1, RTWCT(3229, dtype, Dftype(Current)), 0x02);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	ur1 = RTCCL(arg1);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(3201, dtype))(Current, ur1x)).it_b);
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef ur1
#undef arg1
}

void EIF_Minit204 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
