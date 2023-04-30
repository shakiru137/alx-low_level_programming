#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - function that frees a listint_t list.
 * @head: Pointer pointing to list.
 *
 * Return: Nothing.
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	tmp = head;
	while (tmp != NULL)
	{
		free(tmp);
		tmp = tmp->next;
	}
}
