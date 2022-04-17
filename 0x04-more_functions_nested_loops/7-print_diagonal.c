#include "main.h"

/**
 * print_diagonal - Prints a diagonal line on the terminal.
 * @n: the length of the diagonal line.
 *
 * Return: None.
 */
void print_diagonal(int n)
{
	int space, diagonal;

	if (n <= 0)
		_putchar('\n');

	for (diagonal = 1; diagonal <= n; diagonal++)
	{
		for (space = 1; space < diagonal; space++)
		{
			_putchar(' ');
		}

		_putchar('\\');
		_putchar('\n');
	}
}
