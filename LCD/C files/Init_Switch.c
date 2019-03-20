#include "fun.h"


void LCD_init(void){
	
SYSCTL->RCGCGPIO |= 0x02; //PORTB clock
SYSCTL->RCGCGPIO |= 0x10;//PORTE clock
GPIOE->DIR |=0x1C; //PORTE controls RS , E and  R/W // 2 , 3 , 4
GPIOE->DEN |=0x1C;
GPIOB->DIR |=0xFF; //PORTB D0-D7
GPIOB->DEN |=0xFF; //PORTB D0-D7
LCD_Cmd(0x38); //8-bits,2 display lines, 5x7 font
LCD_Cmd(0x06); //increments automatically
LCD_Cmd(0x0F); //Turn on display
LCD_Cmd(0x01); //clear display
 
}
 
void LCD_Cmd(unsigned char command)
{

GPIOE->DATA =0x00; //RS=0, E=0,RW=0
GPIOB->DATA =command;
GPIOE->DATA |= 0x08;
delay_micro(0);
GPIOE->DATA = 0x00;
delay_micro(2000); 
if(command <4) delay_milli(2); else delay_micro(37); 
}
