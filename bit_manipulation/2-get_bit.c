#include "main.h"
/**
 * get_bit - returns the value of a bit corresponding with index given
 * @n: number
 * @index: bit index
 * Return: value of bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int count = 0;
	unsigned long int n_aux;

	while (n_aux >> 1 > 0)
	{
		count++;
		n_aux = n_aux >> 1;
	}
	if (index > count)
		return (-1);
	n_aux = 1 << index;
	if ((n & n_aux) == n_aux)
		return (1);
	return (0);
}
