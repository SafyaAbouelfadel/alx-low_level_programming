#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 *           which contains a copy of the string given as a parameter.
 * @str: the string to duplicate
 *
 * Return: pointer to the duplicated string, or NULL if insufficient memory
 *         was available or str is NULL
*/

char *_strdup(char *str)
{
	char *dup;
	unsigned int i, len;

	if (str == NULL)
		return (NULL);

	/* Calculate the length of the input string */
	for (len = 0; str[len] != '\0'; len++)
		;

	/* Allocate memory for the duplicated string */
	dup = malloc((len + 1) * sizeof(char));

	if (dup == NULL)
		return (NULL);

	/* Copy the string */
	for (i = 0; i <= len; i++)
		dup[i] = str[i];

	return (dup);
}

