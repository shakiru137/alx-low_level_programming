#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index - Entry point.
 * Description: function that deletes the node at index
 * index of a listint_t linked list.
 * @head: Pointer to the list.
 * @index: index at which node should be delete.
 *
 * Return: 1 on SUCCESS. -1 otherwise.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp = *head;
	listint_t *prev;
	unsigned int i;

	if (tmp == NULL)
		return (-1);
	if (index == 0)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
		return (1);
	}
	for (i = 0; tmp != NULL && i < index; i++)
	{
		prev = tmp;
		tmp = tmp->next;
	}
	if (tmp == NULL)
		return (-1);

	prev->next = tmp->next;
	free(tmp);
	return (1);
}
