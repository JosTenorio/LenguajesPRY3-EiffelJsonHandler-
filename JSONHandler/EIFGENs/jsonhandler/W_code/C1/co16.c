/*
 * Code for class CODE_PAGES
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F16_492(EIF_REFERENCE);
extern EIF_TYPED_VALUE F16_493(EIF_REFERENCE);
extern EIF_TYPED_VALUE F16_494(EIF_REFERENCE);
extern EIF_TYPED_VALUE F16_495(EIF_REFERENCE);
extern void EIF_Minit16(void);

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

/* {CODE_PAGES}.code_pages */
RTOID (F16_492)
EIF_TYPED_VALUE F16_492 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "code_pages";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	RTCDD;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOTDR(F16_492);
	dtype = Dtype(Current);

	RTLI(6);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,ur1);
	RTLR(3,tr2);
	RTLR(4,ur2);
	RTLR(5,tr3);
	RTLIU(6);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 15, Current, 0, 0, 574);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(15, Current, 574);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(0, 0xF800015C, 0,0); /* Result */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,348,0xFF01,177,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLN(typres0.id);
	}
	ui4_1 = ((EIF_INTEGER_32) 168L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(2361, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	tr1 = RTMS_EX_H("037",3,3158839);
	ur1 = tr1;
	tr2 = RTMS_EX_H("037",3,3158839);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(3);
	tr1 = RTMS_EX_H("437",3,3420983);
	ur1 = tr1;
	tr2 = RTMS_EX_H("437",3,3420983);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(4);
	tr1 = RTMS_EX_H("500",3,3485744);
	ur1 = tr1;
	tr2 = RTMS_EX_H("500",3,3485744);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(5);
	tr1 = RTMS_EX_H("708",3,3616824);
	ur1 = tr1;
	tr2 = RTMS_EX_H("708",3,3616824);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(6);
	tr1 = RTMS_EX_H("709",3,3616825);
	ur1 = tr1;
	tr2 = RTMS_EX_H("709",3,3616825);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(7);
	tr1 = RTMS_EX_H("710",3,3617072);
	ur1 = tr1;
	tr2 = RTMS_EX_H("710",3,3617072);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(8);
	tr1 = RTMS_EX_H("720",3,3617328);
	ur1 = tr1;
	tr2 = RTMS_EX_H("720",3,3617328);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(9);
	tr1 = RTMS_EX_H("737",3,3617591);
	ur1 = tr1;
	tr2 = RTMS_EX_H("737",3,3617591);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(10);
	tr1 = RTMS_EX_H("775",3,3618613);
	ur1 = tr1;
	tr2 = RTMS_EX_H("775",3,3618613);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(11);
	tr1 = RTMS_EX_H("850",3,3683632);
	ur1 = tr1;
	tr2 = RTMS_EX_H("850",3,3683632);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(12);
	tr1 = RTMS_EX_H("852",3,3683634);
	ur1 = tr1;
	tr2 = RTMS_EX_H("852",3,3683634);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(13);
	tr1 = RTMS_EX_H("855",3,3683637);
	ur1 = tr1;
	tr2 = RTMS_EX_H("855",3,3683637);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(14);
	tr1 = RTMS_EX_H("857",3,3683639);
	ur1 = tr1;
	tr2 = RTMS_EX_H("857",3,3683639);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(15);
	tr1 = RTMS_EX_H("858",3,3683640);
	ur1 = tr1;
	tr2 = RTMS_EX_H("858",3,3683640);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(16);
	tr1 = RTMS_EX_H("860",3,3683888);
	ur1 = tr1;
	tr2 = RTMS_EX_H("860",3,3683888);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(17);
	tr1 = RTMS_EX_H("861",3,3683889);
	ur1 = tr1;
	tr2 = RTMS_EX_H("861",3,3683889);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(18);
	tr1 = RTMS_EX_H("862",3,3683890);
	ur1 = tr1;
	tr2 = RTMS_EX_H("862",3,3683890);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(19);
	tr1 = RTMS_EX_H("863",3,3683891);
	ur1 = tr1;
	tr2 = RTMS_EX_H("863",3,3683891);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(20);
	tr1 = RTMS_EX_H("864",3,3683892);
	ur1 = tr1;
	tr2 = RTMS_EX_H("864",3,3683892);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(21);
	tr1 = RTMS_EX_H("865",3,3683893);
	ur1 = tr1;
	tr2 = RTMS_EX_H("865",3,3683893);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(22);
	tr1 = RTMS_EX_H("866",3,3683894);
	ur1 = tr1;
	tr2 = RTMS_EX_H("866",3,3683894);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(23);
	tr1 = RTMS_EX_H("869",3,3683897);
	ur1 = tr1;
	tr2 = RTMS_EX_H("869",3,3683897);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(24);
	tr1 = RTMS_EX_H("870",3,3684144);
	ur1 = tr1;
	tr2 = RTMS_EX_H("870",3,3684144);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(25);
	tr1 = RTMS_EX_H("874",3,3684148);
	ur1 = tr1;
	tr2 = RTMS_EX_H("874",3,3684148);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(26);
	tr1 = RTMS_EX_H("875",3,3684149);
	ur1 = tr1;
	tr2 = RTMS_EX_H("875",3,3684149);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(27);
	tr1 = RTMS_EX_H("932",3,3748658);
	ur1 = tr1;
	tr2 = RTMS_EX_H("932",3,3748658);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(28);
	tr1 = RTMS_EX_H("936",3,3748662);
	ur1 = tr1;
	tr2 = RTMS_EX_H("936",3,3748662);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(29);
	tr1 = RTMS_EX_H("949",3,3748921);
	ur1 = tr1;
	tr2 = RTMS_EX_H("949",3,3748921);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(30);
	tr1 = RTMS_EX_H("950",3,3749168);
	ur1 = tr1;
	tr2 = RTMS_EX_H("950",3,3749168);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(31);
	tr1 = RTMS_EX_H("1026",4,825242166);
	ur1 = tr1;
	tr2 = RTMS_EX_H("1026",4,825242166);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(32);
	tr1 = RTMS_EX_H("1047",4,825242679);
	ur1 = tr1;
	tr2 = RTMS_EX_H("1047",4,825242679);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(33);
	tr1 = RTMS_EX_H("1140",4,825308208);
	ur1 = tr1;
	tr2 = RTMS_EX_H("1140",4,825308208);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(34);
	tr1 = RTMS_EX_H("1141",4,825308209);
	ur1 = tr1;
	tr2 = RTMS_EX_H("1141",4,825308209);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(35);
	tr1 = RTMS_EX_H("1142",4,825308210);
	ur1 = tr1;
	tr2 = RTMS_EX_H("1142",4,825308210);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(36);
	tr1 = RTMS_EX_H("1143",4,825308211);
	ur1 = tr1;
	tr2 = RTMS_EX_H("1143",4,825308211);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(37);
	tr1 = RTMS_EX_H("1144",4,825308212);
	ur1 = tr1;
	tr2 = RTMS_EX_H("1144",4,825308212);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(38);
	tr1 = RTMS_EX_H("1145",4,825308213);
	ur1 = tr1;
	tr2 = RTMS_EX_H("1145",4,825308213);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(39);
	tr1 = RTMS_EX_H("1146",4,825308214);
	ur1 = tr1;
	tr2 = RTMS_EX_H("1146",4,825308214);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(40);
	tr1 = RTMS_EX_H("1147",4,825308215);
	ur1 = tr1;
	tr2 = RTMS_EX_H("1147",4,825308215);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(41);
	tr1 = RTMS_EX_H("1148",4,825308216);
	ur1 = tr1;
	tr2 = RTMS_EX_H("1148",4,825308216);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(42);
	tr1 = RTMS_EX_H("1149",4,825308217);
	ur1 = tr1;
	tr2 = RTMS_EX_H("1149",4,825308217);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(43);
	tr1 = RTMS_EX_H("1200",4,825372720);
	ur1 = tr1;
	tr2 = RTMS_EX_H("1200",4,825372720);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(44);
	tr1 = RTMS_EX_H("1201",4,825372721);
	ur1 = tr1;
	tr2 = RTMS_EX_H("1201",4,825372721);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(45);
	tr1 = RTMS_EX_H("1250",4,825374000);
	ur1 = tr1;
	tr2 = RTMS_EX_H("1250",4,825374000);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(46);
	tr1 = RTMS_EX_H("1251",4,825374001);
	ur1 = tr1;
	tr2 = RTMS_EX_H("1251",4,825374001);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(47);
	tr1 = RTMS_EX_H("1252",4,825374002);
	ur1 = tr1;
	tr2 = RTMS_EX_H("1252",4,825374002);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(48);
	tr1 = RTMS_EX_H("1253",4,825374003);
	ur1 = tr1;
	tr2 = RTMS_EX_H("1253",4,825374003);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(49);
	tr1 = RTMS_EX_H("1254",4,825374004);
	ur1 = tr1;
	tr2 = RTMS_EX_H("1254",4,825374004);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(50);
	tr1 = RTMS_EX_H("1255",4,825374005);
	ur1 = tr1;
	tr2 = RTMS_EX_H("1255",4,825374005);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(51);
	tr1 = RTMS_EX_H("1256",4,825374006);
	ur1 = tr1;
	tr2 = RTMS_EX_H("1256",4,825374006);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(52);
	tr1 = RTMS_EX_H("1257",4,825374007);
	ur1 = tr1;
	tr2 = RTMS_EX_H("1257",4,825374007);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(53);
	tr1 = RTMS_EX_H("1258",4,825374008);
	ur1 = tr1;
	tr2 = RTMS_EX_H("1258",4,825374008);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(54);
	tr1 = RTMS_EX_H("1361",4,825439793);
	ur1 = tr1;
	tr2 = RTMS_EX_H("1361",4,825439793);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(55);
	tr1 = RTMS_EX_H("10000",5,808840752);
	ur1 = tr1;
	tr2 = RTMS_EX_H("10000",5,808840752);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(56);
	tr1 = RTMS_EX_H("10001",5,808840753);
	ur1 = tr1;
	tr2 = RTMS_EX_H("10001",5,808840753);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(57);
	tr1 = RTMS_EX_H("10002",5,808840754);
	ur1 = tr1;
	tr2 = RTMS_EX_H("10002",5,808840754);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(58);
	tr1 = RTMS_EX_H("10003",5,808840755);
	ur1 = tr1;
	tr2 = RTMS_EX_H("10003",5,808840755);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(59);
	tr1 = RTMS_EX_H("10004",5,808840756);
	ur1 = tr1;
	tr2 = RTMS_EX_H("10004",5,808840756);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(60);
	tr1 = RTMS_EX_H("10005",5,808840757);
	ur1 = tr1;
	tr2 = RTMS_EX_H("10005",5,808840757);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(61);
	tr1 = RTMS_EX_H("10006",5,808840758);
	ur1 = tr1;
	tr2 = RTMS_EX_H("10006",5,808840758);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(62);
	tr1 = RTMS_EX_H("10007",5,808840759);
	ur1 = tr1;
	tr2 = RTMS_EX_H("10007",5,808840759);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(63);
	tr1 = RTMS_EX_H("10008",5,808840760);
	ur1 = tr1;
	tr2 = RTMS_EX_H("10008",5,808840760);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(64);
	tr1 = RTMS_EX_H("10010",5,808841008);
	ur1 = tr1;
	tr2 = RTMS_EX_H("10010",5,808841008);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(65);
	tr1 = RTMS_EX_H("10017",5,808841015);
	ur1 = tr1;
	tr2 = RTMS_EX_H("10017",5,808841015);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(66);
	tr1 = RTMS_EX_H("10021",5,808841265);
	ur1 = tr1;
	tr2 = RTMS_EX_H("10021",5,808841265);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(67);
	tr1 = RTMS_EX_H("10029",5,808841273);
	ur1 = tr1;
	tr2 = RTMS_EX_H("10029",5,808841273);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(68);
	tr1 = RTMS_EX_H("10079",5,808842553);
	ur1 = tr1;
	tr2 = RTMS_EX_H("10079",5,808842553);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(69);
	tr1 = RTMS_EX_H("10081",5,808842801);
	ur1 = tr1;
	tr2 = RTMS_EX_H("10081",5,808842801);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(70);
	tr1 = RTMS_EX_H("10082",5,808842802);
	ur1 = tr1;
	tr2 = RTMS_EX_H("10082",5,808842802);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(71);
	tr1 = RTMS_EX_H("12000",5,842395184);
	ur1 = tr1;
	tr2 = RTMS_EX_H("12000",5,842395184);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(72);
	tr1 = RTMS_EX_H("12001",5,842395185);
	ur1 = tr1;
	tr2 = RTMS_EX_H("12001",5,842395185);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(73);
	tr1 = RTMS_EX_H("20000",5,808848432);
	ur1 = tr1;
	tr2 = RTMS_EX_H("20000",5,808848432);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(74);
	tr1 = RTMS_EX_H("20001",5,808848433);
	ur1 = tr1;
	tr2 = RTMS_EX_H("20001",5,808848433);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(75);
	tr1 = RTMS_EX_H("20002",5,808848434);
	ur1 = tr1;
	tr2 = RTMS_EX_H("20002",5,808848434);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(76);
	tr1 = RTMS_EX_H("20003",5,808848435);
	ur1 = tr1;
	tr2 = RTMS_EX_H("20003",5,808848435);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(77);
	tr1 = RTMS_EX_H("20004",5,808848436);
	ur1 = tr1;
	tr2 = RTMS_EX_H("20004",5,808848436);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(78);
	tr1 = RTMS_EX_H("20005",5,808848437);
	ur1 = tr1;
	tr2 = RTMS_EX_H("20005",5,808848437);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(79);
	tr1 = RTMS_EX_H("20105",5,808913973);
	ur1 = tr1;
	tr2 = RTMS_EX_H("20105",5,808913973);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(80);
	tr1 = RTMS_EX_H("20106",5,808913974);
	ur1 = tr1;
	tr2 = RTMS_EX_H("20106",5,808913974);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(81);
	tr1 = RTMS_EX_H("20107",5,808913975);
	ur1 = tr1;
	tr2 = RTMS_EX_H("20107",5,808913975);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(82);
	tr1 = RTMS_EX_H("20108",5,808913976);
	ur1 = tr1;
	tr2 = RTMS_EX_H("20108",5,808913976);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(83);
	tr1 = RTMS_EX_H("20127",5,808914487);
	ur1 = tr1;
	tr2 = RTMS_EX_H("20127",5,808914487);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(84);
	tr1 = RTMS_EX_H("20261",5,808981041);
	ur1 = tr1;
	tr2 = RTMS_EX_H("20261",5,808981041);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(85);
	tr1 = RTMS_EX_H("20269",5,808981049);
	ur1 = tr1;
	tr2 = RTMS_EX_H("20269",5,808981049);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(86);
	tr1 = RTMS_EX_H("20273",5,808981299);
	ur1 = tr1;
	tr2 = RTMS_EX_H("20273",5,808981299);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(87);
	tr1 = RTMS_EX_H("20277",5,808981303);
	ur1 = tr1;
	tr2 = RTMS_EX_H("20277",5,808981303);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(88);
	tr1 = RTMS_EX_H("20278",5,808981304);
	ur1 = tr1;
	tr2 = RTMS_EX_H("20278",5,808981304);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(89);
	tr1 = RTMS_EX_H("20280",5,808981552);
	ur1 = tr1;
	tr2 = RTMS_EX_H("20280",5,808981552);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(90);
	tr1 = RTMS_EX_H("20284",5,808981556);
	ur1 = tr1;
	tr2 = RTMS_EX_H("20284",5,808981556);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(91);
	tr1 = RTMS_EX_H("20285",5,808981557);
	ur1 = tr1;
	tr2 = RTMS_EX_H("20285",5,808981557);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(92);
	tr1 = RTMS_EX_H("20290",5,808981808);
	ur1 = tr1;
	tr2 = RTMS_EX_H("20290",5,808981808);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(93);
	tr1 = RTMS_EX_H("20297",5,808981815);
	ur1 = tr1;
	tr2 = RTMS_EX_H("20297",5,808981815);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(94);
	tr1 = RTMS_EX_H("20420",5,809111088);
	ur1 = tr1;
	tr2 = RTMS_EX_H("20420",5,809111088);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(95);
	tr1 = RTMS_EX_H("20423",5,809111091);
	ur1 = tr1;
	tr2 = RTMS_EX_H("20423",5,809111091);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(96);
	tr1 = RTMS_EX_H("20424",5,809111092);
	ur1 = tr1;
	tr2 = RTMS_EX_H("20424",5,809111092);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(97);
	tr1 = RTMS_EX_H("20833",5,809373491);
	ur1 = tr1;
	tr2 = RTMS_EX_H("20833",5,809373491);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(98);
	tr1 = RTMS_EX_H("20838",5,809373496);
	ur1 = tr1;
	tr2 = RTMS_EX_H("20838",5,809373496);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(99);
	tr1 = RTMS_EX_H("20866",5,809374262);
	ur1 = tr1;
	tr2 = RTMS_EX_H("20866",5,809374262);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(100);
	tr1 = RTMS_EX_H("20871",5,809374513);
	ur1 = tr1;
	tr2 = RTMS_EX_H("20871",5,809374513);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(101);
	tr1 = RTMS_EX_H("20880",5,809374768);
	ur1 = tr1;
	tr2 = RTMS_EX_H("20880",5,809374768);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(102);
	tr1 = RTMS_EX_H("20905",5,809438261);
	ur1 = tr1;
	tr2 = RTMS_EX_H("20905",5,809438261);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(103);
	tr1 = RTMS_EX_H("20924",5,809438772);
	ur1 = tr1;
	tr2 = RTMS_EX_H("20924",5,809438772);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(104);
	tr1 = RTMS_EX_H("20932",5,809439026);
	ur1 = tr1;
	tr2 = RTMS_EX_H("20932",5,809439026);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(105);
	tr1 = RTMS_EX_H("20936",5,809439030);
	ur1 = tr1;
	tr2 = RTMS_EX_H("20936",5,809439030);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(106);
	tr1 = RTMS_EX_H("21025",5,825626165);
	ur1 = tr1;
	tr2 = RTMS_EX_H("21025",5,825626165);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(107);
	tr1 = RTMS_EX_H("21027",5,825626167);
	ur1 = tr1;
	tr2 = RTMS_EX_H("21027",5,825626167);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(108);
	tr1 = RTMS_EX_H("21866",5,826151478);
	ur1 = tr1;
	tr2 = RTMS_EX_H("21866",5,826151478);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(109);
	tr1 = RTMS_EX_H("28591",5,943396145);
	ur1 = tr1;
	tr2 = RTMS_EX_H("28591",5,943396145);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(110);
	tr1 = RTMS_EX_H("28592",5,943396146);
	ur1 = tr1;
	tr2 = RTMS_EX_H("28592",5,943396146);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(111);
	tr1 = RTMS_EX_H("28593",5,943396147);
	ur1 = tr1;
	tr2 = RTMS_EX_H("28593",5,943396147);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(112);
	tr1 = RTMS_EX_H("28594",5,943396148);
	ur1 = tr1;
	tr2 = RTMS_EX_H("28594",5,943396148);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(113);
	tr1 = RTMS_EX_H("28595",5,943396149);
	ur1 = tr1;
	tr2 = RTMS_EX_H("28595",5,943396149);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(114);
	tr1 = RTMS_EX_H("28596",5,943396150);
	ur1 = tr1;
	tr2 = RTMS_EX_H("28596",5,943396150);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(115);
	tr1 = RTMS_EX_H("28597",5,943396151);
	ur1 = tr1;
	tr2 = RTMS_EX_H("28597",5,943396151);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(116);
	tr1 = RTMS_EX_H("28598",5,943396152);
	ur1 = tr1;
	tr2 = RTMS_EX_H("28598",5,943396152);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(117);
	tr1 = RTMS_EX_H("28599",5,943396153);
	ur1 = tr1;
	tr2 = RTMS_EX_H("28599",5,943396153);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(118);
	tr1 = RTMS_EX_H("28605",5,943459381);
	ur1 = tr1;
	tr2 = RTMS_EX_H("28605",5,943459381);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(119);
	tr1 = RTMS_EX_H("29001",5,959843377);
	ur1 = tr1;
	tr2 = RTMS_EX_H("29001",5,959843377);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(120);
	tr1 = RTMS_EX_H("38598",5,943403832);
	ur1 = tr1;
	tr2 = RTMS_EX_H("38598",5,943403832);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(121);
	tr1 = RTMS_EX_H("50220",5,809003056);
	ur1 = tr1;
	tr2 = RTMS_EX_H("50220",5,809003056);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(122);
	tr1 = RTMS_EX_H("50221",5,809003057);
	ur1 = tr1;
	tr2 = RTMS_EX_H("50221",5,809003057);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(123);
	tr1 = RTMS_EX_H("50222",5,809003058);
	ur1 = tr1;
	tr2 = RTMS_EX_H("50222",5,809003058);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(124);
	tr1 = RTMS_EX_H("50225",5,809003061);
	ur1 = tr1;
	tr2 = RTMS_EX_H("50225",5,809003061);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(125);
	tr1 = RTMS_EX_H("50227",5,809003063);
	ur1 = tr1;
	tr2 = RTMS_EX_H("50227",5,809003063);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(126);
	tr1 = RTMS_EX_H("50229",5,809003065);
	ur1 = tr1;
	tr2 = RTMS_EX_H("50229",5,809003065);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(127);
	tr1 = RTMS_EX_H("50930",5,809462064);
	ur1 = tr1;
	tr2 = RTMS_EX_H("50930",5,809462064);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(128);
	tr1 = RTMS_EX_H("50931",5,809462065);
	ur1 = tr1;
	tr2 = RTMS_EX_H("50931",5,809462065);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(129);
	tr1 = RTMS_EX_H("50933",5,809462067);
	ur1 = tr1;
	tr2 = RTMS_EX_H("50933",5,809462067);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(130);
	tr1 = RTMS_EX_H("50935",5,809462069);
	ur1 = tr1;
	tr2 = RTMS_EX_H("50935",5,809462069);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(131);
	tr1 = RTMS_EX_H("50936",5,809462070);
	ur1 = tr1;
	tr2 = RTMS_EX_H("50936",5,809462070);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(132);
	tr1 = RTMS_EX_H("50937",5,809462071);
	ur1 = tr1;
	tr2 = RTMS_EX_H("50937",5,809462071);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(133);
	tr1 = RTMS_EX_H("50939",5,809462073);
	ur1 = tr1;
	tr2 = RTMS_EX_H("50939",5,809462073);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(134);
	tr1 = RTMS_EX_H("51932",5,826239282);
	ur1 = tr1;
	tr2 = RTMS_EX_H("51932",5,826239282);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(135);
	tr1 = RTMS_EX_H("51936",5,826239286);
	ur1 = tr1;
	tr2 = RTMS_EX_H("51936",5,826239286);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(136);
	tr1 = RTMS_EX_H("51949",5,826239545);
	ur1 = tr1;
	tr2 = RTMS_EX_H("51949",5,826239545);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(137);
	tr1 = RTMS_EX_H("51950",5,826239792);
	ur1 = tr1;
	tr2 = RTMS_EX_H("51950",5,826239792);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(138);
	tr1 = RTMS_EX_H("52936",5,843016502);
	ur1 = tr1;
	tr2 = RTMS_EX_H("52936",5,843016502);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(139);
	tr1 = RTMS_EX_H("54936",5,876570934);
	ur1 = tr1;
	tr2 = RTMS_EX_H("54936",5,876570934);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(140);
	tr1 = RTMS_EX_H("57002",5,926311986);
	ur1 = tr1;
	tr2 = RTMS_EX_H("57002",5,926311986);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(141);
	tr1 = RTMS_EX_H("57003",5,926311987);
	ur1 = tr1;
	tr2 = RTMS_EX_H("57003",5,926311987);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(142);
	tr1 = RTMS_EX_H("57004",5,926311988);
	ur1 = tr1;
	tr2 = RTMS_EX_H("57004",5,926311988);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(143);
	tr1 = RTMS_EX_H("57005",5,926311989);
	ur1 = tr1;
	tr2 = RTMS_EX_H("57005",5,926311989);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(144);
	tr1 = RTMS_EX_H("57006",5,926311990);
	ur1 = tr1;
	tr2 = RTMS_EX_H("57006",5,926311990);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(145);
	tr1 = RTMS_EX_H("57007",5,926311991);
	ur1 = tr1;
	tr2 = RTMS_EX_H("57007",5,926311991);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(146);
	tr1 = RTMS_EX_H("57008",5,926311992);
	ur1 = tr1;
	tr2 = RTMS_EX_H("57008",5,926311992);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(147);
	tr1 = RTMS_EX_H("57009",5,926311993);
	ur1 = tr1;
	tr2 = RTMS_EX_H("57009",5,926311993);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(148);
	tr1 = RTMS_EX_H("57010",5,926312240);
	ur1 = tr1;
	tr2 = RTMS_EX_H("57010",5,926312240);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(149);
	tr1 = RTMS_EX_H("57011",5,926312241);
	ur1 = tr1;
	tr2 = RTMS_EX_H("57011",5,926312241);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(150);
	tr1 = RTMS_EX_H("65000",5,892765232);
	ur1 = tr1;
	tr2 = RTMS_EX_H("65000",5,892765232);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(151);
	tr1 = RTMS_EX_H("65001",5,892765233);
	ur1 = tr1;
	tr2 = RTMS_EX_H("65001",5,892765233);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(152);
	tr1 = RTMS_EX_H("65000",5,892765232);
	ur1 = tr1;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(41, 3))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur2 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(153);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(41, 3))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr1);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(41, 3))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	ur2 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(154);
	tr1 = RTMS_EX_H("65001",5,892765233);
	ur1 = tr1;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(42, 3))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur2 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(155);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(42, 3))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr1);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(42, 3))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	ur2 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(156);
	tr1 = RTMS_EX_H("1200",4,825372720);
	ur1 = tr1;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(43, 3))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(156,1);
	tr3 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3269, "as_lower", tr2))(tr2)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(157);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(43, 3))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr1);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(43, 3))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	ur2 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(158);
	tr1 = RTMS_EX_H("1200",4,825372720);
	ur1 = tr1;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(45, 3))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur2 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(159);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(45, 3))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr1);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(45, 3))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	ur2 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(160);
	tr1 = RTMS_EX_H("12000",5,842395184);
	ur1 = tr1;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(44, 3))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(160,1);
	tr3 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3269, "as_lower", tr2))(tr2)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(161);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(44, 3))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr1);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(44, 3))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	ur2 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(162);
	tr1 = RTMS_EX_H("12000",5,842395184);
	ur1 = tr1;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(46, 3))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(162,1);
	tr3 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3269, "as_lower", tr2))(tr2)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(163);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(46, 3))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr1);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(46, 3))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	ur2 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(164);
	tr1 = RTMS_EX_H("1201",4,825372721);
	ur1 = tr1;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(47, 3))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(164,1);
	tr3 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3269, "as_lower", tr2))(tr2)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(165);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(47, 3))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr1);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(47, 3))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	ur2 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(166);
	tr1 = RTMS_EX_H("12001",5,842395185);
	ur1 = tr1;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(48, 3))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(166,1);
	tr3 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3269, "as_lower", tr2))(tr2)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(167);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(48, 3))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr1);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(48, 3))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	ur2 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(168);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef up2
