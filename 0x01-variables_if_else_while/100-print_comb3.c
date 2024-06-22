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
	int num1;
	int num2;

	num1 = 48;
	num2 = 48;
	while (num1 <= 57)
	{
		putchar(num1);
	while (num2 <= 57)
	{
		if (num1 >= num2)
		{
			num2++;
		}
		else
		{
			putchar(num2);
			num2++;
		}
	}
	num1++;
	if (num1 >= 56 && num2 >= 57)
	{
		return (0);
	}
	else
	{
		putchar(',');
		putchar(' ');
	}
	}
	putchar('\n');

	return (0);
}
