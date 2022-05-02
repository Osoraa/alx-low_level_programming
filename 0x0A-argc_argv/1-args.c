#include <stdio.h>

/**
 * main - Program entry point.
 *
 * @argc: Command line argument count.
 * @argv: Array holding command line arguments as strings.
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
