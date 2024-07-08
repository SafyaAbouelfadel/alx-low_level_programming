#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 *
 * @a: pointer to the first element of the matrix
 *
 * @size: the size of the matrix (number of rows/columns)
*/

void print_diagsums(int *a, int size)
{
	int row;
	unsigned int sum1 = 0, sum2 = 0;

	for (row = 0; row < size; row++)
	{
		sum1 += a[row * size + row];
		sum2 += a[row * size + (size - 1 - row)];
	}
	printf("%d, %d\n", sum1, sum2);
}
