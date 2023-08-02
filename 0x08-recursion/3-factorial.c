#include "main.h"

/**
 * factorial a function that returns the factorial of a given number.
 * @n the number or integar
 * Return 0 Always
 */

int factorial(int n)
{

	if (n < 0)
	{
		return (-1);
	}
	else if (n < 2)
	{
		return (n);
	}
	else
	{
		return (n * factorial(n - 1));
	}
	return (0);
}
