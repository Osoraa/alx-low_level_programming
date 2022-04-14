//#include <unistd.h>
#include "main.h"

/**
 * main - Program entry point - Prints the string "_putchar"
 *
 * Return: 0 if successful, wouldn't compile otherwise
 */
int main(void)
{
	int i;
	char *str = "_putchar\n";

	while (*str)
	{
		_putchar(*str);
		str++;
	}
	return (0);
}

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
//int _putchar(char c)
//{
//	return (write(1, &c, 1));
//}
