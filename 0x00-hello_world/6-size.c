#include <stdio.h>

/**
 * main - Program entry point
 *
 * Return: 0 if successful
 */
int main(void)
{
	printf("Size of char: %ld bytes(s)\n", sizeof(char));
	printf("Size of int: %ld bytes(s)\n", sizeof(int));
	printf("Size of long int: %ld bytes(s)\n", sizeof(long int));
	printf("Size of long long int: %ld bytes(s)\n", sizeof(long long int));
	printf("Size of float: %ld bytes(s)\n", sizeof(float));

	return (0);
}
