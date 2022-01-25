/** ==================================================================================================================*\
    @file UT_Mfx.c

    @brief Test for Mfx
\*====================================================================================================================*/

#include "acutest.h"

#include "Mfx.c"   /* To nie pomyłka - taki include eksponuje zmienne statyczne dla testów */


/* @brief Additions Test

  This routine tests an addition between the two arguments.
*/
void Test_Of_Mfx_Add_s16s16_s16(void)
{
    sint16 result;

    result = Mfx_Add_s16s16_s16(MAX16,1);

    TEST_CHECK(result == MAX16);       /* Test przejdzie jeżeli wyrażenie w nawiasach jest prawdziwe */

    result = Mfx_Add_s16s16_s16(MIN16,-1);

    TEST_CHECK(result == MIN16);
   
    /* TUTAJ DOPISZ WIĘCEJ TESTÓW */
}


void Test_Of_Mfx_Add_s32s32_s32(void)
{
    sint32 result;

    result = Mfx_Add_s32s32_s32(MAX32,1);

    TEST_CHECK(result == MAX32);       /* Test przejdzie jeżeli wyrażenie w nawiasach jest prawdziwe */

    result = Mfx_Add_s32s32_s32(MIN32,-1);

    TEST_CHECK(result == MIN32);
   
    /* TUTAJ DOPISZ WIĘCEJ TESTÓW */
}


/**
  @brief Substraction test

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
  @brief Absolute value test

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
  @brief Absolute value of a difference test

  This routine tests the absolute value of a difference between 2 values.
*/
void Test_Of_Mfx_AbsDiff_s16s16_s16(void)
{
    sint16 result;

    result = Mfx_AbsDiff_s16s16_s16(MAX16,-1);

    TEST_CHECK(result == MAX16);

     result = Mfx_AbsDiff_s16s16_s16(MIN16,1);

    TEST_CHECK(result == MIN16);

    result = Mfx_AbsDiff_s16s16_s16(MIN16,0);

    TEST_CHECK(result == MAX16);

    result = Mfx_AbsDiff_s16s16_s16(2,1);

    TEST_CHECK(result == 1);

    result = Mfx_AbsDiff_s16s16_s16(0,1);

    TEST_CHECK(result == 1);

}

void Test_Of_Mfx_AbsDiff_s32s32_s32(void)
{
    sint32 result;

    result = Mfx_AbsDiff_s32s32_s32(MAX32,-1);

    TEST_CHECK(result == MAX32);

     result = Mfx_AbsDiff_s32s32_s32(MIN32,1);

    TEST_CHECK(result == MIN32);

    result = Mfx_AbsDiff_s32s32_s32(MIN32,0);

    TEST_CHECK(result == MAX32);

    result = Mfx_AbsDiff_s32s32_s32(2,1);

    TEST_CHECK(result == 1);

    result = Mfx_AbsDiff_s32s32_s32(0,1);

    TEST_CHECK(result == 1);

}

void Test_Of_Mfx_AbsDiff_u32u32_u32(void)
{
    uint32 result;

    result = Mfx_AbsDiff_u32u32_u32(UMAX32,0);

    TEST_CHECK(result == UMAX32);

     result = Mfx_AbsDiff_u32u32_u32(0,0);

    TEST_CHECK(result == UMIN32);

    result = Mfx_AbsDiff_u32u32_u32(2,1);

    TEST_CHECK(result == 1);

    result = Mfx_AbsDiff_u32u32_u32(0,1);

    TEST_CHECK(result == 1);

}


/**
  @brief Multiplication test

  This routine tests a multiplication between the two arguments.
*/

void Test_Of_Mfx_Mul_s16s16_s16(void)
{
    sint16 result;

    result = Mfx_Mul_s16s16_s16(MAX16,2);

    TEST_CHECK(result == MAX16);

     result = Mfx_Mul_s16s16_s16(MIN16,2);

    TEST_CHECK(result == MIN16);

}

void Test_Of_Mfx_Mul_s32s32_s32(void)
{
    sint32 result;

    result = Mfx_Mul_s32s32_s32(MAX32,2);

    TEST_CHECK(result == MAX32);

     result = Mfx_Mul_s32s32_s32(MIN32,2);

    TEST_CHECK(result == MIN32);

}

/**
  @brief Divisions rounded towards 0 test

  These routines test a division between the two arguments.
*/

void Test_Of_Mfx_Div_s16s16_s16(void)
{
    sint16 result;

    result = Mfx_Div_s16s16_s16(1,0);

    TEST_CHECK(result == MAX16);

    result = Mfx_Div_s16s16_s16(-1,0);

    TEST_CHECK(result == MIN16);

    result = Mfx_Mul_s16s16_s16(MIN16,-1);

    TEST_CHECK(result == MAX16);

     result = Mfx_Mul_s16s16_s16(MIN16,1);

    TEST_CHECK(result == MIN16);

}


void Test_Of_Mfx_Div_s32s32_s32(void)
{
    sint32 result;

    result = Mfx_Div_s32s32_s32(1,0);

    TEST_CHECK(result == MAX32);

    result = Mfx_Div_s32s32_s32(-1,0);

    TEST_CHECK(result == MIN32);

     result = Mfx_Div_s32s32_s32(MIN32,-1);

    TEST_CHECK(result == MAX32);

    result = Mfx_Div_s32s32_s32(MIN32,1);

    TEST_CHECK(result == MIN32);

}


