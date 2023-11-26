#include "DIO.h"
#define F_CPU 1000000UL
#include <util/delay.h>


int main(void)
{
	DIO_enumLogicState_t read = HIGH  , test =0;
	/* Replace with your application code */
	/*Set PA0, PA1 , PA2 , PA3 as outputs*/
	DIO_enumSetPinConfig (PORTA_Choice , PIN0 , OUTPUT);
	DIO_enumSetPinConfig (PORTA_Choice , PIN1 , OUTPUT);
	DIO_enumSetPinConfig (PORTA_Choice , PIN2 , OUTPUT);
	DIO_enumSetPinConfig (PORTA_Choice , PIN3 , OUTPUT);
	/*Set PB1 as an input*/
	DIO_enumSetPinConfig (PORTB_Choice , PIN1  , INPUT_PULLUP);
		u8  counter =0;
		while (1)
		{
			    DIO_enumReadState (PORTB_Choice , PIN1 , &read);

			/*READ the switch*/
			if (!read)
			{
				/*Delay to hang the cpu for 150 ms*/
				_delay_ms(250);
				/*reread to check if it's a real press*/
				if (!read)
				{
					if (counter==16) counter=0;
					counter++;
					PORTA = counter;
					
					
				}			
			}
		}
	}




