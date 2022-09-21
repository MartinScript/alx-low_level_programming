#include "main.h"
/**
 * print_array - print array of integers
 * @a: checks for function input
 * @n: checks for function input
 * Return: returns void
 */
void print_array(int *a, int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < (n - 1); i++)
		{
			printf("%d, ", a[i]);
		}
		printf("%d", a[n - 1]);
		printf("\n");
	}
	else
	{
		printf("\n");
	}
}
