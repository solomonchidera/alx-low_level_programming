#include "main.h"

/**
 * main - Entry point that will print the name of the file it was compiled from
 *
 * Return: 0
 */

int main(void)
{
	int i;
	char *file;

	file = __FILE__;

	for (i = 0; i < file[i]; ++i)
		putchar(file[i]);

	putchar(10);
	return (0);
}
