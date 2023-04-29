#include <stdio.h>
#include "lists.h"

/**
 * print_list - a function that prints all the elements of a list_t list
 * @h:the list_t list
 *
 * Return: number of nodes in h
 */

size_t print_list(const list_t *h)
{
	size_t node = 0;

	while (h)
	{
		if (!h->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%u] %s\n", h->len, h->str);

		node++;
		h = h->next;

	}

	return (node);
}
