/** ==================================================================================================================*\
  @file UT_Mfx.c

  @brief Test for Mfx
\*====================================================================================================================*/

#include "acutest.h"

#include "Mfx.c"   

/**
  @brief Additions Test

  This routine tests an addition between the two arguments.
*/
void Test_Of_Mfx_Add_s16s16_s16(void)
{
    sint16 result;

    result = Mfx_Add_s16s16_s16(MAX16, 1);

    TEST_CHECK(result == MAX16);

	result = Mfx_Add_s16s16_s16(MIN16, -1);

    TEST_CHECK(result == MIN16);
}

void Test_Of_Mfx_Add_s32s32_s32(void)
{
	sint32 result;

	result = Mfx_Add_s32s32_s32(MAX32, 1);

	TEST_CHECK(result == MAX32);

	result = Mfx_Add_s32s32_s32(MIN32, -1);

	TEST_CHECK(result == MIN32);
}

/**
  @brief Subtractions Test

  This routine tests a subtraction between the two arguments.
*/
void Test_Of_Mfx_Sub_s16s16_s16(void)
{
	sint16 result;

	result = Mfx_Sub_s16s16_s16(MAX16, -1);

	TEST_CHECK(result == MAX16);

	result = Mfx_Sub_s16s16_s16(MIN16, 1);

	TEST_CHECK(result == MIN16);
}

void Test_Of_Mfx_Sub_s32s32_s32(void)
{
	sint32 result;

	result = Mfx_Sub_s32s32_s32(MAX32, -1);

	TEST_CHECK(result == MAX32);

	result = Mfx_Sub_s32s32_s32(MIN32, 1);

	TEST_CHECK(result == MIN32);
}

/**
  @brief Absolute value Test

  This routine tests the absolute value of a signed value.
*/
void Test_Of_Mfx_Abs_s16_s16(void)
{
	sint16 result;

	result = Mfx_Abs_s16_s16(MIN16);

	TEST_CHECK(result == MAX16);

	result = Mfx_Abs_s16_s16(1);

	TEST_CHECK(result == 1);

	result = Mfx_Abs_s16_s16(-1);

	TEST_CHECK(result == 1);
}

void Test_Of_Mfx_Abs_s32_s32(void)
{
	sint32 result;

	result = Mfx_Abs_s32_s32(MIN32);

	TEST_CHECK(result == MAX32);

	result = Mfx_Abs_s32_s32(1);

	TEST_CHECK(result == 1);

	result = Mfx_Abs_s32_s32(-1);

	TEST_CHECK(result == 1);
}

/**
  @brief Absolute value of a difference Test

  This routine tests the absolute value of a difference between 2 values.
*/
void Test_Of_Mfx_AbsDiff_s16s16_s16(void)
{
	sint16 result;

	result = Mfx_AbsDiff_s16s16_s16(MAX16, -1);

	TEST_CHECK(result == MAX16);

	result = Mfx_AbsDiff_s16s16_s16(MIN16, 1);

	TEST_CHECK(result == MIN16);

	result = Mfx_AbsDiff_s16s16_s16(MIN16, 0);

	TEST_CHECK(result == MAX16);

	result = Mfx_AbsDiff_s16s16_s16(2, 1);

	TEST_CHECK(result == 1);

	result = Mfx_AbsDiff_s16s16_s16(0, 1);

	TEST_CHECK(result == 1);
}

void Test_Of_Mfx_AbsDiff_s32s32_s32(void)
{
	sint32 result;

	result = Mfx_AbsDiff_s32s32_s32(MAX32, -1);

	TEST_CHECK(result == MAX32);

	result = Mfx_AbsDiff_s32s32_s32(MIN32, 1);

	TEST_CHECK(result == MIN32);

	result = Mfx_AbsDiff_s32s32_s32(MIN32, 0);

	TEST_CHECK(result == MAX32);

	result = Mfx_AbsDiff_s32s32_s32(2, 1);

	TEST_CHECK(result == 1);

	result = Mfx_AbsDiff_s32s32_s32(0, 1);

	TEST_CHECK(result == 1);
}

