#include "variadic_functions.h"

void print_all(const char * const format, ...)
{
	int c, i;
	double f;
	char *s, *separator;
	const char *ptr;

	va_list args;
	va_start(args, format);

	separator = "";
	ptr = format;

	while (*ptr)
	{
		if (*ptr == 'c')
		{
			c = va_arg(args, int);
			printf("%s%c", separator, c);
		}
		else if (*ptr == 'i')
		{
			i = va_arg(args, int);
			printf("%s%d", separator, i);
		}
		else if (*ptr == 'f')
		{
			f = va_arg(args, double);
			printf("%s%f", separator, f);
		}
		else if (*ptr == 's')
		{
			s = va_arg(args, char *);
			if (s != NULL)
			{
				printf("%s%s", separator, s);
			}
			else
			{
				printf("%s(nil)", separator);
			}
		}

		separator = ", ";
		ptr++;
	}

	va_end(args);
	printf("\n");
}
