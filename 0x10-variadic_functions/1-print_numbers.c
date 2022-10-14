#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
/**
 * print_numbers - a function that prints numbers, followed by a new line.
 * @separator: character to separate numbers
 * @n: length of numbers to print.
 * @...: variable length parameters.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list argList;
	unsigned int i;

	if (*separator == NULL)
		return (NULL);

	va_start(argList, n);
	for (i = 0; i < (n - 1); i++)
		printf("%d%s", va_arg(argList, int), separator);
	printf("%d\n", va_arg(argList, int));
	va_end(argList);
}
