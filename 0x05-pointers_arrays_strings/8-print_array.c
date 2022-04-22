#include "main.h"

/**
 * print_array - prints n elements of an array.
 * @a: Ponter to array.
 * @n: number of elements to print from the array.
 *
 * Return: None.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == n - 1)			/* If value is the last in the array, print value only */
			printf("%d", a[i]);
		else
			printf("%d, ", a[i]);	/* else, print value followed by comma and space. */
	}

	putchar('\n'); 				/* Print new line */
}
