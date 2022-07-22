#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index
 * @head: pointer to pointer to first element of a list
 * @index: position to be deleted
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *aux = *head, *aux2;
	unsigned int count = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = aux->next;
		if (aux->next)
			aux->next->prev = NULL;
		free(aux);
		return (1);
	}
	for (count = 0; aux && count < index - 1; count++)
	{
		if (aux == NULL || aux->next == NULL)
			return (-1);
		aux = aux->next;
	}
	aux2 = aux->next->next;
	if (aux->next->next)
		aux->next->next->prev = aux;
	free(aux->next);
	aux->next = aux2;
	return (1);
}
