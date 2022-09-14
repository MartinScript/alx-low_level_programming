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
		for (count = 0; count >= 98; count--)
		{
			printf("%d", count);
			printf(", ");
		}
	}
	else if (n < 98)
	{
		for (count = 0; count <= 98; count++)
		{
			printf("%d", count);
			printf(", ");
		}
	}
	else
	{
		printf("98");
	}
}
