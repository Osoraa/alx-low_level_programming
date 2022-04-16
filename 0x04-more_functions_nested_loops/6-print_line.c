#include "main.h"

/**
 * print_line - Prints a line on the terminal.
 * @n: Length of line.
 *
 * Return: None.
 */
void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
