#include  "function_pointers.h"
#include <stddef.h>
/**
 * int_index - a function that searches for an integer.
 * @array: array.
 * @size: size of array.
 * @cmp: pointer to function.
 * Return: returns 0 (success), returns -1 (failure).
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size == 0)
		return (-1);
	else
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				break;
			else
				return (-1);
		}
		return (i);
	}
}

