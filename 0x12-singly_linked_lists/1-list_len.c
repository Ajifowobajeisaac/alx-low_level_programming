#include "lists.h"

/**
 * list_len - returns the number of nodes in a list.
 * @h: - a pointer to a node
 * Return: count.
 */

size_t list_len(const list_t *h)
{
	const list_t *tmp  = h;
	int count = 0;

	while (tmp != NULL)
	{
		tmp = tmp->next;
		count++;
	}
	return (count);
}
