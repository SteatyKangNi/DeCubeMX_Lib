#ifndef __RCC_H
#define __RCC_H

#include "stdint.h"
#include "stm32f4xx_hal_conf.h"

#if HSE_VALUE == 25000000U
#define HSE_VALUE = 8000000U
#endif 

#define PLL_Disable_Parameter 0


typedef enum
{
	OSC_HSE = 0,
	OSC_HSI
}High_Speed_OSC_enum; 

typedef enum
{
	OSC_LSE = 0,
	OSC_LSI
}Low_Speed_OSC_enum;

typedef enum
{
	CLK_HSE = 0,
	CLK_HSI,
	PLL
}Sys_Clk_enum;


#endif