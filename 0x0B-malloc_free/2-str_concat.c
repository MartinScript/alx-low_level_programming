#include "main.h"
#include <stdlib.h>
#include <string.h>

char *str_concat(char *s1, char *s2)
{
	char *ptr_str;
	int i;

	ptr_str = malloc(strlen(s1) + strlen(s2) + 1);

	if (ptr_str != NULL)
	{
		for (i = 0; s1[i] != '\0'; i++)
		{
			*(ptr_str + i) = s1[i];
		}
		for (; s2[i] != '\0'; i++)
		{
			*(ptr_str + i) = s2[i];
		}
		*(ptr_str + i) = '\0';
		return (ptr_str);
	}
	else
	{
		return (NULL);
	}
}