/**
  @brief Divisions rounded off test

  These routines test a division between the two arguments.
*/
void Test_Of_Mfx_RDiv_s16s16_s16(void)
{
    sint16 result;

    result = Mfx_RDiv_s16s16_s16(1,0);

    TEST_CHECK(result == MAX16);

    result = Mfx_RDiv_s16s16_s16(-1,0);

    TEST_CHECK(result == MIN16);

    result = Mfx_RDiv_s16s16_s16(2,2);

    TEST_CHECK(result == 1);

    result = Mfx_RDiv_s16s16_s16(3,2);

    TEST_CHECK(result == 2);

    result = Mfx_RDiv_s16s16_s16(-3,2);

    TEST_CHECK(result == -2);

     result = Mfx_RDiv_s16s16_s16(MIN16,-1);

    TEST_CHECK(result == MAX16);

    result = Mfx_RDiv_s16s16_s16(MIN16,1);

    TEST_CHECK(result == MIN16);

}

void Test_Of_Mfx_RDiv_s32s32_s32(void)
{
    sint32 result;

    result = Mfx_RDiv_s32s32_s32(1,0);

    TEST_CHECK(result == MAX32);

    result = Mfx_RDiv_s32s32_s32(-1,0);

    TEST_CHECK(result == MIN32);

    result = Mfx_RDiv_s32s32_s32(2,2);

    TEST_CHECK(result == 1);

    result = Mfx_RDiv_s32s32_s32(3,2);

    TEST_CHECK(result == 2);

    result = Mfx_RDiv_s32s32_s32(-3,2);

    TEST_CHECK(result == -2);


    result = Mfx_RDiv_s32s32_s32(MIN32,1);

    TEST_CHECK(result == MIN32);

    result = Mfx_RDiv_s32s32_s32(MIN32,-1);
    TEST_CHECK(result == MAX32);

}

/**
  @brief Combinations of multiplication and division rounded towards 0 test

  These routines test a multiplication between the two arguments and a division by the third argument.
*/

void Test_Of_Mfx_MulDiv_s16s16_s16(void)
{
    sint16 result;

    result = Mfx_MulDiv_s16s16_s16(3,1,2);

    TEST_CHECK(result == 1);

}

void Test_Of_Mfx_MulDiv_s32s32_s32(void)
{
    sint32 result;

    result = Mfx_MulDiv_s32s32_s32(3,1,2);

    TEST_CHECK(result == 1);

}

/**
  @brief Combinations of multiplication and division rounded off test

  These routines test a multiplication between the two arguments and a division by the third argument.
*/
void Test_Of_Mfx_RMulDiv_s16s16_s16(void)
{
    sint16 result;

    result = Mfx_RMulDiv_s16s16_s16(3,1,2);

    TEST_CHECK(result == 2);

}

void Test_Of_Mfx_RMulDiv_s32s32_s32(void)
{
    sint32 result;

    result = Mfx_RMulDiv_s32s32_s32(3,1,2);

    TEST_CHECK(result == 2);

}

/**
  @brief Combinations of multiplication and shift right test

  This routine tests a multiplication between the two arguments and applies a shift right defined by the third argument.
*/

void Test_Of_Mfx_MulShRight_s16s16u8_s32(void)
{
    sint16 result;

    result = Mfx_MulShRight_s16s16u8_s32(MIN16,-1,0);

    TEST_CHECK(result == MAX16);

     result = Mfx_MulShRight_s16s16u8_s32(MIN16,1,0);

    TEST_CHECK(result == MIN16);

     result = Mfx_MulShRight_s16s16u8_s32(1,2,1);

    TEST_CHECK(result == 1);

     result = Mfx_MulShRight_s16s16u8_s32(-4,2,1);

    TEST_CHECK(result == -4);

}

void Test_Of_Mfx_MulShRight_s32s32u8_s32(void)
{
    sint32 result;

    result = Mfx_MulShRight_s32s32u8_s32(MIN32,-1,0);

    TEST_CHECK(result == MAX32);

     result = Mfx_MulShRight_s32s32u8_s32(MIN32,1,0);

    TEST_CHECK(result == MIN32);

    result = Mfx_MulShRight_s32s32u8_s32(1,2,1);

    TEST_CHECK(result == 1);

     result = Mfx_MulShRight_s32s32u8_s32(-4,2,1);

    TEST_CHECK(result == -4);

}

/**
  @brief Combinations of division and shift left test

  This routine tests a multiplication between the two arguments and applies a shift right defined by the third argument.
*/


void Test_Of_Mfx_DivShLeft_s16s16u8_s16(void)
{
    sint16 result;

    result = Mfx_DivShLeft_s16s16u8_s16(MIN16,1,1);

    TEST_CHECK(result == MIN16);

    result = Mfx_DivShLeft_s16s16u8_s16(MAX16,1,1);

    TEST_CHECK(result == MAX16);

    result = Mfx_DivShLeft_s16s16u8_s16(MIN16,1,0);

    TEST_CHECK(result == MIN16);

    result = Mfx_DivShLeft_s16s16u8_s16(-4,2,1);

    TEST_CHECK(result == -4);
}


