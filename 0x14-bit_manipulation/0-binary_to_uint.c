#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: binary number
 * Return: unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int result = 0;

	if(!b)
		return(0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '1')
		{
			result = result << 1;
			result = result + 1;
		}
		else if(b[i] == '0')
			result = result << 1;
		else
			return (0);
	}

	return (result);
}
