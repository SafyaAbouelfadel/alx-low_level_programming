#include "main.h"

/**
 * string_toupper - changes lowercase letters of a string
 * to uppercase
 *
 * @str: string to modify
 *
 * Return: upper letter string
*/

char *string_toupper(char *str)
{
	char *upper_str = str;

	while (*str != '\0')
	{
		if (*str >= 97 && *str <= 122)
		{
			*str -= 32;
		}
	str++;
	}

	return (upper_str);
}
