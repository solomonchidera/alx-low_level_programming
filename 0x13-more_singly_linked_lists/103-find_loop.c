#include "lists.h"

/**
 * find_listint_loop - Finds the loop contained in
 *                     a listint_t linked list.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: If there is no loop - NULL.
 *         Otherwise - the address of the node where the loop starts.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *top, *down;

	if (head == NULL || head->next == NULL)
		return (NULL);

	top = head->next;
	down = (head->next)->next;

	while (down)
	{
		if (top == down)
		{
			top = head;

			while (top != down)
			{
				top = top->next;
				down = down->next;
			}

			return (top);
		}

		top = top->next;
		down = (down->next)->next;
	}

	return (NULL);
}