void Test_Of_Mfx_AbsDiff_u32u32_u32(void)
{

}

/**
  @brief Multiplications Test

  This routine tests a multiplication between the two arguments.
*/
void Test_Of_Mfx_Mul_s16s16_s16(void)
{
	sint16 result;

	result = Mfx_Mul_s16s16_s16(MAX16, 2);

	TEST_CHECK(result == MAX16);

	result = Mfx_Mul_s16s16_s16(MIN16, 2);

	TEST_CHECK(result == MIN16);
}

void Test_Of_Mfx_Mul_s32s32_s32(void)
{
	sint32 result;

	result = Mfx_Mul_s32s32_s32(MAX32, 2);

	TEST_CHECK(result == MAX32);

	result = Mfx_Mul_s32s32_s32(MIN32, 2);

	TEST_CHECK(result == MIN32);
}

/**
  @brief Divisions rounded towards 0 Test

  These routines test a division between the two arguments.
*/
void Test_Of_Mfx_Div_s16s16_s16(void)
{
	sint16 result;

	result = Mfx_Div_s16s16_s16(1, 0);

	TEST_CHECK(result == MAX16);

	result = Mfx_Div_s16s16_s16(-1, 0);

	TEST_CHECK(result == MIN16);

	result = Mfx_Div_s16s16_s16(MIN16, -1);

	TEST_CHECK(result == MAX16);

	result = Mfx_Div_s16s16_s16(MIN16, 1);

	TEST_CHECK(result == MIN16);
}

void Test_Of_Mfx_Div_s32s32_s32(void)
{
	sint32 result;

	result = Mfx_Div_s32s32_s32(1, 0);

	TEST_CHECK(result == MAX32);

	result = Mfx_Div_s32s32_s32(-1, 0);

	TEST_CHECK(result == MIN32);

	result = Mfx_Div_s32s32_s32(MIN32, 1);

	TEST_CHECK(result == MIN32);

	result = Mfx_Div_s32s32_s32(MIN32, -1);

	TEST_CHECK(result == MAX32);
}

/**
  @brief Divisions rounded off Test

  These routines test a division between the two arguments.
*/
void Test_Of_Mfx_RDiv_s16s16_s16(void)
{
	sint16 result;

	result = Mfx_RDiv_s16s16_s16(1, 0);

	TEST_CHECK(result == MAX16);

	result = Mfx_RDiv_s16s16_s16(-1, 0);

	TEST_CHECK(result == MIN16);

	result = Mfx_RDiv_s16s16_s16(2, 2);

	TEST_CHECK(result == 1);

	result = Mfx_RDiv_s16s16_s16(3, 2);

	TEST_CHECK(result == 2);

	result = Mfx_RDiv_s16s16_s16(-3, 2);

	TEST_CHECK(result == -2);

	result = Mfx_RDiv_s16s16_s16(MIN16, -1);

	TEST_CHECK(result == MAX16);

	result = Mfx_RDiv_s16s16_s16(MIN16, 1);

	TEST_CHECK(result == MIN16);
}

void Test_Of_Mfx_RDiv_s32s32_s32(void)
{
	sint32 result;

	result = Mfx_RDiv_s32s32_s32(1, 0);

	TEST_CHECK(result == MAX32);

	result = Mfx_RDiv_s32s32_s32(-1, 0);

	TEST_CHECK(result == MIN32);

	result = Mfx_RDiv_s32s32_s32(2, 2);

	TEST_CHECK(result == 1);

	result = Mfx_RDiv_s32s32_s32(3, 2);

	TEST_CHECK(result == 2);

	result = Mfx_RDiv_s32s32_s32(-3, 2);

	TEST_CHECK(result == -2);

	result = Mfx_RDiv_s32s32_s32(MIN32, -1);

	TEST_CHECK(result == MAX32);

	result = Mfx_RDiv_s32s32_s32(MIN32, 1);

	TEST_CHECK(result == MIN32);
}

