/*
 * Generated by ISE 20.05.10.4521 - win64
 */

#include "eif_eiffel.h"
#include "eif_project.h"
#include "egc_include.h"

#ifdef __cplusplus
extern "C" {
#endif
extern void F1_23();
extern EIF_REFERENCE F1_14();
extern void F239_6744();
extern void F241_6920();
extern void F239_6748();
extern void F246_6988();
extern void F247_7129();
extern void F246_6993();
extern void F275_3287();
extern void F263_6625();
extern void F60_1329();
extern EIF_REFERENCE F60_1316();
extern EIF_BOOLEAN F60_1328();
extern EIF_BOOLEAN F60_1336();
extern void F60_1338();
extern void F60_1339();
extern void F60_1340();
extern void F53_1242();
extern EIF_TYPED_VALUE F53_1243();

long *eif_area_table = (long *)0;
long *eif_lower_table = (long *)0;


extern void egc_init_plug (void); 
void egc_init_plug (void)
{
	egc_prof_enabled = (EIF_INTEGER) 0;
	egc_correct_mismatch = (void (*)(EIF_REFERENCE)) F1_23;
	egc_twin = (EIF_TYPED_VALUE (*)(EIF_REFERENCE)) F1_14;
	egc_strmake = (void (*)(EIF_REFERENCE, EIF_TYPED_VALUE)) F239_6744;
	egc_immstr8make_from_c_byte_array = (void (*)(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) F239_6748;
	egc_str32make = (void (*)(EIF_REFERENCE, EIF_TYPED_VALUE)) F246_6988;
	egc_immstr32make_from_c_byte_array = (void (*)(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) F246_6993;
	egc_arrmake = (void (*)(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) F275_3287;
	egc_strset = (void (*)(EIF_REFERENCE, EIF_TYPED_VALUE)) F241_6920;
	egc_str32set = (void (*)(EIF_REFERENCE, EIF_TYPED_VALUE)) F247_7129;
	egc_routdisp_wb = (void (*)(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) F263_6625;
	egc_is_scoop_capable = 1;
	egc_set_exception_data = (void (*)(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) F60_1329;
	egc_set_last_exception = (void (*)(EIF_REFERENCE, EIF_TYPED_VALUE)) F60_1328;
	egc_last_exception = (EIF_TYPED_VALUE (*)(EIF_REFERENCE)) F60_1316;
	egc_is_code_ignored = (EIF_TYPED_VALUE (*)(EIF_REFERENCE, EIF_TYPED_VALUE)) F60_1336;
	egc_once_raise = (void (*)(EIF_REFERENCE, EIF_TYPED_VALUE)) F60_1338;
	egc_init_exception_manager = (void (*)(EIF_REFERENCE)) F60_1339;
	egc_free_preallocated_trace = (void (*)(EIF_REFERENCE)) F60_1340;

	egc_str_dtype = 240;

	egc_immstr8_dtype = 249;

	egc_str32_dtype = 246;

	egc_immstr32_dtype = 248;
	egc_arr_dtype = 274;
	egc_tup_dtype = 194;
	egc_disp_rout_id = 3341;
	egc_copy_rout_id = 18;
	egc_is_equal_rout_id = 11;

	egc_sp_char = 0x0360;
	egc_sp_wchar = 0x01F8;
	egc_sp_bool = 0x01C9;
	egc_sp_uint8 = 0x027D;
	egc_sp_uint16 = 0x0215;
	egc_sp_uint32 = 0x0181;
	egc_sp_uint64 = 0x02D0;
	egc_sp_int8 = 0x0318;
	egc_sp_int16 = 0x033C;
	egc_sp_int32 = 0x0150;
	egc_sp_int64 = 0x02F4;
	egc_sp_real32 = 0x02AC;
	egc_sp_real64 = 0x01A5;
	egc_sp_pointer = 0x024D;
	egc_sp_ref = 0x0108;

	egc_uint8_dtype = 217;
	egc_uint16_dtype = 223;
	egc_uint32_dtype = 220;
	egc_uint64_dtype = 232;
	egc_int8_dtype = 196;
	egc_int16_dtype = 229;
	egc_int32_dtype = 226;
	egc_int64_dtype = 208;
	egc_bool_dtype = 211;
	egc_real32_dtype = 199;
	egc_char_dtype = 205;
	egc_wchar_dtype = 202;
	egc_real64_dtype = 214;
	egc_point_dtype = 235;

	egc_exception_dtype = 71;
	egc_except_emnger_dtype = 59;

	egc_ce_type = egc_ce_type_init;

	egc_ce_exp_type = egc_ce_exp_type_init;
	egc_fsystem = egc_fsystem_init;
	egc_system_mod_init = egc_system_mod_init_init;
	egc_partab = egc_partab_init;
	egc_partab_size = egc_partab_size_init;
	egc_foption = egc_foption_init;
	egc_frozen = egc_frozen_init;
	egc_fpatidtab = egc_fpatidtab_init;
	egc_address_table = egc_address_table_init;
	egc_fpattern = egc_fpattern_init;

	egc_einit = egc_einit_init;
	egc_tabinit = egc_tabinit_init;
	egc_forg_table = egc_forg_table_init;

	egc_system_name = "archivos";
	egc_system_location = "C:\\Users\\JOS\\Desktop\\LenguajesPRY3-EiffelJsonHandler-\\archivos\\EIFGENs\\archivos\\W_code";
	egc_compiler_tag = 39;
	egc_project_version = 1608590328;
	egc_has_old_special_semantic = 0;
	scount = 975;

	egc_rcount = 1;
	egc_ridx = 0;
	egc_rlist = (char**) eif_malloc (sizeof(char*)*egc_rcount);
	egc_rcdt = (int32 *) eif_malloc (sizeof(int32)*egc_rcount);
	egc_rcrid = (int32 *) eif_malloc (sizeof(int32)*egc_rcount);
	egc_rcarg = (int32 *) eif_malloc (sizeof(int32)*egc_rcount);
	egc_rlist[0] = "APPLICATION.make";
	egc_rcdt[0] = 0;
	egc_rcrid[0] = 5154;
	egc_rcarg[0] = 0;
	
	
	egc_platform_level = 0x00000D00;
	egc_rt_extension_dt = 52;
	egc_rt_extension_notify = (void (*)(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) F53_1242;
	egc_rt_extension_notify_argument = (EIF_TYPED_VALUE (*)(EIF_REFERENCE, EIF_TYPED_VALUE)) F53_1243;
}

void egc_rcdt_init (void)
{
	if (egc_rcdt[0] == 0) {
		egc_rcdt[0] = 974; /* APPLICATION */
	}
}

#ifdef __cplusplus
}
#endif
