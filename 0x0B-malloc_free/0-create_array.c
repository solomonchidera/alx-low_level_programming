#include "main.h"

/**
 * create_array - function that creates an array of chars, and initializes it with a specific char.
 * @size: size of the array
 * @c: The character used for initialization
 *
 * Return: If size is 0 or memory allocation fails, returns NULL,
 * Otherwise, returns a pointer to the newly created and initialized array.
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;
	/* Check for special cases */	
	if (size == 0)
		return (NULL);

	/* Allocate memory for the array */
	array = (char *)malloc(size * sizeof(char));

	/* Check for memory allocation failure */
	if (array == NULL)
		return (NULL);

	/* Initialize all elements with the character 'c' */
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	/* Return a pointer to the initialized array */
	return (array);
}
