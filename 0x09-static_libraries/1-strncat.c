#include "main.h"

/**
 * _strncat - Concatenates two strings up till a given byte number.
 *
 * @dest: Pointer to destination string.
 * @src: Pointer to source string, the string to append to dest.
 * @n: Number of bytes from src to add dest.
 *
 * Return: A pointer to new dest string.
 */
char *_strncat(char *dest, char *src, int n)
{
	char *end = dest;
	int i = 0;

	while (*end != '\0')	/* Find the end of the dest string */
		end++;

	for (i = 0; i < n && src[i] != '\0'; i++)	/* Add src byte contents to dest */
	{
		*end = *(src + i);
		end++;
	}

	*end = '\0';	/* Add null terminating Character. */

	return (dest);
}
