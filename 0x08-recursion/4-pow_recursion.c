#include "main.h"

/**
 * _pow_recursion - Performs power operation on two numbers using recursion.
 *
 * @x: Value to be raised by.
 * @y: Value to be raised to.
 *
 * Return: The result of the operation.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	} else if (y == 0)
	{
		return (1);
	}

	return (x * _pow_recursion(x, y - 1));
}

