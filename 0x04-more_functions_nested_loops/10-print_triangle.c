#include "main.h"

/**
 * print_triangle - Print a triangle using the '#' character.
 * @size: the size of the triangle.
 *
 * Return: None.
 */
void print_triangle(int size)
{
	int row, column;

	if (size <= 0)
		_putchar('\n');

	for (row = 1; row <= size; row++)
	{
		for (column = 0; column < size; column++)
		{
			if (column < (size - row))
			{
				_putchar(' ');
				continue;
			}

			_putchar('#');
		}

		_putchar('\n');
	}
}
