#include "fun.h"



void DIO_WritePort (uint8_t port_index , uint8_t pins_mask , enum Dio_LevelType pins_level )
	{

	switch (port_index)
	{
		case 0 : 
					{ 
						if (pins_level)
						  GPIOA->DATA |= pins_mask ;
						else 
							GPIOA->DATA &= ~ pins_mask ;
					}
					break;
		case 1 : 
					{
						if (pins_level)
						  GPIOB->DATA |= pins_mask ;
						else 
							GPIOB->DATA &= ~ pins_mask ;
					}
					break;
					
		case 2 : 
					{
						if (pins_level)
						  GPIOC->DATA |= pins_mask ;
						else 
							GPIOC->DATA &= ~ pins_mask ;
					}
					break;
					
		case 3 : 
					{
						if (pins_level)
						  GPIOD->DATA |= pins_mask ;
						else 
							GPIOD->DATA &= ~ pins_mask ;
					}
					break;
		case 4 : 
					{
						if (pins_level)
						  GPIOE->DATA |= pins_mask ;
						else 
							GPIOE->DATA &= ~ pins_mask ;
					}
					
					break;
		case 5 : 
					{
						if (pins_level)
						  GPIOF->DATA |= pins_mask ;
						else 
							GPIOF->DATA &= ~ pins_mask ;
					}
					break;
	}

}

	
