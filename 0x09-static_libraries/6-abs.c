#include "main.h"

/**
 * _abs - Computes the absolute value of a given number.
 * @n: number to compute absolute value
 *
 * Return: result of value.
 */
int _abs(int n)
{
	if (n < 0)
		n *= -1;
	return (n);
}
