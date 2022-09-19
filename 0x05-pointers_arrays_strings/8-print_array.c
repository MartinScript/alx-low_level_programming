#include "main.h"
/**
 * swap_int - print array of integers
 * @a: checks for function input
 * @n: checks for function input
 * Return: returns void
 */

void print_array(int *a, int n)
{
    int i;

    for (i = 0; i < (n - 1); i++)
    {
        printf("%d, ", a[i]);
    }
    printf("%d", a[n - 1]);
}
