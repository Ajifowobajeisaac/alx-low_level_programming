#include "main.h"

/**
 * _strcat - concatenate two strings
 * @dest: destination string variable
 * @src: source string variable
 *
 * Return: dest.
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		dest[i] = dest[i];
	}

	for (j = 0; src[j]; j++, i++)
	{
		dest[i] = src[j];
	}

	return (dest);
}
