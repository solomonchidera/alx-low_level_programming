#include "main.h"
/**
 * print_line - draw a straight line
 * @n: number of times underscore is printed
 * Description: can only use _putchar function to print
 */

void print_line(int n)
{
	int c = 0;

	while (c <= n)
	{
		_putchar(95);

		c++;
	}

	_putchar('\n');
}
