#include "Variadic_functions.h"

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	int just_num = 0;
	va_list num;

	va_start(num, n);

	for (i = 0; i < n; i++)
	{
		just_num = va_arg(num, int);
	}

	va_end(num);

	return (just_num)
}
