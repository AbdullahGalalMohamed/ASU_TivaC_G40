#include "fun.h"
int count=0;
void Increment()
{
	
	//count = GPIOA->DATA + (GPIOB->DATA << 1) ;
	
	
	if(count==999)
	{
		count=0;
	}
	
	else{
		++count;
	}	
		LCD_Cmd(0x01);
		delay_milli(2);
		LCD_Send_Integer(count);
		delay_milli(2);
		LCD_Cmd(0x02);
		delay_milli(2);
	
	
	 
    }
		


void Decrement()
{
	
//	count = GPIOA->DATA + (GPIOB->DATA << 1) + (GPIOD ->DATA << 2) ;
	
	if(count==0)
	{
		count=0;
	}
	
	else{
		count--;
	}
		LCD_Cmd(0x01);
		delay_milli(2);
		LCD_Send_Integer(count);
		delay_milli(2);
		LCD_Cmd(0x10);
		delay_milli(02);	
    }

		
		void reset()
{
		count = 0;
		LCD_Cmd(0x01);
		delay_milli(2);
		LCD_Send_Integer(count);
		delay_milli(2);
		LCD_Cmd(0x10);
		delay_milli(02);
}
