#include "hash_tables.h"

/**
 * hash_table_print - print a hash table
 * @ht: the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *aux_node = NULL;
	int flag = 0;

	if (ht == NULL)
		printf("}\n");
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			aux_node = ht->array[i];
			while (aux_node)
			{
				if (flag == 1)
					printf(", ");
				printf("'%s': '%s'", aux_node->key, aux_node->value);
				flag = 1;
				aux_node = aux_node->next;
			}
		}
	}
	printf("}\n");
}
