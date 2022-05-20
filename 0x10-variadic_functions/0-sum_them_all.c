#include "variadic_functions.h"

/**
 * sum_them_all - Returns the sum of values in a variadic function.
 * @n: Amount of numbers passed.
 *
 * Return: Sum of all the variable arguments.
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum;
	size_t i;
	va_list next;

	va_start(next, n);

	if (!(n))
		return (0);

	for (i = 0, sum = 0; i < n; i++)
		sum += va_arg(next, int);

	va_end(next);

	return (sum);
}
