#include "main.h"

char *_memset(char *s, char b, unsigned int n)
{
	int i;
	unsigned char *p = s;

	while(n--)
	{
		*p++ = (unsigned char)b;
	}
	return (s);
}
