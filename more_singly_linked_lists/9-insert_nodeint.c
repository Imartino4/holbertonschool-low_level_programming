#include "lists.h"
/**
 * insert_nodeint_at_index - insert a node at index entered as argument
 * @head: pointer to list
 * @idx: index to add the node
 * @n: data of the node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count = 1;
	listint_t *aux = *head, *new;

	if (aux == NULL)
		return (NULL);
	while (aux)
	{
		if (count == idx)
		{
			new = malloc(sizeof(listint_t));
			if (new == NULL)
			{
				return (NULL);
			}
			else
			{
				new->n = n;
				new->next = aux->next;
				aux->next = new;
				return (new);
			}
		}
		if  (aux->next)
			aux = aux->next;
		count++;
	}
	return (NULL);
}
