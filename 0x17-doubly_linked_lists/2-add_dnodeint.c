#include "lists.h"
#include <string.h>

/**
 * *add_dnodeint - adds a node to a linked list head
 * @head: linked list head
 * @n: int element of the linked list
 * Return: number of elements
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *ptr;

	ptr = malloc(sizeof(dlistint_t));

	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	ptr->n = n;
	ptr->prev = NULL;
	ptr->next = *head;
	*head = ptr;

	return (ptr);
}
