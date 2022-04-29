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

	/* Find first letter of needle in haystack,
	 * and mark that as the starting point. */

	/* Check if all the letters in needle follow the letter found.

	/* If they do, return the pointer to the lettter found.
	 * else, find the next occurence of the first letter in needle.

	Return null if none is found.*/

	for (i = 0; haystack[i] || needle[i]; i++)
	{
		if (haystack[i] == needle[i])
			continue;

		i = -1;
		haystack++;
	}

	if (*haystack == *needle)
		return (haystack);

	return ('\0');
}
