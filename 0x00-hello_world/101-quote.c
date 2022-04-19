#include <stdio.h>

/**
 * main - Program entry point
 *
 * Return: 0 if successful, 1 otherwise
 */
int main(void)
{
	char *text = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	while (*text != '\0')
	{
		putchar(*text);
		text++;
	}

	return (0);
}
