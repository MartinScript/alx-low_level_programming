#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"
/**
 * key_index - generates an index from a given key
 * @ht: hash table
 * @key: key
 * @value: value
 * Return: 1(success) else 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	if (key == NULL || key == '\0' || *key == '\0')
	{
		return (0);
	}

	hash_node_t *new_pair;
	unsigned long int index = key_index((const unsigned char *)key, ht->size);
	hash_node_t *head = ht->array[index];

	/* if node is not empty */
	if (head != NULL)
	{
		while (head)
		{
			if (strcmp(head->key, key) == 0)
			{
				free(head->value);
				head->value = malloc(sizeof(strlen(value) + 1));
				head->value = strdup(value);
				return (1);
			}
			head = head->next;
		}
	}

	new_pair = ht_pair(key, value);

	if (ht->array[index] == NULL)
	{
		new_pair->next = ht->array[index];
	}

	ht->array[index] = new_pair;
	return (1);
}

/**
 * ht_pair - creates a new key-value pair 
 * 
 * @param key 
 * @param value 
 * Return: new key-value pair
 */
hash_node_t *ht_pair(const char *key, const char *value)
{
	/*allocate memory for the node and its key and value */
	hash_node_t *hash_node = malloc(sizeof(hash_node_t) * 1);
	hash_node->key = malloc(sizeof(strlen(key) + 1));
	hash_node->value = malloc(sizeof(strlen(value) + 1));
	hash_node->next = NULL;
	/*copy the key and value to the memory allocated*/
	hash_node->key = strdup(key);
	hash_node->value = strdup(value);
	return (hash_node);
}
