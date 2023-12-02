#include "hash_tables.h"

/**
 * add_node_hash - adds or updates a node at the beginning of hash table
 * @head:a pointer to the head of the hash table
 * @key: the giving key of the node to be added or updated
 * @value: the associeted value
 * Return: a pointer to the head of the hash table
 */

hash_node_t *add_node_hash(hash_node_t **head, const char *key,
		const char *value)
{
	hash_node_t *current;

	if (head == NULL || key == NULL || *key == '\0')
		return (NULL);
	current = *head;
	if (current != NULL)
	{
		if (!strcmp(current->key, key))
		{
			free(current->value);
			current->value = strdup(value);
			return (*head);
		}
		current = current->next;
	}
	current = malloc(sizeof(hash_node_t));
	if (current == NULL)
		return (NULL);

	current->key = strdup(key);
	if (current->key == NULL)
	{
		free(current);
		return (NULL);
	}
	current->value = strdup(value);
	if (current->value == NULL)
	{
		free(current->key);
		free(current);
		return (NULL);
	}
	current->next = *head;
	*head = current;
	return (*head);
}



/**
 * hash_table_set - adds an element to the hash table
 * @ht: a pointer to hash table
 * @key: the giving key
 * @value: the giving value
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;

	if (ht == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	if (add_node_hash(&(ht->array[index]), key, value) == NULL)
		return (0);
	return (1);
}
