#include "main.h"

/**
 * _strncpy - Copies n bytes of a string to a location.
 *
 * @dest: Destination to copy string.
 * @src: pointer to the string to copy.
 * @n: number of bytes of src to copy to dest.
 *
 * Return: Pointer to copied dest string.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)	/* Copy until n bytes are copied */
		dest[i] = src[i];			/* or end of string is reached. */

	for (; i < n; i++)		/* Fill dest with '\0' until n bytes is reached */
		dest[i] = '\0';

	return (dest);			/* Return dest */
}

