#include "main.h"

/**
 * _isdigit - Checks if input is a digit.
 * @n: value to be checked.
 *
 * Return: 1 if n is a digit. 0 otherwise.
 */
int _isdigit(int n)
{
	if (n < 48 || n > 57)
		return (0);
	return (1);
}
