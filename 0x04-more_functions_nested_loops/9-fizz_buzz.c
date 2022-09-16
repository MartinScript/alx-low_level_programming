#include "main.h"
#include <stdio.h>
/**
 * main - print fizz or buzz for numbers
 *
 * Return: return 0 (success)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		printf("%d ",i);
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0 || i % 5 == 0)
		{
			if (i % 3 == 0)
			{
				printf("Fizz ");
			}
			else if (i % 5 == 0)
			{
				printf("Buzz ");
			}
		}
	}
	_putchar('\n');

	return (0);
}
