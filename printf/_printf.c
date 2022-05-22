#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include "main.h"

/**
 * _printf - a custom printf function.
 * @format: input argument.
 *
 * Return: Always j.
 */

int _printf(const char *format, ...)
{
	va_list ap;
	const char *s;
	char buffer[100] = {0};
	unsigned int i, j;

	i = 0;
	j = 0;
	va_start(ap, format);
	while (format && format[i])
	{
		if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
				case 'c':
					{
						buffer[j] = (char)va_arg(ap, int);
						j++;
						break;
					}
				case 's':
					{
						s = va_arg(ap, char *);
						strcpy(&buffer[j], s);
						j += strlen(s);
						break;
					}
			}
		}
		else
		{
			buffer[j] = format[i];
			j++;
		}
		i++;
	}
	fwrite(buffer, j, 1, stdout);
	va_end(ap);
	return (j);
}
