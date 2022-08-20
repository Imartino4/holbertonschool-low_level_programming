#include "hash_tables.h"

/**
 * key_index - gives the index of a key
 * @key: the key of the element
 * @size: hash table array's size
 * Return: the index of key/value pair is stored in the array
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = 0, hash_value = 0;

	hash_value = hash_djb2(key);
	index = hash_value % size;

	return(index);
}
