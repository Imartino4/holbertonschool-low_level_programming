#include "lists.h"
#include <string.h>
/**
 * add_node_end - adds new nodes at the end of a list
 * @head: pointer to pointer to first element
 * @str: data to be introduced in new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *aux = *head;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;
	if (*head == NULL)
		*head = new;
	else
	{
		while (aux->next != NULL) /*Uso un aux para no perder la direccion de head*/
			aux = aux->next;
		aux->next = new;/*Este sería el nodo que tiene null, lo apunto a new*/
	}
	return (new);
}
