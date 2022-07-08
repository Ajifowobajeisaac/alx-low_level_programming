#include "lists.h"

/**
 * add_dnodeint_end - add node at the end of linked list.
 * @head: pointer to node.
 * @n: node data
 *
 * Return: node address.
 */



dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *ptr;

	ptr = malloc(sizeof(dlistint_t));

	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	ptr->n = n;
	ptr->next = NULL;
	ptr->prev = *head;
	ptr = *head;

	return (ptr);
}
