#include "function_pointers.h"

/**
 * int_index - Searches for an integer in an array
 *
 * @array: Pointer to the first element of the integer array
 * @size: Number of elements in the array.
 * @cmp: Pointer to the comparison function
 *
 * Return: Index of the first element
 *
 * Description:
 * This function searches for an integer in the
 * given array by applying a custom comparison
 * function 'cmp' to each element.
 * It returns the index of the first element for which 'cmp'
 * returns a non-zero value, indicating a match.
 * If no match is found or 'size' is less than
 * or equal to 0, the function returns -1.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}

	if (array == NULL || size == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}
}