#undef ur1
#undef ur2
#undef ui4_1
#undef Result
}

/* {CODE_PAGES}.two_byte_code_pages */
RTOID (F16_493)
EIF_TYPED_VALUE F16_493 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "two_byte_code_pages";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	RTCDD;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOTDR(F16_493);
	dtype = Dtype(Current);

	RTLI(6);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,ur1);
	RTLR(3,tr2);
	RTLR(4,ur2);
	RTLR(5,tr3);
	RTLIU(6);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 15, Current, 0, 0, 575);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(15, Current, 575);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(0, 0xF800015C, 0,0); /* Result */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,348,0xFF01,177,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLN(typres0.id);
	}
	ui4_1 = ((EIF_INTEGER_32) 8L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(2361, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	tr1 = RTMS_EX_H("1200",4,825372720);
	ur1 = tr1;
	tr2 = RTMS_EX_H("1200",4,825372720);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(3);
	tr1 = RTMS_EX_H("1201",4,825372721);
	ur1 = tr1;
	tr2 = RTMS_EX_H("1201",4,825372721);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(4);
	tr1 = RTMS_EX_H("1200",4,825372720);
	ur1 = tr1;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(43, 3))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(4,1);
	tr3 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3269, "as_lower", tr2))(tr2)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(5);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(43, 3))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr1);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(43, 3))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	ur2 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(6);
	tr1 = RTMS_EX_H("1200",4,825372720);
	ur1 = tr1;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(45, 3))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(6,1);
	tr3 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3269, "as_lower", tr2))(tr2)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(7);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(45, 3))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr1);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(45, 3))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	ur2 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(8);
	tr1 = RTMS_EX_H("1201",4,825372721);
	ur1 = tr1;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(47, 3))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(8,1);
	tr3 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3269, "as_lower", tr2))(tr2)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(9);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(47, 3))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr1);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(47, 3))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	ur2 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(10);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef up2
