#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiply 2 numbers passed to main, or Error
 * @argc: argument count
 * @argv: argument vector
 * Return: 1 if error, 0 if function runs correctly
 */
int main(int argc, char *argv[])
{
	int i, sum;
	sum = 0;

	if (argv[i] >= 48 && argv[i] <= 57)
	{
		for (i = 1; i < argc; i++)
		{
			sum = sum + atoi(argv[i]);
		}
		printf("%d\n", sum);
		return (0);
	}
	else if (argc = 1)
	{
		printf("0\n");
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
