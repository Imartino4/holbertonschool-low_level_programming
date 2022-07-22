#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index
 * @head: pointer to pointer to first element of a list
 * @index: position to be deleted
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *aux = *head, *aux2 = NULL;
	unsigned int count = 0;

	if (head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = aux->next;
		if (aux->next != NULL);
			aux->next->prev-> = NULL;
		free(aux);
		return (1);
	}
	while (aux && count < index - 1)
	{
		count++;
		aux = aux->next;
	}
	if (count == index && aux)
	{
		aux2 = aux->next; /*aux to be deleted*/
		if (aux2->next)
			aux2->next->prev = aux;
		aux->next = aux2->next;
		free(aux2);
	}
	return (-1);
}
