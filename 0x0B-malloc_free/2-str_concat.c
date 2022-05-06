#include "main.h"

/**
 * str_concat - Concatenates two strings.
 *
 * @s1: String to concatenate.
 * @s2: String to concatenate.
 *
 * Return: Pointer to new concatenated string.
 */
char *str_concat(char *s1, char *s2)
{
	size_t i;
	char *arr;

	if (s1 != NULL)
	{
		if (s2 != NULL)
			arr = malloc(sizeof(char) * (strlen(s1) + strlen(s2) + 1));
		else
			arr = malloc(sizeof(char) * strlen(s1) + 1);
	}
	else
		return (NULL);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < strlen(s1); i++)
		arr[i] = s1[i];

	if (!(strlen(s2)))
	{
		arr[i] = '\0';
		return (arr);
	}

	for (i = 0; i < strlen(s2); i++)
		arr[i + strlen(s1)] = s2[i];

	arr[i + strlen(s1)] = '\0';

	return (arr);
}
