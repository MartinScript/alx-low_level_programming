#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of hash table to be initialized 
 * Return: hash_node_t* 
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	unsigned long int i;
	if (size == 0)
	{
		return (NULL);
	}

	/*Allocate a memory for the table*/
	table = malloc(sizeof(hash_table_t) * 1);
	if (table == NULL)
	{
		return (NULL);
	}

	/*allocate memory for the size of the array*/
	table->array = malloc(sizeof(hash_node_t *) * table->size);
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}

	table->size = size;

	/*Initialize all array cell to NULL*/
	for (i = 0; i < size; i++)
	{
		table->array[i] = NULL;
	}

	return table;
}
