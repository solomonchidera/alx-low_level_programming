#include "main.h"
/**
 *_isupper - a function that checks for uppercase character
 * @c: a variable that stores the letters
 * Return: Always 1 if c is uppercase and 0 otherwise.
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
