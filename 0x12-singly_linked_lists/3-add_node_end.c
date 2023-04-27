#include "lists.h"
/**
 * add_node_end - function that adds a new node at beginning of a list_t list.
 * @head: pointer pointing to pointer pointing to struct list.
 * @str: pointer pointint to list string.
 *
 * Return: head.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *add_node_end;
	int length = 0;

	add_node_end = malloc(sizeof(list_t));
	if (add_node_end == NULL)
		return (NULL);

	if (add_node_end == NULL)
		return (NULL);

	add_node_end->str = strdup(str);
	if (add_node_end->str == NULL)
	{
		free(add_node_end);
		return (NULL);
	}
	while (str[length])
		length++;

	add_node_end->next = *head;
	add_node_end->len = length;
	*head = add_node_end;
	return (add_node_end);
}

