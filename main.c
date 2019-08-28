/*----------------------------------------------------------------------------
	
	Designers Guide to the Cortex-M Family
	Saturation example

*----------------------------------------------------------------------------*/

#include "stm32f10x.h"
#define Q_FLAG 0x08000000
uint16_t a = 0;
uint16_t range = 300;
uint16_t locked = 0;
uint8_t c = 0;
uint32_t xPSR = 0;

int main (void)
{
register unsigned int apsr __asm("apsr");
	
	while (1)
	{
		for(a=0;a<range;a++)					//a goes from 0 to 300
		{
			c = a;
		//	c = __SSAT	(a, 9);				//c will saturate at 255
		}
/*	xPSR = 	__get_APSR ();
		if(xPSR&Q_FLAG)	
		{															//Using Compiler optimisation level 3, the if, then, else statement 
			range--;										//will be constructed using conditional instructions
		}	
		apsr = apsr&~Q_FLAG;
*/	
	}
}

