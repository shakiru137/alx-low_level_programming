#include "lists.h"
/**
 * free_list - Entry point
 * Description: function that frees a list_t list
 * @head: pointer to the first node of the list
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *mtx;

	while (head)
	{
		mtx = head->next;
		free(head->str);
		free(head);
		head = mtx;
	}
}
