#include "lists.h"
/**
 * add_dnodeint_end - Adds a new nod at the end of a dlistint_t list
 * @head: pointer to pointer to first element
 * @n: value of node
 * Return: address of new element or NULL if failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_last_node = malloc(sizeof(dlistint_t));
	dlistint_t *aux = *head;/*aux needed to traverse the list*/

	if (new_last_node == NULL)
		return (NULL);
	new_last_node->next = NULL;
	new_last_node->n = n;
	if (*head == NULL) /*If list is empty, new_node will be the head*/
	{
		new_last_node->prev = NULL;
		*head = new_last_node;
		return (new_last_node);
	}
	while (aux)
		aux = aux->next;/*Traverse the list*/

	aux->next = new_last_node;/*Link last node to new_last_node*/
	new_last_node->prev = aux;/*Link new_last_node to last node*/

	return (new_last_node);
}
