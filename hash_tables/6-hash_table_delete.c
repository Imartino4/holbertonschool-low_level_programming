#include "hash_tables.h"
/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *aux_node = NULL, *aux2_node = NULL;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		aux_node = ht->array[i];
		while (aux_node)
		{
			aux2_node = aux_node->next;
			free(aux_node);
			aux_node = aux2_node;
		}
	}
	free(ht->array);
	free(ht);
}
