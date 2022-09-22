#include "main.h"
/**
 * rot13 - a function that encodes a string using rot13.
 * @s: function input
 * Return: char*
 */
char *rot13(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] > 77 && s[i] < 90)
		{
			s[i] = 12 - (90 - s[i]) + 65;
		}
		else if (s[i] > 109 && s[i] <= 122)
		{
			s[i] = 12 - (122 - s[i]) + 97;
		}
		else if (s[i] > 122 || s[i] < 65)
		{
			s[i] = s[i];
		}
		else
		{
			s[i] = s[i] + 13;
		}
	}
	return (s);
}
