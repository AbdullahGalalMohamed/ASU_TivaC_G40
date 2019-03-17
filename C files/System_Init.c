#include "fun.h"

void SystemInit(){
	PortA_Init();
	PortB_Init();
	PortE_Init();
  PortC_Init();
	PortD_Init();

	SW0_Init();
	SW1_Init();  
  SW2_Init();
}