/**
  @brief Combinations of multiplication and division rounded towards 0 Test

  These routines test a multiplication between the two arguments and a division by the third
  argument.
*/
void Test_Of_Mfx_MulDiv_s16s16s16_s16(void)
{
	sint16 result;

	result = Mfx_MulDiv_s16s16s16_s16(1,3,2);

	TEST_CHECK(result == 1);
}

void Test_Of_Mfx_MulDiv_s32s32s32_s32(void)
{
	sint32 result;

	result = Mfx_MulDiv_s32s32s32_s32(1, 3, 2);

	TEST_CHECK(result == 1);
}

/**
  @brief Combinations of multiplication and division rounded off Test

  These routines test a multiplication between the two arguments and a division by the third
  argument.
*/
void Test_Of_Mfx_RMulDiv_s16s16s16_s16(void)
{
	sint16 result;

	result = Mfx_RMulDiv_s16s16s16_s16(1, 3, 2);

	TEST_CHECK(result == 2);
}

void Test_Of_Mfx_RMulDiv_s32s32s32_s32(void)
{
	sint32 result;

	result = Mfx_RMulDiv_s32s32s32_s32(1, 3, 2);

	TEST_CHECK(result == 2);
}

/**
  @brief Combinations of multiplication and shift right Test

  This routine tests a multiplication between the two arguments and applies a shift right defined
  by the third argument.
*/
void Test_Of_Mfx_MulShRight_s16s16u8_s16(void)
{
	sint16 result;

	result = Mfx_MulShRight_s16s16u8_s16(MIN16, 1, 0);

	TEST_CHECK(result == MIN16);

	result = Mfx_MulShRight_s16s16u8_s16(MIN16, -1, 0);

	TEST_CHECK(result == MAX16);

	result = Mfx_MulShRight_s16s16u8_s16(1, 2, 1);

	TEST_CHECK(result == 1);

	result = Mfx_MulShRight_s16s16u8_s16(-4, 2, 1);

	TEST_CHECK(result == -4);
}

void Test_Of_Mfx_MulShRight_s32s32u8_s32(void)
{
	sint32 result;

	result = Mfx_MulShRight_s32s32u8_s32(MIN32, -1, 0);

	TEST_CHECK(result == MAX32);

	result = Mfx_MulShRight_s32s32u8_s32(MIN32, 1, 0);

	TEST_CHECK(result == MIN32);

	result = Mfx_MulShRight_s32s32u8_s32(1, 2, 1);

	TEST_CHECK(result == 1);

	result = Mfx_MulShRight_s32s32u8_s32(-4, 2, 1);

	TEST_CHECK(result == -4);
}


/**
  @brief Combinations of division and shift left Test

  This routine tests a shift left defined by the third argument to the first argument, and then
  makes a division by the second argument.
*/
void Test_Of_Mfx_DivShLeft_s16s16u8_s16(void)
{
	sint16 result;

	result = Mfx_DivShLeft_s16s16u8_s16(MAX16, 1, 1);

	TEST_CHECK(result == MAX16);

	result = Mfx_DivShLeft_s16s16u8_s16(MIN16, 1, 0);

	TEST_CHECK(result == MIN16);

	result = Mfx_DivShLeft_s16s16u8_s16(-4, 1, 1);

	TEST_CHECK(result == -8);
}

void Test_Of_Mfx_DivShLeft_s32s32u8_s32(void)
{
	sint32 result;

	result = Mfx_DivShLeft_s32s32u8_s32(MAX32, 1, 2);

	TEST_CHECK(result == MAX32);

	result = Mfx_DivShLeft_s32s32u8_s32(MIN32, 1, 0);

	TEST_CHECK(result == MIN32);

	result = Mfx_DivShLeft_s32s32u8_s32(-4, 1, 1);

	TEST_CHECK(result == -8);
}

