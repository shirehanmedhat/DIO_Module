/*
* DIO.c
*
* Created: 11/26/2023 6:03:17 PM
*  Author: NoteBook
*/

#include "DIO.h"

DIO_enumError_t DIO_enumSetPinConfig(DIO_enumPorts_t Copy_enumPortNum,DIO_enumPins_t Copy_enumPinNum,DIO_enumConfig_t Copy_enumConfig)
{
	DIO_enumError_t DIO_ErrorState = NOK;
	
	if (  ( ( (Copy_enumPortNum >= PORTA_Choice ) && (Copy_enumPortNum <= PORTD_Choice) )  && ( ( Copy_enumPinNum >= PIN0 )  && (Copy_enumPinNum <= PIN7 ) ) ))
	{
		DIO_ErrorState = OK;
		switch (Copy_enumPortNum)
		{
			case PORTA_Choice:
			switch (Copy_enumConfig)
			{
				case OUTPUT:
				Set_Bit (DDRA , Copy_enumPinNum);
				break;
				case INPUT_PULLUP:
				Clr_Bit (DDRA , Copy_enumPinNum);
				Set_Bit (PORTA , Copy_enumPinNum);
				break;
				case INPUT_PULLDOWN:
				Clr_Bit (DDRA , Copy_enumPinNum);
				Clr_Bit (PORTA , Copy_enumPinNum);
				break;
				default:
				break;
			}
			break;
			
			case PORTB_Choice:
			switch (Copy_enumConfig)
			{
				case OUTPUT:
				Set_Bit (DDRB , Copy_enumPinNum);
				break;
				case INPUT_PULLUP:
				Clr_Bit (DDRB , Copy_enumPinNum);
				Set_Bit (PORTB , Copy_enumPinNum);
				break;
				case INPUT_PULLDOWN:
				Clr_Bit (DDRB , Copy_enumPinNum);
				Clr_Bit (PORTB , Copy_enumPinNum);
				break;
				default:
				break;
			}
			break;
			case PORTC_Choice:
			switch (Copy_enumConfig)
			{
				case OUTPUT:
				Set_Bit (DDRC , Copy_enumPinNum);
				break;
				case INPUT_PULLUP:
				Clr_Bit (DDRC , Copy_enumPinNum);
				Set_Bit (PORTC , Copy_enumPinNum);
				break;
				case INPUT_PULLDOWN:
				Clr_Bit (DDRC , Copy_enumPinNum);
				Clr_Bit (PORTC , Copy_enumPinNum);
				break;
				default:
				break;
			}
			break;
			case PORTD_Choice:
			switch (Copy_enumConfig)
			{
				case OUTPUT:
				Set_Bit (DDRD , Copy_enumPinNum);
				break;
				case INPUT_PULLUP:
				Clr_Bit (DDRD , Copy_enumPinNum);
				Set_Bit (PORTD , Copy_enumPinNum);
				break;
				case INPUT_PULLDOWN:
				Clr_Bit (DDRD , Copy_enumPinNum);
				Clr_Bit (PORTD , Copy_enumPinNum);
				break;
				default:
				break;
			}
			break;
			default:
			break;
			
		}
		
	}
	
	return DIO_ErrorState;
}




DIO_enumError_t DIO_enumSetPortConfig(DIO_enumPorts_t Copy_enumPortNum,DIO_enumConfig_t Copy_enumConfig)
{
	DIO_enumError_t DIO_ErrorState = NOK;
	
	if ( ( (Copy_enumPortNum >= PORTA_Choice ) && (Copy_enumPortNum <= PORTD_Choice) ) )
	{
		DIO_ErrorState = OK;
		switch (Copy_enumPortNum)
		{
			case PORTA_Choice:
			switch (Copy_enumConfig)
			{
				case OUTPUT:
				DDRA = 0xff;
				break;
				case INPUT_PULLUP:
				DDRA =0x00;
				PORTA =0xff;
				break;
				case INPUT_PULLDOWN:
				DDRA = 0x00;
				PORTA = 0x00;
				break;
				default:
				break;
			}
			break;
			case PORTB_Choice:
			switch (Copy_enumConfig)
			{
				case OUTPUT:
				DDRB = 0xff;
				break;
				case INPUT_PULLUP:
				DDRB =0x00;
				PORTB =0xff;
				break;
				case INPUT_PULLDOWN:
				DDRB = 0x00;
				PORTB = 0x00;
				break;
				default:
				break;
			}
			break;
			case PORTC_Choice:
			switch (Copy_enumConfig)
			{
				case OUTPUT:
				DDRC = 0xff;
				break;
				case INPUT_PULLUP:
				DDRC =0x00;
				PORTC =0xff;
				break;
				case INPUT_PULLDOWN:
				DDRC = 0x00;
				PORTC = 0x00;
				break;
				default:
				break;
			}
			break;
			case PORTD_Choice:
			switch (Copy_enumConfig)
			{
				case OUTPUT:
				DDRD = 0xff;
				break;
				case INPUT_PULLUP:
				DDRD =0x00;
				PORTD =0xff;
				break;
				case INPUT_PULLDOWN:
				DDRD = 0x00;
				PORTD = 0x00;
				break;
				default:
				break;
			}
			break;
			default:
			break;
			
			
		}
		
	}
	
	return DIO_ErrorState;
	
}

