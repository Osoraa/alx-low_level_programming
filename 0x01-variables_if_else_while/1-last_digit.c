#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Program entry point
 *
 * Return: 0 if successful
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* Declare a variable to hold the last number of n */
	int o;

	o = n % 10;

	if (o > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, o);
	} else if (o == 0)
	{
		printf("Last digit of %d is %d and is %d\n", n, o, o);
	} else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, o);
	}
	return (0);
}
