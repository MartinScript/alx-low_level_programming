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
	int i;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}
	return (0);
}
