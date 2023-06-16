#include "lists.h"

/**
 * add_dnodeint_end - a fucntion that adds a new nodeat
 * the end of a list.
 *
 * @head: pointer, pointing to the head of the list.
 * @n: int datatype for the new node.
 *
 * Return: address of the new element, otherwise, NULL
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *end;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}

	end = *head;
	while (end->next != NULL)
		end = end->next;
	end->next = new_node;
	new_node->prev = end;

	return (new_node);
}
