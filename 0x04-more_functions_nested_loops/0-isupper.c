#include "main.h"
/**
 * _isupper - checks for uppercase
 * @c: checks for function input
 * Return: return 1 if uppercase else return 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
