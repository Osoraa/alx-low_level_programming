#include "lists.h"

/**
 * print_list - Prints all the elements of a list_t list.
 * @h: list to print it's elements.
 *
 * Return: Number of nodes in the linked list.
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	list_t *buffer = (list_t *) h;

	if (!buffer)
		return (0);

	for (; buffer; buffer = buffer->next)
	{
		if (buffer->str == NULL)
		{
			printf("[0] (nil)\n");
			count++;
			continue;
		}

		printf("[%d] %s\n", buffer->len, buffer->str);
		count++;
	}

	return (count);
}
