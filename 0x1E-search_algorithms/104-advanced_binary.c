#include "search_algos.h"

/**
 * print_array - prints an array
 * @array: the array to be printed
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
 * binary_search_rec - searches for a value in a sorted array of integers
 * using the Binary search algorithm by using recursion
 *
 * @array: a pointer to the first element of the array to search in
 * @start: the index of the first element of the array
 * @end: the index of the last element of the array
 * @value: the value to search for
 *
 * Return: the index where value is located or -1
 */

int binary_search_rec(int *array, size_t start, size_t end, int value)
{
	size_t middle;

	if (start <= end)
	{
		print_array(array, start, end);
		middle = (start + end) / 2;

		if (array[middle] == value && array[middle - 1] != value)
			return (middle);
		else if (array[middle] < value)
			return (binary_search_rec(array, middle + 1, end, value));
		else
			return (binary_search_rec(array, start, middle, value));
	}
	return (-1);
}

/**
 * advanced_binary - searches for a value in a
 * sorted array of integers by using recursion
 *
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: the index where value is locate or -1
 */

int advanced_binary(int *array, size_t size, int value)
{
	if (!array)
		return (-1);

	return (binary_search_rec(array, 0, size - 1, value));

}