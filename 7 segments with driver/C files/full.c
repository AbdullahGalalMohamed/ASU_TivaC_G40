#include "fun.h"
int count=0;
void Increment()
{
	int flag=0;
  int count2;
	int digit;
	//count = GPIOA->DATA + (GPIOB->DATA << 1) ;
	if(count==999)
	{
		count=0;
	}
	
	else{
		++(count);
		
	}
	count2=count;
	  while(count2 >= 0 && flag < 4) //do till num greater than  0
    {   
        digit = (count2) % 10;
			  

			  flag++;
        count2 = count2 / 10;
        if (flag==1)
				{
					Decoder (digit , flag);
					//GPIOA->DATA=((GPIOA->DATA)&0xF0) |(digit);
				}	
        else if (flag==2)
				{
					Decoder (digit , flag);
					//GPIOB->DATA=(GPIOB->DATA& 0xF0) |(digit);
				}	
      else if (flag==3)
				{
					Decoder (digit , flag);
					//GPIOD->DATA=(GPIOD->DATA& 0xF0 ) |(digit);
				}					
    }
		
}

void Decrement()
{
	int flag=0;
	int count2;
	int digit;
//	count = GPIOA->DATA + (GPIOB->DATA << 1) + (GPIOD ->DATA << 2) ;
	
	if(count==0)
	{
		count=0;
	}
	
	else{
		count--;
		
	}
	
	count2=count;
	  while(count2 >= 0 && flag < 4) //do till num greater than  0
    { 
        int digit = count2 % 10;
			  flag++;
        count2 = count2 / 10;
        if (flag==1)
				{
					Decoder (digit , flag);
					//GPIOA->DATA=(GPIOA->DATA & 0xF0) |(digit);
				}	
        else if (flag==2)
				{
					Decoder (digit , flag);
					//GPIOB->DATA=(GPIOB->DATA & 0xF0) |(digit);
				}	
      else if (flag==3)
				{
					Decoder (digit , flag);
					//GPIOD->DATA=(GPIOD->DATA & 0xF0) |(digit);
				}					
    }
}


void reset()
{
	count = 0;
	Decoder (0 , 1);
	Decoder (0 , 2);
	Decoder (0 , 3);
}
