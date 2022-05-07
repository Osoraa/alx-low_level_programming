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
	arr = malloc(sizeof(*arr) * height);
	if (arr == NULL)
		return (NULL);

	/* Allocate and Initialize each columns in each row. */
	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(sizeof(**arr) * width);

		if (arr[i] == NULL)
		{
			/* Free everything on malloc failure. */
			/* Current malloc failed, no need to free null ptr. */
			while (i--)
				free(arr[i]);

			free(arr);
			return (NULL);
		}

		for (j = 0; j < width; j++)
			arr[i][j] = 0;
	}

	return (arr);
}
