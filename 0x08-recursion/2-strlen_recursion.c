#include "main.h"

/**
 * _strlen_recursion - Uses recursion to print the length od a given string.
 * @s: String to Find length.
 *
 * Return: Length of s.
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(++s));
	}

	return (0);
}
