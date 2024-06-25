#include"main.h"

/**
 * print_alphabet X 10  - utilizes on the _putchar function to print
 *			the alphabet a - z 10 times
 *
 * Description: a C program that utilizes on the _putchar to print 10 times
 *			the alphabete
*/


void print_alphabet_x10(void)
{
	int line, ch;

	for (line = 0; line <= 9; line++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}
