#include "lists.h"
/**
 * insert_dnodeint_at_index - insert a new node ata a given position
 * @h: pointer to pointer to first element of a list
 * @idx: index of the list where the new node should be added
 * @n: value of new node
 * Return: address of new node;
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *aux = *h;
	dlistint_t *new_node;
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
		new_node->next = *h
		(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}
	/*Traverse the list until idx -1)*/
	while (aux && count < idx - 1)
	{
		count++;
		aux = aux->next;
	}
	if (aux)
	{
		new_node->prev = aux;
		new_node->next = aux->next;
		aux->next = new_node;
	}
	return (new_node);
}
