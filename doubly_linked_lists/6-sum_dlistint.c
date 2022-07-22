#include "lists.h"
/**
 * sum_dlistint - sum all the data of a dlistint_t
 * @head: pointer to first element of a list
 * Return: the sum as an int
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *aux = head;
	int sum = 0;

	while (aux)
	{
		sum = sum + aux->n;
		aux = aux->next;
	}
	return (sum);
}
