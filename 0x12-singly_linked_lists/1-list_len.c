#include "lists.h"
/**
 * list_len - function that returns the no. of elements in a linked list_t list
 * @h: Pointer to struct list.
 * Return: no. of element in list.
 */
size_t list_len(const list_t *h)
{
	size_t count;

	count = 0;
	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		count += 1;
		h = h->next;
	}
	return (count);
}


