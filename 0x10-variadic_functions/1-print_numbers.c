#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: is the string to be printed between just_num
 * @n: number of args
 * Return: nothing
 */

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

		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}

	va_end(num);
	printf("\n");
}
