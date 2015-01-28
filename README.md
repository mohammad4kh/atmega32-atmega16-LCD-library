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

#How to use the library !!

First you have to Initialize the LCD by the LCD_init() function (or LCD4_init() in 4-bit mode).

Then use LCD_gotoxy(x,y) function (or LCD4_gotoxy(x,y)) to choose where to write ,the X parameter is the line number, you can choose to write in line 1 or line 2, the Y parameter is the character number in the line.

To type a character you can use LCD_write('character') function (or LCD4_write('character') for 4-bit mode).

To type String you can use LCD_write_string("string")  function (or LCD4_write_string("string") for 4-bit mode).

You can send a custom Command code by using LCD_cmd() function (or LCD4_cmd() for 4-bit mode).
