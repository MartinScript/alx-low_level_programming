#include "main.h"
#include <stdio.h>
/**
 * main - Entry point of program.
 *
 * @argc: function argument
 * @argv: function argument
 * Return: int
 */
int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}
	return (0);
}
