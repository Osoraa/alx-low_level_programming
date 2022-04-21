#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: Pointer to the string value.
 *
 * Return: Length of the string.
 */
int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}

	return (count);
}
