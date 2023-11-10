#include "lists.h"

/**
 * sum_dlistint - Calculate the sum of all data (n) in a doubly linked list.
 * @head: A pointer to the head of the doubly linked list.
 *
 * Return: The sum of all data (n) in the list. If the list is empty, return 0.
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	int sum;

	sum = 0;

	if (head == NULL)
	{
		return (0);
	}

	current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
