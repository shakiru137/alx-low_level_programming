#include "lists.h"
#include <stdlib.h>
/**
 * sum_listint - function that returns the sum of all the
 * data (n) of a listint_t linked list.
 * @head: Pointer to list.
 *
 * Return: Sum of list data or 0 if empty.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