void Test_Of_Mfx_DivShLeft_s32s32u8_s32(void)
{
    sint32 result;

    result = Mfx_DivShLeft_s32s32u8_s32(MIN32,1,1);

    TEST_CHECK(result == MIN32);

    result = Mfx_DivShLeft_s32s32u8_s32(MAX32,1,1);
    TEST_CHECK(result == MAX32);

     result = Mfx_DivShLeft_s32s32u8_s32(-4,2,1);

    TEST_CHECK(result == -4);
}

/**
  @brief Modulo test

  This routine tests the remainder of the division x_value / y_value if y_value is not zero.
*/
void Test_Of_Mfx_Mod_s16(void)
{
    sint16 result;

    result = Mfx_Mod_s16(1,0);

    TEST_CHECK(result == 0);

    result = Mfx_Mod_s16(-3,2);

    TEST_CHECK(result == 1);

    result = Mfx_Mod_s16(3,2);

    TEST_CHECK(result == 1);
}

void Test_Of_Mfx_Mod_s32(void)
{
    sint32 result;

    result = Mfx_Mod_s32(1,0);

    TEST_CHECK(result == 0);

    result = Mfx_Mod_s32(-3,2);

    TEST_CHECK(result == 1);

    result = Mfx_Mod_s32(3,2);

    TEST_CHECK(result == 1);
}

/**
  @brief Limiting test

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

    result = Mfx_Limit_s32(0,1,2);

    TEST_CHECK(result == 1);

     result = Mfx_Limit_s32(3,1,2);

    TEST_CHECK(result == 2);
   
    result = Mfx_Limit_s32(1,0,2);

    TEST_CHECK(result == 1);

}

/**
  @brief Limitations with only one value for minimum and maximum test

  The routine tests a value to a minimum or a maximum that depends on the sign of the minmax_value.
*/

void Test_Of_Mfx_Minmax_s16(void)
{
    sint16 result;

    result = Mfx_Minmax_s16(1,0);

    TEST_CHECK(result == 0);

    result = Mfx_Minmax_s16(-2,-1);

    TEST_CHECK(result == -1);
     
    result = Mfx_Minmax_s16(1,2);

    TEST_CHECK(result == 1);
}

void Test_Of_Mfx_Minmax_s32(void)
{
    sint32 result;

    result = Mfx_Minmax_s32(1,0);

    TEST_CHECK(result == 0);

    result = Mfx_Minmax_s32(-2,-1);

    TEST_CHECK(result == -1);
     
    result = Mfx_Minmax_s32(1,2);

    TEST_CHECK(result == 1);
}

/**
  @brief Minimum and maximum test

  This routine tests the minimum between two values.
*/

void Test_Of_Mfx_Min_s16(void)
{
    sint16 result;

    result = Mfx_Min_s16(1,2);

    TEST_CHECK(result == 1);

    result = Mfx_Min_s16(2,1);

    TEST_CHECK(result == 1);
     
}

void Test_Of_Mfx_Min_s32(void)
{
    sint16 result;

    result = Mfx_Min_s32(1,2);

    TEST_CHECK(result == 1);

    result = Mfx_Min_s32(2,1);

    TEST_CHECK(result == 1);
     
}

void Test_Of_Mfx_Max_s16(void)
{
    sint16 result;

    result = Mfx_Max_s16(1,2);

    TEST_CHECK(result == 2);

    result = Mfx_Max_s16(2,1);

    TEST_CHECK(result == 2);
     
}

void Test_Of_Mfx_Max_s32(void)
{
    sint16 result;

    result = Mfx_Max_s32(1,2);

    TEST_CHECK(result == 2);

    result = Mfx_Max_s32(2,1);

    TEST_CHECK(result == 2);
     
}

/**
  @brief 16-Bit to 8-Bit 2n Scaled Integer Conversion Test

  The routine tests convertion a scaled 16-bit integer to a scaled 8-bit integer. 
*/

void Test_Of_Mfx_ConvertP2_s16_s8(void)
{
    sint8 result;

    result = Mfx_ConvertP2_s16_s8(1, 1, -15);
    TEST_CHECK(result == MIN8);

    result = Mfx_ConvertP2_s16_s8(1,1,10);
    TEST_CHECK(result == MAX8);

    result = Mfx_ConvertP2_s16_s8(1,1,1);
    TEST_CHECK(result == 1);

    result = Mfx_ConvertP2_s16_s8(1,1,0);
    TEST_CHECK(result == 0);

}

void Test_Of_Mfx_ConvertP2_u16_u8(void)
{
    uint16 result;

    result = Mfx_ConvertP2_u16_u8(1, 1, -15);
    TEST_CHECK(result == UMIN8);

    result = Mfx_ConvertP2_u16_u8(1,1,10);
    TEST_CHECK(result == UMAX8);

    result = Mfx_ConvertP2_u16_u8(1,1,1);
    TEST_CHECK(result == 1);

    result = Mfx_ConvertP2_u16_u8(1,1,0);
    TEST_CHECK(result == 0);

}

/**
  @brief 8-Bit to 16-Bit 2n Scaled Integer Conversion Test

  The routine tests convertion a scaled 8-bit integer to a scaled 16-bit integer.
*/

