#include "main.h"
/**
 * puts2 - print every other character excepts next one
 * @str: checks for function input
 * Return: returns void
 */

void puts2(char *str)
{
    int i;

    for (i = 0; str[i] != '\0'; i += 2)
    {
        _putchar(str[i]);
    }
    putchar('\n');
}
