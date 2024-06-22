#include <stdio.h>

/**
 * main - Entry point.
 *
 * Description: a C program that print numbers of base 16 with putchar function
 *
 * Return: 0 (Success)
*/

int main(void)
{
	int number;
	char ch;

	number = 48;
	ch = 'a';

	while (number <= 57)
	{
		putchar(number);
		number++;

	}
	while (ch <= 'f')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
