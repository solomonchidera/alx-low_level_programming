#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 *  add_dnodeint - adds a new node at the beginning
 *  @head: pointer to the first node in the list
 *  @n: data to insert in that new node
 *  Return: pointer to the new node, or NULL if it fails
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	newnode = malloc(sizeof(dlistint_t));
	if (!newnode)
	{
		return (NULL);
	}
	newnode->n = n;
	newnode->next = *head;
	*head = newnode;

	return (newnode);
}
