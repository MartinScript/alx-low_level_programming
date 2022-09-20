#include "main.h"
#include <string.h>
/**
 * rev_string - reset the given value to 98
 * @s: checks for function input
 * Return: returns void
 */
void rev_string(char *s)
{
	int i;
	char a[900];

	for (i = 0; s[i] != '\0'; i++)
	{
		*(s + i) = s[strlen(s) - i - 1];
	}
	s[i] = '\0';
	for (i = 0; [i] != '\0'; i++)
	{
		s[i] = a[i];
	}
	s[i] = '\0';
}
