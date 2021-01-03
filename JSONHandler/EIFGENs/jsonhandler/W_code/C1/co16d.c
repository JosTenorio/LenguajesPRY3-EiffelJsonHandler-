/*
 * Class CODE_PAGES
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static const EIF_TYPE_INDEX egt_0_16 [] = {0xFF01,175,0xFFFF};
static const EIF_TYPE_INDEX egt_1_16 [] = {0xFF01,183,15,0xFFFF};
static const EIF_TYPE_INDEX egt_2_16 [] = {0xFF01,15,0xFFFF};
static const EIF_TYPE_INDEX egt_3_16 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_4_16 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_5_16 [] = {0xFF01,15,0xFFFF};
static const EIF_TYPE_INDEX egt_6_16 [] = {0xFF01,15,0xFFFF};
static const EIF_TYPE_INDEX egt_7_16 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_8_16 [] = {0xFF01,13,0xFFFF};
static const EIF_TYPE_INDEX egt_9_16 [] = {0xFF01,175,0xFFFF};
static const EIF_TYPE_INDEX egt_10_16 [] = {0xFF01,175,0xFFFF};
static const EIF_TYPE_INDEX egt_11_16 [] = {0xFF01,12,0xFFFF};
static const EIF_TYPE_INDEX egt_12_16 [] = {0xFF01,15,0xFFFF};
static const EIF_TYPE_INDEX egt_13_16 [] = {0xFF01,759,0xFF01,173,0xFFFF};
static const EIF_TYPE_INDEX egt_14_16 [] = {0xFF01,759,0xFF01,173,0xFFFF};
static const EIF_TYPE_INDEX egt_15_16 [] = {0xFF01,759,0xFF01,173,0xFFFF};
static const EIF_TYPE_INDEX egt_16_16 [] = {0xFF01,759,0xFF01,173,0xFFFF};


static const struct desc_info desc_16[] = {
	{EIF_GENERIC(NULL), 0xFFFFFFFF, 0xFFFFFFFF},
	{EIF_GENERIC(egt_0_16), 0, 0xFFFFFFFF},
	{EIF_GENERIC(egt_1_16), 1, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x014B /*165*/), 2, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x014B /*165*/), 3, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x014B /*165*/), 4, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x014B /*165*/), 5, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x014B /*165*/), 6, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x014B /*165*/), 7, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x014B /*165*/), 8, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x014B /*165*/), 9, 0xFFFFFFFF},
	{EIF_GENERIC(egt_2_16), 10, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 11, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 12, 0xFFFFFFFF},
	{EIF_GENERIC(egt_3_16), 13, 0xFFFFFFFF},
	{EIF_GENERIC(egt_4_16), 14, 0xFFFFFFFF},
	{EIF_GENERIC(egt_5_16), 15, 0xFFFFFFFF},
	{EIF_GENERIC(egt_6_16), 16, 0xFFFFFFFF},
	{EIF_GENERIC(egt_7_16), 17, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 18, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 19, 0xFFFFFFFF},
	{EIF_GENERIC(egt_8_16), 20, 0xFFFFFFFF},
	{EIF_GENERIC(egt_9_16), 21, 0xFFFFFFFF},
	{EIF_GENERIC(egt_10_16), 22, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 23, 0xFFFFFFFF},
	{EIF_GENERIC(egt_11_16), 24, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 25, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 26, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 27, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x1F /*15*/), 28, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0151 /*168*/), 29, 0xFFFFFFFF},
	{EIF_GENERIC(egt_12_16), 30, 0xFFFFFFFF},
	{EIF_GENERIC(egt_13_16), 581, 0xFFFFFFFF},
	{EIF_GENERIC(egt_14_16), 582, 0xFFFFFFFF},
	{EIF_GENERIC(egt_15_16), 583, 0xFFFFFFFF},
	{EIF_GENERIC(egt_16_16), 584, 0xFFFFFFFF},
};
void Init16(void)
{
	IDSC(desc_16, 0, 15);
	IDSC(desc_16 + 1, 2, 15);
	IDSC(desc_16 + 32, 226, 15);
}


#ifdef __cplusplus
}
#endif
