#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - a function that returns the sum of all its parameters.
 * @n: number of arguments.
 * @...: variable length arguments.
 * Return: sum of given parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list argList;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(argList, n);
	for (i = 0; i < n; i++)
		sum = sum + va_arg(argList, int);
	va_end(argList);
	return (sum);
}
