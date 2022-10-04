#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * @brief -
 *
 * @param str
 * @return char*
 */

char *_strdup(char *str)
{
	char *ptr_str;
	int i;

	if (str != NULL)
	{
		ptr_str = malloc(strlen(str) + 1);
	}
	else
	{
		return (NULL);
	}

	if (ptr_str != NULL)
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			*(ptr_str + i) = str[i];
		}
		*(ptr_str + i) = '\0';
		return (ptr_str);
	}
	else
	{
		return (NULL);
	}
}
