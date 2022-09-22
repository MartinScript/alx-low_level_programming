#include "main.h"
/**
 * leet - a function that encodes a string into 1337. 
 * 
 * @str: function input
 * @return char* 
 */

char *leet(char *str)
{
	char arr1[] = {'A', 'E', 'O', 'T', 'L'};
	char arr2[] = {'a', 'e', 'o', 't', 'l'};
	char arr3[] = {'4', '3', '0', '7', '1'};
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j <= 5; j++)
		{
			if (str[i] == arr1[j] || str[i] == arr2[j])
			{
				str[i] == arr3[j];
			}
		}
	}
	return(str);
}