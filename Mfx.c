/**===================================================================================================================*\
  @file Mfx.c

  @brief Library Mfx - implementation
  
  Implementation of Fixed Point Math Routines

  @see AUTOSAR_SWS_MFXLibrary.pdf
\*====================================================================================================================*/

/*====================================================================================================================*\
    Załączenie nagłówków
\*====================================================================================================================*/
#include "Mfx.h"

/*====================================================================================================================*\
    Makra lokalne
\*====================================================================================================================*/
#define MAX32   (2147483647L)
#define MIN32   (-2147483648L)
#define MAX16   (32767L)
#define MIN16   (-32768L)
#define MAX8   (127L)
#define MIN8   (-128L)
#define UMAX8   (255L)
#define UMIN8   (0L)
#define UMAX16   (65535L)
#define UMIN16   (0L)
#define UMAX32   (4294967295L)
#define UMIN32   (0L)

/*====================================================================================================================*\
    Typy lokalne
\*====================================================================================================================*/

/*====================================================================================================================*\
    Zmienne globalne
\*====================================================================================================================*/

/*====================================================================================================================*\
    Zmienne lokalne (statyczne)
\*====================================================================================================================*/

/*====================================================================================================================*\
    Deklaracje funkcji lokalnych
\*====================================================================================================================*/

/*====================================================================================================================*\
    Kod globalnych funkcji inline i makr funkcyjnych
\*====================================================================================================================*/

/*====================================================================================================================*\
    Kod funkcji
\*====================================================================================================================*/


/**
  @brief Additions

  This routine makes an addition between the two arguments. 
  Project element: [SWS_Mfx_00002] & [SWS_Mfx_00006] & [SWS_Mfx_00007] & [SWS_Mfx_00008 Function ID[0x014] & [0x00C]]
*/

sint16 Mfx_Add_s16s16_s16(sint16 x_value, sint16 y_value)
{
	sint32 tmp = (sint32)x_value + (sint32)y_value;
	if (tmp > MAX16)
	{
		tmp = MAX16;
	}
	else if (tmp < MIN16)
	{
		tmp = MIN16;
	}
	return (sint16)tmp;
}

sint32 Mfx_Add_s32s32_s32(sint32 x_value, sint32 y_value)
{
    sint64 tmp = (sint64)x_value + (sint64)y_value;
    if(tmp > MAX32)
    {
		tmp = MAX32;
    }
	else if (tmp < MIN32) 
	{
		tmp = MIN32;
	}
	return (sint32)tmp;
}

/**
  @brief Subtractions

  This routine makes a subtraction between the two arguments.
  Project element: [SWS_Mfx_00009] & [SWS_Mfx_00010] & [SWS_Mfx_00011] & [SWS_Mfx_00012 Function ID[0x036] & [0x045]]
*/

sint16 Mfx_Sub_s16s16_s16(sint16 x_value, sint16 y_value)
{
	sint32 tmp = (sint32)x_value - (sint32)y_value;
	if (tmp > MAX16)
	{
		tmp = MAX16;
	}
	else if (tmp < MIN16)
	{
		tmp = MIN16;
	}
	return (sint16)tmp;
}

sint32 Mfx_Sub_s32s32_s32(sint32 x_value, sint32 y_value)
{
	sint64 tmp = (sint64)x_value - (sint64)y_value;
	if (tmp > MAX32)
	{
		tmp = MAX32;
	}
	else if (tmp < MIN32)
	{
		tmp = MIN32;
	}
	return (sint32)tmp;
}

/**
  @brief Absolute value

  This routine computes the absolute value of a signed value.
  Project element: [SWS_Mfx_00013] & [SWS_Mfx_00014] & [SWS_Mfx_00015] & [SWS_Mfx_00016 Function ID[0x059] & [0x05C]]
*/

sint16 Mfx_Abs_s16_s16(sint16 x_value)
{
	if (x_value == MIN16)
	{
		return MAX16;
	}
	else 
	{
		if (x_value < 0)
		{
			return -x_value;
		}
		else
		{
			return x_value;
		}
	}
}

sint32 Mfx_Abs_s32_s32(sint32 x_value)
{
	if (x_value == MIN32)
	{
		return  MAX32;
	}
	else
	{
		if (x_value < 0)
		{
			return -x_value;
		}
		else
		{
			return x_value;
		}
	}
}

/**
  @brief Absolute value of a difference

  This routine computes the absolute value of a difference between 2 values.
  Project element: [SWS_Mfx_00017] & [SWS_Mfx_00018] & [SWS_Mfx_00019] & [SWS_Mfx_00020 Function ID[0x078] & [0x066] & [0x069]]
*/

sint16 Mfx_AbsDiff_s16s16_s16(sint16 x_value, sint16 y_value)
{
	sint32 tmp = (sint32)x_value - (sint32)y_value;
	if (tmp > MAX16)
	{
		tmp = MAX16;
	}
	else if (tmp < MIN16)
	{
		tmp = MIN16;
	}
	else if (tmp == MIN16)
	{
		tmp = MAX16;
	}
	else
	{
		if (tmp < 0)
		{
			tmp = -tmp;
		}
		else
		{
			tmp = tmp;
		}
	}
	return (sint16)tmp;
}

sint32 Mfx_AbsDiff_s32s32_s32(sint32 x_value, sint32 y_value)
{
	sint64 tmp = (sint64)x_value - (sint64)y_value;
	if (tmp > MAX32)
	{
		tmp = MAX32;
	}
	else if (tmp < MIN32)
	{
		tmp = MIN32;
	}
	else if (tmp == MIN32)
	{
		tmp = MAX32;
	}
	else
	{
		if (tmp < 0)
		{
			tmp = -tmp;
		}
		else
		{
			tmp = tmp;
		}
	}
	return (sint32)tmp;
}

uint32 Mfx_AbsDiff_u32u32_u32(uint32 x_value, uint32 y_value)
{
	uint64 tmp = (uint64)x_value - (uint64)y_value;
	if (tmp > UMAX32)
	{
		tmp = UMAX32;
	}
	else if (tmp < UMIN32)
	{
		tmp = UMIN32;
	}
	else if (tmp == UMIN32)
	{
		tmp = UMAX32;
	}
	else
	{
		if (tmp < 0)
		{
			tmp = -tmp;
		}
		else
		{
			tmp = tmp;
		}
	}
	return (uint32)tmp;
}

/**
  @brief Multiplications

  This routine makes a multiplication between the two arguments.
  Project element: [SWS_Mfx_00021] & [SWS_Mfx_00022] & [SWS_Mfx_00023] & [SWS_Mfx_00024 Function ID[0x08A] & [0x094]]
*/

