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
