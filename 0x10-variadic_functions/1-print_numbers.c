#include "variadic_functions.h"

/**
 * print_numbers - Prints numbers passed in a variadic function.
 *
 * @separator: Seperates the numbers.
 * @n: Number of integers passed to the function.
 *
 * Return: None.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list next;
	size_t i;

	va_start(next, n);

	if (n)
	{
		if (separator != NULL)
		{
			for (i = 0; i < n - 1; i++)
				printf("%d%s", va_arg(next, int), separator);
		} else
		{
			for (i = 0; i < n - 1; i++)
				printf("%d", va_arg(next, int));
		}

		printf("%d", va_arg(next, int));
	}
	printf("\n");

	va_end(next);
}