sint16 Mfx_Mul_s16s16_s16(sint16 x_value, sint16 y_value)
{
	sint32 tmp = (sint32)x_value * (sint32)y_value;
	if (tmp > MAX16)
	{
		tmp = MAX16;
	}
	else if (tmp < MIN16)
	{
		tmp = MIN16;
	}
	return (sint16)tmp;
}

sint32 Mfx_Mul_s32s32_s32(sint32 x_value, sint32 y_value)
{
	sint64 tmp = (sint64)x_value * (sint64)y_value;
	if (tmp > MAX32)
	{
		tmp = MAX32;
	}
	else if (tmp < MIN32)
	{
		tmp = MIN32;
	}
	return (sint32)tmp;
}

/**
  @brief Divisions rounded towards 0

  These routines make a division between the two arguments.
  Project element: [SWS_Mfx_00025] & [SWS_Mfx_00026] & [SWS_Mfx_00027] & [SWS_Mfx_00028] & [SWS_Mfx_00030] & [SWS_Mfx_00031 Function ID[0x0B7] & [0x0C3]]
*/

sint16 Mfx_Div_s16s16_s16(sint16 x_value, sint16 y_value)
{
	sint32 tmp = 0L;
    if(y_value == 0)
    {
		if(x_value >= 0) 
		{
			tmp = MAX16;
		}
		else
		{
			tmp = MIN16;
		}
    }
	else
	{	
		tmp = (sint32)x_value/(sint32)y_value;
	}

	if (tmp >= MAX16)
	{
		tmp = MAX16;
	}
	else if (tmp <= MIN16)
	{
		tmp = MIN16;
	}
	return (sint16)tmp;   
}

sint32 Mfx_Div_s32s32_s32(sint32 x_value, sint32 y_value)
{
	sint64 tmp = 0L;
	if (y_value == 0)
	{
		if (x_value >= 0)
		{
			tmp = MAX32;
		}
		else
		{
			tmp = MIN32;
		}
	}
	else
	{
		tmp = (sint64)x_value / (sint64)y_value;
	}

	if (tmp >= MAX32)
	{
		tmp = MAX32;
	}
	else if (tmp <= MIN32)
	{
		tmp = MIN32;
	}
	return (sint32)tmp;
}

/**
  @brief Divisions rounded off

  These routines make a division between the two arguments
  Project element: [SWS_Mfx_00032] & [SWS_Mfx_00033] & [SWS_Mfx_00034] & [SWS_Mfx_00035] & [SWS_Mfx_00037] & [SWS_Mfx_00038 Function ID[0x0E7] & [0x0F3]]
*/

sint16 Mfx_RDiv_s16s16_s16(sint16 x_value, sint16 y_value)
{
	sint32 tmp = 0L;
	if (y_value == 0)
	{
		if (x_value >= 0)
		{
			tmp = MAX16;
		}
		else
		{
			tmp = MIN16;
		}
	}
	else
	{
		tmp = (sint32)x_value / (sint32)y_value;
		if (Mfx_Abs_s16_s16(x_value) % Mfx_Abs_s16_s16(y_value) == 0)
		{
			tmp = tmp;
		}
		else
		{
			if ((x_value > 0) == (y_value > 0))
			{
				tmp = tmp + 1;
			}
			else
			{
				tmp = tmp - 1;
			}
		}
	}
	if (tmp >= MAX16)
	{
		tmp = MAX16;
	}
	else if (tmp <= MIN16)
	{
		tmp = MIN16;
	}
	return (sint16)tmp;
}

sint32 Mfx_RDiv_s32s32_s32(sint32 x_value, sint32 y_value)
{
	sint64 tmp = 0L;
	if (y_value == 0)
	{
		if (x_value >= 0)
		{
			tmp = MAX32;
		}
		else
		{
			tmp = MIN32;
		}
	}
	else
	{
		
		tmp = (sint64)x_value / (sint64)y_value;
		if (Mfx_Abs_s32_s32(x_value) % Mfx_Abs_s32_s32(y_value) == 0)
		{
			tmp = tmp;
		}
		else
		{
			if ((x_value > 0) == (y_value > 0))
			{
				tmp = tmp + 1;
			}
			else
			{
				tmp = tmp - 1;
			}
		}
	}
	if (tmp >= MAX32)
	{
		tmp = MAX32;
	}
	else if (tmp <= MIN32)
	{
		tmp = MIN32;
	}
	return (sint32)tmp;
}

/**
  @brief Combinations of multiplication and division rounded towards 0

  These routines make a multiplication between the two arguments and a division by the third
  argument.
  Project element: [SWS_Mfx_00039] & [SWS_Mfx_00040] & [SWS_Mfx_00041] & [SWS_Mfx_00042] & [SWS_Mfx_00044] & [SWS_Mfx_00045 Function ID[0x112] & [0x11A]]
*/

sint16 Mfx_MulDiv_s16s16s16_s16(sint16 x_value, sint16 y_value, sint16 z_value)
{
	sint16 tmp = Mfx_Mul_s16s16_s16(x_value,y_value);
	return Mfx_Div_s16s16_s16(tmp,z_value);
}

sint32 Mfx_MulDiv_s32s32s32_s32(sint32 x_value, sint32 y_value, sint32 z_value)
{
	sint32 tmp = Mfx_Mul_s32s32_s32(x_value, y_value);
	return Mfx_Div_s32s32_s32(tmp, z_value);
}

/**
  @brief Combinations of multiplication and division rounded off

  These routines make a multiplication between the two arguments and a division by the third
  argument.
  Project element: [SWS_Mfx_00046] & [SWS_Mfx_00047] & [SWS_Mfx_00048] & [SWS_Mfx_00049] & [SWS_Mfx_00051] & [SWS_Mfx_00052 Function ID[0x129] & [0x134]]
*/

sint16 Mfx_RMulDiv_s16s16s16_s16(sint16 x_value, sint16 y_value, sint16 z_value)
{
	sint16 tmp = Mfx_Mul_s16s16_s16(x_value, y_value);
	return Mfx_RDiv_s16s16_s16(tmp, z_value);
}

sint32 Mfx_RMulDiv_s32s32s32_s32(sint32 x_value, sint32 y_value, sint32 z_value)
{
	sint32 tmp = Mfx_Mul_s32s32_s32(x_value, y_value);
	return Mfx_RDiv_s32s32_s32(tmp, z_value);
}

/**
  @brief Combinations of multiplication and shift right

  This routine makes a multiplication between the two arguments and applies a shift right defined
  by the third argument.
  Project element: [SWS_Mfx_00053] & [SWS_Mfx_00054] & [SWS_Mfx_00055] & [SWS_Mfx_00056] & [SWS_Mfx_00057 Function ID[0x13E] & [0x14B]]
*/

