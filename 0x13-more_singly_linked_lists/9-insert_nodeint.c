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
	listint_t *tmp = *head, *newnode;
	unsigned int count = 0;
	unsigned int i = 0;

	if (*head == NULL)
		return (NULL);
	while (tmp != NULL)
	{
		tmp = tmp->next;
		count++;
	}
	if (idx > count)
	{
		return (NULL);
	}
	else
	{
		newnode = (listint_t *)malloc(sizeof(listint_t));
		if (newnode == NULL)
			return (NULL);
		newnode->n = n;
		if (idx == 0)
		{
			newnode->next = *head;
			*head = newnode;
		}
		else
		{
			tmp = *head;
			while (i < idx - 1)
			{
				tmp = tmp->next;
				i++;
			}
			newnode->next = tmp->next;
			tmp->next = newnode;
		}
	}
	return (newnode);
}
