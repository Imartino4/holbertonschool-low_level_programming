#include "lists.h"
/**
 * free_listint - frees memory allocated
 * @head: pointer to list
 */
void free_listint(listint_t *head)
{
	listint_t *aux;

	while (head != NULL)
	{
		aux = head;
		head = head->next;
		free(aux);
	}
}
