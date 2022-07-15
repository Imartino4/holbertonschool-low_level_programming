#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node
 * @head: pointer to the list.
 * @index: index of node
 * Return: nth node if exists, otherwhise returns NULL.
 **/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *aux = head;
	unsigned int count = 0;

	while (aux && count != index)
	{
		count++;
		aux = aux->next;
	}
	if (aux && count == index)
		return (aux);
	return (NULL);
}
