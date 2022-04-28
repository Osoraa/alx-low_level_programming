#include "main.h"

/**
 * _strchr - Locates a character in a string.
 *
 * @s: Pointer to string to search.
 * @c: Character in s to locate.
 *
 * Return: Pointer
 */
char *_strchr(char *s, char c)
{
	for (; *s != '\0'; s++)
	{
		if (*s == c)
			return (s);
	}

	return (s);
	/* while (*s != '\0')
	{
		if (*s == c)
			return (s);

		s++;
	}

	return (s); */
}
