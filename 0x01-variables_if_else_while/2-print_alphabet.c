#include <stdio.h>

/**
 * main - Entry point.
 *
 * Description: a C program that print alphabets with putchar function
 *
 * Return: 0 (Success)
*/

int main(void)
{
	char ch;

	while (ch > 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
