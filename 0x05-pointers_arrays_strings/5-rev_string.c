#include "main.h"

/**
 * rev_string - Reverses a string in place.
 * @s: String to be reversed.
 *
 * Return: None.
 */
void rev_string(char *s)
{
	int end = 0, start, length;

	while (*(s + end) != '\0')
		end++;

	length = end;

	char rev[length];

	for (start = 0; start < length; start++)
	{
		rev[start] = *(s + end - 1);
		end--;
	}

	rev[length] = '\0';

	int i;

	for (i = 0; *(rev + i) != '\0'; i++)
	{
		*(s + i) = *(rev + i);
	}

	*(s + length) = '\0';
}
