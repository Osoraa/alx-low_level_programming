#include "main.h"
#include <stdlib.h>

/**
 * rev_string - Reverses a string in place.
 * @s: String to be reversed.
 *
 * Return: None.
 */
void rev_string(char *s)
{
	int end = 0, start, length;
	char *rev;

	while (*(s + end) != '\0')
		end++;

	length = end;

	rev = malloc(length * sizeof(char));

	for (start = 0; start < length; start++)
	{
		*(rev + start) = *(s + end - 1);
		end--;
	}

	*(rev + length) = '\0';

	for (start = 0; *(rev + start) != '\0'; start++)
	{
		*(s + start) = *(rev + start);
	}

	*(s + length) = '\0';
}
