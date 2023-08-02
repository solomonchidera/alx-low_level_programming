#include "main.h"

/**
 * _puts_recursion - prints a string
 * @s: string to be printed
 *
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
	}
	_putchar(10);

}
