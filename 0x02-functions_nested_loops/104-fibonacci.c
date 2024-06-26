#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the first 98 Fibonacci numbers
 * Return: 0 (Success)
 */

void print_fibonacci_98(void);

int main(void)
{
	print_fibonacci_98();
	return (0);
}

/**
 * print_fibonacci_98 - Prints the first 98 Fibonacci numbers
 *
 * Description: Prints the first 98 Fibonacci numbers, starting with
 * 1 and 2, followed by a new line. Numbers are separated by a comma
 * and a space.
 */

void print_fibonacci_98(void)
{
	unsigned long num1_high = 0, num1_low = 1;
	unsigned long num2_high = 0, num2_low = 2;
	unsigned long high, low;
	int count;

	printf("%lu, %lu", num1_low, num2_low);
	for (count = 2; count < 98; count++)
	{
	high = num1_high + num2_high;
	low = num1_low + num2_low;
	if (low >= 10000000000)
	{
		high++;
		low -= 10000000000;
	}

	printf(", ");
	if (high > 0)
		printf("%lu%010lu", high, low);
	else
		printf("%lu", low);

	num1_high = num2_high;
	num1_low = num2_low;
	num2_high = high;
	num2_low = low;
	}
	printf("\n");
}
