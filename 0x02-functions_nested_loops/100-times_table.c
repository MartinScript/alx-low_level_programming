#include "main.h"
#include <stdio.h>
/**
 * print_times_table - print times table of a given number n
 * @n: checks for function input
 * Return: returns void
 */
void print_times_table(int n)
{
	int i, j;

	if ((n > 15) || (n < 0))
	{
	}
	else
	{
		int prod = i * j;

		for (i = 0; i <= n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (prod >= 100)
				{
					printf("%d,", i * j);
				}
				else if (prod >= 10)
				{
					printf(" %d,", prod);
				}
				else
				{
					printf("  %d,", prod);
				}
			}
			printf("%d\n", n * i);
		}
	}
}
