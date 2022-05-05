#include "main.h"

/**
 * create_array - A function that creates and initialises an array of chars.
 *
 * @size: Size of the array to create.
 * @c: Char to initialize the array with.
 *
 * Return: Pointer to the array initialized.
 */
char *create_array(unsigned int size, char c)
{
	char *arr = malloc(sizeof(char) * size);

	while (size)
		arr[size--] = c;

	return (arr);
}
