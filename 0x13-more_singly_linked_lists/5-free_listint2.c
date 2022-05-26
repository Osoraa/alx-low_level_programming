#include "lists.h"

/**
 * free_listint2 - Frees all the nodes of an int list.
 * @head: Pointer to a pointer to the list's beginning.
 *
 * Return: None.
 */
void free_listint2(listint_t **head)
{
	if (*head)
		free_listint2(&((*head)->next));
	else
		return;

	free(*head);
	*head = NULL;
}
