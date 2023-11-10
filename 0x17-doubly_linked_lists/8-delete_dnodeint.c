#include "lists.h"

/**
 * delete_dnodeint_at_index - short description
 *
 * Description: long description
 *
 * @head: list head
 * @index: argument_1 description
 *
 * Return: return description
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current, *previous;
	unsigned int count = 0;

	if (head == NULL)
		return (-1);
	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		current = *head;
		*head = current->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}
	current = *head;
	previous = NULL;
	while (current)
	{
		if (count == index && previous != NULL)
			previous->next = current->next;
		if (count == index)
		{
			if (current->next != NULL)
				current->next->prev = previous;
			free(current);
			return (1);
		}
		previous = current;
		current = current->next;
		count++;
	}
	return (-1);
}
