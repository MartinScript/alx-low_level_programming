#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - a function that returns a pointer
 * to a 2 dimensional array of integers.
 * @width: width of array
 * @height: height of array
 * Return: int**
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(height * sizeof(int *));

	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		*(grid + i) = malloc(width * sizeof(int));
		if (*(grid + i) == NULL)
		{
			for (; i >= 0; i--)
			{
				free(*(grid + i));
			}
			free(grid);
			return (NULL);
		}
	}

	for (i = 0; i < height * width; i++)
	{
		*(*grid + i) = 0;
	}

	if (i == height * width)
	{
		return (grid);
	}
	else
	{
		return (NULL);
	}
	return (0);
}