sint16 Mfx_MulShRight_s16s16u8_s16(sint16 x_value, sint16 y_value, uint8 shift)
{
	sint32 tmp = Mfx_Mul_s16s16_s16(x_value, y_value);
	if (tmp < 0)
	{	
		tmp = Mfx_Abs_s16_s16(tmp);
		if (tmp == MAX16) {			
			tmp = tmp >> shift;
			tmp = -tmp -1;
		}
		else {
			tmp = tmp >> shift;
			tmp = -tmp;
		}
	}
	else
	{
		tmp = tmp >> shift;
	}

	if (tmp >= MAX16)
	{
		tmp = MAX16;
	}
	else if (tmp <= MIN16)
	{
		tmp = MIN16;
	}
	return (sint16)tmp;
}

sint32 Mfx_MulShRight_s32s32u8_s32(sint32 x_value, sint32 y_value, uint8 shift)
{
	sint64 tmp = Mfx_Mul_s32s32_s32(x_value, y_value);
	if (tmp < 0) 
	{
		tmp = Mfx_Abs_s32_s32(tmp);
		if (tmp == MAX32) {			
			tmp = tmp >> shift;
			tmp = -tmp - 1;
		}
		else {
			tmp = tmp >> shift;
			tmp = -tmp;
		}
	}
	else
	{
		tmp = tmp >> shift;
	}

	if (tmp >= MAX32)
	{
		tmp = MAX32;
	}
	else if (tmp <= MIN32)
	{
		tmp = MIN32;
	}
	return (sint32) tmp;
}

/**
  @brief Combinations of division and shift left

  This routine applies a shift left defined by the third argument to the first argument, and then
  makes a division by the second argument.
  Project element: [SWS_Mfx_00058] & [SWS_Mfx_00059] & [SWS_Mfx_00060] & [SWS_Mfx_00061] & [SWS_Mfx_00062] & [SWS_Mfx_00064 Function ID[0x155] & [0x159]]
*/

sint16 Mfx_DivShLeft_s16s16u8_s16(sint16 x_value, sint16 y_value, uint8 shift)
{
	sint32 tmp;
	if (x_value < 0)
	{
		tmp = Mfx_Abs_s16_s16(x_value);
		if (tmp == MAX16) {
			tmp = tmp << shift;
			tmp = -tmp - 1;
		}
		else {
			tmp = tmp << shift;
			tmp = -tmp;
		}
	}
	else
	{
		tmp = (sint32)x_value << shift;
	}
	if (tmp >= MAX16)
	{
		tmp = MAX16;
	}
	else if (tmp <= MIN16)
	{
		tmp = MIN16;
	}
	return Mfx_Div_s16s16_s16((sint16)tmp, y_value);
}

sint32 Mfx_DivShLeft_s32s32u8_s32(sint32 x_value, sint32 y_value, uint8 shift)
{
	sint64 tmp;
	if (x_value < 0)
	{
		tmp = Mfx_Abs_s32_s32(x_value);
		if (tmp == MAX32) {
			tmp = tmp << shift;
			tmp = -tmp - 1;
		}
		else {
			tmp = tmp << shift;
			tmp = -tmp;
		}
	}
	else
	{
		tmp = (sint64)x_value << shift;
	}

	if (tmp >= MAX32)
	{
		tmp = MAX32;
	}
	else if (tmp <= MIN32)
	{
		tmp = MIN32;
	}

	return Mfx_Div_s32s32_s32((sint32)tmp, y_value);
}

/**
  @brief Modulo

  This routine returns the remainder of the division x_value / y_value if y_value is not zero.
  Project element: [SWS_Mfx_00065] & [SWS_Mfx_00066] & [SWS_Mfx_00068] & [SWS_Mfx_00069] & [SWS_Mfx_00070 Function ID[0x172] & [0x174]]
*/

sint16 Mfx_Mod_s16(sint16 x_value, sint16 y_value)
{
	sint16 tmp;
	if (y_value == 0)
	{
		tmp = 0;
	}
	else
	{
		if (x_value < 0)
		{
			tmp = -(x_value % y_value);
		}
		else
		{
			tmp = x_value % y_value;
		}		
	}
	return tmp;
}

sint32 Mfx_Mod_s32(sint32 x_value, sint32 y_value)
{
	sint32 tmp;
	if (y_value == 0)
	{
		tmp = 0;
	}
	else
	{
		if (x_value < 0)
		{
			tmp = -(x_value % y_value);
		}
		else
		{
			tmp = x_value % y_value;
		}
	}
	return tmp;
}

/**
  @brief Limiting

  This routine limits the input value between Lower Bound and Upper Bound.
  Project element: [SWS_Mfx_00073] & [SWS_Mfx_00074] & [SWS_Mfx_00075] & [SWS_Mfx_00076] & [SWS_Mfx_00079 Function ID[0x17C] & [0x17E]]
*/

sint16 Mfx_Limit_s16(sint16 value, sint16 min_value, sint16 max_value)
{
	if (value < min_value) 
	{
		return min_value;
	}
	else if (value > max_value)
	{
		return max_value;
	}
	else
	{
		return value;
	}	
}

sint32 Mfx_Limit_s32(sint32 value, sint32 min_value, sint32 max_value)
{
	if (value < min_value)
	{
		return min_value;
	}
	else if (value > max_value)
	{
		return max_value;
	}
	else
	{
		return value;
	}
}

/**
  @brief Limitations with only one value for minimum and maximum

  The routine limits a value to a minimum or a maximum that depends on the sign of the minmax_value.
  Project element: [SWS_Mfx_00082] & [SWS_Mfx_00083] & [SWS_Mfx_00084] & [SWS_Mfx_00085] & [SWS_Mfx_00086 Function ID[0x182] & [0x184]]
*/

sint16 Mfx_Minmax_s16(sint16 value, sint16 minmax_value)
{
	if ((minmax_value >= 0) && (value > minmax_value))
	{
		return minmax_value;
	}
	else if ((minmax_value < 0) && (value < minmax_value))
	{
		return minmax_value;
	}
	else
	{
		return value;
	}
}

sint32 Mfx_Minmax_s32(sint32 value, sint32 minmax_value)
{
	if ((minmax_value >= 0) && (value > minmax_value))
	{
		return minmax_value;
	}
	else if ((minmax_value < 0) && (value < minmax_value))
	{
		return minmax_value;
	}
	else
	{
		return value;
	}
}

/**
  @brief Minimum and maximum

  These routines return the minimum and maximum between two values.
  Project element: [SWS_Mfx_00090] & [SWS_Mfx_00091] & [SWS_Mfx_00092] & [SWS_Mfx_00093] & [SWS_Mfx_00094] & [SWS_Mfx_00095] & [SWS_Mfx_00096 Function ID[0x188] & [0x18A] & [0x18E] & [0x190]]
*/

