#include"main.h"

/**
 * _islower - function to check if
 *	character is lowercase
 * @c: checks input of function
 *
 * Return: returns I if •c • is lowercase
 *	otherwise always O (success)
*/

int _islower(int c)
{
	char c;

	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
