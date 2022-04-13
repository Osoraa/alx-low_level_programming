#include <stdio.h>

/**
 * main - Program entry point. Prints 0 to 9 using putchar
 *
 * Return: 0 if successful. Non-zero otherwise
 */
int main(void)
{
	int i = 0x30;

	for (; i <= 0x39; i++)
	{
		printf("%c", i);
	}
	putchar(0xA);
	return (0x30);
}
