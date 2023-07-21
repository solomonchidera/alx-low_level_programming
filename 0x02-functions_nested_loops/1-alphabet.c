#include "main.h"

/**
 * print_alphabet - prints the english alphabet in lowercase
 *
 * Return: 0
 */

void print_alphabet(void)
{
	char a = 'a';

	for (; a <= 'z'; a++)
	{
		_putchar(a);
	}

	_putchar(10);
}
