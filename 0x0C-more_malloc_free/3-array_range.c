#include "main.h"

/**
 * array_range - A function that creates an array of integers.
 *
 * @min: Minimum number in array.
 * @max: Maximum number in array.
 *
 * Return: Pointer to new int array.
 */
int *array_range(int min, int max)
{
	int i, len = (max - min + 1), *num_array;

	if (min > max)
		return (NULL);

	num_array = malloc(sizeof(*num_array) * len);
	if (num_array == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		num_array[i] = min + i;

	return (num_array);
}
