#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - allocates memory using malloc
 * @b: the number of bytes to allocate
 *
 * Return: pointer to the allocated memory
*/

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == 0)
		exit(98);

	return (ptr);
}
