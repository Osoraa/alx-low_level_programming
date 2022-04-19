#include <stdio.h>

/**
 * main - program entry point.
 *
 * Return: 0.
 */
int main(void)
{
	long int num = 1, prev = 1, temp;
	char count = 0;

	while (count < 50)
	{
		printf("%ld, ", num);
		temp = num;
		num += prev;
		prev = temp;
		count++;
	}

	printf("%ld\n", num);

	return (0);
}
