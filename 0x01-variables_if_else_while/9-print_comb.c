#include <stdio.h>

/**
 * main - Entry point.
 *
 * Description: a C program that print numbers with printf function
 *
 * Return: 0 (Success)
*/

int main(void)
{
	int number;

	number = 48;

	while (number <= 57)
	{
		putchar(number);
		if (number < 57)
		{
			putchar(',');
			putchar(' ');
			number++;
		}
		else
		{
			number++;
		}
	}
	putchar('\n');

	return (0);
}
