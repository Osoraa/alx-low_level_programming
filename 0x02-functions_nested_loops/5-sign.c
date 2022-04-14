#include "main.h"

/**
 * print_sign - Prints the sign/coefficient of a number, 0 if number is zero.
 * @n: number to check for sign coefficient.
 *
 * Return: 1 if positive, -1 if negative and 0 otherwise.
 */
int print_sign(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return (0);
	} else if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	_putchar('-');
	return (-1);
}
