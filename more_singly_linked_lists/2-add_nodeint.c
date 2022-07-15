#include "lists.h"
/**
 * add_nodeint - add a new node at the beggining of the list
 * @head: pointer to pointer to first element of list
 * @n: data of nodes
 * Return: pointer to list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = NULL;

	if (head)
	{
		new =  malloc(sizeof(listint_t));
		if (new)
		{
			new->n = n;
			new->next = *head;
			*head = new;
		}
	}
	return (new);
}
