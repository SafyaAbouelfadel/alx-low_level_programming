#include"main.h"

/**
 * _isalpha - checks if character is a letter
 *		both lowercase or uppercase
 *
 * @c: takes imput from othe function
 *
 * Return: returns 1 is c if true
 *      otherwise always O (success)
*/

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
