#include "lists.h"
/**
 * add_nodeint_end - adds a mew node at the end of a list
 * @head: pointer to pointer to the first element of a list
 * @n: data to introduce in node
 * Return: pointer to new element if exist, otherwise NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = NULL;
	listint_t *aux;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (*head)
	{
		aux = *head;
		while (aux->next != NULL)
			aux = aux->next;
		aux->next = new;
	}
	else
		*head = new;
	return (new);
}
