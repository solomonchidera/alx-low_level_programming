#include "variadic_functions.h"

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	const char *ch;
	va_list args;
	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		ch = va_arg(args, const char*);

		if (str != NULL)
		{
			printf("%s", ch);
		}
		else
			print("(nil)\n");

		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}

	va_end(args);
	printf("\n");
}
