#include "lists.h"
/*
 * print_dlistint - Function to print all the linked list.
 * @h: pointer to the head node.
 *
 * Return: number of list in a link list.
 */
size_t print_dlistint(const dlistint_t *h)
{
	int num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		num++;
	}
	return (num);
}
