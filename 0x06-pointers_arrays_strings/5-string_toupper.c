#include "main.h"

/**
 * string_toupper - Capitalizes all lowercase letters.
 * @str: Text to be transformed to upper case.
 *
 * Return: Pointer to new string.
 */
char *string_toupper(char *str)
{
	size_t i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] < 97 || str[i] > 122)
			continue;

		str[i] -= 32;
	}

	return (str);
}
