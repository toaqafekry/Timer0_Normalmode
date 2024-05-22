/*
 * Timer_Private.h
 *
 *  Created on: May 18, 2024
 *      Author: Toa Fekry
 */

#ifndef MCAL_TIMERZERO_HEADER_TIMER_PRIVATE_H_
#define MCAL_TIMERZERO_HEADER_TIMER_PRIVATE_H_

/*Timer0*/
/*TCCR0*/
#define FOC0  7
#define WGM00 6
#define COM01 5
#define COM00 4
#define WGM01 3
#define CS02  2
#define CS01  1
#define CS00  0

/*TIMSK*/
#define TOIE0 0
#define OCIE0 1

/*TIFR*/
#define TOV0  0
#define OCF0  1

#endif /* MCAL_TIMERZERO_HEADER_TIMER_PRIVATE_H_ */
