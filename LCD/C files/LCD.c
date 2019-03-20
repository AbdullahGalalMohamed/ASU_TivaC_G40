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
