#include "variadic_functions.h"

int sum_them_all(const unsigned int n, ...)
{
	int sum, i = 0;
	sum = 0;

	va_list num;
	if (n == 0)
		return (0);

	va_start(num, n);
	

	for (i = 0; i < num; i++)
	{
		sum += va_arg(num, const unsigned int);
	}

	va_end(num);
}
