#include "lists.h"
/**
 * free_dlistint - function that frees a dlistint_t list
 * @head: pointer to the first node
 *
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = NULL;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
