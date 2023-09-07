#include "main.h"

/**
 * *malloc_checked - unction that allocates memory using malloc
 * @b: varable to be give a space
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
