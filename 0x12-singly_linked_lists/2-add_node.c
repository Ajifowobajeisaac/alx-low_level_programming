#include "lists.h"
#include <string.h>

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	list_t *h;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return NULL;


	new->str = strdup(str);
	h = *head;

	new->next = h;
	new->len = strlen(str);
	*head = new;

	

	return (new);
}
