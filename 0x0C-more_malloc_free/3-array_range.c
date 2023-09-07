#include "main.h"

/**
 * array_range - a function creates an array of integers
 * @min: minimum values
 * @max: maximum values
 * Return: the pointer to the created array
 */

int *array_range(int min, int max)
{
	int *arr, i = 0, t = min;

	if (min > max)
		return (NULL);
	arr = malloc((max - min + 1) * sizeof(int));

	if (!arr)
		return (NULL);
	while (i <= max - min)
		arr[i++] = t++;
	return (arr);
/**
 * FileOwner: SolomonChidera
 * FileName: 3-array_range.c
 */
}