#undef ur1
#undef ur2
#undef ui4_1
#undef Result
}

/* {CODE_PAGES}.four_byte_code_pages */
RTOID (F16_494)
EIF_TYPED_VALUE F16_494 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "four_byte_code_pages";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	RTCDD;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOTDR(F16_494);
	dtype = Dtype(Current);

	RTLI(6);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,ur1);
	RTLR(3,tr2);
	RTLR(4,ur2);
	RTLR(5,tr3);
	RTLIU(6);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 15, Current, 0, 0, 576);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(15, Current, 576);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(0, 0xF800015C, 0,0); /* Result */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,348,0xFF01,177,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLN(typres0.id);
	}
	ui4_1 = ((EIF_INTEGER_32) 8L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(2361, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	tr1 = RTMS_EX_H("12000",5,842395184);
	ur1 = tr1;
	tr2 = RTMS_EX_H("12000",5,842395184);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(3);
	tr1 = RTMS_EX_H("12001",5,842395185);
	ur1 = tr1;
	tr2 = RTMS_EX_H("12001",5,842395185);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(4);
	tr1 = RTMS_EX_H("12000",5,842395184);
	ur1 = tr1;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(44, 3))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(4,1);
	tr3 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3269, "as_lower", tr2))(tr2)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(5);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(44, 3))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr1);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(44, 3))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	ur2 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(6);
	tr1 = RTMS_EX_H("12000",5,842395184);
	ur1 = tr1;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(46, 3))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(6,1);
	tr3 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3269, "as_lower", tr2))(tr2)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(7);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(46, 3))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr1);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(46, 3))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	ur2 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(8);
	tr1 = RTMS_EX_H("12001",5,842395185);
	ur1 = tr1;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(48, 3))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(8,1);
	tr3 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3269, "as_lower", tr2))(tr2)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(9);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(48, 3))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr1);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(48, 3))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	ur2 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(10);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef up2
