#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: Pointer to destination string.
 * @src: Pointer to source string, the string to append to dest.
 *
 * Return: A pointer to dest string.
 */
char *_strcat(char *dest, char *src)
{
	char *end = dest;

	while (*end != '\0')
		end++;

	while (*src != '\0')
	{
		*end = *src;
		src++;
		end++;
	}

	*end = '\0';

	return (dest);
}
