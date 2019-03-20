#include "fun.h"

int main()
{
	
	volatile unsigned long delay;
	SystemInit();
	LCD_init();
	LCD_Send_Integer(0);
	while(1)  
{
	if((GPIOA->DATA&0x40U)==0x00)
	{
		//delay = SYSCTL_RCGCGPIO_R;
		
			while((GPIOA->DATA&0x40U)==0x00)
			{
				Increment();
				
				delay_milli(200); 


		
			}
					
	}
	
		else if((GPIOA->DATA&0x80)==0x00) 
	{
		//delay = SYSCTL_RCGCGPIO_R;
		//second check due to switch de-bouncing
    if((GPIOA->DATA&0x80U)==0x00)
		{
			Decrement();
		}
		while((GPIOA->DATA&0x80U)==0x00)
		{
		}
	}
	
			else if((GPIOD->DATA&0x04U)==0x00) 
			{
				 while((GPIOD->DATA&0x04U)==0x00)
				 {
					
				 }
				 reset();
			}
		}
}
