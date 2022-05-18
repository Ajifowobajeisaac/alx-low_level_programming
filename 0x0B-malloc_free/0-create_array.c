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


	tmp = malloc(sizeof(char) * size);

	if (size == 0 || tmp == 0)
		return (NULL);

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
