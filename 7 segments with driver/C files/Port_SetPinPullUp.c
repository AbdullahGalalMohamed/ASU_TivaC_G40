#include "fun.h"



void Port_SetPinPullUp (uint8_t port_index , uint8_t pins_mask, uint8_t enable )
	{
	switch (port_index)
	{
		case 0 : 
					{
						if(enable)
						{
							GPIOA->PUR|= pins_mask;
						}
						else
						{
							GPIOA->PUR|= 0x00;
						}
					}
					break;
		case 1 : 
					{
						if(enable)
						{
							GPIOB->PUR|= pins_mask;
						}
						else
						{
							GPIOB->PUR|= 0x00;
						}
					}
					break;
					
		case 2 : 
					{
						if(enable)
						{
							GPIOC->PUR|= pins_mask;
						}
						else
						{
							GPIOC->PUR|= 0x00;
						}
					}
					break;
					
		case 3 : 
					{
						if(enable)
						{
							GPIOD->PUR|= pins_mask;
						}
						else
						{
							GPIOD->PUR|= 0x00;
						}
					}
					break;
					
		case 4 : 
					{
						if(enable)
						{
							GPIOE->PUR|= pins_mask;
						}
						else
						{
							GPIOE->PUR|= 0x00;
						}
					}
					
					break;
		case 5 : 
					{
						if(enable)
						{
							GPIOF->PUR|= pins_mask;
						}
						else
						{
							GPIOF->PUR|= 0x00;
						}
					}
					break;
	}
	
}
