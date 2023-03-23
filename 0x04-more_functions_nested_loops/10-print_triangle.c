#include "main.h"

/**
 * print_triangle - a function that prints a triangle, using '#'
 * @size: Size of triangle
 */
void print_triangle(int size)
{
	int c, i, j;

	c = 0;
	i = size - 1;
	while (c < size)
	{
		i = size - 1 - c;
		j = c + 1;
		while (i > 0)
		{
			_putchar(32);
			i--;
		}
		while (j > 0)
		{
			_putchar('#');
			j--;
		}
		_putchar(10);
		c++;
	}

	if (size <= 0)
		_putchar(10);
}