sint16 Mfx_Min_s16(sint16 x_value, sint16 y_value)
{
	if (x_value < y_value)
	{
		return x_value;
	}
	else
	{
		return y_value;
	}
}

sint32 Mfx_Min_s32(sint32 x_value, sint32 y_value)
{
	if (x_value < y_value)
	{
		return x_value;
	}
	else
	{
		return y_value;
	}
}

sint16 Mfx_Max_s16(sint16 x_value, sint16 y_value)
{
	if (x_value > y_value)
	{
		return x_value;
	}
	else
	{
		return y_value;
	}
}

sint32 Mfx_Max_s32(sint32 x_value, sint32 y_value)
{
	if (x_value > y_value)
	{
		return x_value;
	}
	else
	{
		return y_value;
	}
}

/**
  @brief Conversion: 16-Bit to 8-Bit 2n Scaled Integer Conversion

  The routine converts a scaled 16-bit integer to a scaled 8-bit integer. 
  Project element: [SWS_Mfx_00100] & [SWS_Mfx_00101] & [SWS_Mfx_00102] & [SWS_Mfx_00103] & [SWS_Mfx_00104 Function ID[0x191] & [0x192]]
*/
sint8 Mfx_ConvertP2_s16_s8(sint16 x, sint16 a, sint16 c)
{
	sint16 tmp;
	if ((c - a) < -15)
	{
		tmp = MIN8;
	}
	else if ((c - a) > 7)
	{
		tmp = MAX8;
	}
	else
	{
		if (c >= a)
		{
			tmp = (x << (c - a));
		}
		else
		{
			tmp = (x >> (a - c));
		}
	}

	if (tmp >= MAX8)
	{
		tmp = MAX8;
	}
	else if (tmp <= MIN8)
	{
		tmp = MIN8;
	}
	return (sint8)tmp;
}

uint8 Mfx_ConvertP2_u16_u8(uint16 x, uint16 a, uint16 c)
{
	uint16 tmp;
	if ((c - a) < -15)
	{
		tmp = UMIN8;
	}
	else if ((c - a) > 7)
	{
		tmp = UMAX8;
	}
	else
	{
		if (c >= a)
		{
			tmp = (x << (c - a));
		}
		else
		{
			tmp = (x >> (a - c));
		}
	}

	if (tmp >= UMAX8)
	{
		tmp = UMAX8;
	}
	else if (tmp <= UMIN8)
	{
		tmp = UMIN8;
	}
	return (uint8)tmp;
}

/**
  @brief Conversion: 8-Bit to 16-Bit 2n Scaled Integer Conversion

  The routine converts a scaled 8-bit integer to a scaled 16-bit integer.
  Project element: [SWS_Mfx_00106] & [SWS_Mfx_00107] & [SWS_Mfx_00108] & [SWS_Mfx_00109] & [SWS_Mfx_00110 Function ID[0x193] & [0x194]]
*/
sint16 Mfx_ConvertP2_s8_s16(sint8 x, sint16 a, sint16 c)
{
	sint32 tmp;
	if ((c - a) < -7)
	{
		tmp = MIN16;
	}
	else if ((c - a) > 15)
	{
		tmp = MAX16;
	}
	else
	{
		if (c >= a)
		{
			tmp = (x << (c - a));
		}
		else
		{
			tmp = (x >> (a - c));
		}
	}

	if (tmp >= MAX16)
	{
		tmp = MAX16;
	}
	else if (tmp <= MIN16)
	{
		tmp = MIN16;
	}
	return (sint16)tmp;
}

uint16 Mfx_ConvertP2_u8_u16(uint8 x, uint16 a, uint16 c)
{
	uint32 tmp;
	if ((c - a) < -7)
	{
		tmp = UMIN16;
	}
	else if ((c - a) > 15)
	{
		tmp = UMAX16;
	}
	else
	{
		if (c >= a)
		{
			tmp = (x << (c - a));
		}
		else
		{
			tmp = (x >> (a - c));
		}
	}

	if (tmp >= UMAX16)
	{
		tmp = UMAX16;
	}
	else if (tmp <= UMIN16)
	{
		tmp = UMIN16;
	}
	return (uint16)tmp;
}

/**
  @brief Conversion: 32-Bit to 16-Bit 2n Scaled Integer Conversion

  The routine converts a scaled 32-bit integer to a scaled 16-bit integer.
  Project element: [SWS_Mfx_00112] & [SWS_Mfx_00113] & [SWS_Mfx_00114] & [SWS_Mfx_00115] & [SWS_Mfx_00116 Function ID[0x195] & [0x196]]
*/
sint16 Mfx_ConvertP2_s32_s16(sint32 x, sint16 a, sint16 c)
{
	sint32 tmp;
	if ((c - a) < -31)
	{
		tmp = MIN16;
	}
	else if ((c - a) > 15)
	{
		tmp = MAX16;
	}
	else
	{
		if (c >= a)
		{
			tmp = (x << (c - a));
		}
		else
		{
			tmp = (x >> (a - c));
		}
	}

	if (tmp >= MAX16)
	{
		tmp = MAX16;
	}
	else if (tmp <= MIN16)
	{
		tmp = MIN16;
	}
	return (sint16)tmp;
}

uint16 Mfx_ConvertP2_u32_u16(uint32 x, uint16 a, uint16 c)
{
	uint32 tmp;
	if ((c - a) < -31)
	{
		tmp = UMIN16;
	}
	else if ((c - a) > 15)
	{
		tmp = UMAX16;
	}
	else
	{
		if (c >= a)
		{
			tmp = (x << (c - a));
		}
		else
		{
			tmp = (x >> (a - c));
		}
	}

	if (tmp >= UMAX16)
	{
		tmp = UMAX16;
	}
	else if (tmp <= UMIN16)
	{
		tmp = UMIN16;
	}
	return (uint16)tmp;
}

/**
  @brief Conversion: 16-Bit to 32-Bit 2n Scaled Integer Conversion

  The routine converts a scaled 16-bit integer to a scaled 32-bit integer.
  Project element: [SWS_Mfx_00118] & [SWS_Mfx_00119] & [SWS_Mfx_00120] & [SWS_Mfx_00121] & [SWS_Mfx_00122 Function ID[0x197] & [0x198]]
*/
sint32 Mfx_ConvertP2_s16_s32(sint16 x, sint16 a, sint16 c)
{
	sint64 tmp;
	if ((c - a) < -15)
	{
		tmp = MIN32;
	}
	else if ((c - a) > 31)
	{
		tmp = MAX32;
	}
	else
	{
		if (c >= a)
		{
			tmp = (x << (c - a));
		}
		else
		{
			tmp = (x >> (a - c));
		}
	}

	if (tmp >= MAX32)
	{
		tmp = MAX32;
	}
	else if (tmp <= MIN32)
	{
		tmp = MIN32;
	}
	return (sint32)tmp;
}

