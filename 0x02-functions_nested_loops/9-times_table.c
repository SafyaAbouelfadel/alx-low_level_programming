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
		for (num2 = 0; num2 <= 9; num2++)
		{
			sum = num1 * num2;
			if (sum < 10)
			{
			_putchar(sum + 48);
			}
			else
			{
			_putchar(sum / 10 + 48);
			_putchar(sum % 10 + 48);
			}
			_putchar(',');

			if ((sum / 10) == 0)
			{
				_putchar(' ');
				_putchar(' ');
			}
			else if (num1 == 9 && num2 == 9)
			{
			_putchar('\n');
			}
			else
			_putchar(' ');
		}
	_putchar('\n');
	}
}
