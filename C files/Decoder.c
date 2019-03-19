# include "fun.h"
void Decoder (int count ,int index)
{
	switch (count) 
	{	
		case 0:
		{	
		if (index==1)
			GPIOB->DATA = 0x40;
		else if (index ==2)
		{
			GPIOC->DATA = 0x40;
			GPIOD->DATA = 0x00;
		}
		else if (index ==3)
		{
			GPIOE->DATA = 0x20;
			GPIOA->DATA = 0x00;
		}
		break;
		}
		case 1:
		{	
		if (index==1)
			GPIOB->DATA = 0x79;
		else if (index ==2)
		{
		GPIOC->DATA = 0x70;
		GPIOD->DATA = 0x09;
		}
		else if (index ==3)
		{
		GPIOE->DATA = 0x3C;
		GPIOA->DATA = 0x40;
    }
		break;
		}
		case 2:
		{	
		if (index==1)
			GPIOB->DATA =0x24;
		else if (index ==2)
		{
		GPIOC->DATA = 0x20;
		GPIOD->DATA = 0x04;	
		}
		else if (index ==3)
		{
		GPIOE->DATA = 0x12;
		GPIOA->DATA = 0x00;
		}
		break;
		}
		case 3:
		{	
		if (index==1)
			GPIOB->DATA = 0x30;
		else if (index ==2)
		{
		GPIOC->DATA = 0x30;
		GPIOD->DATA = 0x00;	
		}
		else if (index ==3)
		{
		GPIOE->DATA = 0x18;
		GPIOA->DATA = 0x00;
    }
		break;
		}
		case 4:
		{	
		if (index==1)
			GPIOB->DATA = 0x19;
		else if (index ==2)
		{
		GPIOC->DATA = 0x10;
		GPIOD->DATA = 0x09;	
		}
		else if (index ==3)
		{
		GPIOA->DATA = 0x40;
		GPIOE->DATA = 0x0C;
		}
		break;
		}
