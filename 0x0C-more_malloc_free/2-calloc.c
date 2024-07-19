#include <stdlib.h>
#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 * @str: memory area to be filled
 * @b: constant to copy
 * @n: number of time to copy b
 *
 * Return: pointer to the memory area str
 */
char *_memset(char *str, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		str[i] = b;
	}

	return (str);
}

/**
 * *_calloc - allocates memory for an array using malloc
 * @nmemb: length of the array
 * @size: size of each element
 *
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *cal;

	if (nmemb == 0 || size == 0)
		return (NULL);

	cal = malloc(size * nmemb);

	if (cal == NULL)
		return (NULL);

	_memset(cal, 0, nmemb * size);

	return (cal);
}
