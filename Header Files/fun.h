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

void PortA_Init(void);

void PortB_Init(void);

void PortD_Init(void);

void SW1_Init(void);

void SW0_Init(void);

void SW2_Init(void);

void SystemInit(void);

void reset(void);

void Increment(void);

void Decrement(void);




