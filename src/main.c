// Description----------------------------------------------------------------|
/*
 *
 */
// DEFINES AND INCLUDES-------------------------------------------------------|

#define STM32F051												   //COMPULSORY
#include "stm32f0xx.h"											   //COMPULSORY
#include "lcd_stm32f0.h"
#include <stdio.h>

// GLOBAL VARIABLES ----------------------------------------------------------|

struct age_data{
	uint8_t day;
	uint8_t month;
	uint16_t year;
	uint8_t age;
}my_age;


// FUNCTION DECLARATIONS -----------------------------------------------------|

void delay(unsigned int microseconds);
void main(void);                                                   //COMPULSORY

// MAIN FUNCTION -------------------------------------------------------------|

void main(void)
{
	char num[3];
		my_age.day = 21;
		my_age.month = 3;
		my_age.year = 2000;
		my_age.age = 22;

		init_LCD();

	while(1)
	{
		for(uint8_t i = 0;i <= 22; i ++){

				delay(20000);
				sprintf(num, "%d", i);
				lcd_putstring(num);
				delay(20000);
				lcd_command(CLEAR);
		}
	}
}

// OTHER FUNCTIONS -----------------------------------------------------------|


