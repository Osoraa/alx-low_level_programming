#include "main.h"

/**
 * print_rev - Prints a string to stdout in reverse.
 * @s: String to be printed in reverse.
 *
 * Return: None.
 */
void print_rev(char *s)
{
	int end = 0;

	while (*(s + end) != '\0')
		end++;

	for (; end > 0; end--)
		printf("%c", *(s + end - 1));

	printf("\n");
}
