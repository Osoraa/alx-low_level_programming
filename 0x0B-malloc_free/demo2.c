#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - derefencing pointers
 *
 * Return: Always 0.
 */
int main(void)
{
	char *string = malloc(sizeof *string);

	string = "Best School in the whole wide world";

	printf("%s\n", string);

	return (0);
}
