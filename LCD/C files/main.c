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
}