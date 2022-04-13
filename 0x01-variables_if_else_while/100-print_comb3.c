#include <stdio.h>

/**
 * main - Program entry point - Prints possible combinations of double digits
 *
 * Return: 0 if succcessful, 1 otherwise
 */
int main(void)
{
	int i;
	int j;

	for (i = 48; i <= 56; i++)
	{
		for (j = i + 1; j <= 57; j++)
		{
			putchar(i);
			putchar(j);
			if (i == 56 && j == 57)
				break;
			putchar(44);
			putchar(32);
		}
	}
	putchar(10);
	return (0);
}
