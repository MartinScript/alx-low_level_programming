#include "main.h"
#include <stdlib.h>
/**
 * create_array - Create a array object.
 * @size: - size of array.
 * @c: - character.
 * Return: char*
 */

char *create_array(unsigned int size, char c)
{
	char *ptr_arr;
	unsigned int i;
	ptr_arr = malloc(sizeof(char) * size);

	if (ptr_arr != NULL && size != 0)
	{
		for (i = 0; i < size; i++)
		{
			*(ptr_arr + i) = c;
		}
		return (ptr_arr);
	}
	else
	{
		return (NULL);
	}
}