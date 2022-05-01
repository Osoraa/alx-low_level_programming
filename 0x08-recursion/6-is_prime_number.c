#include "main.h"

/**
 * check_prime - Checks for prime numbers.
 *
 * @i: to check if divisible.
 * @n: Number to validate.
 *
 * Return: 0 if divisible, 1 otherwise.
 */
int check_prime(int i, int n)
{
	/* Valid if i becomes greater than half of n */
	if (i >= n / 2)
		return (1);

	if (n % i == 0)
		return (0);

	return (check_prime(i + 2, n));
}

/**
 * is_prime_number - Recursively validates prime numbers.
 * @n: Number to validate.
 *
 * Return: 1 if n is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
	/* Base cases */
	if (n <= 1)
		return (0);

	/* Invalid if divisible by 2 but not 2. */
	if (n % 2 == 0)
	{
		if (n == 2)
			return (1);

		return (0);
	}

	return (check_prime(3, n));
}
