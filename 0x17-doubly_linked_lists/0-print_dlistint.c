#include "lists.h"

/**
 * print_dlistint - Prints all elements of a doubly linked list
 * @h: List head
 *
 * Return: Sie of the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t len = 0;

	while (h)
	{
		printf("%d\n", h->n);
		len++;
		h = h->next;
	}

	return (len);
}
