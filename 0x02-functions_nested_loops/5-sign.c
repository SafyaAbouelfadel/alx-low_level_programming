#inlude"main.h"

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
		putchar('-');
		return (-1);
	}
	else if (n > 0)
	{
		putchar('+');
		return (1);
	}
	else
	{
		purchar('0');
		return (0);
	}
}
