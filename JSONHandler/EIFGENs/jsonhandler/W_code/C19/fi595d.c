/*
 * Class FINITE [NATURAL_64]
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static const EIF_TYPE_INDEX egt_0_595 [] = {0xFF01,175,0xFFFF};
static const EIF_TYPE_INDEX egt_1_595 [] = {0xFF01,183,594,141,0xFFFF};
static const EIF_TYPE_INDEX egt_2_595 [] = {0xFF01,594,141,0xFFFF};
static const EIF_TYPE_INDEX egt_3_595 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_4_595 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_5_595 [] = {0xFF01,594,141,0xFFFF};
static const EIF_TYPE_INDEX egt_6_595 [] = {0xFF01,594,141,0xFFFF};
static const EIF_TYPE_INDEX egt_7_595 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_8_595 [] = {0xFF01,13,0xFFFF};
static const EIF_TYPE_INDEX egt_9_595 [] = {0xFF01,175,0xFFFF};
static const EIF_TYPE_INDEX egt_10_595 [] = {0xFF01,175,0xFFFF};
static const EIF_TYPE_INDEX egt_11_595 [] = {0xFF01,12,0xFFFF};
static const EIF_TYPE_INDEX egt_12_595 [] = {594,141,0xFFFF};
static const EIF_TYPE_INDEX egt_13_595 [] = {0xFF01,594,141,0xFFFF};
static const EIF_TYPE_INDEX egt_14_595 [] = {0xFF01,591,0xFFF8,1,0xFFFF};
static const EIF_TYPE_INDEX egt_15_595 [] = {0xFF01,585,0xFFF8,1,0xFFFF};
static const EIF_TYPE_INDEX egt_16_595 [] = {0xFFF8,1,0xFFFF};


static const struct desc_info desc_595[] = {
	{EIF_GENERIC(NULL), 3804, 0xFFFFFFFF},
	{EIF_GENERIC(egt_0_595), 0, 0xFFFFFFFF},
	{EIF_GENERIC(egt_1_595), 1, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x014B /*165*/), 2, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x014B /*165*/), 3, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x014B /*165*/), 4, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x014B /*165*/), 5, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x014B /*165*/), 6, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x014B /*165*/), 7, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x014B /*165*/), 8, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x014B /*165*/), 9, 0xFFFFFFFF},
	{EIF_GENERIC(egt_2_595), 10, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 11, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 12, 0xFFFFFFFF},
	{EIF_GENERIC(egt_3_595), 13, 0xFFFFFFFF},
	{EIF_GENERIC(egt_4_595), 14, 0xFFFFFFFF},
	{EIF_GENERIC(egt_5_595), 15, 0xFFFFFFFF},
	{EIF_GENERIC(egt_6_595), 16, 0xFFFFFFFF},
	{EIF_GENERIC(egt_7_595), 17, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 18, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 19, 0xFFFFFFFF},
	{EIF_GENERIC(egt_8_595), 20, 0xFFFFFFFF},
	{EIF_GENERIC(egt_9_595), 21, 0xFFFFFFFF},
	{EIF_GENERIC(egt_10_595), 22, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 23, 0xFFFFFFFF},
	{EIF_GENERIC(egt_11_595), 24, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 25, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 26, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 27, 0xFFFFFFFF},
	{EIF_GENERIC(egt_12_595), 28, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0151 /*168*/), 29, 0xFFFFFFFF},
	{EIF_GENERIC(egt_13_595), 30, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x014B /*165*/), 0x00, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x014B /*165*/), 3803, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x014B /*165*/), 3512, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x014B /*165*/), 3513, 0},
	{EIF_NON_GENERIC(0x014B /*165*/), 3514, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 3515, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 3516, 0xFFFFFFFF},
	{EIF_GENERIC(egt_14_595), 0x00, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0109 /*132*/), 3517, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0109 /*132*/), 0x00, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x014B /*165*/), 0x00, 0xFFFFFFFF},
	{EIF_GENERIC(egt_15_595), 0x00, 0xFFFFFFFF},
	{EIF_GENERIC(egt_16_595), 0x00, 0xFFFFFFFF},
};
void Init595(void)
{
	IDSC(desc_595, 0, 594);
	IDSC(desc_595 + 1, 2, 594);
	IDSC(desc_595 + 32, 191, 594);
	IDSC(desc_595 + 41, 193, 594);
	IDSC(desc_595 + 42, 221, 594);
	IDSC(desc_595 + 43, 50, 594);
}


#ifdef __cplusplus
}
#endif