#include"lists.h"
/**
 * print_list - Function that printd all the elements of a list.
 * @h: Pointer to the address of the struct list
 *
 * Return: Number of element in each list accessed.
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (0);
	while (h)
	{
		if (h->str != NULL)
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		else
		{
			printf("[%d] %s\n", 0, "(nil)");
		}
		h = h->next;
		count++;
	}
	return (count);
}
