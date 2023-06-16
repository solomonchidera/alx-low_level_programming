#include "lists.h"

/**
 * free_dlistint - a fucntion that frees the linked list.
 *
 * @head: pointer to the head of the list.
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *free_list;

	while (head != NULL)
	{
		free_list = head->next;
		free(head);
		head = free_list;
	}
}
