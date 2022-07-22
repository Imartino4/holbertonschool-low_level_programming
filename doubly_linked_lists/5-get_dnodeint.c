#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a list
 * @head: pointer to first element of a list
 * @index: index of the node
 * Return: the node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *aux = head;
	unsigned int count = 0;

	while (aux->next != NULL && count < index)
	{
		count++;
		aux = aux->next;
	}
	if (aux && count == index)
		return (aux);
	return (NULL);
}