DIO_enumError_t DIO_enumSetPin(DIO_enumPorts_t Copy_enumPortNum,DIO_enumPins_t Copy_enumPinNum,DIO_enumLogicState_t Copy_enumLogicState)
{
	DIO_enumError_t DIO_ErrorState = NOK;
	
	if ( ( (Copy_enumPortNum >= PORTA_Choice ) && (Copy_enumPortNum <= PORTD_Choice) ) )
	{
		DIO_ErrorState = OK;
		switch (Copy_enumPortNum)
		{
			case PORTA_Choice:
			switch (Copy_enumLogicState)
			{
				case LOW:
				Clr_Bit(PORTA , Copy_enumPinNum);
				break;
				case HIGH:
				Set_Bit (PORTA , Copy_enumPinNum);
				break;
				default:
				break;
			}
			break;
			case PORTB_Choice:
			switch (Copy_enumLogicState)
			{
				case LOW:
				Clr_Bit(PORTB, Copy_enumPinNum);
				break;
				case HIGH:
				Set_Bit (PORTB , Copy_enumPinNum);
				break;
				default:
				break;
			}
			break;
			case PORTC_Choice:
			switch (Copy_enumLogicState)
			{
				case LOW:
				Clr_Bit(PORTC, Copy_enumPinNum);
				break;
				case HIGH:
				Set_Bit (PORTC , Copy_enumPinNum);
				break;
				default:
				break;
			}
			break;
			case PORTD_Choice:
			switch (Copy_enumLogicState)
			{
				case LOW:
				Clr_Bit(PORTD, Copy_enumPinNum);
				break;
				case HIGH:
				Set_Bit (PORTD , Copy_enumPinNum);
				break;
				default:
				break;
			}
			break;
			default:
			break;
			
		}
	}
	
	return DIO_ErrorState;
}

DIO_enumError_t DIO_enumSetPort(DIO_enumPorts_t Copy_enumPortNum,DIO_enumLogicState_t Copy_enumLogicState)
{
	DIO_enumError_t DIO_ErrorState = NOK;
	
	if ( ( (Copy_enumPortNum >= PORTA_Choice ) && (Copy_enumPortNum <= PORTD_Choice) ) )
	{
		DIO_ErrorState = OK;
		
		switch (Copy_enumPortNum)
		{
			case PORTA_Choice:
			switch (Copy_enumLogicState)
			{
				case LOW:
				PORTA = 0x00;
				break;
				case HIGH:
				PORTA = 0xff;
				break;
				default:
				break;
			}
			break;
			
			case PORTB_Choice:
			switch (Copy_enumLogicState)
			{
				case LOW:
				PORTB = 0x00;
				break;
				case HIGH:
				PORTB = 0xff;
				break;
				default:
				break;
			}
			break;
			
			switch (Copy_enumLogicState)
			{
				case LOW:
				PORTC = 0x00;
				break;
				case HIGH:
				PORTC = 0xff;
				break;
				default:
				break;
			}
			break;
			
			switch (Copy_enumLogicState)
			{
				case LOW:
				PORTD = 0x00;
				break;
				case HIGH:
				PORTD = 0xff;
				break;
				default:
				break;
			}
			break;
			default:
			break;
		}
		
	}
	
	return DIO_ErrorState;
}


DIO_enumError_t DIO_enumReadState(DIO_enumPorts_t Copy_enumPortNum,DIO_enumPins_t Copy_enumPinNum,DIO_enumLogicState_t* Add_Pu8PinValue)
{
	DIO_enumError_t DIO_ErrorState = NOK;
	
	if (  ( ( (Copy_enumPortNum >= PORTA_Choice ) && (Copy_enumPortNum <= PORTD_Choice) )  && ( ( Copy_enumPinNum >= PIN0 )  && (Copy_enumPinNum <= PIN7 ) ) ))
	{
		DIO_ErrorState = OK;
		switch (Copy_enumPortNum)
		{
			case PORTA_Choice:
			*Add_Pu8PinValue = Get_Bit (PORTA , Copy_enumPinNum);
			break;
			case PORTB_Choice:
			*Add_Pu8PinValue = Get_Bit (PORTB , Copy_enumPinNum);
			break;
			case PORTC_Choice:
			*Add_Pu8PinValue = Get_Bit (PORTC , Copy_enumPinNum);
			break;
			case PORTD_Choice:
			*Add_Pu8PinValue = Get_Bit (PORTD , Copy_enumPinNum);
			break;
			default:
			break;
			
		}
		
		
	}
	return DIO_ErrorState;
}

DIO_enumError_t DIO_enumReadPortState(DIO_enumPorts_t Copy_enumPortNum , u8* Add_Pu8PortValue)
{
	DIO_enumError_t DIO_ErrorState = NOK;
	if ( ( (Copy_enumPortNum >= PORTA_Choice ) && (Copy_enumPortNum <= PORTD_Choice) ) )
	{
		DIO_ErrorState = OK;
		switch (Copy_enumPortNum)
		{
			case PORTA_Choice:
			*Add_Pu8PortValue = PORTA;
			break;
			case PORTB_Choice:
			*Add_Pu8PortValue = PORTB;
			break;
			case PORTC_Choice:
			*Add_Pu8PortValue = PORTC;
			break;
			case PORTD_Choice:
			*Add_Pu8PortValue = PORTD;
			break;
			default:
			break;
			
		}
		
	}
	
	return DIO_ErrorState;
}