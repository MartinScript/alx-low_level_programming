#include "main.h"
/**
 * _puts - prints strings
 * @s: checks for function input
 * Return: returns void
 */
void _puts(char *s)
{
	int i;

	for (i = 0; *(s + i); i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
