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

	num1 = 48;
	num2 = 48;
	num3 = 48;

	while (num1 <= 57)
	{
		putchar(num1);
		num1++;
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
	while (num3 <= 57)
	{
		if (num2 >= num3)
		{
			num3++;
		}
		else
		{		      
		putchar(num3);
		num3++;
		}
	}
	if (num1 >= 55 && num2 >= 56 && num3 >= 57)
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