void Test_Of_Mfx_ConvertP2_s8_s16(void)
{
    sint16 result;

    result = Mfx_ConvertP2_s8_s16(1, 1, -7);
    TEST_CHECK(result == MIN16);

    result = Mfx_ConvertP2_s8_s16(1,1,17);
    TEST_CHECK(result == MAX16);

    result = Mfx_ConvertP2_s8_s16(1,1,1);
    TEST_CHECK(result == 1);

    result = Mfx_ConvertP2_s8_s16(1,1,0);
    TEST_CHECK(result == 0);

}

void Test_Of_Mfx_ConvertP2_u8_u16(void)
{
    uint16 result;

    result = Mfx_ConvertP2_u8_u16(1, 1, -7);
    TEST_CHECK(result == UMIN16);

    result = Mfx_ConvertP2_u8_u16(1,1,17);
    TEST_CHECK(result == UMAX16);

    result = Mfx_ConvertP2_u8_u16(1,1,1);
    TEST_CHECK(result == 1);

    result = Mfx_ConvertP2_u8_u16(1,1,0);
    TEST_CHECK(result == 0);

}

/**
  @brief 32-Bit to 16-Bit 2n Scaled Integer Conversion Test

  The routine tests convertion a scaled 32-bit integer to a scaled 16-bit integer.
*/

void Test_Of_Mfx_ConvertP2_s32_s16(void)
{
    sint16 result;

    result = Mfx_ConvertP2_s32_s16(1, 1, -31);
    TEST_CHECK(result == MIN16);

    result = Mfx_ConvertP2_s32_s16(1,1,17);
    TEST_CHECK(result == MAX16);

    result = Mfx_ConvertP2_s32_s16(1,1,1);
    TEST_CHECK(result == 1);

    result = Mfx_ConvertP2_s32_s16(1,1,0);
    TEST_CHECK(result == 0);

}

void Test_Of_Mfx_ConvertP2_u32_u16(void)
{
    uint16 result;

    result = Mfx_ConvertP2_u32_u16(1, 1, -31);
    TEST_CHECK(result == UMIN16);

    result = Mfx_ConvertP2_u32_u16(1,1,17);
    TEST_CHECK(result == UMAX16);

    result = Mfx_ConvertP2_u32_u16(1,1,1);
    TEST_CHECK(result == 1);

    result = Mfx_ConvertP2_u32_u16(1,1,0);
    TEST_CHECK(result == 0);
}

/**
  @brief 16-Bit to 32-Bit 2n Scaled Integer Conversion Test

  The routine tests convertion a scaled 16-bit integer to a scaled 32-bit integer.
*/

void Test_Of_Mfx_ConvertP2_s16_s32(void)
{
    sint32 result;

    result = Mfx_ConvertP2_s16_s32(1, 1, -15);
    TEST_CHECK(result ==MIN32);

    result = Mfx_ConvertP2_s16_s32(1,1,33);
    TEST_CHECK(result == MAX32);

    result = Mfx_ConvertP2_s16_s32(1,1,1);
    TEST_CHECK(result == 1);

    result = Mfx_ConvertP2_s16_s32(1,1,0);
    TEST_CHECK(result == 0);
}

void Test_Of_Mfx_ConvertP2_u16_u32(void)
{
    uint32 result;

    result = Mfx_ConvertP2_u16_u32(1, 16, 0);
    TEST_CHECK(result ==UMIN32);

    result = Mfx_ConvertP2_u16_u32(1,1,33);
    TEST_CHECK(result == UMAX32);

    result = Mfx_ConvertP2_u16_u32(1,1,1);
    TEST_CHECK(result == 1);

    result = Mfx_ConvertP2_u16_u32(1,1,0);
    TEST_CHECK(result == 0);

}
/**
  @brief 16-Bit Multiplication of 2n Scaled Integer test

  The routine tests multiplication two 16-bit integers with scaling factors set by input parameters.
*/

void Test_Of_Mfx_MulP2_s16s16_s16(void)
{
    sint16 result;

    result = Mfx_MulP2_s16s16_s16(1,1,1, 1, -30);
    TEST_CHECK(result ==MIN16);

    result = Mfx_MulP2_s16s16_s16(1,1,1,1,18);
    TEST_CHECK(result == MAX16);

    result = Mfx_MulP2_s16s16_s16(1,1,1,1,1);
    TEST_CHECK(result == 1);

    result = Mfx_MulP2_s16s16_s16(1,1,2,1,1);
    TEST_CHECK(result == 1);


}

void Test_Of_Mfx_MulP2_u16u16_u16(void)
{
    uint16 result;

    result = Mfx_MulP2_u16u16_u16(1,1,1, 1, -30);
    TEST_CHECK(result == UMIN16);

    result = Mfx_MulP2_u16u16_u16(1,1,1,1,19);
    TEST_CHECK(result == UMAX16);

    result = Mfx_MulP2_u16u16_u16(1,1,1,1,1);
    TEST_CHECK(result == 1);

    result = Mfx_MulP2_u16u16_u16(1,1,2,1,1);
    TEST_CHECK(result == 1);
}

/**
  @brief 32-Bit Multiplication of 2n Scaled Integer test

  The routine tests multiplication two 32-bit integers with scaling factors set by input parameters.
*/
void Test_Of_Mfx_MulP2_s32s32_s32(void)
{
    sint32 result;

    result = Mfx_MulP2_s32s32_s32(1,1,1, 1, -62);
    TEST_CHECK(result ==MIN32);

    result = Mfx_MulP2_s32s32_s32(1,1,1,1,34);
    TEST_CHECK(result == MAX32);

    result = Mfx_MulP2_s32s32_s32(1,1,1,1,1);
    TEST_CHECK(result == 1);

    result = Mfx_MulP2_s32s32_s32(1,1,2,1,1);
    TEST_CHECK(result == 1);

}


