#include "main.h"

/**
 * infinite_add - Adds two very large numbers.
 *
 * @n1: First number to add.
 * @n2: Second number to add.
 * @r: Buffer to store result.
 * @size_r: size of buffer r.
 *
 * Result: Pointer to result r.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, len, temp = 0;

	/* Check if buffer can accomodate result */
	len = strlen(n1) >= strlen(n2) ? strlen(n1) : strlen(n2);
	if (size_r <= len)
		return (0);

	/* Reverse the strings for easy manipulation. */
	rev_string(n1);
	rev_string(n2);

	printf("%s\n%s\n", n1, n2);

	/* Add both strings */
	for (i = 0; i < len; i++)
	{
		temp = (int) n1[i] + (int) n2[i] + (temp / 10);
		r[i] = temp % 10;
	}
	if (temp / 10)
		r[i++] = temp / 10;

	/* Verify space for null character */
	if (size_r <= i + 1)
		return (0);
	r[i] = '\0';

	rev_string(r);
	return (r);
}
