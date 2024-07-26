#include "variadic_functions.h"
#include <stdio.h>

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		printf("%d%s", va_arg(ap, int), separator ? separator : "" );
	}
	va_end(ap);

	printf("\n");
}