/**
  @brief Modulo Test

  This routine tests the remainder of the division x_value / y_value if y_value is not zero.
*/
void Test_Of_Mfx_Mod_s16(void)
{
	sint16 result;

	result = Mfx_Mod_s16(1, 0);

	TEST_CHECK(result == 0);

	result = Mfx_Mod_s16(-3, 2);

	TEST_CHECK(result == 1);

	result = Mfx_Mod_s16(3, 2);

	TEST_CHECK(result == 1);
}

void Test_Of_Mfx_Mod_s32(void)
{
	sint16 result;

	result = Mfx_Mod_s32(1, 0);

	TEST_CHECK(result == 0);

	result = Mfx_Mod_s32(-3, 2);

	TEST_CHECK(result == 1);

	result = Mfx_Mod_s32(3, 2);

	TEST_CHECK(result == 1);
}

/**
  @brief Limiting Test

  This routine tests the input value between Lower Bound and Upper Bound.
*/
void Test_Of_Mfx_Limit_s16(void)
{
	sint16 result;

	result = Mfx_Limit_s16(0,1,2);

	TEST_CHECK(result == 1);

	result = Mfx_Limit_s16(3,1,2);

	TEST_CHECK(result == 2);

	result = Mfx_Limit_s16(1,0,2);

	TEST_CHECK(result == 1);
}

void Test_Of_Mfx_Limit_s32(void)
{
	sint32 result;

	result = Mfx_Limit_s32(0, 1, 2);

	TEST_CHECK(result == 1);

	result = Mfx_Limit_s32(3, 1, 2);

	TEST_CHECK(result == 2);

	result = Mfx_Limit_s32(1, 0, 2);

	TEST_CHECK(result == 1);
}

/**
  @brief Limitations with only one value for minimum and maximum Test

  The routine tests limiting a value to a minimum or a maximum that depends on the sign of the minmax_value.
*/
void Test_Of_Mfx_Minmax_s16(void)
{
	sint16 result;

	result = Mfx_Minmax_s16(1,2);

	TEST_CHECK(result == 1);

	result = Mfx_Minmax_s16(1, 0);

	TEST_CHECK(result == 0);

	result = Mfx_Minmax_s16(-2, -1);

	TEST_CHECK(result == -1);
}

void Test_Of_Mfx_Minmax_s32(void)
{
	sint32 result;

	result = Mfx_Minmax_s32(1, 2);

	TEST_CHECK(result == 1);

	result = Mfx_Minmax_s32(1, 0);

	TEST_CHECK(result == 0);

	result = Mfx_Minmax_s32(-2, -1);

	TEST_CHECK(result == -1);
}


/**
  @brief Minimum and maximum Test

  These routines return the minimum and maximum between two values.
*/
void Test_Of_Mfx_Min_s16(void)
{
	sint16 result;

	result = Mfx_Min_s16(1, 2);

	TEST_CHECK(result == 1);

	result = Mfx_Min_s16(2, 1);

	TEST_CHECK(result == 1);
}

void Test_Of_Mfx_Min_s32(void)
{
	sint32 result;

	result = Mfx_Min_s32(1, 2);

	TEST_CHECK(result == 1);

	result = Mfx_Min_s32(2, 1);

	TEST_CHECK(result == 1);
}

void Test_Of_Mfx_Max_s16(void)
{
	sint16 result;

	result = Mfx_Max_s16(1, 2);

	TEST_CHECK(result == 2);

	result = Mfx_Max_s16(2, 1);

	TEST_CHECK(result == 2);
}

void Test_Of_Mfx_Max_s32(void)
{
	sint32 result;

	result = Mfx_Max_s32(1, 2);

	TEST_CHECK(result == 2);

	result = Mfx_Max_s32(2, 1);

	TEST_CHECK(result == 2);
}

