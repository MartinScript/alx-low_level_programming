#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet in lowercase 10x
 *
 * Return: Always 0 (success)
 */
void print_alphabet_x10(void)
{
	char ch = 'a';
	int i = 0;

	for (;i < 10;i++)
	{
		for (;ch <= 'z';ch++)
		{
			_putchar(ch);
		}
	}
}
