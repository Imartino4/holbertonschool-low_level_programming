#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table
 * @size: size of the array (n)
 * Return: a pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht = NULL;
	unsigned long int i = 0;

	/*Memory for table structure: size and array*/
       /*an unsigned long int and a pointer array for node's structure*/
	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);
	ht->size = size;
	/*The array consist in size elements of head pointer to hash_node_t list*/
	ht->array = malloc(size * sizeof(hash_node_t **));
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}
	/*Set pointers to NULL*/
	for (i = 0; i < size; i++)
		ht->array[i] = NULL;
	return (ht);
}
