/*
 * bluetooth.c
 *
 * Created: 5/16/2019 11:21:18 AM
 * Author : Eswari
 */ 
#ifndef F_CPU
#define F_CPU 16000000UL
#endif

#include <avr/io.h>
#include <inttypes.h>
#include <util/delay.h>
#include <avr/interrupt.h>
#define LED PORTB
char buffer[10];

void USARTInit(uint16_t ubrr_value)
{
	UBRRL=ubrr_value;
	UBRRH=(ubrr_value>>8);
	UCSRC=(1<<URSEL)|(1<<UCSZ0)|(1<<UCSZ1);
	UCSRB=(1<<RXEN)|(1<<TXEN);
}

char USARTReadChar()
{
	while(!(UCSRA&(1<<RXC)))
	{
		
	}
	return UDR;
}
void USARTWriteChar(char data)
{
	while(!(UCSRA&(1<<UDRE)))
	{
		
		
	}
	UDR=data;
}
int main(void)
{
	USARTInit(77);
	DDRB=0XFF;
	char data;
	LED=0;
    while (1) 
    {
		data=USARTReadChar();
		if(data=='1')
		{
			LED|=0XFF;
		}
		else if(data=='2')
		{
			LED=0X00;
        }
    }
	return 0;
}

