/*
 * servomotor.c
 *
 * Created: 5/16/2019 2:57:05 PM
 * Author : Eswari
 */ 

#include <avr/io.h>
#define F_CPU 16000000UL
#include <util/delay.h>


int main(void)
{
	TCCR1A|=(1<<COM1A1)|(1<<COM1B1)|(1<<WGM11);
	TCCR1B|=(1<<WGM13)|(1<<WGM12)|(1<<CS11)|(1<<CS10);
	ICR1=4999;
	DDRD|=(1<<PD5);   
    while (1) 
    {
		OCR1A=97;//0 DEGREE
		_delay_ms(500);
		OCR1A=280;//90 DEGREE
		_delay_ms(500);
		OCR1A=535;//180 DEGREE
		_delay_ms(500);
    }
}

