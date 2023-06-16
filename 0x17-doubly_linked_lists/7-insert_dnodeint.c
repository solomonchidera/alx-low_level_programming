#include "lists.h"

/**
 * insert_dnodeint_at_index - a function that inserts a new node
 * in a given position.
 *
 * @h: pointer to the head of the list.
 * @idx: The index to insert the new node.
 * @n: int datatype for the new node.
 *
 * Return: address of the new node or NULL otherwise
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *hold = *h, *new_node;

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (; idx != 1; idx--)
	{
		hold = hold->next;
		if (hold == NULL)
			return (NULL);
	}

	if (hold->next == NULL)
		return (add_dnodeint_end(h, n));

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = hold;
	new_node->next = hold->next;
	new_node->next->prev = new_node;
	hold->next = new_node;

	return (new_node);
}
