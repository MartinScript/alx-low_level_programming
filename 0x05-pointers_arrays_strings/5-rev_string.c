#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * rev_string - reset the given value to 98
 * @s: checks for function input
 * Return: returns void
 */

void rev_string(char *s)
{
    int i;
    char *ptr_str;
    ptr_str = malloc(strlen(s)+1);

    for (i = 0; s[i] != '\0'; i++)
    {
        *(ptr_str + i) = s[strlen(s) - i - 1];
    }
    *(ptr_str + i) = '\0';
    for (i = 0; *(ptr_str + i) != '\0'; i++)
    {
        s[i] = *(ptr_str + i);
    }
    s[strlen(s)] = '\0';
}
