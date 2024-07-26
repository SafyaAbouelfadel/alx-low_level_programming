#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers - prints numbers given as parameters
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		printf("%d%s", va_arg(ap, int), (i != n - 1) ? (separator ? separator : "") : "\n");
	}
	va_end(ap);
}
