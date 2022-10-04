#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - joins two strings
 * @s1: first string
 * @s2: second string
 * Return: char*
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr_str;
	int i, j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	ptr_str = malloc(strlen(s1) + strlen(s2) + 2);

	if (ptr_str != NULL)
	{
		for (i = 0; s1[i] != '\0'; i++)
		{
			*(ptr_str + i) = s1[i];
		}
		for (j = 0; s2[j] != '\0'; i++, j++)
		{
			*(ptr_str + i) = s2[j];
		}
		*(ptr_str + i) = '\0';
		return (ptr_str);
	}
	else
	{
		return (NULL);
	}
}
