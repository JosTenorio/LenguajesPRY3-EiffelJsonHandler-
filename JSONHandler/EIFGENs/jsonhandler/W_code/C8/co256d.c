/*
 * Class CONTAINER [CHARACTER_32]
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static const EIF_TYPE_INDEX egt_0_256 [] = {0xFF01,175,0xFFFF};
static const EIF_TYPE_INDEX egt_1_256 [] = {0xFF01,183,255,159,0xFFFF};
static const EIF_TYPE_INDEX egt_2_256 [] = {0xFF01,255,159,0xFFFF};
static const EIF_TYPE_INDEX egt_3_256 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_4_256 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_5_256 [] = {0xFF01,255,159,0xFFFF};
static const EIF_TYPE_INDEX egt_6_256 [] = {0xFF01,255,159,0xFFFF};
static const EIF_TYPE_INDEX egt_7_256 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_8_256 [] = {0xFF01,13,0xFFFF};
static const EIF_TYPE_INDEX egt_9_256 [] = {0xFF01,175,0xFFFF};
static const EIF_TYPE_INDEX egt_10_256 [] = {0xFF01,175,0xFFFF};
static const EIF_TYPE_INDEX egt_11_256 [] = {0xFF01,12,0xFFFF};
static const EIF_TYPE_INDEX egt_12_256 [] = {255,159,0xFFFF};
static const EIF_TYPE_INDEX egt_13_256 [] = {0xFF01,255,159,0xFFFF};
static const EIF_TYPE_INDEX egt_14_256 [] = {0xFF01,253,0xFFF8,1,0xFFFF};
static const EIF_TYPE_INDEX egt_15_256 [] = {0xFF01,247,0xFFF8,1,0xFFFF};
static const EIF_TYPE_INDEX egt_16_256 [] = {0xFFF8,1,0xFFFF};


static const struct desc_info desc_256[] = {
	{EIF_GENERIC(NULL), 0xFFFFFFFF, 0xFFFFFFFF},
	{EIF_GENERIC(egt_0_256), 0, 0xFFFFFFFF},
	{EIF_GENERIC(egt_1_256), 1, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x014B /*165*/), 2, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x014B /*165*/), 3, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x014B /*165*/), 4, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x014B /*165*/), 5, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x014B /*165*/), 6, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x014B /*165*/), 7, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x014B /*165*/), 8, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x014B /*165*/), 9, 0xFFFFFFFF},
	{EIF_GENERIC(egt_2_256), 10, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 11, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 12, 0xFFFFFFFF},
	{EIF_GENERIC(egt_3_256), 13, 0xFFFFFFFF},
	{EIF_GENERIC(egt_4_256), 14, 0xFFFFFFFF},
	{EIF_GENERIC(egt_5_256), 15, 0xFFFFFFFF},
	{EIF_GENERIC(egt_6_256), 16, 0xFFFFFFFF},
	{EIF_GENERIC(egt_7_256), 17, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 18, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 19, 0xFFFFFFFF},
	{EIF_GENERIC(egt_8_256), 20, 0xFFFFFFFF},
	{EIF_GENERIC(egt_9_256), 21, 0xFFFFFFFF},
	{EIF_GENERIC(egt_10_256), 22, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 23, 0xFFFFFFFF},
	{EIF_GENERIC(egt_11_256), 24, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 25, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 26, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 27, 0xFFFFFFFF},
	{EIF_GENERIC(egt_12_256), 28, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0151 /*168*/), 29, 0xFFFFFFFF},
	{EIF_GENERIC(egt_13_256), 30, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x014B /*165*/), 0x00, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x014B /*165*/), 0x00, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x014B /*165*/), 3464, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x014B /*165*/), 3465, 0},
	{EIF_NON_GENERIC(0x014B /*165*/), 3466, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 3467, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 3468, 0xFFFFFFFF},
	{EIF_GENERIC(egt_14_256), 0x00, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0109 /*132*/), 3469, 0xFFFFFFFF},
	{EIF_GENERIC(egt_15_256), 0x00, 0xFFFFFFFF},
	{EIF_GENERIC(egt_16_256), 0x00, 0xFFFFFFFF},
};
void Init256(void)
{
	IDSC(desc_256, 0, 255);
	IDSC(desc_256 + 1, 2, 255);
	IDSC(desc_256 + 32, 191, 255);
	IDSC(desc_256 + 41, 50, 255);
}


#ifdef __cplusplus
}
#endif
