#ifndef MFX_H
#define MFX_H

/**===================================================================================================================*\
  @file Mfx.c

  @brief Library Mfx - implementation

  Implementation of Fixed Point Math Routines

  @see AUTOSAR_SWS_MFXLibrary.pdf
\*====================================================================================================================*/

/*====================================================================================================================*\
    Załączenie nagłówków
\*====================================================================================================================*/

/*====================================================================================================================*\
    Makra globalne
\*====================================================================================================================*/


/*====================================================================================================================*\
    Typy globalne
\*====================================================================================================================*/


/*====================================================================================================================*\
    Eksport zmiennych globalnych
\*====================================================================================================================*/


/*====================================================================================================================*\
    Deklaracje funkcji globalnych
\*====================================================================================================================*/

sint16 Mfx_Add_s16s16_s16(sint16 x_value, sint16 y_value);
sint32 Mfx_Add_s32s32_s32(sint32 x_value, sint32 y_value);
sint16 Mfx_Sub_s16s16_s16(sint16 x_value, sint16 y_value);
sint32 Mfx_Sub_s32s32_s32(sint32 x_value, sint32 y_value);
sint16 Mfx_Abs_s16_s16(sint16 x_value);
sint32 Mfx_Abs_s32_s32(sint32 x_value);
sint16 Mfx_AbsDiff_s16s16_s16(sint16 x_value, sint16 y_value);
sint32 Mfx_AbsDiff_s32s32_s32(sint32 x_value, sint32 y_value);
uint32 Mfx_AbsDiff_u32u32_u32(uint32 x_value, uint32 y_value);
sint16 Mfx_Mul_s16s16_s16(sint16 x_value, sint16 y_value);
sint32 Mfx_Mul_s32s32_s32(sint32 x_value, sint32 y_value);
sint16 Mfx_Div_s16s16_s16(sint16 x_value, sint16 y_value);
sint32 Mfx_Div_s32s32_s32(sint32 x_value, sint32 y_value);
sint16 Mfx_RDiv_s16s16_s16(sint16 x_value, sint16 y_value);
sint32 Mfx_RDiv_s32s32_s32(sint32 x_value, sint32 y_value;
sint16 Mfx_MulDiv_s16s16s16_s16(sint16 x_value, sint16 y_value, sint16 z_value);
sint32 Mfx_MulDiv_s32s32s32_s32(sint32 x_value, sint32 y_value, sint32 z_value);
sint16 Mfx_RMulDiv_s16s16s16_s16(sint16 x_value, sint16 y_value, sint16 z_value);
sint32 Mfx_RMulDiv_s32s32s32_s32(sint32 x_value, sint32 y_value, sint32 z_value);
sint16 Mfx_MulShRight_s16s16u8_s16(sint16 x_value, sint16 y_value, uint8 shift);
sint32 Mfx_MulShRight_s32s32u8_s32(sint32 x_value, sint32 y_value, uint8 shift);
sint16 Mfx_DivShLeft_s16s16u8_s16(sint16 x_value, sint16 y_value, uint8 shift);
sint32 Mfx_DivShLeft_s32s32u8_s32(sint32 x_value, sint32 y_value, uint8 shift);
sint16 Mfx_Mod_s16(sint16 x_value, sint16 y_value);
sint32 Mfx_Mod_s32(sint32 x_value, sint32 y_value);
sint16 Mfx_Limit_s16(sint16 value, sint16 min_value, sint16 max_value);
sint32 Mfx_Limit_s32(sint32 value, sint32 min_value, sint32 max_value);
sint16 Mfx_Minmax_s16(sint16 value, sint16 minmax_value);
sint32 Mfx_Minmax_s32(sint32 value, sint32 minmax_value);
sint16 Mfx_Min_s16(sint16 x_value, sint16 y_value);
sint32 Mfx_Min_s32(sint32 x_value, sint32 y_value);
sint16 Mfx_Max_s16(sint16 x_value, sint16 y_value);
sint32 Mfx_Max_s32(sint32 x_value, sint32 y_value);
sint8 Mfx_ConvertP2_s16_s8(sint16 x, sint16 a, sint16 c);
uint8 Mfx_ConvertP2_u16_u8(uint16 x, uint16 a, uint16 c);
sint16 Mfx_ConvertP2_s8_s16(sint8 x, sint16 a, sint16 c);
uint16 Mfx_ConvertP2_u8_u16(uint8 x, uint16 a, uint16 c);
sint16 Mfx_ConvertP2_s32_s16(sint32 x, sint16 a, sint16 c);
uint16 Mfx_ConvertP2_u32_u16(uint32 x, uint16 a, uint16 c);
sint32 Mfx_ConvertP2_s16_s32(sint16 x, sint16 a, sint16 c);
uint32 Mfx_ConvertP2_u16_u32(uint16 x, uint16 a, uint16 c);
sint16 Mfx_MulP2_s16s16_s16(sint16 x, sint16 y, sint16 a, sint16 b, sint16 c);
uint16 Mfx_MulP2_u16u16_u16(uint16 x, uint16 y, sint16 a, sint16 b, sint16 c);
sint32 Mfx_MulP2_s32s32_s32(sint32 x, sint32 y, sint16 a, sint16 b, sint16 c);
uint32 Mfx_MulP2_u32u32_u32(uint32 x, uint32 y, sint16 a, sint16 b, sint16 c);
sint16 Mfx_DivP2_s16s16_s16(sint16 x, sint16 y, sint16 a, sint16 b, sint16 c);
uint16 Mfx_DivP2_u16u16_u16(uint16 x, uint16 y, sint16 a, sint16 b, sint16 c);
sint32 Mfx_DivP2_s32s32_s32(sint32 x, sint32 y, sint16 a, sint16 b, sint16 c);
uint32 Mfx_DivP2_u32u32_u32(uint32 x, uint32 y, sint16 a, sint16 b, sint16 c);
sint16 Mfx_AddP2_s16s16_s16(sint16 x, sint16 y, sint16 a, sint16 b, sint16 c);
uint16 Mfx_AddP2_u16u16_u16(uint16 x, uint16 y, sint16 a, sint16 b, sint16 c);
sint32 Mfx_AddP2_s32s32_s32(sint32 x, sint32 y, sint32 a, sint32 b, sint32 c);
uint32 Mfx_AddP2_u32u32_u32(uint32 x, uint32 y, sint32 a, sint32 b, sint32 c);
sint16 Mfx_SubP2_s16s16_s16(sint16 x, sint16 y, sint16 a, sint16 b, sint16 c);
uint16 Mfx_SubP2_u16u16_u16(uint16 x, uint16 y, sint16 a, sint16 b, sint16 c);
sint32 Mfx_SubP2_s32s32_s32(sint32 x, sint32 y, sint32 a, sint32 b, sint32 c);
uint32 Mfx_SubP2_u32u32_u32(uint32 x, uint32 y, sint32 a, sint32 b, sint32 c);
sint16 Mfx_AbsDiffP2_s16s16_s16(sint16 x, sint16 y, sint16 a, sint16 b, sint16 c);
uint16 Mfx_AbsDiffP2_u16u16_u16(uint16 x, uint16 y, sint16 a, sint16 b, sint16 c);
sint16 Mfx_AbsP2_s16_s16(sint16 x, sint16 a, sint16 c);
uint16 Mfx_AbsP2_s16_u16(sint16 x, sint16 a, sint16 c);
sint32 Mfx_AbsP2_s32_s32(sint32 x, sint16 a, sint16 c);
uint32 Mfx_AbsP2_s32_u32(sint32 x, sint16 a, sint16 c);


#endif /* LIB_CALC_H */
