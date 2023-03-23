#include "main.h"
/**
 *_isdigit - a function that checks for uppercase character
 *@c: a variable that stores the letters
 * Return: Always 1 if c is uppercase and 0 otherwise.
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
