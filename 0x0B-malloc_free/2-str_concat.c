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
	size_t i, len_1, len_2;
	char *arr;

	if (s1 != NULL)
		len_1 = strlen(s1);
	else
		len_1 = 0;

	if (s2 != NULL)
		len_2 = strlen(s2);
	else
		len_2 = 0;

	arr = malloc(sizeof(char) * (len_1 + len_2 + 1));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < len_1; i++)
		arr[i] = s1[i];

	if (!(len_2))
	{
		arr[i] = '\0';
		return (arr);
	}

	for (i = 0; i < len_2; i++)
		arr[i + len_1] = s2[i];

	arr[i + len_1] = '\0';

	return (arr);
}
