#include "main.h"

/**
 * print_number - Prints an integer to stdout using recursion.
 * @n: Number to print to stdout.
 *
 * Return: None.
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}

	if (n < 10)
		_putchar(n % 10 + 48);
	else
	{
		print_number(n / 10);
		_putchar(n % 10 + 48);
	}
}
