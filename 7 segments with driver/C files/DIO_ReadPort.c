#include "fun.h"


uint8_t DIO_ReadPort (uint8_t port_index , uint8_t pins_mask){
	
	uint8_t pins_level;
	
	switch (port_index)
	{
		case 0 : 
					{
						pins_level = GPIOA->DATA &  pins_mask ;
					}
					break;
		case 1 : 
					{
						pins_level = GPIOB->DATA & pins_mask ;
					}
					break;
					
		case 2 : 
					{
						pins_level = GPIOC->DATA & pins_mask ;
					}
					break;
					
		case 3 : 
					{
						pins_level = GPIOD->DATA & pins_mask ;
					}
					
					break;
		case 4 : 
					{
						pins_level = GPIOE->DATA & pins_mask ;
					}
					
					break;
		case 5 : 
					{
						pins_level = GPIOF->DATA & pins_mask ;
					}
					break;
	}
	return pins_level ;
}
