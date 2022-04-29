#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 *
 * @s: String to check for prefix substring in.
 * @accept: Prefix subtring to check for.
 *
 * Return: Length in bytes of the appearance of a string character in prefix.
 */
unsigned int _strspn(char *s, char *accept)
{
	size_t count = 0;
	short i;

	for (i = 0; accept[i] != '\0'; i++)
	{
		/* Check if first letter in s is in accept string */
		if (s[0] == accept[i])
		{
			/* Move s pointer, increase count, reset i */
			s++;
			count++;
			i = -1;
		}
	}

	return (count);
}
