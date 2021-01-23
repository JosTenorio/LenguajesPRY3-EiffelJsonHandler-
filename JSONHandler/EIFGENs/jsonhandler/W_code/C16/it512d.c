/*
 * Class ITERABLE [INTEGER_32]
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static const EIF_TYPE_INDEX egt_0_512 [] = {0xFF01,184,0xFFFF};
static const EIF_TYPE_INDEX egt_1_512 [] = {0xFF01,196,511,138,0xFFFF};
static const EIF_TYPE_INDEX egt_2_512 [] = {0xFF01,511,138,0xFFFF};
static const EIF_TYPE_INDEX egt_3_512 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_4_512 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_5_512 [] = {0xFF01,511,138,0xFFFF};
static const EIF_TYPE_INDEX egt_6_512 [] = {0xFF01,511,138,0xFFFF};
static const EIF_TYPE_INDEX egt_7_512 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_8_512 [] = {0xFF01,17,0xFFFF};
static const EIF_TYPE_INDEX egt_9_512 [] = {0xFF01,184,0xFFFF};
static const EIF_TYPE_INDEX egt_10_512 [] = {0xFF01,184,0xFFFF};
static const EIF_TYPE_INDEX egt_11_512 [] = {0xFF01,16,0xFFFF};
static const EIF_TYPE_INDEX egt_12_512 [] = {511,138,0xFFFF};
static const EIF_TYPE_INDEX egt_13_512 [] = {0xFF01,511,138,0xFFFF};
static const EIF_TYPE_INDEX egt_14_512 [] = {0xFF01,512,0xFFF8,1,0xFFFF};
static const EIF_TYPE_INDEX egt_15_512 [] = {0xFFF8,1,0xFFFF};


static const struct desc_info desc_512[] = {
	{EIF_GENERIC(NULL), 0xFFFFFFFF, 0xFFFFFFFF},
	{EIF_GENERIC(egt_0_512), 0, 0xFFFFFFFF},
	{EIF_GENERIC(egt_1_512), 1, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0151 /*168*/), 2, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0151 /*168*/), 3, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0151 /*168*/), 4, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0151 /*168*/), 5, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0151 /*168*/), 6, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0151 /*168*/), 7, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0151 /*168*/), 8, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0151 /*168*/), 9, 0xFFFFFFFF},
	{EIF_GENERIC(egt_2_512), 10, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 11, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 12, 0xFFFFFFFF},
	{EIF_GENERIC(egt_3_512), 13, 0xFFFFFFFF},
	{EIF_GENERIC(egt_4_512), 14, 0xFFFFFFFF},
	{EIF_GENERIC(egt_5_512), 15, 0xFFFFFFFF},
	{EIF_GENERIC(egt_6_512), 16, 0xFFFFFFFF},
	{EIF_GENERIC(egt_7_512), 17, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 18, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 19, 0xFFFFFFFF},
	{EIF_GENERIC(egt_8_512), 20, 0xFFFFFFFF},
	{EIF_GENERIC(egt_9_512), 21, 0xFFFFFFFF},
	{EIF_GENERIC(egt_10_512), 22, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 23, 0xFFFFFFFF},
	{EIF_GENERIC(egt_11_512), 24, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 25, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 26, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 27, 0xFFFFFFFF},
	{EIF_GENERIC(egt_12_512), 28, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x015D /*174*/), 29, 0xFFFFFFFF},
	{EIF_GENERIC(egt_13_512), 30, 0xFFFFFFFF},
	{EIF_GENERIC(egt_14_512), 0x00, 0xFFFFFFFF},
	{EIF_GENERIC(egt_15_512), 0x00, 0xFFFFFFFF},
};
void Init512(void)
{
	IDSC(desc_512, 0, 511);
	IDSC(desc_512 + 1, 2, 511);
	IDSC(desc_512 + 32, 46, 511);
}


#ifdef __cplusplus
}
#endif
