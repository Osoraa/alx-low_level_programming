#include "main.h"

/**
 * print_most_numbers - Prints numbers 0 through to 9 excluding 2 and 4.
 *
 * Return: None.
 */
void print_most_numbers(void)
{
	char num = '0';

	while (num < ':')
	{
		if (num == '2' || num == '4')
		{
			num++;
			continue;
		}

		_putchar(num);
		num++;
	}

	_putchar('\n');
}
