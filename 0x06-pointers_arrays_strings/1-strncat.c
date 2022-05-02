#include "main.h"

/**
 * _strncat - concatenate n bytes of
 * @src: source variable
 * @dest: destination
 * @n: the number of bytes to be concatenated
 *
 * Return: always 0.
 */

char *_strncat(char *dest, char *src, int n)
{
	int count = 0, count2 = 0;

	while (*(dest + count) != '\0')
	{
		count++;
	}

	while (count2 < n)
	{
		*(dest + count) = *(src + count2);
		if (*(src + count2) == '\0')
			break;
		count++;
		count2++;
	}
	return (dest);
}
