#include "main.h"

/**
 * _strdup - Returns a pointer to memory containing a string.
 * @str: String to put in new memory.
 *
 * Return: Pointer to new memory, NULL if malloc fails.
 */
char *_strdup(char *str)
{
	size_t i;
	char *arr;

	if (str == NULL)
		return (NULL);

	arr = malloc(sizeof(char) * strlen(str) + 1);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < strlen(str); i++)
		arr[i] = str[i];

	return (arr);
}
