#include <TM4C123.h>
#include "tm4c123gh6pm.h"
#define GPIO_LOCK_KEY           0x4C4F434B  // Unlocks the GPIO_CR register
#define GPIO_PABCD_M						0xFF		    // mask for enable port A,B,C,D
#define GPIO_E_M								0x3F		    // mask for enable port E
#define GPIO_F_M								0x1F		    // mask for enable port F
#define GPIO_PCTL_PA3210_M		(GPIO_PCTL_PA3_M | GPIO_PCTL_PA2_M| GPIO_PCTL_PA1_M | GPIO_PCTL_PA0_M)
#define GPIO_PCTL_PB3210_M		(GPIO_PCTL_PB3_M | GPIO_PCTL_PB2_M| GPIO_PCTL_PB1_M | GPIO_PCTL_PB0_M)
#define GPIO_PCTL_PD3210_M		(GPIO_PCTL_PD3_M | GPIO_PCTL_PD2_M| GPIO_PCTL_PD1_M | GPIO_PCTL_PD0_M)


/*******************************************************************************
 *                      Functions Prototypes                                   *
 *******************************************************************************/

/*
Initialize port(A,B,D) by enabling
the clock, unlocking the port, and making the selected mode
digital and change the direction of the selected pins to output
*/

void PortA_Init(void); 

void PortB_Init(void);

void PortD_Init(void);

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
Reset the counter (Data of port A & port B & port D)
*/
void reset(void);

/*
Increment the counter (Data of port A & port B & port D)
*/
void Increment(void);

/*
Decrement the counter (Data of port A & port B & port D)
*/

void Decrement(void);
