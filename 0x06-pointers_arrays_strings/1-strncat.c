#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * _strncat - concatenate two strings
 * @dest: function input
 * @src: function input
 * @n: function input
 * Return: char*
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j, k;
	char *ptr_str;

	ptr_str = malloc(strlen(dest) + n + 2);

	for (i = 0; dest[i] != '\0'; i++)
	{
		ptr_str[i] = dest[i];

	}
	for (j = 0; j < n; j++)
	{
		ptr_str[i + j] = src[j];

	}
	ptr_str[i + j] = '\0';
	for (k = 0; ptr_str[k] != '\0'; k++)
	{
		dest[k] = ptr_str[k];
	}
	dest[k] = '\0';
	return (dest);
}
