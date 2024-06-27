#include "main.h"

/**
 * _isupper - Entry point
 *
 * Description: checks for uppercase character
 *
 * @c: takes characheter type imput for function
 *
 * Return: 1 if @c is uppercase else 0
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	return (1);
	else
	return (0);
}
