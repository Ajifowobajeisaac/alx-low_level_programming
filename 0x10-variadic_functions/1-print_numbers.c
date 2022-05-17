#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints out arguments.
 * @separator: separates arguments.
 * @n: number of arguments.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);

	if (separator == NULL)
	{
		for (i = 0; i < n; i = va_arg(ap, int))
			printf("%d\n", i);
	}
	else
	{
		for (i = 0; i < n; i = va_arg(ap, int))
			printf("%s%d\n", separator, i);
	}
	va_end(ap);
}
