#include "lists.h"
/**
 * print_listint - print all the elements of a list
 * @h: pointer to first element of the list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	if (h)
	{
		for (count = 0; h != NULL; count++)
		{
			printf("%d\n", h->n);
			h = h->next;
		}
	}
	return (count);
}
