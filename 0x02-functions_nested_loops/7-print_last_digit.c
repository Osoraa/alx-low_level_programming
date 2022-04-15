#include "main.h"

/**
 * print_last_digit - As the name implies oh.
 * @n: number to compute last digit.
 *
 * Return: the last digit of n.
 */
int print_last_digit(int n)
{
	if (n < 0)
		n *= -1;

	n %= 10;
	_putchar(48 + n);

	return (n);
}
