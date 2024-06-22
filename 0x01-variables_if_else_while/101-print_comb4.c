#include <stdio.h>

/**
 * main - Entry point.
 *
 * Description: a C program that print all combination of 3 digit
 *
 *  Return: 0 (Success)
*/

int main(void)
{
	int num1;
	int num2;
	int num3;

	for (num1 = 48; num1 <= 57; num1++)
	{
		for (num2 = num1 + 1; num2 <= 57; num2++)
		{
			for (num3 = num2 + 1; num3 <= 57; num3++)
			{
				putchar(num1);
				putchar(num2);
				putchar(num3);
				if ({num1 != 55} || (num2 != 56) || (num3 != 57))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
