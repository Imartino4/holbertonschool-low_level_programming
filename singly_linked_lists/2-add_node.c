#include "lists.h"
#include <string.h>
/**
 * add_node - adds a new node at the beginning of a list
 * @head: pointer to pointer of type structure node
 * @str: data to introduce in new nodes
 * Return: address of new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = *head;
	*head = new;
	return (new);
}
