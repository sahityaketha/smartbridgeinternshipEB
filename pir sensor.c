/*
 * pir.c
 *
 * Created: 13-05-2019 10:46:31
 * Author : AMRUTHA
 */ 
#ifndef F_CPU
#define F_CPU 16000000UL
#endif

#include <avr/io.h>
#define LED_OUTPUT PORTB
#define PIR_Input PINC


int main(void)
{
    /* Replace with your application code */
	DDRC=0X00;
	DDRB=0Xff;
    while (1) 
    {
		LED_OUTPUT=PIR_Input;
    }
}

