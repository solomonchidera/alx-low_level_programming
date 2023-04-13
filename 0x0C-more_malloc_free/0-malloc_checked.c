#include "main.h"
#include <stdio.h>

/**
 * malloc checked - a function that allocates memory using malloc
 * @b: the number of memory to allocate in bytes.
 * Description: If malloc fails, terminate process with status 98.
 * Return: a pointer to the allocated memory.
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (0);
}
