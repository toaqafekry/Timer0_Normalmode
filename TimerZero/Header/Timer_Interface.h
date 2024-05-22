/*
 * Timer_Interface.h
 *
 *  Created on: May 18, 2024
 *      Author: Toa Fekry
 */

#ifndef MCAL_TIMERZERO_HEADER_TIMER_INTERFACE_H_
#define MCAL_TIMERZERO_HEADER_TIMER_INTERFACE_H_

#include "../../TimerZero/Header/Timer_Config.h"
#include "../../TimerZero/Header/Timer_Private.h"
#include "../../TimerZero/Header/Timer_Register.h"

/*Timer0*/
void Timer0_Init();
/*CompareMatch*/
void CompareMatch_Init();
/*CallBack*/
void Timer_CallBack (void(*PF)(void));
/*ISR Normal Mode*/
void __vector_11() __attribute__((signal));


#endif /* MCAL_TIMERZERO_HEADER_TIMER_INTERFACE_H_ */
