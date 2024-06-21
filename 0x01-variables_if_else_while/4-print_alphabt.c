#include <stdio.h>

/**
 * main - Entry point.
 *
 * Description: a C program that print alphabets with putchar function
 *	wile skipping 'e' and 'q'.
 *
 * Return: 0 (Success)
*/

int main(void)
{
	char ch;

	ch = 'a';

	while (ch <= 'z')
	{
		if (ch == 'e' || ch == 'q')
		{
			ch++,
		}
		else
		{
			putchar(ch);
			ch++;
		}
	}
	putchar('\n');

	return (0);
}
