#include "main.h"
/**
 * clear_bit - this function sets a specific bit to 0
 * @n: pointer to number
 * @index: bit index to set
 * Return: 1 if it worked, -1 if an error ocurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int aux = (1 << index);

	if (index < 64)
	{
		*n = *n & ~aux;
		return (1);
	}
	return (-1);
}
