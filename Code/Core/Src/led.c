/*
 * led.c
 *
 *  Created on: Dec 11, 2023
 *      Author: hamel
 */

#include "led.h"

void led1Init(){HAL_TIM_PWM_Start(&htim10,TIM_CHANNEL_1);}
void led2Init(){HAL_TIM_PWM_Start(&htim11,TIM_CHANNEL_1);}
void led3Init(){HAL_TIM_PWM_Start(&htim4,TIM_CHANNEL_2);}

void led1SetPWM(const uint8_t pourcentage)
{
	if (pourcentage <  100) {__HAL_TIM_SetCompare(&htim10, TIM_CHANNEL_1,pourcentage*65535/100);}
	else  {__HAL_TIM_SetCompare(&htim10, TIM_CHANNEL_1,65535);}
}

void led2SetPWM(const uint8_t pourcentage)
{
	if (pourcentage <  100) {__HAL_TIM_SetCompare(&htim11, TIM_CHANNEL_1,pourcentage*65535/100);}
	else  {__HAL_TIM_SetCompare(&htim11, TIM_CHANNEL_1,65535);}
}

void led3SetPWM(const uint8_t pourcentage)
{
	if (pourcentage <  100) {__HAL_TIM_SetCompare(&htim4, TIM_CHANNEL_2,pourcentage*65535/100);}
	else  {__HAL_TIM_SetCompare(&htim4, TIM_CHANNEL_2,65535);}
}


