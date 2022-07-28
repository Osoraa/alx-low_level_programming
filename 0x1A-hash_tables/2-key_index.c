#include "hash_tables.h"

/**
 * key_index - Computes the index of a key in a hashtable.
 * 
 * @key: Key with which to compute index.
 * @size: size of the array of the hash table.
 * 
 * Return: index of the key in the hashtable.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (!key)
		return (0);

	return (hash_djb2(key) % size);
}
