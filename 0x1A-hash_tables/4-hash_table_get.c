#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"
/**
 * key_index - generates an index from a given key
 * 
 * @ht: hash table
 * @key: key
 * Return: 1(success) else 0
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	if (ht == NULL || key == NULL || *key == NULL)
	{
		return (NULL);
	}

	unsigned long int index = key_index(key, ht->size);
	hash_node_t *ptr = ht->array[index];
	while (ptr != NULL)
	{
		if (strcmp(ptr->key, key) == 0)
		{
			return (ptr->value);
		}
		ptr = ptr->next;
	}

	return (NULL);
}
