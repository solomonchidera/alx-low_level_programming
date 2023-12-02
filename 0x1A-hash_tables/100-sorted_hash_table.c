#include "hash_tables.h"

/**
 * shash_table_create - creates a sorted hash table
 * @size: the size of the sorted hash table
 * Return: a pointer to the sorted hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *shash;
	unsigned long int i;

	shash = malloc(sizeof(shash_table_t));
	if (shash == NULL)
		return (NULL);
	shash->size = size;
	shash->array = malloc(sizeof(shash_node_t *) * size);
	if (shash->array == NULL)
	{
		free(shash);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		shash->array[i] = NULL;
	shash->shead = NULL;
	shash->stail = NULL;
	return (shash);
}

/**
 * add_node_start_shash - adds a node at the beginning of a linked list
 * @h: a pointer to the head of the linked list
 * @key: the giving key
 * @value: the giving value
 * Return: a pointer to the new node, NULL otherwize
 */
shash_node_t *add_node_start_shash(shash_node_t **h, const char *key,
		const char *value)
{
	shash_node_t *curr;

	curr = *h;
	/* check if the key already exists */
	while (curr != NULL)
	{
		if (!strcmp(curr->key, key))
		{
			free(curr->value);
			curr->value = strdup(value);
			return (curr);
		}
		curr = curr->next;
	}
	/* we add a new node to the list */
	curr = malloc(sizeof(shash_node_t));
	if (curr == NULL)
		return (NULL);
	curr->key = strdup(key);
	if (curr->key == NULL)
	{
		free(curr);
		return (NULL);
	}
	curr->value = strdup(value);
	if (curr->value == NULL)
	{
		free(curr->key);
		free(curr);
		return (NULL);
	}
	curr->next = *h;
	*h = curr;
	return (curr);
}

/**
 * add_node_shash - adds a node to the sorted hash table
 * @ht: a pointer to the sorted hash table
 * @node: the new node to be added
 */
void add_node_shash(shash_table_t *ht, shash_node_t *node)
{
	shash_node_t *tmp1, *tmp2;
	int diff;

	tmp1 = tmp2 = ht->shead;

	while (tmp1 != NULL)
	{
		diff = strcmp(node->key, tmp1->key);
		if (diff == 0)
			return;
		else if (diff < 0)
		{
			node->sprev = tmp1->sprev;
			if (tmp1->sprev)
				tmp1->sprev->snext = node;
			else
				ht->shead = node;
			tmp1->sprev = node;
			node->snext = tmp1;
			return;
		}
		tmp2 = tmp1;
		tmp1 = tmp1->snext;
	}
	node->sprev = tmp2;
	node->snext = NULL;

	if (ht->shead != NULL)
		tmp2->snext = node;
	else
		ht->shead = node;
	ht->stail = node;
}

/**
 * shash_table_set - adds or updates a node to sorted hash Table
 * @ht: pointer to the sorted hash table
 * @key: the giving key of the node to be added
 * @value: the associeted value
 * Return: 1 Successed 0 otherwize
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *new;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);

	index = key_index((unsigned char *)key, ht->size);

	new = add_node_start_shash(&(ht->array[index]), key, value);
	if (new == NULL)
	{
		return (0);
	}

	add_node_shash(ht, new);
	return (1);
}

/**
 * shash_table_get - retrieves a value associeted to a giving key
 * @ht: pointer to the shash table
 * @key: the giving key
 * Return: the associeted value
 */

char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *current;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);
	current = ht->array[index];

	while (current != NULL)
	{
		if (!strcmp(current->key, key))
			return (current->value);
		current = current->next;
	}
	return (NULL);
}

/**
 * shash_table_print - prints the keys/values of a sorted hash table
 * @ht: a pointer to the head of the hash table
 */

void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *current;
	char *delim = "";

	if (ht == NULL)
		return;
	printf("{");

	current = ht->shead;
	while (current != NULL)
	{
		printf("%s'%s': '%s'", delim, current->key, current->value);
		delim = ", ";
		current = current->snext;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - prints the keys/values of a sorted hash table in rev
 * @ht: a pointer to the head of the hash table
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *current;
	char *delim = "";

	if (ht == NULL)
		return;
	printf("{");
	current = ht->stail;
	while (current != NULL)
	{
		printf("%s'%s': '%s'", delim, current->key, current->value);
		delim = ", ";
		current = current->sprev;
	}
	 printf("}\n");
}

/**
 * shash_table_delete - deletes the sorted hash list
 * @ht: a pointer to the head of the hash table
 */

void shash_table_delete(shash_table_t *ht)
{
	unsigned long int i;
	shash_node_t *tmp1, *tmp2;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		tmp1 = ht->array[i];
		while ((tmp2 = tmp1) != NULL)
		{
			tmp1 = tmp1->next;
			free(tmp2->key);
			free(tmp2->value);
			free(tmp2);
		}
	}
	free(ht->array);
	free(ht);
}
