#include "hash_tables.h"

/**
 * key_index - gives you the index of a key
 * @key: the giving key
 * @size: the size of the hash table
 * Return: the index, 0 otherwize
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (key == NULL || size == 0)
		return (0);
	return (hash_djb2(key) % size);
}
