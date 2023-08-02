#include "main.h"

/**
 * _strlen_recursion - a function that returns the length of a string.
 * @s: string to return the length.
 * Return 0 always
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (1);
	}
	else
	{
		return ((1 + _strlen_recursion(s + 1));
	}


}
