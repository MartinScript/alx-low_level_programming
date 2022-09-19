#include "main.h"
/**
 * rev_string - reset the given value to 98
 * @s: checks for function input
 * Return: returns void
 */

void rev_string(char *s)
{
    int i;
    char arr[_strlen(s)];

    for (i = 0; s[i] != '\0'; i++)
    {
        *(arr + i) = s[_strlen(s) - i - 1];
    }
    arr[_strlen(s)] = '\0';
    for (i = 0; arr[i] != '\0'; i++)
    {
        s[i] = arr[i];
    }
    s[_strlen(s)] = '\0';
}
