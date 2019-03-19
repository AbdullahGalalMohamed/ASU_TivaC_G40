#include <TM4C123.h>
#include "tm4c123gh6pm.h"
#define GPIO_LOCK_KEY           0x4C4F434B  // Unlocks the GPIO_CR register
#define GPIO_PABCD_M						0xFF		    // mask for enable port A,B,C,D
#define GPIO_PA_M               0xF0			
#define GPIO_E_M								0x1C		    // mask for enable port E
#define GPIO_F_M								0x1F		    // mask for enable port F
#define GPIO_PCTL_PA7654_M		(GPIO_PCTL_PA7_M | GPIO_PCTL_PA6_M)
#define GPIO_PCTL_PB3210_M		(GPIO_PCTL_PB6_M| GPIO_PCTL_PB5_M | GPIO_PCTL_PB4_M|GPIO_PCTL_PB3_M | GPIO_PCTL_PB2_M| GPIO_PCTL_PB1_M | GPIO_PCTL_PB0_M)
#define GPIO_PCTL_PD3210_M		(GPIO_PCTL_PD3_M | GPIO_PCTL_PD2_M| GPIO_PCTL_PD1_M | GPIO_PCTL_PD0_M)
#define GPIO_PCTL_PC654_M			(GPIO_PCTL_PC6_M| GPIO_PCTL_PC5_M | GPIO_PCTL_PC4_M)
#define GPIO_PCTL_PE12345_M		(GPIO_PCTL_PE4_M | GPIO_PCTL_PE4_M | GPIO_PCTL_PE3_M | GPIO_PCTL_PE2_M | GPIO_PCTL_PE1_M)



/*******************************************************************************
 *                      Functions Prototypes                                   *
 *******************************************************************************/

/*
Initialize port(A,B,C,D,E) by enabling
the clock, unlocking the port, and making the selected mode
digital and change the direction of the selected pins to output
*/

void PortA_Init(void); 

void PortB_Init(void);

void PortC_Init();

void PortD_Init();

void PortE_Init();

/*
Connect sw2 to internal pull-down resistor "Reset button"
Connect sw0 to internal pull-up resistor "Decrement button"
Connect sw1 to internal pull-up resistor "Increment button"

Initialize port(F & E) by enabling
the clock, unlocking the port, and making the selected mode
digital and change the direction of the selected pins to input 
*/
void SW1_Init(void);

void SW0_Init(void);

void SW2_Init(void);

/* 
Call initialization functions for switches and ports
*/
void SystemInit(void);
/*
Reset the counter
*/
void reset(void);

/*
Increment the counter;
*/
void Increment(void);

/*
Decrement the counter
*/

void Decrement(void);

/* Split the counter to 3 digits and display them on the 7-segments

*/
void Decoder (int count ,int index);

//Delay in milli seconds


void delay_milli(int n);


