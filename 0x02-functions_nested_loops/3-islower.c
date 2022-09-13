#include "main.h"
/**
 * _islower - checks if alphabet is lowercase
 *@c: checks for input of functions
 * Return: return 1 if lowercase else always 0 (success)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
