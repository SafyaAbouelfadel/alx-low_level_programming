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

	number = 0;

	while (number <= 9)
	{
		putchar("%d", number);
		number++;
	}
	putchar('\n');

	return (0);
}
