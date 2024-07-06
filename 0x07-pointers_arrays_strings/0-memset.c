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
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < 5; j++)
		{
			s[i] = b;
		}
	return (*s);
}
