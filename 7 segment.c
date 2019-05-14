/*
 * display segment.c
 *
 * Created: 14-05-2019 10:04:59
 * Author : AMRUTHA
 */ 

#ifndef F_CPU
#define F_CPU 16000000UL
#endif
#include <avr/io.h>
#include <util/delay.h>


int main(void)
{
	DDRA=0XFF;
    /* Replace with your application code */
    while (1) 
    {
		PORTA =0X3F;
		_delay_ms(1000);
		PORTA =0X06;
		_delay_ms(1000);
		PORTA =0X5B;
		_delay_ms(1000);
		PORTA =0X4F;
	   _delay_ms(1000);
		PORTA =0X66;
		_delay_ms(1000);
		PORTA =0X6D;
		_delay_ms(1000);
		PORTA =0X7D;
		_delay_ms(1000);
		PORTA =0X07;
		_delay_ms(1000);
		PORTA =0X7F;
		_delay_ms(1000);
		PORTA =0X6F;
		_delay_ms(1000);
    }
}

