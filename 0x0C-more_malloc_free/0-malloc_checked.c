#include "main.h"

/**
 * malloc_checked - Allocates memory using malloc.
 * @b: Amount of memory to allocate.
 *
 * Return: Void pointer to new memory, exit status 98 on malloc error.
 */
void *malloc_checked(unsigned int b)
{
	void *r = malloc(b);

	if (r == NULL)
		exit(98);

	return (r);
}