void Test_Of_Mfx_MulP2_u32u32_u32(void)
{
    uint32 result;

    result = Mfx_MulP2_u32u32_u32(1,1,1, 1, -62);
    TEST_CHECK(result == UMIN32);

    result = Mfx_MulP2_u32u32_u32(1,1,1,1,34);
    TEST_CHECK(result == UMAX32);

    result = Mfx_MulP2_u32u32_u32(1,1,1,1,1);
    TEST_CHECK(result == 1);

    result = Mfx_MulP2_u32u32_u32(1,1,2,1,1);
    TEST_CHECK(result == 1);
}

/**
  @brief 16-Bit Division of 2n Scaled Integer test

  The routine tests division of the two 16-bit integers with scaling factors set by input parameters.
*/

void Test_Of_Mfx_DivP2_s16s16_s16(void)
{
    sint16 result;

    result = Mfx_DivP2_s16s16_s16(1,1,1, 1, -16);
    TEST_CHECK(result ==MIN16);

    result = Mfx_DivP2_s16s16_s16(1,1,1,1,32);
    TEST_CHECK(result == MAX16);

    result = Mfx_DivP2_s16s16_s16(1,1,1,1,1);
    TEST_CHECK(result == 4);

    result = Mfx_DivP2_s16s16_s16(1,1,2,1,1);
    TEST_CHECK(result == 4);


}

void Test_Of_Mfx_DivP2_u16u16_u16(void)
{
    uint16 result;

    result = Mfx_DivP2_u16u16_u16(1,1,1, 1, -16);
    TEST_CHECK(result == UMIN16);

    result = Mfx_DivP2_u16u16_u16(1,1,1,1,32);
    TEST_CHECK(result == UMAX16);

    result = Mfx_DivP2_u16u16_u16(1,1,1,1,1);
    TEST_CHECK(result == 4);

    result = Mfx_DivP2_u16u16_u16(1,1,2,1,1);
    TEST_CHECK(result == 4);

    
    result = Mfx_DivP2_u16u16_u16(0,0,0,0,0);
    TEST_CHECK(result == UMAX16);

}

/**
  @brief 32-Bit Division of 2n Scaled Integer test

  The routine tests division of the two 32-bit integers with scaling factors set by input parameters.
*/
void Test_Of_Mfx_DivP2_s32s32_s32(void)
{
    sint32 result;

    result = Mfx_DivP2_s32s32_s32(1,1,1, 1, -32);
    TEST_CHECK(result ==MIN32);

    result = Mfx_DivP2_s32s32_s32(1,1,1,1,64);
    TEST_CHECK(result == MAX32);

    result = Mfx_DivP2_s32s32_s32(1,0,1,1,1);
    TEST_CHECK(result == MAX32);

    result = Mfx_DivP2_s32s32_s32(-1,0,1,1,1);
    TEST_CHECK(result == MIN32);

    result = Mfx_DivP2_s32s32_s32(1,1,1,0,1);
    TEST_CHECK(result == 2);

    result = Mfx_DivP2_s32s32_s32(1,1,2,0,1);
    TEST_CHECK(result == 2);
}


void Test_Of_Mfx_DivP2_u32u32_u32(void)
{
    uint32 result;

    result = Mfx_DivP2_u32u32_u32(1,1,1, 1, -32);
    TEST_CHECK(result ==UMIN32);

    result = Mfx_DivP2_u32u32_u32(1,1,1,1,64);
    TEST_CHECK(result == UMAX32);

    result = Mfx_DivP2_u32u32_u32(1,0,1,1,1);
    TEST_CHECK(result == UMAX32);

    result = Mfx_DivP2_u32u32_u32(1,1,1,0,1);
    TEST_CHECK(result == 2);

    result = Mfx_DivP2_u32u32_u32(1,1,2,0,1);
    TEST_CHECK(result == 2);

}
/**
  @brief 16-Bit Addition of 2n Scaled Integer test

  The routine tests addition of the two 16-bit integers with scaling factors set by input parameters.
*/

void Test_Of_Mfx_AddP2_s16s16_s16(void)
{
    sint16 result;

    result = Mfx_AddP2_s16s16_s16(1,1,2, 1, 17);
    TEST_CHECK(result ==MAX16);

    result = Mfx_AddP2_s16s16_s16(1,1,2,1,1);
    TEST_CHECK(result == 1);

    result = Mfx_AddP2_s16s16_s16(1,1,2,1,2);
    TEST_CHECK(result == 3);

    result = Mfx_AddP2_s16s16_s16(1,1,1,17,1);
    TEST_CHECK(result ==MAX16);

     result = Mfx_AddP2_s16s16_s16(1,1,1,2,1);
    TEST_CHECK(result ==1);

    result = Mfx_AddP2_s16s16_s16(1,1,1,2,2);
    TEST_CHECK(result ==3);

    result = Mfx_AddP2_s16s16_s16(1,MIN16,2,1,1);
    TEST_CHECK(result == MIN16);

}

