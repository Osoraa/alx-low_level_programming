#include <stdio.h>

/**
 * main - Program entry point - Prints possible combinations of double digits
 *
 * Return: 0 if succcessful, 1 otherwise
 */
int main(void)
{
	int i, j, k;

	for (i = 48; i <= 55; i++)
	{
		for (j = i + 1; j <= 56; j++)
		{
			for (k = j + 1; k <= 57; k++)
			{
				putchar(i);
				putchar(j);
				putchar(k);
				if (i == 55 && j == 56 && k == 57)
					break;
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar(10);
	return (0);
}
