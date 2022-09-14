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
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if ((i * j) >= 100)
				{
					printf("%d,", i * j);
				}
				else if ((i * j) >= 10)
				{
					printf(" %d,", i * j);
				}
				else if
				{
					printf("  %d,", i * j);
				}
			}
			if ((i * n) >= 100)
			{
				printf("%d\n", n * i);
			}
			else if ((i * n) >= 10)
			{
				printf(" %d\n", n * i);
			}
			else
			{
				printf("  %d", n * i);
			}
		}
	}
}
