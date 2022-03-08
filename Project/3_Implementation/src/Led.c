#include<avr/io.h>
#include <util/delay.h>
#include"Led.h"
void led()
{
    DDRD &= ~(1<<PIND0); //input pin Port D pin 1
    DDRD &= ~(1<<PIND1);  //input pin Port D pin 2
    /*Giving logic HIGH for the input pins*/
    PORTD |= (1<<PIND0);
    PORTD |= (1<<PIND1);
    /*Giving the output @ pin0 Port B */
    DDRD |= (1<<PIND4);
    if  ( (!(PIND & (1<<PIND0))) & (!(PIND & (1<<PIND1))) )
    {
        PORTD &= ~(1<<PIND4);   //Turns off the motor if both the switches are closed
        _delay_ms(1000);
    }
    else if  ( ((PIND & (1<<PIND0))) & (!(PIND & (1<<PIND1))) )
    {
        PORTD &= ~(1<<PIND4);   
        _delay_ms(1000);
    }
    else
    {
       PORTD |= (1<<PIND4);  //Turns On the motor
        _delay_ms(1000);
    }
}
