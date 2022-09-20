#include "main.h"
#include <string.h>
/**
 * print_rev - reverse strings
 * @s: checks for function input
 * Return: returns void
 */
void print_rev(char *s)
{
	int i;

	for (i = 0; *(s + i); i++)
	{
		_putchar(s[strlen(s) - i - 1]);
	}
	_putchar('\n');
}
