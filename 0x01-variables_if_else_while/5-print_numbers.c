#include <stdio.h>

/**
 * main - Program entry point. Prints 0 to 9
 *
 * Return: 0 if successful. Non-zero otherwise
 */
int main(void)
{
	for (int i = 0; i < 10; i++)
	{
		printf("%d", i);
	}
	putchar(012);
	return (0);
}
