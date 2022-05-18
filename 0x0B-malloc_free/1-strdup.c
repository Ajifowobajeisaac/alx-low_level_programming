#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * _strdup - copies a string to a newly allocated space in memory.
 * @str: string to be copied
 *
 * return strn.
 */

char *_strdup(char *str)
{
	int size;
	char *tmp;

	size = strlen(str);

	tmp = malloc(sizeof(char) * size + 1);

	if (tmp == NULL || str == NULL)
		return (NULL);

	while (size--)
		*tmp = *str;

	*tmp = '\0';

	return (tmp);
}
