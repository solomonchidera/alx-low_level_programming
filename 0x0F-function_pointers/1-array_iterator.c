#include "function_pointers.h"

/**
 * array_iterator - a function that executes a function
 * @array: pointer to the first element
 * @size: size of the array
 * @action: fuction pointer
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
