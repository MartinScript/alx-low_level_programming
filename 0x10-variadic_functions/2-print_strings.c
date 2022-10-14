#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_strings - a function that prints strings, followed by a new line.
 * @separator: character to separate numbers
 * @n: length of strings to print.
 * @...: variadic length parameter.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list argList;
	unsigned int i;

	if (separator == NULL)
		return;

	va_start(argList, n);
	for (i = 0; i < (n - 1); i++)
		printf("%s%s", va_arg(argList, char *), separator);
	printf("%s\n", va_arg(argList, char *));
	va_end(argList);
}
