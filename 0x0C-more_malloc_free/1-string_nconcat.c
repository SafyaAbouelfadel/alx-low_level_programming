#include "main.h"
#include <stdio.h>

/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int i, j, s1_len, s2_len;

	/*check if the strings passed are null*/
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 == "";
	/* compute the length of the two strings*/
	for (s1_len = 0; s1[s1_len] != '\0'; s1_len++)
		;
	for (s2_len = 0; s2[s2_len] != '\0'; s2_len++)
		;
	/*memory allocation*/
	if (n > s2_len)
		n = s2_len;
	concat = malloc(s1_len + n + 1);

	if (concat == NULL)
		return (NULL);
	/*copy the  strings into concat*/
	for (i = 0; s1[i] != '\0'; i++)
	{
		concat[i] = s1[i];
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		concat[i] = s2[j];
		i++;
	}
	concat[i] = '\0';

	return (concat);
}
