#include <stdio.h>

/**
 * main - Program entry point. Prints alphabets in lowercase excluding q and e
 *
 * Return: 0 if successful. Non-zero otherwise
 */
int main(void)
{
	int c = 97;

	while (c <= 122)
	{
		if (c == 113 || c == 101)
		{
			c++;
		} else
		{
			putchar(c);
			c++;
		}
	}
	putchar(0xA);
	return (0);
}
