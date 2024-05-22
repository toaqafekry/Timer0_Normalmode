/*
 * main.c
 *
 *  Created on: Apr 5, 2024
 *      Author: Toa Fekry
 */




#include "MCAL/DIO/Header/DIO_Interface.h"
#include "HAL/LED/Header/Led_Interface.h"
#include "MCAL/TimerOne/Header/TimeOne_Interface.h"

void Action();
void main()
{

   /*Enable Global Interrupt*/
    GIE_Enable();
    /*Call Back FN*/
	Timer_CallBack(Action);
	/*Timer0 NormalMode*/
	Timer0_Init();
}

void Action()
{

	Led_Toggle(DIO_GroupC,Led1);

}











