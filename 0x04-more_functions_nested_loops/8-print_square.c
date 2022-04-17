#include "main.h"

/**
 * print_square - Print a square using the '#' char.
 * @size: the size of the square.
 *
 * Return: None.
 */
void print_square(int size)
{
	int row = 0;

	while (row < size)
	{
		int column = 0;

		while (column < size)
		{
			_putchar('#');
			column++;
		}

		_putchar('\n');
		row++;
	}
	_putchar("\n");
}
