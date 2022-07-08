#include "lists.h"

/**
 * dlistint_len - Counts the number of elements in a doubly linked list
 * @h: List head
 *
 * Return: Integer representing the length of the linked list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	if (!h)
		return (0);

	while (h)
	{
		len++;
		h = h->next;
	}

	return (len);
}
