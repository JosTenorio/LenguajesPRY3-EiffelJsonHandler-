/*
 * Code for class DEVELOPER_EXCEPTION
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F47_968(EIF_REFERENCE);
extern EIF_TYPED_VALUE F47_969(EIF_REFERENCE);
extern void EIF_Minit47(void);

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

/* {DEVELOPER_EXCEPTION}.code */
EIF_TYPED_VALUE F47_968 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "code";
	RTEX;
	EIF_INTEGER_32 ti4_1;
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
	
	RTEAA(l_feature_name, 46, Current, 0, 0, 1050);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(46, Current, 1050);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x10000000, 1,0); /* Result */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(650, 28))(Current)).it_i4);
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {DEVELOPER_EXCEPTION}.tag */
RTOID (F47_969)
EIF_TYPED_VALUE F47_969 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "tag";
	RTEX;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTCDD;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOTDR(F47_969);
	dtype = Dtype(Current);

	RTLI(4);
	RTLR(0,tr1);
	RTLR(1,tr2);
	RTLR(2,ur1);
	RTLR(3,Current);
	RTLIU(4);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 46, Current, 0, 0, 1051);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(46, Current, 1051);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(0, 0xF80000AF, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(175, 0x01).id);
	tr2 = RTMS_EX_H("Developer exception.",20,1132150574);
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(3367, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ur1
#undef Result
}

void EIF_Minit47 (void)
{
	GTCX
	RTOTS (969,F47_969)
}


#ifdef __cplusplus
}
#endif
