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

	/* Return NULL if width or heigth is less than 1. */
	if (width < 1 || height < 1)
		return (NULL);

	/* Allocate row pointers, return NULL on error. */
	arr = malloc(sizeof(int *) * height);
	if (arr == NULL)
		return (NULL);

	/* Allocate and Initialize each columns in each row. */
	for (i = 0; i < height; i++)
	{
		arr[i] = calloc(width, sizeof(int));

		/* if (arr[i] == NULL)
		{
			for (j = 0; j <= i; j++)
				free(arr[j]);
			
			free(arr);
			return (NULL);
		} */
	}

	for (i = 0; i < height; i++)
	{
		if (arr[i] == NULL)
		{
			for (j = 0; j < height; j++)
				free(arr[j]);
			free(arr);
			return (NULL);
		}
	}

	return (arr);
}
