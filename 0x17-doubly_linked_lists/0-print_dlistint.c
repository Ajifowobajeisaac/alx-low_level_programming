#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * print_dlistint - function to print list elements.
 *
 * @h: pointer to cycle through nodes.
 * Return: number of nodes.
 */


size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *ptr = h;
	size_t n;

	n = 0;
	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
		n++;
	}
	return (n);
}
