#include <stdio.h>

/**
 * main - Program entry point - Prints possible combinations of single digits
 *
 * Return: 0 if succcessful, 1 otherwise
 */
int main(void)
{
	int num = 48;

	for (; num <= 57; num++)
	{
		putchar(num);
		if (num != 57)
		{
			putchar(44);
			putchar(32);
		} else
			break;
	}
	putchar(10); 
	return (0);
}
