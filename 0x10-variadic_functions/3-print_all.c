#include "variadic_functions.h"

/**
 * format_char - format character
 * @separator: the string seperator
 * @list: argument pointer
*/
void format_char(char *separator, va_list list)
{
	printf("%s%c", separator, va_arg(list, int));
}

/**
 * format_int - format integer
 * @separator: the string seperator
 * @list: argument pointer
*/
void format_int(char *separator, va_list list)
{
	printf("%s%d", separator, va_arg(list, int));
}

/**
 * format_float - format float
 * @separator: the string seperator
 * @list: argument pointer
*/
void format_float(char *separator, va_list list)
{
	printf("%s%f", separator, va_arg(list, double));
}

/**
 * format_string - format string
 * @separator: the string seperator
 * @list: argument pointer
*/
void format_string(char *separator, va_list list)
{
	char *str = va_arg(list, char *);

	switch ((int)(!str))
		case 1:
			str = "(nil)";

	printf("%s%s", separator, str);
}

/**
 * print_all - print anything
 * @format: the format string
*/
void print_all(const char * const format, ...)
{
	int i = 0, a;
	char *separator = "";
	va_list list;
	token_t tokens[] = {
		{"c", format_char},
		{"i", format_int},
		{"f", format_float},
		{"s", format_string},
		{NULL, NULL}
	};

	va_start(list, format);
	while (format && format[i])
	{
		a = 0;
		while (tokens[a].token)
		{
			if (format[i] == tokens[a].token[0])
			{
				tokens[a].f(separator, list);
				separator = ", ";
			}
			a++;
		}
		i++;
	}
	printf("\n");
	va_end(list);
}
