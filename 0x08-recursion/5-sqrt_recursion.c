#include "main.h"

/**
 * recursion_sqrt - Finds the square root of a number.
 * @i: Potential answer.
 * @n: Target number.
 * Return: i if its a root on n and is natural, else -1.
 */
int recursion_sqrt(int i, int n)
{
	if (n == i * i)
		return (i);
	else if (n < i * i)
		return (-1);

	/* This return ensures that this function has a return value.*/
	return (recursion_sqrt(i + 1, n));
}

/**
 * _sqrt_recursion - Finds the natural square rot of a number using recursion.
 * @n: Value to compute it's square root.
 *
 * Return: The natural square root of n. Else, returns -1.
 */
int _sqrt_recursion(int n)
{
	/* Base cases */
	if (n == 1)
		return (1);
	if (n < 4)
		return (-1);

	return (recursion_sqrt(2, n));
}
