#include "main.h"

/**
 * set_bit - Sets the bit at a given index to 1.
 *
 * @n: Pointer to number to set it's index bit.
 * @index: Bit's position to set.
 *
 * Return: 1 if successful, -1 otherwise.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(*n) * 8)
		return (-1);

	*n |= (1 << index);

	return (1);
}
