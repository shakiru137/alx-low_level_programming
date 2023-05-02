#include "lists.h"
/**
 * looped_listint_size -  Counts the number of unique nodes
 * in a looped listint_t linked list
 * @head: A pointer to the head of the listint_t to check
 *
 * Return: If the list is not looped - 0
 * Otherwise - the number of unique nodes in the list
 */
size_t looped_listint_size(const listint_t *head)
{
	const listint_t *bag, *load;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);
	bag = head->next;
	load = (head->next)->next;
	while (load)
	{
		if (bag == load)
		{
			bag = head;
			while (bag != load)
			{
				nodes++;
				bag = bag->next;
				load = load->next;
			}

			bag = bag->next;
			while (bag != load)
			{
				nodes++;
				bag = bag->next;
			}
			return (nodes);
		}
		bag = bag->next;
		load = (load->next)->next;
	}
	return (0);
}

/**
 * free_listint_safe - function that frees a listint_t list.
 * @h: Pointer pointing another pointer pointing to the head of a link list.
 *
 * Return: the size of the list that was free’d on SUCCESS.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *tmp;
	size_t nodes, idx;

	nodes = looped_listint_size(*h);
	if (nodes == 0)
	{
		for (; h != NULL && *h != NULL; nodes++)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
		}
	}
	else
	{
		for (idx = 0; idx < nodes; idx++)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
		}
		*h = NULL;
	}
	h = NULL;
	return (nodes);
}
