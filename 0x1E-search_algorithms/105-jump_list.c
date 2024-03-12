#include "search_algos.h"
#include <math.h>

/**
 * jump_list - searches for a value in a sorted list of
 * integers using the Jump search algorithm
 * @list: a pointer to the head of the list to search in
 * @size: the number of nodes in list
 * @value: the value to search for
 * Return: a pointer to the first node where value is located
 * or NULL
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step = sqrt(size), i;
	listint_t *current, *prev = NULL;

	if (list == NULL)
		return (NULL);

	current = list;

	while (current->next != NULL && current->n < value)
	{
		prev = current;
		for (i = 0; i < step && current->next != NULL; i++)
			current = current->next;
		printf("Value checked at index [%ld] = [%d]\n", current->index,
				current->n);
	}

	printf("Value found between indexes [%ld] and [%ld]\n", prev->index,
			current->index);

	while (prev && prev->index <= current->index)
	{
		printf("Value checked at index [%ld] = [%d]\n", prev->index,
				prev->n);
		if (prev->n == value)
			return (prev);
		if (prev->n > value)
			break;
		prev = prev->next;
	}

	return (NULL);
}
