#include "main.h"
#include <stdio.h>
/**
 * *_strstr - locates a substring
 *
 * @haystack: string
 * @needle: substring
 *
 * Return: pointer to the beginning of the located substring,
 * or NULL if the substring is not found
*/

char *_strstr(char *haystack, char *needle)
{
	int haystack_i, needle_i;

	for (haystack_i = 0; haystack[haystack_i] != '\0'; haystack_i)
	{
		for (needle_i = 0; needle[needle_i] != '\0'; needle_i++)
		{
			if (haystack[haystack_i + needle_i] != needle[needle_i])
				break;
		}
		if (needle[needle_i] == '\0')
			return (haystack + haystack_i);
	}
	return (0);
}
