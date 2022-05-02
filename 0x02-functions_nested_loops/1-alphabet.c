#include "main.h"

/**
 * main - print alphabets
 *
 * Return: Always void.
 */

void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
