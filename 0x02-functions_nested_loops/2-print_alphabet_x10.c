#include"main.h"

/**
 * print_alphabet X 10  - utilizes on the _putchar function to print
 *                      the alphabet a - z
*/

void print_alphabet(void)
{
	int line, ch;

	for (line = 0; line <= 9; line++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
	}
	putchar('\n');

}
