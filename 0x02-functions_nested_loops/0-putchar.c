#include "main.h"

/**
 * main - Program entry point - Prints the string "_putchar"
 *
 * Returns: 0 if successful, wouldn't compile otherwise
 */
int main(void)
{
	int i;
	char str[9] = "_putchar";

	for (i = 0; i <= 7; i++)
	{
		_putchar(str[i]);
	}
	_putchar(10);
	return (0);
}
