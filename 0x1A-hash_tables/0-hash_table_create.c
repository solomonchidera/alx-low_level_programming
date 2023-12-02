#include "hash_tables.h"

/**
 * hash_table_create - create a hash table
 * @size: the capacity of the hash table
 * Return: a pointer to the Hash table or NULL on error
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *hash_table;
	hash_node_t **array;

	hash_table = malloc(sizeof(hash_table_t));
	if (hash_table == NULL)
		return (NULL);

	array = malloc(sizeof(hash_node_t *) * size);
	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = NULL;

	hash_table->array = array;
	hash_table->size = size;

	return (hash_table);
}
