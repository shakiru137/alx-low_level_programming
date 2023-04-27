#include<stdio.h>
#include"lists.h"
/**
 * print_list - Function that printd all the elements of a list.
 * @h: Pointer to the address of the struct list;
 *
 * Return: Number of element in each list accessed.
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
		{
			printf("[%d] %s\n", h->len, h->str);
			count++;
		}
		else
		{
			printf("[%d] (nil)\n", h->len);
		}
		h = h->next;
	}
	return (count);
}
