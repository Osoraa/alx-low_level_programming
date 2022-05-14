#include "function_pointers.h"

/**
 * array_iterator - Performs an operation on all members of an array.
 *
 * @array: Array to execute operation on.
 * @size: Size/length of the array, not in bytes.
 * @action: Operation to execute on members of array.
 *
 * Return: None.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (action != NULL && array != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
