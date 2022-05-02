#include "main.h"

/**
 * main - print alphabets
 *
 * Return: Always 0.
 */

void print_alphabet(void)
{
	char c ='a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}

	return (0);
}
