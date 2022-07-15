#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t and returns heads data
 * @head: pointer to pointer to list
 * Return: head's data
 */
int pop_listint(listint_t **head)
{
	int h_data = 0;
	listint_t *aux = *head;

	if (*head == NULL)
		return (NULL);
	h_data = aux->n;
	*head = aux->next;
	free(aux);
	return (h_data);
}
