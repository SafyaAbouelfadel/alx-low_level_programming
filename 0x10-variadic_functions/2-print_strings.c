#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - prints strings
 * @separator: separator between strings
 * @n: number of arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	int i = n;
	char *s;
	va_list list;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(list, n);
	
	while (i--)
	{
		s = va_arg(list, char *);
		printf("%s%s", s ? s : "(nil)",
			i ? (separator ? separator : "") : "\n");
	}
}
