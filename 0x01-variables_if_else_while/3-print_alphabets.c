#include <stdio.h>

/**
 * main - PRogram entry point. Prints alphabets in lower and then upper case
 *
 * Return: 0 if successful. Non-zero otherwise
 */
int main(void)
{
	int c = 97;

	while (c <= 122)
	{
		putchar(c);
		c++;
	}

	c = 65;

	while (c <= 90)
	{
		putchar(c);
		c++;
	}
	putchar(0xA);
	return (0);
}
