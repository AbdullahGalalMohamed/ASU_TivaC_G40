#include "fun.h"

void SystemInit(){
	//PortA_Init();
	Port_Init (0);
	Port_SetPinDirection (0 , GPIO_PA76_M , 1);
	
	//PortB_Init();
	Port_Init (1);
	Port_SetPinDirection ( 1 , GPIO_PABCD_M , 1);
	
//	PortC_Init();
	Port_Init (2);
	Port_SetPinDirection ( 2 , GPIO_PC654_M , 1);
		
//PortD_Init();
	
	Port_Init (3);
	Port_SetPinDirection ( 3 , GPIO_PD3210_M  , 1);
	
	
	//PortE_Init();
	
	Port_Init (4);
	Port_SetPinDirection ( 4 , GPIO_PE54321_M  , 1);
	 
  //SW0_Init();
	Port_Init (5);
	Port_SetPinDirection ( 5 , 0x01  , 0);
	Port_SetPinPullUp (5 , 0x01 , 1 );

	 
	//SW1_Init();
	
	Port_Init (5);
	Port_SetPinDirection ( 5 , 0x10  , 0);
	Port_SetPinPullUp (5 , 0x10 , 1 );

  
  //SW2_Init();
	
	Port_Init (1);
	Port_SetPinDirection ( 1 , 0x10  , 0);
	Port_SetPinPullDown (1 , 0x10 , 1 );
}
