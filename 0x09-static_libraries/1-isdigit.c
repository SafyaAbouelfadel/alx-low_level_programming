#include "main.h"

/**
 * _isdigit - checks if char is a number
 *
 *
 * @c: takes characheter type imput for function
 *
 * Return: 1 if @c is uppercase else 0
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	return (1);
	else
	return (0);
}
