#include "main.h"

/**
 * print_alphabet - Prints lowercase alphabets
 *
 * Return: none
 */
void print_alphabet(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar(10);
}
