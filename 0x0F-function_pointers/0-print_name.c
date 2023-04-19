#include "function_pointers.h"

/**
 * print_name - a function that prints a name
 * @name: the name of the person to be printed
 * @f: a pointer to a function that prints a name
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
