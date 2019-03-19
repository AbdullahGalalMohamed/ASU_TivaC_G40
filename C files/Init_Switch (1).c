#include "fun.h"


void SW1_Init(){  //increment
	
	SYSCTL->RCGCGPIO |= 0x20;  // enable mode clk for port A
	while ((SYSCTL->RCGCGPIO & 0x20) == 0) {} ; //delay
	GPIOF->LOCK=GPIO_LOCK_KEY;
  GPIO_PORTF_CR_R |= 0x10;		
	GPIOF->AMSEL&= ~0x10U;
	GPIOF->PCTL&= ~GPIO_PCTL_PF4_M;
	GPIOF->AFSEL &= ~0x10U;
	GPIOF->DIR&= ~0x10U;
	GPIOF->PUR|= 0x10U;
	GPIOF->DEN |= 0x10U;	
				
}
void SW0_Init(){  //Decrement
	
	SYSCTL->RCGCGPIO |= 0x20;  
	while ((SYSCTL->RCGCGPIO & 0x20) == 0) {} ; //delay
	GPIOF->LOCK=GPIO_LOCK_KEY;
  GPIO_PORTF_CR_R |= 0x01;		
	GPIOF->AMSEL&= ~0x01U;
	GPIOF->PCTL&= ~GPIO_PCTL_PF0_M;
	GPIOF->AFSEL &= ~0x01U;
	GPIOF->DIR&= ~0x01U;
	GPIOF->PUR|= 0x01U;
	GPIOF->DEN |= 0x01U;	
				
}

void SW2_Init(){  //Reset
	
	SYSCTL->RCGCGPIO |= 0x02;  
	while ((SYSCTL->RCGCGPIO & 0x02) == 0) {} ; //delay
	GPIOB->LOCK=GPIO_LOCK_KEY;
  GPIO_PORTB_CR_R |= 0x80;		
	GPIOB->AMSEL&= ~0x80U;
	GPIOB->PCTL&= ~GPIO_PCTL_PB7_M;
	GPIOB->AFSEL &= ~0x80U;
	GPIOB->DIR&= ~0x80U;
	GPIOB->PDR|= 0x80U;
	GPIOB->DEN |= 0x80U;
		
				
}