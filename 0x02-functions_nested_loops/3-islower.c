#include "main.h"

/**
 * _islower - Checks if a character is lowercase.
 * @c: character to check if lowercase.
 *
 * Return: 1 if lowercase; 0 otherwise
 */
int _islower(int c)
{
	if (c < 'a' || c > 'z')
		return (0);
	return (1);
}
