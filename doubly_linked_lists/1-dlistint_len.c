#include "lists.h"
/**
 * dlistint_len - return the numbers of element in a linked dlistint_t list
 * @h: pointer to first element of list
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *aux = h;

	while (aux)
	{
		count++;
		aux = aux->next;
	}
	return (count);
}
