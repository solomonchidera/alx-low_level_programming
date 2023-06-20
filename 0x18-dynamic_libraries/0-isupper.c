#include "main.h"

/**
 * _isupper - a function that checks for uppercase characters
 * @c: a variable that stores the letters
 * Return: Return 1 if c is uppercase and 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
