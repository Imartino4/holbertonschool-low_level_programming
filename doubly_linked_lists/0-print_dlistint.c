#include "lists.h"
/**
 * print_dlistint - print all the elementis of a dlistint list
 * @h: header of dlistint_t
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *aux = h;
	size_t count = 0;

	while (aux)
	{
		printf("%d\n", aux->n);
		count++;
		aux = aux->next;
	}
	return (count);
}
