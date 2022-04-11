#include <stdio.h>

/**
 * main - Program entry point
 *
 * Return: 0 if successful
 */
int main(void)
{
	printf("Size of char: %d bytes(s)\n", sizeof(char));
	printf("Size of int: %d bytes(s)\n", sizeof(int));
	printf("Size of long int: %d bytes(s)\n", sizeof(long int));
	printf("Size of long long int: %d bytes(s)\n", sizeof(long long int));
	printf("Size of float: %d bytes(s)\n", sizeof(float));

	return (0);
}
