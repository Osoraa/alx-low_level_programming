#include "main.h"

/**
 * binary_to_uint - Converts a string of chars to binary.
 * @b: Pointer to string in memory.
 *
 * Return: Function result, or 0 on conversion error.
 */
unsigned int binary_to_uint(const char *b)
{
	char *err;
	size_t result;

	if (!b)
		return (0);

	result = (size_t) strtol(b, &err, 2);
	if (*err)
		return (0);

	return (result);
}
