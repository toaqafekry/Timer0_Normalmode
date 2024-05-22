/*
 * Timer_Register.h
 *
 *  Created on: May 18, 2024
 *      Author: Toa Fekry
 */

#ifndef MCAL_TIMERZERO_HEADER_TIMER_REGISTER_H_
#define MCAL_TIMERZERO_HEADER_TIMER_REGISTER_H_

#include "../../../Common/Stdtype.h"

/*Timer0*/
/*TCCR0*/
#define Timer0_TCCR0  *((volatile u8*)0x53)

/*TCNT0*/
#define Timer0_TCNT0  *((volatile u8*)0x52)

/*OCR0*/
#define Compare_OCR0  *((volatile u8*)0x5C)

/*TIMSK*/
#define TimerInerrupt_TIMSK *((volatile u8 *)0x59)

/*TIFR*/
#define TimerInerruptF_TIFR *((volatile u8 *)0x58)

#endif /* MCAL_TIMERZERO_HEADER_TIMER_REGISTER_H_ */
