#include "main.h"

/**
 * print_square - prints a square,
 *		followed by a new line.
 *@size: takes input for the size of
 *		the square
 * 
 * Return: 0 (Success)
*/

void print_square(int size)
{
	int num, times;

	for (times = 0; times < size; times++)
	{
		for (num = 0; num < size; num++)
		{
			_putchar(35);
		}
	_putchar('\n');
	}
}
