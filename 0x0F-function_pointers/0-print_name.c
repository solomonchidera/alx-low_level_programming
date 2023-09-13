#include "function_pointers.h"

/**
 * print_name - funtion that takes a funtion pointer as an argument
 * @name: string to be printed
 * @f: funtion pointer
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
