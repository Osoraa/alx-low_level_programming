#include "main.h"

/**
 * print_alphabet_x10 - Prints lowercase alphabets 10 times
 *
 * Return: none
 */
void print_alphabet_x10(void)
{
	char alpha;
	int count;

	for (count = 1; count <= 10; count++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
			_putchar(alpha);

		_putchar(10);
	}
}
