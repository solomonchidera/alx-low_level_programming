#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - function that prints anything
 *
 * Description: function that prints anything
 * Not allowed to use for, goto, ternary operator, else, do ... while
 * Can use a maximum of
 * 2 while loops
 * 2 if
 * Can declare a maximum of 9 variables
 * Allowed to use printf
 *
 * @format: format is a list of types of arguments passed to the function
 * c = char
 * i = integer
 * f = float
 * s = char * (if the string is NULL, print (nil) instead
 * any other char should be ignored
 *
 * Return: nothing
 */

void print_all(const char * const format, ...)
{
	va_list all_parameters;
	unsigned int index_format;
	char character_placeholder;
	int integer_placeholder;
	float float_placeholder;
	char *string_placeholder;

	va_start(all_parameters, format);
	index_format = 0;
	if (format != NULL)
		while (format[index_format])
		{
			switch (format[index_format])
			{
				case 'c':
					character_placeholder = (char) va_arg(all_parameters, int);
					printf("%c", character_placeholder);
					break;
				case 'i':
					integer_placeholder = va_arg(all_parameters, int);
					printf("%d", integer_placeholder);
					break;
				case 'f':
					float_placeholder = (float) va_arg(all_parameters, double);
					printf("%f", float_placeholder);
					break;
				case 's':
					string_placeholder = va_arg(all_parameters, char *);
					printf("%s", string_placeholder ? string_placeholder : "(nil)");
					break;
				default:
					index_format++;
					continue;
			}
			if (format[index_format + 1] != '\0' && format[index_format] != '\0')
				printf(", ");
			index_format++;
		}
	va_end(all_parameters);
	printf("\n");
}
