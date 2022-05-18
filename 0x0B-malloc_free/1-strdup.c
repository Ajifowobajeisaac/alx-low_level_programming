#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * _strdup - copies a string to a newly allocated space in memory.
 * @str: string to be copied
 *
 * Return: on success strn.
 * On failure, NULL.
 */

char *_strdup(char *str)
{
	int size, i, j;
	char *tmp;

	size = strlen(str);

	tmp = malloc(sizeof(char) * size + 1);

	if (tmp == NULL || str == NULL)
		return (NULL);

	j = 0;


	for (i = 0; i < size; i++, j++)
		tmp[i] = str[j];


	return (tmp);
}
