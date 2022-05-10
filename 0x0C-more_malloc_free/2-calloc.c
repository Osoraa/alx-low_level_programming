#include "main.h"

/**
 * _calloc - Allocates memory for an array using malloc.
 * @nmemb: Number of elements to be in array.
 * @size: Size of each element in array.
 *
 * Return: Void pointer to new memory, Null on malloc error or any 0 input.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *r;

	if (nmemb == 0 || size == 0)
		return (NULL);

	r = calloc(size, nmemb);

	if (r == NULL)
		return (NULL);

	return (r);
}
