#include "main.h"

/**
 * leet - Encodes a string to leet(1337) code.
 * @str: Pointer to string to be encoded.
 *
 * Return: Pointer to resulting string.
 */
char *leet(char *str)
{
	char letters[] = {'A', 'E', 'L', 'O', 'T'};
	int numbers[] = {52, 51, 49, 48, 55};
	size_t i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (str[i] == letters[j] || str[i] == tolower(letters[j]))
			{
				str[i] = numbers[j];
				break;
			}
		}
	}

	return (str);
}
