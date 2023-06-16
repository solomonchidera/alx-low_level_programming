#include "lists.h"

/**
 * delete_dnodeint_at_index - a function that deletes a node
 *  at index index of a dlistint_t linked list
 *
 * @head: pointer to the head of the list.
 * @index: index of the node to delete.
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *hold = *head;

	if (*head == NULL)
		return (-1);

	for (; index != 0; index--)
	{
		if (hold == NULL)
			return (-1);
		hold = hold->next;
	}

	if (hold == *head)
	{
		*head = hold->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}

	else
	{
		hold->prev->next = hold->next;
		if (hold->next != NULL)
			hold->next->prev = hold->prev;
	}

	free(hold);
	return (1);
}
