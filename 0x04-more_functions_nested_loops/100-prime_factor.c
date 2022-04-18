#include <stdio.h>

/* function definitions */
long int largestPrimeFactor(long int num);

/**
 * main - Program entry point.
 *
 * Return: 0.
 */
int main(void)
{
	//int large = largestPrimeFactor(1231952);
	long int large = largestPrimeFactor(612852475143);

	printf("%ld\n", large);
	return (0);
}

/**
 * isPrime - Checks for prime number
 * @num - integer to check.
 *
 * Return: 1 if num is a prime, 0 otherwise.
 */
int isPrime(long int num)
{
	int i = 2;

	while (i < num)
	{
		if (num % i == 0)
			return (0);
		i++;
	}

	return (1);
}

/**
 * largestPrimeFactor - Finds the largest prime factor of a given number.
 * @num: Value to find it's largest prime factor.
 *
 * Return: The largest prime factor.
 */
long int largestPrimeFactor(long int num)
{
	long int prime;

	for (prime = 2; prime < num; prime++)
	{
		if (!(isPrime(prime)))
			continue;

		if (num == prime)
			return (num);

		while (!(num % prime))
			num /= prime;
	}
}
