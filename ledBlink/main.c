#include "stm32f10x.h"
int i;
int main()
{

//initialise the clock for the port we are using
	RCC->APB2ENR |= (1<<4);

//configure pin3 on port GPIOC
	GPIOC->CRH |= ( (1<<20) | (1<<21) );
	GPIOC->CRH &= ~( (1<<22) | (1<<23) );
	while(1)
	{
	for(i=0;i<500000;i++);
	GPIOC->BSRR = (1<<13);
  for(i=0;i<500000
		;i++);
	GPIOC->BSRR = (1<<(13+16));
	
	
	}
	

}
