#include "lists.h"
#include "1-list_len.c"
/**
 * free_list - frees a list
 * @head: pointer to first element
 */
void free_list(list_t *head)
{
	list_t *aux;
	size_t i = 0, max = list_len(head);
	
	while (i < max)
	{
		aux = head;
		while (aux->next)
			aux = aux->next;
		free(aux->str);
		free(aux);
		i++;
	}
}
