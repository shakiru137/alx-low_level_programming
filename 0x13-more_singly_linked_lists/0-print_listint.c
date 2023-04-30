#include "lists.h"
/**
 * print_listint - function that prints all the elements of a listint_t list.
 * @h: Pointer to the first address of the link list.
 *
 * Return: Number of element or NULL otherwise.
 */
size_t print_listint(const listint_t *h)
{
	size_t count;

	count = 0;
	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}

