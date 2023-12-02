#include "hash_tables.h"

/**
 * hash_table_create - function that creates a fresh hashtable
 *
 * @size: size of the array
 * @Return: a pointer to the new created hashtable
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned int i;

	if (size == 0)
	{
		size = DEFAULT_SIZE;
	}

	hash_table_t *new_table = malloc(sizeof(hash_table_t));
	if (new_table == NULL)
	{
		(return NULL);
	}

	new_table->size = size;

	new_table->array = malloc(sizeof(Node *) * size);
	if (new_table->array == NULL)
	{
		free(new_table);
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		new_table->array[i] = NULL;
	}

	return (new_table);
}
