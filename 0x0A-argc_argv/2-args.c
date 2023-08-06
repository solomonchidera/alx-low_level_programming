/**
 * file name: 2-args.c
 * Directory: 0x0A-argc_argv
 * Owner: SolomonChidera
 */

#include "main.h"

/**
 * main - program that prints all arguments it receives.
 *
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 always
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{

		printf("%s\n", argv[i]);
	}
	return (0);
}
