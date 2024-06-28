#include <stdio.h>
#include <math.h>

/**
 * main - Entry point
 *
 * Description: Finds and prints the largest prime factor
 * of the number 612852475143.
 * Return: 0 (Success)
*/

int main(void)
{
	long num = 612852475143;
	long max_prime = -1;
	long i;
	/* Check for the smallest prime factor (2)*/
	while (num % 2 == 0)
	{
	max_prime = 2;
	num /= 2;
	}
	/*  Check for odd factors from 3 upwards */
	for (i = 3; i <= sqrt(num); i += 2)
	{
		while (num % i == 0)
		{
			max_prime = i;
			num /= i;
		}
	}
	/* If num is still greater than 2, then num is a prime number */
	if (num > 2)
		max_prime = num;
		printf("%ld\n", max_prime);
	return (0);
}