uint32 Mfx_ConvertP2_u16_u32(uint16 x, uint16 a, uint16 c)
{
	uint64 tmp;
	if ((c - a) < -15)
	{
		tmp = UMIN32;
	}
	else if ((c - a) > 31)
	{
		tmp = UMAX32;
	}
	else
	{
		if (c >= a)
		{
			tmp = (x << (c - a));
		}
		else
		{
			tmp = (x >> (a - c));
		}
	}

	if (tmp >= UMAX32)
	{
		tmp = UMAX32;
	}
	else if (tmp <= UMIN32)
	{
		tmp = UMIN32;
	}
	return (uint32)tmp;
}

/**
  @brief Multiplication: 16-Bit Multiplication of 2n Scaled Integer

  The routine multiplies two 16-bit integers with scaling factors set by input parameters.
  Project element: [SWS_Mfx_00124] & [SWS_Mfx_00125] & [SWS_Mfx_00126] & [SWS_Mfx_00127] & [SWS_Mfx_00128 Function ID[0x199] & [0x19E]]
*/
sint16 Mfx_MulP2_s16s16_s16(sint16 x, sint16 y, sint16 a, sint16 b, sint16 c)
{
	sint32 tmp;
	if ((c - b - a) < -31)
	{
		tmp = MIN16;
	}
	else if ((c - b - a) > 15)
	{
		tmp = MAX16;
	}
	else
	{
		tmp = (1 << (a-b)) * (sint32)x * (sint32)y;
		if (c - a >= 0)
		{
			tmp = (tmp << (c - a));
		}
		else
		{
			tmp = (tmp >> (a - c));
		}
	}

	if (tmp >= MAX16)
	{
		tmp = MAX16;
	}
	else if (tmp <= MIN16)
	{
		tmp = MIN16;
	}
	return (sint16)tmp;
}

uint16 Mfx_MulP2_u16u16_u16(uint16 x, uint16 y, sint16 a, sint16 b, sint16 c)
{
	uint32 tmp;
	if ((c - b - a) < -31)
	{
		tmp = UMIN16;
	}
	else if ((c - b - a) > 15)
	{
		tmp = UMAX16;
	}
	else
	{
		tmp = (1 << (a - b)) * (uint32)x * (uint32)y;
		if (c - a >= 0)
		{
			tmp = (tmp << (c - a));
		}
		else
		{
			tmp = (tmp >> (a - c));
		}
	}

	if (tmp >= UMAX16)
	{
		tmp = UMAX16;
	}
	else if (tmp <= UMIN16)
	{
		tmp = UMIN16;
	}
	return (uint16)tmp;
}

/**
  @brief Multiplication: 32-Bit Multiplication of 2n Scaled Integer

  The routine multiplies two 32-bit integers with scaling factors set by input parameters.
  Project element: [SWS_Mfx_00130] & [SWS_Mfx_00131] & [SWS_Mfx_00132] & [SWS_Mfx_00133] & [SWS_Mfx_00134 Function ID[0x19F] & [0x1A4]]
*/
sint32 Mfx_MulP2_s32s32_s32(sint32 x, sint32 y, sint16 a, sint16 b, sint16 c)
{
	sint64 tmp;
	if ((c - b - a) < -63)
	{
		tmp = MIN32;
	}
	else if ((c - b - a) > 31)
	{
		tmp = MAX32;
	}
	else
	{
		tmp = (1 << (a - b)) * (sint64)x * (sint64)y;
		if (c - a >= 0)
		{
			tmp = (tmp << (c - a));
		}
		else
		{
			tmp = (tmp >> (a - c));
		}
	}

	if (tmp >= MAX32)
	{
		tmp = MAX32;
	}
	else if (tmp <= MIN32)
	{
		tmp = MIN32;
	}
	return (sint32)tmp;
}

uint32 Mfx_MulP2_u32u32_u32(uint32 x, uint32 y, sint16 a, sint16 b, sint16 c)
{
	uint64 tmp;
	if ((c - b - a) < -63)
	{
		tmp = UMIN32;
	}
	else if ((c - b - a) > 31)
	{
		tmp = UMAX32;
	}
	else
	{
		tmp = (1 << (a - b)) * (uint64)x * (uint64)y;
		if (c - a >= 0)
		{
			tmp = (tmp << (c - a));
		}
		else
		{
			tmp = (tmp >> (a - c));
		}
	}

	if (tmp >= UMAX32)
	{
		tmp = UMAX32;
	}
	else if (tmp <= UMIN32)
	{
		tmp = UMIN32;
	}
	return (uint32)tmp;
}

/**
  @brief Division: 16-Bit Division of 2n Scaled Integer

  The routine divides two 16-bit integers with scaling factors set by input parameters.
  Project element: [SWS_Mfx_00136] & [SWS_Mfx_00137] & [SWS_Mfx_00138] & [SWS_Mfx_00139] & [SWS_Mfx_00141] & [SWS_Mfx_00142 Function ID[0x1A5] & [0x1AC]]
*/
sint16 Mfx_DivP2_s16s16_s16(sint16 x, sint16 y, sint16 a, sint16 b, sint16 c)
{
	sint32 tmp;
	if ((c + b - a) < -15)
	{
		tmp = MIN16;
	}
	else if ((c + b - a) > 31)
	{
		tmp = MAX16;
	}
	else
	{
		tmp = ((1 << (a + b)) * (sint32)x);
		tmp =  Mfx_Div_s32s32_s32(tmp, (sint32)y);
		if (c - a >= 0)
		{
			tmp = (tmp << (c - a));
		}
		else
		{
			tmp = (tmp >> (a - c));
		}
	}

	if (tmp >= MAX16)
	{
		tmp = MAX16;
	}
	else if (tmp <= MIN16)
	{
		tmp = MIN16;
	}
	return (sint16)tmp;
}

