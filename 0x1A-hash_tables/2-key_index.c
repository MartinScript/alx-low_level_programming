#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"
/**
 * key_index - generates an index from a given key
 * @key: key used to generate index
 * @size: size of array
 * Return: index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = 0;

	index = hash_djb2(key) % size;
	return (index);
}
