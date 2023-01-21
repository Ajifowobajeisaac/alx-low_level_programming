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
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		dest[i] = dest[i];
	}

	j = 0;

	while (j < n)
	{
		dest[i] = src[j];
		if (src[j] == '\0')
			break;
		i++;
		j++;
	}

	return (dest);
}
