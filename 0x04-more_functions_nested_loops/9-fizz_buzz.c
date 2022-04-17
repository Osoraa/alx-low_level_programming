#include <stdio.h>

/**
 * main - Program entry point.
 *
 * Return: 0.
 */
int main(void)
{
	int count = 1;

	while (count <= 100)
	{
		if (count % 3 == 0)
		{
			printf("Fizz");
			if (count % 5 == 0)
				printf("Buzz");
		} else if (count % 5 == 0)
			printf("Buzz");
		else
			printf("%d", count);

		if (count < 100)
			putchar(' ');
		count++;
	}

	putchar('\n');

	return (0);
}
