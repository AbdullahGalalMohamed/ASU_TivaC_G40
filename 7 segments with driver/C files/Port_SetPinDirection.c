#include "fun.h"

 
void Port_SetPinDirection (uint8_t port_index , uint8_t pins_mask, enum Port_PinDirectionType pins_direction)
{
	switch (port_index)
	{
		case 0 : 
					{
						if(pins_direction)
						GPIOA->DIR|= pins_mask;
						else
						GPIOA->DIR &= ~ pins_mask;
					}
					break;
		case 1 : 
					{
					if(pins_direction)
						GPIOB->DIR|= pins_mask;
						else
						GPIOB->DIR &= ~ pins_mask;
					}
					break;
					
		case 2 : 
					{
					if(pins_direction)
						GPIOC->DIR|= pins_mask ;
						else
						GPIOC->DIR &= ~ pins_mask;
					}
					break;
					
		case 3 : 
					{
					if(pins_direction)
						GPIOD->DIR|= pins_mask;
						else
						GPIOD->DIR &= ~ pins_mask;
					}
					
					break;
		case 4 : 
					{
					if(pins_direction)
						GPIOE->DIR|= pins_mask ;
						else
						GPIOE->DIR &= ~ pins_mask;
					}
					
					break;
		case 5 : 
					{
					if(pins_direction)
						GPIOF->DIR|= pins_mask;
						else
						GPIOF->DIR &= ~ pins_mask;
					}
					break;
	}
		
}




