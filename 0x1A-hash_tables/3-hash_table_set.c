#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table
 * @ht: the hash table you want to add or update the key/value to
 * @key: is the key. key can not be an empty string
 * @value: the value associated with the key.
 * value must be duplicated. value can be an empty string
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	if (ht == NULL; || key == NULL || *key == '\0')
		return (0); /* Invalid input */

	index = key

	if ((ht->key != NULL) && (ht->value != NULL))
	{
		head = ht->next;
		ht->key = key;
		ht->value = value;
	}
	else
	{
		ht->key = key;
		ht->value = value;
	}
	return (ht);
}
