#include "lists.h"
/**
 * add_dnodeint_end -  function that adds a new node at the end of a list
 * @head: pointer to the first node
 * @n: the node data to to be added
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tp, *temp = NULL;

	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->next = NULL;

	if (*head == NULL)
	{
		temp->prev = NULL;
		*head = temp;
		return (temp);
	}

	tp = *head;
	while (tp->next != NULL)
	{
		tp = tp->next;
	}
	temp->prev = tp;
	tp->next = temp;

	return (temp);
}
