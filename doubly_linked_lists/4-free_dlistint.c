#include "lists.h"
/**
 * free_dlistint - frees a dlistint_t list
 * @head: pointer to first element of a list
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	/*aux to traverse the list without loose the links*/
	dlistint_t *aux = head;

	if (head)/*If head = NULL nothing to free*/
	{
		while (aux->next)
		{
			head = aux->next;
			free(aux);/*free nodes while traverse the list*/
			aux = head;
		}
		free(aux);
	}
}
