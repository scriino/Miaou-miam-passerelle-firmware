/*
 * led.h
 *
 *  Created on: Dec 11, 2023
 *      Author: hamel
 */

#ifndef INC_LED_H_
#define INC_LED_H_

#include "main.h"
#include "tim.h"

void led1Init();
void led2Init();
void led3Init();

void led1SetPWM(const uint8_t pourcentage);
void led2SetPWM(const uint8_t pourcentage);
void led3SetPWM(const uint8_t pourcentage);

#endif /* INC_LED_H_ */
