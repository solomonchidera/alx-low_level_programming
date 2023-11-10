#include "lists.h"

/**
 * get_dnodeint_at_index - Find the nth node in a doubly linked list.
 * @head: A pointer to the head of the doubly linked list.
 * @index: The index of the node to retrieve, starting from 0.
 *
 * Return: A pointer to the nth node if found.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int count;

	count = 0;

	while (current != NULL)
	{
		if (count == index)
		{
			return (current);
		}
		current = current->next;
		count++;
	}

	return (NULL);
}
