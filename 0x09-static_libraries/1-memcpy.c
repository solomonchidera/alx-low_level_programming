#include "main.h"

/**
 * _memcpy - copy memory area
 * @dest: char array to copy into
 * @src: char array to copy from
 * @n: number(size) of elements to copy
 *
 * Return: pointer to `dest`
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *cpy;

	cpy = dest;
	while (n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	return (cpy);
}
