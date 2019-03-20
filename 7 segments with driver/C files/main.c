#include "fun.h"

int main()
{
	
	volatile unsigned long delay;
	int counter=0;
	SystemInit();
	Decoder (0 , 1);
	Decoder (0 , 2);
	Decoder (0 , 3);
while(1)  
{ 
		

	if(DIO_ReadPort ( 5 ,0x10U )==0x00)
	{
		delay = SYSCTL_RCGCGPIO_R;

			while(DIO_ReadPort ( 5 ,0x10U )== 0x00)
			{
				Increment();
				
		 delay_milli(200);

				//delay1(200); 
		//	counter =0;
			//SysTick_Wait10ms(1);
			// delay_micro(200);
			//	while (counter <5){counter++;}
			/*	counter=0;
				while((GPIOF->DATA&0x10U)==0x00)
		{
			counter++;
			if (counter==100)
				break;
		}
			*/
			}
					
	}
}
		else if(DIO_ReadPort ( 5 , 0x01)==0x00) 
	{
		delay = SYSCTL_RCGCGPIO_R;
		//second check due to switch de-bouncing
    if(DIO_ReadPort ( 5 , 0x01)==0x00)
		{
			Decrement();
		}
		while(DIO_ReadPort ( 5 , 0x01)==0x00)
		{
		}
	}
	
			else if(DIO_ReadPort ( 1 , 0x80U )==0x01) 
			{
				 while(DIO_ReadPort ( 1 , 0x80U)==0x01)
				 {
					
				 }
				 reset();
			}
}   
}
