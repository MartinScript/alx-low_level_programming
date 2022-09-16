#include "main.h"
/**
 * print_square - print square with size of n
 * @size: check for function input
 * return: returns void
 */
void print_square(int size)
{
	int i, m;

	m = 1;

	if (size > 0)
	{
		for (i = 1; i <= (size * size); i++)
		{
			_putchar('#');
			if (i == (size * m))
			{
				_putchar('\n');
				m++;
			}
		}
	}
	else
	{
		_putchar('\n');
	}
}
