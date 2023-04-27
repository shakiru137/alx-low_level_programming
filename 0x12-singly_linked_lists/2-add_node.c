#include "lists.h"
/**
 * add_node - function that adds a new node at the beginning of a list_t list.
 * @head: pointer pointing to pointer pointing to struct list.
 * @str: pointer pointint to list string.
 *
 * Return: head.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	int length = 0;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	while (str[length])
		length++;

	new_node->next = *head;
	new_node->len = length;
	*head = new_node;
	return (new_node);
}

