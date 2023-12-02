#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: a pointer to the hash table
 * @key: the key of the value to be retrieved
 * Return: the associeted value or NULL if Key could'nt be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	const hash_node_t *current;
	unsigned long int index;

	if (ht == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);

	current = ht->array[index];

	while (current != NULL)
	{
		if (!strcmp(current->key, key))
		{
			return (current->value);
		}
		current = current->next;
	}
	return (NULL);
}
