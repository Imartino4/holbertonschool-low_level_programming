#include "hash_tables.h"

/**
 * hash_table_get - retreves a value associated with a key
 * @ht: has_table
 * @key: key looking for
 * Return: the value associated with the key, or NULL if key couldn't be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	char *Value = NULL;
	hash_node_t *aux_node = NULL;

	if (ht == NULL || key == NULL)
		return (NULL);
	index = key_index((unsigned char *)key, ht->size);
	aux_node = ht->array[index];
	while (aux_node)
	{
		if (strcmp(key, aux_node->key) == 0)
		{
			Value = aux_node->value;
			break;
		}
		aux_node = aux_node->next;
	}
	return (Value);
}
