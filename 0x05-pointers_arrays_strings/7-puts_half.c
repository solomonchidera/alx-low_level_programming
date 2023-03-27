#include "main.h"

/**
 * puts_half - a function that prints half of a string,
 * followed by a new line
 *
 * @str: char pointer variable
 *
 * Return: nothing
 */

void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		;
	}

	if (i % 2 != 0)
	{
		i = (i + 1) / 2;

		for (; str[i] != '\0';)
		{
			_putchar(str[i++]);
		}
		_putchar(10);
	}
	else if (i % 2 == 0)
	{
		i /= 2;

		for (; str[i] != '\0';)
		{
			_putchar(str[i++]);
		}
		_putchar(10);
	}
}
