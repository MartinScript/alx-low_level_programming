#include "main.h"
/**
 * puts_half - prints second half of the string
 * @str: checks for function input
 * Return: returns void
 */

void puts_half(char *str)
{
    int i, n;

    if (_strlen(str) % 2 == 0)
    {
        n = _strlen(str) / 2;
    }
    else
    {
        n = (_strlen(str) + 1) / 2;
    }

    for (i = n; str[i] != '\0'; i++)
    {
        _putchar(str[i]);
    }
    _putchar('\n');
}
