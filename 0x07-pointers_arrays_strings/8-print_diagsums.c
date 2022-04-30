#include "main.h"

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix.
 *
 * @a: Pointer to the 2D array to print diaonals of.
 * @size: Size of the 2D array, i.e. array[size][size].
 *
 * Return: None.
 */
void print_diagsums(int *a, int size)
{
	int i = 0;
	long sum1 = 0;
	long sum2 = 0;

	while (i < size)
	{
		/* Add value, i of line i. e.g. array[i][i] */
		sum1 += *(a + (i * size) + i);

		/* Add value, size-i, of line i. e.g. array[i][size - i] */
		/* Subtract 1 for zero-numbering of array */
		sum2 += *(a + (i * size) + (size - i) - 1);
		i++;
	}

	printf("%ld, %ld", sum1, sum2);
	
}
