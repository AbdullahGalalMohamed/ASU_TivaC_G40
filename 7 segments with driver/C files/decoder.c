# include "fun.h"


void Decoder (int count ,int index)
{
	switch (count) 
	{	
		case 0:
		{	
		if (index==1)
		{
			GPIOB->DATA = 0x00;
			DIO_WritePort (1 , 0x40, 1 );
			//GPIOB->DATA = 0x40;
		}
		else if (index ==2)
		{
	    GPIOC->DATA = 0x00;
			GPIOD->DATA = 0x00;	
			DIO_WritePort (2 , 0x40, 1 );
			DIO_WritePort (3 , 0x00, 1 );
			//GPIOC->DATA = 0x40;
			//GPIOD->DATA = 0x00;
		}
		else if (index ==3)
		{
			GPIOE->DATA = 0x00;
			GPIOA->DATA = 0x00;
			DIO_WritePort (4 , 0x20, 1 );
			DIO_WritePort (0 , 0x00, 1 );
			
			//GPIOE->DATA = 0x20;
			//GPIOA->DATA = 0x00;
		}
		break;
		}
		case 1:
		{	
		if (index==1)
		{
			GPIOB->DATA = 0x00;
			DIO_WritePort (1 , 0x79, 1 );
		}
		else if (index ==2)
		{
			GPIOC->DATA = 0x00;
			GPIOD->DATA = 0x00;	
			DIO_WritePort (2 , 0x70, 1 );
			DIO_WritePort (3 , 0x09, 1 );
			
		//GPIOC->DATA = 0x70;
		//GPIOD->DATA = 0x09;
		}
		else if (index ==3)
		{
			GPIOE->DATA = 0x00;
			GPIOA->DATA = 0x00;
			DIO_WritePort (4 , 0x3C, 1 );
			DIO_WritePort (0 , 0x40, 1 );
			
		//GPIOE->DATA = 0x3C;
		//GPIOA->DATA = 0x40;
    }
		break;
		}
		case 2:
		{	
		if (index==1)
		{
			GPIOB->DATA = 0x00;
			DIO_WritePort (1 , 0x24, 1 );
		}
		else if (index ==2)
		{
			GPIOC->DATA = 0x00;
			GPIOD->DATA = 0x00;	
			DIO_WritePort (2 , 0x20, 1 );
			DIO_WritePort (3 , 0x04, 1 );
			
		//GPIOC->DATA = 0x20;
		//GPIOD->DATA = 0x04;	
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
		{
			GPIOB->DATA = 0x00;
			DIO_WritePort (1 , 0x30, 1 );
		}	
		else if (index ==2)
		{
			GPIOC->DATA = 0x00;
			GPIOD->DATA = 0x00;	
			DIO_WritePort (2 , 0x30, 1 );
			DIO_WritePort (3 , 0x00, 1 );
			
		//GPIOC->DATA = 0x30;
		//GPIOD->DATA = 0x00;	
		}
		else if (index ==3)
		{
			GPIOE->DATA = 0x00;
			GPIOA->DATA = 0x00;
			DIO_WritePort (4 , 0x18, 1 );
			DIO_WritePort (0 , 0x00, 1 );
			
		//GPIOE->DATA = 0x18;
		//GPIOA->DATA = 0x00;
    }
		break;
		}
		case 4:
		{	
		if (index==1)
		{
			GPIOB->DATA = 0x00;
			DIO_WritePort (1 , 0x19, 1 );
		}	
		else if (index ==2)
		{
			GPIOC->DATA = 0x00;
			GPIOD->DATA = 0x00;	
			DIO_WritePort (2 , 0x10, 1 );
			DIO_WritePort (3 , 0x09, 1 );
			
		//GPIOC->DATA = 0x10;
		//GPIOD->DATA = 0x09;	
		}
		else if (index ==3)
		{
			GPIOE->DATA = 0x00;
			GPIOA->DATA = 0x00;
			DIO_WritePort (4 , 0x0C, 1 );
			DIO_WritePort (0 , 0x40, 1 );
			
		//GPIOA->DATA = 0x40;
		//GPIOE->DATA = 0x0C;
			
		}
		break;
		}
		case 5:
		{	
		if (index==1)
		{
			GPIOB->DATA = 0x00;
			DIO_WritePort (1 , 0x12, 1 );
		}	
		else if (index ==2)
		{
			GPIOC->DATA = 0x00;
			GPIOD->DATA = 0x00;	
			DIO_WritePort (2 , 0x10, 1 );
			DIO_WritePort (3 , 0x02, 1 );
			
		//GPIOC->DATA = 0x10;
		//GPIOD->DATA = 0x02;
		}
		else if (index ==3)
		{ 
			GPIOE->DATA = 0x00;
			GPIOA->DATA = 0x00;
			DIO_WritePort (4 , 0x08, 1 );
			DIO_WritePort (0 , 0x80, 1 );
			
			//GPIOE->DATA = 0x08;
			//GPIOA->DATA = 0x80;
		
		}
		break;
		}
    }
