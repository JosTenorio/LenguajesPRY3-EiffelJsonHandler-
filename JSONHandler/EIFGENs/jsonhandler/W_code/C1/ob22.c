/*
 * Code for class OBJECT_GRAPH_TRAVERSABLE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F22_606(EIF_REFERENCE);
extern EIF_TYPED_VALUE F22_607(EIF_REFERENCE);
extern EIF_TYPED_VALUE F22_608(EIF_REFERENCE);
extern EIF_TYPED_VALUE F22_609(EIF_REFERENCE);
extern EIF_TYPED_VALUE F22_610(EIF_REFERENCE);
extern EIF_TYPED_VALUE F22_611(EIF_REFERENCE);
extern EIF_TYPED_VALUE F22_612(EIF_REFERENCE);
extern EIF_TYPED_VALUE F22_613(EIF_REFERENCE);
extern EIF_TYPED_VALUE F22_614(EIF_REFERENCE);
extern EIF_TYPED_VALUE F22_615(EIF_REFERENCE);
extern EIF_TYPED_VALUE F22_616(EIF_REFERENCE);
extern EIF_TYPED_VALUE F22_617(EIF_REFERENCE);
extern EIF_TYPED_VALUE F22_618(EIF_REFERENCE);
extern EIF_TYPED_VALUE F22_619(EIF_REFERENCE);
extern void F22_620(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F22_621(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F22_622(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F22_623(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F22_624(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F22_625(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F22_626(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F22_627(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F22_628(EIF_REFERENCE);
extern void F22_629(EIF_REFERENCE);
extern EIF_TYPED_VALUE F22_631(EIF_REFERENCE);
extern void F22_632(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F22_633(EIF_REFERENCE);
extern void EIF_Minit22(void);

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {OBJECT_GRAPH_TRAVERSABLE}.root_object */
EIF_TYPED_VALUE F22_606 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(610,Dtype(Current)));
	return r;
}


/* {OBJECT_GRAPH_TRAVERSABLE}.on_processing_object_action */
EIF_TYPED_VALUE F22_607 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(611,Dtype(Current)));
	return r;
}


/* {OBJECT_GRAPH_TRAVERSABLE}.on_processing_reference_action */
EIF_TYPED_VALUE F22_608 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(612,Dtype(Current)));
	return r;
}


/* {OBJECT_GRAPH_TRAVERSABLE}.object_action */
EIF_TYPED_VALUE F22_609 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(613,Dtype(Current)));
	return r;
}


/* {OBJECT_GRAPH_TRAVERSABLE}.visited_objects */
EIF_TYPED_VALUE F22_610 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(614,Dtype(Current)));
	return r;
}


/* {OBJECT_GRAPH_TRAVERSABLE}.visited_types */
EIF_TYPED_VALUE F22_611 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(615,Dtype(Current)));
	return r;
}


/* {OBJECT_GRAPH_TRAVERSABLE}.has_failed */
EIF_TYPED_VALUE F22_612 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(616,Dtype(Current)));
	return r;
}


/* {OBJECT_GRAPH_TRAVERSABLE}.is_root_object_set */
EIF_TYPED_VALUE F22_613 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_root_object_set";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 21, Current, 0, 0, 690);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(21, Current, 690);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(610, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tr1 != NULL);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
}

/* {OBJECT_GRAPH_TRAVERSABLE}.is_object_action_set */
EIF_TYPED_VALUE F22_614 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_object_action_set";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 21, Current, 0, 0, 691);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(21, Current, 691);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(613, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tr1 != NULL);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
}

/* {OBJECT_GRAPH_TRAVERSABLE}.has_reference_with_copy_semantics */
EIF_TYPED_VALUE F22_615 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(619,Dtype(Current)));
	return r;
}


/* {OBJECT_GRAPH_TRAVERSABLE}.is_skip_transient */
EIF_TYPED_VALUE F22_616 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(620,Dtype(Current)));
	return r;
}


/* {OBJECT_GRAPH_TRAVERSABLE}.is_skip_copy_semantics_reference */
EIF_TYPED_VALUE F22_617 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(621,Dtype(Current)));
	return r;
}


/* {OBJECT_GRAPH_TRAVERSABLE}.is_exception_on_copy_suppressed */
EIF_TYPED_VALUE F22_618 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(622,Dtype(Current)));
	return r;
}


/* {OBJECT_GRAPH_TRAVERSABLE}.is_exception_propagated */
EIF_TYPED_VALUE F22_619 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(623,Dtype(Current)));
	return r;
}


/* {OBJECT_GRAPH_TRAVERSABLE}.set_root_object */
void F22_620 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_root_object";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 21, Current, 0, 1, 697);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(21, Current, 697);
	RTCC(arg1, 21, l_feature_name, 1, RTWCT(610, dtype, Dftype(Current)), 0x00);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("an_object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 610, 0xF8000000, 0); /* root_object */
	tr1 = RTCCL(arg1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(610, dtype)) = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("root_object_set", EX_POST);
		tb1 = '\0';
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(610, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if (RTCEQ(tr1, arg1)) {
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(617, dtype))(Current)).it_b);
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
#undef arg1
}

