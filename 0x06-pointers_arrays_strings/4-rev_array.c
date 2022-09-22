#include "main.h"
/**
 * reverse_array - reverses a set of given array
 * @a: function input 
 * @n: function input
 * Return - returns void 
 */
void reverse_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		a[i] = a[n - i - 1];
	}
}