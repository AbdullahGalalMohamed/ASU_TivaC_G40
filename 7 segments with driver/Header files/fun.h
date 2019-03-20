#include <TM4C123.h>
#include "tm4c123gh6pm.h"
#include "stdint.h"

#define GPIO_LOCK_KEY           0x4C4F434B  // Unlocks the GPIO_CR register
#define GPIO_PABCD_M						0xFF		    // mask for enable port A,B,C,D
#define GPIO_PA_M               0xF0
#define GPIO_PA76_M         		0xC0				// mask for port A pins 7&6
#define GPIO_E_M								0x1C		    // mask for enable port E
#define GPIO_F_M								0x1F		    // mask for enable port F
#define GPIO_PE54321_M          0x3E       	// mask for port E pins 12345
#define GPIO_PD3210_M						0x0F				// mask for port D pins 0123
#define GPIO_PC654_M						0x70				// MASK FOR PORT c PINS 456
#define GPIO_PCTL_PA76_M			(GPIO_PCTL_PA7_M | GPIO_PCTL_PA6_M)
#define GPIO_PCTL_PB3210_M		(GPIO_PCTL_PB7_M | GPIO_PCTL_PB6_M | GPIO_PCTL_PB5_M | GPIO_PCTL_PB4_M|GPIO_PCTL_PB3_M | GPIO_PCTL_PB2_M| GPIO_PCTL_PB1_M | GPIO_PCTL_PB0_M)
#define GPIO_PCTL_PD3210_M		(GPIO_PCTL_PD7_M | GPIO_PCTL_PD6_M | GPIO_PCTL_PD5_M | GPIO_PCTL_PD4_M|GPIO_PCTL_PD3_M | GPIO_PCTL_PD2_M| GPIO_PCTL_PD1_M | GPIO_PCTL_PD0_M)
#define GPIO_PCTL_PC654_M			(GPIO_PCTL_PC6_M | GPIO_PCTL_PC5_M | GPIO_PCTL_PC4_M)
#define GPIO_PCTL_PE234_M		  (GPIO_PCTL_PC4_M|GPIO_PCTL_PC3_M | GPIO_PCTL_PC2_M)
#define GPIO_PCTL_PE12345_M   (GPIO_PCTL_PE5_M | GPIO_PCTL_PE4_M | GPIO_PCTL_PE3_M | GPIO_PCTL_PE2_M| GPIO_PCTL_PE1_M)
#define GPIO_PCTL_PF_M		(GPIO_PCTL_PF4_M|GPIO_PCTL_PF3_M | GPIO_PCTL_PF2_M| GPIO_PCTL_PF1_M | GPIO_PCTL_PF0_M)

/******************LCD************/
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
void delay_milli(int n);
void delay_micro(int n);
void LCD_init(void);
void LCD_Cmd(unsigned char command);
void LCD_Data(unsigned char data);
void LCD_write_string(char *str);
void LCD_Send_Integer(int number);
void LCD_clearScreen(void);
/**********************************/


/*******************************************************************************
 *                      Functions Prototypes                                   *
 *******************************************************************************/

/*
Initialize port(A,B,D) by enabling
the clock, unlocking the port, and making the selected mode
digital and change the direction of the selected pins to output
*/

//void PortA_Init(void); 

//void PortB_Init(void);

//void PortE_Init();

//void PortD_Init(void);

/*
Connect sw2 to internal pull-down resistor "Reset button"
Connect sw0 to internal pull-up resistor "Decrement button"
Connect sw1 to internal pull-up resistor "Increment button"

Initialize port(F & E) by enabling
the clock, unlocking the port, and making the selected mode
digital and change the direction of the selected pins to input 
*/
void SW1_Init(void);

//void SW0_Init(void);

//void SW2_Init(void);

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

//void Decoder (int count ,int index);

//void PortC_Init();

//void PortD_Init();

void Port_Init (uint8_t port_index);

enum Port_PinDirectionType{ PORT_PIN_IN , PORT_PIN_OUT };

void Port_SetPinDirection (uint8_t port_index , uint8_t pins_mask, enum Port_PinDirectionType pins_direction);
	
void Port_SetPinPullUp (uint8_t port_index , uint8_t pins_mask, uint8_t enable );

void Port_SetPinPullDown (uint8_t port_index , uint8_t pins_mask, uint8_t enable );
	
void DIO_FlipPort (uint8_t port_index , uint8_t pins_mask);

uint8_t DIO_ReadPort (uint8_t port_index , uint8_t pins_mask);

enum Dio_LevelType{ STD_LOW , STD_HIGH };

void DIO_WritePort (uint8_t port_index , uint8_t pins_mask , enum Dio_LevelType pins_level );

