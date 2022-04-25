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
	long i;

	for (i = 2; num > 1; i++)
	{
		if (num  == i)
			return (num);

		while (!(num % i))
			num /= i;
	}
}
