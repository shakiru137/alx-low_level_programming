#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - Entry point.
 * Description: function that adds a new node at the
 * beginning of a listint_t list.
 * @head: Pointer to another pointer pointing to list.
 * @n: integer value of the list.
 *
 * Return: node containing first address of the link (SUCCESS)
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode = NULL;

	newnode = (listint_t *)malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = *head;
	*head = newnode;

	return (newnode);
}
