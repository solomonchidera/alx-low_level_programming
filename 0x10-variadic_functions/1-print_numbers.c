#include "variadic_functions.h"
#include "_putchar.c"

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	int just_num = 0;
	va_list num;

	va_start(num, n);

	for (i = 0; i < n; i++)
	{
		just_num = va_arg(num, int);
		printf("%d", just_num);

		if (i < n - 1)
		{
			printf("%s", separator);
		}
	}

	va_end(num);
	_putchar(10);
	_putchar(10);
}
