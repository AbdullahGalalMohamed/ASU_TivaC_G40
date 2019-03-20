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
