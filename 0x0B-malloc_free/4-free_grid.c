#include "main.h"

/**
 * free_grid - Frees a Two-dimensional array.
 *
 * @grid: Two dimentsional array to free.
 * @height: Height of the 2-dimensional array.
 *
 * Return: None.
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
