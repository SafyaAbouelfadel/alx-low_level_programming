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

	for (count = 0; cunt < 1024; count++)
	{
		if ((count % 3) || (count % 5))
			sum += count;
	}
	pintf("%d\n", sum);
}
