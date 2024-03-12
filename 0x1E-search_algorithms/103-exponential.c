#include "search_algos.h"

/**
 * print_array - print an array
 * @array: a pointer to the array to be printed
 * @start: the index of the first element
 * @end: the index of the last element
 */

void print_array(int *array, size_t start, size_t end)
{
	size_t i;
	char *sep = "";

	printf("Searching in array: ");

	for (i = start; i <= end; i++)
	{
		printf("%s%d", sep, array[i]);
		sep = ", ";
	}
	printf("\n");
}

/**
 * exponential_search - searches for a value in a sorted array
 * of integers using the Exponential search algorithm
 *
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: the first index where value is located or -1
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t i = 1, left, right, middle;

	if (!array)
		return (-1);

	if (array[0] == value)
		return (0);

	while (i < size && array[i] <= value)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		i *= 2;
	}

	left = i / 2;
	right = (i < size) ? i : size - 1;

	printf("Value found between indexes [%ld] and [%ld]\n", left, right);

	while (left <= right)
	{
		print_array(array, left, right);

		middle = left + (right - left) / 2;

		if (array[middle] == value)
			return (middle);
		else if (array[middle] < value)
			left = middle + 1;
		else
			right = middle - 1;
	}
	return (-1);
}
