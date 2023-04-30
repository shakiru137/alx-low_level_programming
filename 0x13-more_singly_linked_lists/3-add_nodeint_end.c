#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end - function that adds new node at the end of a listint_t list
 * @head: Pointer to another pointer pointing to list list.
 * @n: value to be stored in the list data.
 *
 * Return: address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode = NULL;
	listint_t *tmp = NULL;

	newnode = (listint_t *)malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;
	if (*head == NULL)
	{
		*head = newnode;
	}
	else
	{
		tmp = *head;
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = newnode;

	}
	return (newnode);
}
