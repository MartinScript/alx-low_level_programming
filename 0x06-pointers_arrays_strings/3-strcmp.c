#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * _strcmp - compares the length of two strings.
 * @s1: - function input
 * @s2: - function input
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	int a;

	a = strlen(s1) - strlen(s2);
	if (a > 0)
	{
		return (15);
	}
	else if (a < 0)
	{
		return (-15);
	}
	else
	{
		return (0);
	}
}
