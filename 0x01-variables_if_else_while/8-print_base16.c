#include <stdio.h>

/**
 * main - PRogram entry point. Prints the hex alphabet in lowercase
 *
 * Return: 0 id successful. Non-zero otherwise
 */
int main(void)
{
	int c = 48;

	for (; c <= 57; c++)
	{
		putchar(c);
	}
	
	for (c += 39; c <= 102; c++)
	{
		putchar(c);
	}
	putchar(0xA);
	return (0);
}
