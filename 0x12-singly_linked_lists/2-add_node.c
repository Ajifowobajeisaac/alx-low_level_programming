#include "lists.h"
#include <string.h>

/**
 * add_node - adds a node to the front of a list.
 * @head: header pointer.
 * @str: string to be added to node..
 * Return: new.
 */


list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	list_t *h;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);


	new->str = strdup(str);
	h = *head;

	new->next = h;
	new->len = strlen(str);
	*head = new;

	return (new);
}
