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
	while (*s != c && *s != '\0')
		s++;
		
	return (s);
 }
