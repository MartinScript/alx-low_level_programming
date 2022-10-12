#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - a function that executes a function given as
 * 		 a parameter on each element of an array.
 * @array: array.
 * @size: size of array.
 * @action: pointer to function.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;
	int len = size / sizeof(array[0]);

	{
		for (i = 0; i < len; i++)
		{
			action(array[i]);
		}
	}
}

