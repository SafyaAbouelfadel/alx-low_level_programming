#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 *
 * @s: memory area to be filled
 * @b: character to copy
 * @n: number of time to copy b
 *
 * Return: pointer to the memory area s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *mems = s;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (mems);
}
