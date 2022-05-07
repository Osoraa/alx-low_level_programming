#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2-D array of integers.
 *
 * @width: Width of the array.
 * @height: Height of the array.
 *
 * Return: Pointer to a 2D array, NULL on calloc error or either args <= 0.
 */
int **alloc_grid(int width, int height)
{
	int **arr, i, j;

	if (width < 1 || height < 1)
		return (NULL);

	arr = malloc(sizeof(int *) * height);

	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		arr[i] = calloc(width, sizeof(int));

		if (arr[i] == NULL)
		{
			j = i;

			for (i = 0; i < j; i++)
				free(arr[i]);
			free(arr);
			return (NULL);
		}
	}

	return (arr);
}
