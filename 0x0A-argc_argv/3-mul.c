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
	if (argv)
	{
		printf("%d\n", (int)argv[1] * (int)argv[2]);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
