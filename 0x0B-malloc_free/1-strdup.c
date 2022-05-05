#include "main.h"

/**
 * _strdup - Returns a pointer to memory containing a string.
 * @str: String to put in new memory.
 *
 * Return: Pointer to new memory, NULL if malloc fails.
 */
char *_strdup(char *str)
{
	int i, str_size = strlen(str);
	char *arr = malloc(sizeof(char) * str_size);

	for (i = 0; i < str_size; i++)
		arr[i] = str[i];

	return (arr);
}
