#include"main.h"

/**
 * print_sign - print + if n is greater than zero.
 *		O if n is zero and - if n is less
 *		than zero.
 *
 * @n: takes integertype imput for function
 *
 * Return: returns 1 if +, 0 if 0 and -1 if -
*/

int print_sign(int n)
{
	if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
