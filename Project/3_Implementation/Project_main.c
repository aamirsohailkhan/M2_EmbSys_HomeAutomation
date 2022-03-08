/**
 * @file Project_main.c
 * @author K A AMIRA SOHAIL  (sohailkalkapur@gmail.com)
 * @brief : A part of Home automation project. 
 * @version 0.1
 * @date 2022-03-08
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <avr/io.h>
#include"Led.h"
#include"Lcd.h"
#include"Display.h"
#include<util/delay.h>
int main(void)
{
    LCD_INITIALIZATION();
    while(1)
    {
        led(); 
        lcd(); 
        display(); 
    }
  return 0;
}
