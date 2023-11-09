#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - function that frees all list
 * @head: Pointer to a pointer to the head of the list
 *
 * Return: nothing
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;

	while (current != NULL)
	{
		dlistint_t *temp = current;

		current = current->next;
		free(temp);
	}
}
