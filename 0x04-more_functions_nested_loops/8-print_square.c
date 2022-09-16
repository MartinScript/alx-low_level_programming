#include "main.h"
/**
 * print_square - print square with size of n
 * @n: check for function input
 * return: returns void
 */
void print_square(int size)
{
	int i, m;
	m = 1;

	if (n > 0)
	{
		for (i = 0; i < (n * n); i++)
		{
			_putchar('#');
			if (i == (n * m))
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
