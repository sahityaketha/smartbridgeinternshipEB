/*
 * dcmotpot1.c
 *
 * Created: 5/16/2019 12:54:38 PM
 * Author : Eswari
 */
 #define F_CPU 8000000UL
 #include <avr/io.h>
 #include <util/delay.h>
 void PWM_init()
 {
	 TCCR0=(1<<WGM00)|(1<<WGM01)|(1<<COM01)|(1<<CS00);
	 DDRB|=(1<<PB3);
 }


 int main(void)
 {
	 PWM_init();
	 while (1)
	 {
		 if((PIND&(1<<PD0))==0)
		 {
			 OCR0=150;
			 _delay_ms(12);
		 }
		 if((PIND&(1<<PD1))==0)
		 {
			 OCR0=200;
			 _delay_ms(12);
		 }
	 }
 }





