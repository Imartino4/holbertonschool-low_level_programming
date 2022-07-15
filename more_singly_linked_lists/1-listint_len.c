#include "lists.h"
/**
 * listint_len - return number of elements in a linked list
 * @h: pointer to first element
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	if (h)
	{
		for (count = 0; h; count++)
			h = h->next;
	}
	return (count);
}
