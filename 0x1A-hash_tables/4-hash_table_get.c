#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"
/**
 * hash_table_get - return key-vakue pair
 * @ht: hash table
 * @key: key
 * Return: 1(success) else 0
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *ptr;
	index = key_index((const unsigned char *)key, ht->size);

	if (ht == NULL || key == NULL)
	{
		return (NULL);
	}

	ptr = ht->array[index];
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
