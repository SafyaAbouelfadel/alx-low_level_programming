#include "main.h"

/**
 * print_line - draws n number of straight line
 *
 * @n: takes numiric input for function
 *
 * Return: 0 (Success)
*/

void print_line(int n)
{
	int num;

	if (n > 0)
	{
	for (num = 0; num < n; num++)
		_putchar('_');
	}
	_putchar('\n');
}
