#include "main.h"

/**
 * is_prime_number - Recursively validates prime numbers.
 * @n: Number to validate.
 *
 * Return: 1 if n is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (check_prime(n / 2, n));
}
