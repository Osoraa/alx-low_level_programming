#include <stdio.h>
#include <stdlib.h>

/**
 * main - A greedy algotithm / Program entry point.
 *
 * @argc: Command line argument count.
 * @argv: Array holding command line arguments as strings.
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int cent[] = {25, 10, 5, 2, 1};
	int i, change, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	change = atoi(argv[1]);

	if (change < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5 && change; i++)
	{
		coins += change / cent[i];
		change %= cent[i];
	}
	printf("%d\n", coins);

	return (0);
}
