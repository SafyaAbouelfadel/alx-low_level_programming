#include "main.h"

/**
 * *_strpbrk - searches a string for any of a set of bytes
 *
 * @s: string to search
 * @accept: string to match
 *
 * Return: pointer to the byte in s that matches one of the bytes in accept
 *	or NULL if no such byte is found
*/

char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *ptr;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				ptr = &s[i];
				return (ptr);
			}
			j++;
		}
		i++;
	}
	return (0);
}
