#include "main.h"

/**
 * _stncat - concatenate n bytes of
 * @src: source variable
 * @dest: destination
 *
 * Return: always 0.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		dest[i] = dest[i];
	}
	while (j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest)
}
