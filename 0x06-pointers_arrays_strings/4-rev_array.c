#include "main.h"

/**
 * reverse_array - Reverses the contents of an array in place.
 *
 * @a: Pointer to the array.
 * @n: Number of elements in the array.
 *
 * Return: None.
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	n--;	/* Accout for zero-based indexing */

	/* Swap the first and last elements progressively until middle of array */
	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i];
		a[n - i] = temp;
	}
}
