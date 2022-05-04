#include "main.h"

/**
 * print_number - Prints an integer to stdout using recursion.
 * @n: Number to print to stdout.
 *
 * Return: None.
 */
void print_number(int n)
{
	int flow = 0;

	if (n < 0)
	{
		if (n == INT_MIN)
		{
			n++;
			flow = 1;
		}

		_putchar('-');
		n *= -1;
	}

	if (n < 10)
		_putchar(n % 10 + 48);
	else
	{
		print_number(n / 10);
		_putchar(n % 10 + 48 + flow);
	}
}
