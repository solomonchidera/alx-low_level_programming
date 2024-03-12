#include "search_algos.h"

/**
 * linear_skip - searches for a value in a sorted skip list
 * of integers
 *
 * @list: a pointer to the head of the skip list to search in
 * @value: the value to search for
 * Return: a pointer on the first node where value is located
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *current = list, *prev = list;

	if (list == NULL)
		return (NULL);


	while (current->next != NULL && current->n < value)
	{
		prev = current;
		if (current->express != NULL)
		{
			current = current->express;
			printf("Value checked at index [%ld] = [%d]\n", current->index,
				current->n);
		}
		else
		{
			while (current->next != NULL)
				current = current->next;
		}
	}
	printf("Value found between indexes [%ld] and [%ld]\n", prev->index,
			current->index);
	while (prev != current->next && prev->n <= value)
	{
		printf("Value checked at index [%ld] = [%d]\n", prev->index,
				prev->n);
		if (prev->n == value)
			return (prev);
		prev = prev->next;
	}
	return (NULL);
}