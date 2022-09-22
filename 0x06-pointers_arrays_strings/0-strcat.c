#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * _strcat - concatenate two strings
 * @dest: function input
 * @src: function input
 * Return: char*
 */
char *_strcat(char *dest, char *src)
{
	int i, j, k;
	char *ptr_str;

	ptr_str = malloc(strlen(dest) + strlen(src) + 2);

	for (i = 0; dest[i] != '\0'; i++)
	{
		ptr_str[i] = dest[i];

	}
	for (j = 0; src[j] != '\0'; j++)
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
