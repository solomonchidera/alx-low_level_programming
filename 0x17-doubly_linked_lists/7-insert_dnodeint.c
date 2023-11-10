#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position
 * @h: A pointer to a pointer to the head of the doubly linked list.
 * @idx: The index where the new node should be added (starting from 0).
 * @n: The data (n) to be stored in the new node.
 *
 * Return: The address of the new node if successful, or NULL if it fails.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n) {
	dlistint_t *newNode, *current = *h;
	unsigned int count;
	count = 0;


	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->n = n;

	if (idx == 0)
	{
		newNode->prev = NULL;
		newNode->next = current;
		if (current != NULL)
		{
			current->prev = newNode;
		}
		*h = newNode;
		return (newNode);
	}

	while (current != NULL && count < idx - 1)
	{
		current = current->next;
		count++;
	}

	if (count == idx - 1 && current != NULL)
	{
		newNode->prev = current;
		newNode->next = current->next;
		if (current->next != NULL)
		{
			current->next->prev = newNode;
		}
		current->next = newNode;
		return newNode;
	}

	free(newNode); 
	return (NULL);
}

void printDoublyLinkedList(dlistint_t *head)
{
	dlistint_t *current = head;
	while (current != NULL)
	{
		printf("%d ", current->n);
		current = current->next;
	}
	printf("\n");
}
