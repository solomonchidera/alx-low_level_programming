#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: string pointer
 *
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result;
	int i;

	/* Check if the input string is NULL */
	if (b == NULL)
		return 0;

	result = 0;
	i = 0;

	/* Iterate through the string until we reach the null terminator */
	while (b[i] != '\0')
	{
		/* Check if the character is '0' or '1'*/
		if (b[i] != '0' && b[i] != '1')
		{
			return (0); /* Invalid character found, return 0 */
		}

		/* Shift the result left by one bit and add the current bit */
		result = (result << 1) | (b[i] - '0');
		i++;
	}

	return (result);
}
