
#include "fun.h"

void Port_SetPinPullDown (uint8_t port_index , uint8_t pins_mask, uint8_t enable ){
	switch (port_index)
	{
		case 0 : 
					{
						if(enable)
						{
							GPIOA->PDR|= pins_mask;
						}
						else
						{
							GPIOA->PDR|= 0x00;
						}
					}
					break;
		case 1 : 
					{
						if(enable)
						{
							GPIOB->PDR|= pins_mask;
						}
						else
						{
							GPIOB->PDR|= 0x00;
						}
					}
					break;
					
		case 2 : 
					{
						if(enable)
						{
							GPIOC->PDR|= pins_mask;
						}
						else
						{
							GPIOC->PDR|= 0x00;
						}
					}
					break;
					
		case 3 : 
					{
						if(enable)
						{
							GPIOD->PDR|= pins_mask;
						}
						else
						{
							GPIOD->PDR|= 0x00;
						}
					}
					break;
					
		case 4 : 
					{
						if(enable)
						{
							GPIOE->PDR|= pins_mask;
						}
						else
						{
							GPIOE->PDR|= 0x00;
						}
					}
					
					break;
		case 5 : 
					{
						if(enable)
						{
							GPIOF->PDR|= pins_mask;
						}
						else
						{
							GPIOF->PDR|= 0x00;
						}
					}
					break;
	}
	
}
