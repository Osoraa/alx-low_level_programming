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
	int **arr = calloc(width * height, sizeof(int));

	/* if (width < 1 || height < 1)
		return (NULL); */

	/* **arr = calloc(width * height, sizeof(int)); */

	if (*arr == NULL)
		return (NULL);

	return (arr);
}