/*
  Test list.
*/
TEST_LIST = {
	{ "Test of Mfx_Add_s16s16_s16",  Test_Of_Mfx_Add_s16s16_s16 },
	{ "Test of Mfx_Add_s32s32_s32",  Test_Of_Mfx_Add_s32s32_s32 },
	{ "Test of Mfx_Sub_s16s16_s16",  Test_Of_Mfx_Sub_s16s16_s16 },
	{ "Test of Mfx_Sub_s32s32_s32",  Test_Of_Mfx_Sub_s32s32_s32 },
	{ "Test of Mfx_Abs_s16_s16", Test_Of_Mfx_Abs_s16_s16 },
	{ "Test of Mfx_Abs_s32_s32", Test_Of_Mfx_Abs_s32_s32 },
	{ "Test of Mfx_AbsDiff_s16s16_s16",  Test_Of_Mfx_AbsDiff_s16s16_s16 },
	{ "Test of Mfx_AbsDiff_s32s32_s32",  Test_Of_Mfx_AbsDiff_s32s32_s32 },
	{ "Test of Mfx_AbsDiff_u32u32_u32",  Test_Of_Mfx_AbsDiff_u32u32_u32 },
	{ "Test of Mfx_Mul_s16s16_s16",  Test_Of_Mfx_Mul_s16s16_s16 },
	{ "Test of Mfx_Mul_s32s32_s32",  Test_Of_Mfx_Mul_s32s32_s32 },
	{ "Test of Mfx_Div_s16s16_s16", Test_Of_Mfx_Div_s16s16_s16 },
	{ "Test of Mfx_Div_s32s32_s32", Test_Of_Mfx_Div_s32s32_s32 },
	{ "Test of Mfx_RDiv_s16s16_s16",  Test_Of_Mfx_RDiv_s16s16_s16 },
	{ "Test of Mfx_RDiv_s32s32_s32",  Test_Of_Mfx_RDiv_s32s32_s32 },
	{ "Test of Mfx_MulDiv_s16s16s16_s16", Test_Of_Mfx_MulDiv_s16s16s16_s16 },
	{ "Test of Mfx_MulDiv_s32s32s32_s32", Test_Of_Mfx_MulDiv_s32s32s32_s32 },
	{ "Test of Mfx_RMulDiv_s16s16s16_s16",  Test_Of_Mfx_RMulDiv_s16s16s16_s16 },
	{ "Test of Mfx_RMulDiv_s32s32s32_s32",  Test_Of_Mfx_RMulDiv_s32s32s32_s32 },
	{ "Test of Mfx_MulShRight_s16s16u8_s16", Test_Of_Mfx_MulShRight_s16s16u8_s16 },
	{ "Test of Mfx_MulShRight_s32s32u8_s32", Test_Of_Mfx_MulShRight_s32s32u8_s32 },
	{ "Test of Mfx_DivShLeft_s16s16u8_s16",  Test_Of_Mfx_DivShLeft_s16s16u8_s16 },
	{ "Test of Mfx_DivShLeft_s32s32u8_s32",  Test_Of_Mfx_DivShLeft_s32s32u8_s32 },
	{ "Test of Mfx_Mod_s16", Test_Of_Mfx_Mod_s16 },
	{ "Test of Mfx_Mod_s32", Test_Of_Mfx_Mod_s32 },
	{ "Test of Mfx_Limit_s16",  Test_Of_Mfx_Limit_s16 },
	{ "Test of Mfx_Limit_s32",  Test_Of_Mfx_Limit_s32 },
	{ "Test of Mfx_Minmax_s16", Test_Of_Mfx_Minmax_s16 },
	{ "Test of Mfx_Minmax_s32", Test_Of_Mfx_Minmax_s32 },
	{ "Test of Mfx_Min_s16",  Test_Of_Mfx_Min_s16 },
	{ "Test of Mfx_Min_s32",  Test_Of_Mfx_Min_s32 },
	{ "Test of Mfx_Max_s16", Test_Of_Mfx_Max_s16 },
	{ "Test of Mfx_Max_s32", Test_Of_Mfx_Max_s32 },
	{ "Test of Mfx_Max_s32", Test_Of_Mfx_ConvertP2_s16_s8 },
	{ "Test of Mfx_ConvertP2_u16_u8", Test_Of_Mfx_ConvertP2_u16_u8 },
	{ "Test of Mfx_ConvertP2_s8_s16", Test_Of_Mfx_ConvertP2_s8_s16 },
	{ "Test of Mfx_ConvertP2_u8_u16", Test_Of_Mfx_ConvertP2_u8_u16 },
	{ "Test of Mfx_ConvertP2_s32_s16", Test_Of_Mfx_ConvertP2_s32_s16 },
	{ "Test of Mfx_ConvertP2_u32_u16", Test_Of_Mfx_ConvertP2_u32_u16 },
	{ "Test of Mfx_ConvertP2_s16_s32", Test_Of_Mfx_ConvertP2_s16_s32 },
	{ "Test of Mfx_ConvertP2_u16_u32", Test_Of_Mfx_ConvertP2_u16_u32 },
	{ "Test of Mfx_MulP2_s16s16_s16", Test_Of_Mfx_MulP2_s16s16_s16 },
	{ "Test of Mfx_MulP2_u16u16_u16", Test_Of_Mfx_MulP2_u16u16_u16 },
	{ "Test of Mfx_MulP2_s32s32_s32", Test_Of_Mfx_MulP2_s32s32_s32 },
	{ "Test of Mfx_MulP2_u32u32_u32", Test_Of_Mfx_MulP2_u32u32_u32 },
	{ "Test of Mfx_DivP2_s16s16_s16", Test_Of_Mfx_DivP2_s16s16_s16 },
	{ "Test of Mfx_DivP2_u16u16_u16", Test_Of_Mfx_DivP2_u16u16_u16 },
	{ "Test of Mfx_DivP2_s32s32_s32", Test_Of_Mfx_DivP2_s32s32_s32 },
	{ "Test of Mfx_DivP2_u32u32_u32", Test_Of_Mfx_DivP2_u32u32_u32 },
	{ "Test of Mfx_AddP2_s16s16_s16", Test_Of_Mfx_AddP2_s16s16_s16 },
	{ "Test of Mfx_AddP2_u16u16_u16", Test_Of_Mfx_AddP2_u16u16_u16 },
	{ "Test of Mfx_AddP2_s32s32_s32", Test_Of_Mfx_AddP2_s32s32_s32 },
	{ "Test of Mfx_AddP2_u32u32_u32", Test_Of_Mfx_AddP2_u32u32_u32 },
	{ "Test of Mfx_SubP2_s16s16_s16", Test_Of_Mfx_SubP2_s16s16_s16 },
	{ "Test of Mfx_SubP2_u16u16_u16_s32", Test_Of_Mfx_SubP2_u16u16_u16 },
	{ "Test of Mfx_SubP2_s32s32_s32", Test_Of_Mfx_SubP2_s32s32_s32 },
	{ "Test of Mfx_SubP2_u32u32_u32", Test_Of_Mfx_SubP2_u32u32_u32 },
	{ "Test of Mfx_AbsDiffP2_s16s16_s16", Test_Of_Mfx_AbsDiffP2_s16s16_s16 },
	{ "Test of Mfx_AbsDiffP2_u16u16_u16", Test_Of_Mfx_AbsDiffP2_u16u16_u16 },
	{ "Test of Mfx_AbsP2_s16_s16", Test_Of_Mfx_AbsP2_s16_s16 },
	{ "Test of Mfx_AbsP2_s16_u16", Test_Of_Mfx_AbsP2_s16_u16 },
	{ "Test of Mfx_AbsP2_s32_s32", Test_Of_Mfx_AbsP2_s32_s32 },
	{ "Test of Mfx_AbsP2_s32_u32", Test_Of_Mfx_AbsP2_s32_u32 },
	{ NULL, NULL }
};

