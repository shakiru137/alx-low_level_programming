#include "lists.h"
/**
 * find_listint_loop - Finds the loop contained in
 * a listint_t linked list
 * @head: A pointer to the head of the listint_t list
 *
 * Return: If there is no loop - NULL
 * Otherwise - the address of the node where the loop starts
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *bag, *load;

	if (head == NULL || head->next == NULL)
		return (NULL);

	bag = head->next;
	load = (head->next)->next;

	while (load)
	{
		if (bag == load)
		{
			bag = head;
			while (bag != load)
			{
				bag = bag->next;
				load = load->next;
			}
			return (bag);
		}
		bag = bag->next;
		load = (load->next)->next;
	}
	return (NULL);
}
