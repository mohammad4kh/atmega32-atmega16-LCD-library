#define F_CPU 8000000UL    //crystal 8MHz
#include "lcd_lib.h"
int main(void)
{
	DDRC = 0xFF;
	DDRB = 0xFF;
	LCD4_init();
	LCD4_gotoxy(1,1);
	LCD4_write_string("Mohammad");
	LCD4_gotoxy(2, 9);
	LCD4_write_string("Khaled");
	while(1)
	{
		// No Thing HERE !!!
	}
}