#include "main.h"

/**
 * _strcpy - Copies a string to another variable.
 *
 * @src: Source string to copy.
 * @dest: Destination or where to copy source string to.
 *
 * Return: Pointer to destination/new string.
 */
char *_strcpy(char *dest, char *src)
{
	int i, end = 0;

	while (*(src + end) != '\0')	/* Find length of src string */
		end++;

	for (i = 0; i <= end; i++)	/* Copy src string to dest string */
		dest[i] = *(src + i);

	return (dest);
}
