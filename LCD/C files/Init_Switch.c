#include "fun.h"



void SW1_Init(){
	
	SYSCTL->RCGCGPIO |= 0x01;  // enable mode clk for port A
	while ((SYSCTL->RCGCGPIO & 0x01) == 0) {} ; //delay
	GPIOA->LOCK=GPIO_LOCK_KEY;
  GPIO_PORTA_CR_R |= 0x40;		
	GPIOA->AMSEL&= ~0x40U;
	GPIOA->PCTL&= ~GPIO_PCTL_PA6_M;
	GPIOA->AFSEL &= ~0x40U;
	GPIOA->DIR&= ~0x40U;
	GPIOA->PUR|= 0x40U;
	GPIOA->DEN |= 0x40U;	
				
}
void SW0_Init(){
	
	SYSCTL->RCGCGPIO |= 0x01;  
	while ((SYSCTL->RCGCGPIO & 0x01) == 0) {} ; //delay
	GPIOA->LOCK=GPIO_LOCK_KEY;
  GPIO_PORTA_CR_R |= 0x80;		
	GPIOA->AMSEL&= ~0x80U;
	GPIOA->PCTL&= ~GPIO_PCTL_PA7_M;
	GPIOA->AFSEL &= ~0x80U;
	GPIOA->DIR&= ~0x80U;
	GPIOA->PUR|= 0x80U;
	GPIOA->DEN |= 0x80U;	
				
}


void SW2_Init(){
	
	SYSCTL->RCGCGPIO |= 0x08;  
	while ((SYSCTL->RCGCGPIO & 0x08) == 0) {} ; //delay
	GPIOD->LOCK=GPIO_LOCK_KEY;
  GPIO_PORTD_CR_R |= 0x04;		
	GPIOD->AMSEL&= ~0x04U;
	GPIOD->PCTL&= ~GPIO_PCTL_PD2_M;
	GPIOD->AFSEL &= ~0x04U;
	GPIOD->DIR&= ~0x04U;
	GPIOD->PUR|= 0x04U;
	GPIOD->DEN |= 0x04U;
		
				
}

