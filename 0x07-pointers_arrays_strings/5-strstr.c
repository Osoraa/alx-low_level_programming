#include "main.h"

/**
 * _strstr - Locates a substring in a string.
 *
 * @haystack: String in which to search for substring.
 * @needle: Substring pto find in haystack.
 *
 * Return: Pointer to occurence of needle in haystack.
 */
char *_strstr(char *haystack, char *needle)
{
	short i;

	for (i = 0; haystack[i] != '\0' && needle[i] != '\0'; i++)
	{
		if (haystack[i] == needle[i])
			continue;

		haystack++;
		i = -1;
	}

	for (i = 0; needle[i]; i++)
	{
		if (haystack[i] != needle[i])
			return ('\0');
	}

	return (haystack);
}
