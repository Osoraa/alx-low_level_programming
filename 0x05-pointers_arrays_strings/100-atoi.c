#include "main.h"
#include <ctype.h>

/**
 * _atoi - Converts a string to an integer.
 * @s: Pointer to string.
 *
 * Return: Converted int.
 */
int _atoi(char *s)
{
	double num = 0;
	int negate = 1;

	for (; *s; s++)
	{
		if (*s == '-')
		{
			negate *= -1;
			continue;
		}
		if (!(isdigit(*s)))
		{
			if (num > 0)
				break;
			continue;
		}

		num = (10 * num + (*s - 48));
	}

	return (num * negate);
}
