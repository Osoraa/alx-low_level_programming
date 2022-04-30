#include "main.h"

/**
 * factorial - finds the factorial of a given number.
 * @n: Input value.
 *
 * Return: Factorial of n.
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return -1;

	return (n * factorial(n - 1));
}
