#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: the hash table to update
 * @key: the key, cannot be an empty string
 * @value: value associated with the key, must be duplicated and can be empty
 * Return: 1 in success, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_elem = NULL;
	char *key_copy = NULL, *value_copy = NULL;

	if (ht == NULL)
		return (0);
	new_elem = malloc(sizeof(hash_node_t));
	if (new_elem == NULL)
	{
		free(ht);
		return (0);
	}
	key_copy = strdup(key);/*No puedo operar con const char*/
	value_copy = strdup(value);
	new_elem->key = key_copy;
	new_elem->value = value_copy;
	index = key_index((unsigned char *)key_copy, ht->size);/*casteo key*/
	if (ht->array[index] == NULL)/*First element to add*/
	{
		ht->array[index] = new_elem;
		new_elem->next = NULL;
	}
	else/*The index position has an element*/
	{
		if (strcmp(ht->array[index]->key, value_copy) == 0)
		{/*if the new_el has the same value as the actual, remove*/
			free(ht->array[index]->value);
			ht->array[index]->value = value_copy
		}
		else
		{/*If the new_el has different key, add at the begging without removing the actual*/
			new_elem->next = ht->array[index];
			ht->array[index] = new_elem;
		}
	}
	return (1);
}
