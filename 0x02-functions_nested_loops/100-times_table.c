#include "main.h"

/**
 * times_table - prints the n times table
 *
 * @n: take integer input for function
 * Example Table
 * 0,  0,  0,  0, ..
 * 0,  1,  2,  3, ..
 **/

void print_times_table(int n)
{
	int num1, num2, sum;

	if (n <= 15 && n >= 0)
	{
		for (num1 = 0; num1 <= n; num1++)
		{
			_putchar(48);
		for (num2 = 1; num2 <= n; num2++)
		{
			_putchar(',');
			_putchar(' ');

			sum = num1 * num2;
			if (sum < 10)
				_putchar(' ');
			if (sum <= 99)
				_putchar(' ');
			if (sum >= 100)
			{
				_putchar((sum / 100) + 48);
				_putchar((sum / 10) + 48);
			}
			else if (sum <= 99 && sum >= 10)
				_putchar((sum / 10) + 48);
			_putchar(sum % 10 + 48);
		}
	_putchar('\n');
		}
	}
}
