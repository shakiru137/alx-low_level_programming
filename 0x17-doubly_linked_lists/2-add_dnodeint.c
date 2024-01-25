#include "lists.h"
/**
 * add_dnodeint - function that adds a new node at the beginning of a list.
 * @head: pointer to the first node
 * @n: new node data
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp = malloc(sizeof(dlistint_t));

	if (temp == NULL)
		return (NULL);

	temp->prev = NULL;
	temp->n = n;
	temp->next = *head;

	if (*head != NULL)
		(*head)->prev = temp;

	*head = temp;

	return (temp);
}
