#include "main.h"

/**
 * _strlen_recursion - a function that returns the length of a string.
 * @s: string to return the length.
 * Return 0 always
 */

int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s == '\0')
	{
		return (1);
	}
	else
	{
		return ((length + _strlen_recursion(s + 1));
	}

	return (0);
}
