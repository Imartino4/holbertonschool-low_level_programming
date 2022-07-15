#include "lists.h"
/**
 * free_listint2 - frees memory allocated
 * @head: pointer to list
 */
void free_listint2(listint_t **head)
{
	listint_t *aux;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		aux = (*head)->next;
		free(*head);
		*head = h;
	}
	head = NULL;
}