/* {OBJECT_GRAPH_TRAVERSABLE}.set_on_processing_object_action */
void F22_621 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_on_processing_object_action";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 21, Current, 0, 1, 698);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(21, Current, 698);
	RTCC(arg1, 21, l_feature_name, 1, RTWCT(611, dtype, Dftype(Current)), 0x00);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("an_action_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 611, 0xF80000CA, 0); /* on_processing_object_action */
	tr1 = RTCCL(arg1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(611, dtype)) = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("on_processing_object_action_set", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(611, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if (RTCEQ(tr1, arg1)) {
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
#undef arg1
}

/* {OBJECT_GRAPH_TRAVERSABLE}.set_on_processing_reference_action */
void F22_622 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_on_processing_reference_action";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 21, Current, 0, 1, 699);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(21, Current, 699);
	RTCC(arg1, 21, l_feature_name, 1, RTWCT(612, dtype, Dftype(Current)), 0x00);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("an_action_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 612, 0xF80000CA, 0); /* on_processing_reference_action */
	tr1 = RTCCL(arg1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(612, dtype)) = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("on_processing_reference_action_set", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(612, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if (RTCEQ(tr1, arg1)) {
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
#undef arg1
}

/* {OBJECT_GRAPH_TRAVERSABLE}.set_object_action */
void F22_623 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_object_action";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 21, Current, 0, 1, 700);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(21, Current, 700);
	RTCC(arg1, 21, l_feature_name, 1, RTWCT(613, dtype, Dftype(Current)), 0x00);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("an_object_action_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 613, 0xF80000CA, 0); /* object_action */
	tr1 = RTCCL(arg1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(613, dtype)) = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("an_object_action_set", EX_POST);
		tb1 = '\0';
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(613, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if (RTCEQ(tr1, arg1)) {
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(618, dtype))(Current)).it_b);
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
#undef arg1
}

/* {OBJECT_GRAPH_TRAVERSABLE}.set_is_skip_transient */
void F22_624 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_is_skip_transient";
	RTEX;
#define arg1 arg1x.it_b
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_b = * (EIF_BOOLEAN *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_BOOL,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 21, Current, 0, 1, 701);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(21, Current, 701);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 620, 0x04000000, 1); /* is_skip_transient */
	*(EIF_BOOLEAN *)(Current + RTWA(620, dtype)) = (EIF_BOOLEAN) arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("is_skip_transient_set", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(620, dtype));
		if ((EIF_BOOLEAN)(tb1 == arg1)) {
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
	RTLO(3);
	RTEE;
#undef arg1
}

/* {OBJECT_GRAPH_TRAVERSABLE}.set_is_skip_copy_semantics_reference */
void F22_625 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_is_skip_copy_semantics_reference";
	RTEX;
#define arg1 arg1x.it_b
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_b = * (EIF_BOOLEAN *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_BOOL,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 21, Current, 0, 1, 702);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(21, Current, 702);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 621, 0x04000000, 1); /* is_skip_copy_semantics_reference */
	*(EIF_BOOLEAN *)(Current + RTWA(621, dtype)) = (EIF_BOOLEAN) arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("is_skip_copy_semantics_reference_set", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(621, dtype));
		if ((EIF_BOOLEAN)(tb1 == arg1)) {
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
	RTLO(3);
	RTEE;
#undef arg1
}

/* {OBJECT_GRAPH_TRAVERSABLE}.set_is_exception_on_copy_suppressed */
void F22_626 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_is_exception_on_copy_suppressed";
	RTEX;
#define arg1 arg1x.it_b
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_b = * (EIF_BOOLEAN *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_BOOL,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 21, Current, 0, 1, 703);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(21, Current, 703);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 622, 0x04000000, 1); /* is_exception_on_copy_suppressed */
	*(EIF_BOOLEAN *)(Current + RTWA(622, dtype)) = (EIF_BOOLEAN) arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("is_exception_on_copy_suppressed_set", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(622, dtype));
		if ((EIF_BOOLEAN)(tb1 == arg1)) {
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
	RTLO(3);
	RTEE;
#undef arg1
}

/* {OBJECT_GRAPH_TRAVERSABLE}.set_is_exception_propagated */
void F22_627 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_is_exception_propagated";
	RTEX;
#define arg1 arg1x.it_b
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_b = * (EIF_BOOLEAN *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_BOOL,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 21, Current, 0, 1, 704);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(21, Current, 704);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 623, 0x04000000, 1); /* is_exception_propagated */
	*(EIF_BOOLEAN *)(Current + RTWA(623, dtype)) = (EIF_BOOLEAN) arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("is_exception_propagated_set", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(623, dtype));
		if ((EIF_BOOLEAN)(tb1 == arg1)) {
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
	RTLO(3);
	RTEE;
#undef arg1
}

/* {OBJECT_GRAPH_TRAVERSABLE}.traverse */
#undef EIF_VOLATILE
#define EIF_VOLATILE volatile
void F22_628 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "traverse";
	RTEX;
	RTED;
	EIF_REFERENCE EIF_VOLATILE loc1 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN EIF_VOLATILE loc2 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN EIF_VOLATILE loc3 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE EIF_VOLATILE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE saved_except = (EIF_REFERENCE) 0;
	RTS_SDX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE  EIF_VOLATILE tr1 = NULL;
	EIF_BOOLEAN  EIF_VOLATILE tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTDT;
	RTLD;
	RTXD;
	RTLXD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,loc4);
	RTLR(2,tr1);
	RTLR(3,loc1);
	RTLR(4,ur1);
	RTLR(5,saved_except);
	RTLIU(6);
	RTXSLS;
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_BOOL, &loc2);
	RTLU(SK_BOOL, &loc3);
	RTLU(SK_REF, &loc4);
	RTLXL;
	
	RTEAA(l_feature_name, 21, Current, 4, 0, 705);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(21, Current, 705);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("root_object_available", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(617, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTE_T
	RTHOOK(2);
	tb1 = '\0';
	if ((EIF_BOOLEAN) !loc3) {
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(610, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc4 = RTCCL(tr1);
		tb1 = EIF_TEST(loc4);
	}
	if (tb1) {
		RTHOOK(3);
		RTDBGAL(1, 0xF8000019, 0, 0); /* loc1 */
		tr1 = RTLN(eif_new_type(25, 0x01).id);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
		RTNHOOK(3,1);
		loc1 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(4);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(661, "lock_marking", loc1))(loc1);
		RTHOOK(5);
		RTDBGAL(2, 0x04000000, 1, 0); /* loc2 */
		loc2 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		RTHOOK(6);
		ur1 = RTCCL(loc4);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(636, dtype))(Current, ur1x);
		RTHOOK(7);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(662, "unlock_marking", loc1))(loc1);
		RTHOOK(8);
		RTDBGAA(Current, dtype, 616, 0x04000000, 1); /* has_failed */
		*(EIF_BOOLEAN *)(Current + RTWA(616, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTE_E
	RTLXE;
	RTXSC;
	RTS_SRR
	RTHOOK(9);
	RTDBGAL(3, 0x04000000, 1, 0); /* loc3 */
	loc3 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(10);
	RTDBGAA(Current, dtype, 616, 0x04000000, 1); /* has_failed */
	*(EIF_BOOLEAN *)(Current + RTWA(616, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(11);
	if ((EIF_BOOLEAN) (loc2 && (EIF_BOOLEAN)(loc1 != NULL))) {
		RTHOOK(12);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(662, "unlock_marking", loc1))(loc1);
	}
	RTHOOK(13);
	tb1 = *(EIF_BOOLEAN *)(Current + RTWA(623, dtype));
	if ((EIF_BOOLEAN) !tb1) {
		RTHOOK(14);
		RTTS;
		RTPS;
		RTER;
	}
	RTMD(0);
	/* NOTREACHED */
	RTE_EE
	RTHOOK(15);
	RTDBGLE;
	RTMD(0);
	RTEOK;
	RTLE;
	RTLO(6);
#undef up1
#undef ur1
}
#undef EIF_VOLATILE
#define EIF_VOLATILE

/* {OBJECT_GRAPH_TRAVERSABLE}.wipe_out */
void F22_629 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "wipe_out";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 21, Current, 0, 0, 706);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(21, Current, 706);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 614, 0xF80000C9, 0); /* visited_objects */
	*(EIF_REFERENCE *)(Current + RTWA(614, dtype)) = (EIF_REFERENCE) NULL;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 615, 0xF80001FC, 0); /* visited_types */
	*(EIF_REFERENCE *)(Current + RTWA(615, dtype)) = (EIF_REFERENCE) NULL;
	RTHOOK(3);
	RTDBGAA(Current, dtype, 613, 0xF80000CA, 0); /* object_action */
	*(EIF_REFERENCE *)(Current + RTWA(613, dtype)) = (EIF_REFERENCE) NULL;
	RTHOOK(4);
	RTDBGAA(Current, dtype, 610, 0xF8000000, 0); /* root_object */
	*(EIF_REFERENCE *)(Current + RTWA(610, dtype)) = (EIF_REFERENCE) NULL;
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("visited_objects_reset", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(614, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if ((EIF_BOOLEAN)(tr1 == NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("object_action_not_set", EX_POST);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(618, dtype))(Current)).it_b);
		if ((EIF_BOOLEAN) !tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("root_object_not_set", EX_POST);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(617, dtype))(Current)).it_b);
		if ((EIF_BOOLEAN) !tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef up1
}

