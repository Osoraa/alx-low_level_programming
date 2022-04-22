#include "main.h"

/**
 * puts2 - Prints every other char of a string to stdout.
 * @str: Pointer to location of string.
 *
 * Return: None.
 */
void puts2(char *str)
{
	int step = 0;

	while (*(str + step) != '\0')
	{
		printf("%c", *(str + step));
		step += 2;
	}

	putchar('\n');
}
