#include "main.h"

/**
 * main - starting point of execution
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 always.
 */

int main(int argc, char *argv[])
{
	int mul, firstnum, secnum;

	mul = 1;

	if (argc  == 3)
	{
		firstnum = atoi(argv[1]);
		secnum = atoi(argv[2]);
		mul = firstnum * secnum;
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
