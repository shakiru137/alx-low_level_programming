#include "lists.h"
#include <stdlib.h>
/**
 * get_nodeint_at_index - function that returns the nth node
 * of a listint_t linked list.
 * @head: Pointer to the first address of the list.
 * @index: index at which the node will be inserted.
 *
 * Return: nth node on SUCCESS or NULL if noe exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	tmp = head;
	while (i < index)
	{
		tmp = tmp->next;
		i++;
	}
	if(i == index)
	{
		return (tmp);
	}
	else
	{
		return (NULL);
	}
}
