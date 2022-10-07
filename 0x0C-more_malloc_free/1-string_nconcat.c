#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - a function that concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: number of bytes to be copied
 * Return: char*
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	int i, j, len;

	i = 0;
	if (s1 == NULL)
		return (NULL);
	if (s2 == NULL)
		return (NULL);
	if (stringlen(s2) >= n)
	{
		len = stringlen(s1) + n;
	}
	else
	{
		len = stringlen(s1) + stringlen(s2);
	}

	ptr = malloc(sizeof(char) * len + 1);

	for (j = 0; s1[j]; j++)
	{
		ptr[i++] = s1[j];
	}
	for (j = 0; i < len; j++)
	{
		ptr[i++] = s2[j];
	}
	ptr[i] = '\0';
	return (ptr);
}

/**
 * stringlen - counts the length of string.
 * @s: string to be counted.
 * Return: int
 */
int stringlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
