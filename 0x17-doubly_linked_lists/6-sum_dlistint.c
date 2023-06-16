#include "lists.h"

/**
 * sum_dlistint - a function that sums all the data
 * of a linked list.
 *
 * @head: pointer to the head of the list.
 *
 * Return: sum of all the data otherwise 0 if empty
 */

int sum_dlistint(dlistint_t *head)
{
	int sum_data = 0;

	while (head != NULL)
	{
		sum_data += head->n;
		head = head->next;
	}

	return (sum_data);
}
