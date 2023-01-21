#include <stdio.h>

/**
 * main - print alphabets except e and q
 *
 * Return: Always 0.
 */

int main(void)
{
	char c = 'a';

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'e' && c != 'q')
			putchar(c);
	}
	putchar('\n');

	return (0);
}
