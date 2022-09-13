#include "main.h"
/**
 * print_last_digit - prints last digit of a value
 * @n: checks for function input
 * Return: returns always 0 (success)
 */
int print_last_digit(int n)
{
	if (n < 0)
	{
		n = n * (-1);
		n = n % 10;
		_putchar(n + '0');
		return (n);
	}
	else
	{
		n = n % 10;
		_putchar(n + '0');
		return (n);
	}
}
