#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - a function print each number with separator
 * followed by a newline
 * @separator: the string to be printed between numbers
 * @n: number of integers passed to the function
 * @...: a variable number of numbers to be printed
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list nums;

	va_start(nums, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(nums, int));

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(nums);
}
