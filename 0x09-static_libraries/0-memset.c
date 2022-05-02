#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte.
 *
 * @s: Pointer to memory to fill.
 * @b: Byte to fill memory 's' with.
 * @n: Number of bytes to fill.
 *
 * Return: Pointer to filled memory.
 */
char *_memset(char *s, char b, unsigned int n)
{
	size_t i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
