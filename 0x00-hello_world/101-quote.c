#include <stdio.h>
#include <string.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: a C program that prints standard error
 * Return: Always 1 (success)
 */
int main(void)
{
	char *s = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2,
		"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",
		strlen(s));

	return (1);
}
