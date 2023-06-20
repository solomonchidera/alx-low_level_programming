#include "main.h"

/**
 * _strspn - search a string for a set of bytes
 * @s: char string array
 * @accept: char array to check bytes with
 *
 * Return: Number of bytes in the intial segment of `s`
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int k;
	int c;

	i = 0;
	c = 0;

	while (s[i] != '\0')
	{
		k = 0;
		while (accept[k] != '\0')
		{
			if (s[i] == accept[k])
			{
				c++;
				break;
			}
			k++;
		}
		if (accept[k] == '\0')
			break;
		i++;
	}
	return (c);
}
