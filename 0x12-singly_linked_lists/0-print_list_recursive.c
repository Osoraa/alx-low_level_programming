#include "lists.h"

/**
 * print_list - Prints all the elements of a list_t recursively.
 * @h: beginning of list.
 *
 * Return: Number of nodes in the linked list.
 */
size_t print_list(const list_t *h)
{
	/* If NULL pointer to list_t is passed */
	if (!h)
		return (0);

	/* If string is NULL */
	if (!(h->str))
	{
		printf("[0] (nil)\n");
		return (1 + print_list(h->next));
	}

	/* Normal case */
	printf("[%d] %s\n", h->len, h->str);
	return (1 + print_list(h->next));
}
