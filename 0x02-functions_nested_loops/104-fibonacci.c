#include <stdio.h>

/**
 * main - program entry point.
 *
 * Return: 0.
 */
int main(void)
{
	long double num = 1, prev = 1, temp;
	char count = 1;

	while (count < 98)
	{
		printf("%.0Lf, ", num);
		temp = num;
		num += prev;
		prev = temp;
		count++;
	}

	printf("%.0Lf\n", num);

	return (0);
}
