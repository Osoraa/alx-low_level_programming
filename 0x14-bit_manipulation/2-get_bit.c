#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index.
 *
 * @n: Number to index into.
 * @index: Index searched for.
 *
 * Return: Value of bit at index, or 0 on failure.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	return ((n & (1 << index)) >> index);
}
