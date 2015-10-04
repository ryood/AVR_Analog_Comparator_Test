/*
 * Analog_Comparator_Test.c
 *
 * Created: 2015/10/04 3:34:02
 *  Author: gizmo
 *
 * ATiny13
 * Fuse l:7Ah h:FFh
 *
 * PB0: AIN1 �R���p���[�^�\���]����
 * PB4: LED
 * 
 * 2015.10.04 Tiny13�R���p���[�^�e�X�g
 * 2015.10.04 Tiny13��L�`�J�e�X�g
 *
 */ 

#define F_CPU 9600000

#include <avr/io.h>
#include <avr/interrupt.h>
#include <util/delay.h>

ISR (ANA_COMP_vect)
{
	if (ACSR & (1 << ACO))
	{
		PORTB |= (1 << PB4);
	}
	else
	{
		PORTB &= ~(1 << PB4);
	}
}

int main(void)
{
	DDRB = 0x00;
		
	// LED output
	DDRB |= (1 << PB4);
	
	// AIN1���o���h�M���b�v�E���t�@�����X�A�����ݗL����
	ACSR = (1 << ACBG) | (1 << ACIE);
	
	sei();
	
    while(1)
    {	
		/*	
		PORTB |= (1 << PB4);
		_delay_ms(500);
		PORTB &= ~(1 << PB4);
		_delay_ms(500);
		*/
		
    }
}