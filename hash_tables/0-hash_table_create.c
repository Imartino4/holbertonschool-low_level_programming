#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table
 * @size: size of the array (n)
 * Return: a pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	
	ht = malloc(size*sizeof(int));
	if (ht = NULL)
		return (NULL);
	return(ht);
}	
