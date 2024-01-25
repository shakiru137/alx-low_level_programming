#include "lists.h"
/*
 * print_dlistint - Function to print all the linked list.
 * @h: pointer to the head node.
 *
 * Return: number of list in a link list.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t num = 0;
	const dlistint_t *temp = h;

	if (temp == NULL)
		return (num);
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		num++;
	}
	return (num);
}
