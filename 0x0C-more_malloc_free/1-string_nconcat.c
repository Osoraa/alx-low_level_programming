#include "main.h"

/**
 * string_nconcat - A function that concatenates two strings.
 *
 * @s1: String to concatenate.
 * @s2: Second string to concatenate.
 * @n: Length of string s2 to concatenate to s1.
 *
 * Return: Pointer to new joined string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, len_s1, len_s2;
	char *str;

	/* If NULL is passed, treat as empty string */
	len_s1 = (s1 == NULL) ? 0 : strlen(s1);
	len_s2 = (s2 == NULL) ? 0 : strlen(s2);

	/* Limit n to length of s2 if less than n */
	n = (n > len_s2) ? len_s2 : n;

	/* Allocate memory for new string */
	str = malloc((len_s1 + n + 1));
	if (str == NULL)
		return (NULL);

	/* Copy s1 and n bytes of s2 into new string */
	if (len_s1 != 0)
		strcpy(str, s1);

	for (i = 0; i < n; i++)
		str[i + len_s1] = s2[i];

	/* Append null terminating character */
	str[i + len_s1] = '\0';

	return (str);
}
