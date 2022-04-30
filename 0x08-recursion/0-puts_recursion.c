#include "main.h"

/**
 * _puts_recursion - Prints a string and '\n' using recursion.
 * @s: Pointer to string to print.
 *
 * Return: None.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		printf("\n");
	} else
	{
		printf("%c", *s);
		_puts_recursion(++s);
	}
}
