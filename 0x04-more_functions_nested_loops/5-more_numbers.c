#include "main.h"

/**
 * more_numbers - Print 10 times the numbers
 *		from 0 to 14
 *
 * Return: 0 (Success)
*/

int more_numbers(void)
{
	int num, times;

	for (times = 0; times <= 10; times++)
	{
		for (num = 0; num <= 14; num++)
		{
			_putchar(num + 48);
		}
	_putchar('\n');
	}
	_putchar('\n');
}
