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

	if (ht == NULL || key == NULL)
		return (NULL);
	index = key_index((unsigned char *)key, ht->size);
	if (ht->array[index])
		Value = ht->array[index]->value;
	return (Value);
}
