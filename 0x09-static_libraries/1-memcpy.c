#include "main.h"

/**
 * _memcpy - A function that copies memory area n from src to dest.
 *
 * @dest: Pointer to destination memory.
 * @src: Pointer source to memory
 * @n: Number of bytes to copy to dest.
 *
 * Return: Pointer to modified destination memory.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	size_t i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
