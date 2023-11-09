#include "lists.h"

/**
 * dlistint_t *add_dnodeint - function that adds a new node
 *
 * @head: Pointer to a pointer to the head of the list.
 *
 * @n: Value to be stored in the new node.
 *
 * Return: The address of the new element, or NULL if it fails.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;

	if (head == NULL)
		return (NULL);

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);

	/*Mathematics (lol)*/

	newNode ->n = n;
	newNode ->prev = NULL;
	newNode ->next = *head;

	if (*head != NULL)
		(*head)->prev = newNode;

	*head = newNode;

	return (newNode);

}
