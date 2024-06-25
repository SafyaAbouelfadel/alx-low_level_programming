#include "main.h"

/**
 * main - Entry point
 *
 * Description: computes the sum of all
 *		the multiples of 3 or 5
 *		below 1024 (excluded)
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int sum, count;

	sum =o;

	for (count = 0; count < 1024; count++)
	{
		if ((count % 3) || (count % 5))
			sum += count;
	}
	printf("%d\n", sum);

	return (0);
}
