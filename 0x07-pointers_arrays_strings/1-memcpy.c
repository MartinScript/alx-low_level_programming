#include "main.h"
#include <stdio.h>

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
