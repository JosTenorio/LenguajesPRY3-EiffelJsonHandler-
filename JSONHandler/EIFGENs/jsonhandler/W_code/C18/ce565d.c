/*
 * Class CELL [CHARACTER_32]
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static const EIF_TYPE_INDEX egt_0_565 [] = {0xFF01,182,0xFFFF};
static const EIF_TYPE_INDEX egt_1_565 [] = {0xFF01,194,564,160,0xFFFF};
static const EIF_TYPE_INDEX egt_2_565 [] = {0xFF01,564,160,0xFFFF};
static const EIF_TYPE_INDEX egt_3_565 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_4_565 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_5_565 [] = {0xFF01,564,160,0xFFFF};
static const EIF_TYPE_INDEX egt_6_565 [] = {0xFF01,564,160,0xFFFF};
static const EIF_TYPE_INDEX egt_7_565 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_8_565 [] = {0xFF01,16,0xFFFF};
static const EIF_TYPE_INDEX egt_9_565 [] = {0xFF01,182,0xFFFF};
static const EIF_TYPE_INDEX egt_10_565 [] = {0xFF01,182,0xFFFF};
static const EIF_TYPE_INDEX egt_11_565 [] = {0xFF01,15,0xFFFF};
static const EIF_TYPE_INDEX egt_12_565 [] = {564,160,0xFFFF};
static const EIF_TYPE_INDEX egt_13_565 [] = {0xFF01,564,160,0xFFFF};
static const EIF_TYPE_INDEX egt_14_565 [] = {0xFFF8,1,0xFFFF};
static const EIF_TYPE_INDEX egt_15_565 [] = {0xFFF8,1,0xFFFF};


static const struct desc_info desc_565[] = {
	{EIF_GENERIC(NULL), 0xFFFFFFFF, 0xFFFFFFFF},
	{EIF_GENERIC(egt_0_565), 0, 0xFFFFFFFF},
	{EIF_GENERIC(egt_1_565), 1, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x014D /*166*/), 2, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x014D /*166*/), 3, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x014D /*166*/), 4, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x014D /*166*/), 5, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x014D /*166*/), 6, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x014D /*166*/), 7, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x014D /*166*/), 8, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x014D /*166*/), 9, 0xFFFFFFFF},
	{EIF_GENERIC(egt_2_565), 10, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 11, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 12, 0xFFFFFFFF},
	{EIF_GENERIC(egt_3_565), 13, 0xFFFFFFFF},
	{EIF_GENERIC(egt_4_565), 14, 0xFFFFFFFF},
	{EIF_GENERIC(egt_5_565), 15, 0xFFFFFFFF},
	{EIF_GENERIC(egt_6_565), 16, 0xFFFFFFFF},
	{EIF_GENERIC(egt_7_565), 17, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 18, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 19, 0xFFFFFFFF},
	{EIF_GENERIC(egt_8_565), 20, 0xFFFFFFFF},
	{EIF_GENERIC(egt_9_565), 21, 0xFFFFFFFF},
	{EIF_GENERIC(egt_10_565), 22, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 23, 0xFFFFFFFF},
	{EIF_GENERIC(egt_11_565), 24, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 25, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 26, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 27, 0xFFFFFFFF},
	{EIF_GENERIC(egt_12_565), 28, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0159 /*172*/), 29, 0xFFFFFFFF},
	{EIF_GENERIC(egt_13_565), 30, 0xFFFFFFFF},
	{EIF_GENERIC(egt_14_565), 775, 0},
	{EIF_GENERIC(NULL), 776, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 777, 0xFFFFFFFF},
	{EIF_GENERIC(egt_15_565), 0x00, 0xFFFFFFFF},
};
void Init565(void)
{
	IDSC(desc_565, 0, 564);
	IDSC(desc_565 + 1, 2, 564);
	IDSC(desc_565 + 32, 79, 564);
}


#ifdef __cplusplus
}
#endif
