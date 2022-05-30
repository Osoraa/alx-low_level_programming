#include "main.h"

/**
 * set_bit - Returns the value of a bit at a given index.
 *
 * @n: Pointer to number to set it's index bit.
 * @index: Bit's position to set.
 *
 * Return: Value of bit at index, or 0 on failure.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(*n) * 8)
		return (-1);

	return ((*n |= (1 << index)));
}
