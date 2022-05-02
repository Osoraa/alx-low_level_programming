#include "main.h"

/**
 * _isupper - Checks is a char is uppercase.
 * @c: Char to be checked.
 *
 * Return: 1 if c is uppercase. 0 otherwise.
 */
int _isupper(int c)
{
	if (c < 65 || c > 90)
		return (0);
	return (1);
}
