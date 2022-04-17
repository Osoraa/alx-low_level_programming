#include <stdio.h>
#include "main.h"

/* function declaration */
int fizzBuzz(int num);

/**
 * main - Program entry point.
 *
 * Return: 0.
 */
int main(void)
{
	fizzBuzz(100);

	return (0);
}

/**
 * fizzBuzz - Prints Fizz for multiples of 3, Buzz for multiples of 5,
 * and FizzBuzz for multiples of both 3 nd 5.
 *
 * @num: number to stop at.
 *
 * Return: 0.
 */
int fizzBuzz(int num)
{
	int count = 1;

	while (count <= num)
	{
		if (count % 3 == 0)
		{
			if (count % 5 == 0)
			{
				printf("FizzBuzz ");
				count++;
				continue;
			}
			printf("Fizz ");
		} else if (count % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", count);

		count++;
	}

	putchar('\n');
	return (0);
}

