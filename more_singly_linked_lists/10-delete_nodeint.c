#include "lists.h"
/**
 * delete_nodeint_at_index - delete nodes
 * @head: pointer to pointer to list
 * @index: index of node
 * Return: 1 or - 1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *aux1, *aux2;
	unsigned int count = 0;

	if (*head == NULL)
		return (-1);
	aux1 = *head;
	if (index == 0)
	{
		*head = aux1->next;
		free(aux1);
		aux1 = NULL;
		return (1);
	}
	while (count < index)
	{
		if (aux1->next)
		{
			aux2 = aux1;
			aux1 = aux1->next;
		}
		else
			return (-1);
		count++;
	}
	aux2->next = aux1->next;
	aux1 = NULL;
	return (1);
}
