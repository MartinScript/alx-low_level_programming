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

	while (i < 10)
	{
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		i++;
	}
}
