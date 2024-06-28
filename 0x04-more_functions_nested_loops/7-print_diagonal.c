#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 *
 * @n: takes numiric input for function
 *
 * Return: 0 (Success)
*/

void print_diagonal(int n)
{
	int num, lines, phyramid;

	phyramid = 0;

	if (n > 0)
	{
		for (num = 0; num < n; num++)
		{
			for (lines = 0; lines < phyramid; lines++)
			{
				_putchar(' ');
			}
		phyramid++;
		_putchar(92);
		_putchar('\n');
		}
	}
	else
		_putchar('\n');
	_putchar('\n');
}
