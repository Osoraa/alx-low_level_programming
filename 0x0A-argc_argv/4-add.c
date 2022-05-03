#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program entry point.
 *
 * @argc: Command line argument count.
 * @argv: Array holding command line arguments as strings.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (!(atoi(argv[i])))
		{
			printf("Error\n");
			return (1);
		}

		if (atoi(argv[i]) < 0)
			continue;

		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
