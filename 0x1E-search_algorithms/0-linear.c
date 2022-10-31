#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array of integers.
 * 
 * @array: Array of integers in which to search for value.
 * @size: Size of the array of integers.
 * @value: Value to find in array.
 * 
 * Returns: Index location of value in array, or -1 otherwise.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked at array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
