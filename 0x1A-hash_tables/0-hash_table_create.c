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
	//Allocate a memory for the table
	hash_table_t *table = malloc(sizeof(hash_table_t) * 1);

	table->size = size;
	//allocate memory for the size of the array
	table->array = malloc(sizeof(hash_node_t *) * table->size);

	//Initialize all array cell to NULL
	for (int i = 0; i < table->size; i++)
	{
		table->array[i] = NULL;
	}

	return table;
}