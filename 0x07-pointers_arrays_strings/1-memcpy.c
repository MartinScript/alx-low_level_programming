#include "main.h"
#include <stdio.h>
/**
 * _memcpy - a function that copies memory area.
 * @dest: function input
 * @src: function input
 * @n: function input
 * Return: char* 
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *pszDest = (char *)dest;
	const char *pszSource = (const char *)src;

	if((pszDest != NULL) && (pszSource != NULL))
	{
		while(n)
		{
			*(pszDest++) = *(pszSource++);
			--n;
		}
	}
	return (dest);
}
