
#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>

// The output file from notegen.pl script
#include "notes2.h"
#include "audio.h"
#include "midi.h"




/* //EMils fuckery
//a:6,b:5,c:4,d:3,e:2,f:1,g:0
#define ZERO  0b00111111
#define ONE   0b00001100
#define TWO   0b01011011
#define THREE 0b01011110
#define FOUR  0b01101100
#define FIVE  0b01110110
#define SIX   0b01110111
#define SEVEN 0b00011100	
#define EIGHT 0b01111111
#define NINE  0b01111100
*/

#define ZERO  0b01111110
#define ONE   0b00110000
#define TWO   0b01101101
#define THREE 0b01111001
#define FOUR  0b00110011
#define FIVE  0b01011011
#define SIX   0b01011111
#define SEVEN 0b01110000
#define EIGHT 0b01111111
#define NINE  0b01110011

volatile uint8_t outputNumber[10] = { ZERO, ONE, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE };


volatile uint32_t counter = 0;
volatile char ReceivedByte;
volatile char currentNote;
volatile int LastWasCommand;



// define some macros
#define BAUD 32150                                   // define baud
#define BAUDRATE ((16000000)/(BAUD*16UL)-1)            // set baud rate value for UBRR, in this case it gets set to 31
#define F_CPU 16000000

// function to initialize UART
void uart_init(void)
{
	UBRRH = BAUDRATE;
	UBRRL = (BAUDRATE<<8);
	UCSRB = (1 << RXCIE) | (1 << RXEN);
	UCSRC = (1 << URSEL) | (1 << UCSZ1) | (1 << UCSZ0); //8 bit, 1 stop, no parity
}

ISR(USART_RXC_vect) {
	if ((UDR >> 4) == 0b00001001) {
		lastBitWasOn = 1;
		LastWasCommand = 1;
	}
	else if ((UDR >> 4) == 0b00001000) {
		lastBitWasOn = 0;
		LastWasCommand = 1;
	}
	else if (!((UDR << 7) == 1) && lastBitWasOn && LastWasCommand) {
		ReceivedByte = UDR;
		LastWasCommand = 0;
	}
	else if (!((UDR << 7) == 1) && !lastBitWasOn && LastWasCommand) {
		ReceivedByte = 0;
		LastWasCommand = 0;
	}
}

void PWM_init(){
	DDRD |= (1 << DDD4); //OC1B as output

	// timer1 configuration (for PWM)
    TCCR1A |= (1 << COM1B1) | (1 << WGM11);							// Clear OC1A/OC1B on compare match

	TCCR1B |= (1 << WGM13) | (1 << CS11); 	 											//mode 8, PWM, Phase and Frequency Correct (TOP value is ICR1) prescaler(8)
}

void timer_init(void) {
	TCCR0 |= (1 << CS02);					//1024 prescaler. Overflows about 117.5 times a second.
	TIMSK = (1 << OCIE0);					//Enable timer 0 compare match
	OCR0 = 0b10000101;
}

void initialize() {
	uart_init();
	PWM_init();
	timer_init();
	sei(); //Enable Global interrupts
	DDRC = 0x0F; //Set PORT C PIN 0-3 as Output
	DDRA = 0xFF; //Set PORT A PIN 0-7 as Output
}

ISR(TIMER0_COMP_vect) {
	switch (PORTC) {
	case 0x01:
		PORTA = 0x00;
		PORTC = 0x02;
		PORTA = outputNumber[counter % 10];
		break;
	case 0x02:
		PORTA = 0x00;
		PORTC = 0x01;
		PORTA = outputNumber[(counter / 10) % 10];
		break;
	default:
		PORTC = 0x01;
		PORTA = 0x4A;
	}
}


int main()
{
	initialize();
	currentChannel = 10;
	while(1)
	{
		ICR1H = (midiNotes[channelData[currentChannel][NOTE]] >> 8);
		ICR1L = midiNotes[channelData[currentChannel][NOTE]];
		OCR1B = (midiNotes[channelData[currentChannel][NOTE]] / 2);
		counter = channelData[currentChannel][NOTE];
		channelData[currentChannel][NOTE] = ReceivedByte;
	}

}
