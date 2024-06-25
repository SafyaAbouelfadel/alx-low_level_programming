#include "main.h"
/**
 * main - Entry point
 *
 * Description: prints -putchar using putchar prototype
 *
 * Return: Always O (Success)
*/
#include <stdio.h>

int main(void)
{
	char str[] = "_putchar";
	int ch;

	for (ch = 0; ch < 8; ch++)

		_putchar(str[ch]);
	putchar('\n');

	return (0);
}
