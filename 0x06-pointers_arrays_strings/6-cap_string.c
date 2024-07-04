#include "main.h"

/**
 * cap_string - capitalizes every word of a string
 *
 * @str: string to modify
 *
 * Return: the result string
*/

char *cap_string(char *str)
{
	char *cap_str = str;
	int i, c;
	char * spec[12] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{','}'}

	for (i = 0; str[i] != 0; i++)
	{
		if (i == 0 && str[i] >= 97 && str[i] <= 122)
		{
			str[i] -= 32;
		}
		for (c = 0; c <= 12; c++)
		{
			if (str[i] == spec[c])
			{
				if (str[i] >= 97 && str[i] <= 122)
				{
					str[i + 1] -= 32;
				}
			}
		}
	}

	return (cap_str);
}
