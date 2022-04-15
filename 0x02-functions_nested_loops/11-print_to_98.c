#include <stdio.h>

/**
 * print_to_98 - Prints all the numbers up or down until 98 deimited by a comma
 * and space.
 * @n: The number from which to begin.
 *
 * Return: none.
 */
void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%d, ", n);
		n++;
	}

	while (n > 98)
	{
		printf("%d, ", n);
		n--;
	}
	printf("%d\n", 98);
}
