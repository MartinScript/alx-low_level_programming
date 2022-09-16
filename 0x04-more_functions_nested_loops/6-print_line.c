#include "main.h"
/**
 * print_line - print horizontal line
 * @n: check for function input
 * return: returns void
 */
void print_line(int n)
{
	int i = 0;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}
	else if (n == 0 || n < 0)
	{
		_putchar('\n');
	}
	_putchar('\n');
}
