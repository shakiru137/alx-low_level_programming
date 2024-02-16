#include "hash_tables.h"

/**
 * key_index - Returns the index of a key in the hash table array
 * @key: The key to search for
 * @size: The size of the hash table array
 *
 * Return: The index of the key in the hash table array
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int i;
	unsigned long int index;

	i = hash_djb2(key);
	index = i % size;

	return (index);
}
