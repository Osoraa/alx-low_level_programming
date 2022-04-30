#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse and '\n' using recursion.
 * @s: Pointer to string to print in reverse.
 *
 * Return: None.
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		printf("%c", *s);
	}
}
