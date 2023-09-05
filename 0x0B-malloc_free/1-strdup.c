#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - Duplicate a string.
 * @str: The string to duplicate.
 *
 * Return: Pointer to a new duplicate string or NULL if memory allocation fails.
 */
char *_strdup(char *str)
{
	char *duplicate;

	if (str == NULL)
		return (NULL);

	size_t len = strlen(str);
	duplicate = (char *)malloc((len + 1) * sizeof(char));

	if (duplicate == NULL)
		return (NULL);

	strcpy(duplicate, str);
	return (duplicate);
}
