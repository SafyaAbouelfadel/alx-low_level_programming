#include "main.h"

/**
 * *_strncpy - copies the string pointed to by src
 * to the buffer pointed to by dest
 * @dest: pointer to the buffer in which we copy the string
 * @src: string to be copied
 * @n: number of bytes to copy
 *
 * Return: the pointer to dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0' && i < n);

	return (dest);
}
