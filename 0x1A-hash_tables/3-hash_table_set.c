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
	unsigned long int index;
	hash_node_t *new_node;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0); /* Invalid input */

	index = hash_djb2((unsigned char *)key) % ht->size;

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}

	new_node->value = strdup(value);
	/*if (new_node->value == NULL)
	{
		free(new_node);
		free(new_node->key);
		return (0);
	}*/

	/* Insert new node into the hash table */
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
