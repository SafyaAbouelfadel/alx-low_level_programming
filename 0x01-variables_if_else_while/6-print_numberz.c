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
		putchar((char)number);
		number++;
	}
	putchar('\n');

	return (0);
}
