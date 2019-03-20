# include "fun.h"


void Port_Init (uint8_t port_index)
{
	switch (port_index)
	{
		case 0 : 
					{
					SYSCTL->RCGCGPIO |= 0x01;  // enable mode clk for port A
					while ((SYSCTL->RCGCGPIO & 0x01) == 0) {} ; //delay
					GPIOA->LOCK=GPIO_LOCK_KEY;
					GPIOA->DEN |= GPIO_PA76_M;
					GPIO_PORTA_CR_R |= GPIO_PA76_M;
          GPIO_PORTA_AMSEL_R &= ~GPIO_PA76_M;			
          GPIOA->PCTL &= ~ GPIO_PCTL_PA76_M;
          GPIOA->AFSEL &= ~GPIO_PA76_M	;					
					}
					break;
		case 1 : 
					{
					SYSCTL->RCGCGPIO |= 0x02;  // enable mode clk for port A
					while ((SYSCTL->RCGCGPIO & 0x02) == 0) {} ; //delay
					GPIOB->LOCK=GPIO_LOCK_KEY;
					GPIOB->DEN |= GPIO_PABCD_M;	
					GPIO_PORTB_CR_R |= GPIO_PABCD_M;
					GPIO_PORTB_AMSEL_R &= ~GPIO_PABCD_M;				
          GPIOB->PCTL&= ~GPIO_PCTL_PB3210_M;
		      GPIOB->AFSEL&= ~GPIO_PABCD_M;
					}
					break;
					
		case 2 : 
					{
					SYSCTL->RCGCGPIO |= 0x04;  // enable mode clk for port A
					while ((SYSCTL->RCGCGPIO & 0x04) == 0) {} ; //delay
					GPIOC->LOCK=GPIO_LOCK_KEY;
					GPIOC->DEN |= GPIO_PC654_M;
					GPIO_PORTC_CR_R |= GPIO_PC654_M;		
					GPIO_PORTC_AMSEL_R &= ~GPIO_PC654_M;				
					GPIOC->PCTL&= ~GPIO_PCTL_PC654_M;
					GPIOC->AFSEL&= ~GPIO_PC654_M;
		 
					}
					break;
					
		case 3 : 
					{
					SYSCTL->RCGCGPIO |= 0x08;  // enable mode clk for port A
					while ((SYSCTL->RCGCGPIO & 0x08) == 0) {} ; //delay
					GPIOD->LOCK=GPIO_LOCK_KEY;
					GPIOD->DEN |= GPIO_PD3210_M;
					GPIO_PORTD_CR_R |= GPIO_PD3210_M;		
					GPIO_PORTD_AMSEL_R &= ~GPIO_PD3210_M;				
					GPIOD->PCTL&= ~GPIO_PCTL_PD3210_M;
					GPIOD->AFSEL&= ~GPIO_PD3210_M;
		 						
					}
					
					break;
		case 4 : 
					{
					SYSCTL->RCGCGPIO |= 0x10;  // enable mode clk for port A
					while ((SYSCTL->RCGCGPIO & 0x10) == 0) {} ; //delay
					GPIOE->LOCK=GPIO_LOCK_KEY;
					GPIOE->DEN |= GPIO_PE54321_M;
					GPIO_PORTE_CR_R |= GPIO_PE54321_M;
					GPIO_PORTE_AMSEL_R &= ~GPIO_PE54321_M;				
					GPIOE->PCTL&=~GPIO_PCTL_PE12345_M;
					GPIOE->AFSEL&= ~GPIO_PE54321_M;
								
					}
					
					break;
		case 5 : 
					{
					SYSCTL->RCGCGPIO |= 0x20;  // enable mode clk for port A
					while ((SYSCTL->RCGCGPIO & 0x20) == 0) {} ; //delay
					GPIOF->LOCK=GPIO_LOCK_KEY;
					GPIOF->DEN |= GPIO_F_M;
					GPIO_PORTF_CR_R |= GPIO_F_M;
					GPIO_PORTF_AMSEL_R &= ~GPIO_F_M;				
					GPIOF->PCTL&=~GPIO_PCTL_PF_M;
					GPIOF->AFSEL&= ~GPIO_F_M;
			
					}
	}
		
}

