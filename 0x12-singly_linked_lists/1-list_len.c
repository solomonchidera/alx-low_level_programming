#include <stdlib.h>
#include "list.h"

/**
 * list_len - Returns the number of element in a linked list_tt list
 * @h: head of linked list
 * Return: number of element in list
 */

size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}

	return (n);
}
