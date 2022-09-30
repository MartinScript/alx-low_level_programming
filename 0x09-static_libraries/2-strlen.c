#include "main.h"
/**
 * _strlen - reset the given value to 98
 * @s: checks for function input
 * Return: returns length
 */

int _strlen(char *s)
{
    int i, sum;

    sum = 0;

    for (i = 0; *(s + i); i++)
    {
        sum++;
    }
    return (sum);
}
