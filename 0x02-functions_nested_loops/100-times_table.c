#include "main.h"

/**
 * print_times_table - Prints out a times table, but always starts with 0.
 * @num: Number to stop times table.
 *
 * Return: None
 */
void print_times_table(int num)
{
	if (num >= 0 && num <= 15)
	{
		int row, column;

		for (row = 0; row <= num; row++)
		{
			_putchar('0');

			for (column = 1; column <= num; column++)
			{
				int multiple = row * column;

				if (!(multiple / 10))
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
				} else if (multiple / 10 < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + multiple / 10);
				} else
				{
					_putchar(',');
					_putchar(' ');
					_putchar('0' + (multiple / 10) / 10);
					_putchar('0' + (multiple / 10) % 10);
				}

				_putchar('0' + multiple % 10);
			}

			_putchar('\n');
		}
	}
}
