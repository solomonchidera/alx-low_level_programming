#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - Concatenate two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: Pointer to the concatenated string or NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	char *concatenated;
	size_t len1, len2;

	len1 = (s1 != NULL) ? strlen(s1) : 0;
	len2 = (s2 != NULL) ? strlen(s2) : 0;

	/* Allocate memory for the concatenated string (+1 for null terminator)*/
	concatenated = (char *)malloc((len1 + len2 + 1) * sizeof(char));

	if (concatenated == NULL)
	{
		/* Memory allocation failed */
		fprintf(stderr, "Memory allocation failed in str_concat\n");
		return (NULL);
	}

	/* Copy s1 to the concatenated string */
	if (s1 != NULL)
		strcpy(concatenated, s1);
	else
		concatenated[0] = '\0';  /* Treat NULL as an empty string */

	/* Concatenate s2 to the concatenated string */
	if (s2 != NULL)
		strcat(concatenated, s2);

	return (concatenated);
}
