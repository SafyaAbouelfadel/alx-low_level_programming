#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * Example Table
 * 0,  0,  0,  0, ..
 * 0,  1,  2,  3, ..
 **/

void times_table(void)
{
	int num1, num2, sum;

	for (num1 = 0; num1 <= 9; num1++)
	{
		_putchar(48);
		for (num2 = 1; num2 <= 9; num2++)
		{
			_putchar(',');
			_putchar(' ');
			sum = num1 * num2;
			if (sum < 10)
				_putchar(' ');
			else
				_putchar(sum / 10 + 48);
			_putchar(sum % 10 + 48);
		}
	_putchar('\n');
	}
}
