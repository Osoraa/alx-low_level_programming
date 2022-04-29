#include "main.h"

/**
 * print_chessboard - A Function that prints a Chessboard.
 * @a: Two-dimensional array.
 *
 * Return: None.
 */
void print_chessboard(char (*a)[8])
{
	size_t i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			putchar(a[i][j]);
		}

		putchar('\n');
	}
}
