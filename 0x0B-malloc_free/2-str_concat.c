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

	ptr_str = malloc(strlen(s1) + strlen(s2) + 1);

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
	else if (s1 == NULL)
	{
		for (i = 0; s2[i] != '\0'; i++)
		{
			*(ptr_str + i) = s2[i];
		}
		*(ptr_str + i) = '\0';
		return (ptr_str);
	}
	else if (s2 == NULL)
	{
		for (i = 0; s1[i] != '\0'; i++)
		{
			*(ptr_str + i) = s1[i];
		}
		*(ptr_str + i) = '\0';
		return (ptr_str);
	}
	else
	{
		return (NULL);
	}
}
