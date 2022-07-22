#include "lists.h"
/**
 * add_dnodeint - Adds a new nod at the beginning of a dlistint_t list
 * @head: pointer to pointer to first element
 * @n: value of node
 * Return: address of new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->prev = NULL;
	new_node->next = *head;
	new_node->n = n;

	if ((*head) != NULL)
		(*head)->prev = new_node;
	(*head) = new_node;
	return (new_node);
}
