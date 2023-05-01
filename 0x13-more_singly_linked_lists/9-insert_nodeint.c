#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - Entry point.
 * Description: function that inserts a new node at a given position.
 * @head: Pointer pointing another pointer pointing to list.
 * @idx: Index at which new node should be inserted to the list.
 * @n: the data to be inserted to newly created list.
 *
 * Return: address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp, *newnode;
	unsigned int count = 0;
	unsigned int i = 1;

	if (*head == NULL)
		return (NULL);
	tmp = *head;
	while (tmp != NULL)
	{
		tmp = tmp->next;
		count++;
	}
	newnode = (listint_t *)malloc(sizeof(listint_t));
	newnode->n = n;
	if (idx > count)
	{
		free(newnode);
		return (NULL);
	}
	else
	{
		if (idx == 1)
		{
			newnode->next = *head;
			*head = newnode;
		}
		else
		{
			tmp = *head;
			while (i < idx)
			{
				tmp = tmp->next;
				i++;
			}
			newnode->next = tmp->next;
			tmp->next = newnode;
			newnode = tmp;
		}
	}
	return (newnode);
}
