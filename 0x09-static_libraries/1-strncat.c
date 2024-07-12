#include "main.h"
/**
 * _strncat - concatenates two strings
 *
 * @dest: string to append to
 *
 * @src: string to add
 *
 * @n: the number the src string will stop
 *
 * Return: return a pointer to the resulting string
*/

char *_strncat(char *dest, char *src, int n)
{
	char *dest_copy = dest;
	int i;

	while (*dest != '\0')
	{
		dest++;
	}
	for (i = 0; i < n && *src != '\0'; i++)
	{
		*dest = *src;
		dest++;
		src++;
	}
	 *dest = '\0';
	return (dest_copy);
}
