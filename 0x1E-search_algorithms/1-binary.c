#include "search_algos.h"

/**
 * binary_search - Binary search algo.
 *
 * @array: Array of integers in which to search for value.
 * @size: Size of the array of integers.
 * @value: Value to find in array.
 *
 * Return: Index of value in array, or -1 otherwise.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i, index = 0, end, odd;

	if (!array || size <= 0)
		return (-1);

	/* Prints array to be searched */

	while (size > 0)
	{
		/* Get end of array */
		end = size - 1;

		/* Print array being searched */
		printf("Searching in array: ");

		for (i = 0; i < end; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		/* If size is odd, make even and find midpoint */
		odd = size % 2;
		size = (size + odd) / 2;

		/* If value is the mid element, return index */
		if (array[size - 1] == value)
			return ((int) (index + size - 1));

		/* If mid is less than the value, then search right array */
		if (array[size - 1] < value)
		{
			array = array + size;
			index += size;
			size -= odd;
		}
		/* Else, left array should be one less smaller current size */
		else
			size--;
	}

	return (-1);
}
