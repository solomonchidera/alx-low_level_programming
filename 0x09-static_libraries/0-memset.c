#include "main.h"

/**
 * _memset -  a function that fills memory with a constant byte
 * @s: memoery pointer area
 * @b: constant byte
 * @n: size of the buffer
 * Description: fill the first n bytes of the memory area pointed to
 * by s with the constant by b
 *
 * Return: a pointer to the memory area @s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
