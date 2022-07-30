#include "hash_tables.h"

/**
 * hash_table_print - Prints the contents of a hash table.
 * @ht: Hashtable.
 *
 */
void hash_table_print(const hash_table_t *ht)
{
	size_t size = 0, count = 0;

	if (!ht)
		return;

	printf("{");
	while (size < ht->size)
	{
		if (ht->array[size])
		{
			if (count)
				printf(", ");
			print_list(ht->array[size]);
			count++;
		}
		size++;
	}
	printf("}\n");
}

void print_list(hash_node_t *location)
{
	while (location)
	{
		printf("'%s': '%s'", location->key, location->value);
		if (location->next)
			printf(", ");

		location = location->next;
	}
}
