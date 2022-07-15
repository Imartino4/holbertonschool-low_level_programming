#include "lists.h"
/**
 * insert_nodeint_at_index - insert a node at index entered as argument
 * @head: pointer to list
 * @idx: index to add the node
 * @n: data of the node
 * Return: address of new node or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count = 0;
	listint_t *aux = *head, *new;

	if (idx == 0) /*Make header*/
	{
		new = malloc(sizeof(listint_t));
		if (new == NULL)
			return (NULL);
		new->n = n;
		new->next = aux;
		*head = new;
		return (new);
	}
	while (aux && count != (idx - 1))
	{
		count++;
		aux = aux->next;
	}
	if (count == idx - 1 && aux)
	{
		new = malloc(sizeof(listint_t));
		if (new == NULL)
			return (NULL);
		new->n = n;
		new->next = aux->next;
		aux->next = new;
		return (new);
	}
	return (NULL);
}
