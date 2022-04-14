#include "main.h"

/**
 * main - Program entry point - Prints the string "_putchar"
 *
 * Return: 0 if successful, wouldn't compile otherwise
 */
int main(void)
{
	char *str = "_putchar\n";

	while (*str)
	{
		_putchar(*str);
		str++;
	}
	return (0);
}
