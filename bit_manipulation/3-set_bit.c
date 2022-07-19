#include "main.h"
/**
 * set_bit - this function sets and index bit to 1
 * @n: pointer to number
 * @index: bit index
 * Return: 1 if it worked, -1 if an error ocurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int aux = (1 << index);
	if (index < 64)
	{
		*n = *n | aux;
		return (1);
	}
	return (-1);
}
