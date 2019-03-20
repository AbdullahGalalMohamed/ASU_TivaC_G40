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

void LCD_Data(unsigned char data) 
{
GPIOE->DATA =0x10; //RS=1, E=0,RW=0
GPIOB->DATA =data;
GPIOE->DATA |= 0x08;
GPIOE->DATA = 0x00;
delay_micro(0); 
}

void LCD_Send_Integer(int number)

{// This function prints integer on LCD

char buffer[10];
delay_milli(10);
sprintf(buffer,"%d",number); // function sprintf converts integer to string
LCD_write_string(buffer);
	
}

void LCD_write_string(char *str)
{
	int i = 0;
	while (str[i] != '\0')

	{

	LCD_Data(str[i]); // sending data on LCD byte by byte

	delay_milli(15);

	i++;

	}

}

void LCD_clearScreen(void)
{
	LCD_Cmd(0x01);
}

void delay_milli(int n){
int i,j;
for(i=0;i<n;i++)
for(j=0;j<3180;j++)
{}
}
 

void delay_micro(int n){
int i,j;
for(i=0;i<n;i++)
for(j=0;j<3;j++){}
}

