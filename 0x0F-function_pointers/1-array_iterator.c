#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 *			on each element of an array
 *
 * @array: array to iterate
 * @size: size of the array
 * @action: pointer to the function used
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int itr;

	if (!array || !size || !action)
		return;

	for (itr = 0; itr < size; itr++)
		action(array[itr]);
}
