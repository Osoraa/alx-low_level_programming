#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

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
	int i, j, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		/* isdigit checks each char of a string if its a number representation */
		j = 0;
		while (argv[i][j] != '\0')
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}

		if (atoi(argv[i]) < 1)
			continue;

		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
