#include "lists.h"
/**
 * free_dlistint - frees a dlistint_t list
 * @head: pointer to first element of a list
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *aux = head;

	while (aux->next)
	{
		head = aux->next;
		free(aux);
		aux = head;
	}
	free(aux);
}
