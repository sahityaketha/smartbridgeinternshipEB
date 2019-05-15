/*
 * timer.c
 *
 * Created: 15-05-2019 10:33:55
 * Author : VAMSI SRIRAM
 */ 

#include <avr/io.h>
#define LED PB0

int main(void)
{
	uint8_t timerOverflowCount=0;
	DDRB=0xFF;
	TCNT0=0x00;
	TCCR0=(1<<CS00)|(1<<CS02);
	
    /* Replace with your application code */
    while (1) 
    {
		while((TIFR& 0x01)==0);
				TCNT0=0x00;
             TIFR=0x01;
			 timerOverflowCount++;
			 if(timerOverflowCount>=5)
			 {
				 PORTB^=(0x01<<LED);
				 timerOverflowCount=0;
			 }
    }
}

