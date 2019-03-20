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
			GPIOA->DATA = 0x40; 
			GPIOE->DATA = 0x00;
		}
		//else if (index ==3)
			//GPIOE->DATA = 0x40;
		break;
		}
		case 1:
		{	
		if (index==1)
			GPIOB->DATA = 0x79;
		//else if (index ==2)
		//GPIOD->DATA = 0x30;
		//else if (index ==3)
			//GPIOE->DATA = 0x30;
		break;
		}
		case 2:
		{	
		if (index==1)
			GPIOB->DATA =0x24;
		//else if (index ==2)
		//GPIOD->DATA = 0x6D;
		//else if (index ==3)
			//GPIOE->DATA = 0x6D;
		break;
		}
		case 3:
		{	
		if (index==1)
			GPIOB->DATA = 0x30;
		//else if (index ==2)
		//GPIOD->DATA = 0x79;
		//else if (index ==3)
			//GPIOE->DATA = 0x79;
		break;
		}
		case 4:
		{	
		if (index==1)
			GPIOB->DATA = 0x19;
		//else if (index ==2)
		//GPIOD->DATA = 0x33;
		//else if (index ==3)
			//GPIOE->DATA = 0x33;
		break;
		}
		case 5:
		{	
		if (index==1)
			GPIOB->DATA = 0x12;
		//else if (index ==2)
		//GPIOD->DATA = 0x5B;
		//else if (index ==3)
			//GPIOE->DATA = 0x5B;
		break;
		}
		case 6:
		{	
		if (index==1)
			GPIOB->DATA = 0x02;
		//else if (index ==2)
		//GPIOD->DATA = 0x5F;
		//else if (index ==3)
			//GPIOE->DATA = 0x5F;
		break;
		}
		case 7:
		{	
		if (index==1)
			GPIOB->DATA = 0x78;
		//else if (index ==2)
		//GPIOD->DATA = 0x70;
		//else if (index ==3)
			//GPIOE->DATA = 0x70;
		break;
		}
		case 8:
		{	
		if (index==1)
			GPIOB->DATA = 0x00;
		//else if (index ==2)
		//GPIOD->DATA = 0x7F;
		//else if (index ==3)
			//GPIOE->DATA = 0x7F;
		break;
		}
		case 9:
		{	
		if (index==1)
			GPIOB->DATA = 0x10;
		//else if (index ==2)
		//GPIOD->DATA = 0x7B;
		//else if (index ==3)
			//GPIOE->DATA = 0x7B;
		break;
		}	
	}		
}

