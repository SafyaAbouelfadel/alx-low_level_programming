#include "main.h"

/**
 * puts_half - prints half of a string
 *
 * followed by a new line
 *
 * @str: string to be printed
*/

void puts_half(char *str)
{
	int i, n, len;

	len = 0;

	while (str[len] != 0)
		++len;

	if ((len % 2) == 0)
	{
		for (i = len / 2; str[i] != 0; i++)
			_putchar(str[i]);
	}
	else
	{
		for (n = ((len - 1) / 2); str[n] != 0; n++)
			_putchar(str[n]);
	}	
	_putchar('\n');
	
}
