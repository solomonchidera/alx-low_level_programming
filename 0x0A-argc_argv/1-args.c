#include "main.h"

/**
 * main - Entry point
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;
	(void)argv;

	for (i = 0; i < argc; i++)
	{
		printf("%d\n", argc);
	}
	return (0);
}
