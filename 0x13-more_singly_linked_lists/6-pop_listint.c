#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint -  function that deletes the head node of a
 * listint_t linked list, and returns the head node’s data (n).
 * @head: Pointer pointing to pointer pointing to list.
 *
 * Return: head node's data(n), or 0 if it fails.
 */
int pop_listint(listint_t **head)
{
	int n = 0;
	listint_t *tmp;

	if (*head == NULL)
		return ('\0');
	n = (*head)->n;
	tmp = *head;
	*head = (*head)->next;
	free(tmp);
	return (n);
}
