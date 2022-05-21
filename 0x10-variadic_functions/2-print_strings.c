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

	if (n)
	{
		if (separator)
		{
			for (i = 0; i < n - 1; i++)
			{
				buffer = va_arg(next, char *);

				if (buffer) 
					printf("%s%s", buffer, separator);
				else
					printf("(nil)%s", separator);
			}
		} else
		{
			for (i = 0; i < n - 1; i++)
				printf("%s", va_arg(next, char *));
		}
		printf("%s", va_arg(next, char *));
	}
	printf("\n");

	va_end(next);
}
