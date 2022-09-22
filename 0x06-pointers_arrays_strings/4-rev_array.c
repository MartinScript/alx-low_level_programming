#include "main.h"
/**
 * reverse_array - reverses a set of given array
 * @a: function input
 * @n: function input
 * Return - returns void
 */
void reverse_array(int *a, int n)
{
	int i, j;
	int arr1[n], arr2[n];

	for (i = 0; i < n; i++)
	{
		arr1[i] = a[i];
		arr2[i] = a[n - i - 1];
	}
	for (j = 0; j < n; j++)
	{
		a[j] = arr2[j];
	}
}
