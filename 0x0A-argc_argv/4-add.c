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
	int count, sum;

	sum = 0;

	if (argc > 1)
	{
		for (count = 1; count < argc; count++)
		{
			char *endptr;
			long num = strtol(argv[count], &endptr, 10);

			/*checks if the entire argument is a valid integer*/
			if (*endptr != '\0' && !isspace(*endptr))
			{
				printf("Error\n");
				return (1);
			}

			sum += (int)num;
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
