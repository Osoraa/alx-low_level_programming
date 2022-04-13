#include <stdio.h>

/**
 * main - PRogram entry point. Prints alphabets in lowercase
 *
 * Return: 0 id successful. Non-zero otherwise
 */
int main(void)
{
	int c = 97;

	while (c <= 122)
	{
		putchar(c);
		c++;
	}
	putchar(0xA);
	return (0);
}
