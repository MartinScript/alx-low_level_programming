#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print numbers to 98
 * @n: checks for function input
 * Return: returns void
 */
void print_to_98(int n)
{
	int count;

	if (n > 98)
	{
		for (count = n; count > 98; count--)
		{
			printf("%d", count);
			printf(", ");
		}
		printf("98\n");
	}
	else if (n < 98)
	{
		for (count = n; count < 98; count++)
		{
			printf("%d", count);
			printf(", ");
		}
		printf("98\n");
	}
	else
	{
		printf("98\n");
	}
}
