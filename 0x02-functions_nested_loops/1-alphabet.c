#include "main.h"
/**
 * main - prints the alphabet in lower case.
 * Description: prints the alphabet in lower case.
 * Return: Always 0 (success)
 */
void print_alphabet(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
