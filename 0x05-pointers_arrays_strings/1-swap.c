#include "main.h"
/**
 * swap_int - reset the given value to 98
 * @a: checks for function input
 * @b: checks for function input
 * Return: returns void
 */
void swap_int(int *a, int *b)
{
    int c;
    c = *b;
    *b = *a;
    *a = c;
}
