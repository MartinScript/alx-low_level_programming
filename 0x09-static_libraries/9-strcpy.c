#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strcpy - copy strings from src to dest
 * @dest: checks for function input
 * @src: checks for function input
 * Return: returns void
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
