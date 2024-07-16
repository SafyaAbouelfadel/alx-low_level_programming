#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to the newly allocated space in memory containing
 *         the concatenated string, or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	unsigned int i, j, len1 = 0, len2 = 0;

	/* Treat NULL as an empty string */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* Calculate the length of both strings */
	for (len1 = 0; s1[len1] != '\0'; len1++)
		;
	for (len2 = 0; s2[len2] != '\0'; len2++)
		;

	/* Allocate memory for the concatenated string */
	concat = malloc((len1 + len2 + 1) * sizeof(char));
	if (concat == NULL)
		return (NULL);

	/* Copy the contents of s1 to the new string */
	for (i = 0; i < len1; i++)
		concat[i] = s1[i];

	/* Copy the contents of s2 to the new string */
	for (j = 0; j < len2; j++)
		concat[i + j] = s2[j];

	/* Null terminate the new string */
	concat[i + j] = '\0';

	return (concat);
}
