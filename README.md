# atmega32_LCD
2x16 character LCD Library for ATmega32/ATmega16

It is a simple LCD library that can be used for 8-bit mode or 4-bit mode.

The ports used here are : 

PORTC in Microcontroller Connecting to Data bits in LCD (From D0 to D7).

PINB7 in Microcontroller Connecting to RS bit in LCD.

PINB6 in Microcontroller Connecting to RW bit in LCD.

PINB5 in Microcontroller Connecting to EN bit in LCD.

In 4-bit mode the last 4 bits of PORTC are connected to the last for bits of LCD(From D4 to D7).


You can change the ports of Microcontroller form lcd_lib.c file in the #define part as :

define LCD_DATA PORTC

define ctrl PORTB

define rs PINB7

define rw PINB6

define en PINB5
