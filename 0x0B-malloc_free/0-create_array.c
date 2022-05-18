#include "main.h"
#include <stdlib.h>


/**
 * create_array - creates and array and initializes it.
 * @c: character to be initialized.
 * @size: size of the array.
 * Return: c.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *tmp;

	if (size == 0)
		return (NULL);

	tmp = malloc(sizeof(char) * size);

	for (i = 0; i < size; i++)
	{
		tmp[i] = c;
	}


	if (tmp == NULL)
		return (NULL);
	else
		return (tmp);

	free(tmp);
}