void Test_Of_Mfx_AddP2_u16u16_u16(void)
{
    uint16 result;

    result = Mfx_AddP2_u16u16_u16(1,1,2, 1, 17);
    TEST_CHECK(result ==UMAX16);

    result = Mfx_AddP2_u16u16_u16(1,1,2,1,1);
    TEST_CHECK(result == 1);

    result = Mfx_AddP2_u16u16_u16(1,1,2,1,2);
    TEST_CHECK(result == 3);

    result = Mfx_AddP2_u16u16_u16(1,1,1,17,1);
    TEST_CHECK(result ==UMAX16);

     result = Mfx_AddP2_u16u16_u16(1,1,1,2,1);
    TEST_CHECK(result ==1);

    result = Mfx_AddP2_u16u16_u16(1,1,1,2,2);
    TEST_CHECK(result ==3);

    result = Mfx_AddP2_u16u16_u16(1,UMIN16,2,1,1);
    TEST_CHECK(result == UMIN16);

}

/**
  @brief 32-Bit Addition of 2n Scaled Integer test

  The routine tests addition of the two 32-bit integers with scaling factors set by input parameters.
*/
void Test_Of_Mfx_AddP2_s32s32_s32(void)
{
    sint32 result;

    result = Mfx_AddP2_s32s32_s32(1,1,2, 1, 33);
    TEST_CHECK(result ==MAX32);

    result = Mfx_AddP2_s32s32_s32(1,1,2,1,1);
    TEST_CHECK(result == 1);

    result = Mfx_AddP2_s32s32_s32(1,1,2,1,2);
    TEST_CHECK(result == 3);

    result = Mfx_AddP2_s32s32_s32(1,1,1,33,1);
    TEST_CHECK(result ==MAX32);

     result = Mfx_AddP2_s32s32_s32(1,1,1,2,1);
    TEST_CHECK(result ==1);

    result = Mfx_AddP2_s32s32_s32(1,1,1,2,2);
    TEST_CHECK(result ==3);

    result = Mfx_AddP2_s32s32_s32(0,MIN32,0,1,1);
    TEST_CHECK(result == MIN32);

}

void Test_Of_Mfx_AddP2_u32u32_u32(void)
{
    uint32 result;

    result = Mfx_AddP2_u32u32_u32(1,1,2, 1, 33);
    TEST_CHECK(result ==UMAX32);

    result = Mfx_AddP2_u32u32_u32(1,1,2,1,1);
    TEST_CHECK(result == 1);

    result = Mfx_AddP2_u32u32_u32(1,1,2,1,2);
    TEST_CHECK(result == 3);

    result = Mfx_AddP2_u32u32_u32(1,1,1,33,1);
    TEST_CHECK(result ==UMAX32);

     result = Mfx_AddP2_u32u32_u32(1,1,1,2,1);
    TEST_CHECK(result ==1);

    result = Mfx_AddP2_u32u32_u32(1,1,1,2,2);
    TEST_CHECK(result ==3);

    result = Mfx_AddP2_u32u32_u32(1,UMIN32,2,1,1);
    TEST_CHECK(result == UMIN32);

}

/**
  @brief 16-Bit Subtraction of 2n Scaled Integer test

  The routine tests subtraction of the two 16-bit integers with scaling factors set by input parameters.
*/

void Test_Of_Mfx_SubP2_s16s16_s16(void)
{
    sint16 result;

    result = Mfx_SubP2_s16s16_s16(1,1,2, 1, 17);
    TEST_CHECK(result ==MAX16);

    result = Mfx_SubP2_s16s16_s16(1,1,2,1,1);
    TEST_CHECK(result == 0);

    result = Mfx_SubP2_s16s16_s16(1,1,2,1,2);
    TEST_CHECK(result == 1);

    result = Mfx_SubP2_s16s16_s16(1,1,1,17,1);
    TEST_CHECK(result ==MAX16);

     result = Mfx_SubP2_s16s16_s16(1,1,1,2,1);
    TEST_CHECK(result ==0);

    result = Mfx_SubP2_s16s16_s16(1,1,1,2,2);
    TEST_CHECK(result ==1);

    result = Mfx_SubP2_s16s16_s16(1,MIN16,2,1,1);
    TEST_CHECK(result == MIN16);

}

void Test_Of_Mfx_SubP2_u16u16_u16(void)
{
    uint16 result;

    result = Mfx_SubP2_u16u16_u16(1,1,2, 1, 17);
    TEST_CHECK(result ==UMAX16);

    result = Mfx_SubP2_u16u16_u16(1,1,2,1,1);
    TEST_CHECK(result == 0);

    result = Mfx_SubP2_u16u16_u16(1,1,2,1,2);
    TEST_CHECK(result == 1);

    result = Mfx_SubP2_u16u16_u16(1,1,1,17,1);
    TEST_CHECK(result ==UMAX16);

     result = Mfx_SubP2_u16u16_u16(1,1,1,2,1);
    TEST_CHECK(result ==0);

    result = Mfx_SubP2_u16u16_u16(1,1,1,2,2);
    TEST_CHECK(result ==1);

    result = Mfx_SubP2_u16u16_u16(0,UMIN16,0,1,1);
    TEST_CHECK(result == UMIN16);
}
/**
  @brief 32-Bit Subtraction of 2n Scaled Integer test

  The routine tests subtraction of the two 32-bit integers with scaling factors set by input parameters.
*/
void Test_Of_Mfx_SubP2_s32s32_s32(void)
{
    sint32 result;

    result = Mfx_SubP2_s32s32_s32(1,1,2, 1, 33);
    TEST_CHECK(result ==MAX32);

    result = Mfx_SubP2_s32s32_s32(1,1,2,1,1);
    TEST_CHECK(result == 0);

    result = Mfx_SubP2_s32s32_s32(1,1,2,1,2);
    TEST_CHECK(result == 1);

    result = Mfx_SubP2_s32s32_s32(1,1,1,33,1);
    TEST_CHECK(result ==MAX32);

     result = Mfx_SubP2_s32s32_s32(1,1,1,2,1);
    TEST_CHECK(result ==0);

    result = Mfx_SubP2_s32s32_s32(1,1,1,2,2);
    TEST_CHECK(result ==1);

    result = Mfx_SubP2_s32s32_s32(0,MIN32,0,1,1);
    TEST_CHECK(result == MIN32);
}

