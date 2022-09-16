#include "main.h"
/**
 * more_numbers - print integers from 0 to 14 ten times
 *
 * Return - returns void
 */
void more_numbers(void)
{
	int n, i;

	for (i = 0; i <= 10; i++)
	{
		for (n = 0; n <= 15; n++)
		{
			if (n > 9)
			{
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
			}
			else
			{
				_putchar(n + '0');
			}
		}
	}
}
