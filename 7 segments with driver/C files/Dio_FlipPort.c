# include "fun.h"


void DIO_FlipPort (uint8_t port_index , uint8_t pins_mask){

	switch (port_index)
	{
		case 0 : 
					{
						GPIOA->DATA ^= pins_mask ;
					}
					break;
		case 1 : 
					{
						GPIOB->DATA ^= pins_mask ;
					}
					break;
					
		case 2 : 
					{
						GPIOC->DATA ^= pins_mask ;
					}
					break;
					
		case 3 : 
					{
						GPIOD->DATA ^= pins_mask ;
					}
					
					break;
		case 4 : 
					{
						GPIOE->DATA ^= pins_mask ;
					}
					
					break;
		case 5 : 
					{
						GPIOF->DATA ^= pins_mask ;
					}
					break;
	}

}
