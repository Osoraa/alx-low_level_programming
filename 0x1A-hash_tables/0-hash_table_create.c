#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 * @size: Size of the array.
 *
 * Return: Pointer to the newly created hashtable.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	hash_node_t *array;

	if (!size || size <= 0)
		return (NULL);

	table = malloc(sizeof(hash_table_t));
	if (!table)
		return (NULL);

	array = malloc(size);
	if (!array)
		return (NULL);

	table->size = size;
	table->array = &array;

	return (table);
}
