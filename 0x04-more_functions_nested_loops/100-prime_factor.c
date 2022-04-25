#include <stdio.h>

/* function definitions */
long largestPrimeFactor(long num);

/**
 * main - Program entry point.
 *
 * Return: 0.
 */
int main(void)
{
	long large = largestPrimeFactor(612852475143);

	printf("%ld\n", large);
	return (0);
}

/**
 * largestPrimeFactor - Finds the largest prime factor of a given number.
 * @num: Value to find it's largest prime factor.
 *
 * Return: The largest prime factor.
 */
long largestPrimeFactor(long num)
{
	long i = 2;

	for (i = 2; i < num; i++)
	{
		while (num % i == 0)
			num /= i;
	}

	return (num);
}
