#ifndef _lcd_h_
#define _lcd_h_
#include <util/delay.h>
#define LCD_DIRECTION  DDRB			/* Define LCD data port direction */
#define PORT_B PORTB			/* Define LCD data port */
#define RS PINB2				/* Define Register Select pin */
#define EN PINB3 				/* Define Enable signal pin */
void LCD_CMD( unsigned char command );
void LCD_CHAR_WISE( unsigned char ch );
void LCD_INITIALIZATION(void);
void LCD_DISPLAY (char *water_level);
void CLEAR_LCD();

void lcd(void);
void InitADC(void);
uint16_t ReadADC(uint8_t ch);
#endif // _lcd_h_
