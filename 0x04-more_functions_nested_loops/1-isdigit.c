#include "main.h"
/**
 * _isdigit - checks for digit
 *
 * Return: return 1 if digit else return 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
