#include "main.h"

/**
 * print_rev - function that prints a string, in reverse
 *
 * @s: char pointer variable
 *
 * Return: nothing.
 */

void print_rev(char *s)
{
	int i, j;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}

	j = i - 1;
	while (s[j])
	{
		_putchar(s[j]);
		j--;
	}
	_putchar(10);
}
