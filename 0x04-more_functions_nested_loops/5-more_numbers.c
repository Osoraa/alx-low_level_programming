#include "main.h"

/**
 * more_numbers - Prints numbers 0 through to 14.
 *
 * Return: None.
 */
void more_numbers(void)
{
	char count = 0;

	while (count < 10)
	{
		char num = 0;

		while (num < 15)
		{
			if (num >= 10)
				_putchar('0' + num / 10);

			_putchar('0' + num % 10);
			num++;
		}

		_putchar('\n');
		count++;
	}
}
