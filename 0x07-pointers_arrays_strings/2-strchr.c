#include "main.h"

/**
 * _strchr - Locates a character in a string.
 *
 * @s: Pointer to string to search.
 * @c: Character in s to locate.
 *
 * Return: Pointer to first occurence of string.
 */
char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}
	if (*(s + i) == c)
		return (s + i);
	return ('\0');
}
