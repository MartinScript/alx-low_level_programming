#include "main.h"
/**
 * _strlen_recursion
 * @s: function input
 * Return: int
 */

int _strlen_recursion(char *s)
{
	int count;
	count = 0;

	if (*s)
	{
		count = 1 + _strlen_recursion(s + 1);
	}
	return (count);
}