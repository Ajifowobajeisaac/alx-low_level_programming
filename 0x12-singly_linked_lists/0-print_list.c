#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints the elements of a linked list.
 * @h: node pointer.
 *
 * Return: return no of pointers.
 */

size_t print_list(const list_t *h)
{
	const list_t *ptr = h;
	

	size_t counter = 0;
	
	while (ptr != NULL)
	{
		printf("%d %s\n", ptr->len, ptr->str != NULL ? ptr->str : "(nil)");
		ptr = ptr->next;
		counter++;
	}
	return (counter);
}
