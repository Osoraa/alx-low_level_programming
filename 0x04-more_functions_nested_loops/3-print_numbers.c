#include "main.h"

/**
 * print_numbers - Prints the numbers from 0 through to 9.
 *
 * Return: None.
 */
void print_numbers(void)
{
	char num = '0';

	while (num < ':')
	{
		_putchar(num);
		num++;
	}

	_putchar('\n');
}
