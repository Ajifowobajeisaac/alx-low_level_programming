#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings.
 * @separator: separates strings.
 * @n: number of string arguments.
 * Retutn: Always 0.
 */


void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *c;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		c = va_arg(ap, char *);
		if (c != NULL)
			printf("%s", c);
		else
			printf("NIL");
		if (!(separator == NULL) && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
