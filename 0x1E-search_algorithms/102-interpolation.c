#include "search_algos.h"

/**
 * interpolation_search - Search for a value in a sorted array
 * using Interpolation search algorithm.
 *
 * @array: Pointer to the first element of the sorted array.
 * @size: Number of elements in array.
 * @value: Value to search for in array.
 *
 * Return: the first index where value is located, or -1 on failure
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t i, l, h;

	if (array == NULL)
		return (-1);

	for (l = 0, h = size - 1; h >= l;)
	{
		i = l + (((double)(h - l) / (array[h] - array[l])) * (value - array[l]));
		if (i < size)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", i);
			break;
		}

		if (array[i] == value)
			return (i);
		if (array[i] > value)
			h = i - 1;
		else
			l = i + 1;
	}

	return (-1);
}
