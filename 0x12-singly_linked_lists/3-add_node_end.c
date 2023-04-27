#include "lists.h"
/**
 * add_node_end - function that adds a new node at the end of a list_t list.
 * @head: pointer to the first node of list.
 * @str: pointer to string.
 *
 * Return: NULL if fail, starting the add of the list.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *add_node_end, *tmp;

	if (!head)
		return (NULL);

	add_node_end = malloc(sizeof(list_t));
	if (!add_node_end)
		return (NULL);

	add_node_end->str = strdup(str);
	if (!add_node_end->str)
	{
		free(add_node_end);
		return (NULL);
	}

	add_node_end->len = strlen(str);
	add_node_end->next = NULL;

	if (!*head)
	{
		*head = add_node_end;
		return (add_node_end);
	}

	tmp = *head;

	while (tmp->next)
	{
		tmp = tmp->next;
	}

	tmp->next = add_node_end;
	return (add_node_end);
}
