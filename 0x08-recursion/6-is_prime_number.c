#include "main.h"

int is_prime(int n, int itr);
/**
 * is_prime_number - check if an integer is a prime number or not
 * @n: the number to evaluate
 *
 * Return: 1 if n is a prime, 0 if not
*/

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (is_prime(n, n - 1));
}
/**
 * is_prime - calculates if a number is prime
 * @n: number to evaluate
 * @itr: iterator
 *
 * Return: 1 if n is prime, 0 if not
*/

int is_prime(int n, int itr)
{
	if (itr == 1)
		return (1);

	if (n % itr == 0 && itr > 1)
		return (0);

	return (is_prime(n, itr - 1));
}