uint16 Mfx_DivP2_u16u16_u16(uint16 x, uint16 y, sint16 a, sint16 b, sint16 c)
{
	uint32 tmp;
	if ((c + b - a) < -15)
	{
		tmp = UMIN16;
	}
	else if ((c + b - a) > 31)
	{
		tmp = UMAX16;
	}
	else
	{
		if (y == 0 && x >= 0)
		{
			tmp = UMAX16;
		}
		else if (y == 0 && x < 0)
		{
			tmp = UMIN16;
		}
		else
		{
			tmp = ((1 << (a + b)) * (uint32)x) / (uint32)y;
		}
		if (c - a >= 0)
		{
			tmp = (tmp << (c - a));
		}
		else
		{
			tmp = (tmp >> (a - c));
		}
	}

	if (tmp >= UMAX16)
	{
		tmp = UMAX16;
	}
	else if (tmp <= UMIN16)
	{
		tmp = UMIN16;
	}
	return (uint16)tmp;
}

/**
  @brief Division: 32-Bit Division of 2n Scaled Integer

  The routine divides two 32-bit integers with scaling factors set by input parameters
  Project element: [SWS_Mfx_00144] & [SWS_Mfx_00145] & [SWS_Mfx_00146] & [SWS_Mfx_00147] & [SWS_Mfx_00149] & [SWS_Mfx_00150 Function ID[0x1AD] & [0x1B4]]
*/
sint32 Mfx_DivP2_s32s32_s32(sint32 x, sint32 y, sint16 a, sint16 b, sint16 c)
{
	sint64 tmp;
	if ((c + b - a) < -31)
	{
		tmp = MIN32;
	}
	else if ((c + b - a) > 63)
	{
		tmp = MAX32;
	}
	else
	{
		if (y == 0 && x >= 0)
		{
			tmp = MAX32;
		}
		else if (y == 0 && x < 0)
		{
			tmp = MIN32;
		}
		else
		{
			tmp = ((1 << (a + b)) * (sint64)x) / (sint64)y;
		}
		if (c - a >= 0)
		{
			tmp = (tmp << (c - a));
		}
		else
		{
			tmp = (tmp >> (a - c));
		}
	}

	if (tmp >= MAX32)
	{
		tmp = MAX32;
	}
	else if (tmp <= MIN32)
	{
		tmp = MIN32;
	}
	return (sint32)tmp;
}

uint32 Mfx_DivP2_u32u32_u32(uint32 x, uint32 y, sint16 a, sint16 b, sint16 c)
{
	uint32 tmp;
	if ((c + b - a) < -31)
	{
		tmp = UMIN32;
	}
	else if ((c + b - a) > 63)
	{
		tmp = UMAX32;
	}
	else
	{
		if (y == 0 && x >= 0)
		{
			tmp = UMAX32;
		}
		else if (y == 0 && x < 0)
		{
			tmp = UMIN32;
		}
		else
		{
			tmp = ((1 << (a + b)) * (uint64)x) / (uint64)y;
		}
		if (c - a >= 0)
		{
			tmp = (tmp << (c - a));
		}
		else
		{
			tmp = (tmp >> (a - c));
		}
	}

	if (tmp >= UMAX32)
	{
		tmp = UMAX32;
	}
	else if (tmp <= UMIN32)
	{
		tmp = UMIN32;
	}
	return (uint32)tmp;
}

/**
  @brief Addition: 16-Bit Addition of 2n Scaled Integer

  The routine adds two 16-bit integers with scaling factors set by input parameters.
  Project element: [SWS_Mfx_00152] & [SWS_Mfx_00153] & [SWS_Mfx_00154] & [SWS_Mfx_00155] & [SWS_Mfx_00156 Function ID[0x1B5] & [0x1BA]]
*/

sint16 Mfx_AddP2_s16s16_s16(sint16 x, sint16 y, sint16 a, sint16 b, sint16 c)
{
	sint32 tmp;
	if (a >= b)
	{
		if (((a - b) > 15) || ((c - b) > 15) || ((a - c) > 15))
		{
			tmp = MAX16;
		}
		else
		{
			tmp = (1 << (a - b)) * y + x;
			if (c >= a)
			{
				tmp = (tmp << (c - a));
			}
			else
			{
				tmp = (tmp >> (a - c));
			}
		}
	}
	else
	{
		if (((b - a) > 15) || ((c - a) > 15) || ((b - c) > 15))
		{
			tmp = MAX16;
		}
		else
		{
			tmp = (1 << (b - a)) * x + y;
			if (c >= b)
			{
				tmp = (tmp << (c - b));
			}
			else
			{
				tmp = (tmp >> (b - c));
			}
		}
	}
	if (tmp >= MAX16)
	{
		tmp = MAX16;
	}
	else if (tmp <= MIN16)
	{
		tmp = MIN16;
	}
	return (sint16)tmp;
}

uint16 Mfx_AddP2_u16u16_u16(uint16 x, uint16 y, sint16 a, sint16 b, sint16 c)
{
	uint32 tmp;
	if (a >= b)
	{
		if (((a - b) > 15) || ((c - b) > 15) || ((a - c) > 15))
		{
			tmp = UMAX16;
		}
		else
		{
			tmp = (1 << (a - b)) * y + x;
			if (c >= a)
			{
				tmp = (tmp << (c - a));
			}
			else
			{
				tmp = (tmp >> (a - c));
			}
		}
	}
	else
	{
		if (((b - a) > 15) || ((c - a) > 15) || ((b - c) > 15))
		{
			tmp = UMAX16;
		}
		else
		{
			tmp = (1 << (b - a)) * x + y;
			if (c >= b)
			{
				tmp = (tmp << (c - b));
			}
			else
			{
				tmp = (tmp >> (b - c));
			}
		}
	}
	if (tmp >= UMAX16)
	{
		tmp = UMAX16;
	}
	else if (tmp <= UMIN16)
	{
		tmp = UMIN16;
	}
	return (uint16)tmp;
}

/**
  @brief Addition: 32-Bit Addition of 2n Scaled Integer

  The routine adds two 32-bit integers with scaling factors set by input parameters.
  Project element: [SWS_Mfx_00158] & [SWS_Mfx_00159] & [SWS_Mfx_00160] & [SWS_Mfx_00161] & [SWS_Mfx_00162 Function ID[0x1BB] & [0x1C0]]
*/

sint32 Mfx_AddP2_s32s32_s32(sint32 x, sint32 y, sint32 a, sint32 b, sint32 c)
{
	sint64 tmp;
	if (a >= b)
	{
		if (((a - b) > 31) || ((c - b) > 31) || ((a - c) > 31))
		{
			tmp = MAX32;
		}
		else
		{
			tmp = (1 << (a - b)) * y + x;
			if (c >= a)
			{
				tmp = (tmp << (c - a));
			}
			else
			{
				tmp = (tmp >> (a - c));
			}
		}
	}
	else
	{
		if (((b - a) > 31) || ((c - a) > 31) || ((b - c) > 31))
		{
			tmp = MAX32;
		}
		else
		{
			tmp = (1 << (b - a)) * x + y;
			if (c >= b)
			{
				tmp = (tmp << (c - b));
			}
			else
			{
				tmp = (tmp >> (b - c));
			}
		}
	}
	if (tmp >= MAX32)
	{
		tmp = MAX32;
	}
	else if (tmp <= MIN32)
	{
		tmp = MIN32;
	}
	return (sint32)tmp;
}

