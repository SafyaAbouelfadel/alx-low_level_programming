#include "main.h"
/**
 * leet - encodes a string in 1337
 *
 * @s: string to be encoded
 *
 * Return: the resulting string;
*/

char *leet(char *s)
{
	int i;

	char *key = "aAeEoOtTlL";
	char *value = "4433007711";
	while (*s != '\0')
	{
		for (i = 0; i < 10; i++)
		{
			if ( *s == key[i])
			{
				*s = value + 48;
			}
		}
	s++;
	}
}
