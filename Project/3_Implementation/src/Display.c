#include <avr/io.h>
#include<util/delay.h>
#include "Display.h"
#include "Lcd.h"
#define F_CPU 1600000UL
char display()
{
        char Temp[20];
        char start[]="Water Level:";
        TCCR1A|=(1<<COM1A1)|(1<<WGM11)|(1<<WGM10);
        TCCR1B|=(1<<WGM12)|(1<<CS11)|(1<<CS10);//choosing 64 as prescalar as a function oc clock
        DDRB|=(1<<PB1); //set portB
        lcd();
        if((ADC>=0) && (ADC<=200))
        {
        CLEAR_LCD();
        OCR1A=200;
        Temp[0] = '2';
        Temp[1] = '0';
        Temp[2] = '0';
        Temp[3] = ' ';
        Temp[4] = 'L';
        Temp[5] = 't';
        Temp[6] = 'r';
        Temp[7] = 's';
        Temp[8] = '.';
        Temp[9] = '\0';
        LCD_DISPLAY(start);
        LCD_CMD(0xC0);
        LCD_DISPLAY(Temp);
        _delay_ms(10);
        _delay_ms(100);
        }
        else if ((ADC>=201) && (ADC<=400))
        {
        CLEAR_LCD();
        OCR1A=400;
        Temp[0] = '4';
        Temp[1] = '0';
        Temp[2] = '0';
        Temp[3] = ' ';
        Temp[4] = 'L';
        Temp[5] = 't';
        Temp[6] = 'r';
        Temp[7] = 's';
        Temp[8] = '.';
        Temp[9] = '\0';
        LCD_DISPLAY(start);
        LCD_CMD(0xC0);
        LCD_DISPLAY(Temp);
        _delay_ms(100);
        }
        else if((ADC>=401) && (ADC<=600))
        {
        CLEAR_LCD();
        OCR1A=600;
        Temp[0] = '6';
        Temp[1] = '0';
        Temp[2] = '0';
        Temp[3] = ' ';
        Temp[4] = 'L';
        Temp[5] = 't';
        Temp[6] = 'r';
        Temp[7] = 's';
        Temp[8] = '.';
        Temp[9] = '\0';
        LCD_DISPLAY(start);
        LCD_CMD(0xC0);
        LCD_DISPLAY(Temp);
        _delay_ms(100);
        }
        else if((ADC>=601) && (ADC<=800))
        {
        CLEAR_LCD();
        OCR1A=800;
        Temp[0] = '8';
        Temp[1] = '0';
        Temp[2] = '0';
        Temp[3] = ' ';
        Temp[4] = 'L';
        Temp[5] = 't';
        Temp[6] = 'r';
        Temp[7] = 's';
        Temp[8] = '.';
        Temp[9] = '\0';
        LCD_DISPLAY(start);
        LCD_CMD(0xC0);
        LCD_DISPLAY(Temp);
        _delay_ms(100);
        }
        else if((ADC>=801) && (ADC<=1000))
        {
        CLEAR_LCD();
        OCR1A=1000;
        Temp[0] = '1';
        Temp[1] = '0';
        Temp[2] = '0';
        Temp[3] = '0';
        Temp[4] = ' ';
        Temp[5] = 'L';
        Temp[6] = 't';
        Temp[7] = 'r';
        Temp[8] = 's';
        Temp[9] = '.';
        LCD_DISPLAY(start);
        LCD_CMD(0xC0);
        LCD_DISPLAY(Temp);
        _delay_ms(100);
        }
        return 0;
}

