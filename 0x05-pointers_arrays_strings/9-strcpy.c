#include "main.h"
/**
 * swap_int - copy strings from src to dest
 * @dest: checks for function input
 * @src: checks for function input
 * Return: returns void
 */

char *_strcpy(char *dest, char *src)
{
    int i;

    for (i = 0; src[i] != '\0'; i++)
    {
        dest[i] = src[i];
    }
    dest[_strlen(src)] = '\0';
    return (dest);
}
