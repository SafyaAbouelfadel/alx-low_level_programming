#include <unistd.h>
#include "main.h"
 /**
 * —putchar - wri tes the character c to stdout
 * @c: The character to print
 * Return: on success 1.
 *	on error, -1 is returned, and errno is set appropri
 *	ately.
*/
int —putchar(char c)
	return (write(1, &c, 1));
