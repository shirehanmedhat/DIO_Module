/******************************************************************
					Author  : Shirehan Medhat Abdeldsalam Ali
					Date    : 26-1-2023
					Driver  : DIO
					Version : (1)
*****************************************************************/
//#include <avr/io.h>
#define F_CPU 1000000UL
#include <util/delay.h>
#include "DIO.h"
int main(void)
{
    /* Replace with your application code */
	/*Set PA1 , PB1 as outputs*/
	
	DIO_enumSetPinConfig (PORTA_Choice , PIN1 , OUTPUT);
	DIO_enumSetPinConfig (PORTB_Choice , PIN1 , OUTPUT);
	
    while (1) 
    {
		/*LED PA1 is on for 1000ms*/
		DIO_enumSetPin (PORTA_Choice , PIN1 , HIGH);
		_delay_ms(1000); 
		DIO_enumSetPin (PORTA_Choice , PIN1 , LOW);		
	    DIO_enumSetPin (PORTB_Choice , PIN1 , HIGH);
		_delay_ms(1000);
		DIO_enumSetPin (PORTA_Choice , PIN1 , LOW);
    }
}