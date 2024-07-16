#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: argument count
 * @av: argument vector
 *
 * Return: pointer to the new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int i, j, k, total_length = 0;
	char *str;

	/* Return NULL if ac == 0 or av == NULL */
	if (ac == 0 || av == NULL)
		return (NULL);

	/* Calculate the total length of the concatenated string */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			total_length++;
		total_length++;  /* For the newline character */
	}

	/* Allocate memory for the new string */
	str = (char *)malloc(sizeof(char) * (total_length + 1));
	if (str == NULL)
		return (NULL);

	/* Copy the arguments into the new string */
	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			str[k++] = av[i][j];
		str[k++] = '\n';
	}
	str[k] = '\0';  /* Null-terminate the new string */

	return (str);
}
