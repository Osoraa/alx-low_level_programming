#include "function_pointers.h"

/**
 * int_index - Searches for an integer.
 *
 * @array: Array in which to find integer index.
 * @size: Size of the array.
 * @cmp: function to be used to compare values.
 *
 * Return: Index of the first element of array that satisfies the cmp function.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}

	return (-1);
}
