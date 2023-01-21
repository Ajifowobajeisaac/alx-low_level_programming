#include "lists.h"

/**
 * dlistint_len - returns no of elemnets in a linked lists.
 * @h: ptr to linked list
 *
 * Return: number of nodes.
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *ptr = h;
	size_t n;

	n = 0;
	while (ptr != NULL)
	{
		n++;
		ptr = ptr->next;
	}
	return (n);
}
