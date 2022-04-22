#include "main.h"

/**
 * puts_half - Prints the latter half of a string to stdout.
 * @str: Pointer to location of string to print.
 *
 * Return: None.
 */
void puts_half(char *str)
{
	int end = 0;	/* Variable for iteration */

	while (str[end] != '\0')	/* Find the length of the string */
		end++;

	if (end % 2)			/* If the length is positive, the start of the half string, */
		end = (end + 1) / 2;	/* should be shorter than when length is negative. */
	else
		end /= 2;

	while (str[end] != '\0')		/* Print half string */
		printf("%c", str[end++]);

	putchar('\n');			/* Print new line */
}
