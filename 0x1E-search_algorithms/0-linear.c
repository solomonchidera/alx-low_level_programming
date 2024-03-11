#include "search_algos.h"

/**
 * linear_search - a function that searches for a value
 * 10 in an array of integers using the Linear search algorithm
 *
 * @array: the array the searching algorithm will work on
 *
 * @size: the size of the given array
 *
 * @value: the value we are searching for inside the array
 *
 * Return: 1 if found else return -1
 */

int linear_search(int *array, size_t size, int value)
{

	int POST;

	for (POST = 0; size > POST; POST++)
	{

		printf("Value checked array[%d] = [%d]\n", POST, array[POST]);
		if (array[POST] == value)
		{

			return (POST);
		}
	}
	return (-1);
}
