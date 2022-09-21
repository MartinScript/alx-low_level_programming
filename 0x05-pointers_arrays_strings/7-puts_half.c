#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * puts_half - prints second half of the string
 * @str: checks for function input
 * Return: returns void
 */
void puts_half(char *str)
{
	int i, n;

	if (strlen(str) % 2 == 0)
	{
		n = strlen(str) / 2;
	}
	else
	{
		n = (strlen(str) + 1) / 2;
	}
	for (i = n; str[i] != '\0'; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
