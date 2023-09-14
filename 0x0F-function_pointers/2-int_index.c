#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: array to search in
 * @size: the size of the array
 * @cmp: a pointer to compare function
 * Return: index to the first element thats cmp return 1,
 * -1 otherwize
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
