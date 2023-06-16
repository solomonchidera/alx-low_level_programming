#include "lists.h"

/**
 * get_dnodeint_at_index - a function that returnd the index of
 * a node in a linked list.
 *
 * @head: poniter to the head of the list.
 * @index: the index of the node starting from 0
 *
 * Return: the address of the nth node or NULL otherwise
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head != NULL)
	{
		if (count == index)
			return (head);
		count++;
		head = head->next;
	}

	return (head);
}
