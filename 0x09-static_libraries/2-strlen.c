#include "main.h"

/**
 * _strlen - returns the length of a string
 *
 * @s: string to evaluate
 *
 * Return: the length of the string
*/

int _strlen(char *s)
{
	int lenght;

	for (lenght = 0; *s != '\0'; s++)
		lenght++;

	return (lenght);
}
