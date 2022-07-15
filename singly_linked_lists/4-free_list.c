#include "lists.h"
#include "1-list_len.c"
/**
 * free_list - frees a list
 * @head: pointer to first element
 */
void free_list(list_t *head)
{
	list_t *aux, *new;

	if (head)
	{
		aux = head;
		new = head->next;
		while (new != NULL)
		{
			free(aux->str); /*strdup usa malloc*/
			free(new);
			aux = new;
			new = new->next;
		}
		free(aux->str);
		free(aux);
	}
}
