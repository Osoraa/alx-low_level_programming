#include <stdio.h>
#include "main.h"

/**
 * main - Program entry point.
 *
 * Return: 0.
 */
int main(void)
{
	fizzBuzz();

	return (0);
}

/**
 * fizzBuzz - Prints Fizz for multiples of 3, Buzz for multiples of 5,
 * and FizzBuzz for multiples of both 3 nd 5.
 *
 * @num: number to stop. defaults to 100 is none is passed.
 *
 * Return: 0.
 */
int fizzBuzz(int *num)
{
	if (*num == '\0')
		*num = 100;
	
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

	return (0);
}