uint32 Mfx_AddP2_u32u32_u32(uint32 x, uint32 y, sint32 a, sint32 b, sint32 c)
{
	uint64 tmp;
	if (a >= b)
	{
		if (((a - b) > 31) || ((c - b) > 31) || ((a - c) > 31))
		{
			tmp = UMAX32;
		}
		else
		{
			tmp = (1 << (a - b)) * y + x;
			if (c >= a)
			{
				tmp = (tmp << (c - a));
			}
			else
			{
				tmp = (tmp >> (a - c));
			}
		}
	}
	else
	{
		if (((b - a) > 31) || ((c - a) > 31) || ((b - c) > 31))
		{
			tmp = UMAX32;
		}
		else
		{
			tmp = (1 << (b - a)) * x + y;
			if (c >= b)
			{
				tmp = (uint16)(tmp << (c - b));
			}
			else
			{
				tmp = (uint16)(tmp >> (b - c));
			}
		}
	}
	if (tmp >= UMAX32)
	{
		tmp = UMAX32;
	}
	else if (tmp <= UMIN32)
	{
		tmp = UMIN32;
	}
	return (uint32)tmp;
}

/**
  @brief Subtraction: 16-Bit Subtraction of 2n Scaled Integer

  The routine subtracts two 16-bit integers with scaling factors set by input parameters.
  Project element: [SWS_Mfx_00164] & [SWS_Mfx_00165] & [SWS_Mfx_00166] & [SWS_Mfx_00167] & [SWS_Mfx_00168 Function ID[0x1C1] & [0x1C8]]
*/

sint16 Mfx_SubP2_s16s16_s16(sint16 x, sint16 y, sint16 a, sint16 b, sint16 c)
{
	sint32 tmp;
	if (a >= b)
	{
		if (((a - b) > 15) || ((c - b) > 15) || ((a - c) > 15))
		{
			tmp = MAX16;
		}
		else
		{
			tmp = (1 << (a - b)) * y - x;
			if (c >= a)
			{
				tmp = (tmp << (c - a));
			}
			else
			{
				tmp = (tmp >> (a - c));
			}
		}
	}
	else
	{
		if (((b - a) > 15) || ((c - a) > 15) || ((b - c) > 15))
		{
			tmp = MAX16;
		}
		else
		{
			tmp = (1 << (b - a)) * x - y;
			if (c >= b)
			{
				tmp = (tmp << (c - b));
			}
			else
			{
				tmp = (tmp >> (b - c));
			}
		}
	}
	if (tmp >= MAX16)
	{
		tmp = MAX16;
	}
	else if (tmp <= MIN16)
	{
		tmp = MIN16;
	}
	return (sint16)tmp;
}

uint16 Mfx_SubP2_u16u16_u16(uint16 x, uint16 y, sint16 a, sint16 b, sint16 c)
{
	uint32 tmp;
	if (a >= b)
	{
		if (((a - b) > 15) || ((c - b) > 15) || ((a - c) > 15))
		{
			tmp = UMAX16;
		}
		else
		{
			tmp = (1 << (a - b)) * y - x;
			if (c >= a)
			{
				tmp = (tmp << (c - a));
			}
			else
			{
				tmp = (tmp >> (a - c));
			}
		}
	}
	else
	{
		if (((b - a) > 15) || ((c - a) > 15) || ((b - c) > 15))
		{
			tmp = UMAX16;
		}
		else
		{
			tmp = (1 << (b - a)) * x - y;
			if (c >= b)
			{
				tmp = (tmp << (c - b));
			}
			else
			{
				tmp = (tmp >> (b - c));
			}
		}
	}
	if (tmp >= UMAX16)
	{
		tmp = UMAX16;
	}
	else if (tmp <= UMIN16)
	{
		tmp = UMIN16;
	}
	return (uint16)tmp;
}

/**
  @brief Subtraction: 32-Bit Subtraction of 2n Scaled Integer

  The routine subtracts two 32-bit integers with scaling factors set by input parameters.
  Project element: [SWS_Mfx_00170] & [SWS_Mfx_00171] & [SWS_Mfx_00172] & [SWS_Mfx_00173] & [SWS_Mfx_00174 Function ID[0x1C9] & [0x1D0]]
*/

sint32 Mfx_SubP2_s32s32_s32(sint32 x, sint32 y, sint32 a, sint32 b, sint32 c)
{
	sint64 tmp;
	if (a >= b)
	{
		if (((a - b) > 31) || ((c - b) > 31) || ((a - c) > 31))
		{
			tmp = MAX32;
		}
		else
		{
			tmp = (1 << (a - b)) * y - x;
			if (c >= a)
			{
				tmp = (tmp << (c - a));
			}
			else
			{
				tmp = (tmp >> (a - c));
			}
		}
	}
	else
	{
		if (((b - a) > 31) || ((c - a) > 31) || ((b - c) > 31))
		{
			tmp = MAX32;
		}
		else
		{
			tmp = (1 << (b - a)) * x - y;
			if (c >= b)
			{
				tmp = (tmp << (c - b));
			}
			else
			{
				tmp = (tmp >> (b - c));
			}
		}
	}
	if (tmp >= MAX32)
	{
		tmp = MAX32;
	}
	else if (tmp <= MIN32)
	{
		tmp = MIN32;
	}
	return (sint32)tmp;
}

uint32 Mfx_SubP2_u32u32_u32(uint32 x, uint32 y, sint32 a, sint32 b, sint32 c)
{
	uint64 tmp;
	if (a >= b)
	{
		if (((a - b) > 31) || ((c - b) > 31) || ((a - c) > 31))
		{
			tmp = UMAX32;
		}
		else
		{
			tmp = (1 << (a - b)) * y - x;
			if (c >= a)
			{
				tmp = (tmp << (c - a));
			}
			else
			{
				tmp = (tmp >> (a - c));
			}
		}
	}
	else
	{
		if (((b - a) > 31) || ((c - a) > 31) || ((b - c) > 31))
		{
			tmp = UMAX32;
		}
		else
		{
			tmp = (1 << (b - a)) * x - y;
			if (c >= b)
			{
				tmp = (uint16)(tmp << (c - b));
			}
			else
			{
				tmp = (uint16)(tmp >> (b - c));
			}
		}
	}
	if (tmp >= UMAX32)
	{
		tmp = UMAX32;
	}
	else if (tmp <= UMIN32)
	{
		tmp = UMIN32;
	}
	return (uint32)tmp;
}

