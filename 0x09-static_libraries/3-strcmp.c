#include "stdio.h"

/**
 * _strcmp - compares two strings for equality.
 *
 * @s1: Pointer to first string for comparison.
 * @s2: Pointer to second string for comparison.
 *
 * Return: the magnitude of difference between individual characters compared.
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	/* Return 0 if strings are equal, else return current individual char diff */
	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0')
			return (0);

		i++;
	}

	return (s1[i] - s2[i]);
}
