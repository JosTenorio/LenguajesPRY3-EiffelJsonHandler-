/*
 * Class DEBUG_OUTPUT
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static const EIF_TYPE_INDEX egt_0_125 [] = {0xFF01,182,0xFFFF};
static const EIF_TYPE_INDEX egt_1_125 [] = {0xFF01,194,124,0xFFFF};
static const EIF_TYPE_INDEX egt_2_125 [] = {0xFF01,124,0xFFFF};
static const EIF_TYPE_INDEX egt_3_125 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_4_125 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_5_125 [] = {0xFF01,124,0xFFFF};
static const EIF_TYPE_INDEX egt_6_125 [] = {0xFF01,124,0xFFFF};
static const EIF_TYPE_INDEX egt_7_125 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_8_125 [] = {0xFF01,15,0xFFFF};
static const EIF_TYPE_INDEX egt_9_125 [] = {0xFF01,182,0xFFFF};
static const EIF_TYPE_INDEX egt_10_125 [] = {0xFF01,182,0xFFFF};
static const EIF_TYPE_INDEX egt_11_125 [] = {0xFF01,16,0xFFFF};
static const EIF_TYPE_INDEX egt_12_125 [] = {0xFF01,124,0xFFFF};
static const EIF_TYPE_INDEX egt_13_125 [] = {0xFF01,174,0xFFFF};


static const struct desc_info desc_125[] = {
	{EIF_GENERIC(NULL), 0xFFFFFFFF, 0xFFFFFFFF},
	{EIF_GENERIC(egt_0_125), 0, 0xFFFFFFFF},
	{EIF_GENERIC(egt_1_125), 1, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0153 /*169*/), 2, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0153 /*169*/), 3, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0153 /*169*/), 4, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0153 /*169*/), 5, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0153 /*169*/), 6, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0153 /*169*/), 7, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0153 /*169*/), 8, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0153 /*169*/), 9, 0xFFFFFFFF},
	{EIF_GENERIC(egt_2_125), 10, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 11, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 12, 0xFFFFFFFF},
	{EIF_GENERIC(egt_3_125), 13, 0xFFFFFFFF},
	{EIF_GENERIC(egt_4_125), 14, 0xFFFFFFFF},
	{EIF_GENERIC(egt_5_125), 15, 0xFFFFFFFF},
	{EIF_GENERIC(egt_6_125), 16, 0xFFFFFFFF},
	{EIF_GENERIC(egt_7_125), 17, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 18, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 19, 0xFFFFFFFF},
	{EIF_GENERIC(egt_8_125), 20, 0xFFFFFFFF},
	{EIF_GENERIC(egt_9_125), 21, 0xFFFFFFFF},
	{EIF_GENERIC(egt_10_125), 22, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 23, 0xFFFFFFFF},
	{EIF_GENERIC(egt_11_125), 24, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 25, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 26, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 27, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0xF9 /*124*/), 28, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0159 /*172*/), 29, 0xFFFFFFFF},
	{EIF_GENERIC(egt_12_125), 30, 0xFFFFFFFF},
	{EIF_GENERIC(egt_13_125), 0x00, 0xFFFFFFFF},
};
void Init125(void)
{
	IDSC(desc_125, 0, 124);
	IDSC(desc_125 + 1, 2, 124);
	IDSC(desc_125 + 32, 76, 124);
}


#ifdef __cplusplus
}
#endif