/**
  @brief Absolute Difference of 2n Scaled Integer

  The routine subtracts and takes the absolute value of two 16-bit integers with scaling factors set by input parameters.
  Project element: [SWS_Mfx_00176] & [SWS_Mfx_00177] & [SWS_Mfx_00178] & [SWS_Mfx_00179] & [SWS_Mfx_00180 Function ID[0x1D1] & [0x1D6]]
*/

sint16 Mfx_AbsDiffP2_s16s16_s16(sint16 x, sint16 y, sint16 a, sint16 b, sint16 c)
{
	sint32 tmp;
	if (a >= b)
	{
		if (((a - b) > 15) || ((c - b) > 15) || ((a - c) > 15))
		{
			tmp = MAX16;
		}
		else
		{
			tmp = Mfx_AbsDiff_s32s32_s32((1 << (a - b)) * y, x);
			if (c >= a)
			{
				tmp = (tmp << (c - a));
			}
			else
			{
				tmp = (tmp >> (a - c));
			}
		}
	}
	else
	{
		if (((b - a) > 15) || ((c - a) > 15) || ((b - c) > 15))
		{
			tmp = MAX16;
		}
		else
		{
			tmp = Mfx_AbsDiff_s32s32_s32((1 << (a - b)) * y, x);
			if (c >= b)
			{
				tmp = (tmp << (c - b));
			}
			else
			{
				tmp = (tmp >> (b - c));
			}
		}
	}
	if (tmp >= MAX16)
	{
		tmp = MAX16;
	}
	else if (tmp <= MIN16)
	{
		tmp = MIN16;
	}
	return (sint16)tmp;
}

uint16 Mfx_AbsDiffP2_u16u16_u16(uint16 x, uint16 y, sint16 a, sint16 b, sint16 c)
{
	uint32 tmp;
	if (a >= b)
	{
		if (((a - b) > 15) || ((c - b) > 15) || ((a - c) > 15))
		{
			tmp = UMAX16;
		}
		else
		{
			tmp = Mfx_AbsDiff_u32u32_u32((1 << (a - b)) * y, x);
			if (c >= a)
			{
				tmp = (tmp << (c - a));
			}
			else
			{
				tmp = (tmp >> (a - c));
			}
		}
	}
	else
	{
		if (((b - a) > 15) || ((c - a) > 15) || ((b - c) > 15))
		{
			tmp = UMAX16;
		}
		else
		{
			tmp = Mfx_AbsDiff_u32u32_u32((1 << (a - b)) * y, x);
			if (c >= b)
			{
				tmp = (tmp << (c - b));
			}
			else
			{
				tmp = (tmp >> (b - c));
			}
		}
	}
	if (tmp >= UMAX16)
	{
		tmp = UMAX16;
	}
	else if (tmp <= UMIN16)
	{
		tmp = UMIN16;
	}
	return (uint16)tmp;
}

/**
  @brief Absolute Value: 16-Bit Absolute Value of 2n Scaled Integer

  The routine takes the absolute value of a 16-bit integer with scaling factors set by input parameters.
  Project element: [SWS_Mfx_00182] & [SWS_Mfx_00183] & [SWS_Mfx_00184] & [SWS_Mfx_00185] & [SWS_Mfx_00186 Function ID[0x1D7] & [0x1D8]]
*/

sint16 Mfx_AbsP2_s16_s16(sint16 x, sint16 a, sint16 c)
{
	sint32 tmp;
	if ((c - a) < -15)
	{
		tmp = MIN16;
	}
	else if ((c - a) > 15)
	{
		tmp = MAX16;
	}
	else
	{
		tmp = (sint32)Mfx_Abs_s16_s16(x);
		if (c - a >= 0)
		{
			tmp = (tmp << (c - a));
		}
		else
		{
			tmp = (tmp >> (a - c));
		}
	}

	if (tmp >= MAX16)
	{
		tmp = MAX16;
	}
	else if (tmp <= MIN16)
	{
		tmp = MIN16;
	}
	return (sint16)tmp;
}

uint16 Mfx_AbsP2_s16_u16(sint16 x, sint16 a, sint16 c)
{
	uint32 tmp;
	if ((c - a) < -15)
	{
		tmp = UMIN16;
	}
	else if ((c - a) > 15)
	{
		tmp = UMAX16;
	}
	else
	{
		tmp = (uint32)Mfx_Abs_s16_s16(x);
		if (c - a >= 0)
		{
			tmp = (tmp << (c - a));
		}
		else
		{
			tmp = (tmp >> (a - c));
		}
	}

	if (tmp >= UMAX16)
	{
		tmp = UMAX16;
	}
	else if (tmp <= UMIN16)
	{
		tmp = UMIN16;
	}
	return (uint16)tmp;
}

/**
  @brief Absolute Value: 32-Bit Absolute Value of 2n Scaled Integer

  The routine takes the absolute value of a 32-bit integer with scaling factors set by input parameters.
  Project element: [SWS_Mfx_00188] & [SWS_Mfx_00189] & [SWS_Mfx_00190] & [SWS_Mfx_00191] & [SWS_Mfx_00192 Function ID[0x1D9] & [0x1DA]]
*/

sint32 Mfx_AbsP2_s32_s32(sint32 x, sint16 a, sint16 c)
{
	sint64 tmp;
	if ((c - a) < -31)
	{
		tmp = MIN32;
	}
	else if ((c - a) > 31)
	{
		tmp = MAX32;
	}
	else
	{
		tmp = (sint64)Mfx_Abs_s32_s32(x);
		if (c - a >= 0)
		{
			tmp = (tmp << (c - a));
		}
		else
		{
			tmp = (tmp >> (a - c));
		}
	}

	if (tmp >= MAX32)
	{
		tmp = MAX32;
	}
	else if (tmp <= MIN32)
	{
		tmp = MIN32;
	}
	return (sint32)tmp;
}

uint32 Mfx_AbsP2_s32_u32(sint32 x, sint16 a, sint16 c)
{
	uint64 tmp;
	if ((c - a) < -31)
	{
		tmp = UMIN32;
	}
	else if ((c - a) > 31)
	{
		tmp = UMAX32;
	}
	else
	{
		tmp = (uint32)Mfx_Abs_s32_s32(x);
		if (c - a >= 0)
		{
			tmp = (tmp << (c - a));
		}
		else
		{
			tmp = (tmp >> (a - c));
		}
	}

	if (tmp >= UMAX32)
	{
		tmp = UMAX32;
	}
	else if (tmp <= UMIN32)
	{
		tmp = UMIN32;
	}
	return (uint32)tmp;
}


