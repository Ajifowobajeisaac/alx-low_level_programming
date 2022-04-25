#include <string.h>
#include "main.h"

/**
 * main - concatenates two strings
 * @dest string 1.
 * @src string 2.
 * strcat - concatenate function
 *
 * Return: Always 0.
 */


int main(void)
{
	char dest[90] = "Hello ";
	char src[] = "world\n";

	strcat(dest, src);

	_putchar(dest[i]);
}
