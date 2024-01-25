#include "lists.h"
/**
 * get_dnodeint_at_index -  function that returns the nth node of linked list
 * @head: pointer to the first node
 * @index: index at which node will be returned
 *
 * Return: nth node, if the node does not exist, return NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = NULL;
	unsigned int i;

	temp = head;
	for (i = 0; i < index; i++)
	{
		if (temp == NULL)
			return (NULL);
		temp = temp->next;
	}
	return (temp);
}