void Test_Of_Mfx_SubP2_u32u32_u32(void)
{
    uint32 result;

    result = Mfx_SubP2_u32u32_u32(1,1,2, 1, 33);
    TEST_CHECK(result ==UMAX32);

    result = Mfx_SubP2_u32u32_u32(1,1,2,1,1);
    TEST_CHECK(result == 0);

    result = Mfx_SubP2_u32u32_u32(1,1,2,1,2);
    TEST_CHECK(result == 1);

    result = Mfx_SubP2_u32u32_u32(1,1,1,33,1);
    TEST_CHECK(result ==UMAX32);

     result = Mfx_SubP2_u32u32_u32(1,1,1,2,1);
    TEST_CHECK(result ==0);

    result = Mfx_SubP2_u32u32_u32(1,1,1,2,2);
    TEST_CHECK(result ==1);

    result = Mfx_SubP2_u32u32_u32(0,UMIN32,0,1,1);
    TEST_CHECK(result == UMIN32);
}
/**
  @brief Absolute Difference of 2n Scaled Integer test

  The routine tests absolute value of two 16-bit integers with scaling factors set by input parameters.
*/
void Test_Of_Mfx_AbsDiffP2_s16s16_s16(void)
{
    sint16 result;

    result = Mfx_AbsDiffP2_s16s16_s16(1,1,2, 1, 17);
    TEST_CHECK(result ==MAX16);

    result = Mfx_AbsDiffP2_s16s16_s16(1,1,2,1,1);
    TEST_CHECK(result == 0);

    result = Mfx_AbsDiffP2_s16s16_s16(1,1,2,1,2);
    TEST_CHECK(result == 1);

    result = Mfx_AbsDiffP2_s16s16_s16(1,1,1,17,1);
    TEST_CHECK(result ==MAX16);

     result = Mfx_AbsDiffP2_s16s16_s16(1,1,1,2,1);
    TEST_CHECK(result ==0);

    result = Mfx_AbsDiffP2_s16s16_s16(1,1,1,2,2);
    TEST_CHECK(result ==1);

}

void Test_Of_Mfx_AbsDiffP2_u16u16_u16(void)
{
    uint16 result;

    result = Mfx_AbsDiffP2_u16u16_u16(1,1,2, 1, 17);
    TEST_CHECK(result ==UMAX16);

    result = Mfx_AbsDiffP2_u16u16_u16(1,1,2,1,1);
    TEST_CHECK(result == 0);

    result = Mfx_AbsDiffP2_u16u16_u16(1,1,2,1,2);
    TEST_CHECK(result == 1);

    result = Mfx_AbsDiffP2_u16u16_u16(1,1,1,17,1);
    TEST_CHECK(result ==UMAX16);

     result = Mfx_AbsDiffP2_u16u16_u16(1,1,1,2,1);
    TEST_CHECK(result ==0);

    result = Mfx_AbsDiffP2_u16u16_u16(1,1,1,2,2);
    TEST_CHECK(result ==1);

}
/**
  @brief Absolute Value: 16-Bit Absolute Value of 2n Scaled Integer test

  The routine tests the absolute value of a 16-bit integer with scaling factors set by input parameters.
*/
void Test_Of_Mfx_AbsP2_s16_s16(void)
{
    sint16 result;

    result = Mfx_AbsP2_s16_s16(1,1,-16);
    TEST_CHECK(result ==MIN16);

    result = Mfx_AbsP2_s16_s16(1,1,17);
    TEST_CHECK(result == MAX16);

    result = Mfx_AbsP2_s16_s16(1,1,1);
    TEST_CHECK(result == 1);

    result = Mfx_AbsP2_s16_s16(1,2,1);
    TEST_CHECK(result ==0);

}

void Test_Of_Mfx_AbsP2_s16_u16(void)
{
    uint16 result;

    result = Mfx_AbsP2_s16_u16(1,1,-16);
    TEST_CHECK(result == UMIN16);

    result = Mfx_AbsP2_s16_u16(1,1,17);
    TEST_CHECK(result == UMAX16);

    result = Mfx_AbsP2_s16_u16(1,1,1);
    TEST_CHECK(result == 1);

    result = Mfx_AbsP2_s16_u16(1,2,1);
    TEST_CHECK(result ==0);
}
/**
  @brief Absolute Value: 32-Bit Absolute Value of 2n Scaled Integer test

  The routine tests the absolute value of a 32-bit integer with scaling factors set by input parameters.
*/
void Test_Of_Mfx_AbsP2_s32_s32(void)
{
    sint32 result;

    result = Mfx_AbsP2_s32_s32(1,1,-31);
    TEST_CHECK(result ==MIN32);

    result = Mfx_AbsP2_s32_s32(1,1,33);
    TEST_CHECK(result == MAX32);

    result = Mfx_AbsP2_s32_s32(1,1,1);
    TEST_CHECK(result == 1);

    result = Mfx_AbsP2_s32_s32(1,2,1);
    TEST_CHECK(result ==0);
}

