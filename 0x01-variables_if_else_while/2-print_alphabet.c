#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	int i;

	i = 0;
	c = 'a';
	while (i < 26)
	{
		putchar(c + i);
		i++;
	}
	putchar(10);
	return (0);
}
