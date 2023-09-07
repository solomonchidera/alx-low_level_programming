#include "main.h"

/**
 * *malloc_checked - unction that allocates memory using malloc
 * @ptr: void pointer
 *
 * Return: nothing or void
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (0);
}