#undef ur1
#undef ur2
#undef ui4_1
#undef Result
}

/* {CODE_PAGES}.big_endian_code_pages */
RTOID (F16_495)
EIF_TYPED_VALUE F16_495 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "big_endian_code_pages";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	RTCDD;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOTDR(F16_495);
	dtype = Dtype(Current);

	RTLI(6);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,ur1);
	RTLR(3,tr2);
	RTLR(4,ur2);
	RTLR(5,tr3);
	RTLIU(6);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 15, Current, 0, 0, 577);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(15, Current, 577);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(0, 0xF800015C, 0,0); /* Result */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,348,0xFF01,177,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLN(typres0.id);
	}
	ui4_1 = ((EIF_INTEGER_32) 6L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(2361, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	tr1 = RTMS_EX_H("1201",4,825372721);
	ur1 = tr1;
	tr2 = RTMS_EX_H("1201",4,825372721);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(3);
	tr1 = RTMS_EX_H("12001",5,842395185);
	ur1 = tr1;
	tr2 = RTMS_EX_H("12001",5,842395185);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(4);
	tr1 = RTMS_EX_H("1201",4,825372721);
	ur1 = tr1;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(47, 3))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(4,1);
	tr3 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3269, "as_lower", tr2))(tr2)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(5);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(47, 3))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr1);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(47, 3))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	ur2 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(6);
	tr1 = RTMS_EX_H("12001",5,842395185);
	ur1 = tr1;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(48, 3))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(6,1);
	tr3 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3269, "as_lower", tr2))(tr2)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTHOOK(7);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(48, 3))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr1);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(48, 3))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	ur2 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1882, "put", Result))(Result, ur1x, ur2x);
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(8);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef up2
#undef ur1
#undef ur2
#undef ui4_1
#undef Result
}

void EIF_Minit16 (void)
{
	GTCX
	RTOTS (492,F16_492)
	RTOTS (493,F16_493)
	RTOTS (494,F16_494)
	RTOTS (495,F16_495)
}


#ifdef __cplusplus
}
#endif
