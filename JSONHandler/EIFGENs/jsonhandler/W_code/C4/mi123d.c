/*
 * Class MISMATCH_CORRECTOR
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static const EIF_TYPE_INDEX egt_0_123 [] = {0xFF01,182,0xFFFF};
static const EIF_TYPE_INDEX egt_1_123 [] = {0xFF01,194,122,0xFFFF};
static const EIF_TYPE_INDEX egt_2_123 [] = {0xFF01,122,0xFFFF};
static const EIF_TYPE_INDEX egt_3_123 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_4_123 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_5_123 [] = {0xFF01,122,0xFFFF};
static const EIF_TYPE_INDEX egt_6_123 [] = {0xFF01,122,0xFFFF};
static const EIF_TYPE_INDEX egt_7_123 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_8_123 [] = {0xFF01,15,0xFFFF};
static const EIF_TYPE_INDEX egt_9_123 [] = {0xFF01,182,0xFFFF};
static const EIF_TYPE_INDEX egt_10_123 [] = {0xFF01,182,0xFFFF};
static const EIF_TYPE_INDEX egt_11_123 [] = {0xFF01,16,0xFFFF};
static const EIF_TYPE_INDEX egt_12_123 [] = {0xFF01,122,0xFFFF};
static const EIF_TYPE_INDEX egt_13_123 [] = {0xFF01,123,0xFFFF};


static const struct desc_info desc_123[] = {
	{EIF_GENERIC(NULL), 0xFFFFFFFF, 0xFFFFFFFF},
	{EIF_GENERIC(egt_0_123), 0, 0xFFFFFFFF},
	{EIF_GENERIC(egt_1_123), 1, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0153 /*169*/), 2, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0153 /*169*/), 3, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0153 /*169*/), 4, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0153 /*169*/), 5, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0153 /*169*/), 6, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0153 /*169*/), 7, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0153 /*169*/), 8, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0153 /*169*/), 9, 0xFFFFFFFF},
	{EIF_GENERIC(egt_2_123), 10, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 11, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 12, 0xFFFFFFFF},
	{EIF_GENERIC(egt_3_123), 13, 0xFFFFFFFF},
	{EIF_GENERIC(egt_4_123), 14, 0xFFFFFFFF},
	{EIF_GENERIC(egt_5_123), 15, 0xFFFFFFFF},
	{EIF_GENERIC(egt_6_123), 16, 0xFFFFFFFF},
	{EIF_GENERIC(egt_7_123), 17, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 18, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 19, 0xFFFFFFFF},
	{EIF_GENERIC(egt_8_123), 20, 0xFFFFFFFF},
	{EIF_GENERIC(egt_9_123), 21, 0xFFFFFFFF},
	{EIF_GENERIC(egt_10_123), 22, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 23, 0xFFFFFFFF},
	{EIF_GENERIC(egt_11_123), 24, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 25, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 26, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 27, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0xF5 /*122*/), 28, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0159 /*172*/), 29, 0xFFFFFFFF},
	{EIF_GENERIC(egt_12_123), 30, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 5018, 0xFFFFFFFF},
	{EIF_GENERIC(egt_13_123), 5019, 0xFFFFFFFF},
};
void Init123(void)
{
	IDSC(desc_123, 0, 122);
	IDSC(desc_123 + 1, 2, 122);
	IDSC(desc_123 + 32, 40, 122);
}


#ifdef __cplusplus
}
#endif