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
	(void)argc;

	if (argv[1] && argv[2])
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