void Test_Of_Mfx_AbsP2_s32_u32(void)
{
    uint32 result;

    result = Mfx_AbsP2_s32_u32(1,1,-31);
    TEST_CHECK(result ==UMIN32);

    result = Mfx_AbsP2_s32_u32(1,1,33);
    TEST_CHECK(result == UMAX32);

    result = Mfx_AbsP2_s32_u32(1,1,1);
    TEST_CHECK(result == 1);

    result = Mfx_AbsP2_s32_u32(1,2,1);
    TEST_CHECK(result ==0);
}

/*
  Test list.
*/
TEST_LIST = {
   { "Test of Mfx_Add_s16s16_s16", Test_Of_Mfx_Add_s16s16_s16 },    
   { "Test of Mfx_Add_s32s32_s32", Test_Of_Mfx_Add_s32s32_s32 },   
   { "Test of Mfx_Sub_s16s16_s16", Test_Of_Mfx_Sub_s16s16_s16 },
   { "Test of Mfx_Sub_s32s32_s32", Test_Of_Mfx_Sub_s32s32_s32 },
   { "Test of Mfx_Abs_s16_s16", Test_Of_Mfx_Abs_s16_s16 },
   { "Test of Mfx_Abs_s32_s32", Test_Of_Mfx_Abs_s32_s32 },
   { "Test of Mfx_AbsDiff_s16s16_s16", Test_Of_Mfx_AbsDiff_s16s16_s16 },
   { "Test of Mfx_AbsDiff_s32s32_s32", Test_Of_Mfx_AbsDiff_s32s32_s32 },
   { "Test of Mfx_AbsDiff_u32u32_u32", Test_Of_Mfx_AbsDiff_u32u32_u32 },
   { "Test of Mfx_Mul_s16s16_s16", Test_Of_Mfx_Mul_s16s16_s16 },
   { "Test of Mfx_Mul_s32s32_s32", Test_Of_Mfx_Mul_s32s32_s32 },
   { "Test of Mfx_Div_s16s16_s16", Test_Of_Mfx_Div_s16s16_s16 },
   { "Test of Mfx_Div_s32s32_s32", Test_Of_Mfx_Div_s32s32_s32 },
   { "Test of Mfx_RDiv_s16s16_s16", Test_Of_Mfx_RDiv_s16s16_s16 },
   { "Test of Mfx_RDiv_s32s32_s32", Test_Of_Mfx_RDiv_s32s32_s32 },
   { "Test of Mfx_MulDiv_s16s16_s16", Test_Of_Mfx_MulDiv_s16s16_s16 },
   { "Test of Mfx_MulDiv_s32s32_s32", Test_Of_Mfx_MulDiv_s32s32_s32 },
   { "Test of Mfx_RMulDiv_s16s16_s16", Test_Of_Mfx_RMulDiv_s16s16_s16 },
   { "Test of Mfx_RMulDiv_s32s32_s32", Test_Of_Mfx_RMulDiv_s32s32_s32 },
   { "Test of Mfx_MulShRight_s16s16u8_s32", Test_Of_Mfx_MulShRight_s16s16u8_s32 },
   { "Test of Mfx_MulShRight_s32s32u8_s32", Test_Of_Mfx_MulShRight_s32s32u8_s32 },
   { "Test of Mfx_DivShLeft_s16s16u8_s32", Test_Of_Mfx_DivShLeft_s16s16u8_s16 },
   { "Test of Mfx_DivShLeft_s32s32u8_s32", Test_Of_Mfx_DivShLeft_s32s32u8_s32 },
   { "Test of Mfx_Mod_s16", Test_Of_Mfx_Mod_s16 },
   { "Test of Mfx_Mod_s32", Test_Of_Mfx_Mod_s32 },
   { "Test of Mfx_Limit_s16", Test_Of_Mfx_Limit_s16 },
   { "Test of Mfx_Limit_s32", Test_Of_Mfx_Limit_s32 },
   { "Test of Mfx_Minmax_s16", Test_Of_Mfx_Minmax_s16 },
   { "Test of Mfx_Minmax_s32", Test_Of_Mfx_Minmax_s32 },
   { "Test of Mfx_Min_s16", Test_Of_Mfx_Min_s16 },
   { "Test of Mfx_Min_s32", Test_Of_Mfx_Min_s32 },
   { "Test of Mfx_Max_s16", Test_Of_Mfx_Max_s16 },
   { "Test of Mfx_Max_s32", Test_Of_Mfx_Max_s32 },
   { "Test of Mfx_ConvertP2_s16_s8", Test_Of_Mfx_ConvertP2_s16_s8 },
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
   { "Test of Mfx_SubP2_u16u16_u16", Test_Of_Mfx_SubP2_u16u16_u16 },
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

