#include <stdio.h>

/**
 * main - Entry point.
 *
 * Description: a C program that print alphabets in reverse
 *
 * Return: 0 (Success)
*/

int main(void)
{
	 char ch;

	ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');

	return (0);
}
