#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 *
 * @s: string to calculate th length of.
 *
 * Return:length of the string
*/

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		return (len +  _strlen_recursion(s + 1));
	}
	return (0);
}
