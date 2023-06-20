#include "main.h"

/**
 * _isdigit - a function that checks for a digit
 * @c: a variable that stores digits
 * Return: Return 1 if c is a digit and 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
