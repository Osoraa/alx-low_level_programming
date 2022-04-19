#include <stdio.h>

/* Function Declaration */
int sum_naturals_3_5(int num);

/**
 * main - Program entry point.
 *
 * Return: 0.
 */
int main(void)
{
	int result = sum_naturals_3_5(1024);

	printf("%d\n", result);

	return (0);
}

/**
 * sum_naturals_3_5 - Sums all the natural numbers divisible by 3 or 5,
 * and below a number(excluded).
 *
 * @num: Number at which to stop summation.
 *
 * Return: total sum of naturals.
 */
int sum_naturals_3_5(int num)
{
	int count, sum = 0;

	for (count = 3; count < num; count++)
	{
		if (count % 3 == 0 || count % 5 == 0)
			sum += count;
	}

	return (sum);
}
