#include "main.h"
/**
 * _memset - function that fills memory with a constant byte.
 * @s: function input.
 * @b: function input
 * @n: function input
 * Return: char*
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;
	unsigned char *p = s;

	while (n--)
	{
		*p++ = (unsigned char)b;
	}
	return (s);
}
