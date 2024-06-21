#include <stdio.h>

/**
 * main - Entry point.
 *
 * Description: a C program that print alphabets with putchar function
 *	in lower case and upper case
 *
 * Return: 0 (Success)
*/

int main(void)
{
	char chlow;
	char chup;

	chlow = 'a';
	chup = 'A';

	while (chlow <= 'z')
	{
		putchar(chlow);
		chlow++;
	}

	while (chup <= 'Z')
	{
	putchar(chup);
	chup++;
	}
	putchar('\n');

	return (0);
}
