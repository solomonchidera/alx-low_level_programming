#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: a pointer to the hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current;
	char *delim = "";

	if (ht == NULL)
		return;

	printf("{");
	if (ht != NULL)
	{
		for (i = 0; i < ht->size; i++)
		{
			current = ht->array[i];
			while (current != NULL)
			{
				printf("%s'%s': '%s'", delim, current->key, current->value);
				delim = ", ";
				current = current->next;
			}
		}
	}
	printf("}\n");
}
