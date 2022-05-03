#include <stdio.h>
#include <stdlib.h>

/**
 * greedy - A recursive greedy algotithm.
 *
 * coin - Pointer to array of coins.
 * change - Change to manipulate.
 *
 * Return: Minimum coins needed.
 */
int greedy(int *coin, int change)
{
	int coins = change / coin[0];
	change %= coin[0];

	if (change == 0)
		return (coins);

	coin++;
	return (coins + greedy(coin, change));
}

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
	int coin[] = {25, 10, 5, 2, 1};
	int change;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	change = atoi(argv[1]);

	if (change <= 0)
	{
		printf("0\n");
		return (0);
	}

	printf("%d\n", greedy(coin, change));

	return (0);
}
