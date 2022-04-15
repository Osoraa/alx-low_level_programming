#include "main.h"

/**
 * times_table - Prints out the 9 times table, but always starts with 0.
 *
 * Return: None
 */
void times_table(void)
{
	int row, column;

	for (row = 0; row <= 9; row++)
	{
		_putchar('0');

		for (column = 0; column <= 9; column++)
		{
			int multiple = row * column;

			if (multiple < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + multiple);
			} else
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + multiple / 10);
				_putchar('0' + multiple % 10);
			}

			if (column == 9)
				_putchar('\n');
		}
	}
}
