#include "main.h"

/**
 * puts_half - Prints the latter half of a string to stdout.
 * @str: Pointer to location of string to print.
 *
 * Return: None.
 */
void puts_half(char *str)
{
	int end = 0;

	while (str[end] != '\0')
		end++;

	end /= 2;

	while (str[end] != '\0')
		printf("%c", str[end++]);

	putchar('\n');
}
