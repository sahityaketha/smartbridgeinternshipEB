/*
 *led3
 *
 * Created: 09-05-2019 14:16:50
 * Author : AMRUTHA
 */ 
#ifndef F_CPU
#define F_CPU 16000000UL
#endif

#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	DDRB= 0X80;
	DDRD= 0X80;
	DDRA= 0X80;
	DDRC= 0X80;
	
    /* Replace with your application code */
    while (1) 
    {
		PORTB= 0X80;
		_delay_ms(100);
		PORTB=0X80;
		_delay_ms(1000);
		PORTA= 0X80;
		_delay_ms(100);
		PORTA=0X80;
		_delay_ms(1000);
		PORTC= 0X80;
		_delay_ms(100);
		PORTC=0X80;
		_delay_ms(1000);
		PORTD= 0X80;
		_delay_ms(100);
		PORTD=0X80;
		_delay_ms(1000);
    }
}





