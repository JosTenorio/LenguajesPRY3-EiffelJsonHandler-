/*
 * Class SYSTEM_ENCODINGS
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static const EIF_TYPE_INDEX egt_0_5 [] = {0xFF01,179,0xFFFF};
static const EIF_TYPE_INDEX egt_1_5 [] = {0xFF01,184,4,0xFFFF};
static const EIF_TYPE_INDEX egt_2_5 [] = {0xFF01,4,0xFFFF};
static const EIF_TYPE_INDEX egt_3_5 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_4_5 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_5_5 [] = {0xFF01,4,0xFFFF};
static const EIF_TYPE_INDEX egt_6_5 [] = {0xFF01,4,0xFFFF};
static const EIF_TYPE_INDEX egt_7_5 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_8_5 [] = {0xFF01,13,0xFFFF};
static const EIF_TYPE_INDEX egt_9_5 [] = {0xFF01,179,0xFFFF};
static const EIF_TYPE_INDEX egt_10_5 [] = {0xFF01,179,0xFFFF};
static const EIF_TYPE_INDEX egt_11_5 [] = {0xFF01,14,0xFFFF};
static const EIF_TYPE_INDEX egt_12_5 [] = {0xFF01,4,0xFFFF};
static const EIF_TYPE_INDEX egt_13_5 [] = {0xFF01,5,0xFFFF};
static const EIF_TYPE_INDEX egt_14_5 [] = {0xFF01,5,0xFFFF};
static const EIF_TYPE_INDEX egt_15_5 [] = {0xFF01,5,0xFFFF};
static const EIF_TYPE_INDEX egt_16_5 [] = {0xFF01,5,0xFFFF};
static const EIF_TYPE_INDEX egt_17_5 [] = {0xFF01,5,0xFFFF};
static const EIF_TYPE_INDEX egt_18_5 [] = {0xFF01,5,0xFFFF};
static const EIF_TYPE_INDEX egt_19_5 [] = {0xFF01,19,0xFFFF};


static const struct desc_info desc_5[] = {
	{EIF_GENERIC(NULL), 0xFFFFFFFF, 0xFFFFFFFF},
	{EIF_GENERIC(egt_0_5), 0, 0xFFFFFFFF},
	{EIF_GENERIC(egt_1_5), 1, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x014D /*166*/), 2, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x014D /*166*/), 3, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x014D /*166*/), 4, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x014D /*166*/), 5, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x014D /*166*/), 6, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x014D /*166*/), 7, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x014D /*166*/), 8, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x014D /*166*/), 9, 0xFFFFFFFF},
	{EIF_GENERIC(egt_2_5), 10, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 11, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 12, 0xFFFFFFFF},
	{EIF_GENERIC(egt_3_5), 13, 0xFFFFFFFF},
	{EIF_GENERIC(egt_4_5), 14, 0xFFFFFFFF},
	{EIF_GENERIC(egt_5_5), 15, 0xFFFFFFFF},
	{EIF_GENERIC(egt_6_5), 16, 0xFFFFFFFF},
	{EIF_GENERIC(egt_7_5), 17, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 18, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 19, 0xFFFFFFFF},
	{EIF_GENERIC(egt_8_5), 20, 0xFFFFFFFF},
	{EIF_GENERIC(egt_9_5), 21, 0xFFFFFFFF},
	{EIF_GENERIC(egt_10_5), 22, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 23, 0xFFFFFFFF},
	{EIF_GENERIC(egt_11_5), 24, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 25, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 26, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 27, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x09 /*4*/), 28, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0153 /*169*/), 29, 0xFFFFFFFF},
	{EIF_GENERIC(egt_12_5), 30, 0xFFFFFFFF},
	{EIF_GENERIC(egt_13_5), 48, 0xFFFFFFFF},
	{EIF_GENERIC(egt_14_5), 49, 0xFFFFFFFF},
	{EIF_GENERIC(egt_15_5), 50, 0xFFFFFFFF},
	{EIF_GENERIC(egt_16_5), 51, 0xFFFFFFFF},
	{EIF_GENERIC(egt_17_5), 52, 0xFFFFFFFF},
	{EIF_GENERIC(egt_18_5), 53, 0xFFFFFFFF},
	{EIF_GENERIC(egt_19_5), 54, 0xFFFFFFFF},
};
void Init5(void)
{
	IDSC(desc_5, 0, 4);
	IDSC(desc_5 + 1, 2, 4);
	IDSC(desc_5 + 32, 184, 4);
}


#ifdef __cplusplus
}
#endif
