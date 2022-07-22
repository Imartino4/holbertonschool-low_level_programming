#include "lists.h"
/**
 * insert_dnodeint_at_index - insert a new node ata a given position
 * @h: pointer to pointer to first element of a list
 * @idx: index of the list where the new node should be added
 * @n: value of new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *aux = *h;
	dlistint_t *new_node;
	dlistint_t *aux2;
	unsigned int count = 0;

	/*Allocate memory for new node*/
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	/*Initialize new node*/
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;
	/*Border case when idx = 0*/
	if (idx == 0)
	{
		aux2 = aux->next;
		new_node->next = aux2;
		aux2->prev = aux;
		*h = new_node;
		return (new_node);
	}
	while (aux && count < idx - 1)
	{
		count++;
		aux = aux->next;
	}
	aux2 = aux->next;
	new_node->prev = aux;
	new_node->next = aux2;
	aux->next = new_node;
	aux2->prev = new_node;
	return (new_node);
}
