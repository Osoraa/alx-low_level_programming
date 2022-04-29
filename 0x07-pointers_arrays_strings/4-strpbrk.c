#include "main.h"

/**
 * _strpbrk - Returns the first occurence of a set of bytes in a string.
 *
 * @s: String to search for set of bytes in.
 * @accept: Set of bytes to search string s for.
 *
 * Return: Pointer to the first occurence of any byte from accept in s.
 */
char *_strpbrk(char *s, char *accept)
{
	size_t i;

	while (*s != '\0')
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (accept[i] == s[0])
				return (s);
		}

		s++;
	}

	return ('\0');
}
