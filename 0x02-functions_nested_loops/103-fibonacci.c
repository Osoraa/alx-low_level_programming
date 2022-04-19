#include <stdio.h>

/**
 * main - program entry point.
 *
 * Return: 0.
 */
int main(void)
{
	long int num = 1, prev = 1, temp, sum = 0;

	while (num < 4000000)
	{
		if (num % 2 == 0)
			sum += num;

		temp = num;
		num += prev;
		prev = temp;
	}

	printf("%ld\n", sum);

	return (0);
}
