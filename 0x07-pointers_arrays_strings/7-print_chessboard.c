#include "main.h"

/**
 * print_chessboard - prints chessboard
 *
 * @a: array to be printed
 *
*/
void print_chessboard(char (*a)[8])
{
	int height, weight;

	for (height = 0; height < 8; height++)
	{
		for (weight = 0; weight < 8; weight++)
		{
			_putchar(a[height][weight]);
		}
		_putchar('\n');
	}
}
