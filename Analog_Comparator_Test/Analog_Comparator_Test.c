/*
 * Analog_Comparator_Test.c
 *
 * Created: 2015/10/04 3:34:02
 *  Author: gizmo
 *
 * ATiny13
 * Fuse l:7Ah h:FFh
 *
 * 2015.10.04 Tiny13のLチカテスト
 *
 */ 

#define F_CPU 9600000

#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	DDRB = 0x01;
	
    while(1)
    {
        PORTB |= (1 << PB0);
		_delay_ms(500);
		PORTB &= ~(1 << PB0);
		_delay_ms(500);
    }
}