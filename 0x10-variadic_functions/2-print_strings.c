#include "variadic_functions.h"

/**
 * print_strings - Prints strings passed as variable arguments.
 *
 * @separator: Separates the strings.
 * @n: Number of strings to print.
 *
 * Return: None.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list next;
	char *buffer;
	size_t i;

	va_start(next, n);
	buffer = va_arg(next, char *);

	if (n)
	{
		if (separator)
		{
			for (i = 0; i < n - 1; i++)
			{
				if (buffer != NULL)
					printf("%s%s", buffer, separator);
				else
					printf("(nil)%s", separator);

				buffer = va_arg(next, char *);
			}
		} else
		{
			for (i = 0; i < n - 1; i++)
			{
				if (buffer)
					printf("%s", buffer);
				else
					printf("(nil)");

				buffer = va_arg(next, char *);
			}
		}
		if (buffer == NULL)
			printf("(nil)");
		else
			printf("%s", buffer);
	}
	printf("\n");

	va_end(next);
}
