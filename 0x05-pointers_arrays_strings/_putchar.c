#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: on success 1.
 *	on error, -1 is returned, and errno is set appropri
 *	ately.
*/

int _putchar(char c)
	return (write(1, &c, 1));
