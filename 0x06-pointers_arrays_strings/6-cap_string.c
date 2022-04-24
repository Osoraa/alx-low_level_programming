#include "main.h"

/**
 * cap_string - Capitalises every word of a string.
 * @str: Pointer to string to be capitalized.
 *
 * Return: pointer to capitalized string.
 */
char *cap_string(char *str)
{
	size_t i, t;
	char sep[14] = {9, 10, 32, 33, 34, 40, 41, 44, 46, 59, 63, 123, 125};

	for (t = 0; str[t] != '\0'; t++)
	{
		i = 0;

		while (i < 14)
		{
			if (str[t - 1] == sep[i])
			{
				if (str[t] >= 97 && str[t] <= 122)
					str[t] -= 32;
			}

			i++;
		}
	}

	return (str);
}
