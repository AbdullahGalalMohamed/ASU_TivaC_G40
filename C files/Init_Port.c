
#include "fun.h"

void PortA_Init()
{
	SYSCTL->RCGCGPIO |= 0x01;  // enable mode clk for port A
	while ((SYSCTL->RCGCGPIO && 0x01) == 0) {} ; //delay
	GPIOA->LOCK=GPIO_LOCK_KEY;
	GPIO_PORTA_CR_R |= 0xC0;	
  GPIO_PORTA_AMSEL_R &= ~0xC0;			
  GPIOA->PCTL &= ~GPIO_PCTL_PA7654_M;
  GPIOA->AFSEL &= ~0xC0;
  GPIOA->DIR |= 0xC0;
	GPIOA->DEN |= 0xC0;//Enable pin to be in digital mode
  GPIOA->DATA &= 0xF0;		
}

void PortB_Init()
{
		SYSCTL->RCGCGPIO |= 0x02;  // enable mode clk for port B
		while ((SYSCTL->RCGCGPIO & 0x02) == 0) {} ; //delay
		GPIOB->LOCK=GPIO_LOCK_KEY;
		GPIO_PORTB_CR_R |= 0x7F;
    GPIO_PORTB_AMSEL_R &= ~0x7F;				
    GPIOB->PCTL&= ~GPIO_PCTL_PB3210_M;
		GPIOB->AFSEL&= ~0x7F;
		GPIOB->DIR|= 0x7F;
		GPIOB->DEN |= 0x7F;//Enable pin to be in digital mode
    GPIOB->DATA&= 0x00;
}

void PortE_Init()
{
	//pin2,3,4
		SYSCTL->RCGCGPIO |= 0x10;  // enable mode clk for port E
		while ((SYSCTL->RCGCGPIO & 0x10) == 0) {} ; //delay
		GPIOE->LOCK=GPIO_LOCK_KEY;
		GPIO_PORTE_CR_R |= 0x3E;
    GPIO_PORTE_AMSEL_R &= ~0x3E;				
    GPIOE->PCTL&= ~GPIO_PCTL_PE12345_M;
		GPIOE->AFSEL&= ~0x3E;
		GPIOE->DIR|= 0x3E;
		GPIOE->DEN |= 0x3E;//Enable pin to be in digital mode
    GPIOE->DATA&= 0x00;
}

void PortC_Init()
{
	   SYSCTL->RCGCGPIO |= 0x04;  // enable mode clk for port C
		 while ((SYSCTL->RCGCGPIO & 0x04) == 0) {} ; //delay
		 GPIOC->LOCK=GPIO_LOCK_KEY;
     GPIO_PORTC_CR_R |= 0x70;		
		 GPIO_PORTC_AMSEL_R &= ~0x70;				
     GPIOC->PCTL&= ~GPIO_PCTL_PC654_M;
		 GPIOC->AFSEL&= ~0x70;
		 GPIOC->DIR|= 0x70;
		 GPIOC->DEN |= 0x70;//Enable pin to be in digital mode
     GPIOC->DATA&= 0x0F;			 
}
void PortD_Init()
{
	   SYSCTL->RCGCGPIO |= 0x08;  // enable mode clk for port D
		 while ((SYSCTL->RCGCGPIO & 0x08) == 0) {} ; //delay
		 GPIOD->LOCK=GPIO_LOCK_KEY;
     GPIO_PORTD_CR_R |= 0x0F;		
		 GPIO_PORTD_AMSEL_R &= ~0x0F;				
     GPIOD->PCTL&= ~GPIO_PCTL_PD3210_M;
		 GPIOD->AFSEL&= ~0x0F;
		 GPIOD->DIR|= 0x0F;
		 GPIOD->DEN |= 0x0F;//Enable pin to be in digital mode
     GPIOD->DATA&= 0xF0;			 
}
