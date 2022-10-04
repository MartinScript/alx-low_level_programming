#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - a function that returns a pointer
 * 		to a 2 dimensional array of integers.
 * @width: width of array
 * @height: height of array
 * Return: int**
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **ptr_arr;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	ptr_arr = malloc(sizeof(int *) * height);
	for (i = 0; i < height; i++)
	{
		ptr_arr[i] = malloc(sizeof(int) * width);
	}
	if (ptr_arr != NULL)
	{
		for (i = 0; i < height; i++)
		{
			for (j = 0; j < width; j++)
			{
				ptr_arr[i][j] = 0;
			}
		}
		return (ptr_arr);
	}
	else if (ptr_arr == NULL)
	{
		for (i = 0; i < height; i++)
		{
			free(ptr_arr[i]);
		}
		free(ptr_arr);
	}
	else
	{
		return (NULL);
	}
}
