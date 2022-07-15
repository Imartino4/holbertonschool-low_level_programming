#include "lists.h"
/**
 * sum_listint - sums all the nodes data of a list
 * @head: pointer to list
 * Return: the sum of data, as a int
 */
int sum_listint(listint_t *head)
{
	int add = 0;
	listint_t *aux = NULL;

	if (head)
	{
		while (head->next)
		{
			aux = head;
			add = add + aux->n;
			head = aux->next;
		}
		add = add + head->n;
	}
	return (add);
}