/* {OBJECT_GRAPH_TRAVERSABLE}.default_size */
EIF_TYPED_VALUE F22_631 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 200L);
	return r;
}

/* {OBJECT_GRAPH_TRAVERSABLE}.internal_traverse */
void F22_632 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "internal_traverse";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc11 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc12 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc13 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc14 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc15 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc16 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc17 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc18 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc19 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc20 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc21 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc22 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc23 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc24 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
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
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(24);
	RTLR(0,loc6);
	RTLR(1,tr1);
	RTLR(2,loc13);
	RTLR(3,arg1);
	RTLR(4,ur1);
	RTLR(5,loc8);
	RTLR(6,Current);
	RTLR(7,loc9);
	RTLR(8,loc7);
	RTLR(9,loc10);
	RTLR(10,loc11);
	RTLR(11,loc16);
	RTLR(12,loc17);
	RTLR(13,loc3);
	RTLR(14,loc19);
	RTLR(15,loc20);
	RTLR(16,loc21);
	RTLR(17,loc14);
	RTLR(18,loc22);
	RTLR(19,loc18);
	RTLR(20,loc4);
	RTLR(21,loc23);
	RTLR(22,loc24);
	RTLR(23,loc12);
	RTLIU(24);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_INT32, &loc5);
	RTLU(SK_REF, &loc6);
	RTLU(SK_REF, &loc7);
	RTLU(SK_REF, &loc8);
	RTLU(SK_REF, &loc9);
	RTLU(SK_REF, &loc10);
	RTLU(SK_REF, &loc11);
	RTLU(SK_REF, &loc12);
	RTLU(SK_REF, &loc13);
	RTLU(SK_REF, &loc14);
	RTLU(SK_BOOL, &loc15);
	RTLU(SK_REF, &loc16);
	RTLU(SK_REF, &loc17);
	RTLU(SK_REF, &loc18);
	RTLU(SK_REF, &loc19);
	RTLU(SK_REF, &loc20);
	RTLU(SK_REF, &loc21);
	RTLU(SK_REF, &loc22);
	RTLU(SK_REF, &loc23);
	RTLU(SK_REF, &loc24);
	
	RTEAA(l_feature_name, 21, Current, 24, 1, 708);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(21, Current, 708);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(6, 0xF8000019, 0, 0); /* loc6 */
	tr1 = RTLN(eif_new_type(25, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	loc6 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(13, 0xF800006D, 0, 0); /* loc13 */
	tr1 = RTLN(eif_new_type(109, 0x01).id);
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(1655, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(2,1);
	loc13 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(659, "mark", loc6))(loc6, ur1x);
	RTHOOK(4);
	RTDBGAL(8, 0xF80000C9, 0, 0); /* loc8 */
	tr1 = RTLNSMART(RTWCT(614, dtype, dftype).id);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(635, dtype))(Current)).it_i4);
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(2225, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(4,1);
	loc8 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(5);
	RTDBGAL(9, 0xF80001FC, 0, 0); /* loc9 */
	tr1 = RTLNSMART(RTWCT(615, dtype, dftype).id);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(635, dtype))(Current)).it_i4);
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(2240, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(5,1);
	loc9 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(6);
	RTDBGAL(7, 0xF8000287, 0, 0); /* loc7 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(634, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc7 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(7);
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1881, "put", loc7))(loc7, ur1x);
	RTHOOK(8);
	RTDBGAL(10, 0xF80000CA, 0, 0); /* loc10 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(613, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc10 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(9);
	RTDBGAL(11, 0xF80000CA, 0, 0); /* loc11 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(611, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc11 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(10);
	RTDBGAL(16, 0xF80000CA, 0, 0); /* loc16 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(612, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc16 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(11);
	RTDBGAL(17, 0xF800006D, 0, 0); /* loc17 */
	tr1 = RTLN(eif_new_type(109, 0x01).id);
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(1655, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(11,1);
	loc17 = (EIF_REFERENCE) RTCCL(tr1);
	for (;;) {
		RTHOOK(12);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1841, "is_empty", loc7))(loc7)).it_b);
		if (tb1) break;
		RTHOOK(13);
		RTDBGAL(3, 0xF8000000, 0, 0); /* loc3 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1896, "item", loc7))(loc7)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc3 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(14);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1901, "remove", loc7))(loc7);
		RTHOOK(15);
		loc19 = RTCCL(loc3);
		loc19 = RTRV(eif_new_type(103, 0x01),loc19);
		if ((loc19) && RTS_OS (Current, loc19)) loc19 = (EIF_REFERENCE) 0;
		if (EIF_TEST(loc19)) {
			if (RTAL & CK_CHECK) {
				RTHOOK(16);
				RTCT("embedded_or_copy_semantics", EX_CHECK);
				tb2 = '\01';
				loc20 = RTCCL(loc19);
				loc20 = RTRV(eif_new_type(108, 0x01),loc20);
				if (!(EIF_TEST(loc20))) {
					tb3 = '\0';
					loc21 = RTCCL(loc19);
					loc21 = RTRV(eif_new_type(109, 0x01),loc21);
					if (EIF_TEST(loc21)) {
						ti4_1 = *(EIF_INTEGER_32 *)(loc21 + RTVA(1659, "physical_offset", loc21));
						tb3 = (EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L));
					}
					tb2 = tb3;
				}
				if (tb2) {
					RTCK;
				} else {
					RTCF;
				}
			}
			RTHOOK(17);
			RTDBGAL(15, 0x04000000, 1, 0); /* loc15 */
			loc15 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			RTHOOK(18);
			RTDBGAL(14, 0xF8000067, 0, 0); /* loc14 */
			loc14 = (EIF_REFERENCE) RTCCL(loc19);
			RTHOOK(19);
			tb2 = *(EIF_BOOLEAN *)(Current + RTWA(621, dtype));
			if ((EIF_BOOLEAN) !tb2) {
				RTHOOK(20);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1397, "object", loc19))(loc19)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				ur1 = RTCCL(tr1);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1882, "extend", loc8))(loc8, ur1x);
			}
		} else {
			RTHOOK(21);
			ur1 = RTCCL(loc3);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1660, "set_object", loc13))(loc13, ur1x);
			RTHOOK(22);
			RTDBGAL(14, 0xF8000067, 0, 0); /* loc14 */
			loc14 = (EIF_REFERENCE) RTCCL(loc13);
			RTHOOK(23);
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1409, "is_expanded", loc13))(loc13)).it_b);
			if (tb2) {
				RTHOOK(24);
				RTDBGAL(15, 0x04000000, 1, 0); /* loc15 */
				loc15 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				RTHOOK(25);
				tb2 = *(EIF_BOOLEAN *)(Current + RTWA(621, dtype));
				if ((EIF_BOOLEAN) !tb2) {
					RTHOOK(26);
					ur1 = RTCCL(loc3);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1882, "extend", loc8))(loc8, ur1x);
				}
			} else {
				RTHOOK(27);
				ur1 = RTCCL(loc3);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1882, "extend", loc8))(loc8, ur1x);
			}
		}
		RTHOOK(28);
		ti4_1 = *(EIF_INTEGER_32 *)(loc14 + RTVA(1400, "dynamic_type", loc14));
		ui4_1 = ti4_1;
		ti4_2 = *(EIF_INTEGER_32 *)(loc14 + RTVA(1400, "dynamic_type", loc14));
		ui4_2 = ti4_2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1892, "put", loc9))(loc9, ui4_1x, ui4_2x);
		RTHOOK(29);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc10 != NULL) || (EIF_BOOLEAN)(loc11 != NULL))) {
			RTHOOK(30);
			tb2 = '\0';
			tb3 = *(EIF_BOOLEAN *)(Current + RTWA(622, dtype));
			if ((EIF_BOOLEAN) !tb3) {
				tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1409, "is_expanded", loc14))(loc14)).it_b);
				tb2 = tb3;
			}
			if (tb2) {
				RTHOOK(31);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(637, dtype))(Current);
			} else {
				RTHOOK(32);
				if ((EIF_BOOLEAN)(loc10 != NULL)) {
					RTHOOK(33);
					{
						static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,1,133,0xFF05,0,0xFFFF};
						EIF_TYPE typres0;
						static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
						
						typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
						tr1 = RTLNTS(typres0.id, 2, 0);
					}
					((EIF_TYPED_VALUE *)tr1+1)->it_r = loc3;
					RTAR(tr1,loc3);
					ur1 = RTCCL(tr1);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3293, "call", loc10))(loc10, ur1x);
				}
				RTHOOK(34);
				if ((EIF_BOOLEAN)(loc11 != NULL)) {
					RTHOOK(35);
					{
						static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,1,133,0xFF01,103,0xFFFF};
						EIF_TYPE typres0;
						static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
						
						typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
						tr1 = RTLNTS(typres0.id, 2, 0);
					}
					((EIF_TYPED_VALUE *)tr1+1)->it_r = loc14;
					RTAR(tr1,loc14);
					ur1 = RTCCL(tr1);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3293, "call", loc11))(loc11, ur1x);
				}
			}
		}
		RTHOOK(36);
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1406, "is_special", loc14))(loc14)).it_b);
		if (tb2) {
			RTHOOK(37);
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1408, "is_special_of_reference", loc14))(loc14)).it_b);
			if (tb2) {
				RTHOOK(38);
				loc22 = RTCCL(loc3);
				{
					static EIF_TYPE_INDEX typarr0[] = {0xFF01,230,0,0xFFFF};
					EIF_TYPE typres0;
					static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
					
					typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
					loc22 = RTRV(typres0,loc22);
				}
				if ((loc22) && RTS_OS (Current, loc22)) loc22 = (EIF_REFERENCE) 0;
				if (EIF_TEST(loc22)) {
					RTHOOK(39);
					RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
					loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
					RTHOOK(40);
					RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2399, "count", loc22))(loc22)).it_i4);
					loc2 = (EIF_INTEGER_32) ti4_1;
					for (;;) {
						RTHOOK(41);
						if ((EIF_BOOLEAN)(loc1 == loc2)) break;
						RTHOOK(42);
						ui4_1 = loc1;
						tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1414, "is_special_copy_semantics_item", loc14))(loc14, ui4_1x)).it_b);
						if (tb2) {
							RTHOOK(43);
							RTDBGAL(18, 0xF8000067, 0, 0); /* loc18 */
							ui4_1 = loc1;
							tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1422, "special_copy_semantics_item", loc14))(loc14, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							loc18 = (EIF_REFERENCE) RTCCL(tr1);
							RTHOOK(44);
							RTDBGAL(4, 0xF8000000, 0, 0); /* loc4 */
							loc4 = (EIF_REFERENCE) RTCCL(loc18);
							RTHOOK(45);
							ur1 = RTCCL(loc4);
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1881, "put", loc7))(loc7, ur1x);
							RTHOOK(46);
							if ((EIF_BOOLEAN)(loc16 != NULL)) {
								RTHOOK(47);
								{
									static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,133,0xFF01,103,0xFF01,103,0xFFFF};
									EIF_TYPE typres0;
									static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
									
									typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
									tr1 = RTLNTS(typres0.id, 3, 0);
								}
								((EIF_TYPED_VALUE *)tr1+1)->it_r = loc14;
								RTAR(tr1,loc14);
								((EIF_TYPED_VALUE *)tr1+2)->it_r = loc18;
								RTAR(tr1,loc18);
								ur1 = RTCCL(tr1);
								(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3293, "call", loc16))(loc16, ur1x);
							}
						} else {
							RTHOOK(48);
							RTDBGAL(4, 0xF8000000, 0, 0); /* loc4 */
							ui4_1 = loc1;
							tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2115, "item", loc22))(loc22, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							loc4 = (EIF_REFERENCE) RTCCL(tr1);
							RTHOOK(49);
							tb2 = '\0';
							if ((EIF_BOOLEAN)(loc4 != NULL)) {
								ur1 = RTCCL(loc4);
								tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(658, "is_marked", loc6))(loc6, ur1x)).it_b);
								tb2 = (EIF_BOOLEAN) !tb3;
							}
							if (tb2) {
								RTHOOK(50);
								ur1 = RTCCL(loc4);
								(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(659, "mark", loc6))(loc6, ur1x);
								RTHOOK(51);
								ur1 = RTCCL(loc4);
								(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1881, "put", loc7))(loc7, ur1x);
							}
							RTHOOK(52);
							if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc16 != NULL) && (EIF_BOOLEAN)(loc4 != NULL))) {
								RTHOOK(53);
								ur1 = RTCCL(loc4);
								(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1660, "set_object", loc17))(loc17, ur1x);
								RTHOOK(54);
								RTDBGAL(18, 0xF8000067, 0, 0); /* loc18 */
								loc18 = (EIF_REFERENCE) RTCCL(loc17);
								RTHOOK(55);
								{
									static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,133,0xFF01,103,0xFF01,103,0xFFFF};
									EIF_TYPE typres0;
									static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
									
									typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
									tr1 = RTLNTS(typres0.id, 3, 0);
								}
								((EIF_TYPED_VALUE *)tr1+1)->it_r = loc14;
								RTAR(tr1,loc14);
								((EIF_TYPED_VALUE *)tr1+2)->it_r = loc18;
								RTAR(tr1,loc18);
								ur1 = RTCCL(tr1);
								(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3293, "call", loc16))(loc16, ur1x);
							}
						}
						RTHOOK(56);
						RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
						loc1++;
					}
				}
			} else {
				RTHOOK(57);
				tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1407, "is_special_of_expanded", loc14))(loc14)).it_b);
				if (tb2) {
					RTHOOK(58);
					loc23 = RTCCL(loc3);
					{
						static EIF_TYPE_INDEX typarr0[] = {0xFF01,230,0xFF01,0,0xFFFF};
						EIF_TYPE typres0;
						static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
						
						typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
						loc23 = RTRV(typres0,loc23);
					}
					if ((loc23) && RTS_OS (Current, loc23)) loc23 = (EIF_REFERENCE) 0;
					if (EIF_TEST(loc23)) {
						RTHOOK(59);
						RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
						loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
						RTHOOK(60);
						RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
						ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2399, "count", loc23))(loc23)).it_i4);
						loc2 = (EIF_INTEGER_32) ti4_1;
						for (;;) {
							RTHOOK(61);
							if ((EIF_BOOLEAN)(loc1 == loc2)) break;
							RTHOOK(62);
							RTDBGAL(4, 0xF8000000, 0, 0); /* loc4 */
							ui4_1 = loc1;
							tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2115, "item", loc23))(loc23, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							loc4 = (EIF_REFERENCE) RTCCL(tr1);
							RTHOOK(63);
							ur1 = RTCCL(loc4);
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1881, "put", loc7))(loc7, ur1x);
							RTHOOK(64);
							if ((EIF_BOOLEAN)(loc16 != NULL)) {
								RTHOOK(65);
								tb2 = *(EIF_BOOLEAN *)(Current + RTWA(622, dtype));
								if (tb2) {
									RTHOOK(66);
									ur1 = RTCCL(loc4);
									(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1660, "set_object", loc17))(loc17, ur1x);
									RTHOOK(67);
									RTDBGAL(18, 0xF8000067, 0, 0); /* loc18 */
									loc18 = (EIF_REFERENCE) RTCCL(loc17);
									RTHOOK(68);
									{
										static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,133,0xFF01,103,0xFF01,103,0xFFFF};
										EIF_TYPE typres0;
										static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
										
										typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
										tr1 = RTLNTS(typres0.id, 3, 0);
									}
									((EIF_TYPED_VALUE *)tr1+1)->it_r = loc14;
									RTAR(tr1,loc14);
									((EIF_TYPED_VALUE *)tr1+2)->it_r = loc18;
									RTAR(tr1,loc18);
									ur1 = RTCCL(tr1);
									(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3293, "call", loc16))(loc16, ur1x);
								} else {
									RTHOOK(69);
									(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(637, dtype))(Current);
								}
							}
							RTHOOK(70);
							RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
							loc1++;
						}
					}
				}
			}
		} else {
			RTHOOK(71);
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1410, "is_tuple", loc14))(loc14)).it_b);
			if (tb2) {
				RTHOOK(72);
				loc24 = RTCCL(loc3);
				{
					static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,0,133,0xFFFF};
					EIF_TYPE typres0;
					static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
					
					typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
					loc24 = RTRV(typres0,loc24);
				}
				if ((loc24) && RTS_OS (Current, loc24)) loc24 = (EIF_REFERENCE) 0;
				if (EIF_TEST(loc24)) {
					RTHOOK(73);
					RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
					loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
					RTHOOK(74);
					RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2117, "count", loc24))(loc24)).it_i4);
					loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L));
					for (;;) {
						RTHOOK(75);
						if ((EIF_BOOLEAN)(loc1 == loc2)) break;
						RTHOOK(76);
						ui4_1 = loc1;
						tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2640, "is_reference_item", loc24))(loc24, ui4_1x)).it_b);
						if (tb2) {
							RTHOOK(77);
							RTDBGAL(4, 0xF8000000, 0, 0); /* loc4 */
							ui4_1 = loc1;
							tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2574, "reference_item", loc24))(loc24, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							loc4 = (EIF_REFERENCE) RTCCL(tr1);
							RTHOOK(78);
							tb2 = '\0';
							if ((EIF_BOOLEAN)(loc4 != NULL)) {
								ur1 = RTCCL(loc4);
								tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(658, "is_marked", loc6))(loc6, ur1x)).it_b);
								tb2 = (EIF_BOOLEAN) !tb3;
							}
							if (tb2) {
								RTHOOK(79);
								ur1 = RTCCL(loc4);
								(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(659, "mark", loc6))(loc6, ur1x);
								RTHOOK(80);
								ur1 = RTCCL(loc4);
								(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1881, "put", loc7))(loc7, ur1x);
							}
							RTHOOK(81);
							if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc16 != NULL) && (EIF_BOOLEAN)(loc4 != NULL))) {
								RTHOOK(82);
								tb2 = *(EIF_BOOLEAN *)(Current + RTWA(622, dtype));
								if (tb2) {
									RTHOOK(83);
									ur1 = RTCCL(loc4);
									(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1660, "set_object", loc17))(loc17, ur1x);
									RTHOOK(84);
									RTDBGAL(18, 0xF8000067, 0, 0); /* loc18 */
									loc18 = (EIF_REFERENCE) RTCCL(loc17);
									RTHOOK(85);
									{
										static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,133,0xFF01,103,0xFF01,103,0xFFFF};
										EIF_TYPE typres0;
										static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
										
										typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
										tr1 = RTLNTS(typres0.id, 3, 0);
									}
									((EIF_TYPED_VALUE *)tr1+1)->it_r = loc14;
									RTAR(tr1,loc14);
									((EIF_TYPED_VALUE *)tr1+2)->it_r = loc18;
									RTAR(tr1,loc18);
									ur1 = RTCCL(tr1);
									(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3293, "call", loc16))(loc16, ur1x);
								} else {
									RTHOOK(86);
									(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(637, dtype))(Current);
								}
							}
						}
						RTHOOK(87);
						RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
						loc1++;
					}
				}
			} else {
				RTHOOK(88);
				RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
				loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
				RTHOOK(89);
				RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1457, "field_count", loc14))(loc14)).it_i4);
				loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L));
				if (RTAL & CK_LOOP) {
					RTHOOK(90);
					RTCT("nb - i", EX_VAR);
					ti4_2 = (EIF_INTEGER_32) (loc2 - loc1);
					if (ti4_2 >= 0) {
						RTCK;
					} else {
						RTCF;
					}
				}
				for (;;) {
					RTHOOK(91);
					if ((EIF_BOOLEAN)(loc1 == loc2)) break;
					RTHOOK(92);
					RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
					ui4_1 = loc1;
					ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1419, "field_type", loc14))(loc14, ui4_1x)).it_i4);
					loc5 = (EIF_INTEGER_32) ti4_3;
					RTHOOK(93);
					ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1374, 102))(Current)).it_i4);
					ti4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1384, 102))(Current)).it_i4);
					if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc5 == ti4_3) || (EIF_BOOLEAN)(loc5 == ti4_4))) {
						RTHOOK(94);
						tb2 = '\01';
						tb3 = *(EIF_BOOLEAN *)(Current + RTWA(620, dtype));
						if (!(EIF_BOOLEAN) !tb3) {
							ui4_1 = loc1;
							tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1411, "is_field_transient", loc14))(loc14, ui4_1x)).it_b);
							tb2 = (EIF_BOOLEAN) !tb3;
						}
						if (tb2) {
							RTHOOK(95);
							ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1384, 102))(Current)).it_i4);
							if ((EIF_BOOLEAN)(loc5 == ti4_3)) {
								RTHOOK(96);
								RTDBGAL(18, 0xF8000067, 0, 0); /* loc18 */
								ui4_1 = loc1;
								tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1423, "expanded_field", loc14))(loc14, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
								loc18 = (EIF_REFERENCE) RTCCL(tr1);
								RTHOOK(97);
								ur1 = RTCCL(loc18);
								(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1881, "put", loc7))(loc7, ur1x);
								RTHOOK(98);
								if ((EIF_BOOLEAN)(loc16 != NULL)) {
									RTHOOK(99);
									{
										static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,133,0xFF01,103,0xFF01,103,0xFFFF};
										EIF_TYPE typres0;
										static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
										
										typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
										tr1 = RTLNTS(typres0.id, 3, 0);
									}
									((EIF_TYPED_VALUE *)tr1+1)->it_r = loc14;
									RTAR(tr1,loc14);
									((EIF_TYPED_VALUE *)tr1+2)->it_r = loc18;
									RTAR(tr1,loc18);
									ur1 = RTCCL(tr1);
									(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3293, "call", loc16))(loc16, ur1x);
								}
							} else {
								RTHOOK(100);
								ui4_1 = loc1;
								tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1413, "is_copy_semantics_field", loc14))(loc14, ui4_1x)).it_b);
								if (tb2) {
									RTHOOK(101);
									RTDBGAL(18, 0xF8000067, 0, 0); /* loc18 */
									ui4_1 = loc1;
									tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1421, "copy_semantics_field", loc14))(loc14, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
									loc18 = (EIF_REFERENCE) RTCCL(tr1);
									RTHOOK(102);
									ur1 = RTCCL(loc18);
									(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1881, "put", loc7))(loc7, ur1x);
									RTHOOK(103);
									if ((EIF_BOOLEAN)(loc16 != NULL)) {
										RTHOOK(104);
										{
											static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,133,0xFF01,103,0xFF01,103,0xFFFF};
											EIF_TYPE typres0;
											static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
											
											typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
											tr1 = RTLNTS(typres0.id, 3, 0);
										}
										((EIF_TYPED_VALUE *)tr1+1)->it_r = loc14;
										RTAR(tr1,loc14);
										((EIF_TYPED_VALUE *)tr1+2)->it_r = loc18;
										RTAR(tr1,loc18);
										ur1 = RTCCL(tr1);
										(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3293, "call", loc16))(loc16, ur1x);
									}
								} else {
									RTHOOK(105);
									RTDBGAL(4, 0xF8000000, 0, 0); /* loc4 */
									ui4_1 = loc1;
									tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1404, "reference_field", loc14))(loc14, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
									loc4 = (EIF_REFERENCE) RTCCL(tr1);
									RTHOOK(106);
									if ((EIF_BOOLEAN)(loc4 != NULL)) {
										RTHOOK(107);
										ur1 = RTCCL(loc4);
										tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(658, "is_marked", loc6))(loc6, ur1x)).it_b);
										if ((EIF_BOOLEAN) !tb2) {
											RTHOOK(108);
											ur1 = RTCCL(loc4);
											(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(659, "mark", loc6))(loc6, ur1x);
											RTHOOK(109);
											ur1 = RTCCL(loc4);
											(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1881, "put", loc7))(loc7, ur1x);
										}
										RTHOOK(110);
										if ((EIF_BOOLEAN)(loc16 != NULL)) {
											RTHOOK(111);
											ur1 = RTCCL(loc4);
											(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1660, "set_object", loc17))(loc17, ur1x);
											RTHOOK(112);
											RTDBGAL(18, 0xF8000067, 0, 0); /* loc18 */
											loc18 = (EIF_REFERENCE) RTCCL(loc17);
											RTHOOK(113);
											{
												static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,133,0xFF01,103,0xFF01,103,0xFFFF};
												EIF_TYPE typres0;
												static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
												
												typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
												tr1 = RTLNTS(typres0.id, 3, 0);
											}
											((EIF_TYPED_VALUE *)tr1+1)->it_r = loc14;
											RTAR(tr1,loc14);
											((EIF_TYPED_VALUE *)tr1+2)->it_r = loc18;
											RTAR(tr1,loc18);
											ur1 = RTCCL(tr1);
											(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3293, "call", loc16))(loc16, ur1x);
										}
									}
								}
							}
						}
					}
					RTHOOK(114);
					RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
					loc1++;
					if (RTAL & CK_LOOP) {
						RTHOOK(90);
						RTCT("nb - i", EX_VAR);
						ti4_1 = (EIF_INTEGER_32) (loc2 - loc1);
						if ((ti4_2 > ti4_1) && ti4_1 >= 0) {
							RTCK;
							ti4_2 = ti4_1;
						} else {
							RTCF;
						}
					}
				}
			}
		}
	}
	RTHOOK(115);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(116);
	RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1869, "count", loc8))(loc8)).it_i4);
	loc2 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(117);
	RTDBGAL(12, 0xF80000E6, 0, 0); /* loc12 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2229, "area", loc8))(loc8)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc12 = (EIF_REFERENCE) tr1;
	for (;;) {
		RTHOOK(118);
		if ((EIF_BOOLEAN)(loc1 == loc2)) break;
		RTHOOK(119);
		ui4_1 = loc1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2115, "item", loc12))(loc12, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(660, "unmark", loc6))(loc6, ur1x);
		RTHOOK(120);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		loc1++;
	}
	RTHOOK(121);
	RTDBGAA(Current, dtype, 614, 0xF80000C9, 0); /* visited_objects */
	tr1 = RTCCL(loc8);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(614, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(122);
	RTDBGAA(Current, dtype, 615, 0xF80001FC, 0); /* visited_types */
	tr1 = RTCCL(loc9);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(615, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(123);
	RTDBGAA(Current, dtype, 619, 0x04000000, 1); /* has_reference_with_copy_semantics */
	*(EIF_BOOLEAN *)(Current + RTWA(619, dtype)) = (EIF_BOOLEAN) loc15;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(124);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(27);
	RTEE;
#undef up1
#undef ur1
#undef ui4_1
#undef ui4_2
#undef arg1
}

/* {OBJECT_GRAPH_TRAVERSABLE}.raise_unwanted_copy_exception */
void F22_633 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "raise_unwanted_copy_exception";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,ur1);
	RTLR(3,Current);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 21, Current, 1, 0, 709);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(21, Current, 709);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF8000033, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(51, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	tr1 = RTMS_EX_H("An agent has been invoked on a copy of an object during object graph traversal.\012This happens in TUPLE containing objects with copy-semantics or in SPECIAL[XX],\012where XX is a user-defined expanded type.",201,185385518);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1026, "set_description", loc1))(loc1, ur1x);
	RTHOOK(3);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1011, "raise", loc1))(loc1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef ur1
}

void EIF_Minit22 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
