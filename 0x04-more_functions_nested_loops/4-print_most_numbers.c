#include "main.h"
/**
 * print_most_numbers - print numbers from 0 to 9 except 2 and 4
 *
 * Return: returns void
 */
void print_most_numbers(void)
{
	int n = 0;

	while (n < 10)
	{
		_putchar(n);
		if (n == 2 || n == 4)
			continue;
		_putchar('\n');
	}
}
