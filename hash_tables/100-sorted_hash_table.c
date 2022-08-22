#include "hash_tables.h"
/**
 * shash_table_create - create a hash table
 * @size: size of array
 * Return: Pointer to a sorted hash table 
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *sht = NULL;
	unsigned long int i = 0;

	sht = malloc(sizeof(shash_table_t));
	if (sht = NULL)
		return (NULL);
	sht->array = malloc(size * sizeof(shash_node_t *));
	if (sht->array = NULL)
	{
		free(sht);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		sht->array[i] = NULL;
	sht->size = size;
	sht->shead = NULL;
	sht->stail = NULL;
	return (sht);
}

/**
 * shash_table_set - adds elements to the sorted hash table
 * @ht: hash table
 * @key: key
 * @value: value associated with key
 * Return: 1 in success or 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	char *key_copy = strdup(key), *value_copy = strdup(value);
	unsigned long int index = 0;
	shash_node_t *new_elem = NULL;

	index = key_index((unsigned char *)key, ht->size);
	new_elem = malloc(sizeof(shash_node_t));
	if (new_elem == NULL)
	{
		free (ht);
		return (0);
	}
	if (ht->array[index] == NULL)
	{
		ht->array[index] = new_elem;


}

/**
 * shash_table_get - retrieves a value associated with a key
 * @ht: hash table
 * @key: key of value
 * Return: the value
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{

}

/**
 * shash_table_print - print the table using the sorted linked list
 * @ht: hash table
 */
void shash_table_print(const shash_table_t *ht)
{
}

/**
 * shash_table_print_rev - print the key/value pairs in reverse order
 * @ht: hash table
 */
void shash_table_print_rev(const shash_table_t *ht)
{
}

/**
 * shash_table_delete - delete a hash table
 * @ht: hash table to be deleted
 */
void shash_table_delete(shash_table_t *ht)
{
}
